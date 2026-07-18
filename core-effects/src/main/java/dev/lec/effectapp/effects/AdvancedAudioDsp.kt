package dev.lec.effectapp.effects

import dev.lec.effectapp.model.TimelineSegment
import kotlin.math.PI
import kotlin.math.abs
import kotlin.math.exp
import kotlin.math.pow
import kotlin.math.sin
import kotlin.math.tanh

class OverdriveDspState(
    private val segment: TimelineSegment,
    sampleRate: Int,
    channels: Int,
) : AudioDspState {
    private val toneState = FloatArray(channels)
    private val toneAlpha = alphaFor(4_500f, sampleRate)

    override fun process(input: Int, timeMs: Long, channel: Int): Int {
        if (timeMs !in segment.startMs until segment.endMs) return input
        val dry = input / 32768f
        val drive = (segment.params["drive"] ?: 0.4f).coerceIn(0f, 1f)
        val tone = (segment.params["tone"] ?: 0.6f).coerceIn(0f, 1f)
        val mix = (segment.params["mix"] ?: 0.8f).coerceIn(0f, 1f)
        val saturated = tanh((dry * (1f + drive * 28f)).toDouble()).toFloat()
        toneState[channel] += toneAlpha * (saturated - toneState[channel])
        val wet = blend(toneState[channel], saturated, tone)
        return (blend(dry, wet, mix) * 32767f).toInt()
    }
}

class FlangerDspState(
    private val segment: TimelineSegment,
    private val sampleRate: Int,
    private val channels: Int,
) : AudioDspState {
    private val buffer = FloatArray((sampleRate * 0.05f * channels).toInt().coerceAtLeast(channels * 4))
    private var writeIndex = 0

    override fun process(input: Int, timeMs: Long, channel: Int): Int {
        val dry = input / 32768f
        currentChannel = channel
        val active = timeMs in segment.startMs until segment.endMs
        val rate = segment.params["rate_hz"] ?: 0.35f
        val depth = (segment.params["depth_ms"] ?: 4f).coerceIn(0.1f, 15f)
        val delayMs = 1f + depth * (0.5f + 0.5f * sin(2.0 * PI * rate * timeMs / 1_000.0).toFloat())
        val delay = (delayMs * sampleRate / 1_000f * channels).toInt().coerceIn(channels, buffer.size - 1)
        val delayed = buffer[(writeIndex - delay + buffer.size) % buffer.size]
        val feedback = if (active) (segment.params["feedback"] ?: 0.35f).coerceIn(-0.9f, 0.9f) else 0f
        buffer[writeIndex] = (dry + delayed * feedback).coerceIn(-1f, 1f)
        writeIndex = (writeIndex + 1) % buffer.size
        val mix = if (active) (segment.params["mix"] ?: 0.65f).coerceIn(0f, 1f) else 0f
        return (blend(dry, delayed, mix) * 32767f).toInt()
    }
}

class RingModDspState(private val segment: TimelineSegment) : AudioDspState {
    override fun process(input: Int, timeMs: Long, channel: Int): Int {
        if (timeMs !in segment.startMs until segment.endMs) return input
        val dry = input / 32768f
        val frequency = segment.params["frequency_hz"] ?: 180f
        val depth = (segment.params["depth"] ?: 0.8f).coerceIn(0f, 1f)
        val mix = (segment.params["mix"] ?: 0.8f).coerceIn(0f, 1f)
        val carrier = sin(2.0 * PI * frequency * timeMs / 1_000.0).toFloat()
        return (blend(dry, dry * blend(1f, carrier, depth), mix) * 32767f).toInt()
    }
}

class FilterDspState(
    private val segment: TimelineSegment,
    sampleRate: Int,
    channels: Int,
) : AudioDspState {
    private val low = FloatArray(channels)
    private val alpha = alphaFor((segment.params["cutoff_hz"] ?: 2_000f).coerceIn(40f, sampleRate * 0.45f), sampleRate)

    override fun process(input: Int, timeMs: Long, channel: Int): Int {
        val dry = input / 32768f
        low[channel] += alpha * (dry - low[channel])
        if (timeMs !in segment.startMs until segment.endMs) return input
        val wet = if ((segment.params["high_pass"] ?: 0f) >= 0.5f) dry - low[channel] else low[channel]
        return (blend(dry, wet, (segment.params["mix"] ?: 1f).coerceIn(0f, 1f)) * 32767f).toInt()
    }
}

