package dev.lec.effectapp.effects

import android.content.Context
import android.graphics.Bitmap
import android.graphics.BitmapFactory
import android.media.MediaMetadataRetriever
import android.net.Uri
import android.os.Build
import android.opengl.GLES20
import android.opengl.GLUtils
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
import java.util.concurrent.Executors
import java.util.concurrent.TimeUnit
import java.util.concurrent.atomic.AtomicBoolean
import java.util.concurrent.atomic.AtomicReference
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
    )

    override fun toMediaEffect(values: Map<String, Float>): Effect? = null
}

@OptIn(UnstableApi::class)
fun displacementMapMediaEffect(uri: String?, values: Map<String, Float>): Effect? {
    val source = uri?.takeIf(String::isNotBlank) ?: return null
    return DisplacementMapGlEffect(
        uri = source,
        strength = (values["strength"] ?: 0.06f).coerceIn(0f, 0.25f),
        warpX = (values["warp_x"] ?: 1f) >= 0.5f,
        warpY = (values["warp_y"] ?: 1f) >= 0.5f,
    )
}

@OptIn(UnstableApi::class)
private data class DisplacementMapGlEffect(
    val uri: String,
    val strength: Float,
    val warpX: Boolean,
    val warpY: Boolean,
) : GlEffect {
    override fun toGlShaderProgram(context: Context, useHdr: Boolean): GlShaderProgram {
        val mapSource = openMapSource(context, uri)
            ?: throw VideoFrameProcessingException(IllegalArgumentException("Could not read displacement map"))
        return DisplacementMapShaderProgram(useHdr, mapSource, strength, warpX, warpY)
    }
}

/** A still image or a looping video map selected at the input frame presentation timestamp. */
private sealed interface MapSource : AutoCloseable {
    fun initialFrame(): Bitmap
    fun frameAt(presentationTimeUs: Long): Bitmap?

    class Image(private val bitmap: Bitmap) : MapSource {
        override fun initialFrame(): Bitmap = bitmap
        override fun frameAt(presentationTimeUs: Long): Bitmap? = null
        override fun close() { if (!bitmap.isRecycled) bitmap.recycle() }
    }

    class Video(
        private val retriever: MediaMetadataRetriever,
        private val durationUs: Long,
        private var cachedFrame: Bitmap,
    ) : MapSource {
        private val decoder = Executors.newSingleThreadExecutor()
        private val frameRequestInFlight = AtomicBoolean()
        private val pendingFrame = AtomicReference<Bitmap?>()

        @Volatile
        private var closed = false

        override fun initialFrame(): Bitmap = cachedFrame

        override fun frameAt(presentationTimeUs: Long): Bitmap? {
            requestFrame(presentationTimeUs % durationUs)
            val frame = pendingFrame.getAndSet(null) ?: return null
            val previous = cachedFrame
            cachedFrame = frame
            if (!previous.isRecycled) previous.recycle()
            return frame
        }

        private fun requestFrame(mapTimeUs: Long) {
            if (!frameRequestInFlight.compareAndSet(false, true) || closed) return
            decoder.execute {
                val option = if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.O) {
                    MediaMetadataRetriever.OPTION_CLOSEST
                } else {
                    MediaMetadataRetriever.OPTION_CLOSEST_SYNC
                }
                val frame = runCatching {
                    retriever.getFrameAtTime(mapTimeUs, option)?.downscaled()
                }.getOrNull()
                if (frame != null) {
                    if (closed) {
                        if (!frame.isRecycled) frame.recycle()
                    } else {
                        pendingFrame.getAndSet(frame)?.let { pending ->
                            if (!pending.isRecycled) pending.recycle()
                        }
                    }
                }
                frameRequestInFlight.set(false)
            }
        }

        override fun close() {
            closed = true
            decoder.shutdownNow()
            runCatching { decoder.awaitTermination(1, TimeUnit.SECONDS) }
            pendingFrame.getAndSet(null)?.let { frame -> if (!frame.isRecycled) frame.recycle() }
            if (!cachedFrame.isRecycled) cachedFrame.recycle()
            retriever.release()
        }
    }
}

