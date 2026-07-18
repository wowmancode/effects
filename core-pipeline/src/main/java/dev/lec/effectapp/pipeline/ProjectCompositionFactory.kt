package dev.lec.effectapp.pipeline

import android.graphics.Bitmap
import android.graphics.Matrix
import android.net.Uri
import androidx.annotation.OptIn
import androidx.media3.common.C
import androidx.media3.common.Effect
import androidx.media3.common.MediaItem
import androidx.media3.common.OverlaySettings
import androidx.media3.common.VideoCompositorSettings
import androidx.media3.common.util.Size
import androidx.media3.common.util.UnstableApi
import androidx.media3.effect.BitmapOverlay
import androidx.media3.effect.MatrixTransformation
import androidx.media3.effect.OverlayEffect
import androidx.media3.effect.Presentation
import androidx.media3.effect.StaticOverlaySettings
import androidx.media3.effect.TextureOverlay
import androidx.media3.transformer.Composition
import com.google.common.collect.ImmutableList
import androidx.media3.transformer.EditedMediaItem
import androidx.media3.transformer.EditedMediaItemSequence
import androidx.media3.transformer.Effects
import dev.lec.effectapp.effects.DEFAULT_VIDEO_PLUGIN_SOURCE
import dev.lec.effectapp.effects.displacementMapMediaEffect
import dev.lec.effectapp.effects.EffectRegistry
import dev.lec.effectapp.effects.audioProcessorFor
import dev.lec.effectapp.effects.customLutMediaEffect
import dev.lec.effectapp.effects.videoPluginEffect
import dev.lec.effectapp.model.Clip
import dev.lec.effectapp.model.EditProject
import dev.lec.effectapp.model.Overlay
import dev.lec.effectapp.model.TimelineSegment
import kotlin.math.ceil
import kotlin.math.max
import kotlin.math.roundToInt

@OptIn(UnstableApi::class)
object ProjectCompositionFactory {
    private const val MIN_REVERSE_SLICE_MS = 80L
    private const val MAX_REVERSE_SLICES = 600L

    fun create(
        project: EditProject,
        resolveBitmap: (String) -> Bitmap? = { null },
        targetFrameRate: Int? = null,
        overlayAspectRatio: Float? = null,
        durationAnchorMs: Long? = null,
    ): Composition {
        require(project.clips.isNotEmpty()) { "A project needs at least one clip" }
        val hasReverse = project.clips.any { it.reversesVideo() || it.reversesAudio() }
        val hasKeyframes = project.clips.any { clip -> (clip.effectSegments + clip.audioSegments).any { it.keyframes.isNotEmpty() } }
        val baseSequences = if (!hasReverse && !hasKeyframes) {
            listOf(EditedMediaItemSequence.withAudioAndVideoFrom(project.clips.map { editedItem(it, resolveBitmap, targetFrameRate) }))
        } else {
            val videoItems = project.clips.flatMap { clip ->
                sourceSlices(clip, clip.reversesVideo(), clip.effectSegments).map { slice ->
                    editedItem(clip, slice, includeVideo = true, includeAudio = false, resolveBitmap = resolveBitmap, targetFrameRate = targetFrameRate)
                }
            }
            val audioItems = project.clips.flatMap { clip ->
                // Slice audio only for its own keyframes/reverse, so video keyframes don't chop the audio.
                sourceSlices(clip, clip.reversesAudio(), clip.audioSegments).map { slice ->
                    editedItem(clip, slice, includeVideo = false, includeAudio = true, resolveBitmap = resolveBitmap, targetFrameRate = targetFrameRate)
                }
            }
            listOf(
                EditedMediaItemSequence.withVideoFrom(videoItems),
                EditedMediaItemSequence.withAudioFrom(audioItems),
            )
        }

        val durationAnchorSequences = durationAnchorMs?.takeIf { it > 0 }?.let { durationMs ->
            listOf(
                EditedMediaItemSequence.Builder(setOf(C.TRACK_TYPE_AUDIO))
                    .addGap(durationMs * 1_000)
                    .build(),
            )
        } ?: emptyList()
        val ihtxPresentationSize = overlayAspectRatio?.let(::createIhtxPresentationSize)
        val videoOverlays = videoOverlayTracks(project)
        if (videoOverlays.isEmpty()) return Composition.Builder(baseSequences + durationAnchorSequences).build()
        val overlaySequences = videoOverlays.map { videoOverlaySequence(it, project.durationMs, targetFrameRate, ihtxPresentationSize) }
        val overlayAudioSequences = videoOverlays.filter { it.overlay.includeAudio }
            .map { audioOverlaySequence(it, project.durationMs) }
        return Composition.Builder(overlaySequences + overlayAudioSequences + baseSequences + durationAnchorSequences)
            .setVideoCompositorSettings(OverlayVideoCompositorSettings(videoOverlays, ihtxPresentationSize))
            .build()
    }

