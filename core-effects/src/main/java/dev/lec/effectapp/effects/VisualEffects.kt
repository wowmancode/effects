package dev.lec.effectapp.effects

import android.graphics.Matrix
import androidx.annotation.OptIn
import androidx.media3.common.Effect
import androidx.media3.common.util.UnstableApi
import androidx.media3.effect.Contrast
import androidx.media3.effect.FrameDropEffect
import androidx.media3.effect.GaussianBlurWithFrameOverlaid
import androidx.media3.effect.HslAdjustment
import androidx.media3.effect.MatrixTransformation
import androidx.media3.effect.RgbAdjustment
import kotlin.math.PI
import kotlin.math.sin

@OptIn(UnstableApi::class)
class GhostTrailEffect : LecEffect {
    override val id = "ghost_trail"
    override val displayName = "Echo / ghost trail"
    override val category = EffectCategory.EFFECTS
    override val params = listOf(EffectParam("strength", "Strength", 1f, 24f, 8f))
    override fun toMediaEffect(values: Map<String, Float>): Effect =
        GaussianBlurWithFrameOverlaid(values["strength"] ?: 8f, 0.96f, 0.96f)
}

@OptIn(UnstableApi::class)
class ColorInvertEffect : LecEffect {
    override val id = "color_invert"
    override val displayName = "Color invert"
    override val category = EffectCategory.EFFECTS
    override val params = listOf(
        EffectParam("invert_red", "Invert red", 0f, 1f, 1f, ParamKind.BOOLEAN),
        EffectParam("invert_green", "Invert green", 0f, 1f, 1f, ParamKind.BOOLEAN),
        EffectParam("invert_blue", "Invert blue", 0f, 1f, 1f, ParamKind.BOOLEAN),
    )
    override fun toMediaEffect(values: Map<String, Float>): Effect = ChannelColorEffect.invert(values)
}

@OptIn(UnstableApi::class)
class ZoomEffect : LecEffect {
    override val id = "zoom"
    override val displayName = "Zoom"
    override val category = EffectCategory.EFFECTS
    override val params = listOf(
        EffectParam("scale", "Scale", 1f, 3f, 1.3f),
        EffectParam("oscillation", "Oscillation", 0f, 1f, 0f),
        EffectParam("frequency", "Frequency", 0.1f, 4f, 1f),
    )

    override fun toMediaEffect(values: Map<String, Float>): Effect {
        val scale = values["scale"] ?: 1.3f
        val oscillation = values["oscillation"] ?: 0f
        val frequency = values["frequency"] ?: 1f
        return object : MatrixTransformation {
            override fun getMatrix(presentationTimeUs: Long): Matrix {
                val seconds = presentationTimeUs / 1_000_000.0
                val animated = scale + oscillation * sin(seconds * frequency * 2.0 * PI).toFloat()
                return Matrix().apply { setScale(animated, animated) }
            }
        }
    }
}

@OptIn(UnstableApi::class)
class ChromaticAberrationEffect : LecEffect {
    override val id = "chromatic_aberration"
    override val displayName = "Chromatic aberration"
    override val category = EffectCategory.EFFECTS
    override val params = listOf(EffectParam("amount", "Amount", 0f, 1f, 0.25f))
    override fun toMediaEffect(values: Map<String, Float>): Effect {
        val amount = values["amount"] ?: 0.25f
        return RgbAdjustment.Builder()
            .setRedScale(1f + amount)
            .setGreenScale(1f - amount * 0.35f)
            .setBlueScale(1f + amount * 0.65f)
            .build()
    }
}

@OptIn(UnstableApi::class)
class VhsEffect : LecEffect {
    override val id = "vhs_scanlines"
    override val displayName = "VHS / scanlines"
    override val category = EffectCategory.EFFECTS
    override val params = listOf(EffectParam("contrast", "Contrast", -0.5f, 1f, 0.35f))
    override fun toMediaEffect(values: Map<String, Float>): Effect = Contrast(values["contrast"] ?: 0.35f)
}

@OptIn(UnstableApi::class)
class FreezeFrameEffect : LecEffect {
    override val id = "freeze_frame"
    override val displayName = "Freeze frame"
    override val category = EffectCategory.EFFECTS
    override val params = listOf(EffectParam("fps", "Held frames per second", 0.2f, 4f, 1f))
    override fun toMediaEffect(values: Map<String, Float>): Effect =
        FrameDropEffect.createDefaultFrameDropEffect(values["fps"] ?: 1f)
}

@OptIn(UnstableApi::class)
class MirrorFlipEffect : LecEffect {
    override val id = "mirror_flip"
    override val displayName = "Mirror / flip"
    override val category = EffectCategory.EFFECTS
    override val params = listOf(
        EffectParam("horizontal", "Horizontal", 0f, 1f, 1f, ParamKind.BOOLEAN),
        EffectParam("vertical", "Vertical", 0f, 1f, 0f, ParamKind.BOOLEAN),
    )
    override fun toMediaEffect(values: Map<String, Float>): Effect {
        val x = if ((values["horizontal"] ?: 1f) >= 0.5f) -1f else 1f
        val y = if ((values["vertical"] ?: 0f) >= 0.5f) -1f else 1f
        return object : MatrixTransformation {
            override fun getMatrix(presentationTimeUs: Long): Matrix = Matrix().apply { setScale(x, y) }
        }
    }
}
