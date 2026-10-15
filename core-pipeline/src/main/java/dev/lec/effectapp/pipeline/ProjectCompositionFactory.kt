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
import androidx.media3.common.audio.SpeedProvider
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
import dev.lec.effectapp.effects.PLUGIN_LANGUAGE_C_STYLE
import dev.lec.effectapp.effects.displacementMapMediaEffect
import dev.lec.effectapp.effects.EffectRegistry
import dev.lec.effectapp.effects.TimedFramePlacement
import dev.lec.effectapp.effects.audioProcessorFor
import dev.lec.effectapp.effects.customLutMediaEffect
import dev.lec.effectapp.effects.videoPluginEffect
import dev.lec.effectapp.model.Clip
import dev.lec.effectapp.model.EditProject
import dev.lec.effectapp.model.Overlay
import dev.lec.effectapp.model.SourceOverride
import dev.lec.effectapp.model.TimelineSegment
import dev.lec.effectapp.model.TransformSettings
import kotlin.math.ceil
import kotlin.math.max
import kotlin.math.roundToInt
import kotlin.math.roundToLong

@OptIn(UnstableApi::class)
object ProjectCompositionFactory {
    private const val MIN_REVERSE_SLICE_MS = 80L
    private const val MAX_REVERSE_SLICES = 600L

    /** Size every frame-filling overlay is normalised to before it is stretched over the frame. */
    private val FILL_FRAME_SIZE = Size(1280, 720)

    private fun constantSpeed(speed: Float): SpeedProvider = object : SpeedProvider {
        override fun getSpeed(timeUs: Long): Float = speed

        override fun getNextSpeedChangeTimeUs(timeUs: Long): Long = C.TIME_UNSET
    }

    /** Stretches frame-filling overlays to FILL_FRAME_SIZE; shared so items compare equal. */
    private val FILL_FRAME_PRESENTATION: Presentation =
        Presentation.createForWidthAndHeight(FILL_FRAME_SIZE.width, FILL_FRAME_SIZE.height, Presentation.LAYOUT_STRETCH_TO_FIT)

    private val fitPresentations = java.util.concurrent.ConcurrentHashMap<Size, Presentation>()

    private fun fitPresentation(size: Size): Presentation = fitPresentations.getOrPut(size) {
        Presentation.createForWidthAndHeight(size.width, size.height, Presentation.LAYOUT_SCALE_TO_FIT)
    }

    private fun TimelineSegment.isPlacement(): Boolean = effectId == "frame_place"

    /** A stretch of a sequence ([startMs, endMs) in project time) and the effects placed on it. */
    private class PlacedRange(val startMs: Long, val endMs: Long, val segments: List<TimelineSegment>)

    /**
     * One time-driven Crop & place covering every range that has one, or null when none does.
     * Segment keyframes are local to their range, so each span keeps its own origin.
     */
    private fun timedPlacement(ranges: List<PlacedRange>): TimedFramePlacement? {
        val spans = ranges.mapNotNull { range ->
            val segment = range.segments.firstOrNull { it.enabled && it.isPlacement() } ?: return@mapNotNull null
            TimedFramePlacement.Span(range.startMs * 1_000, range.endMs * 1_000, range.startMs) { localMs ->
                segment.paramsAt(localMs)
            }
        }
        return if (spans.isEmpty()) null else TimedFramePlacement(spans)
    }

