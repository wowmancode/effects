package dev.lec.effectapp

import androidx.compose.foundation.background
import androidx.compose.foundation.layout.Box
import androidx.compose.foundation.layout.BoxWithConstraints
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.Row
import androidx.compose.foundation.layout.fillMaxHeight
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.height
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.layout.width
import androidx.compose.material3.Button
import androidx.compose.material3.HorizontalDivider
import androidx.compose.material3.MaterialTheme
import androidx.compose.material3.OutlinedButton
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.runtime.getValue
import androidx.compose.runtime.mutableIntStateOf
import androidx.compose.runtime.remember
import androidx.compose.runtime.setValue
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.unit.dp
import androidx.compose.ui.viewinterop.AndroidView
import androidx.media3.exoplayer.ExoPlayer
import androidx.media3.ui.PlayerView
import dev.lec.effectapp.effects.EffectCategory
import dev.lec.effectapp.model.EditProject

@Composable
internal fun EditorWorkspace(
    viewModel: EditorViewModel,
    player: ExoPlayer,
    project: EditProject,
    selection: Selection?,
    currentClipIndex: Int,
    playerPositionMs: Long,
    onAddClip: () -> Unit,
    onEmptyLane: (String, Long, EffectCategory) -> Unit,
    onAddVisualEffect: (String) -> Unit,
    onAddAudioEffect: (String) -> Unit,
    onSavePreset: (String, String) -> Unit,
    onImportPreset: () -> Unit,
    onExportPreset: (String) -> Unit,
    onReplaceMedia: (String) -> Unit,
    onPlayerView: (PlayerView) -> Unit,
    onSeek: (Long) -> Unit,
    modifier: Modifier = Modifier,
) {
    var landscapeTab by remember { mutableIntStateOf(0) }
    BoxWithConstraints(modifier) {
        val landscape = maxWidth > maxHeight
        if (landscape) {
            Row(Modifier.fillMaxSize()) {
                PreviewPane(
                    player = player,
                    project = project,
                    currentClipIndex = currentClipIndex,
                    onAddClip = onAddClip,
                    onReplaceMedia = onReplaceMedia,
                    onPlayerView = onPlayerView,
                    modifier = Modifier.weight(0.46f).fillMaxHeight(),
                )
                Box(Modifier.fillMaxHeight().width(1.dp).background(MaterialTheme.colorScheme.outlineVariant))
                Column(Modifier.weight(0.54f).fillMaxHeight()) {
                    Row(Modifier.fillMaxWidth().padding(horizontal = 8.dp)) {
                        if (landscapeTab == 0) {
                            Button(onClick = { landscapeTab = 0 }, modifier = Modifier.weight(1f)) { Text("Controls") }
                        } else {
                            OutlinedButton(onClick = { landscapeTab = 0 }, modifier = Modifier.weight(1f)) { Text("Controls") }
                        }
                        if (landscapeTab == 1) {
                            Button(onClick = { landscapeTab = 1 }, modifier = Modifier.weight(1f)) { Text("Timeline") }
                        } else {
                            OutlinedButton(onClick = { landscapeTab = 1 }, modifier = Modifier.weight(1f)) { Text("Timeline") }
                        }
                    }
                    if (landscapeTab == 0) {
                        EditPanel(
                            viewModel = viewModel,
                            project = project,
                            selection = selection,
                            playerPositionMs = playerPositionMs,
                            modifier = Modifier.fillMaxWidth().weight(1f),
                            currentClipId = project.clips.getOrNull(currentClipIndex)?.id,
                            onSavePreset = onSavePreset,
                            onImportPreset = onImportPreset,
                            onExportPreset = onExportPreset,
                            onAddVisualEffect = onAddVisualEffect,
                            onAddAudioEffect = onAddAudioEffect,
                        )
                    } else {
                        EditorTimeline(
                            viewModel = viewModel,
                            project = project,
                            selection = selection,
                            playerPositionMs = playerPositionMs,
                            compact = false,
                            onEmptyLane = onEmptyLane,
                            onSeek = onSeek,
                            modifier = Modifier.fillMaxWidth().weight(1f),
                        )
                    }
                }
            }
        } else {
            Column(Modifier.fillMaxSize()) {
                PreviewPane(
                    player = player,
                    project = project,
                    currentClipIndex = currentClipIndex,
                    onAddClip = onAddClip,
                    onReplaceMedia = onReplaceMedia,
                    modifier = Modifier.fillMaxWidth().weight(0.35f),
                    onPlayerView = onPlayerView,
                )
                EditorTimeline(
                    viewModel = viewModel,
                    project = project,
                    selection = selection,
                    playerPositionMs = playerPositionMs,
                    compact = false,
                    onEmptyLane = onEmptyLane,
                    onSeek = onSeek,
                    modifier = Modifier.fillMaxWidth().height(210.dp),
                )
                HorizontalDivider()
                EditPanel(
                    viewModel = viewModel,
                    project = project,
                    selection = selection,
                    playerPositionMs = playerPositionMs,
                    modifier = Modifier.fillMaxWidth().weight(0.65f),
                    onAddVisualEffect = onAddVisualEffect,
                    currentClipId = project.clips.getOrNull(currentClipIndex)?.id,
                    onSavePreset = onSavePreset,
                    onImportPreset = onImportPreset,
                    onExportPreset = onExportPreset,
                    onAddAudioEffect = onAddAudioEffect,
                )
            }
        }
    }
}

