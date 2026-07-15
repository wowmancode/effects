package dev.lec.effectapp

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
import androidx.compose.ui.unit.dp
import dev.lec.effectapp.effects.validatePluginSource

@Composable
internal fun PluginSourceEditor(
    source: String,
    audio: Boolean,
    onApply: (String) -> Unit,
) {
    var draft by remember(source) { mutableStateOf(source) }
    val error = remember(draft, audio) { validatePluginSource(draft, audio) }
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
        Text("Math: sin, cos, abs, floor, fract, sqrt, pow, mod, min, max, clamp, mix, step, smoothstep.")
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
        Text("No loops, pointers, files, network, or native calls.")
        OutlinedTextField(
            value = draft,
            onValueChange = { draft = it },
            label = { Text("Plug-in source") },
            minLines = 8,
            maxLines = 16,
            modifier = Modifier.fillMaxWidth(),
        )
        if (error != null) {
            Text(error, color = MaterialTheme.colorScheme.error)
        } else {
            Text("Source is valid.", color = MaterialTheme.colorScheme.primary)
        }
        Button(
            onClick = { onApply(draft) },
            enabled = error == null && draft != source,
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
