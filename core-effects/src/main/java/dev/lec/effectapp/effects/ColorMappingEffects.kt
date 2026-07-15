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

data class GradientColorStop(
    val position: Float,
    val red: Float,
    val green: Float,
    val blue: Float,
)

@OptIn(UnstableApi::class)
class SharpenEffect : LecEffect {
    override val id = "sharpen"
    override val displayName = "Sharpen"
    override val category = EffectCategory.EFFECTS
    override val params = listOf(
        EffectParam("amount", "Sharpness", 0f, 2f, 0.55f),
        EffectParam("radius", "Radius", 0.5f, 3f, 1f),
    )

    override fun toMediaEffect(values: Map<String, Float>): Effect = SharpenGlEffect(
        amount = values["amount"] ?: 0.55f,
        radius = values["radius"] ?: 1f,
    )
}

@OptIn(UnstableApi::class)
class ColorCurvesEffect : LecEffect {
    override val id = "color_curves"
    override val displayName = "Color curves"
    override val category = EffectCategory.EFFECTS
    override val params = listOf(
        EffectParam("master_shadows", "Master shadows", -1f, 1f, 0f),
        EffectParam("master_midtones", "Master midtones", -1f, 1f, 0f),
        EffectParam("master_highlights", "Master highlights", -1f, 1f, 0f),
        EffectParam("red_shadows", "Red shadows", -1f, 1f, 0f),
        EffectParam("red_midtones", "Red midtones", -1f, 1f, 0f),
        EffectParam("red_highlights", "Red highlights", -1f, 1f, 0f),
        EffectParam("green_shadows", "Green shadows", -1f, 1f, 0f),
        EffectParam("green_midtones", "Green midtones", -1f, 1f, 0f),
        EffectParam("green_highlights", "Green highlights", -1f, 1f, 0f),
        EffectParam("blue_shadows", "Blue shadows", -1f, 1f, 0f),
        EffectParam("blue_midtones", "Blue midtones", -1f, 1f, 0f),
        EffectParam("blue_highlights", "Blue highlights", -1f, 1f, 0f),
    )

    override fun toMediaEffect(values: Map<String, Float>): Effect = ColorCurvesGlEffect(
        master = values.curveValues("master"),
        red = values.curveValues("red"),
        green = values.curveValues("green"),
        blue = values.curveValues("blue"),
    )
}

private fun Map<String, Float>.curveValues(prefix: String): FloatArray = floatArrayOf(
    get("${prefix}_shadows") ?: 0f,
    get("${prefix}_midtones") ?: 0f,
    get("${prefix}_highlights") ?: 0f,
)

@OptIn(UnstableApi::class)
class GradientMapEffect : LecEffect {
    override val id = "gradient_map"
    override val displayName = "Gradient map"
    override val category = EffectCategory.EFFECTS
    override val params = emptyList<EffectParam>()

    override fun toMediaEffect(values: Map<String, Float>): Effect =
        GradientMapGlEffect(decodeStops(values))

    companion object {
        const val MAX_STOPS = 8

        val defaultStops = listOf(
            GradientColorStop(0f, 0.02f, 0.01f, 0.08f),
            GradientColorStop(0.5f, 0.48f, 0.12f, 0.72f),
            GradientColorStop(1f, 1f, 0.92f, 0.68f),
        )

        fun decodeStops(values: Map<String, Float>): List<GradientColorStop> {
            val count = (values["stop_count"] ?: defaultStops.size.toFloat()).toInt().coerceIn(2, MAX_STOPS)
            return List(count) { index ->
                val fallback = defaultStops.getOrElse(index) { defaultStops.last() }
                GradientColorStop(
                    position = values["stop_${index}_position"] ?: fallback.position,
                    red = values["stop_${index}_red"] ?: fallback.red,
                    green = values["stop_${index}_green"] ?: fallback.green,
                    blue = values["stop_${index}_blue"] ?: fallback.blue,
                )
            }.map { stop ->
                stop.copy(
                    position = stop.position.coerceIn(0f, 1f),
                    red = stop.red.coerceIn(0f, 1f),
                    green = stop.green.coerceIn(0f, 1f),
                    blue = stop.blue.coerceIn(0f, 1f),
                )
            }.sortedBy(GradientColorStop::position)
        }

        fun encodeStops(stops: List<GradientColorStop>): Map<String, Float> {
            val normalized = stops.take(MAX_STOPS).sortedBy(GradientColorStop::position)
            return buildMap {
                put("stop_count", normalized.size.toFloat())
                normalized.forEachIndexed { index, stop ->
                    put("stop_${index}_position", stop.position.coerceIn(0f, 1f))
                    put("stop_${index}_red", stop.red.coerceIn(0f, 1f))
                    put("stop_${index}_green", stop.green.coerceIn(0f, 1f))
                    put("stop_${index}_blue", stop.blue.coerceIn(0f, 1f))
                }
            }
        }
    }
}

@OptIn(UnstableApi::class)
private data class SharpenGlEffect(val amount: Float, val radius: Float) : GlEffect {
    override fun toGlShaderProgram(context: Context, useHdr: Boolean): GlShaderProgram =
        SharpenShaderProgram(useHdr, amount, radius)
}

