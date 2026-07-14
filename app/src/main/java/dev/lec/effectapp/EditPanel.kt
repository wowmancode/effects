package dev.lec.effectapp

import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.Row
import androidx.compose.foundation.layout.RowScope
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.rememberScrollState
import androidx.compose.foundation.verticalScroll
import androidx.compose.material3.Button
import androidx.compose.material3.MaterialTheme
import androidx.compose.material3.OutlinedButton
import androidx.compose.material3.Slider
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.runtime.getValue
import androidx.compose.runtime.mutableStateOf
import androidx.compose.runtime.remember
import androidx.compose.runtime.setValue
import androidx.compose.ui.Modifier
import androidx.compose.ui.unit.dp
import dev.lec.effectapp.effects.EffectCategory
import dev.lec.effectapp.effects.EffectRegistry
import dev.lec.effectapp.model.Clip
import dev.lec.effectapp.model.EditProject

@Composable
fun EditPanel(
    viewModel: EditorViewModel,
    project: EditProject,
    selection: Selection?,
    modifier: Modifier = Modifier,
    onAddVisualEffect: (String) -> Unit,
) {
    var activeCategory by remember(selection) { mutableStateOf(selection?.category ?: EffectCategory.EFFECTS) }
    Column(modifier.fillMaxSize().padding(8.dp)) {
        Row(Modifier.fillMaxWidth(), horizontalArrangement = Arrangement.spacedBy(8.dp)) {
            CategoryButton("Effects", EffectCategory.EFFECTS, activeCategory) { activeCategory = it }
            CategoryButton("Transform", EffectCategory.TRANSFORM, activeCategory) { activeCategory = it }
            CategoryButton("Audio", EffectCategory.AUDIO, activeCategory) { activeCategory = it }
        }
        Column(Modifier.weight(1f).verticalScroll(rememberScrollState()).padding(top = 8.dp)) {
            val selectedClip = selection?.let { selected -> project.clips.find { it.id == selected.clipId } }
            when {
                selection == null -> Text("Select a clip to edit its effect stack.")
                activeCategory == EffectCategory.TRANSFORM && selectedClip != null -> TransformEditor(viewModel, selectedClip)
                activeCategory == EffectCategory.EFFECTS && selectedClip != null && selection.segmentId == null -> {
                    VisualEffectStack(viewModel, selectedClip, onAddVisualEffect)
                }
                selectedClip != null && selection.segmentId != null -> {
                    val segment = (selectedClip.effectSegments + selectedClip.audioSegments).find { it.id == selection.segmentId }
                    val effect = segment?.let { EffectRegistry.byId(it.effectId) }
                    if (segment == null || effect == null || effect.category != activeCategory) {
                        Text("Select an item from the ${activeCategory.name.lowercase()} stack.")
                    } else {
                        val stack = if (activeCategory == EffectCategory.AUDIO) selectedClip.audioSegments else selectedClip.effectSegments
                        val stackIndex = stack.indexOfFirst { it.id == segment.id }
                        Text(effect.displayName, style = MaterialTheme.typography.titleMedium)
                        Text("Clip: ${selectedClip.displayName}")
                        if (activeCategory == EffectCategory.EFFECTS) Text("Applies to the entire clip")
                        else Text("${formatTime(segment.startMs)} – ${formatTime(segment.endMs)}")
                        Text("Stack position ${stackIndex + 1} of ${stack.size} · later effects render on top")
                        Row(Modifier.fillMaxWidth(), horizontalArrangement = Arrangement.spacedBy(8.dp)) {
                            OutlinedButton(
                                onClick = { viewModel.moveSelectedSegment(-1) },
                                enabled = stackIndex > 0,
                                modifier = Modifier.weight(1f),
                            ) { Text("Move earlier") }
                            OutlinedButton(
                                onClick = { viewModel.moveSelectedSegment(1) },
                                enabled = stackIndex in 0 until stack.lastIndex,
                                modifier = Modifier.weight(1f),
                            ) { Text("Move later") }
                        }
                        effect.params.forEach { parameter ->
                            ParameterSlider(parameter.displayName, segment.params[parameter.id] ?: parameter.default, parameter.min..parameter.max) { value ->
                                viewModel.updateSegment(selectedClip.id, segment.id) {
                                    it.copy(params = it.params + (parameter.id to value))
                                }
                            }
                        }
                        Row(Modifier.fillMaxWidth(), horizontalArrangement = Arrangement.spacedBy(8.dp)) {
                            if (activeCategory == EffectCategory.EFFECTS) {
                                OutlinedButton(
                                    onClick = { onAddVisualEffect(selectedClip.id) },
                                    modifier = Modifier.weight(1f),
                                ) { Text("+ Stack effect") }
                            }
                            OutlinedButton(
                                onClick = viewModel::removeSelectedSegment,
                                modifier = Modifier.weight(1f),
                            ) { Text("Remove") }
                        }
                    }
                }
                activeCategory == EffectCategory.EFFECTS && selectedClip != null -> {
                    VisualEffectStack(viewModel, selectedClip, onAddVisualEffect)
                }
                else -> Text("Select an item in the ${activeCategory.name.lowercase()} lane.")
            }
        }
    }
}

