package dev.lec.effectapp.effects

import dev.lec.effectapp.model.TimelineSegment
import kotlin.math.pow

/**
 * Kotlin mirror of `expressfx_drums_stream_*` in `src/main/c/expressfx_drums.c`, used when the
 * native library is unavailable (JVM unit tests, failed load). Same preset, arithmetic and
 * summation order, so it renders the same samples as the C stream.
 *
 * Pitch = WSOLA stretch by 1 / ratio (30 ms blocks emitted half a block at a time, 3 ms fades,
 * 5 ms two-sample-step search) followed by linear resampling by ratio. Output frame n is the
 * shifted input frame n - [latency].
 */
internal class DrumsUnpitchedStream(sampleRate: Int, private val channels: Int, semitones: Double) {
    private val bypass = semitones == 0.0
    private val ratio = 2.0.pow(semitones / 12.0)
    private val speed = 1.0 / ratio
    private val hop: Int
    private val overlap: Int
    private val search: Int
    val latency: Int
    private val inputMask: Int
    private val stretchedMask: Int
    private val inputRing: FloatArray
    private val stretchedRing: FloatArray
    private var received = 0L
    private var nextBlock = 0L
    private var zeroedUntil = 0L
    private val energy = FloatArray(channels)
    private val score = FloatArray(channels)

    init {
        require(sampleRate in 8_000..384_000 && channels in 1..8 && semitones in -24.0..24.0)
        hop = sampleRate * 30 / 1_000 / 2
        var fade = sampleRate * 3 / 1_000
        var window = sampleRate * 5 / 1_000
        if (fade < 2) fade = 2
        if (window < 2) window = 2
        if (window > hop - fade) window = hop - fade
        overlap = fade
        search = window
        latency = hop + overlap + 2 * search + 8
        inputMask = nextPowerOfTwo(2 * (latency + 4 * hop + 16)) - 1
        stretchedMask = nextPowerOfTwo(4 * (2 * hop + overlap + search + 16)) - 1
        inputRing = FloatArray((inputMask + 1) * channels)
        stretchedRing = FloatArray((stretchedMask + 1) * channels)
    }

    /** Interleaved frames in, the same number of interleaved frames out. */
    fun process(input: FloatArray, output: FloatArray, frames: Int) {
        for (n in 0 until frames) {
            val slot = (received and inputMask.toLong()).toInt() * channels
            for (ch in 0 until channels) inputRing[slot + ch] = input[n * channels + ch]
            received++
            val out = n * channels
            if (received <= latency) {
                for (ch in 0 until channels) output[out + ch] = 0f
                continue
            }
            val frame = received - 1 - latency
            if (bypass) {
                for (ch in 0 until channels) output[out + ch] = inputAt(frame, ch)
                continue
            }
            val position = frame.toDouble() * ratio
            val first = position.toLong()
            val fraction = (position - first).toFloat()
            while (nextBlock * hop <= first + 1) emitBlock()
            val a = stretchedIndex(first)
            val b = stretchedIndex(first + 1)
            for (ch in 0 until channels) {
                output[out + ch] = stretchedRing[a + ch] + fraction * (stretchedRing[b + ch] - stretchedRing[a + ch])
            }
        }
    }

    private fun inputAt(frame: Long, channel: Int): Float =
        if (frame >= received) 0f else inputRing[(frame and inputMask.toLong()).toInt() * channels + channel]

    private fun stretchedIndex(frame: Long): Int = (frame and stretchedMask.toLong()).toInt() * channels

    private fun emitBlock() {
        val blockIndex = nextBlock++
        val outputPos = blockIndex * hop
        val nominalInput = Math.round(blockIndex.toDouble() * hop * speed)
        val span = hop + overlap
        val zeroEnd = outputPos + maxOf(span, search)
        while (zeroedUntil < zeroEnd) {
            stretchedRing.fill(0f, stretchedIndex(zeroedUntil), stretchedIndex(zeroedUntil) + channels)
            zeroedUntil++
        }
        val offset = if (blockIndex == 0L) 0 else matchingOffset(nominalInput, outputPos)
        for (i in 0 until span) {
            var weight = 1f
            if (i < overlap) weight = i.toFloat() / overlap.toFloat()
            else if (i >= hop) weight = (span - i).toFloat() / overlap.toFloat()
            if (blockIndex == 0L && i < overlap) weight = 1f
            val out = stretchedIndex(outputPos + i)
            for (ch in 0 until channels) {
                stretchedRing[out + ch] += inputAt(nominalInput + offset + i, ch) * weight
            }
        }
    }

    private fun matchingOffset(candidate: Long, outputPos: Long): Int {
        energy.fill(0f)
        var best = -1f
        var bestOffset = 0
        for (i in 0 until search step 2) {
            val x = stretchedIndex(outputPos + i)
            for (ch in 0 until channels) energy[ch] += stretchedRing[x + ch] * stretchedRing[x + ch]
        }
        for (offset in 0 until search step 2) {
            score.fill(0f)
            for (i in 0 until search step 2) {
                val a = stretchedIndex(outputPos + minOf(i, overlap - 1))
                for (ch in 0 until channels) {
                    val sum = stretchedRing[a + ch] + inputAt(candidate + offset + i, ch)
                    score[ch] += sum * sum
                }
            }
            if ((0 until channels).all { score[it] > 10f * energy[it] }) return offset
            var total = score[0]
            for (ch in 1 until channels) total += score[ch]
            if (total > best) {
                best = total
                bestOffset = offset
            }
        }
        return bestOffset
    }

    private fun nextPowerOfTwo(x: Int): Int {
        var p = 1
        while (p < x) p = p shl 1
        return p
    }
}

/**
 * Split pitch "Drums unpitched" for the per-sample [AudioDspState] interface. Samples arrive one
 * channel at a time, so each frame is rendered once its last channel arrives and returned while
 * the next frame comes in: one extra frame of delay on top of the stream latency, applied to the
 * dry signal too so it stays aligned with the voices.
 */
internal class DrumsUnpitchedDspState(
    private val segment: TimelineSegment,
    sampleRate: Int,
    private val channels: Int,
) : AudioDspState {
    private val voices = SplitPitchEffect.decodeVoices(segment.params)
    private val dryMix = (segment.params["dry_mix"] ?: 0.2f).coerceIn(0f, 1f)
    private val voiceMix = (segment.params["voice_mix"] ?: 0.8f).coerceIn(0f, 1f)
    private val dry = DrumsUnpitchedStream(sampleRate, channels, 0.0)
    private val streams = voices.map {
        DrumsUnpitchedStream(sampleRate, channels, it.semitones.coerceIn(-24f, 24f).toDouble())
    }
    private val frameIn = FloatArray(channels)
    private val shifted = FloatArray(channels)
    private val rendered = FloatArray(channels)

    override fun process(input: Int, timeMs: Long, channel: Int): Int {
        val previous = rendered[channel]
        frameIn[channel] = input / 32768f
        if (channel == channels - 1) {
            dry.process(frameIn, shifted, 1)
            for (ch in 0 until channels) rendered[ch] = shifted[ch] * dryMix
            streams.forEachIndexed { index, stream ->
                stream.process(frameIn, shifted, 1)
                val gain = voices[index].level * voiceMix
                for (ch in 0 until channels) rendered[ch] += shifted[ch] * gain
            }
        }
        val active = timeMs in segment.startMs until segment.endMs
        return if (active) (previous * 32767f).toInt() else input
    }
}
