package dev.lec.effectapp

import android.content.Context
import android.media.MediaMetadataRetriever
import android.net.Uri
import android.provider.OpenableColumns
import androidx.activity.compose.rememberLauncherForActivityResult
import androidx.activity.result.contract.ActivityResultContracts
import androidx.annotation.OptIn
import androidx.compose.foundation.background
import androidx.compose.foundation.clickable
import androidx.compose.foundation.gestures.detectHorizontalDragGestures
import androidx.compose.foundation.gestures.detectTapGestures
import androidx.compose.foundation.horizontalScroll
import androidx.compose.foundation.verticalScroll
import androidx.compose.foundation.layout.Box
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.Row
import androidx.compose.foundation.layout.Spacer
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.height
import androidx.compose.foundation.layout.heightIn
import androidx.compose.foundation.layout.offset
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.layout.requiredWidth
import androidx.compose.foundation.layout.size
import androidx.compose.foundation.layout.width
import androidx.compose.foundation.rememberScrollState
import androidx.compose.material3.AlertDialog
import androidx.compose.material3.Button
import androidx.compose.material3.HorizontalDivider
import androidx.compose.material3.MaterialTheme
import androidx.compose.material3.OutlinedButton
import androidx.compose.material3.Scaffold
import androidx.compose.material3.Slider
import androidx.compose.material3.Text
import androidx.compose.material3.TextButton
import androidx.compose.material3.TopAppBar
import androidx.compose.runtime.Composable
import androidx.compose.runtime.DisposableEffect
import androidx.compose.runtime.LaunchedEffect
import androidx.compose.runtime.collectAsState
import androidx.compose.runtime.getValue
import androidx.compose.runtime.mutableFloatStateOf
import androidx.compose.runtime.mutableIntStateOf
import androidx.compose.runtime.mutableLongStateOf
import androidx.compose.runtime.mutableStateOf
import androidx.compose.runtime.remember
import androidx.compose.runtime.setValue
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.input.pointer.pointerInput
import androidx.compose.ui.platform.LocalContext
import androidx.compose.ui.platform.LocalDensity
import androidx.compose.ui.unit.Dp
import androidx.compose.ui.unit.dp
import androidx.compose.ui.viewinterop.AndroidView
import androidx.media3.common.MediaItem
import androidx.media3.common.PlaybackException
import androidx.media3.common.Player
import androidx.media3.common.util.UnstableApi
import androidx.media3.exoplayer.DefaultRenderersFactory
import androidx.media3.exoplayer.ExoPlayer
import androidx.media3.exoplayer.audio.AudioSink
import androidx.media3.exoplayer.audio.DefaultAudioSink
import androidx.media3.ui.PlayerView
import androidx.lifecycle.Lifecycle
import androidx.lifecycle.LifecycleEventObserver
import androidx.lifecycle.compose.LocalLifecycleOwner
import dev.lec.effectapp.effects.EffectCategory
import dev.lec.effectapp.effects.EffectRegistry
import dev.lec.effectapp.effects.PreviewAudioProcessor
import dev.lec.effectapp.model.Clip
import dev.lec.effectapp.model.EditProject
import dev.lec.effectapp.model.TimelineSegment
import dev.lec.effectapp.pipeline.ProjectCompositionFactory
import kotlinx.coroutines.delay

private const val PIXELS_PER_SECOND = 48f

