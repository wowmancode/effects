package dev.lec.effectapp

import android.content.Intent
import androidx.activity.compose.rememberLauncherForActivityResult
import androidx.activity.result.contract.ActivityResultContracts
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.padding
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

@Composable
internal fun DisplacementMapEditor(values: Map<String, String>, onChange: (Map<String, String>) -> Unit) {
    val context = LocalContext.current
    val uri = values["map_uri"]
    val type = values["map_type"] ?: "image"
    var error by remember(uri) { mutableStateOf<String?>(null) }
    val picker = rememberLauncherForActivityResult(ActivityResultContracts.OpenDocument()) { selected ->
        selected ?: return@rememberLauncherForActivityResult
        runCatching {
            context.contentResolver.takePersistableUriPermission(selected, Intent.FLAG_GRANT_READ_URI_PERMISSION)
        }
        val selectedType = context.contentResolver.getType(selected).orEmpty()
        val mapType = if (selectedType.startsWith("video/")) "video" else "image"
        onChange(values + mapOf("map_uri" to selected.toString(), "map_type" to mapType))
        error = null
    }
    Text("Displacement source")
    Text(
        when {
            uri == null -> "Import a grayscale/color map. Mid-gray (128) leaves pixels in place."
            type == "video" -> "Video map selected. It loops with the clip; red controls X and green controls Y."
            else -> "Image map selected. Red controls X and green controls Y; 128 is neutral."
        },
    )
    error?.let { Text(it) }
    OutlinedButton(
        onClick = { picker.launch(arrayOf("image/*", "video/*")) },
        modifier = Modifier.fillMaxWidth().padding(vertical = 8.dp),
    ) {
        Text(if (uri == null) "Import image or video map" else "Replace displacement map")
    }
}
