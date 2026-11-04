package dev.lec.effectapp.effects

/**
 * JNI bridge to `split_pitch_modes.c`. Methods 2 and 3 run only here: the reconstructed DSP they
 * use is far too large for a Kotlin port, so without the native library (JVM unit tests, 32-bit
 * ABIs, a failed load) they fall back to Original.
 */
internal object SplitPitchNativeBridge {
    private val available = runCatching { System.loadLibrary("split_pitch_modes") }.isSuccess
    private val supported = HashMap<Int, Boolean>()

    fun supports(algorithm: SplitPitchAlgorithm): Boolean {
        if (!available) return false
        val mode = algorithm.storedValue.toInt()
        return synchronized(supported) {
            supported.getOrPut(mode) { runCatching { nativeSupports(mode) }.getOrDefault(false) }
        }
    }

    fun create(sampleRate: Int, channels: Int, values: Map<String, Float>): Long {
        val algorithm = SplitPitchAlgorithm.from(values)
        if (algorithm == SplitPitchAlgorithm.ORIGINAL || !supports(algorithm)) return 0L
        val voices = SplitPitchEffect.decodeVoices(values)
        return nativeCreate(
            sampleRate, channels, algorithm.storedValue.toInt(),
            voices.map { it.semitones }.toFloatArray(),
            voices.map { it.level }.toFloatArray(),
            values["dry_mix"] ?: 0.2f,
            values["voice_mix"] ?: 0.8f,
        )
    }

    /** Frames by which [process] output (dry and voices alike) trails its input. */
    fun latencyFrames(handle: Long): Int = if (handle == 0L) 0 else nativeLatency(handle)

    fun process(handle: Long, input: ShortArray, output: ShortArray, frames: Int) =
        nativeProcess(handle, input, output, frames)

    fun destroy(handle: Long) {
        if (handle != 0L) nativeDestroy(handle)
    }

    private external fun nativeSupports(mode: Int): Boolean

    private external fun nativeCreate(
        sampleRate: Int, channels: Int, mode: Int,
        semitones: FloatArray, levels: FloatArray,
        dryMix: Float, voiceMix: Float,
    ): Long

    private external fun nativeLatency(handle: Long): Int

    private external fun nativeProcess(handle: Long, input: ShortArray,
                                       output: ShortArray, frames: Int)

    private external fun nativeDestroy(handle: Long)
}