@Composable
private fun EditorTimeline(
    viewModel: EditorViewModel,
    project: EditProject,
    selection: Selection?,
    playerPositionMs: Long,
    compact: Boolean,
    onEmptyLane: (String, Long, EffectCategory) -> Unit,
    onSeek: (Long) -> Unit,
    modifier: Modifier,
) {
    Timeline(
        project = project,
        playheadMs = playerPositionMs,
        selection = selection,
        modifier = modifier,
        compact = compact,
        onSeek = onSeek,
        onClip = viewModel::selectClip,
        onSegment = viewModel::selectSegment,
        onEmptyLane = onEmptyLane,
        onResize = { clipId, segmentId, start, end ->
            viewModel.updateSegment(clipId, segmentId) { it.copy(startMs = start, endMs = end) }
        },
    )
}

@Composable
private fun PreviewPane(
    player: ExoPlayer,
    project: EditProject,
    currentClipIndex: Int,
    onAddClip: () -> Unit,
    onReplaceMedia: (String) -> Unit,
    onPlayerView: (PlayerView) -> Unit,
    modifier: Modifier = Modifier,
) {
    Column(modifier) {
        val currentClip = project.clips.getOrNull(currentClipIndex)
        if (currentClip?.mediaMissing == true) {
            Box(
                Modifier
                    .fillMaxWidth()
                    .weight(1f)
                    .background(Color.Red),
                contentAlignment = Alignment.Center,
            ) {
                Text(
                    "Media not found.",
                    color = Color.Black,
                    style = MaterialTheme.typography.headlineMedium,
                )
            }
        } else {
            AndroidView(
                factory = {
                    PlayerView(it).apply {
                        this.player = player
                        useController = true
                        onPlayerView(this)
                    }
                },
                modifier = Modifier.fillMaxWidth().weight(1f),
                update = { it.player = player },
            )
        }
        Row(
            Modifier.fillMaxWidth().padding(horizontal = 8.dp),
            verticalAlignment = Alignment.CenterVertically,
        ) {
            Text(
                "Clip ${if (project.clips.isEmpty()) 0 else currentClipIndex + 1}/${project.clips.size}",
                Modifier.weight(1f),
            )
            OutlinedButton(
                onClick = { currentClip?.let { onReplaceMedia(it.id) } },
                enabled = currentClip != null,
            ) {
                Text("Replace")
            }
            OutlinedButton(onClick = onAddClip) { Text("+ Clip") }
        }
    }
}