    fun videoEffects(
        clip: Clip,
        timeMs: Long = 0,
        resolveBitmap: (String) -> Bitmap? = { null },
        includeVideoOverlayPosters: Boolean = true,
        waitForVideoMapFrames: Boolean = false,
    ): List<Effect> {
        val result = mutableListOf<Effect>()
        val transform = clip.transform
        if (transform.scale != 1f || transform.rotationDegrees != 0f || transform.offsetX != 0f || transform.offsetY != 0f) {
            result += object : MatrixTransformation {
                override fun getMatrix(presentationTimeUs: Long): Matrix = Matrix().apply {
                    setScale(transform.scale, transform.scale)
                    postRotate(transform.rotationDegrees)
                    postTranslate(transform.offsetX, transform.offsetY)
                }
            }
        }
        // Visual effects are deliberately clip-wide. List order is stack order and is unbounded.
        clip.effectSegments.filter { it.enabled }.forEach { segment ->
            val mediaEffect = if (segment.effectId == "plugin_video") {
                videoPluginEffect(
                    segment.stringParams["source"] ?: DEFAULT_VIDEO_PLUGIN_SOURCE,
                    segment.paramsAt(timeMs),
                )
            } else if (segment.effectId == "custom_lut") {
                customLutMediaEffect(segment.stringParams["lut_uri"], segment.paramsAt(timeMs)["mix"] ?: 1f)
            } else if (segment.effectId == "displacement_map") {
                displacementMapMediaEffect(
                    segment.stringParams["map_uri"],
                    segment.paramsAt(timeMs),
                    waitForVideoMapFrames,
                )
            } else {
                EffectRegistry.byId(segment.effectId)?.toMediaEffect(segment.paramsAt(timeMs))
            }
            mediaEffect?.let(result::add)
        }
        // Overlays composite last so they sit on top of the processed image.
        overlayEffect(clip, resolveBitmap, includeVideoOverlayPosters)?.let(result::add)
        return result
    }

    private fun overlayEffect(clip: Clip, resolveBitmap: (String) -> Bitmap?, includeVideoPosters: Boolean): Effect? {
        if (clip.overlays.isEmpty()) return null
        val overlays: List<TextureOverlay> = clip.overlays.asReversed().mapNotNull { overlay ->
            if (overlay.isVideo && !includeVideoPosters) return@mapNotNull null
            val bitmap = resolveBitmap(overlay.sourceUri) ?: return@mapNotNull null
            val endMs = if (overlay.endMs <= overlay.startMs) clip.durationMs else overlay.endMs
            val shown = StaticOverlaySettings.Builder()
                .setAlphaScale(overlay.alpha.coerceIn(0f, 1f))
                .setScale(overlay.scale.coerceAtLeast(0.01f), overlay.scale.coerceAtLeast(0.01f))
                .setBackgroundFrameAnchor(overlay.offsetX.coerceIn(-1f, 1f), overlay.offsetY.coerceIn(-1f, 1f))
                .build()
            TimedBitmapOverlay(bitmap, overlay.startMs * 1_000, endMs * 1_000, shown)
        }
        if (overlays.isEmpty()) return null
        return OverlayEffect(ImmutableList.copyOf(overlays))
    }

