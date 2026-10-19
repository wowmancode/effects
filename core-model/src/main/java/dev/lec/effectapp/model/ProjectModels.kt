package dev.lec.effectapp.model

import kotlin.math.roundToLong
import kotlinx.serialization.Serializable
import kotlinx.serialization.Transient

@Serializable
data class EditProject(
    val name: String = "Untitled edit",
    val createdAt: Long = System.currentTimeMillis(),
    val clips: List<Clip> = emptyList(),
    val presets: List<EffectPreset> = emptyList(),
) {
    val durationMs: Long get() = clips.sumOf(Clip::durationMs)

    /** Every media source the project reads, clips and overlays alike (generated images included). */
    fun sourceUris(): Set<String> = buildSet {
        clips.forEach { clip ->
            add(clip.sourceUri)
            clip.overlays.forEach { add(it.sourceUri) }
        }
    }

    /**
     * Points every clip and overlay that reads [oldUri] at [newUri], keeping their in-points,
     * lengths, speeds and effects. Used to find media that moved, so one pick fixes every cut of it.
     */
    fun relinkSource(oldUri: String, newUri: String, displayName: String, sourceDurationMs: Long = 0): EditProject =
        copy(
            clips = clips.map { clip ->
                val relinked = if (clip.sourceUri == oldUri) {
                    clip.copy(sourceUri = newUri, displayName = displayName, mediaMissing = false)
                } else clip
                relinked.copy(
                    overlays = relinked.overlays.map { overlay ->
                        if (overlay.sourceUri != oldUri) overlay
                        else overlay.copy(
                            sourceUri = newUri,
                            displayName = displayName,
                            sourceDurationMs = if (sourceDurationMs > 0) sourceDurationMs else overlay.sourceDurationMs,
                        )
                    },
                )
            },
        )
}

@Serializable
data class EffectPreset(
    val id: String,
    val name: String,
    val thumbnailPath: String? = null,
    val effectSegments: List<TimelineSegment> = emptyList(),
    val audioSegments: List<TimelineSegment> = emptyList(),
)

@Serializable
data class Clip(
    val id: String,
    val sourceUri: String,
    val displayName: String,
    val trimStartMs: Long = 0,
    val trimEndMs: Long,
    val transform: TransformSettings = TransformSettings(),
    val effectSegments: List<TimelineSegment> = emptyList(),
    val audioSegments: List<TimelineSegment> = emptyList(),
    val overlays: List<Overlay> = emptyList(),
    val mediaMissing: Boolean = false,
    /**
     * Playback speed. The clip still lasts trimEndMs - trimStartMs on the timeline; it reads
     * [speed] times as much source from trimStartMs (see [sourceEndMs]). 1 = normal speed.
     */
    val speed: Float = 1f,
    /** Pre-reversed video for this clip's range (see ReverseMediaCache). Never saved. */
    @Transient val videoOverride: SourceOverride? = null,
    /** Pre-reversed audio for this clip's range (see ReverseMediaCache). Never saved. */
    @Transient val audioOverride: SourceOverride? = null,
) {
    val durationMs: Long get() = (trimEndMs - trimStartMs).coerceAtLeast(0)

    /** [speed], or 1 when it isn't a usable positive number. */
    val playbackSpeed: Float get() = speed.takeIf { it.isFinite() && it > 0f } ?: 1f

    /** Source position read at clip-local time [localMs]. */
    fun sourceMsAt(localMs: Long): Long = trimStartMs + (localMs * playbackSpeed.toDouble()).roundToLong()

    /** End of the source range the clip reads (equals trimEndMs at normal speed). */
    val sourceEndMs: Long get() = sourceMsAt(durationMs)

    val hasReplacementAudio: Boolean get() = overlays.any { it.replacesClipAudio }

    /** Replacement sound uses the clip's audio stack and the existing looping audio lane. */
    fun playbackOverlays(): List<Overlay> = overlays.map { overlay ->
        if (overlay.replacesClipAudio) overlay.copy(audioSegments = audioSegments) else overlay
    }

    fun withReplacedAudio(id: String, uri: String, name: String, sourceDurationMs: Long): Clip = copy(
        overlays = overlays.filterNot { it.replacesClipAudio } + Overlay(
            id = id,
            sourceUri = uri,
            displayName = name,
            sourceDurationMs = sourceDurationMs,
            audioOnly = true,
            includeAudio = true,
            endMs = durationMs,
            replacesClipAudio = true,
        ),
    )

    fun withReplacedMedia(sourceUri: String, displayName: String, durationMs: Long): Clip {
        val replacementDuration = durationMs.coerceAtLeast(1)
        return copy(
            sourceUri = sourceUri,
            displayName = displayName,
            trimStartMs = 0,
            trimEndMs = replacementDuration,
            mediaMissing = false,
            speed = 1f,
            effectSegments = effectSegments.map { it.forWholeClip(replacementDuration) },
            audioSegments = audioSegments.map { it.forWholeClip(replacementDuration) },
            overlays = overlays.map { if (it.replacesClipAudio) it.copy(startMs = 0, endMs = replacementDuration) else it },
        )
    }
}

