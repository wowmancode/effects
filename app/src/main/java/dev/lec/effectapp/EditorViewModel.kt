package dev.lec.effectapp

import android.app.Application
import android.net.Uri
import androidx.lifecycle.AndroidViewModel
import dev.lec.effectapp.effects.EffectCategory
import dev.lec.effectapp.effects.DEFAULT_AUDIO_PLUGIN_SOURCE
import dev.lec.effectapp.effects.DEFAULT_VIDEO_PLUGIN_SOURCE
import dev.lec.effectapp.effects.EffectRegistry
import dev.lec.effectapp.model.Clip
import dev.lec.effectapp.model.EditProject
import dev.lec.effectapp.model.EffectKeyframe
import dev.lec.effectapp.model.EffectPreset
import dev.lec.effectapp.model.Overlay
import dev.lec.effectapp.model.OverlayKeyframe
import dev.lec.effectapp.model.PresetLibraryJson
import dev.lec.effectapp.model.ProjectJson
import dev.lec.effectapp.model.PresetJson
import dev.lec.effectapp.model.TimelineSegment
import dev.lec.effectapp.model.TransformSettings
import dev.lec.effectapp.model.veg.VegImporter
import java.util.UUID
import kotlin.math.roundToLong
import kotlinx.coroutines.flow.MutableStateFlow
import kotlinx.coroutines.flow.StateFlow
import kotlinx.coroutines.flow.asStateFlow

class EditorViewModel(application: Application) : AndroidViewModel(application), SliderGesture {
    private val undoStack = ArrayDeque<EditProject>()
    private val redoStack = ArrayDeque<EditProject>()
    private val maxHistory = 80
    private val presetFile = application.filesDir.resolve("effect-presets.json")
    private val _project = MutableStateFlow(EditProject())
    val project: StateFlow<EditProject> = _project.asStateFlow()

    private val _selection = MutableStateFlow<Selection?>(null)
    val selection: StateFlow<Selection?> = _selection.asStateFlow()

    /** Media the open project reads but this device can't open; shown so it can be located. */
    private val _missingMedia = MutableStateFlow<List<MissingMedia>>(emptyList())
    val missingMedia: StateFlow<List<MissingMedia>> = _missingMedia.asStateFlow()

    /** Notes from the last project opened from another format (what didn't carry over). */
    private val _openNotes = MutableStateFlow<List<String>>(emptyList())
    val openNotes: StateFlow<List<String>> = _openNotes.asStateFlow()

    /** Bumped each time a project is opened, so the missing-media prompt shows again. */
    private val _missingPrompt = MutableStateFlow(0)
    val missingPrompt: StateFlow<Int> = _missingPrompt.asStateFlow()

    init {
        val savedPresets = runCatching {
            if (presetFile.exists()) PresetLibraryJson.decode(presetFile.readText()) else emptyList()
        }.getOrDefault(emptyList())
        if (savedPresets.isNotEmpty()) {
            _project.value = _project.value.copy(presets = deduplicatePresets(savedPresets))
            persistPresets()
        }
    }

    fun addClip(uri: String, displayName: String, durationMs: Long) {
        recordUndo()
        val clip = Clip(
            id = UUID.randomUUID().toString(),
            sourceUri = uri,
            displayName = displayName,
            trimEndMs = durationMs.coerceAtLeast(1),
        )
        _project.value = _project.value.copy(clips = _project.value.clips + clip)
    }

    fun duplicateClip(id: String): String? {
        val clips = _project.value.clips
        val index = clips.indexOfFirst { it.id == id }
        if (index == -1) return null
        recordUndo()
        val original = clips[index]
        val duplicate = original.copy(
            id = UUID.randomUUID().toString(),
            displayName = original.displayName + " copy",
            effectSegments = original.effectSegments.map { it.copy(id = UUID.randomUUID().toString()) },
            audioSegments = original.audioSegments.map { it.copy(id = UUID.randomUUID().toString()) },
            overlays = original.overlays.map { overlay ->
                overlay.copy(
                    id = UUID.randomUUID().toString(),
                    effectSegments = overlay.effectSegments.map { it.copy(id = UUID.randomUUID().toString()) },
                    audioSegments = overlay.audioSegments.map { it.copy(id = UUID.randomUUID().toString()) },
                )
            },
        )
        _project.value = _project.value.copy(clips = clips.toMutableList().apply { add(index + 1, duplicate) })
        _selection.value = null
        return duplicate.id
    }

