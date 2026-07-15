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
    val alpha: Float = 1f,
)
data class ColorCurvePoint(
    val input: Float,
    val output: Float,
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
    override val params = emptyList<EffectParam>()

    override fun toMediaEffect(values: Map<String, Float>): Effect = ColorCurvesGlEffect(
        master = decodePoints(values, "master"),
        red = decodePoints(values, "red"),
        green = decodePoints(values, "green"),
        blue = decodePoints(values, "blue"),
    )

    companion object {
        const val MAX_POINTS = 8
        val channels = listOf("master", "red", "green", "blue")
        val defaultPoints = listOf(ColorCurvePoint(0f, 0f), ColorCurvePoint(1f, 1f))

        fun decodePoints(values: Map<String, Float>, prefix: String): List<ColorCurvePoint> {
            val count = values["${prefix}_point_count"]?.toInt()?.coerceIn(2, MAX_POINTS)
            if (count != null) {
                return normalizePoints(List(count) { index ->
                    val fallback = defaultPoints.getOrElse(index) { defaultPoints.last() }
                    ColorCurvePoint(
                        values["${prefix}_point_${index}_x"] ?: fallback.input,
                        values["${prefix}_point_${index}_y"] ?: fallback.output,
                    )
                })
            }
            val legacy = listOf("shadows", "midtones", "highlights").map { values["${prefix}_$it"] ?: 0f }
            if (legacy.any { it != 0f }) {
                return normalizePoints(
                    listOf(
                        ColorCurvePoint(0f, legacy[0] * 0.25f),
                        ColorCurvePoint(0.5f, 0.5f + legacy[1] * 0.25f),
                        ColorCurvePoint(1f, 1f + legacy[2] * 0.25f),
                    ),
                )
            }
            return defaultPoints
        }

        fun encodePoints(prefix: String, points: List<ColorCurvePoint>): Map<String, Float> {
            val normalized = normalizePoints(points)
            return buildMap {
                put("${prefix}_point_count", normalized.size.toFloat())
                normalized.forEachIndexed { index, point ->
                    put("${prefix}_point_${index}_x", point.input)
                    put("${prefix}_point_${index}_y", point.output)
                }
            }
        }

        private fun normalizePoints(points: List<ColorCurvePoint>): List<ColorCurvePoint> =
            points.take(MAX_POINTS).map {
                ColorCurvePoint(it.input.coerceIn(0f, 1f), it.output.coerceIn(0f, 1f))
            }.sortedBy(ColorCurvePoint::input).let { normalized ->
                if (normalized.size >= 2) normalized else defaultPoints
            }
    }
}

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
                    alpha = values["stop_${index}_alpha"] ?: fallback.alpha,
                )
            }.map { stop ->
                stop.copy(
                    position = stop.position.coerceIn(0f, 1f),
                    red = stop.red.coerceIn(0f, 1f),
                    green = stop.green.coerceIn(0f, 1f),
                    blue = stop.blue.coerceIn(0f, 1f),
                    alpha = stop.alpha.coerceIn(0f, 1f),
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
                    put("stop_${index}_alpha", stop.alpha.coerceIn(0f, 1f))
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
    private val master: List<ColorCurvePoint>,
    private val red: List<ColorCurvePoint>,
    private val green: List<ColorCurvePoint>,
    private val blue: List<ColorCurvePoint>,
) : GlEffect {
    override fun toGlShaderProgram(context: Context, useHdr: Boolean): GlShaderProgram =
        ColorCurvesShaderProgram(useHdr, master, red, green, blue)
}

@OptIn(UnstableApi::class)
private class ColorCurvesShaderProgram(
    useHdr: Boolean,
    private val master: List<ColorCurvePoint>,
    private val red: List<ColorCurvePoint>,
    private val green: List<ColorCurvePoint>,
    private val blue: List<ColorCurvePoint>,
) : BaseGlShaderProgram(useHdr, 1) {
    private val program = createColorProgram(COLOR_CURVES_FRAGMENT_SHADER)

    override fun configure(inputWidth: Int, inputHeight: Int): Size = Size(inputWidth, inputHeight)

    override fun drawFrame(inputTexId: Int, presentationTimeUs: Long) {
        drawColorFrame(program, inputTexId, presentationTimeUs) {
            program.setFloatsUniform(
                "uCounts",
                floatArrayOf(master.size.toFloat(), red.size.toFloat(), green.size.toFloat(), blue.size.toFloat()),
            )
            setCurveUniforms("uMaster", master)
            setCurveUniforms("uRed", red)
            setCurveUniforms("uGreen", green)
            setCurveUniforms("uBlue", blue)
        }
    }

    private fun setCurveUniforms(name: String, points: List<ColorCurvePoint>) {
        val safe = points.ifEmpty { ColorCurvesEffect.defaultPoints }.take(ColorCurvesEffect.MAX_POINTS)
        val padded = List(ColorCurvesEffect.MAX_POINTS) { safe.getOrElse(it) { safe.last() } }
        val suffixes = listOf("01", "23", "45", "67")
        suffixes.forEachIndexed { pairIndex, suffix ->
            val first = padded[pairIndex * 2]
            val second = padded[pairIndex * 2 + 1]
            program.setFloatsUniform(
                "$name$suffix",
                floatArrayOf(first.input, first.output, second.input, second.output),
            )
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
            program.setFloatsUniform(
                "uAlpha03",
                FloatArray(4) { index -> stops.getOrElse(index) { stops.last() }.alpha },
            )
            program.setFloatsUniform(
                "uAlpha47",
                FloatArray(4) { offset ->
                    stops.getOrElse(offset + 4) { stops.last() }.alpha
                },
            )
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
    uniform vec4 uCounts;
    uniform vec4 uMaster01;
    uniform vec4 uMaster23;
    uniform vec4 uMaster45;
    uniform vec4 uMaster67;
    uniform vec4 uRed01;
    uniform vec4 uRed23;
    uniform vec4 uRed45;
    uniform vec4 uRed67;
    uniform vec4 uGreen01;
    uniform vec4 uGreen23;
    uniform vec4 uGreen45;
    uniform vec4 uGreen67;
    uniform vec4 uBlue01;
    uniform vec4 uBlue23;
    uniform vec4 uBlue45;
    uniform vec4 uBlue67;
    varying vec2 vTexSamplingCoord;

    vec2 curvePoint(float index, vec4 p01, vec4 p23, vec4 p45, vec4 p67) {
      if (index < 0.5) return p01.xy;
      if (index < 1.5) return p01.zw;
      if (index < 2.5) return p23.xy;
      if (index < 3.5) return p23.zw;
      if (index < 4.5) return p45.xy;
      if (index < 5.5) return p45.zw;
      if (index < 6.5) return p67.xy;
      return p67.zw;
    }

    float applyCurve(float value, float count, vec4 p01, vec4 p23, vec4 p45, vec4 p67) {
      vec2 previous = curvePoint(0.0, p01, p23, p45, p67);
      vec2 lastPoint = previous;
      float mapped = previous.y;
      for (int i = 1; i < 8; i++) {
        float index = float(i);
        float enabled = step(index + 0.5, count);
        vec2 current = curvePoint(index, p01, p23, p45, p67);
        float span = max(current.x - previous.x, 0.0001);
        float blend = clamp((value - previous.x) / span, 0.0, 1.0);
        float inside = enabled * step(previous.x, value) * step(value, current.x);
        mapped = mix(mapped, mix(previous.y, current.y, blend), inside);
        previous = mix(previous, current, enabled);
        lastPoint = mix(lastPoint, current, enabled);
      }
      mapped = mix(mapped, lastPoint.y, step(lastPoint.x, value));
      return clamp(mapped, 0.0, 1.0);
    }

    void main() {
      vec4 source = texture2D(uTexSampler, vTexSamplingCoord);
      vec3 masterColor = vec3(
        applyCurve(source.r, uCounts.x, uMaster01, uMaster23, uMaster45, uMaster67),
        applyCurve(source.g, uCounts.x, uMaster01, uMaster23, uMaster45, uMaster67),
        applyCurve(source.b, uCounts.x, uMaster01, uMaster23, uMaster45, uMaster67)
      );
      vec3 curved = vec3(
        applyCurve(masterColor.r, uCounts.y, uRed01, uRed23, uRed45, uRed67),
        applyCurve(masterColor.g, uCounts.z, uGreen01, uGreen23, uGreen45, uGreen67),
        applyCurve(masterColor.b, uCounts.w, uBlue01, uBlue23, uBlue45, uBlue67)
      );
      gl_FragColor = vec4(curved, source.a);
    }
"""

private const val GRADIENT_MAP_FRAGMENT_SHADER = """
    precision mediump float;
    uniform sampler2D uTexSampler;
    uniform vec4 uMeta;
    uniform vec4 uAlpha03;
    uniform vec4 uAlpha47;
    uniform vec4 uStop0;
    uniform vec4 uStop1;
    uniform vec4 uStop2;
    uniform vec4 uStop3;
    uniform vec4 uStop4;
    uniform vec4 uStop5;
    uniform vec4 uStop6;
    uniform vec4 uStop7;
    varying vec2 vTexSamplingCoord;

    vec4 applyInterval(
      vec4 mapped,
      float luminance,
      vec4 left,
      vec4 right,
      float leftAlpha,
      float rightAlpha,
      float enabled
    ) {
      float span = max(right.x - left.x, 0.0001);
      float blend = clamp((luminance - left.x) / span, 0.0, 1.0);
      vec4 intervalColor = mix(vec4(left.yzw, leftAlpha), vec4(right.yzw, rightAlpha), blend);
      return mix(mapped, intervalColor, enabled * step(left.x, luminance));
    }

    void main() {
      vec4 source = texture2D(uTexSampler, vTexSamplingCoord);
      float luminance = dot(source.rgb, vec3(0.299, 0.587, 0.114));
      vec4 mapped = vec4(uStop0.yzw, uAlpha03.x);
      mapped = applyInterval(mapped, luminance, uStop0, uStop1, uAlpha03.x, uAlpha03.y, step(1.5, uMeta.x));
      mapped = applyInterval(mapped, luminance, uStop1, uStop2, uAlpha03.y, uAlpha03.z, step(2.5, uMeta.x));
      mapped = applyInterval(mapped, luminance, uStop2, uStop3, uAlpha03.z, uAlpha03.w, step(3.5, uMeta.x));
      mapped = applyInterval(mapped, luminance, uStop3, uStop4, uAlpha03.w, uAlpha47.x, step(4.5, uMeta.x));
      mapped = applyInterval(mapped, luminance, uStop4, uStop5, uAlpha47.x, uAlpha47.y, step(5.5, uMeta.x));
      mapped = applyInterval(mapped, luminance, uStop5, uStop6, uAlpha47.y, uAlpha47.z, step(6.5, uMeta.x));
      mapped = applyInterval(mapped, luminance, uStop6, uStop7, uAlpha47.z, uAlpha47.w, step(7.5, uMeta.x));
      gl_FragColor = vec4(clamp(mapped.rgb, 0.0, 1.0), source.a * clamp(mapped.a, 0.0, 1.0));
    }
"""