@OptIn(UnstableApi::class)
private class SharpenShaderProgram(
    useHdr: Boolean,
    private val amount: Float,
    private val radius: Float,
) : BaseGlShaderProgram(useHdr, 1) {
    private val program = createColorProgram(SHARPEN_FRAGMENT_SHADER)
    private var texelX = 1f
    private var texelY = 1f

    override fun configure(inputWidth: Int, inputHeight: Int): Size {
        texelX = 1f / inputWidth.coerceAtLeast(1)
        texelY = 1f / inputHeight.coerceAtLeast(1)
        return Size(inputWidth, inputHeight)
    }

    override fun drawFrame(inputTexId: Int, presentationTimeUs: Long) {
        drawColorFrame(program, inputTexId, presentationTimeUs) {
            program.setFloatsUniform("uTexel", floatArrayOf(texelX, texelY))
            program.setFloatsUniform("uParams", floatArrayOf(amount, radius, 0f, 0f))
        }
    }

    override fun release() {
        super.release()
        deleteColorProgram(program)
    }
}

@OptIn(UnstableApi::class)
private class ColorCurvesGlEffect(
    private val master: FloatArray,
    private val red: FloatArray,
    private val green: FloatArray,
    private val blue: FloatArray,
) : GlEffect {
    override fun toGlShaderProgram(context: Context, useHdr: Boolean): GlShaderProgram =
        ColorCurvesShaderProgram(useHdr, master, red, green, blue)
}

@OptIn(UnstableApi::class)
private class ColorCurvesShaderProgram(
    useHdr: Boolean,
    private val master: FloatArray,
    private val red: FloatArray,
    private val green: FloatArray,
    private val blue: FloatArray,
) : BaseGlShaderProgram(useHdr, 1) {
    private val program = createColorProgram(COLOR_CURVES_FRAGMENT_SHADER)

    override fun configure(inputWidth: Int, inputHeight: Int): Size = Size(inputWidth, inputHeight)

    override fun drawFrame(inputTexId: Int, presentationTimeUs: Long) {
        drawColorFrame(program, inputTexId, presentationTimeUs) {
            program.setFloatsUniform("uMaster", master)
            program.setFloatsUniform("uRed", red)
            program.setFloatsUniform("uGreen", green)
            program.setFloatsUniform("uBlue", blue)
        }
    }

    override fun release() {
        super.release()
        deleteColorProgram(program)
    }
}

@OptIn(UnstableApi::class)
private data class GradientMapGlEffect(val stops: List<GradientColorStop>) : GlEffect {
    override fun toGlShaderProgram(context: Context, useHdr: Boolean): GlShaderProgram =
        GradientMapShaderProgram(useHdr, stops)
}

@OptIn(UnstableApi::class)
private class GradientMapShaderProgram(
    useHdr: Boolean,
    stops: List<GradientColorStop>,
) : BaseGlShaderProgram(useHdr, 1) {
    private val program = createColorProgram(GRADIENT_MAP_FRAGMENT_SHADER)
    private val stops = stops.ifEmpty { GradientMapEffect.defaultStops }.take(GradientMapEffect.MAX_STOPS)

    override fun configure(inputWidth: Int, inputHeight: Int): Size = Size(inputWidth, inputHeight)

    override fun drawFrame(inputTexId: Int, presentationTimeUs: Long) {
        drawColorFrame(program, inputTexId, presentationTimeUs) {
            program.setFloatsUniform("uMeta", floatArrayOf(stops.size.toFloat(), 0f, 0f, 0f))
            repeat(GradientMapEffect.MAX_STOPS) { index ->
                val stop = stops.getOrElse(index) { stops.last() }
                program.setFloatsUniform(
                    "uStop$index",
                    floatArrayOf(stop.position, stop.red, stop.green, stop.blue),
                )
            }
        }
    }

    override fun release() {
        super.release()
        deleteColorProgram(program)
    }
}

@OptIn(UnstableApi::class)
private fun createColorProgram(fragmentShader: String): GlProgram = try {
    GlProgram(COLOR_VERTEX_SHADER, fragmentShader)
} catch (exception: GlUtil.GlException) {
    throw VideoFrameProcessingException(exception)
}

@OptIn(UnstableApi::class)
private fun drawColorFrame(
    program: GlProgram,
    inputTexId: Int,
    presentationTimeUs: Long,
    setUniforms: () -> Unit,
) {
    try {
        program.use()
        program.setSamplerTexIdUniform("uTexSampler", inputTexId, 0)
        setUniforms()
        program.setBufferAttribute("aFramePosition", COLOR_FRAME_VERTICES, 4)
        program.bindAttributesAndUniforms()
        GLES20.glDrawArrays(GLES20.GL_TRIANGLE_FAN, 0, 4)
        GlUtil.checkGlError()
    } catch (exception: GlUtil.GlException) {
        throw VideoFrameProcessingException(exception, presentationTimeUs)
    }
}