    fun previewVideoEffects(clip: Clip, timeMs: Long = 0, resolveBitmap: (String) -> Bitmap? = { null }): List<Effect> = buildList {
        add(Presentation.createForHeight(540))
        addAll(videoEffects(clip, timeMs, resolveBitmap))
    }

    private fun editedItem(clip: Clip, resolveBitmap: (String) -> Bitmap?, targetFrameRate: Int?): EditedMediaItem =
        editedItem(
            clip = clip,
            slice = SourceSlice(0, clip.durationMs),
            includeVideo = true,
            includeAudio = true,
            resolveBitmap = resolveBitmap,
            targetFrameRate = targetFrameRate,
        )

    private fun editedItem(
        clip: Clip,
        slice: SourceSlice,
        includeVideo: Boolean,
        includeAudio: Boolean,
        resolveBitmap: (String) -> Bitmap?,
        targetFrameRate: Int?,
    ): EditedMediaItem {
        val mediaItem = MediaItem.Builder()
            .setUri(Uri.parse(clip.sourceUri))
            .setClippingConfiguration(
                MediaItem.ClippingConfiguration.Builder()
                    .setStartPositionMs(clip.trimStartMs + slice.startMs)
                    .setEndPositionMs(clip.trimStartMs + slice.endMs)
                    .build(),
            )
            .build()
        val audioProcessors = if (includeAudio) {
            clip.audioSegments
                .filter { it.enabled && it.effectId != "reverse_audio" }
                .mapNotNull { audioProcessorFor(it, slice.startMs) }
        } else {
            emptyList()
        }
        val effects = Effects(
            audioProcessors,
            if (includeVideo) {
                videoEffects(
                    clip,
                    slice.startMs,
                    resolveBitmap,
                    includeVideoOverlayPosters = false,
                    waitForVideoMapFrames = true,
                )
            } else emptyList(),
        )
        val builder = EditedMediaItem.Builder(mediaItem)
            .setRemoveAudio(!includeAudio)
            .setRemoveVideo(!includeVideo)
            .setEffects(effects)
        if (includeVideo && targetFrameRate != null) builder.setFrameRate(targetFrameRate)
        return builder.build()
    }

    private fun sourceSlices(clip: Clip, reversed: Boolean, segments: List<TimelineSegment>): List<SourceSlice> {
        val keyframedSegments = segments.filter { it.keyframes.isNotEmpty() }
        val keyframeTimes = keyframedSegments
            .flatMap { it.keyframes }
            .map { it.timeMs.coerceIn(0, clip.durationMs) }
            .filter { it in 1 until clip.durationMs }
            .distinct()
            .sorted()
        val interpolationTimes = if (keyframedSegments.isEmpty()) {
            emptyList()
        } else {
            val stepMs = max(50L, ceil(clip.durationMs / 600.0).toLong())
            generateSequence(stepMs) { previous -> (previous + stepMs).takeIf { it < clip.durationMs } }.toList()
        }
        val animatedTimes = (keyframeTimes + interpolationTimes).distinct().sorted()

        if (!reversed) {
            val boundaries = listOf(0L) + animatedTimes + clip.durationMs
            return boundaries.zipWithNext(::SourceSlice)
        }
        val sliceMs = max(MIN_REVERSE_SLICE_MS, ceil(clip.durationMs / MAX_REVERSE_SLICES.toDouble()).toLong())
        val slices = buildList {
            var start = 0L
            while (start < clip.durationMs) {
                val end = (start + sliceMs).coerceAtMost(clip.durationMs)
                val boundaries = listOf(start) + animatedTimes.filter { it in (start + 1) until end } + end
                addAll(boundaries.zipWithNext(::SourceSlice))
                start = end
            }
        }
        return slices.asReversed()
    }

