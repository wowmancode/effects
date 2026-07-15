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

    @Test
    fun portablePresetOmitsThumbnail() {
        val preset = EffectPreset(
            id = "preset",
            name = "Portable look",
            thumbnailPath = "/private/preview.jpg",
            effectSegments = listOf(TimelineSegment("", "glow", 0, 2_000)),
        )

        assertEquals(preset.copy(thumbnailPath = null), PresetJson.decode(PresetJson.encode(preset)))
    }

    @Test
    fun replacingMediaKeepsEditsAndFitsEffectsToNewDuration() {
        val clip = Clip(
            id = "clip",
            sourceUri = "content://old",
            displayName = "old.mp4",
            trimStartMs = 500,
            trimEndMs = 2_500,
            transform = TransformSettings(scale = 1.5f, rotationDegrees = 20f),
            effectSegments = listOf(TimelineSegment("visual", "glow", 300, 900)),
            audioSegments = listOf(TimelineSegment("audio", "pitch", 200, 800)),
        )

        val replaced = clip.withReplacedMedia("content://new", "new.mp4", 6_000)

        assertEquals("clip", replaced.id)
        assertEquals("content://new", replaced.sourceUri)
        assertEquals("new.mp4", replaced.displayName)
        assertEquals(clip.transform, replaced.transform)
        assertEquals(false, replaced.mediaMissing)
        assertEquals(0, replaced.trimStartMs)
        assertEquals(6_000, replaced.trimEndMs)
        assertEquals(clip.effectSegments.map { it.forWholeClip(6_000) }, replaced.effectSegments)
        assertEquals(clip.audioSegments.map { it.forWholeClip(6_000) }, replaced.audioSegments)
    }

    @Test
    fun keyframesInterpolateSmoothlyAndRoundTrip() {
        val segment = TimelineSegment(
            id = "effect",
            effectId = "glow",
            startMs = 0,
            endMs = 3_000,
            params = mapOf("strength" to 0.2f),
            keyframes = listOf(
                EffectKeyframe(1_000, mapOf("strength" to 0.8f)),
                EffectKeyframe(2_000, mapOf("strength" to 1.4f)),
            ),
        )
        val project = EditProject(
            clips = listOf(Clip("clip", "content://video", "video", trimEndMs = 3_000, effectSegments = listOf(segment))),
        )

        assertEquals(0.5f, segment.paramsAt(500)["strength"]!!, 0.0001f)
        assertEquals(1.1f, segment.paramsAt(1_500)["strength"]!!, 0.0001f)
        assertEquals(1.4f, segment.paramsAt(2_500)["strength"])
        assertEquals(project, ProjectJson.decode(ProjectJson.encode(project)))
    }

    @Test
    fun presetLibraryRoundTripsIndependentlyFromProjects() {
        val presets = listOf(
            EffectPreset("one", "First"),
            EffectPreset("two", "Second", effectSegments = listOf(TimelineSegment("", "glow", 0, 1_000))),
        )

        assertEquals(presets, PresetLibraryJson.decode(PresetLibraryJson.encode(presets)))
    }

}
