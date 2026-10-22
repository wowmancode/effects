package dev.lec.effectapp

import android.content.Context
import android.graphics.Bitmap
import android.graphics.BitmapFactory
import android.media.MediaMetadataRetriever
import android.net.Uri
import android.view.TextureView
import androidx.annotation.OptIn
import androidx.compose.foundation.Canvas
import androidx.compose.foundation.Image
import androidx.compose.foundation.border
import androidx.compose.foundation.gestures.detectDragGestures
import androidx.compose.foundation.layout.Box
import androidx.compose.foundation.layout.BoxWithConstraints
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.foundation.layout.offset
import androidx.compose.foundation.layout.size
import androidx.compose.runtime.Composable
import androidx.compose.runtime.DisposableEffect
import androidx.compose.runtime.LaunchedEffect
import androidx.compose.runtime.getValue
import androidx.compose.runtime.mutableLongStateOf
import androidx.compose.runtime.mutableStateOf
import androidx.compose.runtime.produceState
import androidx.compose.runtime.remember
import androidx.compose.runtime.rememberUpdatedState
import androidx.compose.runtime.setValue
import androidx.compose.runtime.withFrameMillis
import androidx.compose.ui.Modifier
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.graphics.asImageBitmap
import androidx.compose.ui.graphics.graphicsLayer
import androidx.compose.ui.input.pointer.pointerInput
import androidx.compose.ui.layout.ContentScale
import androidx.compose.ui.platform.LocalContext
import androidx.compose.ui.platform.LocalDensity
import androidx.compose.ui.unit.IntOffset
import androidx.compose.ui.unit.IntSize
import androidx.compose.ui.unit.dp
import androidx.compose.ui.viewinterop.AndroidView
import androidx.media3.common.MediaItem
import androidx.media3.common.Player
import androidx.media3.common.util.UnstableApi
import androidx.media3.exoplayer.ExoPlayer
import androidx.media3.exoplayer.DefaultRenderersFactory
import androidx.media3.exoplayer.audio.AudioSink
import androidx.media3.exoplayer.audio.DefaultAudioSink
import dev.lec.effectapp.effects.PreviewAudioProcessor
import dev.lec.effectapp.model.Clip
import dev.lec.effectapp.model.Overlay
import dev.lec.effectapp.pipeline.OverlayBitmapCache
import dev.lec.effectapp.pipeline.ProjectCompositionFactory
import dev.lec.effectapp.pipeline.ReverseMediaCache
import java.util.concurrent.ConcurrentHashMap
import kotlin.math.abs
import kotlin.math.roundToInt
import kotlinx.coroutines.Dispatchers
import kotlinx.coroutines.withContext

/**
 * The current clip's overlays, drawn over the preview player where the export will put them.
 *
 * Placement follows Media3's overlay maths used by the export: an overlay covers
 * (overlay pixels / clip pixels) x scale of the frame, centred at the offset anchor, with offsets in
 * [-1, 1] and +y pointing up. Video overlays run their own muted-unless-requested player that
 * follows the preview's clock, so they play (and loop) instead of showing a poster frame.
 *
 * Dragging an overlay moves it: the base position when it has no animation keyframes, otherwise
 * the keyframe at the playhead (added if needed).
 */