class AutoPanDspState(
    private val segment: TimelineSegment,
    private val channels: Int,
) : AudioDspState {
    override fun process(input: Int, timeMs: Long, channel: Int): Int {
        if (channels < 2 || timeMs !in segment.startMs until segment.endMs) return input
        val dry = input / 32768f
        val rate = segment.params["rate_hz"] ?: 0.7f
        val depth = (segment.params["depth"] ?: 0.85f).coerceIn(0f, 1f)
        val mix = (segment.params["mix"] ?: 1f).coerceIn(0f, 1f)
        val pan = sin(2.0 * PI * rate * timeMs / 1_000.0).toFloat()
        val gain = if (channel % 2 == 0) 1f - depth * (0.5f + 0.5f * pan) else 1f - depth * (0.5f - 0.5f * pan)
        return (blend(dry, dry * gain, mix) * 32767f).toInt()
    }
}

class VocoderLabDspState(
    private val segment: TimelineSegment,
    private val sampleRate: Int,
    private val channels: Int,
) : AudioDspState {
    private val bandCount = (segment.params["bands"] ?: 10f).toInt().coerceIn(4, 24)
    private val modLow = Array(channels) { FloatArray(bandCount) }
    private val modHigh = Array(channels) { FloatArray(bandCount) }
    private val carrierLow = Array(channels) { FloatArray(bandCount) }
    private val carrierHigh = Array(channels) { FloatArray(bandCount) }
    private val envelope = Array(channels) { FloatArray(bandCount) }
    private val lowAlpha = FloatArray(bandCount)
    private val highAlpha = FloatArray(bandCount)
    private val oscillatorPhases = FloatArray(3 * MAX_UNISON)
    private val subPhases = FloatArray(MAX_UNISON)
    private val filterLow = FloatArray(channels)
    private val filterBand = FloatArray(channels)
    private var frame = 0L

    init {
        val brightness = (segment.params["brightness"] ?: 0.55f).coerceIn(0f, 1f)
        val formant = 2.0.pow((segment.params["formant_shift"] ?: 0f) / 12.0).toFloat()
        val octaves = 3f + brightness * 4f
        val width = (segment.params["formant_width"] ?: 1f).coerceIn(0.5f, 2.5f)
        repeat(bandCount) { band ->
            val progress = band.toFloat() / (bandCount - 1).coerceAtLeast(1)
            val center = (90f * 2.0.pow((progress * octaves).toDouble()).toFloat() * formant)
                .coerceIn(45f, sampleRate * 0.36f)
            lowAlpha[band] = alphaFor((center / (1.38f * width)).coerceAtLeast(25f), sampleRate)
            highAlpha[band] = alphaFor((center * 1.38f * width).coerceAtMost(sampleRate * 0.45f), sampleRate)
        }
    }

    override fun process(input: Int, timeMs: Long, channel: Int): Int {
        val dry = input / 32768f
        val active = timeMs in segment.startMs until segment.endMs
        val carrier = if (active) filterCarrier(carrier(channel, timeMs), channel, timeMs) else 0f
        val modulatorDrive = (segment.params["modulator_drive"] ?: 0f).coerceIn(0f, 1f)
        val modulatorGate = (segment.params["modulator_gate"] ?: 0f).coerceIn(0f, 1f)
        val shapedDry = tanh((dry * (1f + modulatorDrive * 12f)).toDouble()).toFloat()
        val modulator = if (modulatorGate <= 0f) shapedDry else if (abs(shapedDry) <= modulatorGate) 0f else (abs(shapedDry) - modulatorGate) / (1f - modulatorGate).coerceAtLeast(0.001f) * if (shapedDry < 0f) -1f else 1f
        val response = (segment.params["response"] ?: 0.45f).coerceIn(0f, 1f)
        val attack = 0.025f + response * 0.32f
        val release = 0.0015f + response * 0.045f
        var vocoded = 0f
        repeat(bandCount) { band ->
            modLow[channel][band] += lowAlpha[band] * (modulator - modLow[channel][band])
            modHigh[channel][band] += highAlpha[band] * (modulator - modHigh[channel][band])
            val target = abs(modHigh[channel][band] - modLow[channel][band])
            envelope[channel][band] += if (target > envelope[channel][band]) {
                attack * (target - envelope[channel][band])
            } else {
                release * (target - envelope[channel][band])
            }
            carrierLow[channel][band] += lowAlpha[band] * (carrier - carrierLow[channel][band])
            carrierHigh[channel][band] += highAlpha[band] * (carrier - carrierHigh[channel][band])
            vocoded += (carrierHigh[channel][band] - carrierLow[channel][band]) * envelope[channel][band]
        }
        if (channel == channels - 1) advance(timeMs, active)
        if (!active) return input
        val growl = (segment.params["growl"] ?: 0f).coerceIn(0f, 1f)
        val drive = (segment.params["drive"] ?: 0.2f).coerceIn(0f, 1f)
        val lfoAmp = (segment.params["lfo_amp"] ?: 0f).coerceIn(0f, 1f)
        val lfoGain = (1f + lfo(timeMs) * lfoAmp * 0.75f).coerceAtLeast(0f)
        val wet = tanh((vocoded * (5f + drive * 12f) + carrier * growl * 0.2f).toDouble()).toFloat() * lfoGain
        val dryMix = (segment.params["dry_mix"] ?: 0.1f).coerceIn(0f, 1f)
        val wetMix = (segment.params["wet_mix"] ?: 0.9f).coerceIn(0f, 1f)
        return ((dry * dryMix + wet * wetMix) * 32767f).toInt()
    }

    private fun carrier(channel: Int, timeMs: Long): Float {
        val voices = (segment.params["unison_voices"] ?: 1f).toInt().coerceIn(1, MAX_UNISON)
        val spread = (segment.params["stereo_spread"] ?: 0f).coerceIn(0f, 1f)
        val lfoPan = lfo(timeMs) * (segment.params["lfo_pan"] ?: 0f).coerceIn(0f, 1f)
        var output = 0f
        repeat(3) { oscillator ->
            val number = oscillator + 1
            val level = (segment.params["osc" + number + "_level"] ?: if (oscillator == 0) 1f else 0f).coerceIn(0f, 1f)
            val shape = (segment.params["osc" + number + "_shape"] ?: (segment.params["carrier_shape"] ?: 0.25f) * 3f).coerceIn(0f, 3f)
            repeat(voices) { voice ->
                val position = voicePosition(voice, voices)
                val side = if (channels < 2) 1f else if (channel == 0) 1f - position * spread * 0.5f + lfoPan * 0.5f else 1f + position * spread * 0.5f - lfoPan * 0.5f
                output += waveform(oscillatorPhases[oscillator * MAX_UNISON + voice], shape) * level * side / voices
            }
        }
        val sub = (segment.params["sub_level"] ?: 0f).coerceIn(0f, 1f)
        if (sub > 0f) repeat(voices) { voice -> output += sin(2.0 * PI * subPhases[voice]).toFloat() * sub / voices }
        val phase = oscillatorPhases[0]
        val organTone = (sin(2.0 * PI * phase).toFloat() + 0.55f * sin(4.0 * PI * phase).toFloat() + 0.3f * sin(6.0 * PI * phase).toFloat()) / 1.85f
        output = blend(output, organTone, (segment.params["organ"] ?: 0f).coerceIn(0f, 1f))
        val noiseLevel = ((segment.params["noise_level"] ?: 0.15f) + (segment.params["air"] ?: 0.15f) * 0.35f).coerceIn(0f, 1f)
        val noise = (((frame * 1_103_515_245L + 12_345L) ushr 16 and 0x7fffL).toFloat() / 16_383.5f - 1f)
        return output * (1f - noiseLevel * 0.35f) + noise * noiseLevel * 0.4f
    }

    private fun filterCarrier(input: Float, channel: Int, timeMs: Long): Float {
        val rate = (segment.params["motion_rate"] ?: 0f).coerceIn(0f, 30f)
        val lfo = lfo(timeMs)
        val envelopeAmount = envelope[channel].average().toFloat()
        val modulation = lfo * (segment.params["lfo_filter"] ?: 0f).coerceIn(-1f, 1f) + envelopeAmount * (segment.params["filter_env"] ?: 0f).coerceIn(-1f, 1f)
        val cutoff = ((segment.params["filter_cutoff"] ?: 8_000f) * 2.0.pow((modulation * 3f).toDouble()).toFloat()).coerceIn(40f, sampleRate * 0.45f)
        val alpha = alphaFor(cutoff, sampleRate)
        filterLow[channel] += alpha * (input - filterLow[channel])
        filterBand[channel] += alpha * (filterLow[channel] - filterBand[channel])
        val low = filterBand[channel]
        val high = input - filterLow[channel]
        val resonance = (segment.params["filter_resonance"] ?: 0f).coerceIn(0f, 1f)
        return when ((segment.params["filter_mode"] ?: 0f).toInt().coerceIn(0, 2)) {
            1 -> filterLow[channel] - low + low * resonance * 2f
            2 -> high + (filterLow[channel] - low) * resonance * 2f
            else -> low + (filterLow[channel] - low) * resonance
        }
    }

    private fun advance(timeMs: Long, active: Boolean) {
        val pitch = (segment.params["carrier_pitch"] ?: 110f).coerceIn(20f, 2_000f)
        val depth = (segment.params["motion_depth"] ?: 0f).coerceIn(0f, 1f)
        val motion = 2.0.pow((lfo(timeMs) * depth * 2f).toDouble()).toFloat()
        val voices = (segment.params["unison_voices"] ?: 1f).toInt().coerceIn(1, MAX_UNISON)
        val detune = (segment.params["unison_detune"] ?: segment.params["detune_cents"] ?: 8f).coerceIn(0f, 100f)
        repeat(3) { oscillator ->
            val number = oscillator + 1
            val octave = (segment.params["osc" + number + "_octave"] ?: 0f).coerceIn(-4f, 4f)
            val fine = (segment.params["osc" + number + "_fine"] ?: 0f).coerceIn(-100f, 100f)
            repeat(voices) { voice ->
                val cents = fine + voicePosition(voice, voices) * detune
                val frequency = pitch * motion * 2.0.pow((octave + cents / 1_200f).toDouble()).toFloat()
                val index = oscillator * MAX_UNISON + voice
                oscillatorPhases[index] = wrap(oscillatorPhases[index] + frequency / sampleRate)
            }
        }
        val subOctave = (segment.params["sub_octave"] ?: -1f).coerceIn(-4f, 0f)
        repeat(voices) { voice ->
            val frequency = pitch * motion * 2.0.pow((subOctave + voicePosition(voice, voices) * detune / 1_200f).toDouble()).toFloat()
            subPhases[voice] = wrap(subPhases[voice] + frequency / sampleRate)
        }
        if (active) frame++
    }

    private fun lfo(timeMs: Long): Float {
        val rate = (segment.params["motion_rate"] ?: 0f).coerceIn(0f, 30f)
        return waveform(wrap(timeMs * rate / 1_000f), (segment.params["lfo_shape"] ?: 0f).coerceIn(0f, 3f))
    }

    private fun waveform(phase: Float, shape: Float): Float = when {
        shape < 1f -> blend(sin(2.0 * PI * phase).toFloat(), phase * 2f - 1f, shape)
        shape < 2f -> blend(phase * 2f - 1f, if (phase < 0.5f) 1f else -1f, shape - 1f)
        else -> blend(if (phase < 0.5f) 1f else -1f, 1f - 4f * abs(phase - 0.5f), shape - 2f)
    }

    private fun voicePosition(voice: Int, voices: Int): Float = if (voices <= 1) 0f else (voice * 2f / (voices - 1)) - 1f

    private companion object {
        const val MAX_UNISON = 7
    }
}

private fun alphaFor(frequency: Float, sampleRate: Int): Float =
    (1.0 - exp(-2.0 * PI * frequency.coerceAtMost(sampleRate * 0.45f) / sampleRate)).toFloat()

private fun blend(first: Float, second: Float, amount: Float): Float =
    first + (second - first) * amount.coerceIn(0f, 1f)

private fun wrap(value: Float): Float = (value % 1f).let { if (it < 0f) it + 1f else it }
