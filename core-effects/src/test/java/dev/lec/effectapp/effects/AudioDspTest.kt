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
    fun splitPitchStartsOneSemitoneApartInBothDirections() {
        val split = requireNotNull(EffectRegistry.byId("split_pitch"))

        assertEquals(-1f, split.params.first { it.id == "lower_semitones" }.default)
        assertEquals(1f, split.params.first { it.id == "upper_semitones" }.default)
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
        assertTrue(custom.params.any { it.id == "harmonic_4" })
    }
}
