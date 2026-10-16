package dev.lec.effectapp.online

import dev.lec.effectapp.model.Clip
import dev.lec.effectapp.model.EditProject
import dev.lec.effectapp.model.Overlay
import dev.lec.effectapp.model.TimelineSegment
import org.junit.Assert.assertEquals
import org.junit.Assert.assertFalse
import org.junit.Assert.assertNotNull
import org.junit.Assert.assertNull
import org.junit.Assert.assertTrue
import org.junit.Test

class ProjectSyncTest {
    private val hashA = "a".repeat(64)
    private val hashB = "b".repeat(64)
    private val catalog = EffectCatalog(
        knownEffectIds = setOf("blur", "volume", "plugin_video", "plugin_audio", "custom_lut"),
        defaultPluginSources = mapOf("plugin_video" to "red = 1.0 - red;", "plugin_audio" to "sample = sample;"),
    )
    private val validator = WireValidator(catalog)
    private val permissions = PermissionCheck(catalog)

    private fun segment(id: String, effect: String = "blur", value: Float = 1f) =
        TimelineSegment(id = id, effectId = effect, startMs = 0, endMs = 1000, params = mapOf("amount" to value))

    private fun clip(id: String, hash: String = hashA, segments: List<TimelineSegment> = emptyList()) =
        Clip(id = id, sourceUri = MediaRef.of(hash), displayName = "clip $id", trimEndMs = 1000, effectSegments = segments)

    private fun project(vararg clips: Clip) = EditProject(name = "p", createdAt = 0, clips = clips.toList())

    @Test
    fun diffThenApplyReproducesTheEdit() {
        val before = project(clip("1", segments = listOf(segment("s1"), segment("s2"))), clip("2"))
        val after = project(
            clip("2", segments = listOf(segment("s9"))),
            clip("1", segments = listOf(segment("s2", value = 5f))).copy(
                trimEndMs = 800,
                overlays = listOf(Overlay(id = "o1", sourceUri = MediaRef.of(hashB), displayName = "o", effectSegments = listOf(segment("os")))),
            ),
            clip("3", hash = hashB),
        )
        val ops = ProjectSync.diff(before, after)
        assertEquals(after, ProjectSync.apply(before, ops))
        assertTrue(ProjectSync.diff(after, after).isEmpty())
    }

    @Test
    fun opsSurviveJson() {
        val before = project(clip("1"))
        val after = project(clip("1", segments = listOf(segment("s1"))), clip("2", hash = hashB))
        val ops = ProjectSync.diff(before, after)
        val message = Msg.Batch(4, ops)
        val frames = Wire.encode(message, 1)
        val decoded = Wire.Decoder().decode(frames.single()) as Wire.Frame.Message
        assertEquals(message, decoded.msg)
    }

    @Test
    fun editsToDifferentEffectsOnOneClipBothSurvive() {
        val base = project(clip("1", segments = listOf(segment("s1"), segment("s2"))))
        val alice = ProjectSync.diff(base, project(clip("1", segments = listOf(segment("s1", value = 3f), segment("s2")))))
        val bob = ProjectSync.diff(base, project(clip("1", segments = listOf(segment("s1"), segment("s2", value = 7f)))))
        val merged = ProjectSync.apply(ProjectSync.apply(base, alice), bob)
        assertEquals(3f, merged.clips[0].effectSegments[0].params["amount"])
        assertEquals(7f, merged.clips[0].effectSegments[1].params["amount"])
    }

    @Test
    fun opsForDeletedThingsAreSkipped() {
        val base = project(clip("1", segments = listOf(segment("s1"))))
        val edit = ProjectSync.diff(base, project(clip("1", segments = listOf(segment("s1", value = 2f)))))
        val deleted = project()
        assertEquals(deleted, ProjectSync.apply(deleted, edit))
    }

    @Test
    fun permissionsFollowWhatChanged() {
        val base = project(clip("1", segments = listOf(segment("s1"))))
        fun needs(after: EditProject) = permissions.needs(base, ProjectSync.diff(base, after)).perms

        assertEquals(setOf(Perm.EDIT_EFFECT), needs(project(clip("1", segments = listOf(segment("s1", value = 9f))))))
        assertEquals(setOf(Perm.ADD_EFFECT), needs(project(clip("1", segments = listOf(segment("s1"), segment("s2"))))))
        assertEquals(setOf(Perm.REMOVE_EFFECT), needs(project(clip("1"))))
        assertEquals(setOf(Perm.DELETE_MEDIA), needs(project()))
        assertEquals(setOf(Perm.ADD_MEDIA), needs(project(clip("1", segments = listOf(segment("s1"))), clip("2", hash = hashB))))
        // Copying a clip (same media, its effects come along) is an edit, not new media or effects.
        assertEquals(setOf(Perm.EDIT_MEDIA), needs(project(clip("1", segments = listOf(segment("s1"))), clip("2", segments = listOf(segment("s1"))))))
    }

