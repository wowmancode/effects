package dev.lec.effectapp.effects

import androidx.annotation.OptIn
import androidx.media3.common.C
import androidx.media3.common.Effect
import androidx.media3.common.audio.AudioProcessor
import androidx.media3.common.audio.BaseAudioProcessor
import androidx.media3.common.util.UnstableApi
import dev.lec.effectapp.model.TimelineSegment
import java.nio.ByteBuffer
import kotlin.math.PI
import kotlin.math.sin

class AudioEchoEffect : LecEffect {
    override val id = "audio_echo"
    override val displayName = "Echo"
    override val category = EffectCategory.AUDIO
    override val params = listOf(
        EffectParam("delay_ms", "Delay (ms)", 40f, 800f, 240f),
        EffectParam("feedback", "Feedback", 0f, 0.9f, 0.35f),
        EffectParam("mix", "Wet mix", 0f, 1f, 0.35f),
    )
    @OptIn(UnstableApi::class)
    override fun toMediaEffect(values: Map<String, Float>): Effect? = null
}

class ChorusEffect : LecEffect {
    override val id = "chorus"
    override val displayName = "Chorus"
    override val category = EffectCategory.AUDIO
    override val params = listOf(
        EffectParam("depth_ms", "Depth (ms)", 1f, 30f, 12f),
        EffectParam("rate_hz", "Rate (Hz)", 0.1f, 5f, 0.8f),
        EffectParam("mix", "Wet mix", 0f, 1f, 0.4f),
    )
    @OptIn(UnstableApi::class)
    override fun toMediaEffect(values: Map<String, Float>): Effect? = null
}

@OptIn(UnstableApi::class)
fun audioProcessorFor(segment: TimelineSegment): AudioProcessor? = when (segment.effectId) {
    "audio_echo" -> SegmentedDelayProcessor(segment, chorus = false)
    "chorus" -> SegmentedDelayProcessor(segment, chorus = true)
    else -> null
}

@OptIn(UnstableApi::class)
private class SegmentedDelayProcessor(
    private val segment: TimelineSegment,
    private val chorus: Boolean,
) : BaseAudioProcessor() {
    private var samples = ShortArray(1)
    private var writeIndex = 0
    private var frameIndex = 0L

    override fun onConfigure(inputAudioFormat: AudioProcessor.AudioFormat): AudioProcessor.AudioFormat {
        if (inputAudioFormat.encoding != C.ENCODING_PCM_16BIT) {
            throw AudioProcessor.UnhandledAudioFormatException(inputAudioFormat)
        }
        val maxDelayMs = if (chorus) 50f else (segment.params["delay_ms"] ?: 240f)
        samples = ShortArray((inputAudioFormat.sampleRate * maxDelayMs / 1_000 * inputAudioFormat.channelCount).toInt().coerceAtLeast(1))
        writeIndex = 0
        frameIndex = 0
        return inputAudioFormat
    }

    override fun queueInput(inputBuffer: ByteBuffer) {
        val output = replaceOutputBuffer(inputBuffer.remaining()).order(inputBuffer.order())
        val channels = inputAudioFormat.channelCount
        while (inputBuffer.remaining() >= 2) {
            val dry = inputBuffer.short.toInt()
            val timeMs = frameIndex * 1_000 / inputAudioFormat.sampleRate
            val active = timeMs in segment.startMs until segment.endMs
            val delayMs = if (chorus) {
                val rate = segment.params["rate_hz"] ?: 0.8f
                val depth = segment.params["depth_ms"] ?: 12f
                18f + depth * (0.5f + 0.5f * sin(2.0 * PI * rate * timeMs / 1_000.0).toFloat())
            } else segment.params["delay_ms"] ?: 240f
            val delaySamples = (inputAudioFormat.sampleRate * delayMs / 1_000 * channels).toInt().coerceIn(1, samples.size)
            val readIndex = (writeIndex - delaySamples + samples.size) % samples.size
            val delayed = samples[readIndex].toInt()
            val mix = if (active) segment.params["mix"] ?: 0.35f else 0f
            val feedback = if (chorus) 0f else segment.params["feedback"] ?: 0.35f
            val rendered = (dry * (1f - mix) + delayed * mix).toInt().coerceIn(Short.MIN_VALUE.toInt(), Short.MAX_VALUE.toInt())
            samples[writeIndex] = (dry + delayed * feedback).toInt().coerceIn(Short.MIN_VALUE.toInt(), Short.MAX_VALUE.toInt()).toShort()
            writeIndex = (writeIndex + 1) % samples.size
            output.putShort(rendered.toShort())
            if (writeIndex % channels == 0) frameIndex++
        }
        output.flip()
    }
}
