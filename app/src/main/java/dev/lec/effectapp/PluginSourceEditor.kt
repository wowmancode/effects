package dev.lec.effectapp

import androidx.activity.compose.rememberLauncherForActivityResult
import androidx.activity.result.contract.ActivityResultContracts
import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.Row
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.material3.Checkbox
import androidx.compose.runtime.rememberCoroutineScope
import kotlinx.coroutines.Dispatchers
import kotlinx.coroutines.launch
import kotlinx.coroutines.withContext
import dev.lec.effectapp.effects.NativeCClient
import dev.lec.effectapp.model.NATIVE_C_PLUGIN_LANGUAGE
import dev.lec.effectapp.model.NativePluginPolicy
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
import dev.lec.effectapp.effects.PLUGIN_LANGUAGE_C_STYLE
import dev.lec.effectapp.effects.PLUGIN_LANGUAGE_GLSL
import dev.lec.effectapp.effects.validatePluginSource

@Composable
internal fun PluginSourceEditor(
    source: String,
    audio: Boolean,
    language: String,
    controls: Map<String, Float>,
    online: Boolean = false,
    onApply: (String, Map<String, Float>, String) -> Unit,
) {
    val context = LocalContext.current
    var draft by remember(source) { mutableStateOf(source) }
    var selectedLanguage by remember(source, language, audio) { mutableStateOf(language) }
    var importedControls by remember(source) { mutableStateOf<Map<String, Float>?>(null) }
    var fileMessage by remember(source) { mutableStateOf<String?>(null) }
    val scope = rememberCoroutineScope()
    var trusted by remember(draft, selectedLanguage) { mutableStateOf(false) }
    var compiling by remember { mutableStateOf(false) }
    val native = selectedLanguage == NATIVE_C_PLUGIN_LANGUAGE
    val error = remember(draft, audio, selectedLanguage) { validatePluginSource(draft, audio, selectedLanguage) }
    val importPlugin = rememberLauncherForActivityResult(ActivityResultContracts.OpenDocument()) { uri ->
        uri ?: return@rememberLauncherForActivityResult
        runCatching {
            val value = context.contentResolver.openInputStream(uri)?.bufferedReader()?.use { it.readText() }
                ?: error("Could not read plug-in file.")
            PluginFile.decode(value, audio, selectedLanguage).also { plugin ->
                validatePluginSource(plugin.source, audio, plugin.language)?.let { validation -> error(validation) }
            }
        }.onSuccess { plugin ->
            draft = plugin.source
            selectedLanguage = plugin.language
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
                writer.write(PluginFile.encode(audio, draft, importedControls ?: controls, selectedLanguage))
            } ?: error("Could not write plug-in file.")
        }.onSuccess { fileMessage = "Plug-in saved." }
            .onFailure { failure -> fileMessage = "Save failed: " + (failure.message ?: "storage unavailable") }
    }
    Column(verticalArrangement = Arrangement.spacedBy(8.dp)) {
        Text(
            if (native) "Trusted native C · offline only" else if (!audio && selectedLanguage == PLUGIN_LANGUAGE_GLSL) "Full GLSL fragment shader" else "Sandboxed C-style plug-in",
            style = MaterialTheme.typography.titleSmall,
        )
        Row(Modifier.fillMaxWidth(), horizontalArrangement = Arrangement.spacedBy(8.dp)) {
            OutlinedButton(onClick = { selectedLanguage = PLUGIN_LANGUAGE_C_STYLE; draft = if (audio) AUDIO_CHORUS_TEMPLATE else VIDEO_WARP_TEMPLATE }, enabled = !compiling) { Text("C-style") }
            if (!audio) OutlinedButton(onClick = { selectedLanguage = PLUGIN_LANGUAGE_GLSL; draft = GLSL_WARP_TEMPLATE }, enabled = !compiling) { Text("GLSL") }
            OutlinedButton(onClick = { selectedLanguage = NATIVE_C_PLUGIN_LANGUAGE; draft = if (audio) NATIVE_AUDIO_TEMPLATE else NATIVE_VIDEO_TEMPLATE }, enabled = !online && !compiling) { Text("Native C") }
        }
        if (native) {
            Text(NativePluginPolicy.WARNING, color = MaterialTheme.colorScheme.error, style = MaterialTheme.typography.titleMedium)
            Text("C runs with this app’s granted permissions, including access to its files and network. It can crash or hang the worker. This does not grant root access. Native C is unavailable in online rooms.")
            Text("API: float PCM audio or RGBA8 video (bottom row first), time in seconds, controls[0…7], and 64 KiB of zeroed persistent state. Optional lec_destroy(void *state). Includes: lec_plugin.h, math.h, stdlib.h, string.h, stdint.h, stdio.h.")
            if (online) Text("Leave the online room to compile or run native C.", color = MaterialTheme.colorScheme.error)
        } else if (audio) {
            Text("Writable: sample · Readable: sample, channel, time, sample_rate, control1…control8")
            Text("History: delay(milliseconds), pitch(semitones)")
            Text("Oscillators: sine(hz), square(hz), saw(hz), triangle(hz)")
        } else if (selectedLanguage == PLUGIN_LANGUAGE_GLSL) {
            Text("Write a complete OpenGL ES fragment shader. Functions, loops, and conditionals are allowed.")
            Text("Required: void main() · optional input: uniform sampler2D uTexSampler + varying vec2 vTexSamplingCoord")
            Text("Optional uniforms: uTime seconds · uWidth/uHeight pixels · uControl1…uControl8")
        } else {
            Text("Writable: red, green, blue, alpha, x, y · controls: control1…control8")
            Text("Sampling: sample_red(x,y), sample_green, sample_blue, sample_alpha")
            Text("Relative sampling: offset_red(dx,dy), offset_green, offset_blue, offset_alpha")
            Text("Warp: mirror(value), pixelate(value,size)")
            Text("Blend: blend_difference, multiply, screen, overlay, add, subtract, lighten, darken")
        }
        if (selectedLanguage == PLUGIN_LANGUAGE_C_STYLE) {
            Text("Math: sin, cos, tan, abs, floor, ceil, fract, sqrt, exp, log, pow, atan2, mod, min, max, clamp, mix, step, smoothstep.")
            Text(if (audio) "Temporary variables: temp1…temp16" else "Temporary variables: temp1…temp16 · dimensions: width, height, aspect")
            Text("No loops, pointers, files, network, or native calls.")
        }
        if (!native) Row(Modifier.fillMaxWidth(), horizontalArrangement = Arrangement.spacedBy(8.dp)) {
            OutlinedButton(
                onClick = { draft = if (audio) AUDIO_CHORUS_TEMPLATE else if (selectedLanguage == PLUGIN_LANGUAGE_GLSL) GLSL_WARP_TEMPLATE else VIDEO_WARP_TEMPLATE },
                modifier = Modifier.weight(1f),
            ) { Text(if (audio) "Chorus" else "Warp") }
            OutlinedButton(
                onClick = { draft = if (audio) AUDIO_PITCH_TEMPLATE else if (selectedLanguage == PLUGIN_LANGUAGE_GLSL) GLSL_COLOR_TEMPLATE else VIDEO_COMPOSITE_TEMPLATE },
                modifier = Modifier.weight(1f),
            ) { Text(if (audio) "Pitch" else "Composite") }
        }

        OutlinedTextField(
            value = draft,
            onValueChange = { draft = it },
            enabled = !compiling,
            label = { Text("Plug-in source") },
            minLines = 8,
            maxLines = 16,
            modifier = Modifier.fillMaxWidth(),
        )
        fileMessage?.let { message ->
            val failed = message.startsWith("Import failed") || message.startsWith("Save failed") || message.startsWith("Compile failed")
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
            Text(if (native) "Ready to compile after you review and trust the code." else "Source is valid.", color = MaterialTheme.colorScheme.primary)
        }
        if (native) Row {
            Checkbox(checked = trusted, onCheckedChange = { trusted = it }, enabled = !online && !compiling)
            Text("I have reviewed this code and trust it to run with the app’s permissions.")
        }
        Button(
            onClick = {
                if (native) {
                    val code = draft
                    val values = importedControls ?: controls
                    compiling = true
                    scope.launch {
                        val result = withContext(Dispatchers.IO) { runCatching { NativeCClient.compileAndApprove(code, audio) } }
                        compiling = false
                        result.onSuccess {
                            onApply(code, values, NATIVE_C_PLUGIN_LANGUAGE)
                            importedControls = null
                            fileMessage = "Native C compiled and approved on this device."
                        }.onFailure { fileMessage = "Compile failed: ${it.message}" }
                    }
                } else { onApply(draft, importedControls ?: controls, selectedLanguage); importedControls = null }
            },
            enabled = error == null && !compiling && (if (native) trusted && !online else draft != source || selectedLanguage != language || importedControls != null),
            modifier = Modifier.fillMaxWidth(),
        ) {
            Text(if (compiling) "Compiling…" else if (native) "Compile and apply" else "Apply plug-in")
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

private const val GLSL_WARP_TEMPLATE = """
precision highp float;
uniform sampler2D uTexSampler;
uniform float uTime;
varying vec2 vTexSamplingCoord;
void main() {
  vec2 uv = vTexSamplingCoord;
  uv.x += sin(uv.y * 30.0 + uTime) * 0.03;
  gl_FragColor = texture2D(uTexSampler, uv);
}
"""

private const val GLSL_COLOR_TEMPLATE = """
precision highp float;
uniform sampler2D uTexSampler;
uniform float uControl1;
varying vec2 vTexSamplingCoord;
void main() {
  vec4 color = texture2D(uTexSampler, vTexSamplingCoord);
  color.rgb = mix(color.rgb, 1.0 - color.rgb, clamp(uControl1, 0.0, 1.0));
  gl_FragColor = color;
}
"""

private const val AUDIO_CHORUS_TEMPLATE = """
sample = mix(sample, delay(18.0 + sine(control2) * control1 * 8.0), 0.5);
"""

private const val AUDIO_PITCH_TEMPLATE = """
sample = mix(sample, pitch(control2 * 12.0), clamp(control1, 0.0, 1.0));
"""


private const val NATIVE_AUDIO_TEMPLATE = """
#include <lec_plugin.h>
void lec_audio(float *samples, int frames, int channels, int sample_rate,
               double time, const float controls[8], void *state) {
    for (int i = 0; i < frames * channels; ++i) {
        samples[i] *= controls[0];
    }
}
"""

private const val NATIVE_VIDEO_TEMPLATE = """
#include <lec_plugin.h>
void lec_video(unsigned char *rgba, int width, int height, int stride,
               double time, const float controls[8], void *state) {
    for (int y = 0; y < height; ++y) {
        for (int x = 0; x < width; ++x) {
            unsigned char *p = rgba + y * stride + x * 4;
            for (int c = 0; c < 3; ++c) p[c] = 255 - p[c];
        }
    }
}
"""
