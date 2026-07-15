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
import dev.lec.effectapp.model.PresetLibraryJson
import dev.lec.effectapp.model.ProjectJson
import dev.lec.effectapp.model.PresetJson
import dev.lec.effectapp.model.TimelineSegment
import dev.lec.effectapp.model.TransformSettings
import java.util.UUID
import kotlinx.coroutines.flow.MutableStateFlow
import kotlinx.coroutines.flow.StateFlow
import kotlinx.coroutines.flow.asStateFlow

class EditorViewModel(application: Application) : AndroidViewModel(application) {
    private val presetFile = application.filesDir.resolve("effect-presets.json")
    private val _project = MutableStateFlow(EditProject())
    val project: StateFlow<EditProject> = _project.asStateFlow()

    private val _selection = MutableStateFlow<Selection?>(null)
    val selection: StateFlow<Selection?> = _selection.asStateFlow()

    init {
        val savedPresets = runCatching {
            if (presetFile.exists()) PresetLibraryJson.decode(presetFile.readText()) else emptyList()
        }.getOrDefault(emptyList())
        if (savedPresets.isNotEmpty()) _project.value = _project.value.copy(presets = savedPresets)
    }

    fun addClip(uri: String, displayName: String, durationMs: Long) {
        val clip = Clip(
            id = UUID.randomUUID().toString(),
            sourceUri = uri,
            displayName = displayName,
            trimEndMs = durationMs.coerceAtLeast(1),
        )
        _project.value = _project.value.copy(clips = _project.value.clips + clip)
    }

    fun moveClip(index: Int, delta: Int) {
        val clips = _project.value.clips.toMutableList()
        val destination = (index + delta).coerceIn(clips.indices)
        if (index == destination) return
        val clip = clips.removeAt(index)
        clips.add(destination, clip)
        _project.value = _project.value.copy(clips = clips)
    }

    fun removeClip(id: String) {
        _project.value = _project.value.copy(clips = _project.value.clips.filterNot { it.id == id })
        if (_selection.value?.clipId == id) _selection.value = null
    }

    fun replaceClipMedia(id: String, uri: String, displayName: String, durationMs: Long) {
        updateClip(id) { withReplacedMedia(uri, displayName, durationMs) }
    }

    /** Snips [clipId] at [atLocalMs] (local to the clip) into two independent clips. */
    fun splitClip(clipId: String, atLocalMs: Long) {
        val clips = _project.value.clips
        val index = clips.indexOfFirst { it.id == clipId }
        if (index == -1) return
        val clip = clips[index]
        if (clip.durationMs <= 1) return
        val split = atLocalMs.coerceIn(1, clip.durationMs - 1)
        val boundary = clip.trimStartMs + split
        val tailDuration = clip.durationMs - split
        val first = clip.copy(
            id = UUID.randomUUID().toString(),
            trimEndMs = boundary,
            effectSegments = clip.effectSegments.map { it.forWholeClip(split) },
            audioSegments = clip.audioSegments.map { it.forWholeClip(split) },
            overlays = clip.overlays.mapNotNull { it.clampedToRange(0, split, clip.durationMs) },
        )
        val second = clip.copy(
            id = UUID.randomUUID().toString(),
            trimStartMs = boundary,
            effectSegments = clip.effectSegments.map { it.forWholeClip(tailDuration) },
            audioSegments = clip.audioSegments.map { it.forWholeClip(tailDuration) },
            overlays = clip.overlays.mapNotNull { it.shiftedInto(split, tailDuration, clip.durationMs) },
        )
        _project.value = _project.value.copy(
            clips = clips.toMutableList().apply { set(index, first); add(index + 1, second) },
        )
        _selection.value = null
    }

    fun addOverlay(clipId: String, uri: String, displayName: String, isVideo: Boolean) {
        updateClip(clipId) {
            copy(
                overlays = overlays + Overlay(
                    id = UUID.randomUUID().toString(),
                    sourceUri = uri,
                    displayName = displayName,
                    isVideo = isVideo,
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
        _project.value = _project.value.copy(presets = _project.value.presets + preset)
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

    fun importPresetLibrary(json: String) {
        val restored = PresetLibraryJson.decode(json).map { it.copy(thumbnailPath = null) }
        val merged = (_project.value.presets + restored)
            .associateBy { it.id }
            .values
            .toList()
        _project.value = _project.value.copy(presets = merged)
        persistPresets()
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
        val imported = decoded.map { preset ->
            preset.copy(
                id = UUID.randomUUID().toString(),
                thumbnailPath = null,
                effectSegments = preset.effectSegments.map { it.copy(id = "") },
                audioSegments = preset.audioSegments.map { it.copy(id = "") },
            )
        }
        _project.value = _project.value.copy(presets = _project.value.presets + imported)
        persistPresets()
        return imported.size
    }

    fun importPreset(json: String) {
        val decoded = PresetJson.decode(json)
        val imported = decoded.copy(
            id = UUID.randomUUID().toString(),
            thumbnailPath = null,
            effectSegments = decoded.effectSegments.map { it.copy(id = "") },
            audioSegments = decoded.audioSegments.map { it.copy(id = "") },
        )
        _project.value = _project.value.copy(presets = _project.value.presets + imported)
        persistPresets()
    }

    fun encode(): String = ProjectJson.encode(_project.value)

    fun load(json: String) {
        val loaded = ProjectJson.decode(json)
        val mergedPresets = (_project.value.presets + loaded.presets)
            .associateBy { it.id }
            .values
            .toList()
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
    }

    private fun updateClip(id: String, transform: Clip.() -> Clip) {
        _project.value = _project.value.copy(clips = _project.value.clips.map { if (it.id == id) it.transform() else it })
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
}

/** Keeps the part of an overlay that falls inside [start, end] of the first split half. */
private fun Overlay.clampedToRange(start: Long, end: Long, clipDurationMs: Long): Overlay? {
    val effectiveEnd = if (endMs <= startMs) clipDurationMs else endMs
    val newStart = startMs.coerceIn(start, end)
    val newEnd = effectiveEnd.coerceIn(start, end)
    if (newEnd <= newStart) return null
    return copy(startMs = newStart, endMs = newEnd)
}

/** Shifts an overlay into the second split half, dropping it if it ended before the cut. */
private fun Overlay.shiftedInto(split: Long, tailDurationMs: Long, clipDurationMs: Long): Overlay? {
    val effectiveEnd = if (endMs <= startMs) clipDurationMs else endMs
    if (effectiveEnd <= split) return null
    val newStart = (startMs - split).coerceIn(0, tailDurationMs)
    val newEnd = (effectiveEnd - split).coerceIn(0, tailDurationMs)
    if (newEnd <= newStart) return null
    return copy(startMs = newStart, endMs = newEnd)
}

private fun List<TimelineSegment>.moved(segmentId: String, delta: Int): List<TimelineSegment> {
    val source = indexOfFirst { it.id == segmentId }
    if (source == -1) return this
    val destination = (source + delta).coerceIn(indices)
    if (source == destination) return this
    return toMutableList().apply { add(destination, removeAt(source)) }
}

data class Selection(
    val clipId: String,
    val segmentId: String?,
    val category: EffectCategory,
)