    fun create(
        project: EditProject,
        resolveBitmap: (String) -> Bitmap? = { null },
        targetFrameRate: Int? = null,
        overlayAspectRatio: Float? = null,
        durationAnchorMs: Long? = null,
        ihtxOutputSize: Size? = null,
        outputPresentationSize: Size? = null,
        muteBaseAudio: Boolean = false,
    ): Composition {
        require(project.clips.isNotEmpty()) { "A project needs at least one clip" }
        val hasReverse = project.clips.any { it.reversesVideo() || it.reversesAudio() }
        // Crop & place on the clip row runs as one time-driven effect over the whole row, so its
        // keyframes don't cut clips into slices (each slice would restart a decoder and GL chain).
        val basePlacement = timedPlacement(project.clips.runningFold(0L) { start, clip -> start + clip.durationMs }
            .zip(project.clips) { startMs, clip -> PlacedRange(startMs, startMs + clip.durationMs, clip.effectSegments) })
        val hasKeyframes = project.clips.any { clip ->
            (clip.effectSegments + clip.audioSegments).any { it.keyframes.isNotEmpty() && !(basePlacement != null && it.isPlacement()) }
        }
        // A clip that reads its sound from elsewhere (reversed, or offset in IHTX passes) needs
        // picture and sound in separate sequences.
        val hasOverrides = project.clips.any { it.videoOverride != null || it.audioOverride != null }
        val baseSequences = if (!hasReverse && !hasKeyframes && !hasOverrides) {
            val items = project.clips.map { editedItem(it, resolveBitmap, targetFrameRate, outputPresentationSize, includeAudio = !muteBaseAudio, placement = basePlacement) }
            listOf(
                if (muteBaseAudio) EditedMediaItemSequence.withVideoFrom(items)
                else EditedMediaItemSequence.withAudioAndVideoFrom(items),
            )
        } else {
            // A pre-reversed source (ReverseMediaCache) plays forward; without one, reverse falls
            // back to one-frame slices in reverse order.
            val videoItems = project.clips.flatMap { clip ->
                val source = clip.videoOverride
                val sliceSegments = clip.effectSegments.filterNot { basePlacement != null && it.isPlacement() }
                sourceSlices(clip, source == null && clip.reversesVideo(), sliceSegments, targetFrameRate).map { slice ->
                    editedItem(clip, slice, includeVideo = true, includeAudio = false, resolveBitmap = resolveBitmap, targetFrameRate = targetFrameRate, outputPresentationSize = outputPresentationSize, source = source, placement = basePlacement)
                }
            }
            val audioItems = project.clips.flatMap { clip ->
                // Slice audio only for its own keyframes/reverse, so video keyframes don't chop the audio.
                val source = clip.audioOverride
                sourceSlices(clip, source == null && clip.reversesAudio(), clip.audioSegments, targetFrameRate).map { slice ->
                    editedItem(clip, slice, includeVideo = false, includeAudio = true, resolveBitmap = resolveBitmap, targetFrameRate = targetFrameRate, outputPresentationSize = outputPresentationSize, source = source)
                }
            }
            buildList {
                add(EditedMediaItemSequence.withVideoFrom(videoItems))
                if (!muteBaseAudio) add(EditedMediaItemSequence.withAudioFrom(audioItems))
            }
        }

        val durationAnchorSequences = durationAnchorMs?.takeIf { it > 0 }?.let { durationMs ->
            listOf(
                EditedMediaItemSequence.Builder(setOf(C.TRACK_TYPE_AUDIO))
                    .addGap(durationMs * 1_000)
                    .build(),
            )
        } ?: emptyList()
        val ihtxPresentationSize = overlayAspectRatio?.let(::createIhtxPresentationSize)
        val overlayTracks = overlayTracks(project)
        // Pictures: one sequence (one decoder) per lane, top lane first.
        val videoLanes = lanes(overlayTracks.filterNot { it.overlay.audioOnly })
        // Sound: overlay videos with their audio switched on, and sound-only overlays.
        val audioLanes = lanes(overlayTracks.filter { it.overlay.audioOnly || (it.overlay.isVideo && it.overlay.includeAudio) })
        if (videoLanes.isEmpty() && audioLanes.isEmpty()) {
            return Composition.Builder(baseSequences + durationAnchorSequences).build()
        }
        val overlaySequences = videoLanes.map { laneVideoSequence(it, project.durationMs, targetFrameRate, ihtxPresentationSize) }
        val overlayAudioSequences = audioLanes.map { laneAudioSequence(it, project.durationMs) }
        val builder = Composition.Builder(overlaySequences + overlayAudioSequences + baseSequences + durationAnchorSequences)
        if (videoLanes.isNotEmpty()) {
            builder.setVideoCompositorSettings(OverlayVideoCompositorSettings(videoLanes, ihtxPresentationSize, ihtxOutputSize))
        }
        return builder.build()
    }