@OptIn(UnstableApi::class)
@Composable
internal fun PreviewOverlayLayer(
    clip: Clip?,
    mainPlayer: ExoPlayer,
    localTimeMs: () -> Long,
    onDragStart: () -> Unit,
    onMove: (overlayId: String, timeMs: Long, offsetX: Float, offsetY: Float) -> Unit,
    onDragEnd: () -> Unit,
) {
    if (clip == null || clip.overlays.isEmpty()) return
    val context = LocalContext.current
    val overlays by produceState(clip.playbackOverlays(), clip.overlays, clip.audioSegments, clip.durationMs) {
        value = clip.playbackOverlays()
        value = withContext(Dispatchers.IO) { ReverseMediaCache.prepareAudioOverlays(context.applicationContext, clip) }
    }
    val latestTime by rememberUpdatedState(localTimeMs)
    // Per-frame clock so animation keyframes and video sync are smooth, not tied to UI polling.
    var timeMs by remember { mutableLongStateOf(0L) }
    var mainPlaying by remember { mutableStateOf(false) }
    LaunchedEffect(mainPlayer) {
        while (true) {
            withFrameMillis {
                timeMs = latestTime()
                mainPlaying = mainPlayer.isPlaying
            }
        }
    }
    val backgroundSize = rememberPixelSize(context, clip.sourceUri, isVideo = true) ?: return

    BoxWithConstraints(Modifier.fillMaxSize()) {
        val containerWidth = constraints.maxWidth.toFloat()
        val containerHeight = constraints.maxHeight.toFloat()
        // The player letterboxes the video (fit); overlays are placed inside that rectangle.
        val aspect = backgroundSize.width.toFloat() / backgroundSize.height.coerceAtLeast(1)
        val rectWidth: Float
        val rectHeight: Float
        if (containerWidth / containerHeight.coerceAtLeast(1f) > aspect) {
            rectHeight = containerHeight
            rectWidth = containerHeight * aspect
        } else {
            rectWidth = containerWidth
            rectHeight = containerWidth / aspect
        }
        val rectLeft = (containerWidth - rectWidth) / 2f
        val rectTop = (containerHeight - rectHeight) / 2f

        // overlays[0] is the top layer, so draw the list back to front. Overlays in a lane share
        // one key, so their player carries on from clip to clip instead of starting over.
        overlays.asReversed().filterNot { it.audioOnly }.forEach { overlay ->
            androidx.compose.runtime.key(overlay.previewKey()) {
                OverlayItem(
                    overlay = overlay,
                    clipDurationMs = clip.durationMs,
                    backgroundSize = backgroundSize,
                    rect = OverlayRect(rectLeft, rectTop, rectWidth, rectHeight),
                    timeMs = timeMs,
                    mainPlaying = mainPlaying,
                    localTimeMs = latestTime,
                    onDragStart = onDragStart,
                    onMove = onMove,
                    onDragEnd = onDragEnd,
                )
            }
        }
        overlays.filter { it.audioOnly }.forEach { overlay ->
            androidx.compose.runtime.key(overlay.previewKey()) {
                OverlayAudio(overlay, clip.durationMs, timeMs, mainPlaying)
            }
        }
    }
}

private fun Overlay.previewKey(): String = if (lane >= 0) "lane:$lane" else id

private data class OverlayRect(val left: Float, val top: Float, val width: Float, val height: Float)

