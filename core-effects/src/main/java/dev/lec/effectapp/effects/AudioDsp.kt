package dev.lec.effectapp.effects

import androidx.annotation.OptIn
import androidx.media3.common.C
import androidx.media3.common.audio.AudioProcessor
import androidx.media3.common.audio.BaseAudioProcessor
import androidx.media3.common.util.UnstableApi
import dev.lec.effectapp.model.TimelineSegment
import java.nio.ByteBuffer
import kotlin.math.PI
import kotlin.math.abs
import kotlin.math.cos
import kotlin.math.floor
import kotlin.math.exp
import kotlin.math.pow
import kotlin.math.round
import kotlin.math.sin
import kotlin.math.tanh

private val DSP_EFFECT_IDS = setOf(
    "audio_echo",
    "chorus",
    "tremolo",
    "vibrato",
    "bitcrush",
    "overdrive",
    "flanger",
    "ring_mod",
    "filter",
    "auto_pan",
    "vocoder_lab",
    "plugin_audio",
    "reverse_audio",
    "pitch_change",
    "split_pitch",
    "vocoder_square",
    "vocoder_saw",
    "vocoder_sine",
    "vocoder_triangle",
    "vocoder_custom",
)

internal fun isAudioDspEffect(effectId: String): Boolean = effectId in DSP_EFFECT_IDS

@OptIn(UnstableApi::class)
fun audioProcessorFor(segment: TimelineSegment, timeOffsetMs: Long = 0): AudioProcessor? =
    if (isAudioDspEffect(segment.effectId)) SegmentedDspProcessor(segment, timeOffsetMs) else null

internal interface AudioDspState {
    fun process(input: Int, timeMs: Long, channel: Int): Int
}

internal fun createAudioDspState(
    segment: TimelineSegment,
    sampleRate: Int,
    channels: Int,
): AudioDspState? = when (segment.effectId) {
    "audio_echo" -> DelayDspState(segment, sampleRate, channels, chorus = false)
    "chorus" -> DelayDspState(segment, sampleRate, channels, chorus = true)
    "tremolo" -> TremoloDspState(segment)
    "vibrato" -> VibratoDspState(segment, sampleRate, channels)
    "bitcrush" -> BitcrushDspState(segment, sampleRate, channels)
    "overdrive" -> OverdriveDspState(segment, sampleRate, channels)
    "flanger" -> FlangerDspState(segment, sampleRate, channels)
    "ring_mod" -> RingModDspState(segment)
    "filter" -> FilterDspState(segment, sampleRate, channels)
    "auto_pan" -> AutoPanDspState(segment, channels)
    "vocoder_lab" -> VocoderLabDspState(segment, sampleRate, channels)
    "plugin_audio" -> AudioPluginDspState(segment, sampleRate, channels)
    "reverse_audio" -> GrainReverseDspState(segment, sampleRate, channels)
    "pitch_change" -> PitchDspState.single(segment, sampleRate, channels)
    "split_pitch" -> PitchDspState.split(segment, sampleRate, channels)
    "vocoder_square", "vocoder_saw", "vocoder_sine", "vocoder_triangle", "vocoder_custom" ->
        VocoderDspState(segment, sampleRate, channels)
    else -> null
}

@OptIn(UnstableApi::class)
private class SegmentedDspProcessor(
    private val segment: TimelineSegment,
    private val timeOffsetMs: Long,
) : BaseAudioProcessor() {
    private var state: AudioDspState? = null
    private var sampleIndex = 0L

    override fun onConfigure(inputAudioFormat: AudioProcessor.AudioFormat): AudioProcessor.AudioFormat {
        if (inputAudioFormat.encoding != C.ENCODING_PCM_16BIT) {
            throw AudioProcessor.UnhandledAudioFormatException(inputAudioFormat)
        }
        val resolved = segment.copy(params = segment.paramsAt(timeOffsetMs), keyframes = emptyList())
        state = createAudioDspState(resolved, inputAudioFormat.sampleRate, inputAudioFormat.channelCount)
        sampleIndex = 0
        return inputAudioFormat
    }

    override fun onFlush() {
        sampleIndex = 0
        if (inputAudioFormat != AudioProcessor.AudioFormat.NOT_SET) {
            val resolved = segment.copy(params = segment.paramsAt(timeOffsetMs), keyframes = emptyList())
            state = createAudioDspState(resolved, inputAudioFormat.sampleRate, inputAudioFormat.channelCount)
        }
    }

    override fun queueInput(inputBuffer: ByteBuffer) {
        val output = replaceOutputBuffer(inputBuffer.remaining()).order(inputBuffer.order())
        val channels = inputAudioFormat.channelCount.coerceAtLeast(1)
        while (inputBuffer.remaining() >= 2) {
            val channel = (sampleIndex % channels).toInt()
            val timeMs = timeOffsetMs + (sampleIndex / channels) * 1_000 / inputAudioFormat.sampleRate
            val rendered = state?.process(inputBuffer.short.toInt(), timeMs, channel) ?: 0
            output.putShort(rendered.coerceToShort())
            sampleIndex++
        }
        output.flip()
    }
}

