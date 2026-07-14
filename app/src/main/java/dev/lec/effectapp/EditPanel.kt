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
import androidx.compose.runtime.mutableFloatStateOf
import androidx.compose.runtime.mutableStateOf
import androidx.compose.runtime.remember
import androidx.compose.runtime.setValue
import androidx.compose.ui.Modifier
import androidx.compose.ui.unit.dp
import dev.lec.effectapp.effects.EffectCategory
import dev.lec.effectapp.effects.EffectRegistry
import dev.lec.effectapp.effects.ParamKind
import dev.lec.effectapp.model.Clip
import dev.lec.effectapp.model.EditProject

@Composable
fun EditPanel(
    viewModel: EditorViewModel,
    project: EditProject,
    selection: Selection?,
    modifier: Modifier = Modifier,
    currentClipId: String?,
    onSavePreset: (String, String) -> Unit,
    onAddVisualEffect: (String) -> Unit,
    onAddAudioEffect: (String) -> Unit,
) {
    var activeCategory by remember(selection) { mutableStateOf(selection?.category ?: EffectCategory.EFFECTS) }
    var presetsActive by remember { mutableStateOf(false) }
    Column(modifier.fillMaxSize().padding(8.dp)) {
        Row(Modifier.fillMaxWidth(), horizontalArrangement = Arrangement.spacedBy(8.dp)) {
            CategoryButton("Effects", EffectCategory.EFFECTS, activeCategory) { activeCategory = it; presetsActive = false }
            CategoryButton("Transform", EffectCategory.TRANSFORM, activeCategory) { activeCategory = it; presetsActive = false }
            CategoryButton("Audio", EffectCategory.AUDIO, activeCategory) { activeCategory = it; presetsActive = false }
            if (presetsActive) {
                Button(onClick = { presetsActive = true }, modifier = Modifier.weight(1f)) { Text("Presets") }
            } else {
                OutlinedButton(onClick = { presetsActive = true }, modifier = Modifier.weight(1f)) { Text("Presets") }
            }
        }
        Column(Modifier.weight(1f).verticalScroll(rememberScrollState()).padding(top = 8.dp)) {
            val selectedClip = selection?.let { selected -> project.clips.find { it.id == selected.clipId } }
            when {
                presetsActive -> PresetPanel(
                    project = project,
                    targetClipId = selection?.clipId ?: currentClipId,
                    onSave = onSavePreset,
                    onApply = viewModel::applyPreset,
                    onRemove = viewModel::removePreset,
                )
                selection == null -> Text("Select a clip to edit its effect stack.")
                activeCategory == EffectCategory.TRANSFORM && selectedClip != null -> TransformEditor(viewModel, selectedClip)
                activeCategory == EffectCategory.EFFECTS && selectedClip != null && selection.segmentId == null -> {
                    VisualEffectStack(viewModel, selectedClip, onAddVisualEffect)
                }
                activeCategory == EffectCategory.AUDIO && selectedClip != null && selection.segmentId == null -> {
                    AudioEffectStack(viewModel, selectedClip, onAddAudioEffect)
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
                        Text("Applies to the entire clip")
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
                        when (effect.id) {
                            "gradient_map" -> GradientMapEditor(segment.params) { params ->
                                viewModel.updateSegment(selectedClip.id, segment.id) { it.copy(params = params) }
                            }
                            "mirror" -> MirrorEditor(segment.params) { params ->
                                viewModel.updateSegment(selectedClip.id, segment.id) { it.copy(params = params) }
                            }
                            "split_pitch" -> SplitPitchEditor(segment.params) { params ->
                                viewModel.updateSegment(selectedClip.id, segment.id) { it.copy(params = params) }
                            }
                            else -> {
                                if (effect.id == "vocoder_custom") {
                                    CustomCarrierEditor(segment.stringParams) { values ->
                                        viewModel.updateSegment(selectedClip.id, segment.id) {
                                            it.copy(stringParams = values)
                                        }
                                    }
                                }
                                effect.params.forEach { parameter ->
                                    val value = segment.params[parameter.id] ?: parameter.default
                                    if (parameter.kind == ParamKind.BOOLEAN) {
                                        BooleanParameterButton(parameter.displayName, value >= 0.5f) { enabled ->
                                            viewModel.updateSegment(selectedClip.id, segment.id) {
                                                it.copy(params = it.params + (parameter.id to if (enabled) 1f else 0f))
                                            }
                                        }
                                    } else {
                                        ParameterSlider(
                                            parameter.displayName,
                                            value,
                                            parameter.min..parameter.max,
                                        ) { updated ->
                                            viewModel.updateSegment(selectedClip.id, segment.id) {
                                                it.copy(params = it.params + (parameter.id to updated))
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        Row(Modifier.fillMaxWidth(), horizontalArrangement = Arrangement.spacedBy(8.dp)) {
                            if (activeCategory == EffectCategory.EFFECTS) {
                                OutlinedButton(
                                    onClick = { onAddVisualEffect(selectedClip.id) },
                                    modifier = Modifier.weight(1f),
                                ) { Text("+ Stack effect") }
                            } else if (activeCategory == EffectCategory.AUDIO) {
                                OutlinedButton(
                                    onClick = { onAddAudioEffect(selectedClip.id) },
                                    modifier = Modifier.weight(1f),
                                ) { Text("+ Audio effect") }
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
    var sliderValue by remember(value, range.start, range.endInclusive) { mutableFloatStateOf(value) }
    Text("$label: ${"%.2f".format(sliderValue)}")
    Slider(
        value = sliderValue.coerceIn(range.start, range.endInclusive),
        onValueChange = { sliderValue = it },
        onValueChangeFinished = { onChange(sliderValue) },
        valueRange = range,
    )
}

@Composable
private fun BooleanParameterButton(label: String, enabled: Boolean, onChange: (Boolean) -> Unit) {
    if (enabled) {
        Button(onClick = { onChange(false) }, modifier = Modifier.fillMaxWidth()) { Text("✓ $label") }
    } else {
        OutlinedButton(onClick = { onChange(true) }, modifier = Modifier.fillMaxWidth()) { Text(label) }
    }
}
