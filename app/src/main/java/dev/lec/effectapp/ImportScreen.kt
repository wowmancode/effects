package dev.lec.effectapp

import android.content.Context
import android.media.MediaMetadataRetriever
import android.net.Uri
import android.provider.OpenableColumns
import androidx.activity.compose.rememberLauncherForActivityResult
import androidx.activity.result.contract.ActivityResultContracts
import androidx.compose.foundation.Image
import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.Row
import androidx.compose.foundation.layout.Spacer
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.height
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.layout.size
import androidx.compose.foundation.lazy.LazyColumn
import androidx.compose.foundation.lazy.itemsIndexed
import androidx.compose.material3.Button
import androidx.compose.material3.Card
import androidx.compose.material3.MaterialTheme
import androidx.compose.material3.OutlinedButton
import androidx.compose.material3.Scaffold
import androidx.compose.material3.Text
import androidx.compose.material3.TopAppBar
import androidx.compose.runtime.Composable
import androidx.compose.runtime.collectAsState
import androidx.compose.runtime.getValue
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.graphics.asImageBitmap
import androidx.compose.ui.layout.ContentScale
import androidx.compose.ui.platform.LocalContext
import androidx.compose.ui.unit.dp

@Composable
fun ImportScreen(viewModel: EditorViewModel, onEdit: () -> Unit) {
    val context = LocalContext.current
    val project by viewModel.project.collectAsState()
    val picker = rememberLauncherForActivityResult(ActivityResultContracts.OpenMultipleDocuments()) { uris ->
        uris.forEach { uri ->
            runCatching { context.contentResolver.takePersistableUriPermission(uri, android.content.Intent.FLAG_GRANT_READ_URI_PERMISSION) }
            val metadata = readVideoMetadata(context, uri)
            viewModel.addClip(uri.toString(), metadata.first, metadata.second)
        }
    }

    Scaffold(topBar = { TopAppBar(title = { Text("Import videos") }) }) { padding ->
        Column(Modifier.fillMaxSize().padding(padding).padding(16.dp)) {
            Text("Choose one or more clips. They will play in this order with hard cuts.")
            Spacer(Modifier.height(12.dp))
            OutlinedButton(onClick = { picker.launch(arrayOf("video/*")) }) { Text("Choose videos") }
            Spacer(Modifier.height(12.dp))
            if (project.clips.isEmpty()) {
                Text("No clips imported", style = MaterialTheme.typography.bodyLarge)
            } else {
                LazyColumn(Modifier.weight(1f), verticalArrangement = Arrangement.spacedBy(8.dp)) {
                    itemsIndexed(project.clips, key = { _, clip -> clip.id }) { index, clip ->
                        Card(Modifier.fillMaxWidth()) {
                            Row(
                                Modifier.fillMaxWidth().padding(8.dp),
                                verticalAlignment = Alignment.CenterVertically,
                                horizontalArrangement = Arrangement.spacedBy(8.dp),
                            ) {
                                val thumbnail = rememberVideoThumbnail(context, clip.sourceUri)
                                if (thumbnail != null) {
                                    Image(
                                        bitmap = thumbnail.asImageBitmap(),
                                        contentDescription = null,
                                        modifier = Modifier.size(80.dp, 48.dp),
                                        contentScale = ContentScale.Crop,
                                    )
                                }
                                Column(Modifier.weight(1f)) {
                                    Text(clip.displayName)
                                    Text(formatTime(clip.durationMs), style = MaterialTheme.typography.bodySmall)
                                }
                                OutlinedButton(onClick = { viewModel.moveClip(index, -1) }, enabled = index > 0) { Text("↑") }
                                OutlinedButton(onClick = { viewModel.moveClip(index, 1) }, enabled = index < project.clips.lastIndex) { Text("↓") }
                                OutlinedButton(onClick = { viewModel.removeClip(clip.id) }) { Text("×") }
                            }
                        }
                    }
                }
                Button(onClick = onEdit, modifier = Modifier.fillMaxWidth()) { Text("Open editor") }
            }
        }
    }
}

@Composable
private fun rememberVideoThumbnail(context: Context, sourceUri: String): android.graphics.Bitmap? =
    androidx.compose.runtime.remember(sourceUri) {
        runCatching {
            MediaMetadataRetriever().use { retriever ->
                retriever.setDataSource(context, Uri.parse(sourceUri))
                retriever.getFrameAtTime(0, MediaMetadataRetriever.OPTION_CLOSEST_SYNC)
            }
        }.getOrNull()
    }

private fun readVideoMetadata(context: Context, uri: Uri): Pair<String, Long> {
    val name = context.contentResolver.query(uri, arrayOf(OpenableColumns.DISPLAY_NAME), null, null, null)?.use { cursor ->
        if (cursor.moveToFirst()) cursor.getString(0) else null
    } ?: uri.lastPathSegment ?: "Video"
    val duration = runCatching {
        MediaMetadataRetriever().use { retriever ->
            retriever.setDataSource(context, uri)
            retriever.extractMetadata(MediaMetadataRetriever.METADATA_KEY_DURATION)?.toLong()
        }
    }.getOrNull() ?: 1L
    return name to duration
}

internal fun formatTime(milliseconds: Long): String {
    val totalSeconds = milliseconds / 1_000
    return "%d:%02d".format(totalSeconds / 60, totalSeconds % 60)
}
