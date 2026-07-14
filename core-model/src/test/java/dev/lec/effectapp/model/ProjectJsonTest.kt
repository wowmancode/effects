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
                        TimelineSegment("segment", "hue_rotate", 500, 2_000, params = mapOf("degrees" to 90f)),
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
}
