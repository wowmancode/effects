package dev.lec.effectapp

import android.content.Context
import android.graphics.Paint
import androidx.compose.foundation.Canvas
import androidx.compose.foundation.horizontalScroll
import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.Row
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.height
import androidx.compose.foundation.rememberScrollState
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
import androidx.compose.ui.Modifier
import androidx.compose.ui.geometry.Offset
import androidx.compose.ui.geometry.Size
import androidx.compose.ui.graphics.drawscope.Stroke
import androidx.compose.ui.graphics.nativeCanvas
import androidx.compose.ui.graphics.toArgb
import androidx.compose.ui.platform.LocalContext
import androidx.compose.ui.semantics.contentDescription
import androidx.compose.ui.semantics.semantics
import androidx.compose.ui.unit.dp
import dev.lec.effectapp.effects.EffectRegistry
import dev.lec.effectapp.model.EffectPreset
import dev.lec.effectapp.model.IhtxDirection
import dev.lec.effectapp.model.IhtxGridCell
import dev.lec.effectapp.model.IhtxOverlayPattern
import dev.lec.effectapp.model.IhtxPatternKind
import dev.lec.effectapp.model.IhtxPatternLibraryJson
import java.util.UUID
import kotlinx.coroutines.launch

@Composable
internal fun IhtxPresetQueue(
    presets: List<EffectPreset>,
    queue: List<EffectPreset>,
    onChange: (List<EffectPreset>) -> Unit,
) {
    Text("Preset order", style = MaterialTheme.typography.titleMedium)
    Text("Each preset runs for the selected number of exports, then the next preset takes over. Every export uses the previous output.")
    if (queue.isEmpty()) Text("Add at least one saved preset to the queue.")
    queue.forEachIndexed { index, preset ->
        Column {
            Text("${index + 1}. ${preset.name}")
            Row(horizontalArrangement = Arrangement.spacedBy(8.dp)) {
                TextButton(onClick = { onChange(queue.movedIhtxItem(index, -1)) }, enabled = index > 0) { Text("Up") }
                TextButton(onClick = { onChange(queue.movedIhtxItem(index, 1)) }, enabled = index < queue.lastIndex) { Text("Down") }
                TextButton(onClick = { onChange(queue.filterIndexed { i, _ -> i != index }) }) { Text("Remove") }
            }
        }
    }
    if (presets.isEmpty()) {
        Text("Save presets in the editor first, then return here.")
        return
    }
    var search by remember { mutableStateOf("") }
    var sort by remember { mutableStateOf(IhtxPresetSort.SAVED) }
    val shown = remember(presets, search, sort) { presets.searchedAndSorted(search, sort) }
    Text("Add presets", style = MaterialTheme.typography.titleMedium)
    OutlinedTextField(
        value = search,
        onValueChange = { search = it },
        label = { Text("Search presets or effects") },
        supportingText = { Text("Matches a preset's name or the effects in it, e.g. \"glow\" or \"vocoder\".") },
        trailingIcon = { if (search.isNotEmpty()) TextButton(onClick = { search = "" }) { Text("Clear") } },
        singleLine = true,
        modifier = Modifier.fillMaxWidth(),
    )
    Text("Sort")
    Row(Modifier.fillMaxWidth().horizontalScroll(rememberScrollState()), horizontalArrangement = Arrangement.spacedBy(8.dp)) {
        IhtxPresetSort.entries.forEach { option ->
            OutlinedButton(onClick = { sort = option }) { Text(if (sort == option) "✓ ${option.label}" else option.label, maxLines = 1) }
        }
    }
    Row(Modifier.fillMaxWidth(), horizontalArrangement = Arrangement.spacedBy(8.dp)) {
        Text("${shown.size} of ${presets.size} presets", modifier = Modifier.weight(1f))
        TextButton(onClick = { onChange(queue + shown) }, enabled = shown.isNotEmpty()) { Text("Add all shown") }
    }
    if (shown.isEmpty()) Text("No presets match “${search.trim()}”.")
    shown.forEach { preset ->
        OutlinedButton(onClick = { onChange(queue + preset) }, modifier = Modifier.fillMaxWidth()) {
            Column(Modifier.fillMaxWidth()) {
                val count = queue.count { it.id == preset.id }
                Text("+ ${preset.name}" + if (count > 0) " · queued ×$count" else "")
                preset.effectNames().takeIf { it.isNotEmpty() }?.let { names ->
                    Text(names.joinToString(" · "), style = MaterialTheme.typography.bodySmall, maxLines = 2)
                }
            }
        }
    }
}

