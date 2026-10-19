package dev.lec.effectapp.model

import org.junit.Assert.assertEquals
import org.junit.Assert.assertFalse
import org.junit.Assert.assertNull
import org.junit.Assert.assertThrows
import org.junit.Assert.assertTrue
import org.junit.Test

class IhtxPlanTest {
    private val clip = Clip(
        "clip", "content://original", "video.mp4", trimEndMs = 2_000,
        effectSegments = listOf(TimelineSegment("original", "hue_rotate", 0, 2_000)),
    )
    private val base = EditProject(clips = listOf(clip))
    private val a = EffectPreset("a", "Preset A", effectSegments = listOf(TimelineSegment("", "mirror", 0, 100)))
    private val b = EffectPreset("b", "Preset B", effectSegments = listOf(TimelineSegment("", "bitcrush_video", 0, 100)))
    private val c = EffectPreset("c", "Preset C", audioSegments = listOf(TimelineSegment("", "volume", 0, 100)))

    @Test
    fun switchesPresetsAfterExactlyTenExports() {
        val plan = IhtxPlan(base, 10, listOf(a, b, c))
        assertEquals(30, plan.totalExports)
        assertEquals(a, plan.presetForPass(0))
        assertEquals(a, plan.presetForPass(9))
        assertEquals(b, plan.presetForPass(10))
        assertEquals(b, plan.presetForPass(19))
        assertEquals(c, plan.presetForPass(20))
        assertEquals(c, plan.presetForPass(29))
        assertThrows(IllegalArgumentException::class.java) { plan.presetForPass(30) }
    }

    @Test
    fun firstExportUsesFirstPresetAcrossEveryClip() {
        val project = base.copy(clips = listOf(clip, clip.copy(id = "second", trimEndMs = 3_000)))
        val first = IhtxPlan(project, 10, listOf(a, b)).firstProject()
        first.clips.forEach {
            assertEquals(listOf("mirror"), it.effectSegments.map(TimelineSegment::effectId))
            assertEquals(it.durationMs, it.effectSegments.single().endMs)
            assertTrue(it.audioSegments.isEmpty())
        }
        assertEquals(project.clips.map { it.sourceUri }, first.clips.map { it.sourceUri })
    }

    @Test
    fun changingPresetKeepsThePreviousRenderWithoutReapplyingTheOldStack() {
        val plan = IhtxPlan(base, 10, listOf(a, b, c))
        val next = plan.nextProject("file:///export-10.mp4", 10).clips.single()
        assertEquals("file:///export-10.mp4", next.sourceUri)
        assertEquals(listOf("bitcrush_video"), next.effectSegments.map(TimelineSegment::effectId))
        assertEquals(0L, next.trimStartMs)
        assertEquals(base.durationMs, next.durationMs)
        assertEquals(1f, next.speed)
        val audioBlock = plan.nextProject("file:///export-20.mp4", 20).clips.single()
        assertTrue(audioBlock.effectSegments.isEmpty())
        assertEquals(listOf("volume"), audioBlock.audioSegments.map(TimelineSegment::effectId))
    }

    @Test
    fun standardIhtxRetainsItsCurrentStack() {
        val plan = IhtxPlan(base, 10)
        assertEquals(10, plan.totalExports)
        assertEquals(base, plan.firstProject())
        assertNull(plan.presetForPass(5))
        assertEquals(clip.effectSegments, plan.nextProject("file:///previous.mp4", 5).clips.single().effectSegments)
    }

    @Test
    fun audioPrimingIsRemovedUnlessTheActivePresetReversesAudio() {
        val reverse = c.copy(audioSegments = listOf(TimelineSegment("", "reverse_audio", 0, 100)))
        val plan = IhtxPlan(base, 10, listOf(a, reverse))
        assertEquals(SourceOverride("file:///previous.mp4", 21), plan.nextProject("file:///previous.mp4", 9, 21).clips.single().audioOverride)
        assertNull(plan.nextProject("file:///previous.mp4", 10, 21).clips.single().audioOverride)
    }

    @Test
    fun presetsCanReplaceAudioDuringTheSequence() {
        val audioPreset = b.copy(replacementAudio = PresetAudio("content://song", "song.mp3", 1_000))
        val plan = IhtxPlan(base, 10, listOf(a, audioPreset))
        val next = plan.nextProject("file:///previous.mp4", 10).clips.single()
        assertTrue(next.hasReplacementAudio)
        assertEquals("content://song", next.overlays.single().sourceUri)
        assertEquals(next.durationMs, next.overlays.single().endMs)
    }