private class DelayDspState(
    private val segment: TimelineSegment,
    private val sampleRate: Int,
    private val channels: Int,
    private val chorus: Boolean,
) : AudioDspState {
    private val maxDelayMs = if (chorus) 50f else segment.params["delay_ms"] ?: 240f
    private val samples = ShortArray((sampleRate * maxDelayMs / 1_000 * channels).toInt().coerceAtLeast(1))
    private var writeIndex = 0

    override fun process(input: Int, timeMs: Long, channel: Int): Int {
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
        samples[writeIndex] = (input + delayed * feedback).toInt().coerceToShort()
        writeIndex = (writeIndex + 1) % samples.size
        return rendered.toInt()
    }
}

private class TremoloDspState(private val segment: TimelineSegment) : AudioDspState {
    override fun process(input: Int, timeMs: Long, channel: Int): Int {
        if (timeMs !in segment.startMs until segment.endMs) return input
        val rate = segment.params["rate_hz"] ?: 5f
        val depth = (segment.params["depth"] ?: 0.75f).coerceIn(0f, 1f)
        val mix = (segment.params["mix"] ?: 1f).coerceIn(0f, 1f)
        val modulation = 1f - depth * (0.5f + 0.5f * sin(2.0 * PI * rate * timeMs / 1_000.0).toFloat())
        return (input * (1f - mix + mix * modulation)).toInt()
    }
}

private class VibratoDspState(
    private val segment: TimelineSegment,
    private val sampleRate: Int,
    private val channels: Int,
) : AudioDspState {
    private val buffer = ShortArray((sampleRate * 0.05f * channels).toInt().coerceAtLeast(channels * 2))
    private var writeIndex = 0

    override fun process(input: Int, timeMs: Long, channel: Int): Int {
        val active = timeMs in segment.startMs until segment.endMs
        val rate = segment.params["rate_hz"] ?: 5f
        val depthMs = (segment.params["depth_ms"] ?: 6f).coerceIn(0f, 20f)
        val mix = if (active) (segment.params["mix"] ?: 1f).coerceIn(0f, 1f) else 0f
        val centerDelayMs = depthMs + 2f
        val delayMs = centerDelayMs + depthMs * sin(2.0 * PI * rate * timeMs / 1_000.0).toFloat()
        val delaySamples = (sampleRate * delayMs / 1_000f * channels)
            .toInt()
            .coerceIn(channels, buffer.size - 1)
        val readIndex = (writeIndex - delaySamples + buffer.size) % buffer.size
        val wet = buffer[readIndex].toInt()
        buffer[writeIndex] = input.coerceToShort()
        writeIndex = (writeIndex + 1) % buffer.size
        return (input * (1f - mix) + wet * mix).toInt()
    }
}