/** How the presets offered for the multi-effect queue are ordered. */
internal enum class IhtxPresetSort(val label: String) {
    SAVED("Saved order"),
    NEWEST("Newest"),
    NAME("Name A–Z"),
    NAME_DESC("Name Z–A"),
    MOST_EFFECTS("Most effects"),
    FEWEST_EFFECTS("Fewest effects"),
}

/** Display names of a preset's enabled video and audio effects, in stack order. */
internal fun EffectPreset.effectNames(): List<String> =
    (effectSegments + audioSegments).filter { it.enabled }.map { EffectRegistry.byId(it.effectId)?.displayName ?: it.effectId }

/**
 * Presets whose name or effects contain every word of [query] (any order, ignoring case), ordered
 * by [sort]. Presets are stored oldest first, so "Newest" is the saved order reversed.
 */
internal fun List<EffectPreset>.searchedAndSorted(query: String, sort: IhtxPresetSort): List<EffectPreset> {
    val words = query.trim().lowercase().split(Regex("\\s+")).filter { it.isNotEmpty() }
    val matching = if (words.isEmpty()) this else filter { preset ->
        val haystack = (listOf(preset.name) + preset.effectNames() + (preset.effectSegments + preset.audioSegments).map { it.effectId })
            .joinToString(" ").lowercase()
        words.all { it in haystack }
    }
    val byName = compareBy<EffectPreset, String>(String.CASE_INSENSITIVE_ORDER) { it.name }
    fun EffectPreset.effectCount() = (effectSegments + audioSegments).count { it.enabled }
    return when (sort) {
        IhtxPresetSort.SAVED -> matching
        IhtxPresetSort.NEWEST -> matching.asReversed()
        IhtxPresetSort.NAME -> matching.sortedWith(byName)
        IhtxPresetSort.NAME_DESC -> matching.sortedWith(byName.reversed())
        IhtxPresetSort.MOST_EFFECTS -> matching.sortedWith(compareByDescending<EffectPreset> { it.effectCount() }.then(byName))
        IhtxPresetSort.FEWEST_EFFECTS -> matching.sortedWith(compareBy<EffectPreset> { it.effectCount() }.then(byName))
    }
}

internal fun <T> List<T>.movedIhtxItem(index: Int, delta: Int): List<T> {
    val destination = index + delta
    if (index !in indices || destination !in indices) return this
    return toMutableList().apply { add(destination, removeAt(index)) }
}

