package dev.lec.effectapp.effects

import androidx.annotation.OptIn
import androidx.media3.common.C
import androidx.media3.common.audio.AudioProcessor
import androidx.media3.common.audio.BaseAudioProcessor
import androidx.media3.common.util.UnstableApi
import dev.lec.effectapp.model.TimelineSegment
import dev.lec.effectapp.model.NativePluginPolicy
import java.nio.ByteBuffer
import kotlin.math.PI
import kotlin.math.abs
import kotlin.math.cos
import kotlin.math.floor
import kotlin.math.max
import kotlin.math.exp
import kotlin.math.pow
import kotlin.math.round
import kotlin.math.sin
import kotlin.math.tanh

private val DSP_EFFECT_IDS = setOf(
    "volume",
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
    "pitch_change",
    "split_pitch",
    "vocoder_square",
    "vocoder_saw",
    "vocoder_sine",
    "vocoder_triangle",
    "vocoder_custom",
)

internal const val SPLIT_PITCH_WINDOW_MS = 20f

internal fun isAudioDspEffect(effectId: String): Boolean = effectId in DSP_EFFECT_IDS

@OptIn(UnstableApi::class)
fun audioProcessorFor(segment: TimelineSegment, timeOffsetMs: Long = 0): AudioProcessor? =
    if (isAudioDspEffect(segment.effectId)) SegmentedDspProcessor(segment, timeOffsetMs) else null

internal interface AudioDspState {
    fun process(input: Int, timeMs: Long, channel: Int): Int
    fun processBuffer(samples: IntArray, timeMs: Long, sampleRate: Int, channels: Int): Boolean = false
    fun close() {}
}

internal fun createAudioDspState(
    segment: TimelineSegment,
    sampleRate: Int,
    channels: Int,
): AudioDspState? = when (segment.effectId) {
    "volume" -> VolumeDspState(segment)
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
    "plugin_audio" -> if (NativePluginPolicy.isNative(segment)) NativeCAudioState(segment) else AudioPluginDspState(segment, sampleRate, channels)
    "pitch_change" -> PitchDspState.single(segment, sampleRate, channels)
    "split_pitch" -> PitchDspState.split(segment, sampleRate, channels)
    "vocoder_square", "vocoder_saw", "vocoder_sine", "vocoder_triangle", "vocoder_custom" ->
        VocoderDspState(segment, sampleRate, channels)
    else -> null
}

private class VolumeDspState(private val segment: TimelineSegment) : AudioDspState {
    override fun process(input: Int, timeMs: Long, channel: Int): Int {
        val gainDb = segment.params["gain_db"] ?: 0f
        val gain = 10.0.pow((gainDb.coerceIn(-60f, 12f) / 20f).toDouble()).toFloat()
        return (input * gain).toInt().coerceIn(Short.MIN_VALUE.toInt(), Short.MAX_VALUE.toInt())
    }
}