    fun moveClip(index: Int, delta: Int) {
        val clips = _project.value.clips.toMutableList()
        val destination = (index + delta).coerceIn(clips.indices)
        if (index == destination) return
        recordUndo()
        val clip = clips.removeAt(index)
        clips.add(destination, clip)
        _project.value = _project.value.copy(clips = clips)
    }

    fun removeClip(id: String) {
        recordUndo()
        _project.value = _project.value.copy(clips = _project.value.clips.filterNot { it.id == id })
        if (_selection.value?.clipId == id) _selection.value = null
    }

    fun replaceClipMedia(id: String, uri: String, displayName: String, durationMs: Long) {
        val clip = _project.value.clips.find { it.id == id } ?: return
        if (clip.mediaMissing) {
            // Locating a missing file: every cut of it keeps its in-point, length and speed.
            relinkMedia(clip.sourceUri, uri, displayName, durationMs)
            return
        }
        updateClip(id) { withReplacedMedia(uri, displayName, durationMs) }
    }

    /** Points everything that reads [oldUri] at [newUri] (see EditProject.relinkSource). */
    fun relinkMedia(oldUri: String, newUri: String, displayName: String, durationMs: Long) {
        recordUndo()
        _project.value = _project.value.relinkSource(oldUri, newUri, displayName, durationMs)
        refreshMissingMedia()
    }

    fun dismissOpenNotes() {
        _openNotes.value = emptyList()
    }

    private fun refreshMissingMedia() {
        val project = _project.value
        val names = buildMap {
            project.clips.forEach { clip ->
                putIfAbsent(clip.sourceUri, clip.displayName)
                clip.overlays.forEach { putIfAbsent(it.sourceUri, it.displayName) }
            }
        }
        _missingMedia.value = project.sourceUris()
            .filterNot(::canReadMedia)
            .map { uri -> MissingMedia(uri, VegImporter.missingFileName(uri) ?: names[uri] ?: uri) }
            .sortedBy { it.name.lowercase() }
    }

    /** Snips [clipId] at [atLocalMs] (local to the clip) into two independent clips. */
    fun splitClip(clipId: String, atLocalMs: Long) {
        recordUndo()
        val clips = _project.value.clips
        val index = clips.indexOfFirst { it.id == clipId }
        if (index == -1) return
        val clip = clips[index]
        if (clip.durationMs <= 1) return
        val split = atLocalMs.coerceIn(1, clip.durationMs - 1)
        val tailDuration = clip.durationMs - split
        // The tail starts where the source is at the split (speed× the elapsed time).
        val tailInPoint = clip.sourceMsAt(split)
        val first = clip.copy(
            id = UUID.randomUUID().toString(),
            trimEndMs = clip.trimStartMs + split,
            effectSegments = clip.effectSegments.map { it.forWholeClip(split) },
            audioSegments = clip.audioSegments.map { it.forWholeClip(split) },
            overlays = clip.overlays.mapNotNull { it.clampedToRange(0, split, clip.durationMs) },
        )
        val second = clip.copy(
            id = UUID.randomUUID().toString(),
            trimStartMs = tailInPoint,
            trimEndMs = tailInPoint + tailDuration,
            effectSegments = clip.effectSegments.map { it.forWholeClip(tailDuration) },
            audioSegments = clip.audioSegments.map { it.forWholeClip(tailDuration) },
            overlays = clip.overlays.mapNotNull { it.shiftedInto(split, tailDuration, clip.durationMs) },
        )
        _project.value = _project.value.copy(
            clips = clips.toMutableList().apply { set(index, first); add(index + 1, second) },
        )
        _selection.value = null
    }

