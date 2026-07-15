package dev.lec.effectapp.effects

import androidx.annotation.OptIn
import androidx.media3.common.C
import androidx.media3.common.audio.AudioProcessor
import androidx.media3.common.audio.BaseAudioProcessor
import androidx.media3.common.util.UnstableApi
import dev.lec.effectapp.model.TimelineSegment
import java.nio.ByteBuffer

/** A fixed preview processor whose immutable segment configuration can be updated from the UI. */
@OptIn(UnstableApi::class)
class PreviewAudioProcessor : BaseAudioProcessor() {
    @Volatile
    private var requestedSegments: List<TimelineSegment> = emptyList()
    private var appliedSegments: List<TimelineSegment> = emptyList()
    @Volatile
    private var requestedRevision = 0
    private var appliedRevision = -1
    private var states: List<AudioDspState> = emptyList()
    private var appliedParamSets: List<Map<String, Float>> = emptyList()
    private var sampleIndex = 0L

    fun setSegments(segments: List<TimelineSegment>) {
        requestedSegments = segments.filter { it.enabled && isAudioDspEffect(it.effectId) }
        requestedRevision++
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
        appliedRevision = -1
        states = emptyList()
        appliedParamSets = emptyList()
    }

    override fun queueInput(inputBuffer: ByteBuffer) {
        val channels = inputAudioFormat.channelCount.coerceAtLeast(1)
        val currentTimeMs = (sampleIndex / channels) * 1_000 / inputAudioFormat.sampleRate
        val currentParamSets = requestedSegments.map { it.paramsAt(currentTimeMs) }
        if (requestedRevision != appliedRevision || currentParamSets != appliedParamSets) {
            rebuildStates(currentTimeMs)
        }
        val output = replaceOutputBuffer(inputBuffer.remaining()).order(inputBuffer.order())
        while (inputBuffer.remaining() >= 2) {
            val channel = (sampleIndex % channels).toInt()
            val timeMs = (sampleIndex / channels) * 1_000 / inputAudioFormat.sampleRate
            var rendered = inputBuffer.short.toInt()
            states.forEach { state -> rendered = state.process(rendered, timeMs, channel) }
            output.putShort(rendered.coerceIn(Short.MIN_VALUE.toInt(), Short.MAX_VALUE.toInt()).toShort())
            sampleIndex++
        }
        output.flip()
    }

    private fun rebuildStates(timeMs: Long = 0) {
        val next = requestedSegments
        appliedSegments = next
        appliedRevision = requestedRevision
        if (inputAudioFormat == AudioProcessor.AudioFormat.NOT_SET) {
            states = emptyList()
            appliedParamSets = emptyList()
            return
        }
        appliedParamSets = next.map { it.paramsAt(timeMs) }
        states = next.mapIndexedNotNull { index, segment ->
            val resolved = segment.copy(params = appliedParamSets[index], keyframes = emptyList())
            createAudioDspState(resolved, inputAudioFormat.sampleRate, inputAudioFormat.channelCount)
        }
    }
}
