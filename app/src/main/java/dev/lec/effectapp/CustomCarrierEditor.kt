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
import dev.lec.effectapp.effects.CarrierAudioStore
import kotlinx.coroutines.Dispatchers
import kotlinx.coroutines.launch
import kotlinx.coroutines.withContext

@Composable
internal fun CustomCarrierEditor(
    values: Map<String, String>,
    onChange: (Map<String, String>) -> Unit,
) {
    val context = LocalContext.current
    val scope = rememberCoroutineScope()
    var loading by remember { mutableStateOf(false) }
    var error by remember { mutableStateOf<String?>(null) }
    val uri = values["carrier_uri"]
    val picker = rememberLauncherForActivityResult(ActivityResultContracts.OpenDocument()) { selected ->
        selected ?: return@rememberLauncherForActivityResult
        runCatching {
            context.contentResolver.takePersistableUriPermission(selected, Intent.FLAG_GRANT_READ_URI_PERMISSION)
        }
        scope.launch {
            loading = true
            error = null
            val result = withContext(Dispatchers.IO) { CarrierAudioStore.load(context, selected.toString()) }
            loading = false
            result.onSuccess { onChange(values + ("carrier_uri" to selected.toString())) }
                .onFailure { error = it.message ?: "Could not decode that audio file" }
        }
    }

    Text("Carrier audio")
    Text(
        if (uri == null) "Choose a song or audio file. The clip voice will shape that carrier."
        else "Selected: ${android.net.Uri.parse(uri).lastPathSegment ?: "audio file"}",
    )
    if (loading) LinearProgressIndicator(Modifier.fillMaxWidth().padding(vertical = 8.dp))
    error?.let { Text("Carrier error: $it") }
    OutlinedButton(
        onClick = { picker.launch(arrayOf("audio/*")) },
        enabled = !loading,
        modifier = Modifier.fillMaxWidth().padding(vertical = 8.dp),
    ) { Text(if (uri == null) "Choose carrier audio" else "Replace carrier audio") }
}