@Composable
private fun OverlayItem(
    overlay: Overlay,
    clipDurationMs: Long,
    backgroundSize: IntSize,
    rect: OverlayRect,
    timeMs: Long,
    mainPlaying: Boolean,
    localTimeMs: () -> Long,
    onDragStart: () -> Unit,
    onMove: (overlayId: String, timeMs: Long, offsetX: Float, offsetY: Float) -> Unit,
    onDragEnd: () -> Unit,
) {
    val context = LocalContext.current
    val density = LocalDensity.current
    val overlaySize = if (overlay.fillFrame) backgroundSize
    else rememberPixelSize(context, overlay.sourceUri, overlay.isVideo) ?: return
    val endMs = if (overlay.endMs <= overlay.startMs) clipDurationMs else overlay.endMs
    val visible = timeMs in overlay.startMs until endMs
    val values = overlay.valuesAt(timeMs)
    val scale = if (overlay.fillFrame) 1f else values.scale.coerceAtLeast(0.01f)
    val width = rect.width * overlaySize.width / backgroundSize.width.coerceAtLeast(1) * scale
    val height = rect.height * overlaySize.height / backgroundSize.height.coerceAtLeast(1) * scale
    // A frame-filling overlay covers the picture; its placement is done by its effects.
    val centerX = if (overlay.fillFrame) rect.left + rect.width / 2f
    else rect.left + (values.offsetX.coerceIn(-1f, 1f) + 1f) / 2f * rect.width
    val centerY = if (overlay.fillFrame) rect.top + rect.height / 2f
    else rect.top + (1f - values.offsetY.coerceIn(-1f, 1f)) / 2f * rect.height
    val alpha = if (visible) values.alpha.coerceIn(0f, 1f) else 0f
    var dragging by remember { mutableStateOf(false) }
    val latestValues by rememberUpdatedState(values)
    val latestRect by rememberUpdatedState(rect)
    val latestVisible by rememberUpdatedState(visible)
    val latestTime by rememberUpdatedState(localTimeMs)
    val latestOnMove by rememberUpdatedState(onMove)
    val latestOnDragStart by rememberUpdatedState(onDragStart)
    val latestOnDragEnd by rememberUpdatedState(onDragEnd)

    val modifier = Modifier
        .offset { IntOffset((centerX - width / 2f).roundToInt(), (centerY - height / 2f).roundToInt()) }
        .size(with(density) { width.toDp() }, with(density) { height.toDp() })
        .then(if (dragging) Modifier.border(2.dp, Color.Yellow) else Modifier)
        // Hidden overlays (outside their time range) let touches through to the player.
        .then(if (!visible || overlay.fillFrame) Modifier else Modifier.pointerInput(overlay.id) {
            var x = 0f
            var y = 0f
            var time = 0L
            try { detectDragGestures(
                onDragStart = {
                    x = latestValues.offsetX
                    y = latestValues.offsetY
                    time = latestTime()
                    dragging = true
                    latestOnDragStart()
                },
                onDragEnd = {
                    dragging = false
                    latestOnDragEnd()
                },
                onDragCancel = {
                    dragging = false
                    latestOnDragEnd()
                },
            ) { change, drag ->
                if (!latestVisible) return@detectDragGestures
                change.consume()
                x = (x + 2f * drag.x / latestRect.width.coerceAtLeast(1f)).coerceIn(-1f, 1f)
                y = (y - 2f * drag.y / latestRect.height.coerceAtLeast(1f)).coerceIn(-1f, 1f)
                latestOnMove(overlay.id, time, x, y)
            } } finally {
                // Removed mid-drag (the overlay's time range ended): close the undo step.
                if (dragging) {
                    dragging = false
                    latestOnDragEnd()
                }
            }
        })

    if (overlay.isVideo) {
        OverlayVideo(overlay, clipDurationMs, timeMs, mainPlaying, visible, alpha, modifier)
    } else {
        OverlayImage(context, overlay, timeMs, alpha, modifier)
    }
}

@Composable
private fun OverlayImage(context: Context, overlay: Overlay, timeMs: Long, alpha: Float, modifier: Modifier) {
    val uri = overlay.sourceUri
    val bitmap by produceState<Bitmap?>(null, uri) {
        value = withContext(Dispatchers.IO) { OverlayBitmapCache.get(context.applicationContext, uri) }
    }
    val placement = overlay.effectSegments.firstOrNull { it.enabled && it.effectId == "frame_place" }
    Box(modifier) {
        val image = bitmap
        if (image != null && placement != null) {
            // Same crop-and-place as the export's frame_place effect (without the window turn).
            val p = placement.paramsAt((timeMs - overlay.startMs).coerceAtLeast(0))
            val imageBitmap = image.asImageBitmap()
            Canvas(Modifier.fillMaxSize().graphicsLayer { this.alpha = alpha }) {
                fun v(key: String, fallback: Float) = p[key]?.takeIf(Float::isFinite) ?: fallback
                val srcW = kotlin.math.abs(v("src_w", 1f)) * image.width
                val srcH = kotlin.math.abs(v("src_h", 1f)) * image.height
                val srcLeft = v("src_cx", 0.5f) * image.width - srcW / 2f
                val srcTop = v("src_cy", 0.5f) * image.height - srcH / 2f
                // Only the part of the window that lies on the picture is drawn.
                val left = srcLeft.coerceIn(0f, image.width.toFloat())
                val top = srcTop.coerceIn(0f, image.height.toFloat())
                val right = (srcLeft + srcW).coerceIn(0f, image.width.toFloat())
                val bottom = (srcTop + srcH).coerceIn(0f, image.height.toFloat())
                if (right - left < 1f || bottom - top < 1f) return@Canvas
                val dstW = kotlin.math.abs(v("dst_w", 1f)) * size.width
                val dstH = kotlin.math.abs(v("dst_h", 1f)) * size.height
                val scaleX = dstW / srcW.coerceAtLeast(1e-3f)
                val scaleY = dstH / srcH.coerceAtLeast(1e-3f)
                val dstLeft = v("dst_cx", 0.5f) * size.width - dstW / 2f + (left - srcLeft) * scaleX
                val dstTop = v("dst_cy", 0.5f) * size.height - dstH / 2f + (top - srcTop) * scaleY
                drawImage(
                    image = imageBitmap,
                    srcOffset = IntOffset(left.roundToInt(), top.roundToInt()),
                    srcSize = IntSize((right - left).roundToInt().coerceAtLeast(1), (bottom - top).roundToInt().coerceAtLeast(1)),
                    dstOffset = IntOffset(dstLeft.roundToInt(), dstTop.roundToInt()),
                    dstSize = IntSize(((right - left) * scaleX).roundToInt().coerceAtLeast(1), ((bottom - top) * scaleY).roundToInt().coerceAtLeast(1)),
                )
            }
            return@Box
        }
        bitmap?.let {
            Image(
                bitmap = it.asImageBitmap(),
                contentDescription = null,
                contentScale = ContentScale.FillBounds,
                modifier = Modifier.fillMaxSize().graphicsLayer { this.alpha = alpha },
            )
        }
    }
}

