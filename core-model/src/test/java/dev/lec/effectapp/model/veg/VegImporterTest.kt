package dev.lec.effectapp.model.veg

import dev.lec.effectapp.model.Clip
import dev.lec.effectapp.model.EditProject
import dev.lec.effectapp.model.Overlay
import java.nio.ByteBuffer
import java.nio.ByteOrder
import org.junit.Assert.assertEquals
import org.junit.Assert.assertFalse
import org.junit.Assert.assertTrue
import org.junit.Test

class VegImporterTest {
    private fun ticks(ms: Long) = ms * TICKS_PER_MS

    private fun event(
        startMs: Long,
        lengthMs: Long,
        mediaId: Int,
        rate: Double = 1.0,
        offsetMs: Long = 0,
        pitch: Double = 1.0,
        panCrop: List<VegPanCropKey> = emptyList(),
    ) = VegEvent(
        startTicks = ticks(startMs),
        lengthTicks = ticks(lengthMs),
        rate = rate,
        offsetTicks = ticks(offsetMs),
        mediaId = mediaId,
        takeName = "take",
        pitchRatio = pitch,
        panCrop = panCrop,
        coordWidth = if (panCrop.isEmpty()) 0 else 640,
        coordHeight = if (panCrop.isEmpty()) 0 else 360,
    )

    private val video = VegMedia(1, "C:\\clips\\video.mp4")
    private val song = VegMedia(2, "C:\\clips\\song.mp3")

    private fun solid(id: Int, bgra: FloatArray): VegMedia {
        val params = ByteBuffer.allocate(16).order(ByteOrder.LITTLE_ENDIAN).apply { bgra.forEach(::putFloat) }.array()
        return VegMedia(id, "META:\\Video Generator\\x", VegPlugin(VegClsid.SOLID_COLOR, "Solid", params))
    }

    @Test
    fun lowestFileLayerBecomesTheClipRowAndLayersAboveBecomeOverlays() {
        val file = VegFile(
            width = 640,
            height = 360,
            fps = 25.0,
            media = mapOf(1 to video, 2 to song),
            tracks = listOf(
                // Front: a strip at half speed, moved right by Track Motion.
                VegTrack(
                    index = 0,
                    isVideo = true,
                    motion = listOf(VegMotionKey(0, x = 0.5, y = 0.0, width = 640.0 / 360, height = 1.0)),
                    events = listOf(
                        event(
                            0, 1_000, 1, rate = 0.5, offsetMs = 400,
                            panCrop = listOf(VegPanCropKey(0, 160.0, 360.0, 320.0, 180.0, 0.0)),
                        ),
                    ),
                ),
                // Back: two plain cuts, the second one at double speed.
                VegTrack(1, true, events = listOf(event(0, 600, 1), event(600, 400, 1, rate = 2.0, offsetMs = 100))),
                VegTrack(2, false, events = listOf(event(0, 1_000, 2, offsetMs = 50, pitch = 2.0))),
            ),
        )
        val project = VegImporter.import(file, "test").project

        assertEquals(listOf(600L, 400L), project.clips.map(Clip::durationMs))
        val second = project.clips[1]
        assertEquals(2f, second.speed)
        // Stored in-points are scaled by the rate: 100 ms × 2.
        assertEquals(200L, second.trimStartMs)
        assertEquals(1_000L, second.sourceEndMs)
        assertTrue(project.clips.all { it.mediaMissing.not() && it.sourceUri.startsWith(VegImporter.MISSING_SCHEME) })

        val strip = second.overlays.first { !it.audioOnly }
        assertEquals(0, strip.lane)
        assertTrue(strip.fillFrame)
        assertEquals(0.5f, strip.speed)
        // 400 ms × 0.5, then 600 ms into the event at half speed.
        assertEquals(200L + 300L, strip.sourceStartMs)
        val place = strip.effectSegments.single { it.effectId == "frame_place" }.params
        assertEquals(0.25f, place.getValue("src_w"), 1e-4f)
        assertEquals(0.5f + 0.5f * 360f / 2f / 640f, place.getValue("dst_cx"), 1e-4f)
        assertEquals(160f / 640f, place.getValue("dst_w"), 1e-4f)

        val sound = second.overlays.single { it.audioOnly }
        assertEquals(12f, sound.audioSegments.single { it.effectId == "pitch_change" }.params.getValue("semitones"), 1e-3f)
        assertEquals(650L, sound.sourceStartMs)
        assertEquals(VegImporter.missingFileName(sound.sourceUri), "song.mp3")
    }

