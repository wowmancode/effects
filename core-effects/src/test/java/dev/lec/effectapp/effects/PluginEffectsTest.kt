package dev.lec.effectapp.effects

import dev.lec.effectapp.model.TimelineSegment
import org.junit.Assert.assertEquals
import org.junit.Assert.assertNotNull
import org.junit.Assert.assertNull
import org.junit.Test

class PluginEffectsTest {
    @Test
    fun validatesTheDocumentedVideoVariables() {
        val source = """
            red = 1.0 - red;
            green = clamp(green + sin(time) * 0.1, 0.0, 1.0);
            blue = mix(blue, x, 0.25);
        """.trimIndent()

        assertNull(validatePluginSource(source, audio = false))
    }

    @Test
    fun rejectsControlFlowAndUnknownNativeNames() {
        assertNotNull(validatePluginSource("while = red;", audio = false))
        assertNotNull(validatePluginSource("red = fopen(x);", audio = false))
        assertNotNull(validatePluginSource("sample = red;", audio = true))
    }

    @Test
    fun audioPluginProcessesNormalizedSamples() {
        val segment = TimelineSegment(
            id = "plugin",
            effectId = "plugin_audio",
            startMs = 0,
            endMs = 1_000,
            stringParams = mapOf("source" to "sample = sample * 0.5;"),
        )
        val state = requireNotNull(createAudioDspState(segment, 48_000, 1))

        assertEquals(9_999f, state.process(20_000, 0, 0).toFloat(), 1f)
    }
}