@OptIn(UnstableApi::class)
@Composable
private fun OverlayVideo(
    overlay: Overlay,
    clipDurationMs: Long,
    timeMs: Long,
    mainPlaying: Boolean,
    visible: Boolean,
    alpha: Float,
    modifier: Modifier,
) {
    val context = LocalContext.current
    val player = remember(overlay.previewKey(), overlay.sourceUri) {
        ExoPlayer.Builder(context.applicationContext).build().apply {
            // The effect pipeline must be enabled before the first prepare().
            setVideoEffects(emptyList())
            repeatMode = Player.REPEAT_MODE_ONE
            setMediaItem(MediaItem.fromUri(Uri.parse(overlay.sourceUri)))
            prepare()
        }
    }
    DisposableEffect(player) { onDispose { player.release() } }
    LaunchedEffect(player, overlay.includeAudio) { player.volume = if (overlay.includeAudio) 1f else 0f }
    LaunchedEffect(player, overlay.playbackSpeed) { player.setPlaybackSpeed(overlay.playbackSpeed) }
    LaunchedEffect(player, overlay.effectSegments) {
        val stand = Clip(
            id = overlay.id,
            sourceUri = overlay.sourceUri,
            displayName = overlay.displayName,
            trimEndMs = clipDurationMs.coerceAtLeast(1),
            effectSegments = overlay.effectSegments,
        )
        runCatching { player.setVideoEffects(ProjectCompositionFactory.videoEffects(stand)) }
    }

    FollowPreviewClock(player, overlay, timeMs, mainPlaying, visible)

    Box(modifier) {
        AndroidView(
            factory = { viewContext ->
                // Not opaque: placed or cropped overlays are transparent around their picture.
                TextureView(viewContext).apply { isOpaque = false }.also(player::setVideoTextureView)
            },
            update = { view -> view.alpha = alpha },
            onRelease = { view -> player.clearVideoTextureView(view) },
            modifier = Modifier.fillMaxSize(),
        )
    }
}

private val pixelSizes = ConcurrentHashMap<String, IntSize>()

/** The media's displayed size in pixels (rotation applied), loaded off the main thread and cached. */
@Composable
private fun rememberPixelSize(context: Context, uri: String, isVideo: Boolean): IntSize? {
    val size by produceState(pixelSizes[uri], uri, isVideo) {
        if (value == null) {
            value = withContext(Dispatchers.IO) {
                runCatching { readPixelSize(context.applicationContext, uri, isVideo) }.getOrNull()
            }?.also { pixelSizes[uri] = it }
        }
    }
    return size
}

