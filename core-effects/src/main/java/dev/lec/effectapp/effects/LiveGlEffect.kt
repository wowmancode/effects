package dev.lec.effectapp.effects

import android.content.Context
import android.graphics.Matrix
import androidx.media3.common.Effect
import androidx.media3.common.util.Size
import androidx.media3.common.util.UnstableApi
import androidx.media3.effect.BaseGlShaderProgram
import androidx.media3.effect.GlEffect
import androidx.media3.effect.GlShaderProgram
import androidx.media3.effect.MatrixTransformation

/**
 * A preview effect whose parameters can change while video is flowing, without touching the
 * player's effect list.
 *
 * Calling ExoPlayer.setVideoEffects for every slider tick re-registers the whole effect stream,
 * which is slow (and can wedge the GL chain). Instead this effect stays in the chain permanently
 * and, right before drawing each frame on the GL thread, asks [current] what it should look like.
 * When the returned key differs from the one it is drawing with, it builds the new effect's shader
 * program in place and draws with that from this frame on. Unchanged frames cost nothing extra.
 *
 * Only effects backed by a single-pass [BaseGlShaderProgram] can be swapped this way. Anything
 * else (multi-pass blurs, frame droppers, ...) is returned as-is and [onNotLive] is called, so the
 * caller knows to apply that effect's changes by rebuilding the pipeline instead.
 */
@UnstableApi
class LiveGlEffect(
    private val current: () -> Spec,
    private val onNotLive: () -> Unit,
) : GlEffect {
    /** [key] identifies what [build] produces; equal keys mean the frame would look the same. */
    class Spec(val key: Any?, val build: () -> Effect?)

    override fun toGlShaderProgram(context: Context, useHdr: Boolean): GlShaderProgram {
        val spec = current()
        val inner = programFor(spec.build(), context, useHdr)
        if (inner !is BaseGlShaderProgram) {
            onNotLive()
            return inner
        }
        return LiveShaderProgram(context, useHdr, spec.key, inner)
    }

    private inner class LiveShaderProgram(
        private val context: Context,
        private val useHdr: Boolean,
        private var key: Any?,
        private var inner: BaseGlShaderProgram,
    ) : BaseGlShaderProgram(useHdr, 1) {
        private var inputSize: Size? = null
        private var outputSize: Size? = null

        override fun configure(inputWidth: Int, inputHeight: Int): Size {
            inputSize = Size(inputWidth, inputHeight)
            return inner.configure(inputWidth, inputHeight).also { outputSize = it }
        }

        override fun drawFrame(inputTexId: Int, presentationTimeUs: Long) {
            val spec = current()
            if (spec.key != key) swapTo(spec)
            inner.drawFrame(inputTexId, presentationTimeUs)
        }

        private fun swapTo(spec: Spec) {
            // Remember the key either way so a failed swap isn't retried on every frame.
            key = spec.key
            val replacement = try {
                programFor(spec.build(), context, useHdr)
            } catch (exception: Exception) {
                onNotLive()
                return
            }
            val input = inputSize
            if (replacement !is BaseGlShaderProgram || input == null) {
                replacement.release()
                onNotLive()
                return
            }
            val size = replacement.configure(input.width, input.height)
            if (size != outputSize) {
                // The output texture is already sized; a size change needs a real rebuild.
                replacement.release()
                onNotLive()
                return
            }
            inner.release()
            inner = replacement
        }

        override fun shouldClearTextureBuffer(): Boolean = inner.shouldClearTextureBuffer()

        override fun release() {
            super.release()
            inner.release()
        }
    }

    private companion object {
        // Drawn when an effect resolves to nothing (e.g. an unknown id), so the slot passes through.
        val IDENTITY: GlEffect = object : MatrixTransformation {
            override fun getMatrix(presentationTimeUs: Long): Matrix = Matrix()
        }

        fun programFor(effect: Effect?, context: Context, useHdr: Boolean): GlShaderProgram =
            (effect as? GlEffect ?: IDENTITY).toGlShaderProgram(context, useHdr)
    }
}