@Composable
private fun VisualEffectStack(viewModel: EditorViewModel, clip: Clip, onAddVisualEffect: (String) -> Unit) {
    Text("${clip.displayName} · effect stack", style = MaterialTheme.typography.titleMedium)
    Text("Every effect applies to the entire clip. Add and stack as many as your device can preview.")
    OutlinedButton(onClick = { onAddVisualEffect(clip.id) }) { Text("+ Add effect") }
    if (clip.effectSegments.isEmpty()) {
        Text("No effects yet.")
    } else {
        clip.effectSegments.forEachIndexed { index, segment ->
            val name = EffectRegistry.byId(segment.effectId)?.displayName ?: segment.effectId
            OutlinedButton(
                onClick = { viewModel.selectSegment(clip.id, segment.id, EffectCategory.EFFECTS) },
                modifier = Modifier.fillMaxWidth(),
            ) { Text("${index + 1}. $name") }
        }
    }
}

@Composable
private fun TransformEditor(viewModel: EditorViewModel, clip: Clip) {
    Text("Clip transform", style = MaterialTheme.typography.titleMedium)
    ParameterSlider("Scale", clip.transform.scale, 0.25f..4f) {
        viewModel.updateTransform(clip.id, clip.transform.copy(scale = it))
    }
    ParameterSlider("Rotation", clip.transform.rotationDegrees, -180f..180f) {
        viewModel.updateTransform(clip.id, clip.transform.copy(rotationDegrees = it))
    }
    ParameterSlider("Horizontal offset", clip.transform.offsetX, -1f..1f) {
        viewModel.updateTransform(clip.id, clip.transform.copy(offsetX = it))
    }
    ParameterSlider("Vertical offset", clip.transform.offsetY, -1f..1f) {
        viewModel.updateTransform(clip.id, clip.transform.copy(offsetY = it))
    }
}

@Composable
private fun RowScope.CategoryButton(
    label: String,
    category: EffectCategory,
    active: EffectCategory,
    onClick: (EffectCategory) -> Unit,
) {
    if (category == active) Button(onClick = { onClick(category) }, modifier = Modifier.weight(1f)) { Text(label) }
    else OutlinedButton(onClick = { onClick(category) }, modifier = Modifier.weight(1f)) { Text(label) }
}

@Composable
private fun ParameterSlider(label: String, value: Float, range: ClosedFloatingPointRange<Float>, onChange: (Float) -> Unit) {
    Text("$label: ${"%.2f".format(value)}")
    Slider(value = value.coerceIn(range.start, range.endInclusive), onValueChange = onChange, valueRange = range)
}