@Composable
internal fun IhtxPatternEditor(
    gridSize: Int,
    cells: List<IhtxGridCell>,
    onChange: (List<IhtxGridCell>) -> Unit,
    onLoad: (IhtxOverlayPattern) -> Unit,
) {
    val context = LocalContext.current
    val preferences = remember { context.getSharedPreferences("ihtx-patterns", Context.MODE_PRIVATE) }
    var saved by remember {
        mutableStateOf(runCatching { IhtxPatternLibraryJson.decode(preferences.getString("patterns", "[]") ?: "[]") }.getOrDefault(emptyList()))
    }
    var cursor by remember(gridSize) { mutableStateOf(IhtxGridCell(0, 0)) }
    var name by remember { mutableStateOf("") }
    fun store(patterns: List<IhtxOverlayPattern>) {
        saved = patterns
        preferences.edit().putString("patterns", IhtxPatternLibraryJson.encode(patterns)).apply()
    }

    Text("Overlay placement pattern", style = MaterialTheme.typography.titleMedium)
    Text("Directions move the cursor. New overlay records where the next overlay video goes. Positions repeat if there are more overlays than positions.")
    Row(Modifier.fillMaxWidth().horizontalScroll(rememberScrollState()), horizontalArrangement = Arrangement.spacedBy(8.dp)) {
        IhtxPatternKind.entries.forEach { kind ->
            OutlinedButton(onClick = { onChange(kind.cells(gridSize)); cursor = IhtxGridCell(0, 0) }) { Text(kind.label) }
        }
    }
    PatternGrid(gridSize, cells, cursor)
    Text("Cursor: row ${cursor.row + 1}, column ${cursor.column + 1} · ${cells.size} recorded positions")
    Row(Modifier.fillMaxWidth().horizontalScroll(rememberScrollState())) {
        IhtxDirection.entries.forEach { direction ->
            val next = cursor.move(direction, gridSize)
            OutlinedButton(onClick = { next?.let { cursor = it } }, enabled = next != null) {
                Text(when (direction) {
                    IhtxDirection.UP -> "↑ Up"
                    IhtxDirection.DOWN -> "↓ Down"
                    IhtxDirection.LEFT -> "← Left"
                    IhtxDirection.RIGHT -> "→ Right"
                })
            }
        }
    }
    Row(horizontalArrangement = Arrangement.spacedBy(8.dp)) {
        OutlinedButton(onClick = { onChange(cells + cursor) }, enabled = cells.size < 256) { Text("New overlay") }
        TextButton(onClick = { onChange(cells.dropLast(1)) }, enabled = cells.isNotEmpty()) { Text("Undo") }
        TextButton(onClick = { onChange(emptyList()); cursor = IhtxGridCell(0, 0) }) { Text("Reset") }
    }
    if (cells.isEmpty()) Text("Record the first overlay position, or choose a pattern above.")
    Text("Reset clears the current order. Saved patterns stay in your library.")
    OutlinedTextField(
        value = name, onValueChange = { name = it.take(60) }, label = { Text("Pattern name") },
        singleLine = true, modifier = Modifier.fillMaxWidth(),
    )
    OutlinedButton(
        onClick = {
            val label = name.trim()
            val existing = saved.firstOrNull { it.name == label }
            val pattern = IhtxOverlayPattern(existing?.id ?: UUID.randomUUID().toString(), label, gridSize, cells.toList())
            store(saved.filterNot { it.id == pattern.id } + pattern)
        },
        enabled = name.isNotBlank() && cells.isNotEmpty(),
    ) { Text("Save pattern") }
    saved.forEach { pattern ->
        Column {
            Text("${pattern.name} · ${pattern.gridSize} × ${pattern.gridSize} · ${pattern.cells.size} positions")
            Row {
                TextButton(onClick = { onLoad(pattern); name = pattern.name; cursor = IhtxGridCell(0, 0) }) { Text("Load") }
                TextButton(onClick = { store(saved.filterNot { it.id == pattern.id }) }) { Text("Delete") }
            }
        }
    }
}

@Composable
private fun PatternGrid(gridSize: Int, cells: List<IhtxGridCell>, cursor: IhtxGridCell) {
    val colors = MaterialTheme.colorScheme
    val description = cells.mapIndexed { index, cell -> "Overlay ${index + 1}: row ${cell.row + 1}, column ${cell.column + 1}" }.joinToString("; ")
    Canvas(Modifier.fillMaxWidth().height(260.dp).semantics { contentDescription = description.ifEmpty { "Empty overlay pattern" } }) {
        val edge = minOf(size.width, size.height)
        val cellSize = edge / gridSize
        val paint = Paint(Paint.ANTI_ALIAS_FLAG).apply {
            color = colors.onSecondaryContainer.toArgb()
            textAlign = Paint.Align.CENTER
            textSize = cellSize * .3f
        }
        for (row in 0 until gridSize) for (column in 0 until gridSize) {
            val cell = IhtxGridCell(row, column)
            val at = Offset(column * cellSize, row * cellSize)
            val numbers = cells.withIndex().filter { it.value == cell }.map { it.index + 1 }
            drawRect(if (numbers.isEmpty()) colors.surfaceVariant else colors.secondaryContainer, at, Size(cellSize, cellSize))
            drawRect(colors.outline, at, Size(cellSize, cellSize), style = Stroke(1.dp.toPx()))
            if (cell == cursor) drawRect(colors.primary, at + Offset(3f, 3f), Size(cellSize - 6f, cellSize - 6f), style = Stroke(3.dp.toPx()))
            if (numbers.isNotEmpty()) {
                val label = if (numbers.size > 2) "${numbers.first()}…" else numbers.joinToString(",")
                drawContext.canvas.nativeCanvas.drawText(label, at.x + cellSize / 2, at.y + cellSize * .6f, paint)
            }
        }
    }
}

/** A native C plug-in an IHTX export needs that hasn't been approved on this phone yet. */
internal data class PendingNativePlugin(val source: String, val audio: Boolean, val usedIn: String)

/**
 * The enabled native C plug-ins in [project], the queued [presets] and the IHTX [overlays] that
 * still need local approval, one entry per distinct source.
 */
