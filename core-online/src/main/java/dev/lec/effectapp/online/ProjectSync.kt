package dev.lec.effectapp.online

import dev.lec.effectapp.model.Clip
import dev.lec.effectapp.model.EditProject
import dev.lec.effectapp.model.Overlay
import dev.lec.effectapp.model.TimelineSegment
import kotlinx.serialization.SerialName
import kotlinx.serialization.Serializable

/**
 * The project as it travels between phones ("wire form"): every media reference is
 * `lecsync:<sha256>` instead of a path on someone's phone, presets stay private, and
 * device-only fields are cleared. Each phone maps hashes to its own files.
 */
object MediaRef {
    const val SCHEME = "lecsync:"
    private val PATTERN = Regex("lecsync:[0-9a-f]{64}")

    fun of(hash: String): String = SCHEME + hash
    fun isRef(uri: String): Boolean = PATTERN.matches(uri)
    fun hashOf(uri: String): String? = if (isRef(uri)) uri.removePrefix(SCHEME) else null

    /** String params that hold a media file rather than text. */
    fun isUriParam(key: String): Boolean = key.endsWith("_uri")
}

enum class Perm(val label: String) {
    ADD_MEDIA("Add media"),
    DELETE_MEDIA("Delete media"),
    EDIT_MEDIA("Trim, move and split media"),
    ADD_EFFECT("Add effects"),
    REMOVE_EFFECT("Remove effects"),
    EDIT_EFFECT("Change effect settings"),
}

/** Where a list of effects lives: a clip's (or one of its overlays') video or audio effects. */
@Serializable
data class SegmentList(val clipId: String, val overlayId: String? = null, val audio: Boolean = false)

/**
 * One change to a project. Changes name whole items (a clip's own settings, one overlay, one
 * effect), so two people editing different effects on the same clip don't overwrite each other.
 */
@Serializable
sealed class Op {
    @Serializable @SerialName("name")
    data class SetName(val name: String) : Op()

    /** A clip's own settings; its effects and overlays travel as separate ops. */
    @Serializable @SerialName("clip")
    data class PutClip(val clip: Clip) : Op()

    @Serializable @SerialName("clip-")
    data class RemoveClip(val clipId: String) : Op()

    @Serializable @SerialName("clips")
    data class ClipOrder(val ids: List<String>) : Op()

    @Serializable @SerialName("ov")
    data class PutOverlay(val clipId: String, val overlay: Overlay) : Op()

    @Serializable @SerialName("ov-")
    data class RemoveOverlay(val clipId: String, val overlayId: String) : Op()

    @Serializable @SerialName("ovs")
    data class OverlayOrder(val clipId: String, val ids: List<String>) : Op()

    @Serializable @SerialName("seg")
    data class PutSegment(val at: SegmentList, val segment: TimelineSegment) : Op()

    @Serializable @SerialName("seg-")
    data class RemoveSegment(val at: SegmentList, val segmentId: String) : Op()

    @Serializable @SerialName("segs")
    data class SegmentOrder(val at: SegmentList, val ids: List<String>) : Op()
}

object ProjectSync {
    /** Clears what never travels: presets, device-only fields and missing-media flags. */
    fun normalize(project: EditProject): EditProject = project.copy(
        createdAt = 0,
        presets = emptyList(),
        clips = project.clips.map { clip ->
            clip.copy(
                mediaMissing = false,
                videoOverride = null,
                audioOverride = null,
                overlays = clip.overlays.map { it.copy(sourceOffsetMs = 0) },
            )
        },
    )

    private fun Clip.core() = copy(effectSegments = emptyList(), audioSegments = emptyList(), overlays = emptyList())
    private fun Overlay.core() = copy(effectSegments = emptyList(), audioSegments = emptyList())

