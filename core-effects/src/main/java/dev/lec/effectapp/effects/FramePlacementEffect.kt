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

/**
 * Crops a window out of the picture and places it anywhere in the frame; everything else becomes
 * transparent, so layers underneath show through. All values are fractions: the source window
 * by its centre and size in the picture (0..1, Y down, optionally turned by src_rot radians), the
 * destination by its centre and size in the frame. A negative destination width or height flips
 * the window. Identity (window = whole picture, destination = whole frame) leaves the picture as is.
 */
@OptIn(UnstableApi::class)
class FramePlacementEffect : LecEffect {
    override val id = "frame_place"
    override val displayName = "Crop & place"
    override val category = EffectCategory.EFFECTS
    override val params = listOf(
        EffectParam("src_cx", "Window centre X", 0f, 1f, 0.5f),
        EffectParam("src_cy", "Window centre Y", 0f, 1f, 0.5f),
        EffectParam("src_w", "Window width", 0.01f, 2f, 1f),
        EffectParam("src_h", "Window height", 0.01f, 2f, 1f),
        EffectParam("src_rot", "Window turn (rad)", -3.1416f, 3.1416f, 0f),
        EffectParam("src_aspect", "Picture aspect", 0.1f, 10f, 1.7778f),
        EffectParam("dst_cx", "Place centre X", -1f, 2f, 0.5f),
        EffectParam("dst_cy", "Place centre Y", -1f, 2f, 0.5f),
        EffectParam("dst_w", "Place width (− flips)", -2f, 2f, 1f),
        EffectParam("dst_h", "Place height (− flips)", -2f, 2f, 1f),
    )

    override fun toMediaEffect(values: Map<String, Float>): Effect {
        fun v(key: String) = values[key]?.takeIf(Float::isFinite) ?: params.first { it.id == key }.default
        return FramePlacementGlEffect(
            floatArrayOf(v("src_cx"), v("src_cy"), v("src_w"), v("src_h")),
            v("src_rot"),
            v("src_aspect").coerceIn(0.01f, 100f),
            floatArrayOf(v("dst_cx"), v("dst_cy"), nonZero(v("dst_w")), nonZero(v("dst_h"))),
        )
    }

    private fun nonZero(value: Float): Float = if (kotlin.math.abs(value) < 1e-5f) 1e-5f else value
}

@OptIn(UnstableApi::class)
private class FramePlacementGlEffect(
    val source: FloatArray,
    val rotation: Float,
    val sourceAspect: Float,
    val destination: FloatArray,
) : GlEffect {
    override fun toGlShaderProgram(context: Context, useHdr: Boolean): GlShaderProgram =
        FramePlacementShaderProgram(useHdr, source, rotation, sourceAspect, destination)

    override fun equals(other: Any?): Boolean =
        other is FramePlacementGlEffect && source.contentEquals(other.source) && rotation == other.rotation &&
            sourceAspect == other.sourceAspect && destination.contentEquals(other.destination)

    override fun hashCode(): Int =
        ((source.contentHashCode() * 31 + rotation.hashCode()) * 31 + sourceAspect.hashCode()) * 31 +
            destination.contentHashCode()
}

@OptIn(UnstableApi::class)
private class FramePlacementShaderProgram(
    useHdr: Boolean,
    private val source: FloatArray,
    private val rotation: Float,
    private val sourceAspect: Float,
    private val destination: FloatArray,
) : BaseGlShaderProgram(useHdr, 1) {
    private val program = try {
        GlProgram(VERTEX_SHADER, FRAGMENT_SHADER)
    } catch (exception: GlUtil.GlException) {
        throw VideoFrameProcessingException(exception)
    }

    override fun configure(inputWidth: Int, inputHeight: Int): Size = Size(inputWidth, inputHeight)

    override fun drawFrame(inputTexId: Int, presentationTimeUs: Long) {
        try {
            program.use()
            program.setSamplerTexIdUniform("uTexSampler", inputTexId, 0)
            program.setFloatsUniform("uSource", source)
            program.setFloatUniform("uRotation", rotation)
            program.setFloatUniform("uSourceAspect", sourceAspect)
            program.setFloatsUniform("uDestination", destination)
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

        // Works backwards from each output pixel: where does it fall inside the destination
        // rectangle, which point of the (turned) source window is that, and is that point inside
        // the picture? Positions use Y down (texture rows run bottom-up, hence the 1 - y flips).
        const val FRAGMENT_SHADER = """
            precision highp float;
            uniform sampler2D uTexSampler;
            uniform vec4 uSource;        // window centre x, y and width, height (fractions)
            uniform float uRotation;     // window turn, radians
            uniform float uSourceAspect; // picture width / height
            uniform vec4 uDestination;   // centre x, y and width, height in the frame (fractions)
            varying vec2 vTexSamplingCoord;
            void main() {
              vec2 p = vec2(vTexSamplingCoord.x, 1.0 - vTexSamplingCoord.y);
              // 0..1 across the destination; a negative size counts from the other side (flip).
              vec2 t = (p - uDestination.xy) / uDestination.zw + 0.5;
              if (t.x < 0.0 || t.x > 1.0 || t.y < 0.0 || t.y > 1.0) {
                gl_FragColor = vec4(0.0);
                return;
              }
              // Offset from the window centre, in picture heights so the turn keeps its shape.
              vec2 q = (t - 0.5) * abs(uSource.zw);
              q.x *= uSourceAspect;
              float c = cos(uRotation);
              float s = sin(uRotation);
              q = vec2(c * q.x + s * q.y, -s * q.x + c * q.y);
              q.x /= uSourceAspect;
              vec2 src = uSource.xy + q;
              if (src.x < 0.0 || src.x > 1.0 || src.y < 0.0 || src.y > 1.0) {
                gl_FragColor = vec4(0.0);
                return;
              }
              gl_FragColor = texture2D(uTexSampler, vec2(src.x, 1.0 - src.y));
            }
        """
    }
}
