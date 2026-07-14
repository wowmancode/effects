package dev.lec.effectapp

import android.graphics.BitmapFactory
import androidx.compose.foundation.Image
import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Box
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.Row
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.height
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.layout.width
import androidx.compose.material3.AlertDialog
import androidx.compose.material3.MaterialTheme
import androidx.compose.material3.OutlinedButton
import androidx.compose.material3.OutlinedTextField
import androidx.compose.material3.Text
import androidx.compose.material3.TextButton
import androidx.compose.runtime.Composable
import androidx.compose.runtime.getValue
import androidx.compose.runtime.mutableStateOf
import androidx.compose.runtime.remember
import androidx.compose.runtime.setValue
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.graphics.asImageBitmap
import androidx.compose.ui.layout.ContentScale
import androidx.compose.ui.unit.dp
import dev.lec.effectapp.model.EditProject

@Composable
internal fun PresetPanel(
    project: EditProject,
    targetClipId: String?,
    onSave: (String, String) -> Unit,
    onApply: (String, String) -> Unit,
    onRemove: (String) -> Unit,
) {
    var search by remember { mutableStateOf("") }
    var namingPreset by remember { mutableStateOf(false) }
    var presetName by remember { mutableStateOf("") }
    Text("Presets", style = MaterialTheme.typography.titleMedium)
    Text("Presets save the current clip's complete video and audio effect stacks.")
    OutlinedTextField(
        value = search,
        onValueChange = { search = it },
        label = { Text("Search presets") },
        singleLine = true,
        modifier = Modifier.fillMaxWidth(),
    )
    OutlinedButton(
        onClick = { presetName = ""; namingPreset = true },
        enabled = targetClipId != null,
        modifier = Modifier.fillMaxWidth(),
    ) {
        Text("+ Save current clip as preset")
    }
    if (targetClipId == null) {
        Text("Select or preview a clip before saving or applying a preset.")
    }

    val visiblePresets = project.presets.filter { it.name.contains(search, ignoreCase = true) }
    if (visiblePresets.isEmpty()) {
        Text(if (search.isBlank()) "No presets saved yet." else "No presets match “$search”.")
    }
    visiblePresets.forEach { preset ->
        Row(
            Modifier.fillMaxWidth().padding(vertical = 4.dp),
            horizontalArrangement = Arrangement.spacedBy(8.dp),
            verticalAlignment = Alignment.CenterVertically,
        ) {
            val bitmap = remember(preset.thumbnailPath) {
                preset.thumbnailPath?.let { path -> BitmapFactory.decodeFile(path) }
            }
            Box(Modifier.width(112.dp).height(72.dp), contentAlignment = Alignment.Center) {
                if (bitmap == null) {
                    Text("No preview")
                } else {
                    Image(
                        bitmap = bitmap.asImageBitmap(),
                        contentDescription = "${preset.name} preview",
                        contentScale = ContentScale.Crop,
                        modifier = Modifier.matchParentSize(),
                    )
                }
            }
            Column(Modifier.weight(1f)) {
                Text(preset.name, style = MaterialTheme.typography.titleSmall)
                Text("${preset.effectSegments.size} video · ${preset.audioSegments.size} audio")
                Row(horizontalArrangement = Arrangement.spacedBy(4.dp)) {
                    OutlinedButton(
                        onClick = { targetClipId?.let { onApply(preset.id, it) } },
                        enabled = targetClipId != null,
                    ) { Text("Apply") }
                    TextButton(onClick = { onRemove(preset.id) }) { Text("Delete") }
                }
            }
        }
    }

    if (namingPreset) {
        AlertDialog(
            onDismissRequest = { namingPreset = false },
            title = { Text("Save preset") },
            text = {
                OutlinedTextField(
                    value = presetName,
                    onValueChange = { presetName = it },
                    label = { Text("Preset name") },
                    singleLine = true,
                )
            },
            confirmButton = {
                TextButton(
                    onClick = {
                        targetClipId?.let { onSave(presetName, it) }
                        namingPreset = false
                    },
                    enabled = targetClipId != null,
                ) { Text("Save") }
            },
            dismissButton = { TextButton(onClick = { namingPreset = false }) { Text("Cancel") } },
        )
    }
}
