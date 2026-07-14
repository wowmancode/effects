package dev.lec.effectapp

import androidx.lifecycle.ViewModel
import dev.lec.effectapp.effects.EffectCategory
import dev.lec.effectapp.effects.EffectRegistry
import dev.lec.effectapp.model.Clip
import dev.lec.effectapp.model.EditProject
import dev.lec.effectapp.model.ProjectJson
import dev.lec.effectapp.model.TimelineSegment
import dev.lec.effectapp.model.TransformSettings
import java.util.UUID
import kotlinx.coroutines.flow.MutableStateFlow
import kotlinx.coroutines.flow.StateFlow
import kotlinx.coroutines.flow.asStateFlow

class EditorViewModel : ViewModel() {
    private val _project = MutableStateFlow(EditProject())
    val project: StateFlow<EditProject> = _project.asStateFlow()

    private val _selection = MutableStateFlow<Selection?>(null)
    val selection: StateFlow<Selection?> = _selection.asStateFlow()

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

    fun encode(): String = ProjectJson.encode(_project.value)

    fun load(json: String) {
        val loaded = ProjectJson.decode(json)
        _project.value = loaded.copy(
            clips = loaded.clips.map { clip ->
                clip.copy(
                    effectSegments = clip.effectSegments.map { it.forWholeClip(clip.durationMs) },
                    audioSegments = clip.audioSegments.map { it.forWholeClip(clip.durationMs) },
                )
            },
        )
        _selection.value = null
    }

    private fun updateClip(id: String, transform: Clip.() -> Clip) {
        _project.value = _project.value.copy(clips = _project.value.clips.map { if (it.id == id) it.transform() else it })
    }
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