private class BitcrushDspState(
    private val segment: TimelineSegment,
    sampleRate: Int,
    channels: Int,
) : AudioDspState {
    private val held = IntArray(channels)
    private val frameCounters = IntArray(channels)
    private val targetRate = (segment.params["sample_rate"] ?: 8_000f).coerceIn(500f, sampleRate.toFloat())
    private val holdFrames = (sampleRate / targetRate).toInt().coerceAtLeast(1)
    private val bitDepth = (segment.params["bit_depth"] ?: 8f).toInt().coerceIn(2, 16)
    private val quantizationStep = (65_536f / (1 shl bitDepth)).coerceAtLeast(1f)
    private val mix = (segment.params["mix"] ?: 1f).coerceIn(0f, 1f)

    override fun process(input: Int, timeMs: Long, channel: Int): Int {
        if (timeMs !in segment.startMs until segment.endMs) return input
        if (frameCounters[channel] == 0) {
            held[channel] = (round(input / quantizationStep) * quantizationStep).toInt()
        }
        frameCounters[channel] = (frameCounters[channel] + 1) % holdFrames
        return (input * (1f - mix) + held[channel] * mix).toInt()
    }
}
private class AudioPluginDspState(
    private val segment: TimelineSegment,
    private val sampleRate: Int,
    private val channels: Int,
) : AudioDspState {
    private val program = compileAudioPlugin(segment.stringParams["source"] ?: DEFAULT_AUDIO_PLUGIN_SOURCE)
    private val history = FloatArray((sampleRate * 2 * channels).coerceAtLeast(channels * 2))
    private val pitchWindowFrames = (sampleRate * 0.05f).toInt().coerceIn(1024, 4096)
    private var writeIndex = 0
    private var currentTimeMs = 0L

    private val variables = mutableMapOf(
        "sample" to 0f,
        "channel" to 0f,
        "time" to 0f,
        "sample_rate" to sampleRate.toFloat(),
    ).apply {
        (1..8).forEach { index ->
            this["control$index"] = segment.params["control$index"] ?: if (index == 1) 1f else 0f
        }
    }

    private val runtime = PluginRuntime { name, arguments ->
        when (name) {
            "delay" -> readDelayMs(arguments[0])
            "pitch" -> readPitch(arguments[0])
            "sine" -> sin(oscillatorPhase(arguments[0]) * 2f * PI.toFloat())
            "square" -> if (oscillatorPhase(arguments[0]) < 0.5f) 1f else -1f
            "saw" -> oscillatorPhase(arguments[0]) * 2f - 1f
            "triangle" -> 1f - 4f * abs(oscillatorPhase(arguments[0]) - 0.5f)
            else -> null
        }
    }

    override fun process(input: Int, timeMs: Long, channel: Int): Int {
        val normalized = input / 32768f
        currentTimeMs = timeMs
        variables["sample"] = normalized
        variables["channel"] = channel.toFloat()
        variables["time"] = timeMs / 1_000f
        (1..8).forEach { index ->
            variables["control$index"] = segment.params["control$index"] ?: if (index == 1) 1f else 0f
        }
        if (timeMs in segment.startMs until segment.endMs) {
            program.evaluateInPlace(variables, runtime)
        }
        val output = variables["sample"] ?: normalized
        val safe = if (output.isFinite()) output.coerceIn(-1f, 1f) else 0f
        history[writeIndex] = safe
        writeIndex = (writeIndex + 1) % history.size
        return (safe * 32767f).toInt()
    }

    private fun oscillatorPhase(frequency: Float): Float {
        val cycles = currentTimeMs / 1_000f * frequency.coerceIn(-20_000f, 20_000f)
        return cycles - floor(cycles)
    }

    private fun readDelayMs(delayMs: Float): Float {
        val frames = sampleRate * delayMs.coerceIn(0f, 2_000f) / 1_000f
        return readHistory(frames)
    }

    private fun readPitch(semitones: Float): Float {
        val ratio = 2.0.pow(semitones.coerceIn(-24f, 24f).toDouble() / 12.0).toFloat()
        if (abs(ratio - 1f) < 0.0001f) return readHistory(1f)
        val elapsedFrames = currentTimeMs * sampleRate / 1_000f
        val firstPhase = wrapUnit(elapsedFrames * (1f - ratio) / pitchWindowFrames)
        val secondPhase = wrapUnit(firstPhase + 0.5f)
        val first = readHistory(firstPhase * (pitchWindowFrames - 2)) * hann(firstPhase)
        val second = readHistory(secondPhase * (pitchWindowFrames - 2)) * hann(secondPhase)
        return first + second
    }

    private fun readHistory(delayFrames: Float): Float {
        val delaySamples = delayFrames.coerceIn(1f, (history.size / channels - 1).toFloat()) * channels
        var read = writeIndex - delaySamples
        while (read < 0f) read += history.size
        val first = read.toInt() % history.size
        val second = (first + channels) % history.size
        val fraction = read - read.toInt()
        return history[first] * (1f - fraction) + history[second] * fraction
    }
}


