package dev.lec.effectapp

import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.Row
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.padding
import androidx.compose.material3.HorizontalDivider
import androidx.compose.material3.MaterialTheme
import androidx.compose.material3.OutlinedButton
import androidx.compose.material3.Text
import androidx.compose.material3.TextButton
import androidx.compose.runtime.Composable
import androidx.compose.runtime.collectAsState
import androidx.compose.runtime.getValue
import androidx.compose.runtime.mutableStateOf
import androidx.compose.runtime.remember
import androidx.compose.runtime.setValue
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.unit.dp
import dev.lec.effectapp.effects.EffectCategory
import dev.lec.effectapp.effects.EffectRegistry
import dev.lec.effectapp.model.Clip
import dev.lec.effectapp.model.OverlayKeyframe
import dev.lec.effectapp.model.OverlayValues

@Composable
internal fun OverlayEditor(
    viewModel: EditorViewModel,
    clip: Clip,
    localPlayheadMs: Long,
    onAddOverlay: (String, Boolean) -> Unit,
    onAddOverlayEffect: (String, String, EffectCategory) -> Unit,
) {
    HorizontalDivider(Modifier.padding(vertical = 12.dp))
    Text("Overlays", style = MaterialTheme.typography.titleMedium)
    Text("Image and video overlays can animate position, size, and opacity and have their own effect stacks.")
    Row(Modifier.fillMaxWidth(), horizontalArrangement = Arrangement.spacedBy(8.dp)) {
        OutlinedButton(onClick = { onAddOverlay(clip.id, false) }, modifier = Modifier.weight(1f)) {
            Text("+ Image")
        }
        OutlinedButton(onClick = { onAddOverlay(clip.id, true) }, modifier = Modifier.weight(1f)) {
            Text("+ Video")
        }
    }
    if (clip.overlays.isEmpty()) Text("No overlays on this clip yet.")
    val maxSeconds = (clip.durationMs / 1_000f).coerceAtLeast(0.1f)
    clip.overlays.forEachIndexed { index, overlay ->
        var editingKeyframeTime by remember(overlay.id) { mutableStateOf<Long?>(null) }
        val editingKeyframe = editingKeyframeTime?.let { time -> overlay.keyframes.find { it.timeMs == time } }
        val displayed = editingKeyframe?.values ?: OverlayValues(overlay.alpha, overlay.scale, overlay.offsetX, overlay.offsetY)

        Column(Modifier.fillMaxWidth().padding(top = 10.dp)) {
            Row(Modifier.fillMaxWidth(), verticalAlignment = Alignment.CenterVertically) {
                Text(
                    "${if (overlay.isVideo) "🎬" else "🖼"} ${overlay.displayName}",
                    Modifier.weight(1f),
                    style = MaterialTheme.typography.titleSmall,
                )
                TextButton(
                    onClick = { viewModel.moveOverlay(clip.id, overlay.id, -1) },
                    enabled = index > 0,
                ) { Text("Up") }
                TextButton(
                    onClick = { viewModel.moveOverlay(clip.id, overlay.id, 1) },
                    enabled = index < clip.overlays.lastIndex,
                ) { Text("Down") }
                TextButton(onClick = { viewModel.removeOverlay(clip.id, overlay.id) }) { Text("Delete") }
            }
            if (overlay.isVideo) {
                Text("The source video animates and loops during export. Preview uses its poster frame.", style = MaterialTheme.typography.bodySmall)
                OutlinedButton(
                    onClick = { viewModel.updateOverlay(clip.id, overlay.id) { it.copy(includeAudio = !it.includeAudio) } },
                    modifier = Modifier.fillMaxWidth(),
                ) { Text(if (overlay.includeAudio) "✓ Include overlay audio" else "Include overlay audio") }
            }

            Row(Modifier.fillMaxWidth(), horizontalArrangement = Arrangement.spacedBy(8.dp)) {
                OutlinedButton(
                    onClick = {
                        viewModel.addOverlayKeyframe(clip.id, overlay.id, localPlayheadMs)
                        editingKeyframeTime = localPlayheadMs
                    },
                    modifier = Modifier.weight(1f),
                ) { Text("+ Animation keyframe") }
                if (editingKeyframeTime != null) {
                    OutlinedButton(
                        onClick = { editingKeyframeTime = null },
                        modifier = Modifier.weight(1f),
                    ) { Text("Edit base") }
                }
            }
            Text(
                if (editingKeyframe == null) "Editing base values. Select or add a keyframe to edit animation."
                else "Editing keyframe at ${formatTime(editingKeyframe.timeMs)}",
                style = MaterialTheme.typography.bodySmall,
            )
            overlay.keyframes.forEach { keyframe ->
                Row(Modifier.fillMaxWidth(), horizontalArrangement = Arrangement.spacedBy(6.dp)) {
                    OutlinedButton(
                        onClick = { editingKeyframeTime = keyframe.timeMs },
                        modifier = Modifier.weight(1f),
                    ) { Text(if (editingKeyframeTime == keyframe.timeMs) "◆ ${formatTime(keyframe.timeMs)}" else "◇ ${formatTime(keyframe.timeMs)}") }
                    TextButton(onClick = {
                        viewModel.removeOverlayKeyframe(clip.id, overlay.id, keyframe.timeMs)
                        if (editingKeyframeTime == keyframe.timeMs) editingKeyframeTime = null
                    }) { Text("Delete") }
                }
            }

            fun updateBaseOrKeyframe(update: (OverlayKeyframe) -> OverlayKeyframe, updateBase: () -> Unit) {
                val time = editingKeyframeTime
                if (time == null) updateBase()
                else viewModel.updateOverlayKeyframe(clip.id, overlay.id, time, update)
            }

            ParameterSlider("Opacity", displayed.alpha, 0f..1f) { value ->
                updateBaseOrKeyframe({ it.copy(alpha = value) }) {
                    viewModel.updateOverlay(clip.id, overlay.id) { it.copy(alpha = value) }
                }
            }
            ParameterSlider("Size", displayed.scale, 0.1f..3f) { value ->
                updateBaseOrKeyframe({ it.copy(scale = value) }) {
                    viewModel.updateOverlay(clip.id, overlay.id) { it.copy(scale = value) }
                }
            }
            ParameterSlider("Horizontal position", displayed.offsetX, -1f..1f) { value ->
                updateBaseOrKeyframe({ it.copy(offsetX = value) }) {
                    viewModel.updateOverlay(clip.id, overlay.id) { it.copy(offsetX = value) }
                }
            }
            ParameterSlider("Vertical position", displayed.offsetY, -1f..1f) { value ->
                updateBaseOrKeyframe({ it.copy(offsetY = value) }) {
                    viewModel.updateOverlay(clip.id, overlay.id) { it.copy(offsetY = value) }
                }
            }
            ParameterSlider("Start (seconds)", overlay.startMs / 1_000f, 0f..maxSeconds) { value ->
                viewModel.updateOverlay(clip.id, overlay.id) { it.copy(startMs = (value * 1_000).toLong()) }
            }
            ParameterSlider("End (seconds)", overlay.endMs / 1_000f, 0f..maxSeconds) { value ->
                viewModel.updateOverlay(clip.id, overlay.id) { it.copy(endMs = (value * 1_000).toLong()) }
            }

            Text("Overlay effects", style = MaterialTheme.typography.titleSmall)
            Row(Modifier.fillMaxWidth(), horizontalArrangement = Arrangement.spacedBy(8.dp)) {
                OutlinedButton(
                    onClick = { onAddOverlayEffect(clip.id, overlay.id, EffectCategory.EFFECTS) },
                    modifier = Modifier.weight(1f),
                ) { Text("+ Video FX") }
                OutlinedButton(
                    onClick = { onAddOverlayEffect(clip.id, overlay.id, EffectCategory.AUDIO) },
                    enabled = overlay.isVideo && overlay.includeAudio,
                    modifier = Modifier.weight(1f),
                ) { Text("+ Audio FX") }
            }
            (overlay.effectSegments + overlay.audioSegments).forEachIndexed { _, segment ->
                val effect = EffectRegistry.byId(segment.effectId) ?: return@forEachIndexed
                val stack = if (effect.category == EffectCategory.AUDIO) overlay.audioSegments else overlay.effectSegments
                val stackIndex = stack.indexOfFirst { it.id == segment.id }
                Column(Modifier.fillMaxWidth().padding(top = 8.dp)) {
                    Row(Modifier.fillMaxWidth(), verticalAlignment = Alignment.CenterVertically) {
                        Text("${if (effect.category == EffectCategory.AUDIO) "Audio" else "Video"} ${stackIndex + 1}. ${effect.displayName}", Modifier.weight(1f))
                        TextButton(
                            onClick = { viewModel.moveOverlayEffect(clip.id, overlay.id, segment.id, -1) },
                            enabled = stackIndex > 0,
                        ) { Text("↑") }
                        TextButton(
                            onClick = { viewModel.moveOverlayEffect(clip.id, overlay.id, segment.id, 1) },
                            enabled = stackIndex in 0 until stack.lastIndex,
                        ) { Text("↓") }
                        TextButton(onClick = { viewModel.removeOverlayEffect(clip.id, overlay.id, segment.id) }) { Text("Remove") }
                    }
                    OverlayEffectControls(viewModel, clip.id, overlay.id, segment.id)
                }
            }
        }
    }
}

