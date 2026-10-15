package dev.lec.effectapp.model

import org.junit.Assert.assertEquals
import org.junit.Test

class OverlayAnimationTest {
    @Test
    fun interpolatesFromBaseThroughKeyframes() {
        val overlay = Overlay(
            id = "overlay",
            sourceUri = "content://image",
            displayName = "Image",
            alpha = 0f,
            scale = 1f,
            offsetX = -1f,
            keyframes = listOf(
                OverlayKeyframe(timeMs = 1_000, alpha = 1f, scale = 2f, offsetX = 1f),
            ),
        )

        val halfway = overlay.valuesAt(500)

        assertEquals(0.5f, halfway.alpha, 0.001f)
        assertEquals(1.5f, halfway.scale, 0.001f)
        assertEquals(0f, halfway.offsetX, 0.001f)
    }

    @Test
    fun projectJsonRetainsOverlayStacksAndAnimation() {
        val effect = TimelineSegment("fx", "hue_rotate", 0, 1_000)
        val audio = TimelineSegment("audio", "echo", 0, 1_000)
        val project = EditProject(
            clips = listOf(
                Clip(
                    id = "clip",
                    sourceUri = "content://video",
                    displayName = "Video",
                    trimEndMs = 1_000,
                    overlays = listOf(
                        Overlay(
                            id = "overlay",
                            sourceUri = "content://overlay",
                            displayName = "Overlay",
                            keyframes = listOf(OverlayKeyframe(500, scale = 2f)),
                            effectSegments = listOf(effect),
                            audioSegments = listOf(audio),
                        ),
                    ),
                ),
            ),
        )

        val decoded = ProjectJson.decode(ProjectJson.encode(project)).clips.single().overlays.single()

        assertEquals(2f, decoded.keyframes.single().scale, 0f)
        assertEquals("hue_rotate", decoded.effectSegments.single().effectId)
        assertEquals("echo", decoded.audioSegments.single().effectId)
    }
}
