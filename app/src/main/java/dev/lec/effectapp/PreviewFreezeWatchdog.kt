package dev.lec.effectapp

import android.os.SystemClock
import androidx.media3.common.C
import androidx.media3.common.Player
import androidx.media3.common.util.UnstableApi
import androidx.media3.exoplayer.ExoPlayer
import androidx.media3.exoplayer.video.VideoFrameMetadataListener
import kotlinx.coroutines.delay
import java.util.concurrent.atomic.AtomicLong

/**
 * Detects a silently wedged preview pipeline and asks for the same recovery the Reset button does.
 *
 * Media3 re-registers the effect stream whenever video effects change on a live player. If that
 * happens while frames are still in flight, the GL chain can stop producing frames without ever
 * reporting a player error: audio and the position keep running, but the picture is frozen. The
 * only signal is that no frames reach the surface anymore, so this watches rendered frames
 * directly and flags a freeze when the player should be showing new frames but isn't.
 */
@UnstableApi
internal class PreviewFreezeWatchdog(private val player: ExoPlayer) {
    // Written on the playback thread, read on the main thread.
    private val framesRendered = AtomicLong(0)
    private val lastFrameAtMs = AtomicLong(SystemClock.elapsedRealtime())

    // Main thread only.
    private var expectFrameSinceMs = -1L
    private var framesAtExpect = 0L
    private var bufferingSinceMs = -1L
    private var playingSinceMs = -1L

    private val frameListener = VideoFrameMetadataListener { _, _, _, _ ->
        framesRendered.incrementAndGet()
        lastFrameAtMs.set(SystemClock.elapsedRealtime())
    }

    private val playerListener = object : Player.Listener {
        override fun onIsPlayingChanged(isPlaying: Boolean) {
            playingSinceMs = if (isPlaying) SystemClock.elapsedRealtime() else -1L
        }

        override fun onPositionDiscontinuity(
            oldPosition: Player.PositionInfo,
            newPosition: Player.PositionInfo,
            reason: Int,
        ) {
            // A seek (or clip change) must produce a fresh frame even when paused.
            if (reason == Player.DISCONTINUITY_REASON_SEEK || reason == Player.DISCONTINUITY_REASON_AUTO_TRANSITION) {
                expectFrame()
            }
        }
    }

    val frameCount: Long get() = framesRendered.get()

    fun attach() {
        player.setVideoFrameMetadataListener(frameListener)
        player.addListener(playerListener)
        if (player.isPlaying) playingSinceMs = SystemClock.elapsedRealtime()
    }

    fun detach() {
        player.removeListener(playerListener)
        player.clearVideoFrameMetadataListener(frameListener)
    }

    /** Call after anything that should put a new frame on screen (seek, effect change, prepare). */
    fun expectFrame() {
        if (expectFrameSinceMs < 0) {
            expectFrameSinceMs = SystemClock.elapsedRealtime()
            framesAtExpect = framesRendered.get()
        }
    }

    /**
     * Suspends until the pipeline has rendered a frame after [sinceFrameCount], or [timeoutMs]
     * passes. Used to stop effect reconfigurations from stacking up faster than the GL chain can
     * drain them, which is what wedges it in the first place.
     */
    suspend fun awaitFrameAfter(sinceFrameCount: Long, timeoutMs: Long) {
        val deadline = SystemClock.elapsedRealtime() + timeoutMs
        while (framesRendered.get() <= sinceFrameCount && SystemClock.elapsedRealtime() < deadline) {
            if (player.playbackState != Player.STATE_READY && player.playbackState != Player.STATE_BUFFERING) return
            delay(16)
        }
    }

    /** Returns true when the preview looks frozen. Poll from the main thread. */
    fun isFrozen(): Boolean {
        val now = SystemClock.elapsedRealtime()
        val state = player.playbackState
        if (player.mediaItemCount == 0 || state == Player.STATE_IDLE || state == Player.STATE_ENDED) {
            reset()
            return false
        }
        if (!player.currentTracks.isTypeSelected(C.TRACK_TYPE_VIDEO)) {
            // Audio-only media never renders frames; nothing to watch.
            reset()
            return false
        }

        // A pending frame arrived: the pipeline is alive.
        if (expectFrameSinceMs >= 0 && framesRendered.get() > framesAtExpect) expectFrameSinceMs = -1L

        // 1. Playing, but no frame has reached the surface for a while (frozen picture).
        if (player.isPlaying && playingSinceMs >= 0) {
            val quietSince = maxOf(lastFrameAtMs.get(), playingSinceMs)
            if (now - quietSince > PLAYING_STALL_MS) return true
        }

        // 2. A seek or effect change while paused never produced its frame.
        if (state == Player.STATE_READY && expectFrameSinceMs >= 0 && now - expectFrameSinceMs > PENDING_FRAME_STALL_MS) {
            return true
        }

        // 3. Stuck buffering on local media (the pipeline stopped consuming decoder output).
        if (state == Player.STATE_BUFFERING) {
            if (bufferingSinceMs < 0) bufferingSinceMs = now
            if (now - bufferingSinceMs > BUFFERING_STALL_MS) return true
        } else {
            bufferingSinceMs = -1L
        }
        return false
    }

    private fun reset() {
        expectFrameSinceMs = -1L
        bufferingSinceMs = -1L
    }

    private companion object {
        const val PLAYING_STALL_MS = 3_000L
        const val PENDING_FRAME_STALL_MS = 2_500L
        const val BUFFERING_STALL_MS = 5_000L
    }
}
