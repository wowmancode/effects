package dev.lec.effectapp.pipeline

import androidx.annotation.OptIn
import androidx.media3.common.MimeTypes
import androidx.media3.common.util.UnstableApi
import androidx.media3.transformer.EncoderUtil

/**
 * Video codecs an export can be written with (always in an .mp4, with AAC sound). Which ones
 * work depends on the phone's encoders, so the list offered is filtered by [available].
 */
enum class ExportCodec(val label: String, val mimeType: String) {
    H264("H.264", MimeTypes.VIDEO_H264),
    H265("H.265 (HEVC)", MimeTypes.VIDEO_H265),
    VP9("VP9", MimeTypes.VIDEO_VP9),
    AV1("AV1", MimeTypes.VIDEO_AV1),
    ;

    companion object {
        /** Codecs this device has an encoder for (H.264 always, it's required on Android). Slow-ish: call off the main thread. */
        @OptIn(UnstableApi::class)
        fun available(): List<ExportCodec> = entries.filter { codec ->
            codec == H264 || runCatching { EncoderUtil.getSupportedEncoders(codec.mimeType).isNotEmpty() }.getOrDefault(false)
        }
    }
}
