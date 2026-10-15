package dev.lec.effectapp.effects

import androidx.annotation.OptIn
import androidx.media3.common.Effect
import androidx.media3.common.util.UnstableApi
import androidx.media3.effect.HslAdjustment

@OptIn(UnstableApi::class)
class HueRotateEffect : LecEffect {
    override val id = "hue_rotate"
    override val displayName = "Hue rotate"
    override val category = EffectCategory.EFFECTS
    override val params = listOf(EffectParam("degrees", "Degrees", -180f, 180f, 45f))

    override fun toMediaEffect(values: Map<String, Float>): Effect =
        HslAdjustment.Builder().adjustHue(values["degrees"] ?: 45f).build()
}
