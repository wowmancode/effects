package dev.lec.effectapp.model

import kotlinx.serialization.Serializable

@Serializable
data class EditProject(
    val name: String = "Untitled edit",
    val createdAt: Long = System.currentTimeMillis(),
    val clips: List<Clip> = emptyList(),
    val presets: List<EffectPreset> = emptyList(),
) {
    val durationMs: Long get() = clips.sumOf(Clip::durationMs)
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
) {
    val durationMs: Long get() = (trimEndMs - trimStartMs).coerceAtLeast(0)

    fun withReplacedMedia(sourceUri: String, displayName: String, durationMs: Long): Clip {
        val replacementDuration = durationMs.coerceAtLeast(1)
        return copy(
            sourceUri = sourceUri,
            displayName = displayName,
            trimStartMs = 0,
            trimEndMs = replacementDuration,
            mediaMissing = false,
            effectSegments = effectSegments.map { it.forWholeClip(replacementDuration) },
            audioSegments = audioSegments.map { it.forWholeClip(replacementDuration) },
        )
    }
}

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
    val startMs: Long = 0,
    val endMs: Long = 0,
    val alpha: Float = 1f,
    val scale: Float = 1f,
    val offsetX: Float = 0f,
    val offsetY: Float = 0f,
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
