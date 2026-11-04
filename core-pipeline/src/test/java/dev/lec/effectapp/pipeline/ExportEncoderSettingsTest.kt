package dev.lec.effectapp.pipeline

import org.junit.Assert.assertEquals
import org.junit.Assert.assertNotNull
import org.junit.Assert.assertNull
import org.junit.Assert.assertTrue
import org.junit.Test

class ExportEncoderSettingsTest {
    @Test
    fun defaultsNeedNoCustomEncoder() {
        assertTrue(ExportEncoderSettings().isDefault)
        assertTrue(ExportEncoderSettings().resolved(veryFast = false).isDefault)
    }

    @Test
    fun veryFastFillsOnlyWhatWasNotChosen() {
        val preset = ExportEncoderSettings().resolved(veryFast = true)
        assertEquals(ExportEncoderSettings.VERY_FAST_BITRATE, preset.videoBitrate)
        assertEquals(ExportEncoderSettings.VERY_FAST_KEYFRAME_SECONDS, preset.keyframeIntervalSeconds)
        assertEquals(ExportEncoderSettings.VERY_FAST_LONG_EDGE, preset.maxLongEdge)

        val chosen = ExportEncoderSettings(videoBitrate = 12_000_000, keyframeIntervalSeconds = 0f, maxLongEdge = 854)
            .resolved(veryFast = true)
        assertEquals(12_000_000, chosen.videoBitrate)
        assertEquals(0f, chosen.keyframeIntervalSeconds)
        assertEquals(854, chosen.maxLongEdge)
        // A larger resolution than Very fast's cap stays capped.
        assertEquals(1280, ExportEncoderSettings(maxLongEdge = 3840).resolved(veryFast = true).maxLongEdge)
    }

    @Test
    fun outOfRangeValuesAreReported() {
        assertNull(ExportEncoderSettings(videoBitrate = 8_000_000, keyframeIntervalSeconds = 0f, maxBFrames = 2, audioBitrate = 192_000).problem())
        assertNotNull(ExportEncoderSettings(videoBitrate = 50).problem())
        assertNotNull(ExportEncoderSettings(keyframeIntervalSeconds = -1f).problem())
        assertNotNull(ExportEncoderSettings(keyframeIntervalSeconds = Float.NaN).problem())
        assertNotNull(ExportEncoderSettings(maxBFrames = 9).problem())
        assertNotNull(ExportEncoderSettings(audioBitrate = 1_000_000).problem())
    }
}
