package dev.lec.effectapp.effects

import androidx.annotation.OptIn
import androidx.media3.common.C
import androidx.media3.common.audio.AudioProcessor
import androidx.media3.common.audio.BaseAudioProcessor
import androidx.media3.common.util.UnstableApi
import dev.lec.effectapp.model.TimelineSegment
import java.nio.ByteBuffer
import kotlin.math.PI
import kotlin.math.sin

/** A fixed preview processor whose immutable segment configuration can be updated from the UI. */
@OptIn(UnstableApi::class)
class PreviewAudioProcessor : BaseAudioProcessor() {
    @Volatile
    private var requestedSegments: List<TimelineSegment> = emptyList()
    private var appliedSegments: List<TimelineSegment> = emptyList()
    private var states: List<DelayState> = emptyList()
    private var sampleIndex = 0L

    fun setSegments(segments: List<TimelineSegment>) {
        requestedSegments = segments.filter {
            it.enabled && (it.effectId == "audio_echo" || it.effectId == "chorus")
        }
    }

    override fun onConfigure(inputAudioFormat: AudioProcessor.AudioFormat): AudioProcessor.AudioFormat {
        if (inputAudioFormat.encoding != C.ENCODING_PCM_16BIT) {
            throw AudioProcessor.UnhandledAudioFormatException(inputAudioFormat)
        }
        return inputAudioFormat
    }

    override fun onFlush() {
        sampleIndex = 0
        rebuildStates()
    }

    override fun onReset() {
        sampleIndex = 0
        appliedSegments = emptyList()
        states = emptyList()
    }

    override fun queueInput(inputBuffer: ByteBuffer) {
        if (requestedSegments != appliedSegments) rebuildStates()
        val output = replaceOutputBuffer(inputBuffer.remaining()).order(inputBuffer.order())
        val channels = inputAudioFormat.channelCount.coerceAtLeast(1)
        while (inputBuffer.remaining() >= 2) {
            val timeMs = (sampleIndex / channels) * 1_000 / inputAudioFormat.sampleRate
            var rendered = inputBuffer.short.toInt()
            states.forEach { state -> rendered = state.process(rendered, timeMs) }
            output.putShort(rendered.coerceIn(Short.MIN_VALUE.toInt(), Short.MAX_VALUE.toInt()).toShort())
            sampleIndex++
        }
        output.flip()
    }

    private fun rebuildStates() {
        val next = requestedSegments
        appliedSegments = next
        if (inputAudioFormat == AudioProcessor.AudioFormat.NOT_SET) {
            states = emptyList()
            return
        }
        states = next.map { DelayState(it, inputAudioFormat.sampleRate, inputAudioFormat.channelCount) }
    }
}

private class DelayState(
    private val segment: TimelineSegment,
    private val sampleRate: Int,
    private val channels: Int,
) {
    private val chorus = segment.effectId == "chorus"
    private val maxDelayMs = if (chorus) 50f else segment.params["delay_ms"] ?: 240f
    private val samples = ShortArray((sampleRate * maxDelayMs / 1_000 * channels).toInt().coerceAtLeast(1))
    private var writeIndex = 0

    fun process(input: Int, timeMs: Long): Int {
        val delayMs = if (chorus) {
            val rate = segment.params["rate_hz"] ?: 0.8f
            val depth = segment.params["depth_ms"] ?: 12f
            18f + depth * (0.5f + 0.5f * sin(2.0 * PI * rate * timeMs / 1_000.0).toFloat())
        } else {
            segment.params["delay_ms"] ?: 240f
        }
        val delaySamples = (sampleRate * delayMs / 1_000 * channels).toInt().coerceIn(1, samples.size)
        val readIndex = (writeIndex - delaySamples + samples.size) % samples.size
        val delayed = samples[readIndex].toInt()
        val active = timeMs in segment.startMs until segment.endMs
        val mix = if (active) segment.params["mix"] ?: 0.35f else 0f
        val feedback = if (chorus || !active) 0f else segment.params["feedback"] ?: 0.35f
        val rendered = input * (1f - mix) + delayed * mix
        samples[writeIndex] = (input + delayed * feedback)
            .toInt().coerceIn(Short.MIN_VALUE.toInt(), Short.MAX_VALUE.toInt()).toShort()
        writeIndex = (writeIndex + 1) % samples.size
        return rendered.toInt()
    }
}
