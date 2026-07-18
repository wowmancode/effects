package dev.lec.effectapp.effects

import androidx.annotation.OptIn
import androidx.media3.common.Effect
import androidx.media3.common.util.UnstableApi

/** General color-model effects. Colorspace values: 0 RGB, 1 HSV, 2 YUV, 3 LAB. */
@OptIn(UnstableApi::class)
class ColorspaceHueShiftEffect : LecEffect {
    override val id = "colorspace_hue_shift"
    override val displayName = "Colorspace hue shift"
    override val category = EffectCategory.EFFECTS
    override val params = listOf(
        EffectParam("colorspace", "Colorspace: RGB 0 · HSV 1 · YUV 2 · LAB 3", 0f, 3f, 1f),
        EffectParam("degrees", "Hue shift (degrees)", -180f, 180f, 0f),
        EffectParam("mix", "Mix", 0f, 1f, 1f),
    )

    override fun toMediaEffect(values: Map<String, Float>): Effect = LabColorEffect(
        mode = 1,
        mix = values["mix"] ?: 1f,
        degrees = values["degrees"] ?: 0f,
        channels = floatArrayOf(1f, 1f, 1f),
        colorspace = (values["colorspace"] ?: 1f).toInt().coerceIn(0, 3),
    )
}

@OptIn(UnstableApi::class)
class ColorspaceInvertEffect : LecEffect {
    override val id = "colorspace_invert"
    override val displayName = "Colorspace invert"
    override val category = EffectCategory.EFFECTS
    override val params = listOf(
        EffectParam("colorspace", "Colorspace: RGB 0 · HSV 1 · YUV 2 · LAB 3", 0f, 3f, 0f),
        EffectParam("invert", "Invert level", 0f, 1f, 1f),
    )

    override fun toMediaEffect(values: Map<String, Float>): Effect = LabColorEffect(
        mode = 0,
        mix = values["invert"] ?: 1f,
        degrees = 0f,
        channels = floatArrayOf(1f, 1f, 1f),
        colorspace = (values["colorspace"] ?: 0f).toInt().coerceIn(0, 3),
    )
}