    fun addOverlay(
        clipId: String,
        uri: String,
        displayName: String,
        isVideo: Boolean,
        sourceDurationMs: Long = 0,
    ) {
        updateClip(clipId) {
            copy(
                overlays = overlays + Overlay(
                    id = UUID.randomUUID().toString(),
                    sourceUri = uri,
                    displayName = displayName,
                    isVideo = isVideo,
                    sourceDurationMs = sourceDurationMs.coerceAtLeast(0),
                    startMs = 0,
                    endMs = durationMs,
                ),
            )
        }
    }

    fun updateOverlay(clipId: String, overlayId: String, transform: (Overlay) -> Overlay) {
        updateClip(clipId) { copy(overlays = overlays.map { if (it.id == overlayId) transform(it) else it }) }
    }

    fun removeOverlay(clipId: String, overlayId: String) {
        updateClip(clipId) { copy(overlays = overlays.filterNot { it.id == overlayId }) }
    }

    fun moveOverlay(clipId: String, overlayId: String, direction: Int) {
        updateClip(clipId) {
            val from = overlays.indexOfFirst { it.id == overlayId }
            if (from < 0) return@updateClip this
            val to = (from + direction).coerceIn(0, overlays.lastIndex)
            if (from == to) return@updateClip this
            copy(overlays = overlays.toMutableList().apply {
                add(to, removeAt(from))
            })
        }
    }

    fun addOverlayKeyframe(clipId: String, overlayId: String, timeMs: Long) {
        updateOverlay(clipId, overlayId) { overlay ->
            val time = timeMs.coerceAtLeast(0)
            val values = overlay.valuesAt(time)
            overlay.copy(
                keyframes = (overlay.keyframes.filterNot { it.timeMs == time } + OverlayKeyframe(
                    timeMs = time,
                    alpha = values.alpha,
                    scale = values.scale,
                    offsetX = values.offsetX,
                    offsetY = values.offsetY,
                )).sortedBy { it.timeMs },
            )
        }
    }

    fun updateOverlayKeyframe(
        clipId: String,
        overlayId: String,
        timeMs: Long,
        transform: (OverlayKeyframe) -> OverlayKeyframe,
    ) {
        updateOverlay(clipId, overlayId) { overlay ->
            overlay.copy(keyframes = overlay.keyframes.map { if (it.timeMs == timeMs) transform(it) else it })
        }
    }

    /**
     * Moves an overlay from the preview. Without animation keyframes this sets its position;
     * with keyframes it sets (adding if needed) the keyframe at [timeMs].
     */
    fun moveOverlayTo(clipId: String, overlayId: String, timeMs: Long, offsetX: Float, offsetY: Float) {
        updateOverlay(clipId, overlayId) { overlay ->
            val x = offsetX.coerceIn(-1f, 1f)
            val y = offsetY.coerceIn(-1f, 1f)
            if (overlay.keyframes.isEmpty()) return@updateOverlay overlay.copy(offsetX = x, offsetY = y)
            val time = timeMs.coerceAtLeast(0)
            val values = overlay.valuesAt(time)
            val existing = overlay.keyframes.find { it.timeMs == time }
                ?: OverlayKeyframe(time, values.alpha, values.scale, values.offsetX, values.offsetY)
            overlay.copy(
                keyframes = (overlay.keyframes.filterNot { it.timeMs == time } +
                    existing.copy(offsetX = x, offsetY = y)).sortedBy { it.timeMs },
            )
        }
    }

    fun removeOverlayKeyframe(clipId: String, overlayId: String, timeMs: Long) {
        updateOverlay(clipId, overlayId) { overlay ->
            overlay.copy(keyframes = overlay.keyframes.filterNot { it.timeMs == timeMs })
        }
    }