private class PitchDspState(
    private val segment: TimelineSegment,
    private val sampleRate: Int,
    private val channels: Int,
    private val voices: List<SplitPitchVoice>,
    private val dryMix: Float,
    private val wetMix: Float,
) : AudioDspState {
    private val windowFrames = (sampleRate * 0.05f).toInt().coerceIn(1024, 4096)
    private val buffers = Array(channels) { FloatArray(windowFrames) }
    private val ratios = voices.map { 2.0.pow(it.semitones.toDouble() / 12.0).toFloat() }
    private val phases = FloatArray(voices.size) { 0.25f }
    private var writeIndex = 0
    private val totalVoiceLevel = voices.sumOf { it.level.toDouble() }.toFloat().coerceAtLeast(0.0001f)

    override fun process(input: Int, timeMs: Long, channel: Int): Int {
        val normalized = input / 32768f
        buffers[channel][writeIndex] = normalized
        var wet = 0f
        voices.forEachIndexed { index, voice ->
            wet += shiftedSample(channel, phases[index], ratios[index]) * voice.level / totalVoiceLevel
        }
        val active = timeMs in segment.startMs until segment.endMs
        val rendered = if (active) normalized * dryMix + wet * wetMix else normalized

        if (channel == channels - 1) {
            writeIndex = (writeIndex + 1) % windowFrames
            ratios.forEachIndexed { index, ratio ->
                phases[index] = wrapUnit(phases[index] + (1f - ratio) / windowFrames)
            }
        }
        return (rendered * 32767f).toInt()
    }

    private fun shiftedSample(channel: Int, phase: Float, ratio: Float): Float {
        if (abs(ratio - 1f) < 0.0001f) return buffers[channel][writeIndex]
        val secondPhase = wrapUnit(phase + 0.5f)
        val first = readDelayed(channel, phase * (windowFrames - 2)) * hann(phase)
        val second = readDelayed(channel, secondPhase * (windowFrames - 2)) * hann(secondPhase)
        return first + second
    }

    private fun readDelayed(channel: Int, delay: Float): Float {
        var read = writeIndex - delay
        while (read < 0f) read += windowFrames
        val first = read.toInt() % windowFrames
        val second = (first + 1) % windowFrames
        val fraction = read - read.toInt()
        return buffers[channel][first] * (1f - fraction) + buffers[channel][second] * fraction
    }

    companion object {
        fun single(segment: TimelineSegment, sampleRate: Int, channels: Int) = PitchDspState(
            segment = segment,
            sampleRate = sampleRate,
            channels = channels,
            voices = listOf(SplitPitchVoice(segment.params["semitones"] ?: 0f)),
            dryMix = 1f - (segment.params["mix"] ?: 1f),
            wetMix = segment.params["mix"] ?: 1f,
        )

        fun split(segment: TimelineSegment, sampleRate: Int, channels: Int) = PitchDspState(
            segment = segment,
            sampleRate = sampleRate,
            channels = channels,
            voices = SplitPitchEffect.decodeVoices(segment.params),
            dryMix = segment.params["dry_mix"] ?: 0.2f,
            wetMix = segment.params["voice_mix"] ?: 0.8f,
        )
    }
}

