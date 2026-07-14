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
) {
    val durationMs: Long get() = (trimEndMs - trimStartMs).coerceAtLeast(0)

    fun withReplacedMedia(sourceUri: String, displayName: String, durationMs: Long): Clip {
        val replacementDuration = durationMs.coerceAtLeast(1)
        return copy(
            sourceUri = sourceUri,
            displayName = displayName,
            trimStartMs = 0,
            trimEndMs = replacementDuration,
            effectSegments = effectSegments.map { it.forWholeClip(replacementDuration) },
            audioSegments = audioSegments.map { it.forWholeClip(replacementDuration) },
        )
    }
}

@Serializable
data class TransformSettings(
    val scale: Float = 1f,
    val rotationDegrees: Float = 0f,
    val offsetX: Float = 0f,
    val offsetY: Float = 0f,
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
) {
    val durationMs: Long get() = (endMs - startMs).coerceAtLeast(0)

    fun constrainedTo(clipDurationMs: Long): TimelineSegment {
        val start = startMs.coerceIn(0, clipDurationMs)
        val end = endMs.coerceIn(start, clipDurationMs)
        return copy(startMs = start, endMs = end)
    }

    fun forWholeClip(clipDurationMs: Long): TimelineSegment =
        copy(startMs = 0, endMs = clipDurationMs.coerceAtLeast(0))
}