    fun addOverlayEffect(clipId: String, overlayId: String, effectId: String) {
        val effect = requireNotNull(EffectRegistry.byId(effectId))
        updateOverlay(clipId, overlayId) { overlay ->
            val duration = (overlay.endMs - overlay.startMs).coerceAtLeast(1)
            val segment = TimelineSegment(
                id = UUID.randomUUID().toString(),
                effectId = effectId,
                startMs = 0,
                endMs = duration,
                params = effect.params.associate { it.id to it.default },
                stringParams = when (effectId) {
                    "plugin_video" -> mapOf("source" to DEFAULT_VIDEO_PLUGIN_SOURCE)
                    "plugin_audio" -> mapOf("source" to DEFAULT_AUDIO_PLUGIN_SOURCE)
                    else -> emptyMap()
                },
            )
            if (effect.category == EffectCategory.AUDIO) {
                overlay.copy(audioSegments = overlay.audioSegments + segment)
            } else {
                overlay.copy(effectSegments = overlay.effectSegments + segment)
            }
        }
    }

    fun updateOverlayEffect(
        clipId: String,
        overlayId: String,
        segmentId: String,
        transform: (TimelineSegment) -> TimelineSegment,
    ) {
        updateOverlay(clipId, overlayId) { overlay ->
            overlay.copy(
                effectSegments = overlay.effectSegments.map { if (it.id == segmentId) transform(it) else it },
                audioSegments = overlay.audioSegments.map { if (it.id == segmentId) transform(it) else it },
            )
        }
    }

    fun removeOverlayEffect(clipId: String, overlayId: String, segmentId: String) {
        updateOverlay(clipId, overlayId) { overlay ->
            overlay.copy(
                effectSegments = overlay.effectSegments.filterNot { it.id == segmentId },
                audioSegments = overlay.audioSegments.filterNot { it.id == segmentId },
            )
        }
    }

    fun moveOverlayEffect(clipId: String, overlayId: String, segmentId: String, delta: Int) {
        updateOverlay(clipId, overlayId) { overlay ->
            if (overlay.audioSegments.any { it.id == segmentId }) {
                overlay.copy(audioSegments = overlay.audioSegments.moved(segmentId, delta))
            } else {
                overlay.copy(effectSegments = overlay.effectSegments.moved(segmentId, delta))
            }
        }
    }

    fun selectClip(id: String) {
        _selection.value = Selection(id, null, EffectCategory.TRANSFORM)
    }

    fun selectSegment(clipId: String, segmentId: String, category: EffectCategory) {
        _selection.value = Selection(clipId, segmentId, category)
    }

    fun clearSelection() {
        _selection.value = null
    }

    fun addSegment(clipId: String, effectId: String) {
        val effect = requireNotNull(EffectRegistry.byId(effectId))
        val clip = requireNotNull(_project.value.clips.find { it.id == clipId })
        val isAudio = effect.category == EffectCategory.AUDIO
        val segment = TimelineSegment(
            id = UUID.randomUUID().toString(),
            effectId = effectId,
            startMs = 0,
            endMs = clip.durationMs,
            params = effect.params.associate { it.id to it.default },
            stringParams = when (effectId) {
                "plugin_video" -> mapOf("source" to DEFAULT_VIDEO_PLUGIN_SOURCE)
                "plugin_audio" -> mapOf("source" to DEFAULT_AUDIO_PLUGIN_SOURCE)
                else -> emptyMap()
            },
        )
        updateClip(clipId) {
            if (isAudio) copy(audioSegments = audioSegments + segment)
            else copy(effectSegments = effectSegments + segment)
        }
        selectSegment(clipId, segment.id, effect.category)
    }

    fun updateSegment(clipId: String, segmentId: String, transform: (TimelineSegment) -> TimelineSegment) {
        updateClip(clipId) {
            copy(
                effectSegments = effectSegments.map {
                    if (it.id == segmentId) transform(it).copy(startMs = 0, endMs = durationMs) else it
                },
                audioSegments = audioSegments.map { if (it.id == segmentId) transform(it).forWholeClip(durationMs) else it },
            )
        }
    }

