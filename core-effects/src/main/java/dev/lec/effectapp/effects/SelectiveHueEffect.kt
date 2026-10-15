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

/** Rotates any selected combination of the six primary hue regions. */
@OptIn(UnstableApi::class)
class SelectiveHueEffect : LecEffect {
    override val id = "selective_hue"
    override val displayName = "Selective hue rotate"
    override val category = EffectCategory.EFFECTS
    override val params = listOf(
        EffectParam("degrees", "Hue rotation", -180f, 180f, 0f),
        EffectParam("feather", "Color range", 0.03f, 0.35f, 0.14f),
        EffectParam("red", "Red", 0f, 1f, 1f, ParamKind.BOOLEAN),
        EffectParam("yellow", "Yellow", 0f, 1f, 0f, ParamKind.BOOLEAN),
        EffectParam("green", "Green", 0f, 1f, 0f, ParamKind.BOOLEAN),
        EffectParam("cyan", "Cyan", 0f, 1f, 0f, ParamKind.BOOLEAN),
        EffectParam("blue", "Blue", 0f, 1f, 0f, ParamKind.BOOLEAN),
        EffectParam("magenta", "Magenta", 0f, 1f, 0f, ParamKind.BOOLEAN),
    )
    override fun toMediaEffect(values: Map<String, Float>): Effect = SelectiveHueGlEffect(values)
}

@OptIn(UnstableApi::class)
private data class SelectiveHueGlEffect(val values: Map<String, Float>) : GlEffect {
    override fun toGlShaderProgram(context: Context, useHdr: Boolean): GlShaderProgram =
        SelectiveHueShaderProgram(useHdr, values)
}

@OptIn(UnstableApi::class)
private class SelectiveHueShaderProgram(useHdr: Boolean, values: Map<String, Float>) : BaseGlShaderProgram(useHdr, 1) {
    private val program = try { GlProgram(VERTEX, FRAGMENT) } catch (error: GlUtil.GlException) { throw VideoFrameProcessingException(error) }
    private val settings = floatArrayOf(
        (values["degrees"] ?: 0f) / 360f,
        (values["feather"] ?: 0.14f).coerceIn(0.03f, 0.35f),
        0f,
        0f,
    )
    private val selected = floatArrayOf(
        values["red"] ?: 1f,
        values["yellow"] ?: 0f,
        values["green"] ?: 0f,
        values["cyan"] ?: 0f,
        values["blue"] ?: 0f,
        values["magenta"] ?: 0f,
    )

    override fun configure(inputWidth: Int, inputHeight: Int): Size = Size(inputWidth, inputHeight)

    override fun drawFrame(inputTexId: Int, presentationTimeUs: Long) {
        try {
            program.use()
            program.setSamplerTexIdUniform("uTexSampler", inputTexId, 0)
            program.setFloatsUniform("uSettings", settings)
            program.setFloatsUniform("uSelect01", floatArrayOf(selected[0], selected[1], selected[2], selected[3]))
            program.setFloatsUniform("uSelect45", floatArrayOf(selected[4], selected[5], 0f, 0f))
            program.setBufferAttribute("aFramePosition", VERTICES, 4)
            program.bindAttributesAndUniforms()
            GLES20.glDrawArrays(GLES20.GL_TRIANGLE_FAN, 0, 4)
            GlUtil.checkGlError()
        } catch (error: GlUtil.GlException) {
            throw VideoFrameProcessingException(error, presentationTimeUs)
        }
    }

    override fun release() {
        try { program.delete() } catch (error: GlUtil.GlException) { throw VideoFrameProcessingException(error) }
        super.release()
    }
}

private val VERTICES = floatArrayOf(-1f, -1f, 0f, 1f, -1f, 1f, 0f, 1f, 1f, 1f, 0f, 1f, 1f, -1f, 0f, 1f)
private const val VERTEX = """
    attribute vec4 aFramePosition;
    varying vec2 vTexSamplingCoord;
    void main() { gl_Position = aFramePosition; vTexSamplingCoord = aFramePosition.xy * 0.5 + 0.5; }
"""
private const val FRAGMENT = """
    precision mediump float;
    uniform sampler2D uTexSampler;
    uniform vec4 uSettings;
    uniform vec4 uSelect01;
    uniform vec4 uSelect45;
    varying vec2 vTexSamplingCoord;
    vec3 rgbToHsv(vec3 c) {
      vec4 k = vec4(0.0, -0.3333333, 0.6666667, -1.0);
      vec4 p = mix(vec4(c.bg, k.wz), vec4(c.gb, k.xy), step(c.b, c.g));
      vec4 q = mix(vec4(p.xyw, c.r), vec4(c.r, p.yzx), step(p.x, c.r));
      float d = q.x - min(q.w, q.y);
      return vec3(abs(q.z + (q.w - q.y) / (6.0 * d + 0.00001)), d / (q.x + 0.00001), q.x);
    }
    vec3 hsvToRgb(vec3 c) {
      vec3 p = abs(fract(c.xxx + vec3(0.0, 0.6666667, 0.3333333)) * 6.0 - 3.0);
      return c.z * mix(vec3(1.0), clamp(p - 1.0, 0.0, 1.0), c.y);
    }
    float hueDistance(float a, float b) { return abs(fract(a - b + 0.5) - 0.5); }
    float region(float hue, float center, float enabled) {
      float width = uSettings.y;
      return enabled * (1.0 - smoothstep(width * 0.55, width, hueDistance(hue, center)));
    }
    void main() {
      vec4 source = texture2D(uTexSampler, vTexSamplingCoord);
      vec3 hsv = rgbToHsv(source.rgb);
      float mask = 0.0;
      mask = max(mask, region(hsv.x, 0.0, uSelect01.x));
      mask = max(mask, region(hsv.x, 0.1666667, uSelect01.y));
      mask = max(mask, region(hsv.x, 0.3333333, uSelect01.z));
      mask = max(mask, region(hsv.x, 0.5, uSelect01.w));
      mask = max(mask, region(hsv.x, 0.6666667, uSelect45.x));
      mask = max(mask, region(hsv.x, 0.8333333, uSelect45.y));
      mask *= smoothstep(0.05, 0.22, hsv.y);
      hsv.x = fract(hsv.x + uSettings.x);
      gl_FragColor = vec4(mix(source.rgb, hsvToRgb(hsv), mask), source.a);
    }
"""