    fun videoEffects(
        clip: Clip,
        timeMs: Long = 0,
        resolveBitmap: (String) -> Bitmap? = { null },
        includeVideoOverlayPosters: Boolean = true,
        waitForVideoMapFrames: Boolean = false,
        sharedPlacement: Effect? = null,
    ): List<Effect> {
        val result = mutableListOf<Effect>()
        val transform = clip.transform
        if (transform.scale != 1f || transform.rotationDegrees != 0f || transform.offsetX != 0f || transform.offsetY != 0f) {
            result += transformEffect(transform)
        }
        // Visual effects are deliberately clip-wide. List order is stack order and is unbounded.
        clip.effectSegments.filter { it.enabled }.forEach { segment ->
            if (sharedPlacement != null && segment.isPlacement()) return@forEach
            segmentVideoEffect(segment, timeMs, waitForVideoMapFrames)?.let(result::add)
        }
        sharedPlacement?.let(result::add)
        // Overlays composite last so they sit on top of the processed image.
        overlayEffect(clip, resolveBitmap, includeVideoOverlayPosters)?.let(result::add)
        return result
    }

    internal fun transformEffect(transform: TransformSettings): Effect = object : MatrixTransformation {
        override fun getMatrix(presentationTimeUs: Long): Matrix = Matrix().apply {
            setScale(transform.scale, transform.scale)
            postRotate(transform.rotationDegrees)
            postTranslate(transform.offsetX, transform.offsetY)
        }
    }

    internal fun segmentVideoEffect(
        segment: TimelineSegment,
        timeMs: Long,
        waitForVideoMapFrames: Boolean,
    ): Effect? = when (segment.effectId) {
        "plugin_video" -> videoPluginEffect(
            segment.stringParams["source"] ?: DEFAULT_VIDEO_PLUGIN_SOURCE,
            segment.paramsAt(timeMs),
            segment.stringParams["language"] ?: PLUGIN_LANGUAGE_C_STYLE,
        )
        "custom_lut" -> customLutMediaEffect(
            segment.stringParams["lut_uri"],
            segment.paramsAt(timeMs)["mix"] ?: 1f,
        )
        "displacement_map" -> displacementMapMediaEffect(
            segment.stringParams["map_uri"],
            segment.paramsAt(timeMs),
            waitForVideoMapFrames,
        )
        else -> EffectRegistry.byId(segment.effectId)?.toMediaEffect(segment.paramsAt(timeMs))
    }

    internal fun overlayEffect(clip: Clip, resolveBitmap: (String) -> Bitmap?, includeVideoPosters: Boolean): Effect? {
        if (clip.overlays.isEmpty()) return null
        val overlays: List<TextureOverlay> = clip.overlays.asReversed().mapNotNull { overlay ->
            if (!includeVideoPosters || overlay.audioOnly) return@mapNotNull null
            val bitmap = resolveBitmap(overlay.sourceUri) ?: return@mapNotNull null
            val endMs = if (overlay.endMs <= overlay.startMs) clip.durationMs else overlay.endMs
            TimedBitmapOverlay(bitmap, overlay, overlay.startMs * 1_000, endMs * 1_000)
        }
        if (overlays.isEmpty()) return null
        return OverlayEffect(ImmutableList.copyOf(overlays))
    }

