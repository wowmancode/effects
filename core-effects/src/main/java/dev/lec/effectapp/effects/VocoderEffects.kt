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
                    semitones = (values["voice_${index}_semitones"] ?: 0f).coerceIn(-12f, 12f),
                    level = (values["voice_${index}_level"] ?: 1f).coerceIn(0f, 1f),
                )
            }
        }

        fun encodeVoices(voices: List<SplitPitchVoice>, existing: Map<String, Float>): Map<String, Float> {
            val safe = voices.take(MAX_VOICES).ifEmpty { listOf(SplitPitchVoice(0f)) }
            val result = existing.filterKeys { key ->
                !key.startsWith("voice_") && key != "lower_semitones" && key != "upper_semitones"
            }.toMutableMap()
            result["voice_count"] = safe.size.toFloat()
            safe.forEachIndexed { index, voice ->
                result["voice_${index}_semitones"] = voice.semitones.coerceIn(-12f, 12f)
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