    fun addKeyframe(clipId: String, segmentId: String, timeMs: Long) {
        updateSegment(clipId, segmentId) { segment ->
            val time = timeMs.coerceIn(0, segment.durationMs)
            val keyframe = EffectKeyframe(time, segment.paramsAt(time).toMap())
            segment.copy(
                keyframes = (segment.keyframes.filterNot { it.timeMs == time } + keyframe)
                    .sortedBy { it.timeMs },
            )
        }
    }

    fun updateKeyframe(clipId: String, segmentId: String, timeMs: Long, params: Map<String, Float>) {
        updateSegment(clipId, segmentId) { segment ->
            segment.copy(
                keyframes = segment.keyframes.map {
                    if (it.timeMs == timeMs) it.copy(params = params) else it
                },
            )
        }
    }

    fun removeKeyframe(clipId: String, segmentId: String, timeMs: Long) {
        updateSegment(clipId, segmentId) { segment ->
            segment.copy(keyframes = segment.keyframes.filterNot { it.timeMs == timeMs })
        }
    }

    fun moveSelectedSegment(delta: Int) {
        val selected = _selection.value ?: return
        val segmentId = selected.segmentId ?: return
        updateClip(selected.clipId) {
            if (selected.category == EffectCategory.AUDIO) {
                copy(audioSegments = audioSegments.moved(segmentId, delta))
            } else {
                copy(effectSegments = effectSegments.moved(segmentId, delta))
            }
        }
    }

    fun removeSelectedSegment() {
        val selected = _selection.value ?: return
        val segmentId = selected.segmentId ?: return
        updateClip(selected.clipId) {
            copy(
                effectSegments = effectSegments.filterNot { it.id == segmentId },
                audioSegments = audioSegments.filterNot { it.id == segmentId },
            )
        }
        _selection.value = Selection(selected.clipId, null, selected.category)
    }

    fun updateTransform(clipId: String, value: TransformSettings) = updateClip(clipId) { copy(transform = value) }

    fun savePreset(name: String, clipId: String, thumbnailPath: String?) {
        val clip = _project.value.clips.find { it.id == clipId } ?: return
        val preset = EffectPreset(
            id = UUID.randomUUID().toString(),
            name = name.trim().ifEmpty { "Untitled preset" },
            thumbnailPath = thumbnailPath,
            effectSegments = clip.effectSegments.map { it.copy(id = "") },
            audioSegments = clip.audioSegments.map { it.copy(id = "") },
        )
        _project.value = _project.value.copy(presets = deduplicatePresets(_project.value.presets + preset))
        persistPresets()
    }

    fun applyPreset(presetId: String, clipId: String) {
        val preset = _project.value.presets.find { it.id == presetId } ?: return
        val clip = _project.value.clips.find { it.id == clipId } ?: return
        val visual = preset.effectSegments.map {
            it.copy(id = UUID.randomUUID().toString()).forWholeClip(clip.durationMs)
        }
        val audio = preset.audioSegments.map {
            it.copy(id = UUID.randomUUID().toString()).forWholeClip(clip.durationMs)
        }
        updateClip(clipId) {
            copy(
                effectSegments = effectSegments + visual,
                audioSegments = audioSegments + audio,
            )
        }
        val selected = visual.lastOrNull() ?: audio.lastOrNull()
        if (selected != null) {
            _selection.value = Selection(
                clipId = clipId,
                segmentId = selected.id,
                category = if (selected in visual) EffectCategory.EFFECTS else EffectCategory.AUDIO,
            )
        }
    }

    fun removePreset(id: String) {
        _project.value = _project.value.copy(presets = _project.value.presets.filterNot { it.id == id })
        persistPresets()
    }

    fun encodePreset(id: String): String? =
        _project.value.presets.find { it.id == id }?.let(PresetJson::encode)

    fun encodePresetLibrary(): String =
        PresetLibraryJson.encode(_project.value.presets.map { it.copy(thumbnailPath = null) })