    fun previewVideoEffects(clip: Clip, timeMs: Long = 0, resolveBitmap: (String) -> Bitmap? = { null }): List<Effect> = buildList {
        add(Presentation.createForHeight(540))
        addAll(videoEffects(clip, timeMs, resolveBitmap))
    }

    private fun editedItem(
        clip: Clip,
        resolveBitmap: (String) -> Bitmap?,
        targetFrameRate: Int?,
        outputPresentationSize: Size?,
        includeAudio: Boolean = true,
        placement: Effect? = null,
    ): EditedMediaItem =
        editedItem(
            clip = clip,
            slice = SourceSlice(0, clip.durationMs),
            includeVideo = true,
            includeAudio = includeAudio,
            resolveBitmap = resolveBitmap,
            targetFrameRate = targetFrameRate,
            outputPresentationSize = outputPresentationSize,
            placement = placement,
        )

    private fun editedItem(
        clip: Clip,
        slice: SourceSlice,
        includeVideo: Boolean,
        includeAudio: Boolean,
        resolveBitmap: (String) -> Bitmap?,
        targetFrameRate: Int?,
        outputPresentationSize: Size?,
        source: SourceOverride? = null,
        placement: Effect? = null,
    ): EditedMediaItem {
        // Reversed media is rendered at normal speed; otherwise the clip reads speed× as much source.
        val speed = if (source == null) clip.playbackSpeed else 1f
        val startPositionMs = source?.let { it.startMs + slice.startMs } ?: clip.sourceMsAt(slice.startMs)
        val endPositionMs = source?.let { it.startMs + slice.endMs } ?: clip.sourceMsAt(slice.endMs)
        val mediaItem = MediaItem.Builder()
            .setUri(Uri.parse(source?.uri ?: clip.sourceUri))
            .setClippingConfiguration(
                MediaItem.ClippingConfiguration.Builder()
                    .setStartPositionMs(startPositionMs)
                    .setEndPositionMs(endPositionMs.coerceAtLeast(startPositionMs + 1))
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
            if (includeVideo) buildList<Effect> {
                addAll(videoEffects(
                    clip,
                    slice.startMs,
                    resolveBitmap,
                    includeVideoOverlayPosters = false,
                    waitForVideoMapFrames = true,
                    sharedPlacement = placement,
                ))
                // One shared instance per size: Media3 compares effect lists between items and
                // rebuilds the whole GL chain when they differ (Presentation has no equals).
                outputPresentationSize?.let { size -> add(fitPresentation(size)) }
            } else emptyList(),
        )
        val builder = EditedMediaItem.Builder(mediaItem)
            .setRemoveAudio(!includeAudio)
            .setRemoveVideo(!includeVideo)
            .setEffects(effects)
        if (speed != 1f) builder.setSpeed(constantSpeed(speed))
        if (includeVideo && targetFrameRate != null) builder.setFrameRate(targetFrameRate)
        return builder.build()
    }