@OptIn(UnstableApi::class)
private class SegmentedDspProcessor(
    private val segment: TimelineSegment,
    private val timeOffsetMs: Long,
) : BaseAudioProcessor() {
    private var state: AudioDspState? = null
    private var nativePitchHandle = 0L
    private var sampleIndex = 0L

    override fun onConfigure(inputAudioFormat: AudioProcessor.AudioFormat): AudioProcessor.AudioFormat {
        if (inputAudioFormat.encoding != C.ENCODING_PCM_16BIT) {
            throw AudioProcessor.UnhandledAudioFormatException(inputAudioFormat)
        }
        configureState(inputAudioFormat.sampleRate, inputAudioFormat.channelCount)
        return inputAudioFormat
    }

    override fun onFlush() {
        sampleIndex = 0
        if (inputAudioFormat != AudioProcessor.AudioFormat.NOT_SET) {
            configureState(inputAudioFormat.sampleRate, inputAudioFormat.channelCount)
        }
    }

    override fun onReset() {
        SplitPitchNativeBridge.destroy(nativePitchHandle)
        nativePitchHandle = 0L
        state?.close()
        state = null
        sampleIndex = 0L
    }

    private fun configureState(sampleRate: Int, channels: Int) {
        SplitPitchNativeBridge.destroy(nativePitchHandle)
        state?.close()
        val resolved = segment.copy(params = segment.paramsAt(timeOffsetMs), keyframes = emptyList())
        nativePitchHandle = if (resolved.effectId == "split_pitch") {
            SplitPitchNativeBridge.create(sampleRate, channels, resolved.params)
        } else 0L
        state = if (nativePitchHandle == 0L) createAudioDspState(resolved, sampleRate, channels) else null
        sampleIndex = 0L
    }

    override fun queueInput(inputBuffer: ByteBuffer) {
        val output = replaceOutputBuffer(inputBuffer.remaining()).order(inputBuffer.order())
        val channels = inputAudioFormat.channelCount.coerceAtLeast(1)
        if (state is NativeCAudioState) {
            val samples = IntArray(inputBuffer.remaining() / 2) { inputBuffer.short.toInt() }
            val timeMs = timeOffsetMs + (sampleIndex / channels) * 1_000 / inputAudioFormat.sampleRate
            state?.processBuffer(samples, timeMs, inputAudioFormat.sampleRate, channels)
            samples.forEach { output.putShort(it.coerceToShort()) }
            sampleIndex += samples.size
            output.flip()
            return
        }
        if (nativePitchHandle != 0L) {
            val inputSamples = ShortArray(inputBuffer.remaining() / 2) { inputBuffer.short }
            val outputSamples = inputSamples.copyOf()
            SplitPitchNativeBridge.process(nativePitchHandle, inputSamples, outputSamples,
                                           inputSamples.size / channels)
            outputSamples.forEachIndexed { index, sample ->
                val timeMs = timeOffsetMs + ((sampleIndex + index) / channels) * 1_000 /
                    inputAudioFormat.sampleRate
                output.putShort(if (timeMs in segment.startMs until segment.endMs) sample
                                else inputSamples[index])
            }
            sampleIndex += inputSamples.size
            output.flip()
            return
        }
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
/**
 * Runs an audio plug-in. The program is compiled once (see compileAudio) so each sample is a
 * few array reads and float operations. `time` counts seconds from the start of the effect
 * (0 where the effect begins) and advances every sample, so oscillators like sine(440) are
 * smooth instead of stepping once a millisecond.
 */
private class AudioPluginDspState(
    private val segment: TimelineSegment,
    private val sampleRate: Int,
    private val channels: Int,
) : AudioDspState, AudioPluginHost {
    private val plugin = compileAudioPlugin(segment.stringParams["source"] ?: DEFAULT_AUDIO_PLUGIN_SOURCE).compileAudio(this)
    private val slots = plugin.slots
    private val history = FloatArray((sampleRate * 2 * channels).coerceAtLeast(channels * 2))
    private val pitchWindowFrames = (sampleRate * 0.05f).toInt().coerceIn(1024, 4096)
    private var writeIndex = 0

    /** Seconds since the effect started, for the frame being processed. */
    private var timeSeconds = 0.0
    private var started = false
    private var elapsedFrames = 0L
    private var lastChannel = -1
    private val secondsPerFrame = 1.0 / sampleRate.coerceAtLeast(1)

    init {
        slots[plugin.sampleRateSlot] = sampleRate.toFloat()
        // Controls don't change while a state lives (a change builds a new state).
        plugin.controlSlots.forEachIndexed { index, slot ->
            slots[slot] = segment.params["control${index + 1}"] ?: if (index == 0) 1f else 0f
        }
    }

    override fun process(input: Int, timeMs: Long, channel: Int): Int {
        val normalized = input / 32768f
        if (!started) {
            started = true
            timeSeconds = (timeMs - segment.startMs).coerceAtLeast(0) / 1_000.0
        } else if (channel <= lastChannel) {
            // A new frame starts with the first channel.
            timeSeconds += secondsPerFrame
            elapsedFrames++
        }
        lastChannel = channel
        val output = if (timeMs in segment.startMs until segment.endMs) {
            slots[plugin.sampleSlot] = normalized
            slots[plugin.channelSlot] = channel.toFloat()
            slots[plugin.timeSlot] = timeSeconds.toFloat()
            plugin.run()
            slots[plugin.sampleSlot]
        } else normalized
        val safe = if (output.isFinite()) output.coerceIn(-1f, 1f) else 0f
        history[writeIndex] = safe
        writeIndex = (writeIndex + 1) % history.size
        return (safe * 32767f).toInt()
    }

    override fun oscillatorPhase(frequency: Float): Float {
        val cycles = timeSeconds * frequency.coerceIn(-20_000f, 20_000f)
        return (cycles - floor(cycles)).toFloat()
    }

    override fun delay(ms: Float): Float {
        val frames = sampleRate * ms.coerceIn(0f, 2_000f) / 1_000f
        return readHistory(frames)
    }

    override fun pitch(semitones: Float): Float {
        val ratio = 2.0.pow(semitones.coerceIn(-24f, 24f).toDouble() / 12.0).toFloat()
        if (abs(ratio - 1f) < 0.0001f) return readHistory(1f)
        val cycles = elapsedFrames.toDouble() * (1.0 - ratio) / pitchWindowFrames
        val firstPhase = wrapUnit((cycles - floor(cycles)).toFloat())
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
    private val alignVoices: Boolean,
    private val preserveTransients: Boolean,
    windowMs: Float,
) : AudioDspState {
    private val windowFrames = (sampleRate * windowMs / 1_000f).toInt().coerceIn(128, 4096)
    private val buffers = Array(channels) { FloatArray(windowFrames) }
    private val channelInitialized = BooleanArray(channels)
    private val ratios = voices.map { 2.0.pow(it.semitones.toDouble() / 12.0).toFloat() }
    private val phases = FloatArray(voices.size) { if (alignVoices) 0f else 0.25f }
    private var writeIndex = 0
    private var framesWritten = 0
    private var frameEnergy = 0f
    private var smoothedEnergy = 0.01f

    override fun process(input: Int, timeMs: Long, channel: Int): Int {
        val normalized = input / 32768f
        if (!channelInitialized[channel]) {
            buffers[channel].fill(normalized)
            channelInitialized[channel] = true
        }
        buffers[channel][writeIndex] = normalized
        frameEnergy += abs(normalized)
        var wet = 0f
        voices.forEachIndexed { index, voice ->
            wet += shiftedSample(channel, phases[index], ratios[index]) * voice.level
        }
        val active = timeMs in segment.startMs until segment.endMs
        val dry = if (alignVoices) readDelayed(channel, (windowFrames - 2) * 0.5f) else normalized
        val rendered = if (active) dry * dryMix + wet * wetMix else normalized

        if (channel == channels - 1) {
            val energy = frameEnergy / channels
            if (preserveTransients && framesWritten >= windowFrames && energy > max(0.08f, smoothedEnergy * 3f)) {
                phases.fill(if (alignVoices) 0f else 0.25f)
            }
            smoothedEnergy = smoothedEnergy * 0.995f + energy * 0.005f
            frameEnergy = 0f
            writeIndex = (writeIndex + 1) % windowFrames
            framesWritten = (framesWritten + 1).coerceAtMost(windowFrames)
            ratios.forEachIndexed { index, ratio ->
                phases[index] = wrapUnit(phases[index] + (1f - ratio) / windowFrames)
            }
        }
        return (rendered * 32767f).toInt()
    }

    private fun shiftedSample(channel: Int, phase: Float, ratio: Float): Float {
        if (abs(ratio - 1f) < 0.0001f) {
            return if (alignVoices) readDelayed(channel, (windowFrames - 2) * 0.5f)
            else buffers[channel][writeIndex]
        }
        val secondPhase = wrapUnit(phase + 0.5f)
        val first = readDelayed(channel, phase * (windowFrames - 2)) * hann(phase)
        val second = readDelayed(channel, secondPhase * (windowFrames - 2)) * hann(secondPhase)
        return first + second
    }

    private fun readDelayed(channel: Int, delay: Float): Float {
        if (!alignVoices && delay + 1f > framesWritten) return buffers[channel][writeIndex]
        var read = writeIndex - delay
        while (read < 0f) read += windowFrames
        val center = floor(read).toInt() % windowFrames
        val fraction = read - floor(read)
        val previous = buffers[channel][(center - 1 + windowFrames) % windowFrames]
        val current = buffers[channel][center]
        val next = buffers[channel][(center + 1) % windowFrames]
        val following = buffers[channel][(center + 2) % windowFrames]
        if (delay < 1f) return (current * (1f - fraction) + next * fraction).coerceIn(-1f, 1f)
        val firstOrder = next - previous
        val secondOrder = 2f * previous - 5f * current + 4f * next - following
        val thirdOrder = 3f * (current - next) + following - previous
        val interpolated = current + 0.5f * fraction * (
            firstOrder + fraction * (secondOrder + fraction * thirdOrder)
        )
        return interpolated.coerceIn(-1f, 1f)
    }

    companion object {
        fun single(segment: TimelineSegment, sampleRate: Int, channels: Int) = PitchDspState(
            segment = segment,
            sampleRate = sampleRate,
            channels = channels,
            voices = listOf(SplitPitchVoice(segment.params["semitones"] ?: 0f)),
            dryMix = 1f - (segment.params["mix"] ?: 1f),
            wetMix = segment.params["mix"] ?: 1f,
            alignVoices = false,
            preserveTransients = true,
            windowMs = 80f,
        )

        fun split(segment: TimelineSegment, sampleRate: Int, channels: Int): AudioDspState {
            if (SplitPitchAlgorithm.from(segment.params) == SplitPitchAlgorithm.DRUMS_UNPITCHED &&
                sampleRate in 8_000..384_000 && channels in 1..8
            ) {
                return DrumsUnpitchedDspState(segment, sampleRate, channels)
            }
            return PitchDspState(
                segment = segment,
                sampleRate = sampleRate,
                channels = channels,
                voices = SplitPitchEffect.decodeVoices(segment.params),
                dryMix = segment.params["dry_mix"] ?: 0.2f,
                wetMix = segment.params["voice_mix"] ?: 0.8f,
                alignVoices = true,
                preserveTransients = false,
                windowMs = SPLIT_PITCH_WINDOW_MS,
            )
        }
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

private fun hann(phase: Float): Float = (0.5 - 0.5 * cos(2.0 * PI * phase)).toFloat()

private fun wrapUnit(value: Float): Float {
    var wrapped = value % 1f
    if (wrapped < 0f) wrapped += 1f
    return wrapped
}

private fun Int.coerceToShort(): Short =
    coerceIn(Short.MIN_VALUE.toInt(), Short.MAX_VALUE.toInt()).toShort()