private class VocoderDspState(
    private val segment: TimelineSegment,
    private val sampleRate: Int,
    private val channels: Int,
) : AudioDspState {
    private val bandCount = 7
    private val modLow = Array(channels) { FloatArray(bandCount) }
    private val modHigh = Array(channels) { FloatArray(bandCount) }
    private val carrierLow = Array(channels) { FloatArray(bandCount) }
    private val carrierHigh = Array(channels) { FloatArray(bandCount) }
    private val envelopes = Array(channels) { FloatArray(bandCount) }
    private val lowAlpha = FloatArray(bandCount)
    private val highAlpha = FloatArray(bandCount)
    private var phase = 0f
    private var carrierFrame = 0L
    private val importedCarrier = CarrierAudioStore.get(segment.stringParams["carrier_uri"])

    init {
        repeat(bandCount) { band ->
            val center = 150f * 2.0.pow(band).toFloat()
            lowAlpha[band] = onePoleAlpha((center / 1.45f).coerceAtMost(sampleRate * 0.42f))
            highAlpha[band] = onePoleAlpha((center * 1.45f).coerceAtMost(sampleRate * 0.46f))
        }
    }

    override fun process(input: Int, timeMs: Long, channel: Int): Int {
        val normalized = input / 32768f
        val active = timeMs in segment.startMs until segment.endMs
        val carrier = if (active) carrierSample(phase) else 0f
        val response = segment.params["response"] ?: 0.45f
        val attack = 0.03f + response * 0.3f
        val release = 0.002f + response * 0.04f
        var vocoded = 0f
        repeat(bandCount) { band ->
            modLow[channel][band] += lowAlpha[band] * (normalized - modLow[channel][band])
            modHigh[channel][band] += highAlpha[band] * (normalized - modHigh[channel][band])
            val modBand = modHigh[channel][band] - modLow[channel][band]
            val target = abs(modBand)
            val coefficient = if (target > envelopes[channel][band]) attack else release
            envelopes[channel][band] += coefficient * (target - envelopes[channel][band])

            carrierLow[channel][band] += lowAlpha[band] * (carrier - carrierLow[channel][band])
            carrierHigh[channel][band] += highAlpha[band] * (carrier - carrierHigh[channel][band])
            val carrierBand = carrierHigh[channel][band] - carrierLow[channel][band]
            vocoded += carrierBand * envelopes[channel][band] * 5.5f
        }

        if (channel == channels - 1) {
            val frequency = segment.params["frequency_hz"] ?: 120f
            phase = wrapUnit(phase + frequency / sampleRate)
            if (active) carrierFrame++
        }
        val carrierReady = segment.effectId != "vocoder_custom" || importedCarrier != null
        val mix = if (active && carrierReady) segment.params["mix"] ?: 0.85f else 0f
        val rendered = normalized * (1f - mix) + tanh(vocoded.toDouble()).toFloat() * mix
        return (rendered * 32767f).toInt()
    }

    private fun carrierSample(phase: Float): Float = when (segment.effectId) {
        "vocoder_square" -> if (phase < 0.5f) 1f else -1f
        "vocoder_saw" -> phase * 2f - 1f
        "vocoder_triangle" -> 1f - 4f * abs(phase - 0.5f)
        "vocoder_custom" -> importedCarrier?.sampleAt(carrierFrame, sampleRate) ?: 0f
        else -> sin(2.0 * PI * phase).toFloat()
    }

    private fun onePoleAlpha(frequency: Float): Float =
        (1.0 - exp(-2.0 * PI * frequency / sampleRate)).toFloat()
}

private class GrainReverseDspState(
    private val segment: TimelineSegment,
    sampleRate: Int,
    private val channels: Int,
) : AudioDspState {
    private val blockFrames = (sampleRate * 0.08f).toInt().coerceAtLeast(64)
    private var current = Array(channels) { IntArray(blockFrames) }
    private var previous = Array(channels) { IntArray(blockFrames) }
    private var frame = 0
    private var primed = false

    override fun process(input: Int, timeMs: Long, channel: Int): Int {
        val active = timeMs in segment.startMs until segment.endMs
        current[channel][frame] = input
        val rendered = if (active && primed) previous[channel][blockFrames - 1 - frame] else if (active) 0 else input
        if (channel == channels - 1) {
            frame++
            if (frame == blockFrames) {
                val swap = previous
                previous = current
                current = swap
                frame = 0
                primed = true
            }
        }
        return rendered
    }
}

private fun hann(phase: Float): Float = (0.5 - 0.5 * cos(2.0 * PI * phase)).toFloat()

private fun wrapUnit(value: Float): Float {
    var wrapped = value % 1f
    if (wrapped < 0f) wrapped += 1f
    return wrapped
}

private fun Int.coerceToShort(): Short =
    coerceIn(Short.MIN_VALUE.toInt(), Short.MAX_VALUE.toInt()).toShort()
