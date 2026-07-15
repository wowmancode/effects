package dev.lec.effectapp.pipeline

import android.graphics.Bitmap
import android.graphics.Matrix
import android.net.Uri
import androidx.annotation.OptIn
import androidx.media3.common.Effect
import androidx.media3.common.MediaItem
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
import dev.lec.effectapp.effects.EffectRegistry
import dev.lec.effectapp.effects.audioProcessorFor
import dev.lec.effectapp.effects.videoPluginEffect
import dev.lec.effectapp.model.Clip
import dev.lec.effectapp.model.EditProject
import kotlin.math.ceil
import kotlin.math.max

@OptIn(UnstableApi::class)
object ProjectCompositionFactory {
    private const val MIN_REVERSE_SLICE_MS = 80L
    private const val MAX_REVERSE_SLICES = 600L

    fun create(project: EditProject, resolveBitmap: (String) -> Bitmap? = { null }): Composition {
        require(project.clips.isNotEmpty()) { "A project needs at least one clip" }
        val hasReverse = project.clips.any { it.reversesVideo() || it.reversesAudio() }
        val hasKeyframes = project.clips.any { clip -> (clip.effectSegments + clip.audioSegments).any { it.keyframes.isNotEmpty() } }
        if (!hasReverse && !hasKeyframes) {
            return Composition.Builder(
                listOf(EditedMediaItemSequence.withAudioAndVideoFrom(project.clips.map { editedItem(it, resolveBitmap) })),
            ).build()
        }

        val videoItems = project.clips.flatMap { clip ->
            sourceSlices(clip, clip.reversesVideo()).map { slice ->
                editedItem(clip, slice, includeVideo = true, includeAudio = false, resolveBitmap = resolveBitmap)
            }
        }
        val audioItems = project.clips.flatMap { clip ->
            sourceSlices(clip, clip.reversesAudio()).map { slice ->
                editedItem(clip, slice, includeVideo = false, includeAudio = true, resolveBitmap = resolveBitmap)
            }
        }
        return Composition.Builder(
            listOf(
                EditedMediaItemSequence.withVideoFrom(videoItems),
                EditedMediaItemSequence.withAudioFrom(audioItems),
            ),
        ).build()
    }

    fun videoEffects(clip: Clip, timeMs: Long = 0, resolveBitmap: (String) -> Bitmap? = { null }): List<Effect> {
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
            } else {
                EffectRegistry.byId(segment.effectId)?.toMediaEffect(segment.paramsAt(timeMs))
            }
            mediaEffect?.let(result::add)
        }
        // Overlays composite last so they sit on top of the processed image.
        overlayEffect(clip, resolveBitmap)?.let(result::add)
        return result
    }

    private fun overlayEffect(clip: Clip, resolveBitmap: (String) -> Bitmap?): Effect? {
        if (clip.overlays.isEmpty()) return null
        val overlays: List<TextureOverlay> = clip.overlays.mapNotNull { overlay ->
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

    private fun editedItem(clip: Clip, resolveBitmap: (String) -> Bitmap?): EditedMediaItem =
        editedItem(
            clip = clip,
            slice = SourceSlice(0, clip.durationMs),
            includeVideo = true,
            includeAudio = true,
            resolveBitmap = resolveBitmap,
        )

    private fun editedItem(
        clip: Clip,
        slice: SourceSlice,
        includeVideo: Boolean,
        includeAudio: Boolean,
        resolveBitmap: (String) -> Bitmap?,
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
        val effects = Effects(audioProcessors, if (includeVideo) videoEffects(clip, slice.startMs, resolveBitmap) else emptyList())
        return EditedMediaItem.Builder(mediaItem)
            .setRemoveAudio(!includeAudio)
            .setRemoveVideo(!includeVideo)
            .setEffects(effects)
            .build()
    }

    private fun sourceSlices(clip: Clip, reversed: Boolean): List<SourceSlice> {
        val keyframedSegments = (clip.effectSegments + clip.audioSegments).filter { it.keyframes.isNotEmpty() }
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
