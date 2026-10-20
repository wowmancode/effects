package dev.lec.effectapp.effects

import dev.lec.effectapp.model.TimelineSegment
import kotlin.math.ceil

/** One IPC request per audio buffer, rather than one request per sample. */
internal class NativeCAudioState(private var segment: TimelineSegment) : AudioDspState {
    private val source = segment.stringParams["source"].orEmpty()
    private var session: NativeCClient.Session? = null
    private var controls = nativeControls(segment.params)

    fun update(value: TimelineSegment): Boolean {
        if (!dev.lec.effectapp.model.NativePluginPolicy.isNative(value) || segment.id != value.id || source != value.stringParams["source"].orEmpty()) return false
        segment = value
        controls = nativeControls(value.params)
        return true
    }

    override fun process(input: Int, timeMs: Long, channel: Int): Int = input

    override fun processBuffer(samples: IntArray, timeMs: Long, sampleRate: Int, channels: Int): Boolean {
        if (!NativeCClient.canRun(source, audio = true)) { close(); return true }
        val frames = samples.size / channels
        val first = ceil((segment.startMs - timeMs) * sampleRate / 1_000.0).toInt().coerceIn(0, frames)
        val end = ceil((segment.endMs - timeMs) * sampleRate / 1_000.0).toInt().coerceIn(first, frames)
        if (first == end) return true
        if (session?.isAlive != true) { session?.close(); session = NativeCClient.open(source, audio = true, capacity = 256 * 1024) }
        val worker = requireNotNull(session)
        val maxFrames = worker.buffer.capacity() / (channels * 4)
        var frame = first
        while (frame < end) {
            val count = minOf(maxFrames, end - frame)
            worker.buffer.clear()
            for (sample in frame * channels until (frame + count) * channels) worker.buffer.putFloat(samples[sample] / 32768f)
            val seconds = ((timeMs - segment.startMs) / 1_000.0 + frame.toDouble() / sampleRate).coerceAtLeast(0.0)
            worker.process(count, channels, sampleRate, seconds, controls)
            for (sample in frame * channels until (frame + count) * channels) {
                val value = worker.buffer.float
                samples[sample] = if (value.isFinite()) (value.coerceIn(-1f, 1f) * 32768f).toInt().coerceIn(-32768, 32767) else 0
            }
            frame += count
        }
        return true
    }

    override fun close() { session?.close(); session = null }
}

internal fun nativeControls(params: Map<String, Float>): FloatArray = FloatArray(8) { index ->
    params["control${index + 1}"]?.takeIf { it.isFinite() } ?: if (index == 0) 1f else 0f
}
