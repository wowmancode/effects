package dev.lec.effectapp.pipeline

import androidx.annotation.OptIn
import androidx.media3.common.util.UnstableApi
import androidx.media3.transformer.EncoderUtil

/**
 * Video codecs an export can be written with (always in an .mp4, with AAC sound). Which ones
 * work depends on the phone's encoders, so the list offered is filtered by [available].
 */
enum class ExportCodec(val label: String, val mimeType: String) {
    // Plain MIME strings (Media3's VP9/AV1 constants are unstable API).
    H264("H264", "video/avc"),
    H265("H265", "video/hevc"),
    VP9("VP9", "video/x-vnd.on2.vp9"),
    AV1("AV1", "video/av01"),
    ;

    companion object {
        /** Codecs this device has an encoder for (H.264 always, it's required on Android). Slow-ish: call off the main thread. */
        @OptIn(UnstableApi::class)
        fun available(): List<ExportCodec> = entries.filter { codec ->
            codec == H264 || runCatching { EncoderUtil.getSupportedEncoders(codec.mimeType).isNotEmpty() }.getOrDefault(false)
        }
    }
}