    private fun sourceSlices(clip: Clip, reversed: Boolean, segments: List<TimelineSegment>, targetFrameRate: Int?): List<SourceSlice> {
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
        val sliceMs = ceil(1_000.0 / (targetFrameRate ?: 30).coerceIn(1, 120)).toLong().coerceAtLeast(1L)
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

    private fun overlayTracks(project: EditProject): List<VideoOverlayTrack> = buildList {
        var clipStartMs = 0L
        project.clips.forEach { clip ->
            clip.overlays.forEach { overlay ->
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

    /**
     * Groups overlays into lanes, each played as one sequence. Overlays with the same lane number
     * share one (split further only if two of them overlap); lane 0 comes first, so it's drawn on
     * top. Overlays without a lane each get their own, after the numbered ones, in project order.
     */
    private fun lanes(tracks: List<VideoOverlayTrack>): List<List<VideoOverlayTrack>> {
        val pooled = tracks.filter { it.overlay.lane >= 0 }
            .groupBy { it.overlay.lane }
            .toSortedMap()
            .values
            .flatMap { group ->
                val subLanes = mutableListOf<MutableList<VideoOverlayTrack>>()
                group.sortedBy { it.globalStartMs }.forEach { track ->
                    val free = subLanes.firstOrNull { it.last().globalEndMs <= track.globalStartMs }
                    if (free != null) free += track else subLanes += mutableListOf(track)
                }
                subLanes
            }
        val single = tracks.filter { it.overlay.lane < 0 }.map { listOf(it) }
        return pooled + single
    }

    /** One stretch of an overlay: [startMs, endMs) local to the overlay, read from [sourceStartMs]. */
    private data class OverlayPiece(val startMs: Long, val endMs: Long, val sourceStartMs: Long)

    /**
     * Cuts an overlay into pieces at loop points (a source shorter than the overlay restarts from
     * its beginning, as before) and, when its effects are keyframed, at animation steps so each
     * piece can carry its own effect values.
     */
    private fun overlayPieces(track: VideoOverlayTrack, playsSource: Boolean, segments: List<TimelineSegment>): List<OverlayPiece> {
        val overlay = track.overlay
        val durationMs = track.globalEndMs - track.globalStartMs
        val speed = overlay.playbackSpeed.toDouble()
        val keyframed = segments.any { it.enabled && it.keyframes.isNotEmpty() }
        val boundaries = sortedSetOf(0L, durationMs)
        if (keyframed) {
            segments.flatMap { it.keyframes }.map { it.timeMs }.filter { it in 1 until durationMs }.forEach { boundaries += it }
            val stepMs = max(40L, ceil(durationMs / 300.0).toLong())
            var t = stepMs
            while (t < durationMs) { boundaries += t; t += stepMs }
        }
        val sourceDurationMs = overlay.sourceDurationMs.takeIf { playsSource && it >= 100 }
        val pieces = mutableListOf<OverlayPiece>()
        // The overlay may begin part-way into its clip-local range (export start trimming).
        val first = overlay.sourceStartMs + overlay.sourceOffsetMs
        boundaries.toList().zipWithNext().forEach { (from, to) ->
            var t = from
            while (t < to) {
                val raw = first + (t * speed).roundToLong()
                val source = if (sourceDurationMs != null) raw.mod(sourceDurationMs) else raw
                var end = to
                if (sourceDurationMs != null) {
                    // Where the source runs out and loops, in overlay time.
                    val untilLoop = ((sourceDurationMs - source) / speed).roundToLong().coerceAtLeast(1)
                    end = minOf(to, t + untilLoop)
                }
                pieces += OverlayPiece(t, end, source)
                t = end
            }
        }
        return pieces
    }

    /**
     * Joins consecutive pieces of a lane that are really one continuous stretch of the same media
     * (layers are cut wherever the clip row cuts): same file, speed and look, the second starting
     * where the first stops in the source. Fewer items means fewer decoder restarts in export.
     */
    private fun mergeContiguous(lane: List<VideoOverlayTrack>, ignorePlacement: Boolean): List<VideoOverlayTrack> {
        val result = mutableListOf<VideoOverlayTrack>()
        lane.sortedBy { it.globalStartMs }.forEach { next ->
            val previous = result.lastOrNull()
            if (previous != null && continues(previous, next, ignorePlacement)) {
                val joinedMs = next.globalEndMs - next.globalStartMs
                result[result.lastIndex] = VideoOverlayTrack(
                    overlay = previous.overlay.copy(endMs = previous.overlay.endMs + joinedMs),
                    globalStartMs = previous.globalStartMs,
                    globalEndMs = next.globalEndMs,
                )
            } else {
                result += next
            }
        }
        return result
    }

    private fun continues(a: VideoOverlayTrack, b: VideoOverlayTrack, ignorePlacement: Boolean): Boolean {
        val x = a.overlay
        val y = b.overlay
        if (a.globalEndMs != b.globalStartMs) return false
        if (x.sourceUri != y.sourceUri || x.isVideo != y.isVideo || x.audioOnly != y.audioOnly) return false
        if (x.fillFrame != y.fillFrame || x.includeAudio != y.includeAudio || x.ihtxLayout != y.ihtxLayout) return false
        if (x.playbackSpeed != y.playbackSpeed || x.sourceDurationMs != y.sourceDurationMs) return false
        if (x.keyframes.isNotEmpty() || y.keyframes.isNotEmpty()) return false
        if (x.alpha != y.alpha || x.scale != y.scale || x.offsetX != y.offsetX || x.offsetY != y.offsetY) return false
        if (x.isVideo || x.audioOnly) {
            val expected = x.sourceStartMs + x.sourceOffsetMs +
                ((a.globalEndMs - a.globalStartMs) * x.playbackSpeed.toDouble()).roundToLong()
            if (kotlin.math.abs(y.sourceStartMs + y.sourceOffsetMs - expected) > 3) return false
        }
        return sameLook(x.effectSegments, y.effectSegments, ignorePlacement) &&
            sameLook(x.audioSegments, y.audioSegments, ignorePlacement)
    }

    /** Same enabled effects with the same static values (keyframed effects never match). */
    private fun sameLook(a: List<TimelineSegment>, b: List<TimelineSegment>, ignorePlacement: Boolean): Boolean {
        fun key(list: List<TimelineSegment>): List<Triple<String, Map<String, Float>, Map<String, String>>>? {
            val kept = list.filter { it.enabled && !(ignorePlacement && it.isPlacement()) }
            if (kept.any { it.keyframes.isNotEmpty() }) return null
            return kept.map { Triple(it.effectId, it.params, it.stringParams) }
        }
        val left = key(a) ?: return false
        val right = key(b) ?: return false
        return left == right
    }

    private fun laneVideoSequence(
        lane: List<VideoOverlayTrack>,
        projectDurationMs: Long,
        targetFrameRate: Int?,
        ihtxPresentationSize: Size?,
    ): EditedMediaItemSequence {
        val builder = EditedMediaItemSequence.Builder(setOf(C.TRACK_TYPE_VIDEO))
        // One time-driven Crop & place for the whole lane (built from the unmerged pieces, whose
        // keyframes are local to each piece), then pieces that only split at clip cuts are joined.
        val placement = timedPlacement(lane.map { PlacedRange(it.globalStartMs, it.globalEndMs, it.overlay.effectSegments) })
        var cursorMs = 0L
        mergeContiguous(lane, ignorePlacement = placement != null).forEach { track ->
            if (track.globalStartMs > cursorMs) builder.addGap((track.globalStartMs - cursorMs) * 1_000)
            val overlay = track.overlay
            val segments = overlay.effectSegments.filter { it.enabled && !(placement != null && it.isPlacement()) }
            overlayPieces(track, overlay.isVideo, segments).forEach { piece ->
                val effects = Effects(emptyList(), overlayTrackEffects(track, piece.startMs, ihtxPresentationSize, placement))
                val pieceMs = piece.endMs - piece.startMs
                val item = if (!overlay.isVideo) {
                    // The image duration on the MediaItem is what routes it to Media3's image loader;
                    // without it the image is opened as a video with no duration, which only works
                    // as the last item of a sequence.
                    val imageItem = MediaItem.Builder()
                        .setUri(Uri.parse(overlay.sourceUri))
                        .setImageDurationMs(pieceMs.coerceAtLeast(1))
                        .build()
                    EditedMediaItem.Builder(imageItem)
                        .setDurationUs(pieceMs * 1_000)
                        .setFrameRate(targetFrameRate ?: 30)
                        .setRemoveAudio(true)
                        .setEffects(effects)
                        .build()
                } else {
                    val speed = overlay.playbackSpeed
                    val mediaItem = MediaItem.Builder()
                        .setUri(Uri.parse(overlay.sourceUri))
                        .setClippingConfiguration(
                            MediaItem.ClippingConfiguration.Builder()
                                .setStartPositionMs(piece.sourceStartMs)
                                .setEndPositionMs(piece.sourceStartMs + (pieceMs * speed.toDouble()).roundToLong().coerceAtLeast(1))
                                .build(),
                        )
                        .build()
                    val itemBuilder = EditedMediaItem.Builder(mediaItem)
                        .setRemoveAudio(true)
                        .setEffects(effects)
                    if (speed != 1f) itemBuilder.setSpeed(constantSpeed(speed))
                    if (targetFrameRate != null) itemBuilder.setFrameRate(targetFrameRate)
                    itemBuilder.build()
                }
                builder.addItem(item)
            }
            cursorMs = track.globalEndMs
        }
        if (projectDurationMs > cursorMs) builder.addGap((projectDurationMs - cursorMs) * 1_000)
        return builder.build()
    }

    /** The overlay's video effects at [localMs] into it, then any layout normalisation. */
    private fun overlayTrackEffects(
        track: VideoOverlayTrack,
        localMs: Long,
        ihtxPresentationSize: Size?,
        placement: Effect? = null,
    ): List<Effect> = buildList {
        if (track.overlay.ihtxLayout && ihtxPresentationSize != null) {
            add(Presentation.createForWidthAndHeight(
                ihtxPresentationSize.width,
                ihtxPresentationSize.height,
                Presentation.LAYOUT_SCALE_TO_FIT_WITH_CROP,
            ))
        }
        track.overlay.effectSegments.filter { it.enabled }.forEach { segment ->
            if (placement != null && segment.isPlacement()) return@forEach
            segmentVideoEffect(segment, localMs, waitForVideoMapFrames = true)?.let(::add)
        }
        placement?.let(::add)
        if (track.overlay.fillFrame) {
            // Every frame-filling overlay arrives at one known size, which the compositor then
            // stretches over the output frame (sizes can differ between items of a lane).
            add(FILL_FRAME_PRESENTATION)
        }
    }

    private fun laneAudioSequence(lane: List<VideoOverlayTrack>, projectDurationMs: Long): EditedMediaItemSequence {
        val builder = EditedMediaItemSequence.Builder(setOf(C.TRACK_TYPE_AUDIO))
        var cursorMs = 0L
        mergeContiguous(lane, ignorePlacement = true).forEach { track ->
            if (track.globalStartMs > cursorMs) builder.addGap((track.globalStartMs - cursorMs) * 1_000)
            val overlay = track.overlay
            val speed = overlay.playbackSpeed
            overlayPieces(track, playsSource = true, segments = emptyList()).forEach { piece ->
                val pieceMs = piece.endMs - piece.startMs
                val mediaItem = MediaItem.Builder()
                    .setUri(Uri.parse(overlay.sourceUri))
                    .setClippingConfiguration(
                        MediaItem.ClippingConfiguration.Builder()
                            .setStartPositionMs(piece.sourceStartMs)
                            .setEndPositionMs(piece.sourceStartMs + (pieceMs * speed.toDouble()).roundToLong().coerceAtLeast(1))
                            .build(),
                    )
                    .build()
                val audioProcessors = overlay.audioSegments
                    .filter { it.enabled && it.effectId != "reverse_audio" }
                    .mapNotNull { audioProcessorFor(it, piece.startMs) }
                val itemBuilder = EditedMediaItem.Builder(mediaItem)
                    .setRemoveVideo(true)
                    .setEffects(Effects(audioProcessors, emptyList()))
                if (speed != 1f) itemBuilder.setSpeed(constantSpeed(speed))
                builder.addItem(itemBuilder.build())
            }
            cursorMs = track.globalEndMs
        }
        if (projectDurationMs > cursorMs) builder.addGap((projectDurationMs - cursorMs) * 1_000)
        return builder.build()
    }

    private class OverlayVideoCompositorSettings(
        private val lanes: List<List<VideoOverlayTrack>>,
        private val ihtxPresentationSize: Size?,
        private val ihtxOutputSize: Size?,
    ) : VideoCompositorSettings {
        private var inputSizes: List<Size> = emptyList()
        private var outputSize: Size? = null

        override fun getOutputSize(inputSizes: List<Size>): Size {
            this.inputSizes = inputSizes
            return inputSizes.getOrElse(lanes.size) { inputSizes.first() }.also { outputSize = it }
        }

        override fun getOverlaySettings(inputId: Int, presentationTimeUs: Long): OverlaySettings {
            val lane = lanes.getOrNull(inputId) ?: return StaticOverlaySettings.Builder().build()
            val track = lane.firstOrNull { presentationTimeUs in (it.globalStartMs * 1_000) until (it.globalEndMs * 1_000) }
                ?: return HIDDEN
            val localTimeMs = (presentationTimeUs / 1_000 - track.globalStartMs + track.overlay.startMs).coerceAtLeast(0)
            val animated = track.overlay.valuesAt(localTimeMs)
            val frameSize = if (track.overlay.ihtxLayout) ihtxOutputSize ?: outputSize else outputSize
            if (track.overlay.fillFrame && frameSize != null) {
                return StaticOverlaySettings.Builder()
                    .setAlphaScale(animated.alpha.coerceIn(0f, 1f))
                    .setScale(
                        frameSize.width.toFloat() / FILL_FRAME_SIZE.width,
                        frameSize.height.toFloat() / FILL_FRAME_SIZE.height,
                    )
                    .build()
            }
            val scale = animated.scale.coerceAtLeast(0.01f)
            val inputSize = if (track.overlay.ihtxLayout) ihtxPresentationSize else inputSizes.getOrNull(inputId)
            val scaleX = if (track.overlay.ihtxLayout && inputSize != null && frameSize != null) {
                scale * frameSize.width.toFloat() / inputSize.width.toFloat()
            } else scale
            val scaleY = if (track.overlay.ihtxLayout && inputSize != null && frameSize != null) {
                scale * frameSize.height.toFloat() / inputSize.height.toFloat()
            } else scale
            return StaticOverlaySettings.Builder()
                .setAlphaScale(animated.alpha.coerceIn(0f, 1f))
                .setScale(scaleX, scaleY)
                .setBackgroundFrameAnchor(
                    animated.offsetX.coerceIn(-1f, 1f),
                    animated.offsetY.coerceIn(-1f, 1f),
                )
                .build()
        }

        private companion object {
            val HIDDEN: StaticOverlaySettings = StaticOverlaySettings.Builder().setAlphaScale(0f).build()
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
        private val overlay: Overlay,
        private val startUs: Long,
        private val endUs: Long,
    ) : BitmapOverlay() {
        override fun getBitmap(presentationTimeUs: Long): Bitmap = bitmap

        override fun getOverlaySettings(presentationTimeUs: Long): StaticOverlaySettings {
            if (presentationTimeUs !in startUs until endUs) return HIDDEN
            val animated = overlay.valuesAt(presentationTimeUs / 1_000)
            return StaticOverlaySettings.Builder()
                .setAlphaScale(animated.alpha.coerceIn(0f, 1f))
                .setScale(animated.scale.coerceAtLeast(0.01f), animated.scale.coerceAtLeast(0.01f))
                .setBackgroundFrameAnchor(
                    animated.offsetX.coerceIn(-1f, 1f),
                    animated.offsetY.coerceIn(-1f, 1f),
                )
                .build()
        }

        private companion object {
            val HIDDEN: StaticOverlaySettings = StaticOverlaySettings.Builder().setAlphaScale(0f).build()
        }
    }
}