@OptIn(UnstableApi::class)
private fun deleteColorProgram(program: GlProgram) {
    try {
        program.delete()
    } catch (exception: GlUtil.GlException) {
        throw VideoFrameProcessingException(exception)
    }
}

private val COLOR_FRAME_VERTICES = floatArrayOf(
    -1f, -1f, 0f, 1f,
    -1f, 1f, 0f, 1f,
    1f, 1f, 0f, 1f,
    1f, -1f, 0f, 1f,
)

private const val COLOR_VERTEX_SHADER = """
    attribute vec4 aFramePosition;
    varying vec2 vTexSamplingCoord;
    void main() {
      gl_Position = aFramePosition;
      vTexSamplingCoord = aFramePosition.xy * 0.5 + 0.5;
    }
"""

private const val SHARPEN_FRAGMENT_SHADER = """
    precision mediump float;
    uniform sampler2D uTexSampler;
    uniform vec2 uTexel;
    uniform vec4 uParams;
    varying vec2 vTexSamplingCoord;

    void main() {
      vec4 center = texture2D(uTexSampler, vTexSamplingCoord);
      vec2 offset = uTexel * uParams.y;
      vec3 neighbors = texture2D(uTexSampler, vTexSamplingCoord + vec2(offset.x, 0.0)).rgb;
      neighbors += texture2D(uTexSampler, vTexSamplingCoord - vec2(offset.x, 0.0)).rgb;
      neighbors += texture2D(uTexSampler, vTexSamplingCoord + vec2(0.0, offset.y)).rgb;
      neighbors += texture2D(uTexSampler, vTexSamplingCoord - vec2(0.0, offset.y)).rgb;
      vec3 sharpened = center.rgb * (1.0 + 4.0 * uParams.x) - neighbors * uParams.x;
      gl_FragColor = vec4(clamp(sharpened, 0.0, 1.0), center.a);
    }
"""

private const val COLOR_CURVES_FRAGMENT_SHADER = """
    precision mediump float;
    uniform sampler2D uTexSampler;
    uniform vec3 uMaster;
    uniform vec3 uRed;
    uniform vec3 uGreen;
    uniform vec3 uBlue;
    varying vec2 vTexSamplingCoord;

    float applyCurve(float value, vec3 curve) {
      float shadows = (1.0 - value) * (1.0 - value);
      float midtones = 4.0 * value * (1.0 - value);
      float highlights = value * value;
      float adjustment = dot(vec3(shadows, midtones, highlights), curve) * 0.25;
      return clamp(value + adjustment, 0.0, 1.0);
    }

    void main() {
      vec4 source = texture2D(uTexSampler, vTexSamplingCoord);
      vec3 masterColor = vec3(
        applyCurve(source.r, uMaster),
        applyCurve(source.g, uMaster),
        applyCurve(source.b, uMaster)
      );
      vec3 curved = vec3(
        applyCurve(masterColor.r, uRed),
        applyCurve(masterColor.g, uGreen),
        applyCurve(masterColor.b, uBlue)
      );
      gl_FragColor = vec4(curved, source.a);
    }
"""

private const val GRADIENT_MAP_FRAGMENT_SHADER = """
    precision mediump float;
    uniform sampler2D uTexSampler;
    uniform vec4 uMeta;
    uniform vec4 uStop0;
    uniform vec4 uStop1;
    uniform vec4 uStop2;
    uniform vec4 uStop3;
    uniform vec4 uStop4;
    uniform vec4 uStop5;
    uniform vec4 uStop6;
    uniform vec4 uStop7;
    varying vec2 vTexSamplingCoord;

    vec3 applyInterval(vec3 mapped, float luminance, vec4 left, vec4 right, float enabled) {
      float span = max(right.x - left.x, 0.0001);
      float blend = clamp((luminance - left.x) / span, 0.0, 1.0);
      vec3 intervalColor = mix(left.yzw, right.yzw, blend);
      return mix(mapped, intervalColor, enabled * step(left.x, luminance));
    }

    void main() {
      vec4 source = texture2D(uTexSampler, vTexSamplingCoord);
      float luminance = dot(source.rgb, vec3(0.299, 0.587, 0.114));
      vec3 mapped = uStop0.yzw;
      mapped = applyInterval(mapped, luminance, uStop0, uStop1, step(1.5, uMeta.x));
      mapped = applyInterval(mapped, luminance, uStop1, uStop2, step(2.5, uMeta.x));
      mapped = applyInterval(mapped, luminance, uStop2, uStop3, step(3.5, uMeta.x));
      mapped = applyInterval(mapped, luminance, uStop3, uStop4, step(4.5, uMeta.x));
      mapped = applyInterval(mapped, luminance, uStop4, uStop5, step(5.5, uMeta.x));
      mapped = applyInterval(mapped, luminance, uStop5, uStop6, step(6.5, uMeta.x));
      mapped = applyInterval(mapped, luminance, uStop6, uStop7, step(7.5, uMeta.x));
      gl_FragColor = vec4(clamp(mapped, 0.0, 1.0), source.a);
    }
"""
