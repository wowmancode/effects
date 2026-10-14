package dev.lec.effectapp

import android.content.Context
import android.os.Handler
import androidx.media3.common.util.UnstableApi
import androidx.media3.exoplayer.DefaultRenderersFactory
import androidx.media3.exoplayer.Renderer
import androidx.media3.exoplayer.mediacodec.MediaCodecSelector
import androidx.media3.exoplayer.video.MediaCodecVideoRenderer
import androidx.media3.exoplayer.video.PlaybackVideoGraphWrapper
import androidx.media3.exoplayer.video.VideoFrameReleaseControl
import androidx.media3.exoplayer.video.VideoRendererEventListener

/**
 * Video renderer whose effect pipeline keeps a copy of the last decoded frame, so
 * `player.setVideoEffects(VideoFrameProcessor.REDRAW)` can re-run the effects on it instantly.
 *
 * Without this, showing an effect change while paused means seeking, which re-decodes from the
 * previous keyframe and takes a noticeable moment. With it, a paused slider drag redraws the
 * current frame straight away.
 */
@UnstableApi
private class ReplayableVideoRenderer(builder: Builder) : MediaCodecVideoRenderer(builder) {
    override fun createPlaybackVideoGraphWrapper(
        context: Context,
        videoFrameReleaseControl: VideoFrameReleaseControl,
    ): PlaybackVideoGraphWrapper =
        PlaybackVideoGraphWrapper.Builder(context, videoFrameReleaseControl)
            .setEnablePlaylistMode(true)
            .setEnableReplayableCache(true)
            .setClock(clock)
            .build()
}

/** Swaps the stock MediaCodec video renderer for [ReplayableVideoRenderer]. */
@UnstableApi
internal fun replaceWithReplayableVideoRenderer(
    context: Context,
    mediaCodecSelector: MediaCodecSelector,
    enableDecoderFallback: Boolean,
    eventHandler: Handler,
    eventListener: VideoRendererEventListener,
    allowedVideoJoiningTimeMs: Long,
    codecAdapterFactory: androidx.media3.exoplayer.mediacodec.MediaCodecAdapter.Factory,
    out: ArrayList<Renderer>,
) {
    val index = out.indexOfFirst { it is MediaCodecVideoRenderer }
    if (index < 0) return
    out[index] = ReplayableVideoRenderer(
        MediaCodecVideoRenderer.Builder(context)
            .setCodecAdapterFactory(codecAdapterFactory)
            .setMediaCodecSelector(mediaCodecSelector)
            .setAllowedJoiningTimeMs(allowedVideoJoiningTimeMs)
            .setEnableDecoderFallback(enableDecoderFallback)
            .setEventHandler(eventHandler)
            .setEventListener(eventListener)
            .setMaxDroppedFramesToNotify(DefaultRenderersFactory.MAX_DROPPED_VIDEO_FRAME_COUNT_TO_NOTIFY),
    )
}