private fun openMapSource(context: Context, source: String): MapSource? = runCatching {
    val uri = Uri.parse(source)
    context.contentResolver.openInputStream(uri)?.use { BitmapFactory.decodeStream(it) }
        ?.downscaled()
        ?.let(MapSource::Image)
        ?.also { return@runCatching it }
    val retriever = MediaMetadataRetriever()
    try {
        retriever.setDataSource(context, uri)
        val bitmap = requireNotNull(
            retriever.getFrameAtTime(0, MediaMetadataRetriever.OPTION_CLOSEST_SYNC),
        ).downscaled()
        val durationUs = retriever.extractMetadata(MediaMetadataRetriever.METADATA_KEY_DURATION)
            ?.toLongOrNull()?.times(1_000L)?.coerceAtLeast(1L) ?: 1L
        MapSource.Video(retriever, durationUs, bitmap)
    } catch (error: Throwable) {
        retriever.release()
        throw error
    }
}.getOrNull()

private fun Bitmap.downscaled(): Bitmap {
    val longest = max(width, height)
    return if (longest <= 1024) this else {
        val scale = 1024f / longest
        Bitmap.createScaledBitmap(this, (width * scale).toInt(), (height * scale).toInt(), true)
            .also { if (it !== this && !isRecycled) recycle() }
    }
}

@OptIn(UnstableApi::class)
private class DisplacementMapShaderProgram(
    useHdr: Boolean,
    private val mapSource: MapSource,
    strength: Float,
    warpX: Boolean,
    warpY: Boolean,
) : BaseGlShaderProgram(useHdr, 1) {
    private val program = try {
        GlProgram(VERTEX_SHADER, FRAGMENT_SHADER)
    } catch (error: GlUtil.GlException) {
        throw VideoFrameProcessingException(error)
    }
    private val mapTexture = IntArray(1)
    private val controls = floatArrayOf(strength, if (warpX) 1f else 0f, if (warpY) 1f else 0f, 0f)

    init {
        GLES20.glGenTextures(1, mapTexture, 0)
        GLES20.glBindTexture(GLES20.GL_TEXTURE_2D, mapTexture[0])
        GLES20.glTexParameteri(GLES20.GL_TEXTURE_2D, GLES20.GL_TEXTURE_MIN_FILTER, GLES20.GL_LINEAR)
        GLES20.glTexParameteri(GLES20.GL_TEXTURE_2D, GLES20.GL_TEXTURE_MAG_FILTER, GLES20.GL_LINEAR)
        GLES20.glTexParameteri(GLES20.GL_TEXTURE_2D, GLES20.GL_TEXTURE_WRAP_S, GLES20.GL_CLAMP_TO_EDGE)
        GLES20.glTexParameteri(GLES20.GL_TEXTURE_2D, GLES20.GL_TEXTURE_WRAP_T, GLES20.GL_CLAMP_TO_EDGE)
        GLUtils.texImage2D(GLES20.GL_TEXTURE_2D, 0, mapSource.initialFrame(), 0)
        GLES20.glBindTexture(GLES20.GL_TEXTURE_2D, 0)
    }

    override fun configure(inputWidth: Int, inputHeight: Int): Size = Size(inputWidth, inputHeight)

    override fun drawFrame(inputTexId: Int, presentationTimeUs: Long) {
        try {
            mapSource.frameAt(presentationTimeUs)?.let { frame ->
                GLES20.glBindTexture(GLES20.GL_TEXTURE_2D, mapTexture[0])
                GLUtils.texImage2D(GLES20.GL_TEXTURE_2D, 0, frame, 0)
                GLES20.glBindTexture(GLES20.GL_TEXTURE_2D, 0)
            }
            program.use()
            program.setSamplerTexIdUniform("uTexSampler", inputTexId, 0)
            program.setSamplerTexIdUniform("uMapSampler", mapTexture[0], 1)
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
    precision mediump float;
    uniform sampler2D uTexSampler;
    uniform sampler2D uMapSampler;
    uniform vec4 uControls;
    varying vec2 vTexSamplingCoord;

    void main() {
      vec4 map = texture2D(uMapSampler, vTexSamplingCoord);
      // 0.5 (128 in 8-bit maps) is exactly neutral. Positive values move pixels right/down.
      vec2 offset = (map.rg - vec2(0.5)) * (2.0 * uControls.x);
      offset.x *= uControls.y;
      offset.y *= uControls.z;
      // Read from the opposite side so a positive map value moves the displayed pixel right/down.
      vec2 sourceUv = clamp(vTexSamplingCoord - offset, 0.0, 1.0);
      gl_FragColor = texture2D(uTexSampler, sourceUv);
    }
"""