@OptIn(UnstableApi::class)
@Composable
fun EditorScreen(viewModel: EditorViewModel, onBack: () -> Unit, onExport: () -> Unit) {
    val context = LocalContext.current
    val lifecycleOwner = LocalLifecycleOwner.current
    val project by viewModel.project.collectAsState()
    val selection by viewModel.selection.collectAsState()
    var playerPositionMs by remember { mutableLongStateOf(0) }
    var currentClipIndex by remember { mutableIntStateOf(0) }
    var pendingSegment by remember { mutableStateOf<PendingSegment?>(null) }

    val addClip = rememberLauncherForActivityResult(ActivityResultContracts.OpenDocument()) { uri ->
        uri ?: return@rememberLauncherForActivityResult
        runCatching { context.contentResolver.takePersistableUriPermission(uri, android.content.Intent.FLAG_GRANT_READ_URI_PERMISSION) }
        val metadata = editorMetadata(context, uri)
        viewModel.addClip(uri.toString(), metadata.first, metadata.second)
    }
    val saveProject = rememberLauncherForActivityResult(ActivityResultContracts.CreateDocument("application/json")) { uri ->
        uri?.let { context.contentResolver.openOutputStream(it)?.bufferedWriter()?.use { writer -> writer.write(viewModel.encode()) } }
    }
    val loadProject = rememberLauncherForActivityResult(ActivityResultContracts.OpenDocument()) { uri ->
        uri?.let { context.contentResolver.openInputStream(it)?.bufferedReader()?.use { reader -> viewModel.load(reader.readText()) } }
    }

    val previewAudioProcessor = remember { PreviewAudioProcessor() }
    val renderersFactory = remember(previewAudioProcessor) {
        object : DefaultRenderersFactory(context.applicationContext) {
            override fun buildAudioSink(
                context: Context,
                enableFloatOutput: Boolean,
                enableAudioOutputPlaybackParams: Boolean,
            ): AudioSink = DefaultAudioSink.Builder(context)
                .setEnableFloatOutput(false)
                .setEnableAudioOutputPlaybackParameters(enableAudioOutputPlaybackParams)
                .setAudioProcessors(arrayOf(previewAudioProcessor))
                .build()
        }
    }
    val player = remember(renderersFactory) {
        // Media3 requires the effect pipeline to be enabled before the first prepare().
        ExoPlayer.Builder(context.applicationContext, renderersFactory).build().apply { setVideoEffects(emptyList()) }
    }
    DisposableEffect(player, lifecycleOwner) {
        val listener = object : Player.Listener {
            override fun onPlayerError(error: PlaybackException) {
                if (player.mediaItemCount > 0) {
                    val item = player.currentMediaItemIndex.coerceAtLeast(0)
                    val position = player.currentPosition.coerceAtLeast(0)
                    // Tear down a failed decoder/effect chain before asking Media3 to retry it.
                    player.stop()
                    player.seekTo(item, position)
                    player.prepare()
                }
            }
        }
        val observer = LifecycleEventObserver { _, event ->
            when (event) {
                Lifecycle.Event.ON_RESUME -> {
                    if (player.mediaItemCount > 0 && player.playbackState == Player.STATE_IDLE) player.prepare()
                }
                Lifecycle.Event.ON_STOP -> player.pause()
                else -> Unit
            }
        }
        player.addListener(listener)
        lifecycleOwner.lifecycle.addObserver(observer)
        onDispose {
            lifecycleOwner.lifecycle.removeObserver(observer)
            player.removeListener(listener)
            player.release()
        }
    }
    LaunchedEffect(project.clips.map { it.sourceUri to (it.trimStartMs to it.trimEndMs) }) {
        val previousIndex = player.currentMediaItemIndex.coerceAtLeast(0)
        val previousPosition = player.currentPosition.coerceAtLeast(0)
        val resumePlayback = player.playWhenReady
        val items = project.clips.map { clip ->
            MediaItem.Builder().setUri(clip.sourceUri).setClippingConfiguration(
                MediaItem.ClippingConfiguration.Builder()
                    .setStartPositionMs(clip.trimStartMs)
                    .setEndPositionMs(clip.trimEndMs)
                    .build(),
            ).build()
        }
        if (items.isEmpty()) {
            player.clearMediaItems()
        } else {
            player.setMediaItems(items, previousIndex.coerceIn(items.indices), previousPosition)
            player.prepare()
            player.playWhenReady = resumePlayback
        }
    }
    LaunchedEffect(player, project.clips.map { it.id to it.durationMs }) {
        while (true) {
            currentClipIndex = player.currentMediaItemIndex.coerceAtLeast(0)
            playerPositionMs = project.clips.take(currentClipIndex).sumOf { it.durationMs } + player.currentPosition
            delay(200)
        }
    }
    val previewClip = project.clips.getOrNull(currentClipIndex)
    LaunchedEffect(previewAudioProcessor, previewClip?.audioSegments) {
        previewAudioProcessor.setSegments(previewClip?.audioSegments.orEmpty())
    }
    val previewEffectKey = previewClip?.let { listOf(it.id, it.transform, it.effectSegments) }
    LaunchedEffect(player, currentClipIndex, previewEffectKey) {
        val clip = previewClip ?: return@LaunchedEffect
        // Avoid rebuilding the GL chain dozens of times per second while a slider is dragged.
        delay(160)
        rebuildPreviewPipeline(player, ProjectCompositionFactory.previewVideoEffects(clip))
    }

    Scaffold(
        topBar = {
            TopAppBar(
                title = { Text(project.name) },
                navigationIcon = { TextButton(onClick = onBack) { Text("Back") } },
                actions = {
                    TextButton(onClick = { loadProject.launch(arrayOf("application/json")) }) { Text("Load") }
                    TextButton(onClick = { saveProject.launch("effect-project.json") }) { Text("Save") }
                    TextButton(onClick = onExport, enabled = project.clips.isNotEmpty()) { Text("Export") }
                },
            )
        },
    ) { padding ->
        Column(Modifier.fillMaxSize().padding(padding)) {
            AndroidView(
                factory = { PlayerView(it).apply { this.player = player; useController = true } },
                modifier = Modifier.fillMaxWidth().weight(0.42f),
                update = { it.player = player },
            )
            Row(Modifier.fillMaxWidth().padding(horizontal = 8.dp), verticalAlignment = Alignment.CenterVertically) {
                Text("Clip ${if (project.clips.isEmpty()) 0 else currentClipIndex + 1}/${project.clips.size}", Modifier.weight(1f))
                OutlinedButton(onClick = { addClip.launch(arrayOf("video/*")) }) { Text("+ Clip") }
            }
            Timeline(
                project = project,
                playheadMs = playerPositionMs,
                selection = selection,
                onSeek = { globalMs -> seekGlobal(player, project, globalMs) },
                onClip = viewModel::selectClip,
                onSegment = viewModel::selectSegment,
                onEmptyLane = { clipId, startMs, category -> pendingSegment = PendingSegment(clipId, startMs, category) },
                onResize = { clipId, segmentId, start, end ->
                    viewModel.updateSegment(clipId, segmentId) { it.copy(startMs = start, endMs = end) }
                },
            )
            HorizontalDivider()
            EditPanel(
                viewModel = viewModel,
                project = project,
                selection = selection,
                modifier = Modifier.weight(0.36f),
                onAddVisualEffect = { clipId -> pendingSegment = PendingSegment(clipId, 0, EffectCategory.EFFECTS) },
                onAddAudioEffect = { clipId -> pendingSegment = PendingSegment(clipId, 0, EffectCategory.AUDIO) },
            )
        }
    }

    pendingSegment?.let { pending ->
        EffectPicker(
            category = pending.category,
            onDismiss = { pendingSegment = null },
            onPick = { id -> viewModel.addSegment(pending.clipId, id, pending.startMs); pendingSegment = null },
        )
    }
}

