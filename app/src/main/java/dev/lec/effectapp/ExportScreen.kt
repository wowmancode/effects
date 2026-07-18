package dev.lec.effectapp

import android.content.Intent
import android.media.MediaMetadataRetriever
import androidx.activity.compose.rememberLauncherForActivityResult
import androidx.activity.result.contract.ActivityResultContracts
import androidx.annotation.OptIn
import androidx.compose.foundation.rememberScrollState
import androidx.compose.foundation.verticalScroll
import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.padding
import androidx.compose.material3.Button
import androidx.compose.material3.LinearProgressIndicator
import androidx.compose.material3.OutlinedButton
import androidx.compose.material3.OutlinedTextField
import androidx.compose.material3.Scaffold
import androidx.compose.material3.Text
import androidx.compose.material3.TextButton
import androidx.compose.material3.TopAppBar
import androidx.compose.runtime.Composable
import androidx.compose.runtime.DisposableEffect
import androidx.compose.runtime.LaunchedEffect
import androidx.compose.runtime.collectAsState
import androidx.compose.runtime.getValue
import androidx.compose.runtime.mutableIntStateOf
import androidx.compose.runtime.mutableStateOf
import androidx.compose.runtime.remember
import androidx.compose.runtime.setValue
import androidx.compose.ui.Modifier
import androidx.compose.ui.platform.LocalContext
import androidx.compose.ui.unit.dp
import androidx.compose.foundation.text.KeyboardOptions
import androidx.compose.ui.text.input.KeyboardType
import androidx.core.content.FileProvider
import androidx.media3.common.util.UnstableApi
import androidx.media3.transformer.ExportException
import dev.lec.effectapp.effects.CarrierAudioStore
import dev.lec.effectapp.pipeline.ProjectExporter
import dev.lec.effectapp.model.Overlay
import java.io.File
import java.util.UUID
import kotlinx.coroutines.Dispatchers
import kotlinx.coroutines.delay
import kotlinx.coroutines.withContext

private enum class ExportState { IDLE, RUNNING, DONE, ERROR }

