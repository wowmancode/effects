package dev.lec.effectapp.model

import kotlinx.serialization.Serializable
import kotlinx.serialization.encodeToString
import kotlinx.serialization.json.Json

@Serializable
data class IhtxGridCell(val row: Int, val column: Int) {
    fun move(direction: IhtxDirection, gridSize: Int): IhtxGridCell? {
        val next = copy(row = row + direction.row, column = column + direction.column)
        return next.takeIf { it.row in 0 until gridSize && it.column in 0 until gridSize }
    }
}

enum class IhtxDirection(val row: Int, val column: Int) {
    UP(-1, 0), DOWN(1, 0), LEFT(0, -1), RIGHT(0, 1),
}

enum class IhtxPatternKind(val label: String) {
    ROWS("Rows"), COLUMNS("Columns"), SNAKE("Snake"), SPIRAL("Spiral");

    fun cells(size: Int): List<IhtxGridCell> {
        require(size in 1..16) { "Grid size must be between 1 and 16." }
        return when (this) {
            ROWS -> (0 until size).flatMap { row -> (0 until size).map { IhtxGridCell(row, it) } }
            COLUMNS -> (0 until size).flatMap { column -> (0 until size).map { IhtxGridCell(it, column) } }
            SNAKE -> (0 until size).flatMap { row ->
                val columns = if (row % 2 == 0) (0 until size).toList() else (0 until size).reversed().toList()
                columns.map { IhtxGridCell(row, it) }
            }
            SPIRAL -> buildList {
                var top = 0; var bottom = size - 1; var left = 0; var right = size - 1
                while (top <= bottom && left <= right) {
                    for (column in left..right) add(IhtxGridCell(top, column))
                    top++
                    for (row in top..bottom) add(IhtxGridCell(row, right))
                    right--
                    if (top <= bottom) {
                        for (column in right downTo left) add(IhtxGridCell(bottom, column))
                        bottom--
                    }
                    if (left <= right) {
                        for (row in bottom downTo top) add(IhtxGridCell(row, left))
                        left++
                    }
                }
            }
        }
    }
}

@Serializable
data class IhtxOverlayPattern(val id: String, val name: String, val gridSize: Int, val cells: List<IhtxGridCell>) {
    init {
        require(gridSize in 1..16) { "Grid size must be between 1 and 16." }
        require(cells.isNotEmpty() && cells.size <= 256) { "A pattern needs 1 to 256 positions." }
        require(cells.all { it.row in 0 until gridSize && it.column in 0 until gridSize }) { "Pattern positions must be inside the grid." }
    }
}

object IhtxPatternLibraryJson {
    private val json = Json { ignoreUnknownKeys = true; encodeDefaults = true }
    fun encode(patterns: List<IhtxOverlayPattern>): String = json.encodeToString(patterns)
    fun decode(value: String): List<IhtxOverlayPattern> = json.decodeFromString(value)
}

/** Presets and overlay placements advance between blocks; every output feeds into the next. */
data class IhtxPlan(
    val base: EditProject,
    val exportsPerPreset: Int,
    val presets: List<EffectPreset> = emptyList(),
    val overlays: List<Overlay> = emptyList(),
    val gridSize: Int = 2,
    val pattern: List<IhtxGridCell> = emptyList(),
) {
    init {
        require(base.clips.isNotEmpty()) { "A project needs at least one clip." }
        require(exportsPerPreset in 1..1_000) { "Exports must be between 1 and 1000." }
        require(gridSize in 1..16) { "Grid size must be between 1 and 16." }
        require(pattern.size <= 256 && pattern.all { it.row in 0 until gridSize && it.column in 0 until gridSize }) {
            "Pattern positions must be inside the grid (up to 256 positions)."
        }
        require(exportsPerPreset.toLong() * maxOf(presets.size.toLong(), overlays.size.toLong() + 1) <= 10_000) {
            "Use fewer exports, presets, or overlays (maximum 10000 exports)."
        }
    }

    val exportsPerStage: Int get() = exportsPerPreset
    val totalExports: Int get() = exportsPerPreset * maxOf(presets.size, overlays.size + 1)

    fun presetForPass(index: Int): EffectPreset? {
        require(index in 0 until totalExports)
        return if (presets.isEmpty()) null else presets[(index / exportsPerPreset) % presets.size]
    }

    fun mutesBaseAudio(index: Int): Boolean = index > 0 && index % exportsPerStage == 0 && index / exportsPerStage <= overlays.size

    fun cellForOverlay(index: Int): IhtxGridCell {
        require(index >= 0)
        val cells = pattern.ifEmpty { IhtxPatternKind.ROWS.cells(gridSize) }
        return cells[index % cells.size]
    }

    fun firstProject(): EditProject = presetForPass(0)?.let { preset ->
        base.copy(clips = base.clips.map { withPreset(it, preset) })
    } ?: base

    fun nextProject(previousUri: String, index: Int, audioLeadMs: Long = 0): EditProject {
        require(index in 1 until totalExports)
        val template = base.clips.first()
        var clip = template.copy(
            sourceUri = previousUri, trimStartMs = 0, trimEndMs = base.durationMs, speed = 1f,
            overlays = emptyList(), videoOverride = null, audioOverride = null,
        )
        presetForPass(index)?.let { clip = withPreset(clip, it) }
        if (audioLeadMs > 0 && clip.audioSegments.none { it.enabled && it.effectId == "reverse_audio" }) {
            clip = clip.copy(audioOverride = SourceOverride(previousUri, audioLeadMs))
        }
        if (mutesBaseAudio(index)) {
            val overlayIndex = index / exportsPerStage - 1
            val cell = cellForOverlay(overlayIndex)
            val tile = overlays[overlayIndex].copy(
                startMs = 0, endMs = clip.durationMs,
                scale = 1.02f / gridSize,
                offsetX = ((cell.column + .5f) / gridSize) * 2f - 1f,
                offsetY = 1f - ((cell.row + .5f) / gridSize) * 2f,
            )
            clip = clip.copy(overlays = clip.overlays + tile)
        }
        return base.copy(clips = listOf(clip))
    }

    private fun withPreset(clip: Clip, preset: EffectPreset): Clip {
        val updated = clip.copy(
            effectSegments = preset.effectSegments.mapIndexed { index, segment ->
                segment.copy(id = "ihtx-video-$index").forWholeClip(clip.durationMs)
            },
            audioSegments = preset.audioSegments.mapIndexed { index, segment ->
                segment.copy(id = "ihtx-audio-$index").forWholeClip(clip.durationMs)
            },
            videoOverride = null, audioOverride = null,
        )
        return preset.replacementAudio?.applyTo(updated, "ihtx-replacement-audio") ?: updated
    }
}