    /** The ops that turn [old] into [new] (both in wire form). */
    fun diff(old: EditProject, new: EditProject): List<Op> = buildList {
        if (old.name != new.name) add(Op.SetName(new.name))
        val oldClips = old.clips.associateBy { it.id }
        val newIds = new.clips.map { it.id }
        val newIdSet = newIds.toSet()
        old.clips.filter { it.id !in newIdSet }.forEach { add(Op.RemoveClip(it.id)) }
        new.clips.forEach { clip ->
            val before = oldClips[clip.id]
            if (before == null || before.core() != clip.core()) add(Op.PutClip(clip.core()))
            diffOverlays(clip.id, before?.overlays.orEmpty(), clip.overlays)
            diffSegments(SegmentList(clip.id, null, false), before?.effectSegments.orEmpty(), clip.effectSegments)
            diffSegments(SegmentList(clip.id, null, true), before?.audioSegments.orEmpty(), clip.audioSegments)
        }
        val expected = old.clips.map { it.id }.filter { it in newIdSet } + newIds.filter { it !in oldClips }
        if (expected != newIds) add(Op.ClipOrder(newIds))
    }

    private fun MutableList<Op>.diffOverlays(clipId: String, old: List<Overlay>, new: List<Overlay>) {
        val oldById = old.associateBy { it.id }
        val newIds = new.map { it.id }
        val newIdSet = newIds.toSet()
        old.filter { it.id !in newIdSet }.forEach { add(Op.RemoveOverlay(clipId, it.id)) }
        new.forEach { overlay ->
            val before = oldById[overlay.id]
            if (before == null || before.core() != overlay.core()) add(Op.PutOverlay(clipId, overlay.core()))
            diffSegments(SegmentList(clipId, overlay.id, false), before?.effectSegments.orEmpty(), overlay.effectSegments)
            diffSegments(SegmentList(clipId, overlay.id, true), before?.audioSegments.orEmpty(), overlay.audioSegments)
        }
        val expected = old.map { it.id }.filter { it in newIdSet } + newIds.filter { it !in oldById }
        if (expected != newIds) add(Op.OverlayOrder(clipId, newIds))
    }

    private fun MutableList<Op>.diffSegments(at: SegmentList, old: List<TimelineSegment>, new: List<TimelineSegment>) {
        val oldById = old.associateBy { it.id }
        val newIds = new.map { it.id }
        val newIdSet = newIds.toSet()
        old.filter { it.id !in newIdSet }.forEach { add(Op.RemoveSegment(at, it.id)) }
        new.forEach { segment -> if (oldById[segment.id] != segment) add(Op.PutSegment(at, segment)) }
        val expected = old.map { it.id }.filter { it in newIdSet } + newIds.filter { it !in oldById }
        if (expected != newIds) add(Op.SegmentOrder(at, newIds))
    }

    /** Applies [ops] in order. Ops about things that no longer exist are skipped. */
    fun apply(project: EditProject, ops: List<Op>): EditProject = ops.fold(project, ::applyOne)

    fun applyOne(project: EditProject, op: Op): EditProject = when (op) {
        is Op.SetName -> project.copy(name = op.name)
        is Op.PutClip -> {
            val existing = project.clips.indexOfFirst { it.id == op.clip.id }
            if (existing == -1) project.copy(clips = project.clips + op.clip.core())
            else project.copy(
                clips = project.clips.toMutableList().also { list ->
                    val old = list[existing]
                    list[existing] = op.clip.copy(
                        effectSegments = old.effectSegments,
                        audioSegments = old.audioSegments,
                        overlays = old.overlays,
                    )
                },
            )
        }
        is Op.RemoveClip -> project.copy(clips = project.clips.filterNot { it.id == op.clipId })
        is Op.ClipOrder -> project.copy(clips = reorder(project.clips, op.ids) { it.id })
        is Op.PutOverlay -> project.updateClip(op.clipId) { clip ->
            val existing = clip.overlays.indexOfFirst { it.id == op.overlay.id }
            if (existing == -1) clip.copy(overlays = clip.overlays + op.overlay.core())
            else clip.copy(
                overlays = clip.overlays.toMutableList().also { list ->
                    val old = list[existing]
                    list[existing] = op.overlay.copy(effectSegments = old.effectSegments, audioSegments = old.audioSegments)
                },
            )
        }
        is Op.RemoveOverlay -> project.updateClip(op.clipId) { clip ->
            clip.copy(overlays = clip.overlays.filterNot { it.id == op.overlayId })
        }
        is Op.OverlayOrder -> project.updateClip(op.clipId) { clip ->
            clip.copy(overlays = reorder(clip.overlays, op.ids) { it.id })
        }
        is Op.PutSegment -> project.updateSegments(op.at) { list ->
            val existing = list.indexOfFirst { it.id == op.segment.id }
            if (existing == -1) list + op.segment else list.toMutableList().also { it[existing] = op.segment }
        }
        is Op.RemoveSegment -> project.updateSegments(op.at) { list -> list.filterNot { it.id == op.segmentId } }
        is Op.SegmentOrder -> project.updateSegments(op.at) { list -> reorder(list, op.ids) { it.id } }
    }

