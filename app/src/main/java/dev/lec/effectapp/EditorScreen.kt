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
import androidx.compose.runtime.rememberCoroutineScope
import androidx.compose.runtime.setValue
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.input.pointer.pointerInput
import androidx.compose.ui.platform.LocalContext
import androidx.compose.ui.platform.LocalDensity
import androidx.compose.ui.unit.Dp
import androidx.compose.ui.unit.dp
import androidx.media3.common.MediaItem
import androidx.media3.common.PlaybackException
import androidx.media3.common.Player
import androidx.media3.common.util.UnstableApi
import androidx.media3.exoplayer.DefaultRenderersFactory
import androidx.media3.exoplayer.ExoPlayer
import androidx.media3.exoplayer.audio.AudioSink
import androidx.media3.exoplayer.audio.DefaultAudioSink
import androidx.lifecycle.Lifecycle
import androidx.lifecycle.LifecycleEventObserver
import androidx.lifecycle.compose.LocalLifecycleOwner
import dev.lec.effectapp.effects.EffectCategory
import dev.lec.effectapp.effects.EffectRegistry
import dev.lec.effectapp.effects.CarrierAudioStore
import dev.lec.effectapp.effects.PreviewAudioProcessor
import dev.lec.effectapp.model.Clip
import dev.lec.effectapp.model.EditProject
import dev.lec.effectapp.model.TimelineSegment
import dev.lec.effectapp.pipeline.ProjectCompositionFactory
import kotlinx.coroutines.delay
import kotlinx.coroutines.Dispatchers
import kotlinx.coroutines.withContext
import kotlinx.coroutines.launch
import kotlin.coroutines.resume

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
    var pendingPresetExportId by remember { mutableStateOf<String?>(null) }
    var pendingReplaceClipId by remember { mutableStateOf<String?>(null) }

    val scope = rememberCoroutineScope()
    var previewEntries by remember { mutableStateOf<List<PreviewEntry>>(emptyList()) }
    var playerView by remember { mutableStateOf<androidx.media3.ui.PlayerView?>(null) }

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
    val importPreset = rememberLauncherForActivityResult(ActivityResultContracts.OpenDocument()) { uri ->
        uri?.let {
            context.contentResolver.openInputStream(it)?.bufferedReader()?.use { reader ->
                runCatching { viewModel.importPreset(reader.readText()) }
            }
        }
    }
    val exportPreset = rememberLauncherForActivityResult(
        ActivityResultContracts.CreateDocument("application/json"),
    ) { uri ->
        val presetId = pendingPresetExportId
        pendingPresetExportId = null
        if (uri != null && presetId != null) {
            viewModel.encodePreset(presetId)?.let { json ->
                context.contentResolver.openOutputStream(uri)?.bufferedWriter()?.use { writer -> writer.write(json) }
            }
        }
    }
    val replaceMedia = rememberLauncherForActivityResult(ActivityResultContracts.OpenDocument()) { uri ->
        val clipId = pendingReplaceClipId
        pendingReplaceClipId = null
        if (uri != null && clipId != null) {
            runCatching {
                context.contentResolver.takePersistableUriPermission(
                    uri,
                    android.content.Intent.FLAG_GRANT_READ_URI_PERMISSION,
                )
            }
            val metadata = editorMetadata(context, uri)
            viewModel.replaceClipMedia(clipId, uri.toString(), metadata.first, metadata.second)
        }
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
    val playlistKey = project.clips.map { clip ->
        listOf(
            clip.sourceUri,
            clip.trimStartMs,
            clip.trimEndMs,
            clip.effectSegments.any { it.enabled && it.effectId == "reverse_video" },
        )
    }
    LaunchedEffect(playlistKey) {
        val previousGlobalPosition = playerPositionMs
        val resumePlayback = player.playWhenReady
        val entries = buildPreviewEntries(project)
        previewEntries = entries
        if (entries.isEmpty()) {
            player.clearMediaItems()
        } else {
            player.setMediaItems(entries.map { it.mediaItem })
            seekPreview(player, project, entries, previousGlobalPosition)
            player.prepare()
            player.playWhenReady = resumePlayback
        }
    }
    LaunchedEffect(player, previewEntries, project.clips.map { it.id to it.durationMs }) {
        while (true) {
            val entry = previewEntries.getOrNull(player.currentMediaItemIndex.coerceAtLeast(0))
            if (entry != null && project.clips.getOrNull(currentClipIndex)?.mediaMissing != true) {
                currentClipIndex = entry.clipIndex
                playerPositionMs = project.clips.take(entry.clipIndex).sumOf { it.durationMs } +
                    entry.outputStartMs + player.currentPosition.coerceIn(0, entry.durationMs)
            }
            delay(80)
        }
    }
    val previewClip = project.clips.getOrNull(currentClipIndex)
    LaunchedEffect(previewAudioProcessor, previewClip?.audioSegments) {
        previewAudioProcessor.setSegments(previewClip?.audioSegments.orEmpty())
    }
    val previewCarrierUris = previewClip?.audioSegments.orEmpty()
        .filter { it.effectId == "vocoder_custom" }
        .mapNotNull { it.stringParams["carrier_uri"] }
        .distinct()
    LaunchedEffect(previewCarrierUris) {
        previewCarrierUris.forEach { uri -> withContext(Dispatchers.IO) { CarrierAudioStore.load(context, uri) } }
        previewAudioProcessor.setSegments(previewClip?.audioSegments.orEmpty())
    }
    val previewClipStartMs = project.clips.take(currentClipIndex).sumOf { it.durationMs }
    val previewLocalMs = (playerPositionMs - previewClipStartMs).coerceAtLeast(0)
    val previewStructureKey = previewClip?.let { clip ->
        val transformEnabled = clip.transform.run {
            scale != 1f || rotationDegrees != 0f || offsetX != 0f || offsetY != 0f
        }
        listOf<Any?>(
            clip.id,
            transformEnabled,
            clip.effectSegments.filter { it.enabled }.map { it.effectId },
        )
    }
    val animationFrame = if (previewClip?.effectSegments.orEmpty().any { it.keyframes.isNotEmpty() }) previewLocalMs / 160 else -1L
    val previewParameterKey = previewClip?.let { listOf(it.transform, it.effectSegments, animationFrame) }
    var appliedPreviewStructure by remember(player) { mutableStateOf<List<Any?>?>(null) }
    LaunchedEffect(player, currentClipIndex, previewStructureKey) {
        val clip = previewClip ?: return@LaunchedEffect
        // Only stack shape changes tear down the decoder/GL pipeline.
        delay(160)
        rebuildPreviewPipeline(player, ProjectCompositionFactory.previewVideoEffects(clip, previewLocalMs))
        appliedPreviewStructure = previewStructureKey
    }

    LaunchedEffect(player, currentClipIndex, previewStructureKey, previewParameterKey) {
        val clip = previewClip ?: return@LaunchedEffect
        if (appliedPreviewStructure != previewStructureKey) return@LaunchedEffect
        // Coalesce slider drags and keyframe ticks, and never overlap a structural rebuild.
        delay(if (animationFrame >= 0) 24 else 100)
        if (appliedPreviewStructure == previewStructureKey && player.playbackState != Player.STATE_IDLE) {
            runCatching { player.setVideoEffects(ProjectCompositionFactory.previewVideoEffects(clip, previewLocalMs)) }
        }
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
        EditorWorkspace(
            viewModel = viewModel,
            player = player,
            project = project,
            selection = selection,
            currentClipIndex = currentClipIndex,
            playerPositionMs = playerPositionMs,
            onAddClip = { addClip.launch(arrayOf("video/*")) },
            onEmptyLane = { clipId, startMs, category -> pendingSegment = PendingSegment(clipId, startMs, category) },
            onSeek = { position ->
                val targetIndex = clipIndexAt(project, position)
                currentClipIndex = targetIndex
                playerPositionMs = position
                if (project.clips.getOrNull(targetIndex)?.mediaMissing == true) {
                    player.pause()
                } else {
                    seekPreview(player, project, previewEntries, position)
                }
            },
            onAddVisualEffect = { clipId -> pendingSegment = PendingSegment(clipId, 0, EffectCategory.EFFECTS) },
            onAddAudioEffect = { clipId -> pendingSegment = PendingSegment(clipId, 0, EffectCategory.AUDIO) },
            onImportPreset = { importPreset.launch(arrayOf("application/json", "text/json", "text/plain")) },
            onExportPreset = { presetId ->
                val preset = project.presets.find { it.id == presetId }
                if (preset != null) {
                    pendingPresetExportId = presetId
                    val fileName = preset.name
                        .replace(Regex("[^A-Za-z0-9._-]+"), "-")
                        .trim('-')
                        .ifEmpty { "effect-preset" }
                    exportPreset.launch("$fileName.json")
                }
            },
            onReplaceMedia = { clipId ->
                pendingReplaceClipId = clipId
                replaceMedia.launch(arrayOf("video/*"))
            },
            modifier = Modifier.fillMaxSize().padding(padding),
            onSavePreset = { name, clipId ->
                scope.launch {
                    val thumbnail = playerView?.let { capturePresetThumbnail(context, it) }
                    viewModel.savePreset(name, clipId, thumbnail)
                }
            },
            onPlayerView = { playerView = it },
        )
    }

    pendingSegment?.let { pending ->
        EffectPicker(
            category = pending.category,
            onDismiss = { pendingSegment = null },
            onPick = { id -> viewModel.addSegment(pending.clipId, id); pendingSegment = null },
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
internal fun Timeline(
    project: EditProject,
    playheadMs: Long,
    selection: Selection?,
    modifier: Modifier = Modifier,
    compact: Boolean = false,
    onSeek: (Long) -> Unit,
    onClip: (String) -> Unit,
    onSegment: (String, String, EffectCategory) -> Unit,
    onEmptyLane: (String, Long, EffectCategory) -> Unit,
    onResize: (String, String, Long, Long) -> Unit,
) {
    val totalWidth = ((project.durationMs / 1_000f) * PIXELS_PER_SECOND).coerceAtLeast(360f).dp
    val scroll = rememberScrollState()
    val videoTrackHeight = if (compact) 32.dp else 46.dp
    val clipHeight = if (compact) 28.dp else 42.dp
    Column(modifier.horizontalScroll(scroll)) {
        Text("Video", Modifier.padding(start = 4.dp))
        Box(Modifier.requiredWidth(totalWidth).height(videoTrackHeight).pointerInput(project.durationMs) {
            detectTapGestures { offset -> onSeek((offset.x / density * 1_000 / PIXELS_PER_SECOND).toLong()) }
        }) {
            var startMs = 0L
            project.clips.forEachIndexed { index, clip ->
                val startDp = msToDp(startMs)
                val widthDp = msToDp(clip.durationMs).coerceAtLeast(2.dp)
                Box(
                    Modifier.offset(x = startDp).width(widthDp).height(clipHeight)
                        .background(if (index % 2 == 0) MaterialTheme.colorScheme.secondaryContainer else MaterialTheme.colorScheme.tertiaryContainer)
                        .clickable { onClip(clip.id) }.padding(4.dp),
                ) { Text(clip.displayName, maxLines = 1) }
                startMs += clip.durationMs
            }
            Playhead(playheadMs)
        }
        Lane("Effects", project, EffectCategory.EFFECTS, selection, compact, onSegment, onEmptyLane, onResize)
        Lane("Audio", project, EffectCategory.AUDIO, selection, compact, onSegment, onEmptyLane, onResize)
    }
}

@Composable
private fun Lane(
    title: String,
    project: EditProject,
    category: EffectCategory,
    selection: Selection?,
    compact: Boolean,
    onSegment: (String, String, EffectCategory) -> Unit,
    onEmpty: (String, Long, EffectCategory) -> Unit,
    onResize: (String, String, Long, Long) -> Unit,
) {
    Text(title, Modifier.padding(start = 4.dp))
    val totalWidth = ((project.durationMs / 1_000f) * PIXELS_PER_SECOND).coerceAtLeast(360f).dp
    Box(
        Modifier.requiredWidth(totalWidth).height(if (compact) 44.dp else 58.dp).background(MaterialTheme.colorScheme.surfaceVariant)
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
                    compact = compact,
                    resizable = false,
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
    compact: Boolean,
    resizable: Boolean,
    onSegment: (String, String, EffectCategory) -> Unit,
    onResize: (String, String, Long, Long) -> Unit,
) {
    val density = LocalDensity.current
    val color = if (selected) MaterialTheme.colorScheme.primary else MaterialTheme.colorScheme.primaryContainer
    Box(
        Modifier.offset(x = msToDp(globalStartMs), y = (row * (if (compact) 20 else 25)).dp)
            .width(msToDp(segment.durationMs).coerceAtLeast(24.dp)).height(if (compact) 19.dp else 24.dp)
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

internal fun seekGlobal(player: ExoPlayer, project: EditProject, globalMs: Long) {
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
private data class PreviewEntry(
    val mediaItem: MediaItem,
    val clipIndex: Int,
    val outputStartMs: Long,
    val durationMs: Long,
)

private fun buildPreviewEntries(project: EditProject): List<PreviewEntry> = buildList {
    project.clips.forEachIndexed { clipIndex, clip ->
        if (clip.mediaMissing) return@forEachIndexed
        val reversed = clip.effectSegments.any { it.enabled && it.effectId == "reverse_video" }
        val sliceMs = maxOf(100L, (clip.durationMs + 299L) / 300L)
        val sourceSlices = if (reversed) {
            buildList {
                var start = 0L
                while (start < clip.durationMs) {
                    val end = (start + sliceMs).coerceAtMost(clip.durationMs)
                    add(start until end)
                    start = end
                }
            }.asReversed()
        } else {
            listOf(0L until clip.durationMs)
        }
        var outputStart = 0L
        sourceSlices.forEach { slice ->
            val duration = slice.last - slice.first + 1
            val item = MediaItem.Builder()
                .setUri(clip.sourceUri)
                .setClippingConfiguration(
                    MediaItem.ClippingConfiguration.Builder()
                        .setStartPositionMs(clip.trimStartMs + slice.first)
                        .setEndPositionMs(clip.trimStartMs + slice.last + 1)
                        .build(),
                )
                .build()
            add(PreviewEntry(item, clipIndex, outputStart, duration))
            outputStart += duration
        }
    }
}
private fun clipIndexAt(project: EditProject, globalMs: Long): Int {
    var elapsed = 0L
    project.clips.forEachIndexed { index, clip ->
        if (globalMs < elapsed + clip.durationMs) return index
        elapsed += clip.durationMs
    }
    return project.clips.lastIndex
}


private fun seekPreview(
    player: ExoPlayer,
    project: EditProject,
    entries: List<PreviewEntry>,
    globalMs: Long,
) {
    var clipStart = 0L
    val clipIndex = project.clips.indexOfFirst { clip ->
        val found = globalMs < clipStart + clip.durationMs
        if (!found) clipStart += clip.durationMs
        found
    }.let { if (it == -1) project.clips.lastIndex else it }
    if (clipIndex < 0) return
    val clip = project.clips[clipIndex]
    val localMs = (globalMs - clipStart).coerceIn(0, clip.durationMs)
    val indexedEntry = entries.withIndex().firstOrNull { (_, entry) ->
        entry.clipIndex == clipIndex && localMs < entry.outputStartMs + entry.durationMs
    } ?: entries.withIndex().lastOrNull { it.value.clipIndex == clipIndex } ?: return
    player.seekTo(indexedEntry.index, (localMs - indexedEntry.value.outputStartMs).coerceAtLeast(0))
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

@OptIn(UnstableApi::class)
private suspend fun capturePresetThumbnail(context: Context, playerView: androidx.media3.ui.PlayerView): String? {
    val surface = playerView.videoSurfaceView ?: return null
    if (surface.width <= 0 || surface.height <= 0) return null
    val bitmap = when (surface) {
        is android.view.TextureView -> surface.bitmap
        is android.view.SurfaceView -> {
            val target = android.graphics.Bitmap.createBitmap(
                surface.width,
                surface.height,
                android.graphics.Bitmap.Config.ARGB_8888,
            )
            kotlin.coroutines.suspendCoroutine { continuation ->
                android.view.PixelCopy.request(
                    surface,
                    target,
                    { result ->
                        continuation.resume(
                            if (result == android.view.PixelCopy.SUCCESS) target else null,
                        )
                    },
                    android.os.Handler(android.os.Looper.getMainLooper()),
                )
            }
        }
        else -> null
    } ?: return null

    return withContext(Dispatchers.IO) {
        val directory = java.io.File(context.filesDir, "preset-thumbnails").apply { mkdirs() }
        val file = java.io.File(directory, "${java.util.UUID.randomUUID()}.jpg")
        java.io.FileOutputStream(file).use { output ->
            bitmap.compress(android.graphics.Bitmap.CompressFormat.JPEG, 88, output)
        }
        bitmap.recycle()
        file.absolutePath
    }
}