@OptIn(UnstableApi::class)
private fun rebuildPreviewPipeline(player: ExoPlayer, effects: List<androidx.media3.common.Effect>) {
    if (player.mediaItemCount == 0) {
        player.setVideoEffects(effects)
        return
    }

    val itemIndex = player.currentMediaItemIndex.coerceIn(0, player.mediaItemCount - 1)
    val position = player.currentPosition.coerceAtLeast(0)
    val resumePlayback = player.playWhenReady

    // A live one-pass -> multi-pass update can leave frames held by the old GL chain on some
    // devices. Stopping releases that chain while retaining the playlist, so prepare() creates
    // the complete replacement atomically instead of splicing it into frames already in flight.
    player.playWhenReady = false
    player.stop()
    player.setVideoEffects(effects)
    player.seekTo(itemIndex, position)
    player.prepare()
    player.playWhenReady = resumePlayback
}

@Composable
private fun Timeline(
    project: EditProject,
    playheadMs: Long,
    selection: Selection?,
    onSeek: (Long) -> Unit,
    onClip: (String) -> Unit,
    onSegment: (String, String, EffectCategory) -> Unit,
    onEmptyLane: (String, Long, EffectCategory) -> Unit,
    onResize: (String, String, Long, Long) -> Unit,
) {
    val totalWidth = ((project.durationMs / 1_000f) * PIXELS_PER_SECOND).coerceAtLeast(360f).dp
    val scroll = rememberScrollState()
    Column(Modifier.fillMaxWidth().height(210.dp).horizontalScroll(scroll)) {
        Text("Video", Modifier.padding(start = 4.dp))
        Box(Modifier.requiredWidth(totalWidth).height(46.dp).pointerInput(project.durationMs) {
            detectTapGestures { offset -> onSeek((offset.x / density * 1_000 / PIXELS_PER_SECOND).toLong()) }
        }) {
            var startMs = 0L
            project.clips.forEachIndexed { index, clip ->
                val startDp = msToDp(startMs)
                val widthDp = msToDp(clip.durationMs).coerceAtLeast(2.dp)
                Box(
                    Modifier.offset(x = startDp).width(widthDp).height(42.dp)
                        .background(if (index % 2 == 0) MaterialTheme.colorScheme.secondaryContainer else MaterialTheme.colorScheme.tertiaryContainer)
                        .clickable { onClip(clip.id) }.padding(4.dp),
                ) { Text(clip.displayName, maxLines = 1) }
                startMs += clip.durationMs
            }
            Playhead(playheadMs)
        }
        Lane("Effects", project, EffectCategory.EFFECTS, selection, onSegment, onEmptyLane, onResize)
        Lane("Audio", project, EffectCategory.AUDIO, selection, onSegment, onEmptyLane, onResize)
    }
}

