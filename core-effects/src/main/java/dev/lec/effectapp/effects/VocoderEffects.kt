package dev.lec.effectapp.effects

import androidx.annotation.OptIn
import androidx.media3.common.Effect
import androidx.media3.common.util.UnstableApi

data class SplitPitchVoice(val semitones: Float, val level: Float = 1f)

class SplitPitchEffect : LecEffect {
    override val id = "split_pitch"
    override val displayName = "Split pitch harmonizer"
    override val category = EffectCategory.AUDIO
    override val params = listOf(
        EffectParam("dry_mix", "Original voice", 0f, 1f, 0.2f),
        EffectParam("voice_mix", "Split voices", 0f, 1f, 0.8f),
    )

    @OptIn(UnstableApi::class)
    override fun toMediaEffect(values: Map<String, Float>): Effect? = null

    companion object {
        const val MAX_VOICES = 12
        private val indexedVoiceParam = Regex("""voice_\d+_(semitones|level)""")
        val defaultVoices = listOf(SplitPitchVoice(-1f), SplitPitchVoice(1f))

        fun decodeVoices(values: Map<String, Float>): List<SplitPitchVoice> {
            val count = values["voice_count"]?.toInt()?.coerceIn(1, MAX_VOICES)
            if (count == null) {
                return listOf(
                    SplitPitchVoice(values["lower_semitones"] ?: -1f),
                    SplitPitchVoice(values["upper_semitones"] ?: 1f),
                )
            }
            return List(count) { index ->
                SplitPitchVoice(
                    semitones = (values["voice_${index}_semitones"] ?: 0f).coerceIn(-48f, 48f),
                    level = (values["voice_${index}_level"] ?: 1f).coerceIn(0f, 1f),
                )
            }
        }

        fun encodeVoices(voices: List<SplitPitchVoice>, existing: Map<String, Float>): Map<String, Float> {
            val safe = voices.take(MAX_VOICES).ifEmpty { listOf(SplitPitchVoice(0f)) }
            val result = existing.filterKeys { key ->
                key != "voice_count" &&
                    !indexedVoiceParam.matches(key) &&
                    key != "lower_semitones" &&
                    key != "upper_semitones"
            }.toMutableMap()
            result["voice_count"] = safe.size.toFloat()
            safe.forEachIndexed { index, voice ->
                result["voice_${index}_semitones"] = voice.semitones.coerceIn(-48f, 48f)
                result["voice_${index}_level"] = voice.level.coerceIn(0f, 1f)
            }
            return result
        }
    }
}

class VocoderEffect(
    override val id: String,
    override val displayName: String,
    customCarrier: Boolean = false,
) : LecEffect {
    override val category = EffectCategory.AUDIO
    override val params = buildList {
        if (!customCarrier) add(EffectParam("frequency_hz", "Carrier pitch (Hz)", 55f, 440f, 120f))
        add(EffectParam("response", "Voice response", 0f, 1f, 0.45f))
        add(EffectParam("mix", "Vocoder mix", 0f, 1f, 0.85f))
    }

    @OptIn(UnstableApi::class)
    override fun toMediaEffect(values: Map<String, Float>): Effect? = null
}

class VocoderLabEffect : LecEffect {
    override val id = "vocoder_lab"
    override val displayName = "Vocoder Lab"
    override val category = EffectCategory.AUDIO
    override val params = listOf(
        EffectParam("carrier_pitch", "Carrier pitch (Hz)", 20f, 2_000f, 110f),
        EffectParam("carrier_shape", "Carrier shape (legacy)", 0f, 1f, 0.25f),
        EffectParam("osc1_shape", "Oscillator 1 shape", 0f, 3f, 0.75f),
        EffectParam("osc1_level", "Oscillator 1 level", 0f, 1f, 1f),
        EffectParam("osc1_octave", "Oscillator 1 octave", -4f, 4f, 0f),
        EffectParam("osc1_fine", "Oscillator 1 fine (cents)", -100f, 100f, 0f),
        EffectParam("osc2_shape", "Oscillator 2 shape", 0f, 3f, 1.5f),
        EffectParam("osc2_level", "Oscillator 2 level", 0f, 1f, 0f),
        EffectParam("osc2_octave", "Oscillator 2 octave", -4f, 4f, 0f),
        EffectParam("osc2_fine", "Oscillator 2 fine (cents)", -100f, 100f, 7f),
        EffectParam("osc3_shape", "Oscillator 3 shape", 0f, 3f, 2.25f),
        EffectParam("osc3_level", "Oscillator 3 level", 0f, 1f, 0f),
        EffectParam("osc3_octave", "Oscillator 3 octave", -4f, 4f, 1f),
        EffectParam("osc3_fine", "Oscillator 3 fine (cents)", -100f, 100f, -7f),
        EffectParam("sub_level", "Sub oscillator level", 0f, 1f, 0f),
        EffectParam("sub_octave", "Sub oscillator octave", -4f, 0f, -1f),
        EffectParam("organ", "Pipe organ", 0f, 1f, 0f),
        EffectParam("noise_level", "Noise level", 0f, 1f, 0.15f),
        EffectParam("air", "Air brightness", 0f, 1f, 0.15f),
        EffectParam("unison_voices", "Unison voices", 1f, 7f, 1f),
        EffectParam("unison_detune", "Unison detune (cents)", 0f, 100f, 8f),
        EffectParam("stereo_spread", "Unison stereo spread", 0f, 1f, 0f),
        EffectParam("brightness", "Band brightness", 0f, 1f, 0.55f),
        EffectParam("formant_shift", "Formant shift", -24f, 24f, 0f),
        EffectParam("formant_width", "Formant width", 0.5f, 2.5f, 1f),
        EffectParam("bands", "Vocoder bands", 4f, 24f, 10f),
        EffectParam("response", "Envelope response", 0f, 1f, 0.45f),
        EffectParam("modulator_drive", "Modulator drive", 0f, 1f, 0f),
        EffectParam("modulator_gate", "Modulator gate", 0f, 1f, 0f),
        EffectParam("filter_mode", "Carrier filter mode", 0f, 2f, 0f),
        EffectParam("filter_cutoff", "Carrier filter cutoff (Hz)", 40f, 18_000f, 8_000f),
        EffectParam("filter_resonance", "Carrier filter resonance", 0f, 1f, 0f),
        EffectParam("filter_env", "Envelope → filter", -1f, 1f, 0f),
        EffectParam("motion_rate", "LFO rate (Hz)", 0.01f, 30f, 0f),
        EffectParam("motion_depth", "LFO pitch depth", 0f, 1f, 0f),
        EffectParam("lfo_shape", "LFO shape", 0f, 3f, 0f),
        EffectParam("lfo_filter", "LFO → filter", -1f, 1f, 0f),
        EffectParam("lfo_amp", "LFO → amplitude", 0f, 1f, 0f),
        EffectParam("lfo_pan", "LFO → pan", 0f, 1f, 0f),
        EffectParam("growl", "Growl", 0f, 1f, 0f),
        EffectParam("drive", "Output drive", 0f, 1f, 0.2f),
        EffectParam("dry_mix", "Original voice", 0f, 1f, 0.1f),
        EffectParam("wet_mix", "Vocoder mix", 0f, 1f, 0.9f),
    )
    @OptIn(UnstableApi::class)
    override fun toMediaEffect(values: Map<String, Float>): Effect? = null
}