internal fun pendingNativePlugins(
    project: dev.lec.effectapp.model.EditProject,
    presets: List<EffectPreset>,
    overlays: List<dev.lec.effectapp.model.Overlay>,
): List<PendingNativePlugin> {
    fun from(label: String, segments: List<dev.lec.effectapp.model.TimelineSegment>) = segments
        .filter { it.enabled && dev.lec.effectapp.model.NativePluginPolicy.isNative(it) }
        .map { PendingNativePlugin(it.stringParams["source"].orEmpty(), it.effectId == "plugin_audio", label) }
    val all = project.clips.flatMap { clip ->
        from(clip.displayName, clip.effectSegments + clip.audioSegments) +
            clip.overlays.flatMap { from(it.displayName, it.effectSegments + it.audioSegments) }
    } + presets.flatMap { from("Preset “${it.name}”", it.effectSegments + it.audioSegments) } +
        overlays.flatMap { from("Overlay “${it.displayName}”", it.effectSegments + it.audioSegments) }
    return all.distinctBy { it.source to it.audio }
        .filterNot { dev.lec.effectapp.effects.NativeCClient.approved(it.source, it.audio) }
}

/**
 * "Allow all plug-ins" for IHTX exports. Ticking it asks for confirmation first; confirming
 * compiles and approves every listed plug-in on this phone, exactly as approving each one in
 * its source editor would.
 */
@Composable
internal fun IhtxPluginApproval(pending: List<PendingNativePlugin>) {
    if (pending.isEmpty()) return
    val scope = androidx.compose.runtime.rememberCoroutineScope()
    var confirming by remember { mutableStateOf(false) }
    var working by remember { mutableStateOf(false) }
    var error by remember(pending) { mutableStateOf<String?>(null) }
    val online = dev.lec.effectapp.effects.NativeCClient.onlineBlocked

    Text("Plug-ins need approval", style = MaterialTheme.typography.titleMedium, color = MaterialTheme.colorScheme.error)
    Text("This export uses ${pending.size} native C plug-in${if (pending.size == 1) "" else "s"} not yet approved on this phone:")
    pending.forEach { plugin ->
        Text(
            "• ${if (plugin.audio) "Audio" else "Video"} plug-in in ${plugin.usedIn} · ${plugin.source.lines().size} lines",
            style = MaterialTheme.typography.bodySmall,
        )
    }
    Row(
        Modifier.fillMaxWidth().semantics { contentDescription = "Allow all plug-ins" },
        verticalAlignment = androidx.compose.ui.Alignment.CenterVertically,
    ) {
        androidx.compose.material3.Checkbox(
            checked = working,
            onCheckedChange = { checked -> if (checked) confirming = true },
            enabled = !working && !online,
        )
        Text(if (working) "Approving plug-ins…" else "Allow all plug-ins")
    }
    if (online) Text("Native C plug-ins are offline-only. Leave the online room to approve them.", color = MaterialTheme.colorScheme.error)
    error?.let { Text("Couldn't approve: $it", color = MaterialTheme.colorScheme.error) }

    if (confirming) {
        androidx.compose.material3.AlertDialog(
            onDismissRequest = { confirming = false },
            title = { Text("Allow all ${pending.size} plug-in${if (pending.size == 1) "" else "s"}?") },
            text = {
                Column(verticalArrangement = Arrangement.spacedBy(8.dp)) {
                    Text(dev.lec.effectapp.model.NativePluginPolicy.WARNING, color = MaterialTheme.colorScheme.error, style = MaterialTheme.typography.titleMedium)
                    Text("Native C plug-ins run compiled code on this phone. Approving them all skips reviewing each one's source. They stay approved for future exports and in the editor.")
                    pending.forEach { Text("• ${if (it.audio) "Audio" else "Video"} plug-in in ${it.usedIn}", style = MaterialTheme.typography.bodySmall) }
                }
            },
            confirmButton = {
                TextButton(onClick = {
                    confirming = false
                    working = true
                    error = null
                    scope.launch {
                        // Each one is compiled before it's approved; stop at the first that fails.
                        for (plugin in pending) {
                            val result = kotlinx.coroutines.withContext(kotlinx.coroutines.Dispatchers.IO) {
                                runCatching { dev.lec.effectapp.effects.NativeCClient.compileAndApprove(plugin.source, plugin.audio) }
                            }
                            result.exceptionOrNull()?.let { failure ->
                                error = "${if (plugin.audio) "audio" else "video"} plug-in in ${plugin.usedIn}: ${failure.message ?: failure.javaClass.simpleName}"
                            }
                            if (result.isFailure) break
                        }
                        working = false
                    }
                }) { Text("Allow all") }
            },
            dismissButton = { TextButton(onClick = { confirming = false }) { Text("Cancel") } },
        )
    }
}
