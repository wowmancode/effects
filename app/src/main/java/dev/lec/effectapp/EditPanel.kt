package dev.lec.effectapp

import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.PaddingValues
import androidx.compose.foundation.layout.Row
import androidx.compose.foundation.layout.RowScope
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.layout.width
import androidx.compose.foundation.rememberScrollState
import androidx.compose.foundation.verticalScroll
import androidx.compose.material3.Button
import androidx.compose.material3.HorizontalDivider
import androidx.compose.material3.MaterialTheme
import androidx.compose.material3.OutlinedButton
import androidx.compose.material3.OutlinedTextField
import androidx.compose.material3.Slider
import androidx.compose.material3.Text
import androidx.compose.material3.TextButton
import androidx.compose.runtime.Composable
import androidx.compose.runtime.getValue
import androidx.compose.runtime.mutableFloatStateOf
import androidx.compose.runtime.mutableStateOf
import androidx.compose.runtime.remember
import androidx.compose.runtime.setValue
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.unit.dp
import dev.lec.effectapp.effects.EffectCategory
import dev.lec.effectapp.effects.EffectRegistry
import dev.lec.effectapp.effects.ParamKind
import dev.lec.effectapp.model.Clip
import dev.lec.effectapp.model.EditProject
import kotlin.random.Random