    /** Listed items first, in the listed order; anything unlisted (added meanwhile) keeps its order after them. */
    private fun <T> reorder(items: List<T>, ids: List<String>, id: (T) -> String): List<T> {
        val byId = items.associateBy(id)
        val listed = ids.distinct().mapNotNull { byId[it] }
        val listedIds = listed.map(id).toSet()
        return listed + items.filter { id(it) !in listedIds }
    }

    private fun EditProject.updateClip(clipId: String, transform: (Clip) -> Clip): EditProject =
        copy(clips = clips.map { if (it.id == clipId) transform(it) else it })

    fun EditProject.segmentsAt(at: SegmentList): List<TimelineSegment>? {
        val clip = clips.firstOrNull { it.id == at.clipId } ?: return null
        if (at.overlayId == null) return if (at.audio) clip.audioSegments else clip.effectSegments
        val overlay = clip.overlays.firstOrNull { it.id == at.overlayId } ?: return null
        return if (at.audio) overlay.audioSegments else overlay.effectSegments
    }

    private fun EditProject.updateSegments(at: SegmentList, transform: (List<TimelineSegment>) -> List<TimelineSegment>): EditProject =
        updateClip(at.clipId) { clip ->
            if (at.overlayId == null) {
                if (at.audio) clip.copy(audioSegments = transform(clip.audioSegments))
                else clip.copy(effectSegments = transform(clip.effectSegments))
            } else clip.copy(
                overlays = clip.overlays.map { overlay ->
                    if (overlay.id != at.overlayId) overlay
                    else if (at.audio) overlay.copy(audioSegments = transform(overlay.audioSegments))
                    else overlay.copy(effectSegments = transform(overlay.effectSegments))
                },
            )
        }

    /** Every media hash a wire project uses (clips, overlays and media inside effects). */
    fun mediaHashes(project: EditProject): Set<String> = buildSet {
        project.clips.forEach { clip ->
            MediaRef.hashOf(clip.sourceUri)?.let(::add)
            clip.effectSegments.forEach { addSegmentMedia(it) }
            clip.audioSegments.forEach { addSegmentMedia(it) }
            clip.overlays.forEach { overlay ->
                MediaRef.hashOf(overlay.sourceUri)?.let(::add)
                overlay.effectSegments.forEach { addSegmentMedia(it) }
                overlay.audioSegments.forEach { addSegmentMedia(it) }
            }
        }
    }

    private fun MutableSet<String>.addSegmentMedia(segment: TimelineSegment) {
        segment.stringParams.forEach { (key, value) -> if (MediaRef.isUriParam(key)) MediaRef.hashOf(value)?.let(::add) }
    }

    fun opMediaHashes(op: Op): Set<String> = when (op) {
        is Op.PutClip -> setOfNotNull(MediaRef.hashOf(op.clip.sourceUri))
        is Op.PutOverlay -> setOfNotNull(MediaRef.hashOf(op.overlay.sourceUri))
        is Op.PutSegment -> buildSet { addSegmentMedia(op.segment) }
        else -> emptySet()
    }
}
