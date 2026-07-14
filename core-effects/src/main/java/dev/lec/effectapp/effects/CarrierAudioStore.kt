package dev.lec.effectapp.effects

import android.content.Context
import android.media.AudioFormat
import android.media.MediaCodec
import android.media.MediaExtractor
import android.media.MediaFormat
import android.net.Uri
import java.nio.ByteBuffer
import java.nio.ByteOrder
import java.util.concurrent.ConcurrentHashMap
import kotlin.math.floor

/** Decoded mono audio shared by preview and export vocoders. */
class CarrierPcm internal constructor(private val samples: FloatArray, val sampleRate: Int) {
    val durationMs: Long get() = samples.size.toLong() * 1_000L / sampleRate.coerceAtLeast(1)

    fun sampleAt(outputFrame: Long, outputSampleRate: Int): Float {
        if (samples.isEmpty()) return 0f
        val sourcePosition = outputFrame.toDouble() * sampleRate / outputSampleRate.coerceAtLeast(1)
        val wrapped = sourcePosition % samples.size
        val first = floor(wrapped).toInt()
        val second = (first + 1) % samples.size
        val fraction = (wrapped - first).toFloat()
        return samples[first] * (1f - fraction) + samples[second] * fraction
    }
}

object CarrierAudioStore {
    private const val MAX_MINUTES = 8
    private val cache = ConcurrentHashMap<String, CarrierPcm>()

    fun get(uri: String?): CarrierPcm? = uri?.let(cache::get)

    fun load(context: Context, uri: String): Result<CarrierPcm> = runCatching {
        cache[uri] ?: decode(context.applicationContext, uri).also { cache[uri] = it }
    }

    private fun decode(context: Context, uri: String): CarrierPcm {
        val extractor = MediaExtractor()
        var codecForCleanup: MediaCodec? = null
        try {
            extractor.setDataSource(context, Uri.parse(uri), null)
            val trackIndex = (0 until extractor.trackCount).firstOrNull { index ->
                extractor.getTrackFormat(index).getString(MediaFormat.KEY_MIME)?.startsWith("audio/") == true
            } ?: error("The selected file has no audio track")
            val inputFormat = extractor.getTrackFormat(trackIndex)
            val mime = requireNotNull(inputFormat.getString(MediaFormat.KEY_MIME))
            extractor.selectTrack(trackIndex)
            val decoder = MediaCodec.createDecoderByType(mime).apply {
                configure(inputFormat, null, null, 0)
                start()
            }
            codecForCleanup = decoder

            var sampleRate = inputFormat.intOr(MediaFormat.KEY_SAMPLE_RATE, 44_100)
            var channels = inputFormat.intOr(MediaFormat.KEY_CHANNEL_COUNT, 1).coerceAtLeast(1)
            var encoding = AudioFormat.ENCODING_PCM_16BIT
            var inputEnded = false
            var outputEnded = false
            val info = MediaCodec.BufferInfo()
            val samples = FloatArrayBuilder()

            while (!outputEnded && samples.size < sampleRate * 60 * MAX_MINUTES) {
                if (!inputEnded) {
                    val inputIndex = decoder.dequeueInputBuffer(10_000)
                    if (inputIndex >= 0) {
                        val buffer = requireNotNull(decoder.getInputBuffer(inputIndex))
                        val size = extractor.readSampleData(buffer, 0)
                        if (size < 0) {
                            decoder.queueInputBuffer(inputIndex, 0, 0, 0, MediaCodec.BUFFER_FLAG_END_OF_STREAM)
                            inputEnded = true
                        } else {
                            decoder.queueInputBuffer(inputIndex, 0, size, extractor.sampleTime, 0)
                            extractor.advance()
                        }
                    }
                }

                when (val outputIndex = decoder.dequeueOutputBuffer(info, 10_000)) {
                    MediaCodec.INFO_OUTPUT_FORMAT_CHANGED -> {
                        val outputFormat = decoder.outputFormat
                        sampleRate = outputFormat.intOr(MediaFormat.KEY_SAMPLE_RATE, sampleRate)
                        channels = outputFormat.intOr(MediaFormat.KEY_CHANNEL_COUNT, channels).coerceAtLeast(1)
                        encoding = outputFormat.intOr(MediaFormat.KEY_PCM_ENCODING, AudioFormat.ENCODING_PCM_16BIT)
                    }
                    MediaCodec.INFO_TRY_AGAIN_LATER -> Unit
                    else -> if (outputIndex >= 0) {
                        decoder.getOutputBuffer(outputIndex)?.let { buffer ->
                            buffer.position(info.offset)
                            buffer.limit(info.offset + info.size)
                            appendMono(buffer.slice().order(ByteOrder.nativeOrder()), encoding, channels, samples)
                        }
                        outputEnded = info.flags and MediaCodec.BUFFER_FLAG_END_OF_STREAM != 0
                        decoder.releaseOutputBuffer(outputIndex, false)
                    }
                }
            }
            require(samples.size > 0) { "The selected audio could not be decoded" }
            return CarrierPcm(samples.toArray(), sampleRate)
        } finally {
            runCatching { codecForCleanup?.stop() }
            codecForCleanup?.release()
            extractor.release()
        }
    }

    private fun appendMono(buffer: ByteBuffer, encoding: Int, channels: Int, output: FloatArrayBuilder) {
        val bytesPerSample = if (encoding == AudioFormat.ENCODING_PCM_FLOAT) 4 else 2
        while (buffer.remaining() >= bytesPerSample * channels) {
            var sum = 0f
            repeat(channels) {
                sum += if (encoding == AudioFormat.ENCODING_PCM_FLOAT) {
                    buffer.float.coerceIn(-1f, 1f)
                } else {
                    buffer.short / 32768f
                }
            }
            output.add(sum / channels)
        }
    }

    private fun MediaFormat.intOr(key: String, fallback: Int): Int =
        if (containsKey(key)) getInteger(key) else fallback
}

private class FloatArrayBuilder(initialCapacity: Int = 65_536) {
    private var values = FloatArray(initialCapacity)
    var size: Int = 0
        private set

    fun add(value: Float) {
        if (size == values.size) values = values.copyOf(values.size * 2)
        values[size++] = value
    }

    fun toArray(): FloatArray = values.copyOf(size)
}
