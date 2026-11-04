package dev.lec.effectapp.pipeline

/**
 * Encoder choices for an export. A null field means "not chosen": the Very fast preset's value
 * is used when that mode is on, otherwise the encoder's own default.
 *
 * These map onto MediaFormat keys: [videoBitrate] → KEY_BIT_RATE, [bitrateMode] →
 * KEY_BITRATE_MODE, [keyframeIntervalSeconds] → KEY_I_FRAME_INTERVAL, [maxBFrames] →
 * KEY_MAX_B_FRAMES (Android 10+), [audioBitrate] → the AAC encoder's KEY_BIT_RATE.
 */
data class ExportEncoderSettings(
    /** Video bitrate in bits per second. */
    val videoBitrate: Int? = null,
    val bitrateMode: BitrateMode = BitrateMode.VBR,
    /** Seconds between keyframes. 0 makes every frame a keyframe. */
    val keyframeIntervalSeconds: Float? = null,
    /** B-frames allowed between reference frames; 0 or null leaves them off. */
    val maxBFrames: Int? = null,
    /** AAC bitrate in bits per second. */
    val audioBitrate: Int? = null,
    /** Largest output edge in pixels (the other edge keeps the shape); null keeps the source size. */
    val maxLongEdge: Int? = null,
    /** Encoder speed hint: as fast as possible, or tied to real time (cooler, slower). */
    val encoderSpeed: EncoderSpeed = EncoderSpeed.MAXIMUM,
) {
    /** MediaCodecInfo.EncoderCapabilities values (constant bitrate is not supported by every encoder). */
    enum class BitrateMode(val label: String, val mediaCodecValue: Int) {
        VBR("Variable", 1),
        CBR("Constant", 2),
    }

    enum class EncoderSpeed(val label: String) { MAXIMUM("Maximum"), REALTIME("Real time") }

    /** The settings actually requested, with the Very fast preset filling what wasn't chosen. */
    fun resolved(veryFast: Boolean): ExportEncoderSettings = if (!veryFast) this else copy(
        videoBitrate = videoBitrate ?: VERY_FAST_BITRATE,
        keyframeIntervalSeconds = keyframeIntervalSeconds ?: VERY_FAST_KEYFRAME_SECONDS,
        maxLongEdge = listOfNotNull(maxLongEdge, VERY_FAST_LONG_EDGE).min(),
    )

    /** True when nothing departs from the encoder's defaults, so no custom encoder is needed. */
    val isDefault: Boolean get() = this == ExportEncoderSettings()

    /** A problem with a value, for showing before the export starts; null when all are usable. */
    fun problem(): String? = when {
        videoBitrate != null && videoBitrate !in MIN_VIDEO_BITRATE..MAX_VIDEO_BITRATE ->
            "Video bitrate must be between 0.1 and 200 Mbps."
        keyframeIntervalSeconds != null && (keyframeIntervalSeconds.isNaN() || keyframeIntervalSeconds !in 0f..MAX_KEYFRAME_SECONDS) ->
            "Keyframe interval must be between 0 and 60 seconds."
        maxBFrames != null && maxBFrames !in 0..MAX_B_FRAMES -> "B-frames must be between 0 and $MAX_B_FRAMES."
        audioBitrate != null && audioBitrate !in MIN_AUDIO_BITRATE..MAX_AUDIO_BITRATE ->
            "Audio bitrate must be between 32 and 320 kbps."
        maxLongEdge != null && maxLongEdge < 16 -> "Resolution is too small."
        else -> null
    }

    companion object {
        const val VERY_FAST_BITRATE = 4_000_000
        const val VERY_FAST_KEYFRAME_SECONDS = 5f
        const val VERY_FAST_LONG_EDGE = 1280
        const val MIN_VIDEO_BITRATE = 100_000
        const val MAX_VIDEO_BITRATE = 200_000_000
        const val MIN_AUDIO_BITRATE = 32_000
        const val MAX_AUDIO_BITRATE = 320_000
        const val MAX_KEYFRAME_SECONDS = 60f
        const val MAX_B_FRAMES = 4
    }
}