    @Test
    fun customPositionsPlaceEachOverlayOnlyAtItsBlockBoundary() {
        val overlays = listOf(
            Overlay("first", "content://one", "one.mp4", isVideo = true),
            Overlay("second", "content://two", "two.mp4", isVideo = true),
        )
        val pattern = listOf(IhtxGridCell(2, 2), IhtxGridCell(0, 1))
        val plan = IhtxPlan(base, 2, overlays = overlays, gridSize = 3, pattern = pattern)
        assertEquals(6, plan.totalExports)
        assertFalse(plan.mutesBaseAudio(0))
        assertFalse(plan.mutesBaseAudio(1))
        assertTrue(plan.mutesBaseAudio(2))
        assertFalse(plan.mutesBaseAudio(3))
        assertTrue(plan.mutesBaseAudio(4))
        val first = plan.nextProject("file:///pass-2.mp4", 2).clips.single().overlays.single()
        assertEquals("first", first.id)
        assertEquals(1.02f / 3, first.scale, .0001f)
        assertEquals(2f / 3, first.offsetX, .0001f)
        assertEquals(-2f / 3, first.offsetY, .0001f)
        assertTrue(plan.nextProject("file:///pass-3.mp4", 3).clips.single().overlays.isEmpty())
        val second = plan.nextProject("file:///pass-4.mp4", 4).clips.single().overlays.single()
        assertEquals("second", second.id)
        assertEquals(0f, second.offsetX, .0001f)
        assertEquals(2f / 3, second.offsetY, .0001f)
    }

    @Test
    fun shortPatternsRepeatWithoutPlacingOverlaysOutsideTheGrid() {
        val cell = IhtxGridCell(1, 1)
        val custom = IhtxPlan(base, 1, pattern = listOf(cell))
        assertEquals(cell, custom.cellForOverlay(0))
        assertEquals(cell, custom.cellForOverlay(99))
        val rows = IhtxPlan(base, 1)
        assertEquals(IhtxGridCell(1, 1), rows.cellForOverlay(3))
        assertEquals(IhtxGridCell(0, 0), rows.cellForOverlay(4))
    }

    @Test
    fun presetAndOverlayChangeTogetherEveryTenExports() {
        val overlays = List(3) { Overlay("overlay-$it", "content://overlay-$it", "overlay.mp4", isVideo = true) }
        val plan = IhtxPlan(base, 10, listOf(a, b), overlays)
        assertEquals(40, plan.totalExports)
        assertEquals(a, plan.presetForPass(9))
        assertEquals(b, plan.presetForPass(10))
        assertEquals(a, plan.presetForPass(20))
        assertEquals(b, plan.presetForPass(30))
        for (index in listOf(10, 20, 30)) {
            assertTrue(plan.mutesBaseAudio(index))
            val next = plan.nextProject("file:///pass-$index.mp4", index).clips.single()
            assertEquals("overlay-${index / 10 - 1}", next.overlays.single().id)
        }
    }

    @Test
    fun remainingPresetsContinueAfterTheLastOverlayWithoutAddingItAgain() {
        val overlay = Overlay("one", "content://one", "one.mp4", isVideo = true)
        val plan = IhtxPlan(base, 10, listOf(a, b, c), listOf(overlay))
        assertEquals(30, plan.totalExports)
        assertTrue(plan.mutesBaseAudio(10))
        assertFalse(plan.mutesBaseAudio(20))
        assertEquals(c, plan.presetForPass(20))
        assertTrue(plan.nextProject("file:///pass-20.mp4", 20).clips.single().overlays.isEmpty())
    }

    @Test
    fun introducingAnOverlayDoesNotDiscardPresetReplacementAudio() {
        val audioPreset = a.copy(replacementAudio = PresetAudio("content://song", "song.mp3", 1_000))
        val overlay = Overlay("tile", "content://tile", "tile.mp4", isVideo = true)
        val plan = IhtxPlan(base, 1, listOf(audioPreset), listOf(overlay))
        val next = plan.nextProject("file:///pass-1.mp4", 1).clips.single()
        assertEquals(2, next.overlays.size)
        assertTrue(next.hasReplacementAudio)
        assertEquals("tile", next.overlays.single { !it.replacesClipAudio }.id)
    }

    @Test
    fun invalidCountsAndOffGridPositionsCannotStartAnExport() {
        assertThrows(IllegalArgumentException::class.java) { IhtxPlan(base, 0) }
        assertThrows(IllegalArgumentException::class.java) { IhtxPlan(base, 1_001) }
        assertThrows(IllegalArgumentException::class.java) { IhtxPlan(base, 1_000, List(11) { a }) }
        assertThrows(IllegalArgumentException::class.java) { IhtxPlan(base, 1, pattern = listOf(IhtxGridCell(-1, 0))) }
    }
}
