package dev.lec.effectapp.effects

import androidx.annotation.OptIn
import androidx.media3.common.Effect
import androidx.media3.common.util.UnstableApi

class SplitPitchEffect : LecEffect {
    override val id = "split_pitch"
    override val displayName = "Split pitch harmonizer"
    override val category = EffectCategory.AUDIO
    override val params = listOf(
        EffectParam("lower_semitones", "Lower voice (semitones)", -12f, 12f, -1f),
        EffectParam("upper_semitones", "Upper voice (semitones)", -12f, 12f, 1f),
        EffectParam("dry_mix", "Original voice", 0f, 1f, 0.2f),
        EffectParam("voice_mix", "Split voices", 0f, 1f, 0.8f),
    )

    @OptIn(UnstableApi::class)
    override fun toMediaEffect(values: Map<String, Float>): Effect? = null
}

class VocoderEffect(
    override val id: String,
    override val displayName: String,
    customCarrier: Boolean = false,
) : LecEffect {
    override val category = EffectCategory.AUDIO
    override val params = buildList {
        add(EffectParam("frequency_hz", "Carrier pitch (Hz)", 55f, 440f, 120f))
        add(EffectParam("response", "Voice response", 0f, 1f, 0.45f))
        add(EffectParam("mix", "Vocoder mix", 0f, 1f, 0.85f))
        if (customCarrier) {
            add(EffectParam("harmonic_2", "Second harmonic", 0f, 1f, 0.6f))
            add(EffectParam("harmonic_3", "Third harmonic", 0f, 1f, 0.35f))
            add(EffectParam("harmonic_4", "Fourth harmonic", 0f, 1f, 0.2f))
        }
    }

    @OptIn(UnstableApi::class)
    override fun toMediaEffect(values: Map<String, Float>): Effect? = null
}