    fun importPresetLibrary(json: String): Int {
        val restored = PresetLibraryJson.decode(json).map { it.copy(thumbnailPath = null) }
        val before = _project.value.presets.size
        val merged = deduplicatePresets(_project.value.presets + restored)
        _project.value = _project.value.copy(presets = merged)
        persistPresets()
        return (merged.size - before).coerceAtLeast(0)
    }

    /**
     * Imports every preset found across a set of archive entries (e.g. the JSON files inside an
     * imported zip). Each entry may be a single exported preset or a whole library. Malformed
     * entries are skipped. Returns how many presets were added.
     */
    fun importPresetArchive(entries: List<String>): Int {
        val decoded = entries.flatMap { raw ->
            runCatching { PresetLibraryJson.decodeFlexible(raw) }.getOrDefault(emptyList())
        }
        if (decoded.isEmpty()) return 0
        val imported = decoded.map(::prepareImportedPreset)
        val before = _project.value.presets.size
        val merged = deduplicatePresets(_project.value.presets + imported)
        _project.value = _project.value.copy(presets = merged)
        persistPresets()
        return (merged.size - before).coerceAtLeast(0)
    }

    fun importPreset(json: String) {
        val decoded = PresetJson.decode(json)
        val imported = prepareImportedPreset(decoded)
        _project.value = _project.value.copy(presets = deduplicatePresets(_project.value.presets + imported))
        persistPresets()
    }

    fun encode(): String = ProjectJson.encode(_project.value)

    fun load(json: String) {
        loadProject(ProjectJson.decode(json), notes = emptyList())
    }

    /** Opens [loaded] (from a project file or another format), keeping this device's presets. */
    fun loadProject(loaded: EditProject, notes: List<String>) {
        val mergedPresets = deduplicatePresets(_project.value.presets + loaded.presets)
        _project.value = loaded.copy(
            presets = mergedPresets,
            clips = loaded.clips.map { importedClip ->
                val clip = importedClip.copy(mediaMissing = !canReadMedia(importedClip.sourceUri))
                clip.copy(
                    effectSegments = clip.effectSegments.map { it.forWholeClip(clip.durationMs) },
                    audioSegments = clip.audioSegments.map { it.forWholeClip(clip.durationMs) },
                )
            },
        )
        persistPresets()
        _selection.value = null
        _openNotes.value = notes
        refreshMissingMedia()
        _missingPrompt.value++
    }

    private fun updateClip(id: String, transform: Clip.() -> Clip) {
        recordUndo()
        _project.value = _project.value.copy(clips = _project.value.clips.map { if (it.id == id) it.transform() else it })
    }

    fun canUndo(): Boolean = undoStack.isNotEmpty()
    fun canRedo(): Boolean = redoStack.isNotEmpty()

    fun undo() {
        val previous = undoStack.removeLastOrNull() ?: return
        redoStack.addLast(_project.value)
        _project.value = previous
        _selection.value = null
    }

    fun redo() {
        val next = redoStack.removeLastOrNull() ?: return
        undoStack.addLast(_project.value)
        _project.value = next
        _selection.value = null
    }

    // While a slider is being dragged, the whole drag is one undo step.
    private var gestureDepth = 0
    private var gestureRecorded = false

    override fun beginGesture() {
        if (gestureDepth++ == 0) gestureRecorded = false
    }

    override fun endGesture() {
        gestureDepth = (gestureDepth - 1).coerceAtLeast(0)
    }

    private fun recordUndo() {
        if (gestureDepth > 0) {
            if (gestureRecorded) return
            gestureRecorded = true
        }
        undoStack.addLast(_project.value); while (undoStack.size > maxHistory) undoStack.removeFirst(); redoStack.clear()
    }

    private fun canReadMedia(source: String): Boolean = runCatching {
        val uri = Uri.parse(source)
        when (uri.scheme?.lowercase()) {
            "http", "https" -> true
            "content", "file", "android.resource" -> {
                getApplication<Application>().contentResolver
                    .openAssetFileDescriptor(uri, "r")
                    ?.use { true }
                    ?: false
            }
            null -> java.io.File(source).isFile
            else -> false
        }
    }.getOrDefault(false)

