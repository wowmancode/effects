package dev.lec.effectapp.effects

internal object SplitPitchNativeBridge {
    private val available = runCatching { System.loadLibrary("split_pitch_modes") }.isSuccess

    fun create(sampleRate: Int, channels: Int, values: Map<String, Float>): Long {
        if (!available) return 0L
        val algorithm = SplitPitchAlgorithm.from(values)
        if (algorithm == SplitPitchAlgorithm.ORIGINAL) return 0L
        val voices = SplitPitchEffect.decodeVoices(values)
        return nativeCreate(
            sampleRate, channels, algorithm.storedValue.toInt(),
            voices.map { it.semitones }.toFloatArray(),
            voices.map { it.level }.toFloatArray(),
            values["dry_mix"] ?: 0.2f,
            values["voice_mix"] ?: 0.8f,
        )
    }

    fun process(handle: Long, input: ShortArray, output: ShortArray, frames: Int) =
        nativeProcess(handle, input, output, frames)

    fun destroy(handle: Long) {
        if (handle != 0L) nativeDestroy(handle)
    }

    private external fun nativeCreate(
        sampleRate: Int, channels: Int, mode: Int,
        semitones: FloatArray, levels: FloatArray,
        dryMix: Float, voiceMix: Float,
    ): Long

    private external fun nativeProcess(handle: Long, input: ShortArray,
                                       output: ShortArray, frames: Int)

    private external fun nativeDestroy(handle: Long)
}
