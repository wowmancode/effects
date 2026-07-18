package dev.lec.effectapp

import androidx.activity.compose.rememberLauncherForActivityResult
import androidx.activity.result.contract.ActivityResultContracts
import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.Row
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.material3.Button
import androidx.compose.material3.MaterialTheme
import androidx.compose.material3.OutlinedTextField
import androidx.compose.material3.OutlinedButton
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.runtime.getValue
import androidx.compose.runtime.mutableStateOf
import androidx.compose.runtime.remember
import androidx.compose.runtime.setValue
import androidx.compose.ui.Modifier
import androidx.compose.ui.platform.LocalContext
import androidx.compose.ui.unit.dp
import dev.lec.effectapp.effects.validatePluginSource

@Composable
internal fun PluginSourceEditor(
    source: String,
    audio: Boolean,
    controls: Map<String, Float>,
    onApply: (String, Map<String, Float>) -> Unit,
) {
    val context = LocalContext.current
    var draft by remember(source) { mutableStateOf(source) }
    var importedControls by remember(source) { mutableStateOf<Map<String, Float>?>(null) }
    var fileMessage by remember(source) { mutableStateOf<String?>(null) }
    val error = remember(draft, audio) { validatePluginSource(draft, audio) }
    val importPlugin = rememberLauncherForActivityResult(ActivityResultContracts.OpenDocument()) { uri ->
        uri ?: return@rememberLauncherForActivityResult
        runCatching {
            val value = context.contentResolver.openInputStream(uri)?.bufferedReader()?.use { it.readText() }
                ?: error("Could not read plug-in file.")
            PluginFile.decode(value, audio).also { plugin ->
                validatePluginSource(plugin.source, audio)?.let { validation -> error(validation) }
            }
        }.onSuccess { plugin ->
            draft = plugin.source
            importedControls = plugin.controls.takeIf { it.isNotEmpty() }
            fileMessage = "Plug-in imported. Apply it to use the source and saved controls."
        }.onFailure { failure ->
            fileMessage = "Import failed: " + (failure.message ?: "invalid plug-in")
        }
    }
    val savePlugin = rememberLauncherForActivityResult(
        ActivityResultContracts.CreateDocument("application/json"),
    ) { uri ->
        uri ?: return@rememberLauncherForActivityResult
        runCatching {
            context.contentResolver.openOutputStream(uri)?.bufferedWriter()?.use { writer ->
                writer.write(PluginFile.encode(audio, draft, importedControls ?: controls))
            } ?: error("Could not write plug-in file.")
        }.onSuccess { fileMessage = "Plug-in saved." }
            .onFailure { failure -> fileMessage = "Save failed: " + (failure.message ?: "storage unavailable") }
    }
    Column(verticalArrangement = Arrangement.spacedBy(8.dp)) {
        Text("Sandboxed C-style plug-in", style = MaterialTheme.typography.titleSmall)
        if (audio) {
            Text("Writable: sample · Readable: sample, channel, time, sample_rate, control1…control8")
            Text("History: delay(milliseconds), pitch(semitones)")
            Text("Oscillators: sine(hz), square(hz), saw(hz), triangle(hz)")
        } else {
            Text("Writable: red, green, blue, alpha, x, y · controls: control1…control8")
            Text("Sampling: sample_red(x,y), sample_green, sample_blue, sample_alpha")
            Text("Relative sampling: offset_red(dx,dy), offset_green, offset_blue, offset_alpha")
            Text("Warp: mirror(value), pixelate(value,size)")
            Text("Blend: blend_difference, multiply, screen, overlay, add, subtract, lighten, darken")
        }
        Text("Math: sin, cos, tan, abs, floor, ceil, fract, sqrt, exp, log, pow, atan2, mod, min, max, clamp, mix, step, smoothstep.")
        Row(Modifier.fillMaxWidth(), horizontalArrangement = Arrangement.spacedBy(8.dp)) {
            OutlinedButton(
                onClick = { draft = if (audio) AUDIO_CHORUS_TEMPLATE else VIDEO_WARP_TEMPLATE },
                modifier = Modifier.weight(1f),
            ) { Text(if (audio) "Chorus" else "Warp") }
            OutlinedButton(
                onClick = { draft = if (audio) AUDIO_PITCH_TEMPLATE else VIDEO_COMPOSITE_TEMPLATE },
                modifier = Modifier.weight(1f),
            ) { Text(if (audio) "Pitch" else "Composite") }
        }
        Text(if (audio) "Temporary variables: temp1…temp16" else "Temporary variables: temp1…temp16 · dimensions: width, height, aspect")
        Text("Logic: less, greater, equal, select · procedural: noise")
        Text("No loops, pointers, files, network, or native calls.")
        OutlinedTextField(
            value = draft,
            onValueChange = { draft = it },
            label = { Text("Plug-in source") },
            minLines = 8,
            maxLines = 16,
            modifier = Modifier.fillMaxWidth(),
        )
        fileMessage?.let { message ->
            val failed = message.startsWith("Import failed") || message.startsWith("Save failed")
            Text(message, color = if (failed) MaterialTheme.colorScheme.error else MaterialTheme.colorScheme.primary)
        }
        Row(Modifier.fillMaxWidth(), horizontalArrangement = Arrangement.spacedBy(8.dp)) {
            OutlinedButton(
                onClick = { importPlugin.launch(arrayOf("application/json", "text/plain", "application/octet-stream")) },
                modifier = Modifier.weight(1f),
            ) { Text("Import plug-in") }
            OutlinedButton(
                onClick = { savePlugin.launch(if (audio) "audio-effect.lecplugin.json" else "video-effect.lecplugin.json") },
                enabled = error == null,
                modifier = Modifier.weight(1f),
            ) { Text("Save plug-in") }
        }
        if (error != null) {
            Text(error, color = MaterialTheme.colorScheme.error)
        } else {
            Text("Source is valid.", color = MaterialTheme.colorScheme.primary)
        }
        Button(
            onClick = { onApply(draft, importedControls ?: controls); importedControls = null },
            enabled = error == null && (draft != source || importedControls != null),
            modifier = Modifier.fillMaxWidth(),
        ) {
            Text("Apply plug-in")
        }
    }
}

private const val VIDEO_WARP_TEMPLATE = """
x = x + sin(y * 30.0 + time * control2) * control1 * 0.05;
red = sample_red(x, y);
green = sample_green(x, y);
blue = sample_blue(x, y);
"""

private const val VIDEO_COMPOSITE_TEMPLATE = """
red = blend_difference(red, offset_red(control2 * 0.05, 0.0), control1);
green = blend_difference(green, offset_green(control2 * 0.05, 0.0), control1);
blue = blend_difference(blue, offset_blue(control2 * 0.05, 0.0), control1);
"""

private const val AUDIO_CHORUS_TEMPLATE = """
sample = mix(sample, delay(18.0 + sine(control2) * control1 * 8.0), 0.5);
"""

private const val AUDIO_PITCH_TEMPLATE = """
sample = mix(sample, pitch(control2 * 12.0), clamp(control1, 0.0, 1.0));
"""
