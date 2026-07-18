package dev.lec.effectapp.effects

import android.content.Context
import android.graphics.Bitmap
import android.graphics.BitmapFactory
import android.graphics.SurfaceTexture
import android.media.MediaCodec
import android.media.MediaExtractor
import android.media.MediaFormat
import android.net.Uri
import android.opengl.GLES11Ext
import android.opengl.GLES20
import android.opengl.GLUtils
import android.view.Surface
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
import kotlin.math.max

/** Displaces source pixels using red (X) and green (Y) values from a map. */
@OptIn(UnstableApi::class)
class DisplacementMapEffect : LecEffect {
    override val id = "displacement_map"
    override val displayName = "Displacement map"
    override val category = EffectCategory.EFFECTS
    override val params = listOf(
        EffectParam("strength", "Strength", 0f, 0.25f, 0.06f),
        EffectParam("warp_x", "X warp", 0f, 1f, 1f, ParamKind.BOOLEAN),
        EffectParam("warp_y", "Y warp", 0f, 1f, 1f, ParamKind.BOOLEAN),
        EffectParam("wrap_edges", "Wrap edges", 0f, 1f, 0f, ParamKind.BOOLEAN),
    )

    override fun toMediaEffect(values: Map<String, Float>): Effect? = null
}

@OptIn(UnstableApi::class)
fun displacementMapMediaEffect(
    uri: String?,
    values: Map<String, Float>,
    waitForVideoMapFrames: Boolean = false,
): Effect? {
    val source = uri?.takeIf(String::isNotBlank) ?: return null
    return DisplacementMapGlEffect(
        uri = source,
        strength = (values["strength"] ?: 0.06f).coerceIn(0f, 0.25f),
        warpX = (values["warp_x"] ?: 1f) >= 0.5f,
        warpY = (values["warp_y"] ?: 1f) >= 0.5f,
        wrapEdges = (values["wrap_edges"] ?: 0f) >= 0.5f,
        waitForVideoMapFrames = waitForVideoMapFrames,
    )
}

@OptIn(UnstableApi::class)
private data class DisplacementMapGlEffect(
    val uri: String,
    val strength: Float,
    val warpX: Boolean,
    val warpY: Boolean,
    val wrapEdges: Boolean,
    val waitForVideoMapFrames: Boolean,
) : GlEffect {
    override fun toGlShaderProgram(context: Context, useHdr: Boolean): GlShaderProgram {
        val mapSource = openMapSource(context, uri, waitForVideoMapFrames)
            ?: throw VideoFrameProcessingException(IllegalArgumentException("Could not read displacement map"))
        return DisplacementMapShaderProgram(useHdr, mapSource, strength, warpX, warpY, wrapEdges)
    }
}

/** A still image or a looping video map selected at the input frame presentation timestamp. */
private sealed interface MapSource : AutoCloseable {
    val externalTextureId: Int? get() = null
    fun initialFrame(): Bitmap? = null
    fun frameAt(presentationTimeUs: Long)

    class Image(private val bitmap: Bitmap) : MapSource {
        override fun initialFrame(): Bitmap = bitmap
        override fun frameAt(presentationTimeUs: Long) = Unit
        override fun close() { if (!bitmap.isRecycled) bitmap.recycle() }
    }

    class Video(context: Context, source: String, private val waitForFrames: Boolean) : MapSource {
        private val extractor = MediaExtractor()
        private val codec: MediaCodec
        private val surfaceTexture: SurfaceTexture
        private val outputSurface: Surface
        private val durationUs: Long
        private var inputEnded = false
        private var lastFrameUs = -1L
        private var frameAvailable = false
        private val frameLock = Object()
        override val externalTextureId: Int

