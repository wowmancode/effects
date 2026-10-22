package dev.lec.effectapp.model

import org.junit.Assert.assertEquals
import org.junit.Assert.assertFalse
import org.junit.Assert.assertNotEquals
import org.junit.Assert.assertNull
import org.junit.Assert.assertTrue
import org.junit.Test

class ReplacementAudioPresetTest {
    private val source = Clip(
        "source", "content://video", "video.mp4", trimEndMs = 5_000,
        effectSegments = listOf(TimelineSegment("visual", "hue_rotate", 0, 5_000)),
        audioSegments = listOf(TimelineSegment("volume", "volume", 0, 5_000)),
    ).withReplacedAudio("soundtrack", "content://song", "song.mp3", 3_000, sourceStartMs = 750)

    @Test
    fun savingCapturesAudioSourceAndEffects() {
        val preset = source.toPreset("preset", "My preset", "thumbnail.jpg")
        assertEquals(PresetAudio("content://song", "song.mp3", 3_000, 750), preset.replacementAudio)
        assertEquals(source.effectSegments.map { it.copy(id = "") }, preset.effectSegments)
        assertEquals(source.audioSegments.map { it.copy(id = "") }, preset.audioSegments)
        assertEquals("thumbnail.jpg", preset.thumbnailPath)
    }

    @Test
    fun applyingUsesTargetLengthAndKeepsItsVideoAndOtherLayers() {
        val preset = source.toPreset("preset", "My preset")
        val target = Clip(
            "target", "content://other-video", "other.mp4", trimStartMs = 1_000, trimEndMs = 10_000,
            speed = 2f,
            overlays = listOf(Overlay("image", "content://image", "image.png")),
        ).withReplacedAudio("old", "content://old-song", "old.mp3", 2_000)
        val applied = requireNotNull(preset.replacementAudio).applyTo(target, "new")
        assertEquals(target.copy(overlays = applied.overlays), applied)
        assertEquals(target.overlays.filterNot { it.replacesClipAudio }, applied.overlays.filterNot { it.replacesClipAudio })
        val soundtrack = applied.overlays.single { it.replacesClipAudio }
        assertEquals("new", soundtrack.id)
        assertEquals("content://song", soundtrack.sourceUri)
        assertEquals(750L, soundtrack.sourceStartMs)
        assertEquals(0L, soundtrack.startMs)
        assertEquals(target.durationMs, soundtrack.endMs)
        assertTrue(soundtrack.audioOnly)
        assertFalse(applied.overlays.any { it.sourceUri == "content://old-song" })
    }

    @Test
    fun exportedPresetsAndLibraryBackupsKeepReplacementAudio() {
        val preset = source.toPreset("preset", "My preset")
        assertEquals(preset, PresetJson.decode(PresetJson.encode(preset)))
        val library = listOf(preset)
        assertEquals(library, PresetLibraryJson.decode(PresetLibraryJson.encode(library)))
        assertEquals(library, PresetLibraryJson.decodeFlexible(PresetJson.encode(preset)))
        assertEquals(library, PresetLibraryJson.decodeFlexible(PresetLibraryJson.encode(library)))
    }

    @Test
    fun legacyPresetsHaveNoAudioReplacement() {
        assertNull(PresetJson.decode("""{"id":"old","name":"Old preset"}""").replacementAudio)
        val plainClip = source.copy(overlays = emptyList())
        assertNull(plainClip.toPreset("plain", "Plain").replacementAudio)
    }

    @Test
    fun equivalentSoundtracksIgnoreClipLengthAndOverlayIdentity() {
        val longer = source.copy(
            trimEndMs = 12_000,
            overlays = source.overlays.map { it.copy(id = "different-id", endMs = 12_000) },
        )
        assertEquals(source.toPreset("preset", "Same"), longer.toPreset("preset", "Same"))
        val different = source.withReplacedAudio("soundtrack", "content://different-song", "different.mp3", 3_000)
        assertNotEquals(
            PresetJson.encode(source.toPreset("preset", "Same")),
            PresetJson.encode(different.toPreset("preset", "Same")),
        )
    }

    @Test
    fun relinkingMissingSoundtrackAlsoRepairsItsSavedPreset() {
        val preset = source.toPreset("preset", "My preset")
        val project = EditProject(clips = listOf(source), presets = listOf(preset))
        val relinked = project.relinkSource("content://song", "content://found", "found.mp3", 4_000)
        assertEquals(PresetAudio("content://found", "found.mp3", 4_000, 750), relinked.presets.single().replacementAudio)
        assertEquals("content://found", relinked.clips.single().overlays.single().sourceUri)
        assertEquals(750L, relinked.clips.single().overlays.single().sourceStartMs)
        assertEquals(project, project.relinkSource("content://unrelated", "content://elsewhere", "other.mp3"))
    }
}
