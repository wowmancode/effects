package dev.lec.effectapp.effects

import dev.lec.effectapp.model.TimelineSegment
import org.junit.Assert.assertEquals
import org.junit.Assert.assertFalse
import org.junit.Assert.assertNotNull
import org.junit.Assert.assertTrue
import org.junit.Test

class AudioDspTest {
    @Test
    fun everyRegisteredAudioEffectHasAnExportProcessor() {
        EffectRegistry.byCategory(EffectCategory.AUDIO).forEach { effect ->
            val segment = TimelineSegment(
                id = effect.id,
                effectId = effect.id,
                startMs = 0,
                endMs = 1_000,
                params = effect.params.associate { it.id to it.default },
            )

            assertNotNull(effect.id, audioProcessorFor(segment))
        }
    }

    @Test
    fun pitchIsDurationPreservingSemitoneControl() {
        val pitch = requireNotNull(EffectRegistry.byId("pitch_change"))

        assertTrue(pitch.params.any { it.id == "semitones" && it.min == -12f && it.max == 12f })
        assertFalse(pitch.params.any { it.id == "speed" })
    }

    @Test
    fun splitPitchSupportsAResizableVoiceList() {
        assertEquals(listOf(-1f, 1f), SplitPitchEffect.decodeVoices(emptyMap()).map { it.semitones })
        val voices = List(6) { index -> SplitPitchVoice(index.toFloat() - 3f, level = 0.75f) }
        val encoded = SplitPitchEffect.encodeVoices(voices, mapOf("dry_mix" to 0.2f))
        val decoded = SplitPitchEffect.decodeVoices(encoded)

        assertEquals(6, decoded.size)
        assertEquals(-3f, decoded.first().semitones)
        assertEquals(0.75f, decoded.last().level)
        assertEquals(0.2f, encoded["dry_mix"])
    }

    @Test
    fun allRequestedVocoderCarriersAreRegistered() {
        val ids = EffectRegistry.byCategory(EffectCategory.AUDIO).map { it.id }.toSet()

        assertTrue(
            ids.containsAll(
                setOf("vocoder_square", "vocoder_saw", "vocoder_sine", "vocoder_triangle", "vocoder_custom"),
            ),
        )
        val custom = requireNotNull(EffectRegistry.byId("vocoder_custom"))
        assertFalse(custom.params.any { it.id == "frequency_hz" })
    }

    @Test
    fun modulationAndBitcrushEffectsAreRegistered() {
        val ids = EffectRegistry.byCategory(EffectCategory.AUDIO).map { it.id }.toSet()

        assertTrue("tremolo" in ids)
        assertTrue("bitcrush" in ids)
        assertTrue("vibrato" in ids)
    }

    @Test
    fun tremoloModulatesAmplitude() {
        val segment = TimelineSegment(
            id = "tremolo",
            effectId = "tremolo",
            startMs = 0,
            endMs = 1_000,
            params = mapOf("rate_hz" to 5f, "depth" to 1f, "mix" to 1f),
        )
        val state = requireNotNull(createAudioDspState(segment, 48_000, 1))

        val atStart = state.process(20_000, 0, 0)
        val atTrough = state.process(20_000, 50, 0)

        assertTrue(atStart > atTrough)
    }

    @Test
    fun vibratoUsesAModulatedDelayLine() {
        val segment = TimelineSegment(
            id = "vibrato",
            effectId = "vibrato",
            startMs = 0,
            endMs = 1_000,
            params = mapOf("rate_hz" to 5f, "depth_ms" to 6f, "mix" to 1f),
        )
        val state = requireNotNull(createAudioDspState(segment, 48_000, 1))

        assertEquals(0, state.process(20_000, 0, 0))
        assertTrue(requireNotNull(EffectRegistry.byId("vibrato")).params.any { it.id == "depth_ms" })
    }

    @Test
    fun bitcrushHoldsAndQuantizesSamples() {
        val segment = TimelineSegment(
            id = "bitcrush",
            effectId = "bitcrush",
            startMs = 0,
            endMs = 1_000,
            params = mapOf("bit_depth" to 4f, "sample_rate" to 1_000f, "mix" to 1f),
        )
        val state = requireNotNull(createAudioDspState(segment, 48_000, 1))

        val first = state.process(12_345, 0, 0)
        val held = state.process(-12_345, 1, 0)

        assertEquals(first, held)
        assertEquals(0, first % 4_096)
    }

    @Test
    fun creativeEffectsAndVocoderLabAreRegistered() {
        val ids = EffectRegistry.byCategory(EffectCategory.AUDIO).map { it.id }.toSet()

        assertTrue(ids.containsAll(setOf("overdrive", "flanger", "ring_mod", "filter", "auto_pan", "vocoder_lab")))
        val lab = requireNotNull(EffectRegistry.byId("vocoder_lab"))
        assertTrue(lab.params.size >= 10)
        assertTrue(lab.params.any { it.id == "carrier_shape" })
        assertTrue(lab.params.any { it.id == "organ" })
        assertTrue(lab.params.any { it.id == "formant_shift" })
    }

    @Test
    fun vocoderLabProducesBoundedAudio() {
        val effect = requireNotNull(EffectRegistry.byId("vocoder_lab"))
        val segment = TimelineSegment(
            id = "vocoder-lab",
            effectId = effect.id,
            startMs = 0,
            endMs = 1_000,
            params = effect.params.associate { it.id to it.default },
        )
        val state = requireNotNull(createAudioDspState(segment, 48_000, 1))
        val rendered = (0 until 1_000).map { index -> state.process(20_000, index / 48L, 0) }

        assertTrue(rendered.all { it in Short.MIN_VALUE.toInt()..Short.MAX_VALUE.toInt() })
        assertTrue(rendered.any { it != 0 })
    }
}