    @Test
    fun blendedGeneratorLayersAreLeftOutAndReported() {
        val file = VegFile(
            width = 640,
            height = 360,
            fps = 25.0,
            media = mapOf(1 to video, 3 to solid(3, floatArrayOf(1f, 0f, 0f, 1f))),
            tracks = listOf(
                VegTrack(0, true, compositeCode = 1, events = listOf(event(0, 500, 3))),
                VegTrack(1, true, events = listOf(event(0, 500, 3))),
                VegTrack(2, true, events = listOf(event(0, 500, 1))),
            ),
        )
        val imported = VegImporter.import(file, "test")
        val overlays = imported.project.clips.single().overlays
        assertEquals(1, overlays.size)
        // B, G, R, A = blue.
        assertEquals("generated:solid-ff0000ff", overlays.single().sourceUri)
        assertTrue(imported.generatedImages.containsKey("generated:solid-ff0000ff"))
        assertTrue(imported.notes.any { "blend" in it })
    }

    @Test
    fun gapsWithoutAFileArePaddedWithBlack() {
        val file = VegFile(
            width = 640,
            height = 360,
            fps = 25.0,
            media = mapOf(1 to video),
            tracks = listOf(VegTrack(0, true, events = listOf(event(300, 200, 1)))),
        )
        val clips = VegImporter.import(file, "test").project.clips
        assertEquals(listOf(300L, 200L), clips.map(Clip::durationMs))
        assertEquals("plugin_video", clips.first().effectSegments.single().effectId)
    }

    @Test
    fun relinkKeepsInPointsAndUpdatesOverlays() {
        val old = "missing:a"
        val project = EditProject(
            clips = listOf(
                Clip(
                    id = "c",
                    sourceUri = old,
                    displayName = "a",
                    trimStartMs = 500,
                    trimEndMs = 700,
                    speed = 2f,
                    mediaMissing = true,
                    overlays = listOf(Overlay(id = "o", sourceUri = old, displayName = "a", sourceStartMs = 90)),
                ),
            ),
        )
        val relinked = project.relinkSource(old, "content://new", "new.mp4", sourceDurationMs = 9_000)
        val clip = relinked.clips.single()
        assertEquals("content://new", clip.sourceUri)
        assertEquals(500L, clip.trimStartMs)
        assertEquals(900L, clip.sourceEndMs)
        assertFalse(clip.mediaMissing)
        assertEquals(9_000L, clip.overlays.single().sourceDurationMs)
        assertEquals(90L, clip.overlays.single().sourceStartMs)
    }

    @Test
    fun rtfTextKeepsOnlyTheWords() {
        val rtf = "{\\rtf1\\ansi{\\fonttbl{\\f0\\fnil Square721 BT;}}{\\colortbl ;\\red0\\green0\\blue0;}" +
            "\\viewkind4\\uc1\\pard\\qc\\cf1\\b\\f0\\fs56 Hello.VEG\\par}"
        assertEquals("Hello.VEG", RtfText.plainText(rtf))
        assertEquals(56, RtfText.fontHalfPoints(rtf))
    }

    @Test
    fun onlyProjectFilesAreRecognised() {
        assertFalse(VegReader.looksLike("{\"name\":\"x\"}".toByteArray().copyOf(64)))
    }
}