@Composable
private fun Lane(
    title: String,
    project: EditProject,
    category: EffectCategory,
    selection: Selection?,
    onSegment: (String, String, EffectCategory) -> Unit,
    onEmpty: (String, Long, EffectCategory) -> Unit,
    onResize: (String, String, Long, Long) -> Unit,
) {
    Text(title, Modifier.padding(start = 4.dp))
    val totalWidth = ((project.durationMs / 1_000f) * PIXELS_PER_SECOND).coerceAtLeast(360f).dp
    Box(
        Modifier.requiredWidth(totalWidth).height(58.dp).background(MaterialTheme.colorScheme.surfaceVariant)
            .pointerInput(project.clips, category) {
                detectTapGestures { point ->
                    val global = (point.x / density * 1_000 / PIXELS_PER_SECOND).toLong()
                    var cursor = 0L
                    project.clips.firstOrNull { clip ->
                        val contains = global in cursor until (cursor + clip.durationMs)
                        if (!contains) cursor += clip.durationMs
                        contains
                    }?.let { onEmpty(it.id, global - cursor, category) }
                }
            },
    ) {
        var clipStart = 0L
        project.clips.forEach { clip ->
            val segments = if (category == EffectCategory.AUDIO) clip.audioSegments else clip.effectSegments
            segments.forEachIndexed { index, segment ->
                SegmentBlock(
                    clipId = clip.id,
                    segment = segment,
                    globalStartMs = clipStart + segment.startMs,
                    selected = selection?.segmentId == segment.id,
                    row = index % 2,
                    category = category,
                    resizable = category == EffectCategory.AUDIO,
                    onSegment = onSegment,
                    onResize = onResize,
                )
            }
            clipStart += clip.durationMs
        }
        Playhead(playheadMs = 0, visible = false)
    }
}

