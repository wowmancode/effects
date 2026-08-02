package dev.lec.effectapp.effects

import androidx.annotation.OptIn
import androidx.media3.common.Effect
import androidx.media3.common.util.UnstableApi

@OptIn(UnstableApi::class)
class PitchChangeEffect : LecEffect {
    override val id = "pitch_change"
    override val displayName = "Pitch shift"
    override val category = EffectCategory.AUDIO
    override val params = listOf(
        EffectParam("semitones", "Semitones", -12f, 12f, 0f),
        EffectParam("mix", "Shifted voice", 0f, 1f, 1f),
    )

    override fun toMediaEffect(values: Map<String, Float>): Effect? = null
}