    private fun videoOverlayTracks(project: EditProject): List<VideoOverlayTrack> = buildList {
        var clipStartMs = 0L
        project.clips.forEach { clip ->
            clip.overlays.filter(Overlay::isVideo).forEach { overlay ->
                val localStart = overlay.startMs.coerceIn(0, clip.durationMs)
                val localEnd = (if (overlay.endMs <= localStart) clip.durationMs else overlay.endMs)
                    .coerceIn(localStart, clip.durationMs)
                if (localEnd > localStart) {
                    add(
                        VideoOverlayTrack(
                            overlay = overlay,
                            globalStartMs = clipStartMs + localStart,
                            globalEndMs = clipStartMs + localEnd,
                        ),
                    )
                }
            }
            clipStartMs += clip.durationMs
        }
    }

    private fun videoOverlaySequence(track: VideoOverlayTrack, projectDurationMs: Long, targetFrameRate: Int?, ihtxPresentationSize: Size?): EditedMediaItemSequence {
        val builder = EditedMediaItemSequence.Builder(setOf(C.TRACK_TYPE_VIDEO))
        if (track.globalStartMs > 0) builder.addGap(track.globalStartMs * 1_000)

        var remainingMs = track.globalEndMs - track.globalStartMs
        val sourceDurationMs = track.overlay.sourceDurationMs.takeIf { it >= 100 } ?: remainingMs
        while (remainingMs > 0) {
            val pieceDurationMs = minOf(sourceDurationMs, remainingMs)
            val mediaItem = MediaItem.Builder()
                .setUri(Uri.parse(track.overlay.sourceUri))
                .setClippingConfiguration(
                    MediaItem.ClippingConfiguration.Builder()
                        .setStartPositionMs(0)
                        .setEndPositionMs(pieceDurationMs)
                        .build(),
                )
                .build()
            val videoEffects = if (track.overlay.ihtxLayout && ihtxPresentationSize != null) {
                listOf(Presentation.createForWidthAndHeight(ihtxPresentationSize.width, ihtxPresentationSize.height, Presentation.LAYOUT_SCALE_TO_FIT_WITH_CROP))
            } else {
                emptyList()
            }
            val itemBuilder = EditedMediaItem.Builder(mediaItem)
                .setRemoveAudio(true)
                .setEffects(Effects(emptyList(), videoEffects))
            if (targetFrameRate != null) itemBuilder.setFrameRate(targetFrameRate)
            builder.addItem(itemBuilder.build())
            remainingMs -= pieceDurationMs
        }

        val trailingGapMs = projectDurationMs - track.globalEndMs
        if (trailingGapMs > 0) builder.addGap(trailingGapMs * 1_000)
        return builder.build()
    }

    private fun audioOverlaySequence(track: VideoOverlayTrack, projectDurationMs: Long): EditedMediaItemSequence {
        val builder = EditedMediaItemSequence.Builder(setOf(C.TRACK_TYPE_AUDIO))
        if (track.globalStartMs > 0) builder.addGap(track.globalStartMs * 1_000)
        var remainingMs = track.globalEndMs - track.globalStartMs
        val sourceDurationMs = track.overlay.sourceDurationMs.takeIf { it >= 100 } ?: remainingMs
        while (remainingMs > 0) {
            val pieceDurationMs = minOf(sourceDurationMs, remainingMs)
            val mediaItem = MediaItem.Builder()
                .setUri(Uri.parse(track.overlay.sourceUri))
                .setClippingConfiguration(
                    MediaItem.ClippingConfiguration.Builder()
                        .setStartPositionMs(0)
                        .setEndPositionMs(pieceDurationMs)
                        .build(),
                )
                .build()
            builder.addItem(EditedMediaItem.Builder(mediaItem).setRemoveVideo(true).build())
            remainingMs -= pieceDurationMs
        }
        val trailingGapMs = projectDurationMs - track.globalEndMs
        if (trailingGapMs > 0) builder.addGap(trailingGapMs * 1_000)
        return builder.build()
    }

