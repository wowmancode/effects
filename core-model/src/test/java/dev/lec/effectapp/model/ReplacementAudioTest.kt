package dev.lec.effectapp.model

import org.junit.Assert.assertEquals
import org.junit.Assert.assertFalse
import org.junit.Assert.assertTrue
import org.junit.Test

class ReplacementAudioTest {
    private val clip = Clip(
        id = "clip",
        sourceUri = "content://video",
        displayName = "video.mp4",
        trimStartMs = 500,
        trimEndMs = 5_500,
        speed = 2f,
        effectSegments = listOf(TimelineSegment("visual", "hue_rotate", 0, 5_000)),
        audioSegments = listOf(TimelineSegment("volume", "volume", 0, 5_000)),
        overlays = listOf(Overlay("image", "content://image", "image.png")),
    )

    @Test
    fun replacingAudioPreservesVideoTimingAndEffects() {
        val replaced = clip.withReplacedAudio("audio", "content://audio", "song.mp3", 2_000)
        assertEquals(clip.copy(overlays = replaced.overlays), replaced)
        assertEquals(clip.overlays, replaced.overlays.filterNot { it.replacesClipAudio })
        val audio = replaced.overlays.single { it.replacesClipAudio }
        assertTrue(replaced.hasReplacementAudio)
        assertTrue(audio.audioOnly)
        assertTrue(audio.includeAudio)
        assertEquals(0L, audio.startMs)
        assertEquals(clip.durationMs, audio.endMs)
        assertEquals(2_000L, audio.sourceDurationMs)
        assertEquals(1f, audio.playbackSpeed)
    }

    @Test
    fun replacingAgainKeepsOnlyTheNewSoundtrack() {
        val replaced = clip.withReplacedAudio("first", "content://first", "first.mp3", 1_000)
            .withReplacedAudio("second", "content://second", "second.mp3", 10_000)
        assertEquals(2, replaced.overlays.size)
        assertEquals("content://second", replaced.overlays.single { it.replacesClipAudio }.sourceUri)
        assertFalse(EditProject(clips = listOf(replaced)).sourceUris().contains("content://first"))
    }

    @Test
    fun soundtrackSurvivesSaveAndCanBeRelinked() {
        val project = EditProject(clips = listOf(clip.withReplacedAudio("audio", "content://audio", "song.mp3", 2_000)))
        val restored = ProjectJson.decode(ProjectJson.encode(project))
        assertEquals(project, restored)
        assertTrue(restored.sourceUris().contains("content://audio"))
        val relinked = restored.relinkSource("content://audio", "content://found", "found.mp3", 3_000)
        val audio = relinked.clips.single().overlays.single { it.replacesClipAudio }
        assertEquals("content://found", audio.sourceUri)
        assertEquals(3_000L, audio.sourceDurationMs)
        assertTrue(relinked.clips.single().hasReplacementAudio)
    }

    @Test
    fun replacementUsesCurrentClipAudioEffectsWithoutChangingSavedOverlays() {
        val replaced = clip.withReplacedAudio("audio", "content://audio", "song.mp3", 2_000)
        val effects = listOf(TimelineSegment("pitch", "pitch_change", 0, 5_000))
        val edited = replaced.copy(audioSegments = effects)
        assertEquals(effects, edited.playbackOverlays().single { it.replacesClipAudio }.audioSegments)
        assertTrue(edited.overlays.single { it.replacesClipAudio }.audioSegments.isEmpty())
        assertEquals(clip.overlays.single(), edited.playbackOverlays().single { !it.replacesClipAudio })
    }

    @Test
    fun replacingVideoKeepsSoundtrackAcrossTheNewClipLength() {
        val replaced = clip.withReplacedAudio("audio", "content://audio", "song.mp3", 2_000)
            .withReplacedMedia("content://new-video", "new.mp4", 8_000)
        assertEquals(8_000L, replaced.overlays.single { it.replacesClipAudio }.endMs)
        assertEquals("content://audio", replaced.overlays.single { it.replacesClipAudio }.sourceUri)
    }
}