    @Test
    fun onlyTheOwnerChangesPluginCode() {
        val plugin = TimelineSegment(id = "p", effectId = "plugin_video", startMs = 0, endMs = 10, stringParams = mapOf("source" to "red = 1.0 - red;"))
        val base = project(clip("1", segments = listOf(plugin)))
        val changed = project(clip("1", segments = listOf(plugin.copy(stringParams = mapOf("source" to "red = 0.0;")))))
        val needs = permissions.needs(base, ProjectSync.diff(base, changed))
        assertTrue(needs.ownerOnly)
        assertNotNull(permissions.refusal(needs, Perm.entries.toSet(), isOwner = false))
        assertNull(permissions.refusal(needs, emptySet(), isOwner = true))

        // Adding a fresh plug-in (default code) or tweaking its controls is fine.
        val added = project(clip("1", segments = listOf(plugin, plugin.copy(id = "p2"))))
        assertFalse(permissions.needs(base, ProjectSync.diff(base, added)).ownerOnly)
        val tweaked = project(clip("1", segments = listOf(plugin.copy(params = mapOf("control1" to 0.3f)))))
        assertFalse(permissions.needs(base, ProjectSync.diff(base, tweaked)).ownerOnly)
    }

    @Test
    fun validatorRejectsLocalPathsAndJunk() {
        val local = clip("1").copy(sourceUri = "file:///data/data/dev.lec.effectapp/files/secret.mp4")
        assertNotNull(validator.checkOps(listOf(Op.PutClip(local))))
        val web = clip("1").copy(sourceUri = "https://tracker.example/pixel.mp4")
        assertNotNull(validator.checkOps(listOf(Op.PutClip(web))))
        val lut = segment("s").copy(effectId = "custom_lut", stringParams = mapOf("lut_uri" to "content://other.app/file"))
        assertNotNull(validator.checkOps(listOf(Op.PutSegment(SegmentList("1"), lut))))
        assertNotNull(validator.checkOps(listOf(Op.PutSegment(SegmentList("1"), segment("s", effect = "made_up")))))
        assertNotNull(validator.checkOps(listOf(Op.PutSegment(SegmentList("1"), segment("s", value = Float.NaN)))))
        assertNotNull(validator.checkOps(listOf(Op.PutSegment(SegmentList("1"), segment("s").copy(stringParams = mapOf("evil" to "x"))))))
        assertNotNull(validator.checkOps(listOf(Op.RemoveClip("../../etc"))))
        assertNull(validator.checkOps(listOf(Op.PutClip(clip("1")), Op.PutSegment(SegmentList("1"), segment("s")))))
        assertNotNull(validator.checkLimits(project(clip("1"), clip("1"))))
    }

    @Test
    fun guestSyncKeepsPendingEditsOnTopOfOthers() {
        val base = project(clip("1", segments = listOf(segment("s1"), segment("s2"))))
        val sync = GuestSync(base, 1)
        val mine = ProjectSync.diff(base, project(clip("1", segments = listOf(segment("s1", value = 4f), segment("s2")))))
        sync.local(1, mine)
        // Someone else's edit arrives before the owner confirms ours.
        val theirs = ProjectSync.diff(base, project(clip("1", segments = listOf(segment("s1"), segment("s2", value = 8f)))))
        sync.onConfirmed(2, theirs, own = false, batchId = 0)
        assertEquals(4f, sync.view.clips[0].effectSegments[0].params["amount"])
        assertEquals(8f, sync.view.clips[0].effectSegments[1].params["amount"])
        assertTrue(sync.onConfirmed(3, mine, own = true, batchId = 1))
        assertEquals(0, sync.pendingCount)
        assertEquals(sync.confirmed, sync.view)

        sync.local(2, ProjectSync.diff(sync.view, project()))
        sync.refused(2)
        assertEquals(sync.confirmed, sync.view)
    }

    @Test
    fun largeMessagesAreFragmentedAndRejoined() {
        val big = project(*Array(300) { clip("c$it", segments = List(20) { s -> segment("s$s") }) })
        val message = Msg.Snapshot(9, big)
        val frames = Wire.encode(message, 77)
        assertTrue(frames.size > 1)
        val decoder = Wire.Decoder()
        val results = frames.map { decoder.decode(it) }
        assertTrue(results.dropLast(1).all { it == null })
        assertEquals(message, (results.last() as Wire.Frame.Message).msg)
        // A fragment out of order resets instead of corrupting.
        val broken = Wire.Decoder()
        assertNull(broken.decode(frames[1]))
    }

    @Test
    fun namesAreCleaned() {
        assertEquals("Rowan", Names.clean("  Ro​wan ‮ "))
        assertEquals(null, Names.clean("​​"))
        assertEquals(Names.MAX_LENGTH, Names.clean("x".repeat(100))!!.length)
        assertEquals("Teal Otter (2)", Names.unique("Teal Otter", listOf("teal otter")))
        assertTrue(Names.random().contains(' '))
    }

    @Test
    fun rateLimiterRefills() {
        var now = 0L
        val limiter = RateLimiter(perSecond = 2.0, burst = 2.0) { now }
        assertTrue(limiter.tryTake()); assertTrue(limiter.tryTake()); assertFalse(limiter.tryTake())
        now += 500_000_000
        assertTrue(limiter.tryTake())
    }
}