    private class OverlayVideoCompositorSettings(
        private val overlays: List<VideoOverlayTrack>,
        private val ihtxPresentationSize: Size?,
    ) : VideoCompositorSettings {
        private var inputSizes: List<Size> = emptyList()
        private var outputSize: Size? = null

        override fun getOutputSize(inputSizes: List<Size>): Size {
            this.inputSizes = inputSizes
            return inputSizes.getOrElse(overlays.size) { inputSizes.first() }.also { outputSize = it }
        }

        override fun getOverlaySettings(inputId: Int, presentationTimeUs: Long): OverlaySettings {
            val track = overlays.getOrNull(inputId) ?: return StaticOverlaySettings.Builder().build()
            val visible = presentationTimeUs in (track.globalStartMs * 1_000) until (track.globalEndMs * 1_000)
            val scale = track.overlay.scale.coerceAtLeast(0.01f)
            val inputSize = if (track.overlay.ihtxLayout) ihtxPresentationSize else inputSizes.getOrNull(inputId)
            val frameSize = outputSize
            val scaleX = if (track.overlay.ihtxLayout && inputSize != null && frameSize != null) {
                scale * frameSize.width.toFloat() / inputSize.width.toFloat()
            } else scale
            val scaleY = if (track.overlay.ihtxLayout && inputSize != null && frameSize != null) {
                scale * frameSize.height.toFloat() / inputSize.height.toFloat()
            } else scale
            return StaticOverlaySettings.Builder()
                .setAlphaScale(if (visible) track.overlay.alpha.coerceIn(0f, 1f) else 0f)
                .setScale(scaleX, scaleY)
                .setBackgroundFrameAnchor(
                    track.overlay.offsetX.coerceIn(-1f, 1f),
                    track.overlay.offsetY.coerceIn(-1f, 1f),
                )
                .build()
        }
    }

    private fun createIhtxPresentationSize(aspectRatio: Float): Size {
        val safeAspect = aspectRatio.coerceIn(0.1f, 10f)
        fun even(value: Int): Int = ((value.coerceAtLeast(2) + 1) / 2) * 2
        return if (safeAspect >= 1f) {
            Size(512, even((512f / safeAspect).roundToInt()))
        } else {
            Size(even((512f * safeAspect).roundToInt()), 512)
        }
    }

    private data class VideoOverlayTrack(
        val overlay: Overlay,
        val globalStartMs: Long,
        val globalEndMs: Long,
    )

    private fun Clip.reversesVideo(): Boolean =
        effectSegments.any { it.enabled && it.effectId == "reverse_video" }

    private fun Clip.reversesAudio(): Boolean =
        audioSegments.any { it.enabled && it.effectId == "reverse_audio" }

    private data class SourceSlice(val startMs: Long, val endMs: Long)

    /** A bitmap overlay that is only visible within [startUs, endUs); hidden (alpha 0) elsewhere. */
    private class TimedBitmapOverlay(
        private val bitmap: Bitmap,
        private val startUs: Long,
        private val endUs: Long,
        private val shown: StaticOverlaySettings,
    ) : BitmapOverlay() {
        override fun getBitmap(presentationTimeUs: Long): Bitmap = bitmap

        override fun getOverlaySettings(presentationTimeUs: Long): StaticOverlaySettings =
            if (presentationTimeUs in startUs until endUs) shown else HIDDEN

        private companion object {
            val HIDDEN: StaticOverlaySettings = StaticOverlaySettings.Builder().setAlphaScale(0f).build()
        }
    }
}