/**
 * Replacement media for a clip's range: the clip's local time t plays [uri] at [startMs] + t.
 * Used for reversed media, which is rendered once up front.
 */
data class SourceOverride(val uri: String, val startMs: Long = 0)

/**
 * An image composited on top of a clip. Times are local to the clip. Position anchors and scale
 * follow Media3 overlay conventions: offsets in [-1, 1] (0 = centered), alpha in [0, 1].
 */
@Serializable
data class Overlay(
    val id: String,
    val sourceUri: String,
    val displayName: String,
    val isVideo: Boolean = false,
    val sourceDurationMs: Long = 0,
    val includeAudio: Boolean = false,
    val ihtxLayout: Boolean = false,
    val startMs: Long = 0,
    val endMs: Long = 0,
    val alpha: Float = 1f,
    val scale: Float = 1f,
    val offsetX: Float = 0f,
    val offsetY: Float = 0f,
    val keyframes: List<OverlayKeyframe> = emptyList(),
    val effectSegments: List<TimelineSegment> = emptyList(),
    val audioSegments: List<TimelineSegment> = emptyList(),
    /** Source position (ms) the overlay's video or sound starts from at [startMs]. */
    val sourceStartMs: Long = 0,
    /** Playback speed of a video or sound overlay; it still lasts startMs..endMs on the timeline. */
    val speed: Float = 1f,
    /** Sound only: plays the source's audio and draws nothing. */
    val audioOnly: Boolean = false,
    /** Soundtrack selected with Replace audio; suppresses the clip's original sound. */
    val replacesClipAudio: Boolean = false,
    /**
     * Overlays sharing a lane (>= 0) never overlap in time and play through one shared player in
     * export; lane 0 is drawn on top of lane 1 and so on. -1 = the overlay gets a lane of its own.
     */
    val lane: Int = -1,
    /**
     * Stretch to cover the whole frame instead of keeping the overlay's own pixel size (scale and
     * offsets are ignored). Placement inside the frame is then done by a "frame_place" effect.
     */
    val fillFrame: Boolean = false,
    /** Extra source time skipped by export start trimming, on top of [sourceStartMs]. Never saved. */
    @Transient val sourceOffsetMs: Long = 0,
) {
    /** [speed], or 1 when it isn't a usable positive number. */
    val playbackSpeed: Float get() = speed.takeIf { it.isFinite() && it > 0f } ?: 1f

    /** Source position played at clip-local time [localMs] (before looping). */
    fun sourceMsAt(localMs: Long): Long =
        sourceStartMs + sourceOffsetMs + ((localMs - startMs).coerceAtLeast(0) * playbackSpeed.toDouble()).roundToLong()

    fun valuesAt(timeMs: Long): OverlayValues {
        if (keyframes.isEmpty()) return OverlayValues(alpha, scale, offsetX, offsetY)
        val ordered = keyframes.sortedBy { it.timeMs }
        val previous = ordered.lastOrNull { it.timeMs <= timeMs }
        val next = ordered.firstOrNull { it.timeMs > timeMs }
            ?: return previous?.values ?: OverlayValues(alpha, scale, offsetX, offsetY)
        val fromTime = previous?.timeMs ?: 0L
        val from = previous?.values ?: OverlayValues(alpha, scale, offsetX, offsetY)
        val duration = next.timeMs - fromTime
        if (duration <= 0L) return next.values
        val amount = ((timeMs - fromTime).toFloat() / duration).coerceIn(0f, 1f)
        return OverlayValues(
            alpha = from.alpha + (next.alpha - from.alpha) * amount,
            scale = from.scale + (next.scale - from.scale) * amount,
            offsetX = from.offsetX + (next.offsetX - from.offsetX) * amount,
            offsetY = from.offsetY + (next.offsetY - from.offsetY) * amount,
        )
    }
}


