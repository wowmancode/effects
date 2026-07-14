package dev.lec.effectapp.effects

import androidx.media3.common.Effect

enum class EffectCategory { EFFECTS, TRANSFORM, AUDIO }

enum class ParamKind { FLOAT, BOOLEAN }

data class EffectParam(
    val id: String,
    val displayName: String,
    val min: Float,
    val max: Float,
    val default: Float,
    val kind: ParamKind = ParamKind.FLOAT,
)

interface LecEffect {
    val id: String
    val displayName: String
    val category: EffectCategory
    val params: List<EffectParam>

    /** Returns a Media3 video effect, or null when this is an audio processor effect. */
    fun toMediaEffect(values: Map<String, Float>): Effect?
}
