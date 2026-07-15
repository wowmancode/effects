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
    fun acceptsWarpSamplingBlendModesAndCustomControls() {
        val source = """
            x = pixelate(mirror(x + sin(time) * control1), 0.05);
            red = blend_difference(red, sample_red(x, y), control2);
            green = blend_screen(green, offset_green(0.02, 0.0), control3);
            blue = blend_overlay(blue, sample_blue(x, y), control4);
        """.trimIndent()

        assertNull(validatePluginSource(source, audio = false))
        val controls = requireNotNull(EffectRegistry.byId("plugin_video")).params
        assertEquals(8, controls.size)
        assertEquals("control1", controls.first().id)
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

    @Test
    fun audioPluginCanReadHistoryForEchoes() {
        val segment = TimelineSegment(
            id = "echo-plugin",
            effectId = "plugin_audio",
            startMs = 0,
            endMs = 1_000,
            stringParams = mapOf("source" to "sample = sample + delay(2.0) * 0.5;"),
        )
        val state = requireNotNull(createAudioDspState(segment, 1_000, 1))

        assertEquals(10_000f, state.process(10_000, 0, 0).toFloat(), 1f)
        state.process(0, 1, 0)
        assertEquals(5_000f, state.process(0, 2, 0).toFloat(), 2f)
    }

    @Test
    fun acceptsAudioModulationAndPitchPrimitives() {
        assertNull(validatePluginSource("sample = mix(delay(20.0 + sine(control1)), pitch(control2), 0.5);", audio = true))
    }
}
