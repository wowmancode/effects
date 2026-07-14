package dev.lec.effectapp.model

import org.junit.Assert.assertEquals
import org.junit.Test

class ProjectJsonTest {
    @Test
    fun roundTripPreservesTimeline() {
        val project = EditProject(
            name = "Test",
            createdAt = 42,
            clips = listOf(
                Clip(
                    id = "clip",
                    sourceUri = "content://video",
                    displayName = "video.mp4",
                    trimEndMs = 5_000,
                    effectSegments = listOf(
                        TimelineSegment("segment", "hue_rotate", 0, 5_000, params = mapOf("degrees" to 90f)),
                    ),
                ),
            ),
        )

        assertEquals(project, ProjectJson.decode(ProjectJson.encode(project)))
    }

    @Test
    fun segmentIsConstrainedToClip() {
        val segment = TimelineSegment("id", "effect", -10, 10_000)
        assertEquals(TimelineSegment("id", "effect", 0, 1_000), segment.constrainedTo(1_000))
    }

    @Test
    fun visualEffectCanBeNormalizedToWholeClip() {
        val segment = TimelineSegment("id", "effect", 250, 500)
        assertEquals(TimelineSegment("id", "effect", 0, 4_000), segment.forWholeClip(4_000))
    }
    @Test
    fun roundTripPreservesPresets() {
        val preset = EffectPreset(
            id = "preset",
            name = "My look",
            thumbnailPath = "/files/preview.jpg",
            effectSegments = listOf(TimelineSegment("", "rgb_to_bgr", 0, 2_000)),
            audioSegments = listOf(TimelineSegment("", "reverse_audio", 0, 2_000)),
        )
        val project = EditProject(presets = listOf(preset))

        assertEquals(project, ProjectJson.decode(ProjectJson.encode(project)))
    }

}
