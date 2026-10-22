package dev.lec.effectapp.effects

import android.content.Context
import android.opengl.GLES20
import androidx.annotation.OptIn
import androidx.media3.common.VideoFrameProcessingException
import androidx.media3.common.util.GlProgram
import androidx.media3.common.util.GlUtil
import androidx.media3.common.util.Size
import androidx.media3.common.util.UnstableApi
import androidx.media3.effect.BaseGlShaderProgram
import androidx.media3.effect.GlEffect
import androidx.media3.effect.GlShaderProgram

@OptIn(UnstableApi::class)
internal data class NativeCVideoEffect(val source: String, val controls: Map<String, Float>) : GlEffect {
    override fun toGlShaderProgram(context: Context, useHdr: Boolean): GlShaderProgram {
        require(!useHdr) { "Native C video plug-ins currently require SDR video." }
        return NativeCVideoProgram(source, controls)
    }
}

/** SDR texture readback goes through shared memory; user instructions execute only in the worker. */
@OptIn(UnstableApi::class)
private class NativeCVideoProgram(private val source: String, controls: Map<String, Float>) : BaseGlShaderProgram(false, 1) {
    private val controls = nativeControls(controls)
    private val program = GlProgram(
        "attribute vec4 aPosition; varying vec2 uv; void main() { gl_Position=aPosition; uv=aPosition.xy*0.5+0.5; }",
        "precision highp float; uniform sampler2D uTexture; varying vec2 uv; void main() { gl_FragColor=texture2D(uTexture,uv); }",
    )
    private var width = 0
    private var height = 0
    private var texture = 0
    private var framebuffer = 0
    private var session: NativeCClient.Session? = null

    override fun configure(inputWidth: Int, inputHeight: Int): Size {
        require(inputWidth.toLong() * inputHeight * 4 in 4..NativeCWire.MAX_BUFFER_BYTES.toLong()) { "Native C video frame is too large." }
        if (width != inputWidth || height != inputHeight) {
            disposeBuffers()
            width = inputWidth; height = inputHeight
            val ids = IntArray(1)
            GLES20.glGenFramebuffers(1, ids, 0); framebuffer = ids[0]
            GLES20.glGenTextures(1, ids, 0); texture = ids[0]
            GLES20.glBindTexture(GLES20.GL_TEXTURE_2D, texture)
            GLES20.glTexParameteri(GLES20.GL_TEXTURE_2D, GLES20.GL_TEXTURE_MIN_FILTER, GLES20.GL_LINEAR)
            GLES20.glTexParameteri(GLES20.GL_TEXTURE_2D, GLES20.GL_TEXTURE_MAG_FILTER, GLES20.GL_LINEAR)
            GLES20.glTexParameteri(GLES20.GL_TEXTURE_2D, GLES20.GL_TEXTURE_WRAP_S, GLES20.GL_CLAMP_TO_EDGE)
            GLES20.glTexParameteri(GLES20.GL_TEXTURE_2D, GLES20.GL_TEXTURE_WRAP_T, GLES20.GL_CLAMP_TO_EDGE)
            GLES20.glTexImage2D(GLES20.GL_TEXTURE_2D, 0, GLES20.GL_RGBA, width, height, 0, GLES20.GL_RGBA, GLES20.GL_UNSIGNED_BYTE, null)
            GlUtil.checkGlError()
        }
        return Size(width, height)
    }

    override fun drawFrame(inputTexId: Int, presentationTimeUs: Long) {
        try {
            var output = inputTexId
            if (NativeCClient.canRun(source, audio = false)) {
                if (session?.isAlive != true) { session?.close(); session = NativeCClient.open(source, false, width * height * 4) }
                val worker = requireNotNull(session)
                val previous = IntArray(1)
                GLES20.glGetIntegerv(GLES20.GL_FRAMEBUFFER_BINDING, previous, 0)
                try {
                    GLES20.glBindFramebuffer(GLES20.GL_FRAMEBUFFER, framebuffer)
                    GLES20.glFramebufferTexture2D(GLES20.GL_FRAMEBUFFER, GLES20.GL_COLOR_ATTACHMENT0, GLES20.GL_TEXTURE_2D, inputTexId, 0)
                    check(GLES20.glCheckFramebufferStatus(GLES20.GL_FRAMEBUFFER) == GLES20.GL_FRAMEBUFFER_COMPLETE) { "Could not read native C video frame." }
                    worker.buffer.clear()
                    GLES20.glReadPixels(0, 0, width, height, GLES20.GL_RGBA, GLES20.GL_UNSIGNED_BYTE, worker.buffer)
                    GlUtil.checkGlError()
                } finally { GLES20.glBindFramebuffer(GLES20.GL_FRAMEBUFFER, previous[0]) }
                worker.process(width, height, 0, presentationTimeUs / 1_000_000.0, controls)
                GLES20.glBindTexture(GLES20.GL_TEXTURE_2D, texture)
                GLES20.glTexSubImage2D(GLES20.GL_TEXTURE_2D, 0, 0, 0, width, height, GLES20.GL_RGBA, GLES20.GL_UNSIGNED_BYTE, worker.buffer)
                output = texture
            } else { session?.close(); session = null }
            program.use()
            program.setSamplerTexIdUniform("uTexture", output, 0)
            program.setBufferAttribute("aPosition", floatArrayOf(-1f,-1f,0f,1f, -1f,1f,0f,1f, 1f,1f,0f,1f, 1f,-1f,0f,1f), 4)
            program.bindAttributesAndUniforms()
            GLES20.glDrawArrays(GLES20.GL_TRIANGLE_FAN, 0, 4)
            GlUtil.checkGlError()
        } catch (exception: Exception) { throw VideoFrameProcessingException(exception, presentationTimeUs) }
    }

    private fun disposeBuffers() {
        session?.close(); session = null
        if (texture != 0) GLES20.glDeleteTextures(1, intArrayOf(texture), 0)
        if (framebuffer != 0) GLES20.glDeleteFramebuffers(1, intArrayOf(framebuffer), 0)
        texture = 0; framebuffer = 0
    }

    override fun release() {
        try { disposeBuffers(); program.delete() } finally { super.release() }
    }
}
