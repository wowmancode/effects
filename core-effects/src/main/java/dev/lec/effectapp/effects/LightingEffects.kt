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

@OptIn(UnstableApi::class)
class GlowEffect : LecEffect {
    override val id = "glow"
    override val displayName = "Glow"
    override val category = EffectCategory.EFFECTS
    override val params = listOf(
        EffectParam("radius", "Radius", 0f, 30f, 8f),
        EffectParam("strength", "Strength", 0f, 2f, 0.7f),
        EffectParam("threshold", "Brightness threshold", 0f, 1f, 0.55f),
    )

    override fun toMediaEffect(values: Map<String, Float>): Effect = GlowGlEffect(
        radius = values["radius"] ?: 8f,
        strength = values["strength"] ?: 0.7f,
        threshold = values["threshold"] ?: 0.55f,
    )
}

@OptIn(UnstableApi::class)
class GodRaysEffect : LecEffect {
    override val id = "god_rays"
    override val displayName = "God rays"
    override val category = EffectCategory.EFFECTS
    override val params = listOf(
        EffectParam("position_x", "Light position X", 0f, 1f, 0.5f),
        EffectParam("position_y", "Light position Y", 0f, 1f, 0.5f),
        EffectParam("density", "Ray reach", 0f, 1.5f, 0.85f),
        EffectParam("decay", "Ray length", 0.9f, 0.995f, 0.975f),
        EffectParam("strength", "Strength", 0f, 2f, 0.5f),
        EffectParam("threshold", "Brightness threshold", 0f, 1f, 0.45f),
    )

    override fun toMediaEffect(values: Map<String, Float>): Effect = GodRaysGlEffect(
        centerX = values["position_x"] ?: 0.5f,
        centerY = values["position_y"] ?: 0.5f,
        density = values["density"] ?: 0.85f,
        decay = values["decay"] ?: 0.975f,
        strength = values["strength"] ?: 0.5f,
        threshold = values["threshold"] ?: 0.45f,
    )
}

@OptIn(UnstableApi::class)
private data class GlowGlEffect(
    val radius: Float,
    val strength: Float,
    val threshold: Float,
) : GlEffect {
    override fun toGlShaderProgram(context: Context, useHdr: Boolean): GlShaderProgram =
        GlowShaderProgram(useHdr, radius, strength, threshold)
}

@OptIn(UnstableApi::class)
private class GlowShaderProgram(
    useHdr: Boolean,
    private val radius: Float,
    private val strength: Float,
    private val threshold: Float,
) : BaseGlShaderProgram(useHdr, 1) {
    private val program = createProgram(GLOW_FRAGMENT_SHADER)
    private var texelX = 1f
    private var texelY = 1f

    override fun configure(inputWidth: Int, inputHeight: Int): Size {
        texelX = 1f / inputWidth.coerceAtLeast(1)
        texelY = 1f / inputHeight.coerceAtLeast(1)
        return Size(inputWidth, inputHeight)
    }

    override fun drawFrame(inputTexId: Int, presentationTimeUs: Long) {
        drawWithProgram(program, inputTexId, presentationTimeUs) {
            program.setFloatsUniform("uTexel", floatArrayOf(texelX, texelY))
            program.setFloatsUniform("uParams", floatArrayOf(radius, strength, threshold, 0f))
        }
    }

    override fun release() {
        super.release()
        deleteProgram(program)
    }
}

@OptIn(UnstableApi::class)
private data class GodRaysGlEffect(
    val centerX: Float,
    val centerY: Float,
    val density: Float,
    val decay: Float,
    val strength: Float,
    val threshold: Float,
) : GlEffect {
    override fun toGlShaderProgram(context: Context, useHdr: Boolean): GlShaderProgram =
        GodRaysShaderProgram(useHdr, centerX, centerY, density, decay, strength, threshold)
}

@OptIn(UnstableApi::class)
private class GodRaysShaderProgram(
    useHdr: Boolean,
    private val centerX: Float,
    private val centerY: Float,
    private val density: Float,
    private val decay: Float,
    private val strength: Float,
    private val threshold: Float,
) : BaseGlShaderProgram(useHdr, 1) {
    private val program = createProgram(GOD_RAYS_FRAGMENT_SHADER)

    override fun configure(inputWidth: Int, inputHeight: Int): Size = Size(inputWidth, inputHeight)

    override fun drawFrame(inputTexId: Int, presentationTimeUs: Long) {
        drawWithProgram(program, inputTexId, presentationTimeUs) {
            program.setFloatsUniform("uSunPos", floatArrayOf(centerX, centerY))
            program.setFloatsUniform("uRayParams", floatArrayOf(density, decay, strength, threshold))
        }
    }

    override fun release() {
        super.release()
        deleteProgram(program)
    }
}

@OptIn(UnstableApi::class)
private fun createProgram(fragmentShader: String): GlProgram = try {
    GlProgram(VERTEX_SHADER, fragmentShader)
} catch (exception: GlUtil.GlException) {
    throw VideoFrameProcessingException(exception)
}

