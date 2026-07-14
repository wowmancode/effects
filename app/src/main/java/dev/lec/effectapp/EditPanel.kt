package dev.lec.effectapp

import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.Row
import androidx.compose.foundation.layout.RowScope
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.layout.weight
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
import dev.lec.effectapp.model.EditProject

@Composable
fun EditPanel(viewModel: EditorViewModel, project: EditProject, selection: Selection?, modifier: Modifier = Modifier) {
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
                selection == null -> Text("Select a clip or a timeline segment to edit it.")
                activeCategory == EffectCategory.TRANSFORM && selectedClip != null -> {
                    Text("Clip transform", style = MaterialTheme.typography.titleMedium)
                    ParameterSlider("Scale", selectedClip.transform.scale, 0.25f..4f) {
                        viewModel.updateTransform(selectedClip.id, selectedClip.transform.copy(scale = it))
                    }
                    ParameterSlider("Rotation", selectedClip.transform.rotationDegrees, -180f..180f) {
                        viewModel.updateTransform(selectedClip.id, selectedClip.transform.copy(rotationDegrees = it))
                    }
                    ParameterSlider("Horizontal offset", selectedClip.transform.offsetX, -1f..1f) {
                        viewModel.updateTransform(selectedClip.id, selectedClip.transform.copy(offsetX = it))
                    }
                    ParameterSlider("Vertical offset", selectedClip.transform.offsetY, -1f..1f) {
                        viewModel.updateTransform(selectedClip.id, selectedClip.transform.copy(offsetY = it))
                    }
                }
                selectedClip != null && selection.segmentId != null -> {
                    val segment = (selectedClip.effectSegments + selectedClip.audioSegments).find { it.id == selection.segmentId }
                    val effect = segment?.let { EffectRegistry.byId(it.effectId) }
                    if (segment == null || effect == null || effect.category != activeCategory) {
                        Text("Select a ${activeCategory.name.lowercase()} segment in its timeline lane.")
                    } else {
                        Text(effect.displayName, style = MaterialTheme.typography.titleMedium)
                        Text("${formatTime(segment.startMs)} – ${formatTime(segment.endMs)}")
                        effect.params.forEach { parameter ->
                            ParameterSlider(parameter.displayName, segment.params[parameter.id] ?: parameter.default, parameter.min..parameter.max) { value ->
                                viewModel.updateSegment(selectedClip.id, segment.id) {
                                    it.copy(params = it.params + (parameter.id to value))
                                }
                            }
                        }
                        OutlinedButton(onClick = viewModel::removeSelectedSegment) { Text("Remove segment") }
                    }
                }
                else -> Text("Select an item in the ${activeCategory.name.lowercase()} lane.")
            }
        }
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