@Composable
fun EditPanel(
    viewModel: EditorViewModel,
    project: EditProject,
    selection: Selection?,
    playerPositionMs: Long,
    modifier: Modifier = Modifier,
    currentClipId: String?,
    onSavePreset: (String, String) -> Unit,
    onImportPreset: () -> Unit,
    onImportPresetZip: () -> Unit,
    onBackupPresetLibrary: () -> Unit,
    onRestorePresetLibrary: () -> Unit,
    onExportPreset: (String) -> Unit,
    onAddVisualEffect: (String) -> Unit,
    onAddAudioEffect: (String) -> Unit,
    onAddOverlay: (String, Boolean) -> Unit,
    onAddOverlayEffect: (String, String, EffectCategory) -> Unit,
) {
    var activeCategory by remember(selection) { mutableStateOf(selection?.category ?: EffectCategory.EFFECTS) }
    var presetsActive by remember { mutableStateOf(false) }
    Column(modifier.fillMaxSize().padding(8.dp)) {
        Row(Modifier.fillMaxWidth(), horizontalArrangement = Arrangement.spacedBy(8.dp)) {
            CategoryButton("Effects", EffectCategory.EFFECTS, activeCategory) { activeCategory = it; presetsActive = false }
            CategoryButton("Transform", EffectCategory.TRANSFORM, activeCategory) { activeCategory = it; presetsActive = false }
            CategoryButton("Audio", EffectCategory.AUDIO, activeCategory) { activeCategory = it; presetsActive = false }
            if (presetsActive) {
                Button(onClick = { presetsActive = true }, modifier = Modifier.weight(1f), contentPadding = TabButtonPadding) { tabLabel("Presets") }
            } else {
                OutlinedButton(onClick = { presetsActive = true }, modifier = Modifier.weight(1f), contentPadding = TabButtonPadding) { tabLabel("Presets") }
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
                    onImport = onImportPreset,
                    onImportZip = onImportPresetZip,
                    onExport = onExportPreset,
                    onBackupLibrary = onBackupPresetLibrary,
                    onRestoreLibrary = onRestorePresetLibrary,
                )
                selection == null -> Text("Select a clip to edit its effect stack.")
                activeCategory == EffectCategory.TRANSFORM && selectedClip != null -> {
                    TransformEditor(viewModel, selectedClip)
                    val clipStartMs = project.clips.takeWhile { it.id != selectedClip.id }.sumOf { it.durationMs }
                    val localPlayheadMs = (playerPositionMs - clipStartMs).coerceIn(0, selectedClip.durationMs)
                    OverlayEditor(viewModel, selectedClip, localPlayheadMs, onAddOverlay, onAddOverlayEffect)
                }
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
                        val clipStartMs = project.clips.takeWhile { it.id != selectedClip.id }.sumOf { it.durationMs }
                        val localPlayheadMs = (playerPositionMs - clipStartMs).coerceIn(0, selectedClip.durationMs)
                        var editingKeyframeTime by remember(segment.id) { mutableStateOf<Long?>(null) }
                        val editingKeyframe = editingKeyframeTime?.let { time ->
                            segment.keyframes.find { it.timeMs == time }
                        }
                        val editorParams = editingKeyframe?.params ?: segment.params
                        val updateEditorParams: (Map<String, Float>) -> Unit = { params ->
                            val keyframeTime = editingKeyframeTime
                            if (keyframeTime == null) {
                                viewModel.updateSegment(selectedClip.id, segment.id) { it.copy(params = params) }
                            } else {
                                viewModel.updateKeyframe(selectedClip.id, segment.id, keyframeTime, params)
                            }
                        }
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
                        Text("Keyframes · values animate smoothly to the next keyframe")
                        OutlinedButton(
                            onClick = {
                                viewModel.addKeyframe(selectedClip.id, segment.id, localPlayheadMs)
                                editingKeyframeTime = localPlayheadMs
                            },
                            modifier = Modifier.fillMaxWidth(),
                        ) {
                            Text("+ Keyframe at ${formatTime(localPlayheadMs)}")
                        }
                        if (editingKeyframeTime == null) {
                            Text("Editing base values")
                        } else {
                            OutlinedButton(
                                onClick = { editingKeyframeTime = null },
                                modifier = Modifier.fillMaxWidth(),
                            ) {
                                Text("Editing ${formatTime(editingKeyframeTime ?: 0)} · switch to base")
                            }
                        }
                        segment.keyframes.forEach { keyframe ->
                            Row(
                                Modifier.fillMaxWidth(),
                                horizontalArrangement = Arrangement.spacedBy(8.dp),
                            ) {
                                OutlinedButton(
                                    onClick = { editingKeyframeTime = keyframe.timeMs },
                                    modifier = Modifier.weight(1f),
                                ) {
                                    Text(if (editingKeyframeTime == keyframe.timeMs) "◆ ${formatTime(keyframe.timeMs)}" else "◇ ${formatTime(keyframe.timeMs)}")
                                }
                                TextButton(
                                    onClick = {
                                        viewModel.removeKeyframe(selectedClip.id, segment.id, keyframe.timeMs)
                                        if (editingKeyframeTime == keyframe.timeMs) editingKeyframeTime = null
                                    },
                                ) { Text("Delete") }
                            }
                        }
                        when (effect.id) {
                            "plugin_video", "plugin_audio" -> {
                                PluginSourceEditor(
                                    source = segment.stringParams["source"].orEmpty(),
                                    audio = effect.id == "plugin_audio",
                                    controls = segment.params,
                                ) { source, controls ->
                                    viewModel.updateSegment(selectedClip.id, segment.id) {
                                        it.copy(
                                            stringParams = it.stringParams + ("source" to source),
                                            params = it.params + controls,
                                        )
                                    }
                                }
                                effect.params.forEach { parameter ->
                                    val value = editorParams[parameter.id] ?: parameter.default
                                    ParameterSlider(
                                        parameter.displayName,
                                        value,
                                        parameter.min..parameter.max,
                                    ) { updated ->
                                        updateEditorParams(editorParams + (parameter.id to updated))
                                    }
                                }
                            }
                            "color_curves" -> ColorCurvesEditor(editorParams) { params ->
                                updateEditorParams(params)
                            }
                            "gradient_map" -> GradientMapEditor(editorParams) { params ->
                                updateEditorParams(params)
                            }
                            "mirror" -> MirrorEditor(editorParams) { params ->
                                updateEditorParams(params)
                            }
                            "split_pitch" -> SplitPitchEditor(editorParams) { params ->
                                updateEditorParams(params)
                            }
                            "displacement_map" -> {
                                DisplacementMapEditor(segment.stringParams) { values ->
                                    viewModel.updateSegment(selectedClip.id, segment.id) { it.copy(stringParams = values) }
                                }
                                if (effect.id == "colorspace_hue_shift" || effect.id == "colorspace_invert") {
                                    ColorspaceEffectPicker(effect, editorParams, updateEditorParams)
                                    val hidden = if (effect.id == "colorspace_invert") setOf("colorspace", "red", "green", "blue") else setOf("colorspace")
                                    EffectParameterControls(effect.withoutControls(hidden), editorParams, updateEditorParams)
                                } else {
                                    EffectParameterControls(effect, editorParams, updateEditorParams)
                                }
                            }
                            else -> {
                                if (effect.id == "custom_lut") {
                                    CustomLutEditor(segment.stringParams) { values ->
                                        viewModel.updateSegment(selectedClip.id, segment.id) { it.copy(stringParams = values) }
                                    }
                                }
                                if (effect.id == "vocoder_custom") {
                                    CustomCarrierEditor(segment.stringParams) { values ->
                                        viewModel.updateSegment(selectedClip.id, segment.id) {
                                            it.copy(stringParams = values)
                                        }
                                    }
                                }
                                if (effect.id == "vocoder_lab") {
                                    OutlinedButton(
                                        onClick = { updateEditorParams(randomizeVocoderLabParams(effect, editorParams)) },
                                        modifier = Modifier.fillMaxWidth(),
                                    ) { Text("Randomize Vocoder Lab") }
                                    Text(
                                        "Three oscillators can each have their own shape, level, octave, and fine tune. Add sub, noise, up to seven unison voices with stereo spread, and use the LFO for pitch, filter, amplitude, and pan-style movement.",
                                        style = MaterialTheme.typography.bodySmall,
                                    )
                                }
                                EffectParameterControls(effect, editorParams, updateEditorParams)
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

private val TabButtonPadding = PaddingValues(horizontal = 6.dp, vertical = 4.dp)

@Composable
private fun tabLabel(label: String) {
    Text(label, maxLines = 1, style = MaterialTheme.typography.labelMedium)
}

@Composable
private fun RowScope.CategoryButton(
    label: String,
    category: EffectCategory,
    active: EffectCategory,
    onClick: (EffectCategory) -> Unit,
) {
    if (category == active) {
        Button(onClick = { onClick(category) }, modifier = Modifier.weight(1f), contentPadding = TabButtonPadding) { tabLabel(label) }
    } else {
        OutlinedButton(onClick = { onClick(category) }, modifier = Modifier.weight(1f), contentPadding = TabButtonPadding) { tabLabel(label) }
    }
}

internal fun randomizeVocoderLabParams(
    effect: dev.lec.effectapp.effects.LecEffect,
    current: Map<String, Float>,
): Map<String, Float> {
    val stepped = setOf("osc1_shape", "osc2_shape", "osc3_shape", "lfo_shape", "filter_mode", "bands", "unison_voices")
    return current + effect.params.associate { parameter ->
        val value = if (parameter.id in stepped) {
            Random.nextInt(parameter.min.toInt(), parameter.max.toInt() + 1).toFloat()
        } else {
            Random.nextFloat() * (parameter.max - parameter.min) + parameter.min
        }
        parameter.id to value
    }
}

private fun dev.lec.effectapp.effects.LecEffect.withoutControls(hidden: Set<String>): dev.lec.effectapp.effects.LecEffect {
    val base = this
    return object : dev.lec.effectapp.effects.LecEffect by base {
        override val params = base.params.filterNot { it.id in hidden }
    }
}



@Composable
private fun ColorspaceEffectPicker(effect: dev.lec.effectapp.effects.LecEffect, values: Map<String, Float>, onChange: (Map<String, Float>) -> Unit) {
    val choices = listOf("RGB", "HSV", "HSL", "YUV", "YCbCr", "YCoCg", "XYZ", "LAB", "CMY")
    val selected = (values["colorspace"] ?: 0f).toInt().coerceIn(0, choices.lastIndex)
    Text("Colorspace", style = MaterialTheme.typography.titleSmall)
    choices.chunked(3).forEachIndexed { row, group ->
        Row(Modifier.fillMaxWidth(), horizontalArrangement = Arrangement.spacedBy(6.dp)) {
            group.forEachIndexed { column, name ->
                val index = row * 3 + column
                if (index == selected) Button(onClick = {}, modifier = Modifier.weight(1f)) { Text(name) }
                else OutlinedButton(onClick = { onChange(values + ("colorspace" to index.toFloat())) }, modifier = Modifier.weight(1f)) { Text(name) }
            }
        }
    }
    if (effect.id == "colorspace_invert") {
        Text("Channels to invert", style = MaterialTheme.typography.titleSmall)
        Row(Modifier.fillMaxWidth(), horizontalArrangement = Arrangement.spacedBy(6.dp)) {
            listOf("red" to "R", "green" to "G", "blue" to "B").forEach { (id, label) ->
                val enabled = (values[id] ?: 1f) >= 0.5f
                if (enabled) Button(onClick = { onChange(values + (id to 0f)) }, modifier = Modifier.weight(1f)) { Text(label) }
                else OutlinedButton(onClick = { onChange(values + (id to 1f)) }, modifier = Modifier.weight(1f)) { Text(label) }
            }
        }
    }
}



@Composable
internal fun EffectParameterControls(
    effect: dev.lec.effectapp.effects.LecEffect,
    values: Map<String, Float>,
    onChange: (Map<String, Float>) -> Unit,
) {
    effect.params.forEach { parameter ->
        val value = values[parameter.id] ?: parameter.default
        if (parameter.kind == ParamKind.BOOLEAN) {
            BooleanParameterButton(parameter.displayName, value >= 0.5f) { enabled ->
                onChange(values + (parameter.id to if (enabled) 1f else 0f))
            }
        } else {
            ParameterSlider(parameter.displayName, value, parameter.min..parameter.max) { updated ->
                onChange(values + (parameter.id to updated))
            }
        }
    }
}

@Composable
internal fun ParameterSlider(label: String, value: Float, range: ClosedFloatingPointRange<Float>, onChange: (Float) -> Unit) {
    var sliderValue by remember(value, range.start, range.endInclusive) { mutableFloatStateOf(value) }
    var text by remember(value) { mutableStateOf(formatParam(value)) }
    Row(
        Modifier.fillMaxWidth(),
        horizontalArrangement = Arrangement.spacedBy(8.dp),
        verticalAlignment = Alignment.CenterVertically,
    ) {
        Text(label, Modifier.weight(1f))
        OutlinedTextField(
            value = text,
            onValueChange = { entry ->
                text = entry
                entry.toFloatOrNull()?.let { typed ->
                    val clamped = typed.coerceIn(range.start, range.endInclusive)
                    sliderValue = clamped
                    onChange(clamped)
                }
            },
            singleLine = true,
            modifier = Modifier.width(104.dp),
        )
    }
    Slider(
        value = sliderValue.coerceIn(range.start, range.endInclusive),
        onValueChange = { sliderValue = it; text = formatParam(it) },
        onValueChangeFinished = { onChange(sliderValue) },
        valueRange = range,
    )
}

/** Formats a slider value for the type-in field: whole numbers stay clean, decimals keep 3 places. */
internal fun formatParam(value: Float): String =
    if (value % 1f == 0f) {
        value.toInt().toString()
    } else {
        String.format(java.util.Locale.US, "%.3f", value).trimEnd('0').trimEnd('.')
    }

@Composable
private fun BooleanParameterButton(label: String, enabled: Boolean, onChange: (Boolean) -> Unit) {
    if (enabled) {
        Button(onClick = { onChange(false) }, modifier = Modifier.fillMaxWidth()) { Text("✓ $label") }
    } else {
        OutlinedButton(onClick = { onChange(true) }, modifier = Modifier.fillMaxWidth()) { Text(label) }
    }
}
