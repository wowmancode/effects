package dev.lec.effectapp.model

import org.junit.Assert.assertEquals
import org.junit.Assert.assertFalse
import org.junit.Assert.assertTrue
import org.junit.Test

class AudioReplacementTest {
    private val replacement = "content://audio/rendered"

    @Test fun replacementSurvivesProjectSaveAndLoad() {
        val clip = Clip(
            id = "one",
            sourceUri = "content://video/one",
            displayName = "one.mp4",
            trimStartMs = 1500,
            trimEndMs = 6500,
            audioReplacementUri = replacement,
        )
        val project = EditProject(clips = listOf(clip))
        assertEquals(project, ProjectJson.decode(ProjectJson.encode(project)))
        assertTrue(replacement in project.sourceUris())
        assertTrue(clip.sourceUri in project.sourceUris())
    }

    @Test fun relinkTracksTheReplacementIndependently() {
        val clip = Clip(
            id = "one",
            sourceUri = "content://video/one",
            displayName = "one.mp4",
            trimEndMs = 5000,
            audioReplacementUri = replacement,
        )
        val relinked = EditProject(clips = listOf(clip))
            .relinkSource(replacement, "content://audio/moved", "moved.wav")
        assertEquals("content://audio/moved", relinked.clips.single().audioReplacementUri)
        assertEquals("content://video/one", relinked.clips.single().sourceUri)
    }

    @Test fun replacingEntireVideoClearsProcessedAudio() {
        val clip = Clip(
            id = "one", sourceUri = "content://video/one", displayName = "one.mp4",
            trimEndMs = 2000, audioReplacementUri = replacement,
        )
        val next = clip.withReplacedMedia("content://video/two", "two.mp4", 3000)
        assertEquals(null, next.audioReplacementUri)
        assertFalse(replacement in EditProject(clips = listOf(next)).sourceUris())
    }
}
