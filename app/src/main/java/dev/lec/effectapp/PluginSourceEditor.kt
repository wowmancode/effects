package dev.lec.effectapp

import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.material3.Button
import androidx.compose.material3.MaterialTheme
import androidx.compose.material3.OutlinedTextField
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
            Text("Writable: sample · Readable: sample, channel, time, sample_rate")
            Text("Example: sample = sample * sin(time * 12.0);")
        } else {
            Text("Writable: red, green, blue, alpha · Readable: those plus x, y, time")
            Text("Example: red = 1.0 - red;")
        }
        Text("Functions: sin, cos, abs, min, max, clamp, mix. No loops, pointers, files, network, or native calls.")
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
