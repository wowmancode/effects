package dev.lec.effectapp.effects

import androidx.annotation.OptIn
import androidx.media3.common.Effect
import androidx.media3.common.util.UnstableApi

@OptIn(UnstableApi::class)
class PitchChangeEffect : LecEffect {
    override val id = "pitch_change"
    override val displayName = "Pitch / speed"
    override val category = EffectCategory.AUDIO
    override val params = listOf(EffectParam("speed", "Speed", 0.25f, 4f, 1f))

    override fun toMediaEffect(values: Map<String, Float>): Effect? = null
}