@Serializable
data class OverlayKeyframe(
    val timeMs: Long,
    val alpha: Float = 1f,
    val scale: Float = 1f,
    val offsetX: Float = 0f,
    val offsetY: Float = 0f,
) {
    val values: OverlayValues get() = OverlayValues(alpha, scale, offsetX, offsetY)
}

data class OverlayValues(
    val alpha: Float,
    val scale: Float,
    val offsetX: Float,
    val offsetY: Float,
)

@Serializable
data class TransformSettings(
    val scale: Float = 1f,
    val rotationDegrees: Float = 0f,
    val offsetX: Float = 0f,
    val offsetY: Float = 0f,
)

@Serializable
data class EffectKeyframe(
    val timeMs: Long,
    val params: Map<String, Float> = emptyMap(),
)

@Serializable
data class TimelineSegment(
    val id: String,
    val effectId: String,
    val startMs: Long,
    val endMs: Long,
    val enabled: Boolean = true,
    val params: Map<String, Float> = emptyMap(),
    val stringParams: Map<String, String> = emptyMap(),
    val keyframes: List<EffectKeyframe> = emptyList(),
) {
    val durationMs: Long get() = (endMs - startMs).coerceAtLeast(0)

    fun constrainedTo(clipDurationMs: Long): TimelineSegment {
        val start = startMs.coerceIn(0, clipDurationMs)
        val end = endMs.coerceIn(start, clipDurationMs)
        return copy(startMs = start, endMs = end)
    }

    fun forWholeClip(clipDurationMs: Long): TimelineSegment =
        copy(
            startMs = 0,
            endMs = clipDurationMs.coerceAtLeast(0),
            keyframes = keyframes
                .map { it.copy(timeMs = it.timeMs.coerceIn(0, clipDurationMs.coerceAtLeast(0))) }
                .distinctBy { it.timeMs }
                .sortedBy { it.timeMs },
        )

    /** Linearly interpolates every numeric parameter between the surrounding keyframes. */
    fun paramsAt(timeMs: Long): Map<String, Float> {
        if (keyframes.isEmpty()) return params
        val ordered = keyframes.sortedBy { it.timeMs }
        val previous = ordered.lastOrNull { it.timeMs <= timeMs }
        val next = ordered.firstOrNull { it.timeMs > timeMs } ?: return previous?.params ?: params
        val fromTime = previous?.timeMs ?: 0L
        val fromParams = previous?.params ?: params
        val duration = next.timeMs - fromTime
        if (duration <= 0L) return next.params
        val progress = ((timeMs - fromTime).toFloat() / duration).coerceIn(0f, 1f)
        return (fromParams.keys + next.params.keys).associateWith { key ->
            val from = fromParams[key] ?: next.params[key] ?: 0f
            val to = next.params[key] ?: from
            from + (to - from) * progress
        }
    }
}