        init {
            extractor.setDataSource(context, Uri.parse(source), emptyMap())
            val track = (0 until extractor.trackCount).firstOrNull { index ->
                extractor.getTrackFormat(index).getString(MediaFormat.KEY_MIME)?.startsWith("video/") == true
            } ?: error("Displacement map has no video track")
            val format = extractor.getTrackFormat(track)
            durationUs = if (format.containsKey(MediaFormat.KEY_DURATION)) {
                format.getLong(MediaFormat.KEY_DURATION).coerceAtLeast(1L)
            } else {
                Long.MAX_VALUE
            }
            extractor.selectTrack(track)
            externalTextureId = IntArray(1).also { textures ->
                GLES20.glGenTextures(1, textures, 0)
                GLES20.glBindTexture(GLES11Ext.GL_TEXTURE_EXTERNAL_OES, textures[0])
                GLES20.glTexParameteri(GLES11Ext.GL_TEXTURE_EXTERNAL_OES, GLES20.GL_TEXTURE_MIN_FILTER, GLES20.GL_LINEAR)
                GLES20.glTexParameteri(GLES11Ext.GL_TEXTURE_EXTERNAL_OES, GLES20.GL_TEXTURE_MAG_FILTER, GLES20.GL_LINEAR)
                GLES20.glTexParameteri(GLES11Ext.GL_TEXTURE_EXTERNAL_OES, GLES20.GL_TEXTURE_WRAP_S, GLES20.GL_CLAMP_TO_EDGE)
                GLES20.glTexParameteri(GLES11Ext.GL_TEXTURE_EXTERNAL_OES, GLES20.GL_TEXTURE_WRAP_T, GLES20.GL_CLAMP_TO_EDGE)
                GLES20.glBindTexture(GLES11Ext.GL_TEXTURE_EXTERNAL_OES, 0)
            }[0]
            surfaceTexture = SurfaceTexture(externalTextureId).apply {
                setOnFrameAvailableListener {
                    synchronized(frameLock) { frameAvailable = true; frameLock.notifyAll() }
                }
            }
            outputSurface = Surface(surfaceTexture)
            codec = MediaCodec.createDecoderByType(requireNotNull(format.getString(MediaFormat.KEY_MIME)))
            codec.configure(format, outputSurface, null, 0)
            codec.start()
        }

        override fun frameAt(presentationTimeUs: Long) {
            val targetUs = presentationTimeUs % durationUs
            if (targetUs < lastFrameUs) restart()
            val limit = if (waitForFrames) 128 else 1
            repeat(limit) {
                val timestamp = decodeOne() ?: return
                if (timestamp >= targetUs) return
            }
        }

        private fun decodeOne(): Long? {
            if (!inputEnded) {
                val index = codec.dequeueInputBuffer(CODEC_TIMEOUT_US)
                if (index >= 0) {
                    val buffer = requireNotNull(codec.getInputBuffer(index))
                    val size = extractor.readSampleData(buffer, 0)
                    if (size < 0) {
                        codec.queueInputBuffer(index, 0, 0, 0, MediaCodec.BUFFER_FLAG_END_OF_STREAM)
                        inputEnded = true
                    } else {
                        codec.queueInputBuffer(index, 0, size, extractor.sampleTime, extractor.sampleFlags)
                        extractor.advance()
                    }
                }
            }
            val info = MediaCodec.BufferInfo()
            val output = codec.dequeueOutputBuffer(info, CODEC_TIMEOUT_US)
            if (output < 0) return null
            val render = info.size > 0
            codec.releaseOutputBuffer(output, render)
            if (!render) return null
            synchronized(frameLock) {
                if (!frameAvailable && waitForFrames) frameLock.wait(100)
                if (!frameAvailable) return null
                frameAvailable = false
            }
            surfaceTexture.updateTexImage()
            lastFrameUs = info.presentationTimeUs
            return lastFrameUs
        }

        private fun restart() {
            codec.flush()
            extractor.seekTo(0, MediaExtractor.SEEK_TO_PREVIOUS_SYNC)
            inputEnded = false
            lastFrameUs = -1L
        }

        override fun close() {
            runCatching { codec.stop() }; codec.release()
            outputSurface.release(); surfaceTexture.release()
            GLES20.glDeleteTextures(1, intArrayOf(externalTextureId), 0)
            extractor.release()
        }
    }
}

private fun openMapSource(
    context: Context,
    source: String,
    waitForVideoMapFrames: Boolean,
): MapSource? = runCatching {
    val uri = Uri.parse(source)
    context.contentResolver.openInputStream(uri)?.use { BitmapFactory.decodeStream(it) }
        ?.downscaled()?.let(MapSource::Image)?.also { return@runCatching it }
    MapSource.Video(context, source, waitForVideoMapFrames)
}.getOrNull()

private fun Bitmap.downscaled(): Bitmap {
    val longest = max(width, height)
    return if (longest <= 1024) this else {
        val scale = 1024f / longest
        Bitmap.createScaledBitmap(this, (width * scale).toInt(), (height * scale).toInt(), true)
            .also { if (it !== this && !isRecycled) recycle() }
    }
}

private const val CODEC_TIMEOUT_US = 10_000L

