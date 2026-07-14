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
class RgbToBgrEffect : LecEffect {
    override val id = "rgb_to_bgr"
    override val displayName = "RGB → BGR"
    override val category = EffectCategory.EFFECTS
    override val params = emptyList<EffectParam>()
    override fun toMediaEffect(values: Map<String, Float>): Effect = ChannelColorEffect(swapRedBlue = true)
}

@OptIn(UnstableApi::class)
class ReverseVideoEffect : LecEffect {
    override val id = "reverse_video"
    override val displayName = "Reverse video"
    override val category = EffectCategory.EFFECTS
    override val params = emptyList<EffectParam>()

    // Reverse is handled by source ordering in ProjectCompositionFactory, before the shader stack.
    override fun toMediaEffect(values: Map<String, Float>): Effect? = null
}

@OptIn(UnstableApi::class)
internal data class ChannelColorEffect(
    val invertRed: Boolean = false,
    val invertGreen: Boolean = false,
    val invertBlue: Boolean = false,
    val swapRedBlue: Boolean = false,
) : GlEffect {
    override fun toGlShaderProgram(context: Context, useHdr: Boolean): GlShaderProgram =
        ChannelColorShaderProgram(useHdr, invertRed, invertGreen, invertBlue, swapRedBlue)

    companion object {
        fun invert(values: Map<String, Float>) = ChannelColorEffect(
            invertRed = (values["invert_red"] ?: 1f) >= 0.5f,
            invertGreen = (values["invert_green"] ?: 1f) >= 0.5f,
            invertBlue = (values["invert_blue"] ?: 1f) >= 0.5f,
        )
    }
}

@OptIn(UnstableApi::class)
private class ChannelColorShaderProgram(
    useHdr: Boolean,
    private val invertRed: Boolean,
    private val invertGreen: Boolean,
    private val invertBlue: Boolean,
    private val swapRedBlue: Boolean,
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
            program.setFloatsUniform(
                "uOptions",
                floatArrayOf(
                    if (invertRed) 1f else 0f,
                    if (invertGreen) 1f else 0f,
                    if (invertBlue) 1f else 0f,
                    if (swapRedBlue) 1f else 0f,
                ),
            )
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
            precision mediump float;
            uniform sampler2D uTexSampler;
            uniform vec4 uOptions;
            varying vec2 vTexSamplingCoord;

            void main() {
              vec4 source = texture2D(uTexSampler, vTexSamplingCoord);
              vec3 color = source.rgb;
              if (uOptions.w > 0.5) {
                color = color.bgr;
              }
              color.r = mix(color.r, 1.0 - color.r, uOptions.x);
              color.g = mix(color.g, 1.0 - color.g, uOptions.y);
              color.b = mix(color.b, 1.0 - color.b, uOptions.z);
              gl_FragColor = vec4(color, source.a);
            }
        """
    }
}
