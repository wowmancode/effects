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
import androidx.compose.foundation.layout.Row
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.padding
import androidx.compose.material3.Button
import androidx.compose.material3.LinearProgressIndicator
import androidx.compose.material3.MaterialTheme
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
import androidx.compose.runtime.produceState
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
import dev.lec.effectapp.pipeline.ExportCodec
import dev.lec.effectapp.pipeline.ExportEncoderSettings
import dev.lec.effectapp.pipeline.ProjectExporter
import dev.lec.effectapp.model.Overlay
import dev.lec.effectapp.model.EffectPreset
import dev.lec.effectapp.model.IhtxPatternKind
import dev.lec.effectapp.model.IhtxPlan
import java.io.File
import java.util.UUID
import kotlinx.coroutines.Dispatchers
import kotlinx.coroutines.delay
import kotlinx.coroutines.withContext

private enum class ExportState { IDLE, RUNNING, DONE, ERROR }

/** Output size caps (long edge in px); null keeps the source size. */
private enum class ExportResolution(val label: String, val longEdge: Int?) {
    ORIGINAL("Original", null),
    P2160("4K", 3840),
    P1080("1080p", 1920),
    P720("720p", 1280),
    P480("480p", 854),
    P360("360p", 640),
}

private val VIDEO_BITRATE_PICKS_MBPS = listOf("2", "4", "8", "16", "32", "50")
private val AUDIO_BITRATE_PICKS_KBPS = listOf<Int?>(null, 96, 128, 192, 256, 320)
private val KEYFRAME_PICKS_SECONDS = listOf("0", "0.5", "1", "2", "5", "10")

private enum class ExportAspectRatio(val label: String, val ratio: Float?) {
    ORIGINAL("Original", null),
    LANDSCAPE("16:9", 16f / 9f),
    PORTRAIT("9:16", 9f / 16f),
    SQUARE("1:1", 1f),
    CLASSIC("4:3", 4f / 3f),
    TALL("3:4", 3f / 4f),
}