@OptIn(UnstableApi::class)
private class DisplacementMapShaderProgram(
    useHdr: Boolean,
    private val mapSource: MapSource,
    strength: Float,
    warpX: Boolean,
    warpY: Boolean,
    wrapEdges: Boolean,
) : BaseGlShaderProgram(useHdr, 1) {
    private val program = try {
        GlProgram(VERTEX_SHADER, FRAGMENT_SHADER)
    } catch (error: GlUtil.GlException) {
        throw VideoFrameProcessingException(error)
    }
    private val mapTexture = IntArray(1)
    private val controls = floatArrayOf(strength, if (warpX) 1f else 0f, if (warpY) 1f else 0f, if (wrapEdges) 1f else 0f)

    init {
        GLES20.glGenTextures(1, mapTexture, 0)
        GLES20.glBindTexture(GLES20.GL_TEXTURE_2D, mapTexture[0])
        GLES20.glTexParameteri(GLES20.GL_TEXTURE_2D, GLES20.GL_TEXTURE_MIN_FILTER, GLES20.GL_LINEAR)
        GLES20.glTexParameteri(GLES20.GL_TEXTURE_2D, GLES20.GL_TEXTURE_MAG_FILTER, GLES20.GL_LINEAR)
        GLES20.glTexParameteri(GLES20.GL_TEXTURE_2D, GLES20.GL_TEXTURE_WRAP_S, GLES20.GL_CLAMP_TO_EDGE)
        GLES20.glTexParameteri(GLES20.GL_TEXTURE_2D, GLES20.GL_TEXTURE_WRAP_T, GLES20.GL_CLAMP_TO_EDGE)
        mapSource.initialFrame()?.let { frame ->
            GLUtils.texImage2D(GLES20.GL_TEXTURE_2D, 0, frame, 0)
        }
        GLES20.glBindTexture(GLES20.GL_TEXTURE_2D, 0)
    }

    override fun configure(inputWidth: Int, inputHeight: Int): Size = Size(inputWidth, inputHeight)

    override fun drawFrame(inputTexId: Int, presentationTimeUs: Long) {
        try {
            mapSource.frameAt(presentationTimeUs)
            program.use()
            program.setSamplerTexIdUniform("uTexSampler", inputTexId, 0)
            program.setSamplerTexIdUniform("uMapSampler", mapTexture[0], 1)
            program.setSamplerTexIdUniform("uVideoMapSampler", mapSource.externalTextureId ?: 0, 2)
            program.setFloatsUniform(
                "uUseVideoMap",
                floatArrayOf(if (mapSource.externalTextureId == null) 0f else 1f),
            )
            program.setFloatsUniform("uControls", controls)
            program.setBufferAttribute("aFramePosition", VERTICES, 4)
            program.bindAttributesAndUniforms()
            GLES20.glDrawArrays(GLES20.GL_TRIANGLE_FAN, 0, 4)
            GlUtil.checkGlError()
        } catch (error: GlUtil.GlException) {
            throw VideoFrameProcessingException(error, presentationTimeUs)
        }
    }

    override fun release() {
        GLES20.glDeleteTextures(1, mapTexture, 0)
        mapSource.close()
        program.delete()
        super.release()
    }
}

private val VERTICES = floatArrayOf(-1f, -1f, 0f, 1f, -1f, 1f, 0f, 1f, 1f, 1f, 0f, 1f, 1f, -1f, 0f, 1f)
private const val VERTEX_SHADER = """
    attribute vec4 aFramePosition;
    varying vec2 vTexSamplingCoord;
    void main() {
      gl_Position = aFramePosition;
      vTexSamplingCoord = aFramePosition.xy * 0.5 + 0.5;
    }
"""
private const val FRAGMENT_SHADER = """
    #extension GL_OES_EGL_image_external : require
    precision mediump float;
    uniform sampler2D uTexSampler;
    uniform sampler2D uMapSampler;
    uniform samplerExternalOES uVideoMapSampler;
    uniform float uUseVideoMap;
    uniform vec4 uControls;
    varying vec2 vTexSamplingCoord;

    void main() {
      vec4 map = texture2D(uMapSampler, vTexSamplingCoord);
      if (uUseVideoMap > 0.5) map = texture2D(uVideoMapSampler, vTexSamplingCoord);
      // 0.5 (128 in 8-bit maps) is exactly neutral. Positive values move pixels right/down.
      vec2 offset = (map.rg - vec2(0.5)) * (2.0 * uControls.x);
      offset.x *= uControls.y;
      offset.y *= uControls.z;
      // Read from the opposite side so a positive map value moves the displayed pixel right/down.
      vec2 sourceUv = vTexSamplingCoord - offset;
      // FFmpeg displace edge=wrap samples from the opposite edge instead of smearing.
      if (uControls.w > 0.5) sourceUv = fract(sourceUv);
      else sourceUv = clamp(sourceUv, 0.0, 1.0);
      gl_FragColor = texture2D(uTexSampler, sourceUv);
    }
"""