    private fun persistPresets() {
        runCatching { presetFile.writeText(PresetLibraryJson.encode(_project.value.presets)) }
    }

    private fun prepareImportedPreset(preset: EffectPreset): EffectPreset = preset.copy(
        id = UUID.randomUUID().toString(),
        thumbnailPath = null,
        effectSegments = preset.effectSegments.map { it.copy(id = "") },
        audioSegments = preset.audioSegments.map { it.copy(id = "") },
    )

    /** Keeps the first in-app copy of identical preset content; source documents are never touched. */
    private fun deduplicatePresets(presets: List<EffectPreset>): List<EffectPreset> =
        presets.distinctBy { preset ->
            PresetJson.encode(
                preset.copy(
                    id = "",
                    thumbnailPath = null,
                    effectSegments = preset.effectSegments.map(TimelineSegment::normalizedForFingerprint),
                    audioSegments = preset.audioSegments.map(TimelineSegment::normalizedForFingerprint),
                ),
            )
        }

}

/** Keeps the part of an overlay that falls inside [start, end] of the first split half. */
private fun Overlay.clampedToRange(start: Long, end: Long, clipDurationMs: Long): Overlay? {
    val effectiveEnd = if (endMs <= startMs) clipDurationMs else endMs
    val newStart = startMs.coerceIn(start, end)
    val newEnd = effectiveEnd.coerceIn(start, end)
    if (newEnd <= newStart) return null
    return copy(
        startMs = newStart,
        endMs = newEnd,
        keyframes = keyframes.filter { it.timeMs in start..end },
        effectSegments = effectSegments.map { it.forWholeClip(end - start) },
        audioSegments = audioSegments.map { it.forWholeClip(end - start) },
    )
}

/** Shifts an overlay into the second split half, dropping it if it ended before the cut. */
private fun Overlay.shiftedInto(split: Long, tailDurationMs: Long, clipDurationMs: Long): Overlay? {
    val effectiveEnd = if (endMs <= startMs) clipDurationMs else endMs
    if (effectiveEnd <= split) return null
    val newStart = (startMs - split).coerceIn(0, tailDurationMs)
    val newEnd = (effectiveEnd - split).coerceIn(0, tailDurationMs)
    if (newEnd <= newStart) return null
    // A video or sound already playing at the split carries on from where it was.
    val playedMs = (split - startMs).coerceAtLeast(0)
    val playsSource = isVideo || audioOnly
    return copy(
        startMs = newStart,
        endMs = newEnd,
        sourceStartMs = if (playsSource) sourceStartMs + (playedMs * playbackSpeed.toDouble()).roundToLong() else sourceStartMs,
        keyframes = keyframes.mapNotNull { keyframe ->
            val shifted = keyframe.timeMs - split
            keyframe.copy(timeMs = shifted).takeIf { shifted in 0..tailDurationMs }
        },
        effectSegments = effectSegments.map { it.forWholeClip(tailDurationMs) },
        audioSegments = audioSegments.map { it.forWholeClip(tailDurationMs) },
    )
}

private fun TimelineSegment.normalizedForFingerprint(): TimelineSegment = copy(
    id = "",
    params = params.toSortedMap(),
    stringParams = stringParams.toSortedMap(),
    keyframes = keyframes.sortedBy { it.timeMs }.map { keyframe ->
        keyframe.copy(params = keyframe.params.toSortedMap())
    },
)

private fun List<TimelineSegment>.moved(segmentId: String, delta: Int): List<TimelineSegment> {
    val source = indexOfFirst { it.id == segmentId }
    if (source == -1) return this
    val destination = (source + delta).coerceIn(indices)
    if (source == destination) return this
    return toMutableList().apply { add(destination, removeAt(source)) }
}

data class MissingMedia(val uri: String, val name: String)

data class Selection(
    val clipId: String,
    val segmentId: String?,
    val category: EffectCategory,
)
