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
}
