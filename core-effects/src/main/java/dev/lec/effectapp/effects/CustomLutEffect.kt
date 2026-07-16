package dev.lec.effectapp.effects

import android.content.Context
import android.net.Uri
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
import java.nio.ByteBuffer
import java.util.concurrent.ConcurrentHashMap
import kotlin.math.roundToInt

/** Imports standard .cube LUTs and applies them with a controllable opacity. */
@OptIn(UnstableApi::class)
class CustomLutEffect : LecEffect {
    override val id = "custom_lut"
    override val displayName = "Custom LUT"
    override val category = EffectCategory.EFFECTS
    override val params = listOf(EffectParam("mix", "LUT mix", 0f, 1f, 1f))
    override fun toMediaEffect(values: Map<String, Float>): Effect? = null
}

@OptIn(UnstableApi::class)
fun customLutMediaEffect(uri: String?, mix: Float): Effect? =
    uri?.takeIf(String::isNotBlank)?.let { CustomLutGlEffect(it, mix.coerceIn(0f, 1f)) }

data class CubeLut(val size: Int, val rgb: FloatArray) {
    fun sample(red: Float, green: Float, blue: Float): FloatArray {
        val r = (red.coerceIn(0f, 1f) * (size - 1)).roundToInt()
        val g = (green.coerceIn(0f, 1f) * (size - 1)).roundToInt()
        val b = (blue.coerceIn(0f, 1f) * (size - 1)).roundToInt()
        val index = ((b * size * size) + (g * size) + r) * 3
        return floatArrayOf(rgb[index], rgb[index + 1], rgb[index + 2])
    }
}

object CubeLutStore {
    private val cache = ConcurrentHashMap<String, CubeLut>()

    fun load(context: Context, uri: String): Result<CubeLut> = runCatching {
        cache[uri] ?: context.contentResolver.openInputStream(Uri.parse(uri))?.bufferedReader()?.use { reader ->
            parse(reader.readText())
        }?.also { cache[uri] = it } ?: error("Could not read the LUT file")
    }

    fun parse(text: String): CubeLut {
        var size = 0
        var domainMin = floatArrayOf(0f, 0f, 0f)
        var domainMax = floatArrayOf(1f, 1f, 1f)
        val values = mutableListOf<Float>()
        text.lineSequence().forEach { raw ->
            val tokens = raw.substringBefore('#').trim().split(Regex("\\s+")).filter(String::isNotEmpty)
            if (tokens.isEmpty()) return@forEach
            when (tokens.first().uppercase()) {
                "TITLE" -> Unit
                "LUT_3D_SIZE" -> size = tokens.getOrNull(1)?.toIntOrNull() ?: 0
                "DOMAIN_MIN" -> if (tokens.size >= 4) domainMin = FloatArray(3) { tokens[it + 1].toFloat() }
                "DOMAIN_MAX" -> if (tokens.size >= 4) domainMax = FloatArray(3) { tokens[it + 1].toFloat() }
                else -> if (tokens.size >= 3) {
                    tokens.take(3).forEach { values += it.toFloatOrNull() ?: error("Invalid LUT color") }
                }
            }
        }
        require(size in 2..64) { "This LUT needs a LUT_3D_SIZE between 2 and 64" }
        require(values.size >= size * size * size * 3) { "The LUT does not contain enough 3D color entries" }
        val colors = FloatArray(size * size * size * 3)
        repeat(size * size * size) { index ->
            repeat(3) { channel ->
                val span = (domainMax[channel] - domainMin[channel]).takeIf { it != 0f } ?: 1f
                colors[index * 3 + channel] = ((values[index * 3 + channel] - domainMin[channel]) / span).coerceIn(0f, 1f)
            }
        }
        return CubeLut(size, colors)
    }
}

@OptIn(UnstableApi::class)
private data class CustomLutGlEffect(val uri: String, val mix: Float) : GlEffect {
    override fun toGlShaderProgram(context: Context, useHdr: Boolean): GlShaderProgram =
        CustomLutShaderProgram(useHdr, CubeLutStore.load(context, uri).getOrElse { throw VideoFrameProcessingException(it) }, mix)
}

