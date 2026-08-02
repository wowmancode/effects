package dev.lec.effectapp.effects

import androidx.annotation.OptIn
import androidx.media3.common.Effect
import androidx.media3.common.util.UnstableApi

/** General color-model effects. Colorspaces: RGB, HSV, HSL, YUV, YCbCr, YCoCg, XYZ, LAB, CMY. */
@OptIn(UnstableApi::class)
class ColorspaceHueShiftEffect : LecEffect {
    override val id = "colorspace_hue_shift"
    override val displayName = "Colorspace hue shift"
    override val category = EffectCategory.EFFECTS
    override val params = listOf(
        EffectParam("colorspace", "Colorspace: RGB 0 · HSV 1 · HSL 2 · YUV 3 · YCbCr 4 · YCoCg 5 · XYZ 6 · LAB 7 · CMY 8", 0f, 8f, 1f),
        EffectParam("degrees", "Hue shift (degrees)", -180f, 180f, 0f),
        EffectParam("mix", "Mix", 0f, 1f, 1f),
    )

    override fun toMediaEffect(values: Map<String, Float>): Effect = LabColorEffect(
        mode = 1,
        mix = values["mix"] ?: 1f,
        degrees = values["degrees"] ?: 0f,
        channels = floatArrayOf(1f, 1f, 1f),
        colorspace = (values["colorspace"] ?: 1f).toInt().coerceIn(0, 8),
    )
}

@OptIn(UnstableApi::class)
class ColorspaceInvertEffect : LecEffect {
    override val id = "colorspace_invert"
    override val displayName = "Colorspace invert"
    override val category = EffectCategory.EFFECTS
    override val params = listOf(
        EffectParam("colorspace", "Colorspace: RGB 0 · HSV 1 · HSL 2 · YUV 3 · YCbCr 4 · YCoCg 5 · XYZ 6 · LAB 7 · CMY 8", 0f, 8f, 0f),
        EffectParam("invert", "Invert level", 0f, 1f, 1f),
        EffectParam("red", "Invert R channel", 0f, 1f, 1f, ParamKind.BOOLEAN),
        EffectParam("green", "Invert G channel", 0f, 1f, 1f, ParamKind.BOOLEAN),
        EffectParam("blue", "Invert B channel", 0f, 1f, 1f, ParamKind.BOOLEAN),
    )

    override fun toMediaEffect(values: Map<String, Float>): Effect = LabColorEffect(
        mode = 0,
        mix = values["invert"] ?: 1f,
        degrees = 0f,
        channels = floatArrayOf(values["red"] ?: 1f, values["green"] ?: 1f, values["blue"] ?: 1f),
        colorspace = (values["colorspace"] ?: 0f).toInt().coerceIn(0, 8),
    )
}