@OptIn(UnstableApi::class)
@Composable
fun ExportScreen(viewModel: EditorViewModel, onBack: () -> Unit) {
    val context = LocalContext.current
    val project by viewModel.project.collectAsState()
    val exporter = remember { ProjectExporter(context.applicationContext) }
    val output = remember { File(context.cacheDir, "effect-app-export.mp4") }
    var state by remember { mutableStateOf(ExportState.IDLE) }
    var progress by remember { mutableIntStateOf(0) }
    var exportStatus by remember { mutableStateOf<String?>(null) }
    var exportsText by remember { mutableStateOf("1") }
    var lengthText by remember(project.durationMs) { mutableStateOf((project.durationMs / 1000.0).toString()) }
    var error by remember { mutableStateOf<String?>(null) }
    var ihtxOverlays by remember { mutableStateOf<List<Overlay>>(emptyList()) }
    val carrierUris = project.clips.flatMap { it.audioSegments }.filter { it.effectId == "vocoder_custom" }
        .mapNotNull { it.stringParams["carrier_uri"] }.distinct()
    var carriersReady by remember(carrierUris) { mutableStateOf(carrierUris.isEmpty()) }
    var carrierError by remember(carrierUris) { mutableStateOf<String?>(null) }
    val ihtxOverlayPicker = rememberLauncherForActivityResult(ActivityResultContracts.OpenMultipleDocuments()) { uris ->
        val added = uris.map { uri ->
            runCatching { context.contentResolver.takePersistableUriPermission(uri, Intent.FLAG_GRANT_READ_URI_PERMISSION) }
            val durationMs = runCatching {
                MediaMetadataRetriever().run {
                    try { setDataSource(context, uri); extractMetadata(MediaMetadataRetriever.METADATA_KEY_DURATION)?.toLongOrNull() ?: 0L }
                    finally { release() }
                }
            }.getOrDefault(0L)
            Overlay(
                id = UUID.randomUUID().toString(),
                sourceUri = uri.toString(),
                displayName = uri.lastPathSegment ?: "Video overlay",
                isVideo = true,
                sourceDurationMs = durationMs,
            )
        }
        ihtxOverlays = ihtxOverlays + added
    }
    val save = rememberLauncherForActivityResult(ActivityResultContracts.CreateDocument("video/mp4")) { uri ->
        uri?.let { destination ->
            context.contentResolver.openOutputStream(destination)?.use { target -> output.inputStream().use { it.copyTo(target) } }
        }
    }

    DisposableEffect(exporter) { onDispose { if (state == ExportState.RUNNING) exporter.cancel() } }
    LaunchedEffect(carrierUris) {
        carriersReady = carrierUris.isEmpty()
        carrierError = null
        carrierUris.forEach { uri ->
            val result = withContext(Dispatchers.IO) { CarrierAudioStore.load(context, uri) }
            if (result.isFailure) carrierError = result.exceptionOrNull()?.message ?: "Could not load carrier audio"
        }
        carriersReady = carrierError == null
    }
    LaunchedEffect(state) {
        while (state == ExportState.RUNNING) {
            exporter.progress()?.let { progress = it }
            exporter.ihtxStatus()?.let { status ->
                exportStatus = if (status.concatenating) "Concatenating…" else "Export " + status.current + "/" + status.total
            }
            delay(200)
        }
    }

    Scaffold(
        topBar = {
            TopAppBar(
                title = { Text("Export") },
                navigationIcon = { TextButton(onClick = onBack) { Text("Back") } },
            )
        },
    ) { padding ->
        Column(
            Modifier.fillMaxSize().padding(padding).verticalScroll(rememberScrollState()).padding(24.dp),
            verticalArrangement = Arrangement.spacedBy(16.dp),
        ) {
            when (state) {
                ExportState.IDLE -> {
                    Text("IHTX · cumulative effect passes, then concatenate")
                    OutlinedTextField(
                        value = exportsText,
                        onValueChange = { value -> if (value.all(Char::isDigit)) exportsText = value },
                        label = { Text("Exports") },
                        keyboardOptions = KeyboardOptions(keyboardType = KeyboardType.Number),
                        modifier = Modifier.fillMaxWidth(),
                    )
                    OutlinedTextField(
                        value = lengthText,
                        onValueChange = { value -> if (value.all { it.isDigit() || it == '.' }) lengthText = value },
                        label = { Text("Length per export (seconds)") },
                        keyboardOptions = KeyboardOptions(keyboardType = KeyboardType.Decimal),
                        modifier = Modifier.fillMaxWidth(),
                    )
                    Text("Export " + project.clips.size + " clips with hard cuts and all enabled effects.")
                    Text("IHTX animated overlays")
                    OutlinedButton(onClick = { ihtxOverlayPicker.launch(arrayOf("video/*")) }, modifier = Modifier.fillMaxWidth()) {
                        Text("+ Overlay videos")
                    }
                    if (ihtxOverlays.isEmpty()) Text("No IHTX overlays selected.")
                    ihtxOverlays.forEach { overlay ->
                        Column(Modifier.fillMaxWidth()) {
                            Text(overlay.displayName)
                            TextButton(onClick = { ihtxOverlays = ihtxOverlays.filterNot { it.id == overlay.id } }) { Text("Delete") }
                        }
                    }
                    if (!carriersReady && carrierError == null) Text("Preparing carrier audio…")
                    carrierError?.let { Text("Carrier audio error: $it") }
                    Button(
                        onClick = {
                            output.delete()
                            state = ExportState.RUNNING
                            progress = 0
                            exportStatus = null
                            val exports = exportsText.toIntOrNull()?.coerceAtLeast(1) ?: 1
                            val lengthMs = ((lengthText.toDoubleOrNull() ?: 0.0) * 1_000).toLong().coerceAtLeast(1)
                            exporter.startIhtx(
                                project,
                                exports,
                                lengthMs,
                                output.absolutePath,
                                object : ProjectExporter.Callback {
                                    override fun onCompleted() { state = ExportState.DONE; progress = 100 }
                                    override fun onError(errorValue: ExportException) {
                                        error = listOfNotNull(
                                            exporter.lastIhtxFailure()?.let { "IHTX export " + it.current + "/" + it.total },
                                            errorValue.message,
                                            errorValue.cause?.message,
                                        ).distinct().joinToString(" · ").ifBlank {
                                            errorValue.javaClass.simpleName
                                        }
                                        state = ExportState.ERROR
                                    }
                                },
                                overlays = ihtxOverlays,
                            )
                        },
                        enabled = project.clips.isNotEmpty() && carriersReady,
                    ) { Text("Start export") }
                }
                ExportState.RUNNING -> {
                    Text(exportStatus ?: "Exporting… " + progress + "%")
                    LinearProgressIndicator(progress = { progress / 100f }, modifier = Modifier.fillMaxWidth())
                    OutlinedButton(onClick = { exporter.cancel(); state = ExportState.IDLE }) { Text("Cancel") }
                }
                ExportState.DONE -> {
                    Text("Export complete")
                    Button(onClick = { save.launch("effect-app.mp4") }) { Text("Save video") }
                    OutlinedButton(
                        onClick = {
                            val uri = FileProvider.getUriForFile(context, "${context.packageName}.files", output)
                            context.startActivity(
                                Intent.createChooser(
                                    Intent(Intent.ACTION_SEND).apply {
                                        type = "video/mp4"
                                        putExtra(Intent.EXTRA_STREAM, uri)
                                        addFlags(Intent.FLAG_GRANT_READ_URI_PERMISSION)
                                    },
                                    "Share export",
                                ),
                            )
                        },
                    ) { Text("Share video") }
                }
                ExportState.ERROR -> {
                    Text("Export failed: ${error ?: "Unknown error"}")
                    Button(onClick = { state = ExportState.IDLE }) { Text("Try again") }
                }
            }
        }
    }
}