@OptIn(UnstableApi::class)
private class CustomLutShaderProgram(
    useHdr: Boolean,
    private val lut: CubeLut,
    private val mix: Float,
) : BaseGlShaderProgram(useHdr, 1) {
    private val program = try {
        GlProgram(CUSTOM_LUT_VERTEX_SHADER, CUSTOM_LUT_FRAGMENT_SHADER)
    } catch (error: GlUtil.GlException) {
        throw VideoFrameProcessingException(error)
    }
    private val texture = IntArray(1)

    init {
        GLES20.glGenTextures(1, texture, 0)
        GLES20.glBindTexture(GLES20.GL_TEXTURE_2D, texture[0])
        GLES20.glTexParameteri(GLES20.GL_TEXTURE_2D, GLES20.GL_TEXTURE_MIN_FILTER, GLES20.GL_LINEAR)
        GLES20.glTexParameteri(GLES20.GL_TEXTURE_2D, GLES20.GL_TEXTURE_MAG_FILTER, GLES20.GL_LINEAR)
        GLES20.glTexParameteri(GLES20.GL_TEXTURE_2D, GLES20.GL_TEXTURE_WRAP_S, GLES20.GL_CLAMP_TO_EDGE)
        GLES20.glTexParameteri(GLES20.GL_TEXTURE_2D, GLES20.GL_TEXTURE_WRAP_T, GLES20.GL_CLAMP_TO_EDGE)
        val pixels = ByteBuffer.allocateDirect(lut.size * lut.size * lut.size * 4)
        repeat(lut.size * lut.size * lut.size) { index ->
            pixels.put((lut.rgb[index * 3] * 255f).roundToInt().toByte())
            pixels.put((lut.rgb[index * 3 + 1] * 255f).roundToInt().toByte())
            pixels.put((lut.rgb[index * 3 + 2] * 255f).roundToInt().toByte())
            pixels.put(255.toByte())
        }
        pixels.position(0)
        GLES20.glTexImage2D(GLES20.GL_TEXTURE_2D, 0, GLES20.GL_RGBA, lut.size * lut.size, lut.size, 0, GLES20.GL_RGBA, GLES20.GL_UNSIGNED_BYTE, pixels)
        GLES20.glBindTexture(GLES20.GL_TEXTURE_2D, 0)
    }

    override fun configure(inputWidth: Int, inputHeight: Int): Size = Size(inputWidth, inputHeight)

    override fun drawFrame(inputTexId: Int, presentationTimeUs: Long) {
        try {
            program.use()
            program.setSamplerTexIdUniform("uTexSampler", inputTexId, 0)
            program.setSamplerTexIdUniform("uLutSampler", texture[0], 1)
            program.setFloatsUniform("uLutMeta", floatArrayOf(lut.size.toFloat(), mix, 0f, 0f))
            program.setBufferAttribute("aFramePosition", CUSTOM_LUT_VERTICES, 4)
            program.bindAttributesAndUniforms()
            GLES20.glDrawArrays(GLES20.GL_TRIANGLE_FAN, 0, 4)
            GlUtil.checkGlError()
        } catch (error: GlUtil.GlException) {
            throw VideoFrameProcessingException(error, presentationTimeUs)
        }
    }

    override fun release() {
        GLES20.glDeleteTextures(1, texture, 0)
        program.delete()
        super.release()
    }
}

private val CUSTOM_LUT_VERTICES = floatArrayOf(-1f, -1f, 0f, 1f, -1f, 1f, 0f, 1f, 1f, 1f, 0f, 1f, 1f, -1f, 0f, 1f)
private const val CUSTOM_LUT_VERTEX_SHADER = """
    attribute vec4 aFramePosition;
    varying vec2 vTexSamplingCoord;
    void main() {
      gl_Position = aFramePosition;
      vTexSamplingCoord = aFramePosition.xy * 0.5 + 0.5;
    }
"""

private const val CUSTOM_LUT_FRAGMENT_SHADER = """
    precision mediump float;
    uniform sampler2D uTexSampler;
    uniform sampler2D uLutSampler;
    uniform vec4 uLutMeta;
    varying vec2 vTexSamplingCoord;

    vec3 lookup(vec3 color) {
      float size = uLutMeta.x;
      float blue = color.b * (size - 1.0);
      float b0 = floor(blue);
      float b1 = min(b0 + 1.0, size - 1.0);
      vec2 base = vec2((color.r * (size - 1.0) + 0.5) / (size * size), (color.g * (size - 1.0) + 0.5) / size);
      vec3 first = texture2D(uLutSampler, base + vec2(b0 / size, 0.0)).rgb;
      vec3 second = texture2D(uLutSampler, base + vec2(b1 / size, 0.0)).rgb;
      return mix(first, second, fract(blue));
    }

    void main() {
      vec4 source = texture2D(uTexSampler, vTexSamplingCoord);
      gl_FragColor = vec4(mix(source.rgb, lookup(clamp(source.rgb, 0.0, 1.0)), uLutMeta.y), source.a);
    }
"""
