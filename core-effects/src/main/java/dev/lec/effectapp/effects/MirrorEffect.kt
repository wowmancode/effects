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

/** Mirrors one selected half across the vertical or horizontal center line. */
@OptIn(UnstableApi::class)
class MirrorEffect : LecEffect {
    override val id = "mirror"
    override val displayName = "Mirror sides"
    override val category = EffectCategory.EFFECTS
    override val params = listOf(
        EffectParam("source_side", "Source side", 0f, 3f, 0f),
    )

    override fun toMediaEffect(values: Map<String, Float>): Effect =
        MirrorGlEffect(sourceSide = (values["source_side"] ?: 0f).toInt().coerceIn(0, 3))
}

@OptIn(UnstableApi::class)
private data class MirrorGlEffect(val sourceSide: Int) : GlEffect {
    override fun toGlShaderProgram(context: Context, useHdr: Boolean): GlShaderProgram =
        MirrorShaderProgram(useHdr, sourceSide)
}

@OptIn(UnstableApi::class)
private class MirrorShaderProgram(useHdr: Boolean, private val sourceSide: Int) :
    BaseGlShaderProgram(useHdr, 1) {
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
            program.setIntUniform("uSourceSide", sourceSide)
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
            uniform int uSourceSide;
            varying vec2 vTexSamplingCoord;

            void main() {
              vec2 uv = vTexSamplingCoord;
              if (uSourceSide == 0 && uv.x > 0.5) uv.x = 1.0 - uv.x;
              if (uSourceSide == 1 && uv.x < 0.5) uv.x = 1.0 - uv.x;
              if (uSourceSide == 2 && uv.y < 0.5) uv.y = 1.0 - uv.y;
              if (uSourceSide == 3 && uv.y > 0.5) uv.y = 1.0 - uv.y;
              gl_FragColor = texture2D(uTexSampler, uv);
            }
        """
    }
}
