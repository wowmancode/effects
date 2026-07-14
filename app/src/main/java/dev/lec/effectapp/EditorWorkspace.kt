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
import androidx.compose.material3.HorizontalDivider
import androidx.compose.material3.MaterialTheme
import androidx.compose.material3.OutlinedButton
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
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
    modifier: Modifier = Modifier,
) {
    BoxWithConstraints(modifier) {
        val landscape = maxWidth > maxHeight
        if (landscape) {
            Row(Modifier.fillMaxSize()) {
                Column(Modifier.weight(0.46f).fillMaxHeight()) {
                    PreviewPane(
                        player = player,
                        project = project,
                        currentClipIndex = currentClipIndex,
                        onAddClip = onAddClip,
                        modifier = Modifier.fillMaxWidth().weight(1f),
                    )
                    HorizontalDivider()
                    EditorTimeline(
                        viewModel = viewModel,
                        player = player,
                        project = project,
                        selection = selection,
                        playerPositionMs = playerPositionMs,
                        compact = true,
                        onEmptyLane = onEmptyLane,
                        modifier = Modifier.fillMaxWidth().height(180.dp),
                    )
                }
                Box(Modifier.fillMaxHeight().width(1.dp).background(MaterialTheme.colorScheme.outlineVariant))
                EditPanel(
                    viewModel = viewModel,
                    project = project,
                    selection = selection,
                    modifier = Modifier.weight(0.54f).fillMaxHeight(),
                    onAddVisualEffect = onAddVisualEffect,
                    onAddAudioEffect = onAddAudioEffect,
                )
            }
        } else {
            Column(Modifier.fillMaxSize()) {
                PreviewPane(
                    player = player,
                    project = project,
                    currentClipIndex = currentClipIndex,
                    onAddClip = onAddClip,
                    modifier = Modifier.fillMaxWidth().weight(0.30f),
                )
                EditorTimeline(
                    viewModel = viewModel,
                    player = player,
                    project = project,
                    selection = selection,
                    playerPositionMs = playerPositionMs,
                    compact = false,
                    onEmptyLane = onEmptyLane,
                    modifier = Modifier.fillMaxWidth().height(210.dp),
                )
                HorizontalDivider()
                EditPanel(
                    viewModel = viewModel,
                    project = project,
                    selection = selection,
                    modifier = Modifier.fillMaxWidth().weight(0.70f),
                    onAddVisualEffect = onAddVisualEffect,
                    onAddAudioEffect = onAddAudioEffect,
                )
            }
        }
    }
}

@Composable
private fun EditorTimeline(
    viewModel: EditorViewModel,
    player: ExoPlayer,
    project: EditProject,
    selection: Selection?,
    playerPositionMs: Long,
    compact: Boolean,
    onEmptyLane: (String, Long, EffectCategory) -> Unit,
    modifier: Modifier,
) {
    Timeline(
        project = project,
        playheadMs = playerPositionMs,
        selection = selection,
        modifier = modifier,
        compact = compact,
        onSeek = { globalMs -> seekGlobal(player, project, globalMs) },
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
    modifier: Modifier = Modifier,
) {
    Column(modifier) {
        AndroidView(
            factory = { PlayerView(it).apply { this.player = player; useController = true } },
            modifier = Modifier.fillMaxWidth().weight(1f),
            update = { it.player = player },
        )
        Row(
            Modifier.fillMaxWidth().padding(horizontal = 8.dp),
            verticalAlignment = Alignment.CenterVertically,
        ) {
            Text(
                "Clip ${if (project.clips.isEmpty()) 0 else currentClipIndex + 1}/${project.clips.size}",
                Modifier.weight(1f),
            )
            OutlinedButton(onClick = onAddClip) { Text("+ Clip") }
        }
    }
}
