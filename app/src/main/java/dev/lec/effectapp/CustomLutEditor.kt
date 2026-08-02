package dev.lec.effectapp

import android.content.Intent
import androidx.activity.compose.rememberLauncherForActivityResult
import androidx.activity.result.contract.ActivityResultContracts
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.padding
import androidx.compose.material3.LinearProgressIndicator
import androidx.compose.material3.OutlinedButton
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.runtime.getValue
import androidx.compose.runtime.mutableStateOf
import androidx.compose.runtime.remember
import androidx.compose.runtime.rememberCoroutineScope
import androidx.compose.runtime.setValue
import androidx.compose.ui.Modifier
import androidx.compose.ui.platform.LocalContext
import androidx.compose.ui.unit.dp
import dev.lec.effectapp.effects.CubeLutStore
import kotlinx.coroutines.Dispatchers
import kotlinx.coroutines.launch
import kotlinx.coroutines.withContext

@Composable
internal fun CustomLutEditor(values: Map<String, String>, onChange: (Map<String, String>) -> Unit) {
    val context = LocalContext.current
    val scope = rememberCoroutineScope()
    val uri = values["lut_uri"]
    var loading by remember { mutableStateOf(false) }
    var error by remember { mutableStateOf<String?>(null) }
    val picker = rememberLauncherForActivityResult(ActivityResultContracts.OpenDocument()) { selected ->
        selected ?: return@rememberLauncherForActivityResult
        runCatching { context.contentResolver.takePersistableUriPermission(selected, Intent.FLAG_GRANT_READ_URI_PERMISSION) }
        scope.launch {
            loading = true
            error = null
            val result = withContext(Dispatchers.IO) { CubeLutStore.load(context, selected.toString()) }
            loading = false
            result.onSuccess { onChange(values + ("lut_uri" to selected.toString())) }
                .onFailure { error = it.message ?: "That file is not a valid .cube LUT" }
        }
    }
    Text("Custom LUT (.cube)")
    Text(if (uri == null) "Import a standard 3D .cube LUT file." else "A LUT file is selected.")
    if (loading) LinearProgressIndicator(Modifier.fillMaxWidth().padding(vertical = 8.dp))
    error?.let { Text("LUT error: ${it}") }
    OutlinedButton(
        onClick = { picker.launch(arrayOf("application/octet-stream", "text/plain", "*/*")) },
        enabled = !loading,
        modifier = Modifier.fillMaxWidth().padding(vertical = 8.dp),
    ) { Text(if (uri == null) "Import LUT" else "Replace LUT") }
}