@Composable
private fun SegmentBlock(
    clipId: String,
    segment: TimelineSegment,
    globalStartMs: Long,
    selected: Boolean,
    row: Int,
    category: EffectCategory,
    resizable: Boolean,
    onSegment: (String, String, EffectCategory) -> Unit,
    onResize: (String, String, Long, Long) -> Unit,
) {
    val density = LocalDensity.current
    val color = if (selected) MaterialTheme.colorScheme.primary else MaterialTheme.colorScheme.primaryContainer
    Box(
        Modifier.offset(x = msToDp(globalStartMs), y = (row * 25).dp)
            .width(msToDp(segment.durationMs).coerceAtLeast(24.dp)).height(24.dp)
            .background(color).clickable { onSegment(clipId, segment.id, category) },
    ) {
        if (resizable) ResizeHandle(Modifier.align(Alignment.CenterStart), segment, true, density, clipId, onResize)
        Text(EffectRegistry.byId(segment.effectId)?.displayName ?: segment.effectId, Modifier.padding(horizontal = 8.dp), maxLines = 1)
        if (resizable) ResizeHandle(Modifier.align(Alignment.CenterEnd), segment, false, density, clipId, onResize)
    }
}

@Composable
private fun ResizeHandle(
    modifier: Modifier,
    segment: TimelineSegment,
    startHandle: Boolean,
    density: androidx.compose.ui.unit.Density,
    clipId: String,
    onResize: (String, String, Long, Long) -> Unit,
) {
    var accumulated by remember(segment.id, segment.startMs, segment.endMs) { mutableFloatStateOf(0f) }
    Box(
        modifier.width(6.dp).fillMaxSize().background(MaterialTheme.colorScheme.onPrimaryContainer.copy(alpha = 0.35f))
            .pointerInput(segment.id, segment.startMs, segment.endMs) {
                detectHorizontalDragGestures(
                    onDragStart = { accumulated = 0f },
                    onHorizontalDrag = { change, amount ->
                        change.consume()
                        accumulated += amount
                        val deltaMs = (with(density) { accumulated.toDp().value } / PIXELS_PER_SECOND * 1_000).toLong()
                        if (startHandle) onResize(clipId, segment.id, segment.startMs + deltaMs, segment.endMs)
                        else onResize(clipId, segment.id, segment.startMs, segment.endMs + deltaMs)
                    },
                )
            },
    )
}

@Composable
private fun Playhead(playheadMs: Long, visible: Boolean = true) {
    if (visible) Box(Modifier.offset(x = msToDp(playheadMs)).width(2.dp).fillMaxSize().background(Color.Red))
}

private fun msToDp(ms: Long): Dp = (ms / 1_000f * PIXELS_PER_SECOND).dp

private fun seekGlobal(player: ExoPlayer, project: EditProject, globalMs: Long) {
    var cursor = 0L
    project.clips.forEachIndexed { index, clip ->
        if (globalMs < cursor + clip.durationMs || index == project.clips.lastIndex) {
            player.seekTo(index, (globalMs - cursor).coerceIn(0, clip.durationMs))
            return
        }
        cursor += clip.durationMs
    }
}

@Composable
private fun EffectPicker(category: EffectCategory, onDismiss: () -> Unit, onPick: (String) -> Unit) {
    AlertDialog(
        onDismissRequest = onDismiss,
        title = { Text(if (category == EffectCategory.AUDIO) "Add audio effect" else "Add visual effect") },
        text = {
            Column(Modifier.heightIn(max = 420.dp).verticalScroll(rememberScrollState())) {
                EffectRegistry.byCategory(category).forEach { effect ->
                    TextButton(onClick = { onPick(effect.id) }, modifier = Modifier.fillMaxWidth()) { Text(effect.displayName) }
                }
            }
        },
        confirmButton = { TextButton(onClick = onDismiss) { Text("Cancel") } },
    )
}

private data class PendingSegment(val clipId: String, val startMs: Long, val category: EffectCategory)

private fun editorMetadata(context: Context, uri: Uri): Pair<String, Long> {
    val name = context.contentResolver.query(uri, arrayOf(OpenableColumns.DISPLAY_NAME), null, null, null)?.use { cursor ->
        if (cursor.moveToFirst()) cursor.getString(0) else null
    } ?: uri.lastPathSegment ?: "Video"
    val duration = runCatching {
        MediaMetadataRetriever().use { retriever ->
            retriever.setDataSource(context, uri)
            retriever.extractMetadata(MediaMetadataRetriever.METADATA_KEY_DURATION)?.toLong()
        }
    }.getOrNull() ?: 1L
    return name to duration
}
