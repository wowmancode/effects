package dev.lec.effectapp.effects
import dev.lec.effectapp.effects.PLUGIN_LANGUAGE_GLSL

import dev.lec.effectapp.model.TimelineSegment
import org.junit.Assert.assertEquals
import org.junit.Assert.assertNotNull
import org.junit.Assert.assertNull
import org.junit.Assert.assertTrue
import kotlin.math.abs
import org.junit.Test

class PluginEffectsTest {
    @Test
    fun rejectsDeeplyNestedOrHugePlugins() {
        // These would overflow the stack or stall rendering if they reached the parser unbounded.
        assertNotNull(validatePluginSource("red = " + "(".repeat(3_000) + "red" + ")".repeat(3_000) + ";", audio = false))
        assertNotNull(validatePluginSource("red = " + "-".repeat(5_000) + "red;", audio = false))
        assertNotNull(validatePluginSource("sample = " + List(3_000) { "sample" }.joinToString("+") + ";", audio = true))
        assertNull(validatePluginSource("red = ((((red))));", audio = false))
    }

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
    fun acceptsTemporaryVariablesDimensionsLogicAndNoise() {
        val source = """
            temp1 = noise(x * width + y * height + time);
            temp2 = select(greater(aspect, 1.0), temp1, 1.0 - temp1);
            red = mix(red, temp2, control1);
        """.trimIndent()

        assertNull(validatePluginSource(source, audio = false))
        assertNull(validatePluginSource("temp1 = tan(time); sample = select(less(temp1, 0.0), -sample, sample);", audio = true))
    }

    @Test
    fun acceptsCompleteGlslVideoShaders() {
        val source = """
            precision highp float;
            uniform sampler2D uTexSampler;
            uniform float uTime;
            varying vec2 vTexSamplingCoord;
            void main() {
                vec2 uv = vTexSamplingCoord;
                uv.x += sin(uv.y * 20.0 + uTime) * 0.02;
                gl_FragColor = texture2D(uTexSampler, uv);
            }
        """.trimIndent()

        assertNull(validatePluginSource(source, audio = false, language = PLUGIN_LANGUAGE_GLSL))
        assertNotNull(validatePluginSource(source, audio = true, language = PLUGIN_LANGUAGE_GLSL))
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

    private fun audioPlugin(source: String, startMs: Long = 0, endMs: Long = 60_000, controls: Map<String, Float> = emptyMap()) =
        requireNotNull(
            createAudioDspState(
                TimelineSegment(id = "p", effectId = "plugin_audio", startMs = startMs, endMs = endMs, params = controls, stringParams = mapOf("source" to source)),
                48_000,
                2,
            ),
        )

    @Test
    fun defaultAudioPluginChangesTheSound() {
        val state = audioPlugin(DEFAULT_AUDIO_PLUGIN_SOURCE)
        // Constant input through a tremolo comes out at varying levels.
        val levels = (0 until 48_000).map { frame ->
            val timeMs = frame * 1_000L / 48_000
            state.process(16_000, timeMs, 0).also { state.process(16_000, timeMs, 1) }
        }
        assertTrue(levels.maxOrNull()!! - levels.minOrNull()!! > 5_000)
    }

    @Test
    fun oscillatorsAreSmoothBetweenSamples() {
        // time advances every sample, not once a millisecond, so a 440 Hz tone is a clean wave.
        val state = audioPlugin("sample = sine(440.0) * 0.5;")
        var previous = state.process(0, 0, 0).also { state.process(0, 0, 1) }
        var largestStep = 0
        for (frame in 1 until 4_800) {
            val timeMs = frame * 1_000L / 48_000
            val value = state.process(0, timeMs, 0)
            state.process(0, timeMs, 1)
            largestStep = maxOf(largestStep, abs(value - previous))
            previous = value
        }
        // 440 Hz at half volume moves at most ~950 per sample at 48 kHz.
        assertTrue("step $largestStep", largestStep < 1_200)
    }

    @Test
    fun timeStartsAtZeroWhereTheEffectStarts() {
        // Outputs time/10 so it fits in a sample; the effect starts 3 s into the clip.
        val state = audioPlugin("sample = time / 10.0;", startMs = 3_000)
        assertEquals(0f, state.process(0, 3_000, 0).toFloat(), 2f)
        // Before the effect starts the sound passes through untouched.
        val before = audioPlugin("sample = time / 10.0;", startMs = 3_000)
        assertEquals(1_234f, before.process(1_234, 1_000, 0).toFloat(), 1f)
    }

    @Test
    fun audioPluginIsFastEnoughForRealTime() {
        val state = audioPlugin("temp1 = sine(control2 * 400.0 + 100.0); sample = mix(sample, sample * temp1, control1) + delay(20.0) * 0.3;")
        val frames = 48_000 * 10
        val started = System.nanoTime()
        for (frame in 0 until frames) {
            val timeMs = frame * 1_000L / 48_000
            state.process(8_000, timeMs, 0)
            state.process(8_000, timeMs, 1)
        }
        val elapsedMs = (System.nanoTime() - started) / 1_000_000
        // Ten seconds of stereo sound; a phone needs this well under ten seconds.
        assertTrue("took $elapsedMs ms", elapsedMs < 3_000)
    }
}
