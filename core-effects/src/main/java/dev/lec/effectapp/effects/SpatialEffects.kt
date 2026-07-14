package dev.lec.effectapp.effects

import android.content.Context
import android.opengl.GLES20
import androidx.annotation.OptIn
import androidx.media3.common.Effect
import androidx.media3.common.VideoFrameProcessingException
import androidx.media3.common.util.GlProgram
import androidx.media3.common.util.GlUtil
import androidx.media3.common.util.Size
import androidx.media3.common.util.UnstableApi
import androidx.media3.effect.BaseGlShaderProgram
import androidx.media3.effect.GlEffect
import androidx.media3.effect.GlShaderProgram
import androidx.media3.effect.HslAdjustment

@OptIn(UnstableApi::class)
class HslAdjustEffect : LecEffect {
    override val id = "hsl_adjust"
    override val displayName = "HSL adjust"
    override val category = EffectCategory.EFFECTS
    override val params = listOf(
        EffectParam("hue", "Hue", 0f, 1f, 0.5f),
        EffectParam("saturation", "Saturation", 0f, 1f, 0.5f),
        EffectParam("lightness", "Lightness", 0f, 1f, 0.5f),
    )

    override fun toMediaEffect(values: Map<String, Float>): Effect = HslAdjustment.Builder()
        .adjustHue(((values["hue"] ?: 0.5f) - 0.5f) * 360f)
        .adjustSaturation(((values["saturation"] ?: 0.5f) - 0.5f) * 200f)
        .adjustLightness(((values["lightness"] ?: 0.5f) - 0.5f) * 200f)
        .build()
}

@OptIn(UnstableApi::class)
class SwirlEffect : LecEffect {
    override val id = "swirl"
    override val displayName = "Swirl"
    override val category = EffectCategory.EFFECTS
    override val params = listOf(
        EffectParam("degrees", "Degrees", -720f, 720f, 180f),
        EffectParam("radius", "Radius", 0.05f, 1f, 0.5f),
        EffectParam("position_x", "Position X", 0f, 1f, 0.5f),
        EffectParam("position_y", "Position Y", 0f, 1f, 0.5f),
    )

    override fun toMediaEffect(values: Map<String, Float>): Effect = SpatialWarpEffect(
        mode = 0,
        centerX = values["position_x"] ?: 0.5f,
        centerY = values["position_y"] ?: 0.5f,
        first = values["degrees"] ?: 180f,
        second = values["radius"] ?: 0.5f,
    )
}

@OptIn(UnstableApi::class)
class WaveEffect : LecEffect {
    override val id = "wave"
    override val displayName = "Wave"
    override val category = EffectCategory.EFFECTS
    override val params = listOf(
        EffectParam("position_x", "Position X", 0f, 1f, 0.5f),
        EffectParam("position_y", "Position Y", 0f, 1f, 0.5f),
        EffectParam("strength", "Strength", 0f, 1f, 0.35f),
        EffectParam("stretch", "Stretch", 0.25f, 4f, 1f),
    )

    override fun toMediaEffect(values: Map<String, Float>): Effect = SpatialWarpEffect(
        mode = 1,
        centerX = values["position_x"] ?: 0.5f,
        centerY = values["position_y"] ?: 0.5f,
        first = values["strength"] ?: 0.35f,
        second = values["stretch"] ?: 1f,
    )
}

@OptIn(UnstableApi::class)
class PinchBulgeEffect : LecEffect {
    override val id = "pinch_bulge"
    override val displayName = "Pinch / bulge"
    override val category = EffectCategory.EFFECTS
    override val params = listOf(
        EffectParam("position_x", "Position X", 0f, 1f, 0.5f),
        EffectParam("position_y", "Position Y", 0f, 1f, 0.5f),
        EffectParam("strength", "Strength", -1f, 1f, 0f),
    )

    override fun toMediaEffect(values: Map<String, Float>): Effect = SpatialWarpEffect(
        mode = 2,
        centerX = values["position_x"] ?: 0.5f,
        centerY = values["position_y"] ?: 0.5f,
        first = values["strength"] ?: 0f,
        second = 0f,
    )
}

