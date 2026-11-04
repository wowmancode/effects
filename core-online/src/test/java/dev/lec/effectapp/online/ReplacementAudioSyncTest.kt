package dev.lec.effectapp.online

import dev.lec.effectapp.model.Clip
import dev.lec.effectapp.model.EditProject
import org.junit.Assert.assertEquals
import org.junit.Assert.assertFalse
import org.junit.Assert.assertNull
import org.junit.Assert.assertTrue
import org.junit.Test

class ReplacementAudioSyncTest {
    private val videoHash = "a".repeat(64)
    private val audioHash = "b".repeat(64)
    private val clip = Clip("clip", MediaRef.of(videoHash), "video.mp4", trimEndMs = 5_000)
    private val before = ProjectSync.normalize(EditProject(clips = listOf(clip)))
    private val after = before.copy(clips = listOf(clip.withReplacedAudio("audio", MediaRef.of(audioHash), "song.mp3", 2_000)))

    @Test
    fun replacementTravelsAsAnAudioLaneWithItsMediaHash() {
        val ops = ProjectSync.diff(before, after)
        assertEquals(after, ProjectSync.apply(before, ops))
        assertEquals(setOf(videoHash, audioHash), ProjectSync.mediaHashes(after))
        assertTrue(ops.flatMap { ProjectSync.opMediaHashes(it) }.contains(audioHash))
        val validator = WireValidator(EffectCatalog(emptySet(), emptyMap()))
        assertNull(validator.checkOps(ops))
        assertNull(validator.checkProject(after))
    }

    @Test
    fun restoringOriginalAudioRemovesTheSharedReplacement() {
        val restored = ProjectSync.apply(after, ProjectSync.diff(after, before))
        assertEquals(before, restored)
        assertFalse(restored.clips.single().hasReplacementAudio)
        assertEquals(setOf(videoHash), ProjectSync.mediaHashes(restored))
    }
}