@Composable
private fun OverlayEffectControls(viewModel: EditorViewModel, clipId: String, overlayId: String, segmentId: String) {
    val project by viewModel.project.collectAsState()
    val overlay = project.clips.find { it.id == clipId }?.overlays?.find { it.id == overlayId } ?: return
    val segment = (overlay.effectSegments + overlay.audioSegments).find { it.id == segmentId } ?: return
    val effect = EffectRegistry.byId(segment.effectId) ?: return
    val updateParams: (Map<String, Float>) -> Unit = { params ->
        viewModel.updateOverlayEffect(clipId, overlayId, segmentId) { it.copy(params = params) }
    }
    val updateStrings: (Map<String, String>) -> Unit = { strings ->
        viewModel.updateOverlayEffect(clipId, overlayId, segmentId) { it.copy(stringParams = strings) }
    }

    when (effect.id) {
        "plugin_video", "plugin_audio" -> {
            PluginSourceEditor(
                source = segment.stringParams["source"].orEmpty(),
                audio = effect.category == EffectCategory.AUDIO,
                controls = segment.params,
            ) { source, controls ->
                viewModel.updateOverlayEffect(clipId, overlayId, segmentId) {
                    it.copy(stringParams = it.stringParams + ("source" to source), params = it.params + controls)
                }
            }
            EffectParameterControls(effect, segment.params, updateParams)
        }
        "split_pitch" -> SplitPitchEditor(segment.params, updateParams)
        "vocoder_custom" -> {
            CustomCarrierEditor(segment.stringParams, updateStrings)
            EffectParameterControls(effect, segment.params, updateParams)
        }
        "color_curves" -> ColorCurvesEditor(segment.params, updateParams)
        "gradient_map" -> GradientMapEditor(segment.params, updateParams)
        "mirror" -> MirrorEditor(segment.params, updateParams)
        "displacement_map" -> {
            DisplacementMapEditor(segment.stringParams, updateStrings)
            EffectParameterControls(effect, segment.params, updateParams)
        }
        "custom_lut" -> {
            CustomLutEditor(segment.stringParams, updateStrings)
            EffectParameterControls(effect, segment.params, updateParams)
        }
        else -> EffectParameterControls(effect, segment.params, updateParams)
    }
}