private fun readPixelSize(context: Context, uri: String, isVideo: Boolean): IntSize? {
    val parsed = Uri.parse(uri)
    if (!isVideo) {
        val bounds = BitmapFactory.Options().apply { inJustDecodeBounds = true }
        context.contentResolver.openInputStream(parsed)?.use { BitmapFactory.decodeStream(it, null, bounds) }
        if (bounds.outWidth > 0 && bounds.outHeight > 0) return IntSize(bounds.outWidth, bounds.outHeight)
    }
    val retriever = MediaMetadataRetriever()
    return try {
        retriever.setDataSource(context, parsed)
        val width = retriever.extractMetadata(MediaMetadataRetriever.METADATA_KEY_VIDEO_WIDTH)?.toIntOrNull() ?: return null
        val height = retriever.extractMetadata(MediaMetadataRetriever.METADATA_KEY_VIDEO_HEIGHT)?.toIntOrNull() ?: return null
        val rotation = retriever.extractMetadata(MediaMetadataRetriever.METADATA_KEY_VIDEO_ROTATION)?.toIntOrNull() ?: 0
        if (rotation % 180 == 0) IntSize(width, height) else IntSize(height, width)
    } finally {
        retriever.release()
    }
}

/**
 * Keeps an overlay's own player in step with the preview: plays and pauses with it and corrects
 * drift. The source position comes from the overlay's in-point and speed, and loops like export.
 * Reads the latest overlay each frame, since a lane's player outlives the overlay it started with.
 */
@Composable
private fun FollowPreviewClock(player: ExoPlayer, overlay: Overlay, timeMs: Long, mainPlaying: Boolean, visible: Boolean) {
    val latestOverlay by rememberUpdatedState(overlay)
    val latestTime by rememberUpdatedState(timeMs)
    val latestPlaying by rememberUpdatedState(mainPlaying)
    val latestVisible by rememberUpdatedState(visible)
    LaunchedEffect(player) {
        var lastSeekMs = -1L
        while (true) {
            withFrameMillis { }
            if (!latestVisible) {
                if (player.playWhenReady) player.pause()
                continue
            }
            val current = latestOverlay
            val duration = current.sourceDurationMs.takeIf { it >= 100 }
                ?: player.duration.takeIf { it > 0 }
                ?: continue
            val expected = current.sourceMsAt(latestTime).mod(duration)
            val raw = abs(player.currentPosition.mod(duration) - expected)
            val drift = minOf(raw, duration - raw)
            if (latestPlaying) {
                if (!player.playWhenReady) {
                    player.seekTo(expected)
                    player.play()
                } else if (drift > 250) {
                    player.seekTo(expected)
                }
            } else {
                if (player.playWhenReady) player.pause()
                if (drift > 40 && abs(expected - lastSeekMs) > 40) {
                    lastSeekMs = expected
                    player.seekTo(expected)
                }
            }
        }
    }
}

/** A sound-only overlay: its own player with no picture, following the preview clock. */
@OptIn(UnstableApi::class)
@Composable
private fun OverlayAudio(overlay: Overlay, clipDurationMs: Long, timeMs: Long, mainPlaying: Boolean) {
    val context = LocalContext.current
    val processor = remember(overlay.previewKey()) { PreviewAudioProcessor() }
    val renderersFactory = remember(processor) {
        object : DefaultRenderersFactory(context.applicationContext) {
            override fun buildAudioSink(
                context: Context,
                enableFloatOutput: Boolean,
                enableAudioOutputPlaybackParams: Boolean,
            ): AudioSink = DefaultAudioSink.Builder(context)
                .setEnableFloatOutput(false)
                .setEnableAudioOutputPlaybackParameters(enableAudioOutputPlaybackParams)
                .setAudioProcessors(arrayOf(processor))
                .build()
        }
    }
    val player = remember(overlay.previewKey(), overlay.sourceUri, renderersFactory) {
        ExoPlayer.Builder(context.applicationContext, renderersFactory).build().apply {
            repeatMode = Player.REPEAT_MODE_ONE
            setMediaItem(MediaItem.fromUri(Uri.parse(overlay.sourceUri)))
            prepare()
        }
    }
    DisposableEffect(player) { onDispose { player.release() } }
    LaunchedEffect(processor, overlay.audioSegments) { processor.setSegments(overlay.audioSegments) }
    LaunchedEffect(player, overlay.playbackSpeed) { player.setPlaybackSpeed(overlay.playbackSpeed) }
    val endMs = if (overlay.endMs <= overlay.startMs) clipDurationMs else overlay.endMs
    FollowPreviewClock(player, overlay, timeMs, mainPlaying, visible = timeMs in overlay.startMs until endMs)
}