@OptIn(UnstableApi::class)
private fun drawWithProgram(
    program: GlProgram,
    inputTexId: Int,
    presentationTimeUs: Long,
    setUniforms: () -> Unit,
) {
    try {
        program.use()
        program.setSamplerTexIdUniform("uTexSampler", inputTexId, 0)
        setUniforms()
        program.setBufferAttribute("aFramePosition", FRAME_VERTICES, 4)
        program.bindAttributesAndUniforms()
        GLES20.glDrawArrays(GLES20.GL_TRIANGLE_FAN, 0, 4)
        GlUtil.checkGlError()
    } catch (exception: GlUtil.GlException) {
        throw VideoFrameProcessingException(exception, presentationTimeUs)
    }
}

@OptIn(UnstableApi::class)
private fun deleteProgram(program: GlProgram) {
    try {
        program.delete()
    } catch (exception: GlUtil.GlException) {
        throw VideoFrameProcessingException(exception)
    }
}

private val FRAME_VERTICES = floatArrayOf(
    -1f, -1f, 0f, 1f,
    -1f, 1f, 0f, 1f,
    1f, 1f, 0f, 1f,
    1f, -1f, 0f, 1f,
)

private const val VERTEX_SHADER = """
    attribute vec4 aFramePosition;
    varying vec2 vTexSamplingCoord;
    void main() {
      gl_Position = aFramePosition;
      vTexSamplingCoord = aFramePosition.xy * 0.5 + 0.5;
    }
"""

private const val GLOW_FRAGMENT_SHADER = """
    precision mediump float;
    uniform sampler2D uTexSampler;
    uniform vec2 uTexel;
    uniform vec4 uParams;
    varying vec2 vTexSamplingCoord;

    vec3 brightSample(vec2 uv) {
      vec3 color = texture2D(uTexSampler, clamp(uv, 0.0, 1.0)).rgb;
      float luminance = dot(color, vec3(0.299, 0.587, 0.114));
      return color * smoothstep(uParams.z, 1.0, luminance);
    }

    void main() {
      vec4 base = texture2D(uTexSampler, vTexSamplingCoord);
      vec2 stepSize = uTexel * uParams.x;
      vec3 glow = brightSample(vTexSamplingCoord) * 0.20;
      glow += brightSample(vTexSamplingCoord + vec2(stepSize.x, 0.0)) * 0.10;
      glow += brightSample(vTexSamplingCoord - vec2(stepSize.x, 0.0)) * 0.10;
      glow += brightSample(vTexSamplingCoord + vec2(0.0, stepSize.y)) * 0.10;
      glow += brightSample(vTexSamplingCoord - vec2(0.0, stepSize.y)) * 0.10;
      glow += brightSample(vTexSamplingCoord + stepSize) * 0.10;
      glow += brightSample(vTexSamplingCoord - stepSize) * 0.10;
      glow += brightSample(vTexSamplingCoord + vec2(stepSize.x, -stepSize.y)) * 0.10;
      glow += brightSample(vTexSamplingCoord + vec2(-stepSize.x, stepSize.y)) * 0.10;
      gl_FragColor = vec4(clamp(base.rgb + glow * uParams.y, 0.0, 1.0), base.a);
    }
"""

private const val GOD_RAYS_FRAGMENT_SHADER = """
    precision highp float;
    uniform sampler2D uTexSampler;
    uniform vec2 uSunPos;
    uniform vec4 uRayParams;
    varying vec2 vTexSamplingCoord;

    void main() {
      const float invN = 0.015625;
      vec2 uv = vTexSamplingCoord;
      vec4 base = texture2D(uTexSampler, uv);
      vec3 scene = base.rgb;
      vec2 delta = (uv - uSunPos) * invN * uRayParams.x;
      vec2 sampleUV = uv;
      float illumination = 1.0;
      vec3 rays = vec3(0.0);

      for (int i = 0; i < 64; i++) {
        sampleUV -= delta;
        vec3 sampleColor = texture2D(uTexSampler, clamp(sampleUV, 0.0, 1.0)).rgb;
        float luminance = dot(sampleColor, vec3(0.299, 0.587, 0.114));
        float mask = smoothstep(uRayParams.w, min(1.0, uRayParams.w + 0.40), luminance);
        rays += sampleColor * mask * illumination * uRayParams.z;
        illumination *= uRayParams.y;
      }

      rays *= invN * 9.0;
      rays *= vec3(1.0, 0.90, 0.72);
      rays /= vec3(1.0) + rays;
      rays *= smoothstep(0.0, 0.18, length(uv - uSunPos));
      float ownLum = dot(scene, vec3(0.299, 0.587, 0.114));
      rays *= 1.0 - smoothstep(0.20, 1.0, ownLum);
      gl_FragColor = vec4(clamp(scene + rays, 0.0, 1.0), base.a);
    }
"""