@OptIn(UnstableApi::class)
private data class SpatialWarpEffect(
    val mode: Int,
    val centerX: Float,
    val centerY: Float,
    val first: Float,
    val second: Float,
) : GlEffect {
    override fun toGlShaderProgram(context: Context, useHdr: Boolean): GlShaderProgram =
        SpatialWarpShaderProgram(useHdr, mode, centerX, centerY, first, second)
}

@OptIn(UnstableApi::class)
private class SpatialWarpShaderProgram(
    useHdr: Boolean,
    private val mode: Int,
    private val centerX: Float,
    private val centerY: Float,
    private val first: Float,
    private val second: Float,
) : BaseGlShaderProgram(useHdr, 1) {
    private val program = try {
        GlProgram(VERTEX_SHADER, FRAGMENT_SHADER)
    } catch (exception: GlUtil.GlException) {
        throw VideoFrameProcessingException(exception)
    }
    private var aspectRatio = 1f

    override fun configure(inputWidth: Int, inputHeight: Int): Size {
        aspectRatio = inputWidth.toFloat() / inputHeight.coerceAtLeast(1)
        return Size(inputWidth, inputHeight)
    }

    override fun drawFrame(inputTexId: Int, presentationTimeUs: Long) {
        try {
            program.use()
            program.setSamplerTexIdUniform("uTexSampler", inputTexId, 0)
            program.setIntUniform("uMode", mode)
            program.setFloatsUniform("uCenter", floatArrayOf(centerX, centerY))
            program.setFloatsUniform("uParams", floatArrayOf(first, second, aspectRatio, 0f))
            program.setBufferAttribute("aFramePosition", FRAME_VERTICES, 4)
            program.bindAttributesAndUniforms()
            GLES20.glDrawArrays(GLES20.GL_TRIANGLE_FAN, 0, 4)
            GlUtil.checkGlError()
        } catch (exception: GlUtil.GlException) {
            throw VideoFrameProcessingException(exception, presentationTimeUs)
        }
    }

    override fun release() {
        super.release()
        try {
            program.delete()
        } catch (exception: GlUtil.GlException) {
            throw VideoFrameProcessingException(exception)
        }
    }

    private companion object {
        val FRAME_VERTICES = floatArrayOf(
            -1f, -1f, 0f, 1f,
            -1f, 1f, 0f, 1f,
            1f, 1f, 0f, 1f,
            1f, -1f, 0f, 1f,
        )

        const val VERTEX_SHADER = """
            attribute vec4 aFramePosition;
            varying vec2 vTexSamplingCoord;
            void main() {
              gl_Position = aFramePosition;
              vTexSamplingCoord = aFramePosition.xy * 0.5 + 0.5;
            }
        """

        const val FRAGMENT_SHADER = """
            precision highp float;
            uniform sampler2D uTexSampler;
            uniform int uMode;
            uniform vec2 uCenter;
            uniform vec4 uParams;
            varying vec2 vTexSamplingCoord;

            void main() {
              vec2 uv = vTexSamplingCoord;
              vec2 delta = uv - uCenter;
              vec2 corrected = vec2(delta.x * uParams.z, delta.y);
              float distanceFromCenter = length(corrected);

              if (uMode == 0) {
                float radius = max(uParams.y, 0.001);
                float influence = 1.0 - smoothstep(0.0, radius, distanceFromCenter);
                float angle = radians(uParams.x) * influence * influence;
                float sine = sin(angle);
                float cosine = cos(angle);
                corrected = mat2(cosine, -sine, sine, cosine) * corrected;
                uv = uCenter + vec2(corrected.x / uParams.z, corrected.y);
              } else if (uMode == 1) {
                float stretch = max(uParams.y, 0.01);
                float falloff = 1.0 - smoothstep(0.0, 0.9, distanceFromCenter);
                float phase = (uv.y - uCenter.y) * 12.56637 * stretch;
                uv.x += sin(phase) * uParams.x * 0.12 * falloff;
              } else {
                float influence = 1.0 - smoothstep(0.0, 0.75, distanceFromCenter);
                float scale = max(0.05, 1.0 + uParams.x * influence);
                corrected *= scale;
                uv = uCenter + vec2(corrected.x / uParams.z, corrected.y);
              }

              if (uv.x < 0.0 || uv.x > 1.0 || uv.y < 0.0 || uv.y > 1.0) {
                gl_FragColor = vec4(0.0);
              } else {
                gl_FragColor = texture2D(uTexSampler, uv);
              }
            }
        """
    }
}