@OptIn(UnstableApi::class)
@Composable
fun ExportScreen(viewModel: EditorViewModel, onBack: () -> Unit) {
    val context = LocalContext.current
    val project by viewModel.project.collectAsState()
    val missingMedia by viewModel.missingMedia.collectAsState()
    // Only codecs this phone can encode are offered (looked up once, off the main thread).
    val codecs by produceState(listOf(ExportCodec.H264)) {
        value = withContext(Dispatchers.IO) { ExportCodec.available() }
    }
    var codec by remember { mutableStateOf(ExportCodec.H264) }
    var veryFast by remember { mutableStateOf(true) }
    var antiDesync by remember { mutableStateOf(false) }
    var syncNote by remember { mutableStateOf<String?>(null) }
    var resolution by remember { mutableStateOf(ExportResolution.ORIGINAL) }
    var videoBitrateText by remember { mutableStateOf("") }
    var bitrateMode by remember { mutableStateOf(ExportEncoderSettings.BitrateMode.VBR) }
    var keyframeText by remember { mutableStateOf("") }
    var bFramesText by remember { mutableStateOf("") }
    var audioBitrateKbps by remember { mutableStateOf<Int?>(null) }
    var encoderSpeed by remember { mutableStateOf(ExportEncoderSettings.EncoderSpeed.MAXIMUM) }
    // Blank fields mean "not chosen"; text that isn't a number becomes an error below.
    val encoderSettings = remember(resolution, videoBitrateText, bitrateMode, keyframeText, bFramesText, audioBitrateKbps, encoderSpeed) {
        runCatching {
            fun <T> parse(text: String, name: String, convert: (String) -> T?): T? =
                text.trim().takeIf { it.isNotEmpty() }?.let { convert(it) ?: throw IllegalArgumentException("$name isn't a number.") }
            ExportEncoderSettings(
                videoBitrate = parse(videoBitrateText, "Video bitrate") { it.toDoubleOrNull()?.let { mbps -> (mbps * 1_000_000).toInt() } },
                bitrateMode = bitrateMode,
                keyframeIntervalSeconds = parse(keyframeText, "Keyframe interval") { it.toFloatOrNull() },
                maxBFrames = parse(bFramesText, "B-frames") { it.toIntOrNull() },
                audioBitrate = audioBitrateKbps?.let { it * 1_000 },
                maxLongEdge = resolution.longEdge,
                encoderSpeed = encoderSpeed,
            ).also { settings -> settings.problem()?.let { throw IllegalArgumentException(it) } }
        }
    }
    LaunchedEffect(project) { viewModel.checkMedia() }
    val exporter = remember { ProjectExporter(context.applicationContext) }
    val output = remember { File(context.cacheDir, "effect-app-export.mp4") }
    var state by remember { mutableStateOf(ExportState.IDLE) }
    var progress by remember { mutableIntStateOf(0) }
    var exportStatus by remember { mutableStateOf<String?>(null) }
    var exportsText by remember { mutableStateOf("1") }
    var multiEffect by remember { mutableStateOf(false) }
    var exportsPerPresetText by remember { mutableStateOf("10") }
    var presetQueue by remember { mutableStateOf<List<EffectPreset>>(emptyList()) }
    var startText by remember { mutableStateOf("0") }
    var lengthText by remember(project.durationMs) { mutableStateOf((project.durationMs / 1000.0).toString()) }
    var error by remember { mutableStateOf<String?>(null) }
    var ihtxOverlays by remember { mutableStateOf<List<Overlay>>(emptyList()) }
    var overlayGridSizeText by remember { mutableStateOf("2") }
    var overlayPattern by remember { mutableStateOf(IhtxPatternKind.ROWS.cells(2)) }
    var exportAspectRatio by remember { mutableStateOf(ExportAspectRatio.ORIGINAL) }
    val nativeApprovals by dev.lec.effectapp.effects.NativeCClient.approvalRevision.collectAsState()
    val pendingPlugins = remember(project, multiEffect, presetQueue, ihtxOverlays, nativeApprovals) {
        pendingNativePlugins(project, if (multiEffect) presetQueue else emptyList(), ihtxOverlays)
    }
    val activeAudioSegments = if (multiEffect) presetQueue.flatMap { it.audioSegments } else project.clips.flatMap { it.audioSegments }
    val carrierUris = activeAudioSegments.filter { it.effectId == "vocoder_custom" }
        .mapNotNull { it.stringParams["carrier_uri"] }.distinct()
    var carriersReady by remember(carrierUris) { mutableStateOf(carrierUris.isEmpty()) }
    var carrierError by remember(carrierUris) { mutableStateOf<String?>(null) }
    val ihtxOverlayPicker = rememberLauncherForActivityResult(ActivityResultContracts.OpenMultipleDocuments()) { uris ->
        val added = uris.map { uri ->
            runCatching { context.contentResolver.takePersistableUriPermission(uri, Intent.FLAG_GRANT_READ_URI_PERMISSION) }
            val metadata = runCatching {
                MediaMetadataRetriever().run {
                    try {
                        setDataSource(context, uri)
                        (extractMetadata(MediaMetadataRetriever.METADATA_KEY_DURATION)?.toLongOrNull() ?: 0L) to
                            (extractMetadata(MediaMetadataRetriever.METADATA_KEY_HAS_AUDIO).equals("yes", ignoreCase = true))
                    } finally { release() }
                }
            }.getOrDefault(0L to false)
            Overlay(
                id = UUID.randomUUID().toString(),
                sourceUri = uri.toString(),
                displayName = uri.lastPathSegment ?: "Video overlay",
                isVideo = true,
                sourceDurationMs = metadata.first,
                includeAudio = metadata.second,
                ihtxLayout = true,
            )
        }
        ihtxOverlays = ihtxOverlays + added
    }
    val save = rememberLauncherForActivityResult(ActivityResultContracts.CreateDocument("video/mp4")) { uri ->
        uri?.let { destination ->
            context.contentResolver.openOutputStream(destination)?.use { target -> output.inputStream().use { it.copyTo(target) } }
        }
    }

    val planned = remember(project, multiEffect, presetQueue, exportsText, exportsPerPresetText, ihtxOverlays, overlayGridSizeText, overlayPattern) {
        runCatching {
            require(!multiEffect || presetQueue.isNotEmpty()) { "Add at least one preset to the queue." }
            require(ihtxOverlays.isEmpty() || overlayPattern.isNotEmpty()) { "Record an overlay position or choose a pattern." }
            val count = (if (multiEffect) exportsPerPresetText else exportsText).toIntOrNull()
            require(count != null && count in 1..1_000) { "Exports must be between 1 and 1000." }
            val grid = overlayGridSizeText.toIntOrNull()
            require(grid != null && grid in 1..16) { "Grid size must be between 1 and 16." }
            IhtxPlan(project, count, if (multiEffect) presetQueue else emptyList(), ihtxOverlays, grid, overlayPattern)
        }
    }

    DisposableEffect(exporter) { onDispose { exporter.release() } }
    // Long IHTX runs: keep the screen on so Android doesn't stop the plug-in worker in the background.
    val view = androidx.compose.ui.platform.LocalView.current
    DisposableEffect(state) {
        view.keepScreenOn = state == ExportState.RUNNING
        onDispose { view.keepScreenOn = false }
    }
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
            exportStatus = exporter.ihtxStatus()?.let { status ->
                if (status.concatenating) "Concatenating…" else {
                    "Export ${status.current}/${status.total}" +
                        (status.presetName?.let { " · $it ${status.exportInPreset}/${status.exportsPerPreset}" } ?: "")
                }
            }
            if (exporter.syncing()) exportStatus = "Fixing audio/video sync… " + progress + "%"
            if (exporter.preparing()) exportStatus = listOfNotNull(exportStatus, "Reversing clips…").joinToString(" · ")
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
                    Row(horizontalArrangement = Arrangement.spacedBy(8.dp), modifier = Modifier.fillMaxWidth()) {
                        OutlinedButton(onClick = { multiEffect = false }, modifier = Modifier.weight(1f)) {
                            Text(if (!multiEffect) "✓ Standard IHTX" else "Standard IHTX")
                        }
                        OutlinedButton(onClick = { multiEffect = true }, modifier = Modifier.weight(1f)) {
                            Text(if (multiEffect) "✓ Multi-effect IHTX" else "Multi-effect IHTX")
                        }
                    }
                    OutlinedTextField(
                        value = if (multiEffect) exportsPerPresetText else exportsText,
                        onValueChange = { value ->
                            if (value.all(Char::isDigit)) {
                                if (multiEffect) exportsPerPresetText = value else exportsText = value
                            }
                        },
                        label = { Text(if (multiEffect) "Exports per preset" else "Exports") },
                        keyboardOptions = KeyboardOptions(keyboardType = KeyboardType.Number),
                        modifier = Modifier.fillMaxWidth(),
                    )
                    if (multiEffect) {
                        IhtxPresetQueue(project.presets, presetQueue) { presetQueue = it }
                        Text("The next overlay is added between preset blocks, just like standard IHTX. The preset queue repeats if more overlays remain.")
                    }
                    OutlinedTextField(
                        value = startText,
                        onValueChange = { value -> if (value.all { it.isDigit() || it == '.' }) startText = value },
                        label = { Text("Start at (seconds)") },
                        supportingText = { Text("The export begins this far into the project.") },
                        keyboardOptions = KeyboardOptions(keyboardType = KeyboardType.Decimal),
                        modifier = Modifier.fillMaxWidth(),
                    )
                    OutlinedTextField(
                        value = lengthText,
                        onValueChange = { value -> if (value.all { it.isDigit() || it == '.' }) lengthText = value },
                        label = { Text("Length per export (seconds)") },
                        keyboardOptions = KeyboardOptions(keyboardType = KeyboardType.Decimal),
                        modifier = Modifier.fillMaxWidth(),
                    )
                    Text(if (multiEffect) "Export ${project.clips.size} clips using the queued presets." else "Export ${project.clips.size} clips with hard cuts and all enabled effects.")
                    Text("Aspect ratio")
                    Row(horizontalArrangement = Arrangement.spacedBy(8.dp), modifier = Modifier.fillMaxWidth()) {
                        listOf(ExportAspectRatio.ORIGINAL, ExportAspectRatio.LANDSCAPE, ExportAspectRatio.PORTRAIT).forEach { option ->
                            OutlinedButton(onClick = { exportAspectRatio = option }, modifier = Modifier.weight(1f)) {
                                Text(if (exportAspectRatio == option) "✓ ${option.label}" else option.label)
                            }
                        }
                    }
                    Row(horizontalArrangement = Arrangement.spacedBy(8.dp), modifier = Modifier.fillMaxWidth()) {
                        listOf(ExportAspectRatio.SQUARE, ExportAspectRatio.CLASSIC, ExportAspectRatio.TALL).forEach { option ->
                            OutlinedButton(onClick = { exportAspectRatio = option }, modifier = Modifier.weight(1f)) {
                                Text(if (exportAspectRatio == option) "✓ ${option.label}" else option.label)
                            }
                        }
                    }
                    Text("Keeps the video proportional and fills unused space with black bars.")
                    Text("Video codec")
                    Row(horizontalArrangement = Arrangement.spacedBy(8.dp), modifier = Modifier.fillMaxWidth()) {
                        codecs.forEach { option ->
                            OutlinedButton(onClick = { codec = option }, modifier = Modifier.weight(1f)) {
                                Text(if (codec == option) "✓ ${option.label}" else option.label, maxLines = 1)
                            }
                        }
                    }
                    Text("Saved as .mp4 with AAC sound. Codecs this phone can't encode aren't shown.")
                    Text("Speed")
                    Row(horizontalArrangement = Arrangement.spacedBy(8.dp), modifier = Modifier.fillMaxWidth()) {
                        OutlinedButton(onClick = { veryFast = true }, modifier = Modifier.weight(1f)) {
                            Text(if (veryFast) "✓ Very fast" else "Very fast", maxLines = 1)
                        }
                        OutlinedButton(onClick = { veryFast = false }, modifier = Modifier.weight(1f)) {
                            Text(if (!veryFast) "✓ Normal" else "Normal", maxLines = 1)
                        }
                    }
                    Text(if (veryFast) "Up to 720p at a lighter bitrate: much quicker, slightly softer. Encoding choices below override it." else "Full resolution and quality.")
                    Row(Modifier.fillMaxWidth(), verticalAlignment = androidx.compose.ui.Alignment.CenterVertically) {
                        Column(Modifier.weight(1f)) {
                            Text("Anti-desync")
                            Text("After exporting, stretches the picture to exactly the sound's length so they end together. Re-encodes the video once.", style = MaterialTheme.typography.bodySmall)
                        }
                        androidx.compose.material3.Switch(checked = antiDesync, onCheckedChange = { antiDesync = it })
                    }
                    Text("Encoding", style = MaterialTheme.typography.titleMedium)
                    Text("Resolution")
                    ExportResolution.entries.chunked(3).forEach { row ->
                        ChoiceRow(row, resolution, { it.label }) { resolution = it }
                    }
                    Text("Long edge cap; smaller sources keep their size.${if (veryFast) " Very fast caps at 720p." else ""}")
                    OutlinedTextField(
                        value = videoBitrateText,
                        onValueChange = { value -> if (value.all { it.isDigit() || it == '.' }) videoBitrateText = value },
                        label = { Text("Video bitrate (Mbps)") },
                        placeholder = { Text(if (veryFast) "4 (Very fast)" else "Auto") },
                        supportingText = { Text("Blank lets the encoder choose for the resolution.") },
                        keyboardOptions = KeyboardOptions(keyboardType = KeyboardType.Decimal),
                        modifier = Modifier.fillMaxWidth(),
                    )
                    (listOf("") + VIDEO_BITRATE_PICKS_MBPS).chunked(4).forEach { row ->
                        ChoiceRow(row, videoBitrateText, { if (it.isEmpty()) "Auto" else it }) { videoBitrateText = it }
                    }
                    Text("Bitrate mode")
                    ChoiceRow(ExportEncoderSettings.BitrateMode.entries, bitrateMode, { it.label }) { bitrateMode = it }
                    OutlinedTextField(
                        value = keyframeText,
                        onValueChange = { value -> if (value.all { it.isDigit() || it == '.' }) keyframeText = value },
                        label = { Text("Keyframe interval (seconds)") },
                        placeholder = { Text(if (veryFast) "5 (Very fast)" else "1") },
                        supportingText = { Text("KEY_I_FRAME_INTERVAL. 0 makes every frame a keyframe (big files, exact seeking).") },
                        keyboardOptions = KeyboardOptions(keyboardType = KeyboardType.Decimal),
                        modifier = Modifier.fillMaxWidth(),
                    )
                    (listOf("") + KEYFRAME_PICKS_SECONDS).chunked(4).forEach { row ->
                        ChoiceRow(row, keyframeText, { if (it.isEmpty()) "Default" else it + "s" }) { keyframeText = it }
                    }
                    OutlinedTextField(
                        value = bFramesText,
                        onValueChange = { value -> if (value.all(Char::isDigit)) bFramesText = value },
                        label = { Text("Max B-frames") },
                        placeholder = { Text("0") },
                        supportingText = { Text("KEY_MAX_B_FRAMES, Android 10+. Smaller files; not every encoder honours it.") },
                        keyboardOptions = KeyboardOptions(keyboardType = KeyboardType.Number),
                        modifier = Modifier.fillMaxWidth(),
                    )
                    Text("Audio bitrate (AAC)")
                    AUDIO_BITRATE_PICKS_KBPS.chunked(3).forEach { row ->
                        ChoiceRow(row, audioBitrateKbps, { it?.let { kbps -> "$kbps kbps" } ?: "Auto" }) { audioBitrateKbps = it }
                    }
                    Text("Encoder speed")
                    ChoiceRow(ExportEncoderSettings.EncoderSpeed.entries, encoderSpeed, { it.label }) { encoderSpeed = it }
                    Text("Real time runs the encoder at playback pace: slower, but cooler on long exports.")
                    encoderSettings.exceptionOrNull()?.message?.let { Text(it, color = MaterialTheme.colorScheme.error) }
                    Text("IHTX animated overlays")
                    OutlinedTextField(
                        value = overlayGridSizeText,
                        onValueChange = { value ->
                            if (value.all(Char::isDigit)) {
                                val old = overlayGridSizeText.toIntOrNull()
                                overlayGridSizeText = value
                                val size = value.toIntOrNull()
                                if (size != null && size in 1..16 && size != old) overlayPattern = IhtxPatternKind.ROWS.cells(size)
                            }
                        },
                        label = { Text("Overlay grid size") },
                        supportingText = { Text("1–16 tiles per row and column. Changing the size starts a new row-order pattern.") },
                        keyboardOptions = KeyboardOptions(keyboardType = KeyboardType.Number),
                        modifier = Modifier.fillMaxWidth(),
                    )
                    IhtxPatternEditor(
                        gridSize = overlayGridSizeText.toIntOrNull()?.takeIf { it in 1..16 } ?: 2,
                        cells = overlayPattern,
                        onChange = { overlayPattern = it },
                        onLoad = { pattern -> overlayGridSizeText = pattern.gridSize.toString(); overlayPattern = pattern.cells },
                    )
                    OutlinedButton(onClick = { ihtxOverlayPicker.launch(arrayOf("video/*")) }, modifier = Modifier.fillMaxWidth()) {
                        Text("+ Overlay videos")
                    }
                    if (ihtxOverlays.isEmpty()) Text("No IHTX overlays selected.")
                    ihtxOverlays.forEachIndexed { index, overlay ->
                        Column(Modifier.fillMaxWidth()) {
                            Text("${index + 1}. ${overlay.displayName}")
                            overlayPattern.takeIf { it.isNotEmpty() }?.let { cells ->
                                val cell = cells[index % cells.size]
                                Text("Row ${cell.row + 1}, column ${cell.column + 1}")
                            }
                            Row {
                                TextButton(onClick = { ihtxOverlays = ihtxOverlays.movedIhtxItem(index, -1) }, enabled = index > 0) { Text("Up") }
                                TextButton(onClick = { ihtxOverlays = ihtxOverlays.movedIhtxItem(index, 1) }, enabled = index < ihtxOverlays.lastIndex) { Text("Down") }
                                TextButton(onClick = { ihtxOverlays = ihtxOverlays.filterNot { it.id == overlay.id } }) { Text("Delete") }
                            }
                        }
                    }
                    planned.getOrNull()?.let { plan ->
                        Text("${plan.totalExports} exports total · ${plan.exportsPerStage} before each new overlay")
                    }
                    planned.exceptionOrNull()?.message?.let { Text(it, color = MaterialTheme.colorScheme.error) }
                    IhtxPluginApproval(pendingPlugins)
                    if (!carriersReady && carrierError == null) Text("Preparing carrier audio…")
                    carrierError?.let { Text("Carrier audio error: $it") }
                    if (missingMedia.isNotEmpty()) {
                        Text(
                            "These files aren't on this device yet: " + missingMedia.joinToString { it.name } +
                                ". Find them before exporting.",
                            color = MaterialTheme.colorScheme.error,
                        )
                        OutlinedButton(onClick = { viewModel.promptMissingMedia(); onBack() }) { Text("Find media") }
                    }
                    Button(
                        onClick = {
                            val plan = requireNotNull(planned.getOrNull())
                            output.delete()
                            state = ExportState.RUNNING
                            progress = 0
                            exportStatus = null
                            val lengthMs = ((lengthText.toDoubleOrNull() ?: 0.0) * 1_000).toLong().coerceAtLeast(1)
                            val startMs = ((startText.toDoubleOrNull() ?: 0.0) * 1_000).toLong().coerceAtLeast(0)
                            exporter.startIhtx(
                                project,
                                plan.exportsPerPreset,
                                lengthMs,
                                output.absolutePath,
                                object : ProjectExporter.Callback {
                                    override fun onCompleted() { syncNote = exporter.lastSyncNote(); state = ExportState.DONE; progress = 100 }
                                    override fun onError(errorValue: ExportException) {
                                        error = (
                                            listOfNotNull(
                                                exporter.lastIhtxFailure()?.let { "IHTX export " + it.current + "/" + it.total },
                                                errorValue.message,
                                            ) + causeMessages(errorValue)
                                            ).distinct().joinToString(" · ").ifBlank {
                                            errorValue.javaClass.simpleName
                                        }
                                        state = ExportState.ERROR
                                    }
                                },
                                overlays = plan.overlays,
                                overlayGridSize = plan.gridSize,
                                presets = plan.presets,
                                overlayPattern = plan.pattern,
                                exportAspectRatio = exportAspectRatio.ratio,
                                startMs = startMs,
                                codec = codec,
                                veryFast = veryFast,
                                settings = requireNotNull(encoderSettings.getOrNull()),
                                antiDesync = antiDesync,
                            )
                        },
                        enabled = planned.isSuccess && encoderSettings.isSuccess && pendingPlugins.isEmpty() && carriersReady && missingMedia.isEmpty(),
                    ) { Text("Start export") }
                }
                ExportState.RUNNING -> {
                    Text(exportStatus ?: "Exporting… " + progress + "%")
                    LinearProgressIndicator(progress = { progress / 100f }, modifier = Modifier.fillMaxWidth())
                    OutlinedButton(onClick = { exporter.cancel(); state = ExportState.IDLE }) { Text("Cancel") }
                }
                ExportState.DONE -> {
                    Text("Export complete")
                    syncNote?.let { Text(it, style = MaterialTheme.typography.bodySmall) }
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

/** A row of equal-width choices with a check on the selected one. */
@Composable
private fun <T> ChoiceRow(options: List<T>, selected: T, label: (T) -> String, onSelect: (T) -> Unit) {
    Row(horizontalArrangement = Arrangement.spacedBy(8.dp), modifier = Modifier.fillMaxWidth()) {
        options.forEach { option ->
            OutlinedButton(
                onClick = { onSelect(option) },
                contentPadding = androidx.compose.foundation.layout.PaddingValues(horizontal = 4.dp, vertical = 8.dp),
                modifier = Modifier.weight(1f),
            ) {
                Text(if (option == selected) "✓ ${label(option)}" else label(option), maxLines = 1)
            }
        }
    }
}

/** The messages of an error's causes, innermost last (e.g. which file couldn't be read). */
private fun causeMessages(error: Throwable): List<String> {
    val messages = mutableListOf<String>()
    var cause = error.cause
    var depth = 0
    while (cause != null && depth < 6) {
        val message = cause.message?.takeIf { it.isNotBlank() }
        messages += if (message != null) "${cause.javaClass.simpleName}: $message" else cause.javaClass.simpleName
        cause = cause.cause
        depth++
    }
    return messages
}

