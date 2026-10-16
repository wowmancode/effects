package dev.lec.effectapp.online

import dev.lec.effectapp.model.Clip
import dev.lec.effectapp.model.EditProject
import dev.lec.effectapp.model.EffectKeyframe
import dev.lec.effectapp.model.Overlay
import dev.lec.effectapp.model.OverlayKeyframe
import dev.lec.effectapp.model.TimelineSegment
import dev.lec.effectapp.online.ProjectSync.segmentsAt

/**
 * What the app knows about its effects, passed in so this module stays free of the effects
 * engine. [defaultPluginSources] maps a plug-in effect id to the source it starts with.
 */
class EffectCatalog(
    val knownEffectIds: Set<String>,
    val defaultPluginSources: Map<String, String>,
) {
    fun isPlugin(effectId: String) = effectId in defaultPluginSources
}

/** Checks everything that arrives from another phone before it touches the project. */
class WireValidator(private val catalog: EffectCatalog) {
    companion object {
        const val MAX_CLIPS = 500
        const val MAX_OVERLAYS = 64
        const val MAX_SEGMENTS = 128
        const val MAX_KEYFRAMES = 1_000
        const val MAX_PARAMS = 64
        const val MAX_TIME_MS = 24L * 60 * 60 * 1000
        const val MAX_SOURCE_CHARS = 48_000
        const val MAX_OPS_PER_BATCH = 4_000
        private val ID = Regex("[A-Za-z0-9_.:-]{1,80}")
        private val PARAM_KEY = Regex("[A-Za-z0-9_]{1,40}")
        private val STRING_KEYS = setOf("source", "language", "map_type", "lut_uri", "map_uri", "carrier_uri")
        private val LANGUAGES = setOf("c_style", "glsl")
        private val MAP_TYPE = Regex("[a-z_]{1,32}")
    }

    /** Null when [ops] are well formed, otherwise why not. */
    fun checkOps(ops: List<Op>): String? {
        if (ops.size > MAX_OPS_PER_BATCH) return "Too many changes at once."
        ops.forEach { op -> checkOp(op)?.let { return it } }
        return null
    }

    /** Null when a whole project (in wire form) is well formed. */
    fun checkProject(project: EditProject): String? {
        if (project.name.length > 200) return "Project name is too long."
        checkLimits(project)?.let { return it }
        project.clips.forEach { clip ->
            checkClip(clip)?.let { return it }
            checkSegments(clip.effectSegments)?.let { return it }
            checkSegments(clip.audioSegments)?.let { return it }
            clip.overlays.forEach { overlay ->
                checkOverlay(overlay)?.let { return it }
                checkSegments(overlay.effectSegments)?.let { return it }
                checkSegments(overlay.audioSegments)?.let { return it }
            }
        }
        return null
    }

    /** Size limits that only make sense on a whole project (checked after applying ops). */
    fun checkLimits(project: EditProject): String? {
        if (project.clips.size > MAX_CLIPS) return "Too many clips."
        if (project.clips.map { it.id }.toSet().size != project.clips.size) return "Duplicate clip."
        project.clips.forEach { clip ->
            if (clip.overlays.size > MAX_OVERLAYS) return "Too many overlays on one clip."
            if (clip.overlays.map { it.id }.toSet().size != clip.overlays.size) return "Duplicate overlay."
            val lists = listOf(clip.effectSegments, clip.audioSegments) +
                clip.overlays.flatMap { listOf(it.effectSegments, it.audioSegments) }
            lists.forEach { list ->
                if (list.size > MAX_SEGMENTS) return "Too many effects in one place."
                if (list.map { it.id }.toSet().size != list.size) return "Duplicate effect."
            }
        }
        return null
    }

    private fun checkOp(op: Op): String? = when (op) {
        is Op.SetName -> if (op.name.length > 200) "Project name is too long." else null
        is Op.PutClip -> checkClip(op.clip)
            ?: if (op.clip.effectSegments.isNotEmpty() || op.clip.audioSegments.isNotEmpty() || op.clip.overlays.isNotEmpty()) "Malformed clip." else null
        is Op.RemoveClip -> id(op.clipId)
        is Op.ClipOrder -> ids(op.ids, MAX_CLIPS)
        is Op.PutOverlay -> id(op.clipId) ?: checkOverlay(op.overlay)
            ?: if (op.overlay.effectSegments.isNotEmpty() || op.overlay.audioSegments.isNotEmpty()) "Malformed overlay." else null
        is Op.RemoveOverlay -> id(op.clipId) ?: id(op.overlayId)
        is Op.OverlayOrder -> id(op.clipId) ?: ids(op.ids, MAX_OVERLAYS)
        is Op.PutSegment -> list(op.at) ?: checkSegment(op.segment)
        is Op.RemoveSegment -> list(op.at) ?: id(op.segmentId)
        is Op.SegmentOrder -> list(op.at) ?: ids(op.ids, MAX_SEGMENTS)
    }

    private fun id(value: String) = if (ID.matches(value)) null else "Malformed id."
    private fun ids(values: List<String>, max: Int): String? =
        if (values.size > max) "Too many items." else values.firstNotNullOfOrNull { id(it) }
    private fun list(at: SegmentList) = id(at.clipId) ?: at.overlayId?.let(::id)
    private fun name(value: String) = if (value.length > 300) "Name is too long." else null
    private fun media(uri: String) = if (MediaRef.isRef(uri)) null else "Media must be shared by hash."
    private fun time(value: Long) = if (value in 0..MAX_TIME_MS) null else "Time out of range."
    private fun finite(value: Float, limit: Float = 1e7f) =
        if (value.isFinite() && value in -limit..limit) null else "Number out of range."

    private fun checkClip(clip: Clip): String? =
        id(clip.id) ?: media(clip.sourceUri) ?: name(clip.displayName)
            ?: time(clip.trimStartMs) ?: time(clip.trimEndMs)
            ?: (if (clip.trimEndMs < clip.trimStartMs) "Clip ends before it starts." else null)
            ?: finite(clip.speed, 1_000f)
            ?: finite(clip.transform.scale, 1_000f) ?: finite(clip.transform.rotationDegrees, 1e6f)
            ?: finite(clip.transform.offsetX, 1_000f) ?: finite(clip.transform.offsetY, 1_000f)

    private fun checkOverlay(overlay: Overlay): String? =
        id(overlay.id) ?: media(overlay.sourceUri) ?: name(overlay.displayName)
            ?: time(overlay.sourceDurationMs) ?: time(overlay.startMs) ?: time(overlay.endMs) ?: time(overlay.sourceStartMs)
            ?: finite(overlay.alpha, 1_000f) ?: finite(overlay.scale, 1_000f)
            ?: finite(overlay.offsetX, 1_000f) ?: finite(overlay.offsetY, 1_000f) ?: finite(overlay.speed, 1_000f)
            ?: (if (overlay.lane !in -1..256) "Lane out of range." else null)
            ?: (if (overlay.keyframes.size > MAX_KEYFRAMES) "Too many keyframes." else null)
            ?: overlay.keyframes.firstNotNullOfOrNull(::checkOverlayKeyframe)

    private fun checkOverlayKeyframe(keyframe: OverlayKeyframe): String? =
        time(keyframe.timeMs) ?: finite(keyframe.alpha, 1_000f) ?: finite(keyframe.scale, 1_000f)
            ?: finite(keyframe.offsetX, 1_000f) ?: finite(keyframe.offsetY, 1_000f)

    private fun checkSegments(list: List<TimelineSegment>) = list.firstNotNullOfOrNull(::checkSegment)

    private fun checkSegment(segment: TimelineSegment): String? {
        id(segment.id)?.let { return it }
        if (segment.effectId !in catalog.knownEffectIds) return "Unknown effect."
        time(segment.startMs)?.let { return it }
        time(segment.endMs)?.let { return it }
        checkParams(segment.params)?.let { return it }
        if (segment.keyframes.size > MAX_KEYFRAMES) return "Too many keyframes."
        segment.keyframes.forEach { keyframe: EffectKeyframe ->
            time(keyframe.timeMs)?.let { return it }
            checkParams(keyframe.params)?.let { return it }
        }
        if (segment.stringParams.size > STRING_KEYS.size) return "Too many text settings."
        segment.stringParams.forEach { (key, value) ->
            if (key !in STRING_KEYS) return "Unknown effect setting."
            when {
                MediaRef.isUriParam(key) -> media(value)?.let { return it }
                key == "source" -> if (value.length > MAX_SOURCE_CHARS) return "Plug-in source is too long."
                key == "language" -> if (value !in LANGUAGES) return "Unknown plug-in language."
                key == "map_type" -> if (!MAP_TYPE.matches(value)) return "Unknown map type."
            }
        }
        return null
    }

    private fun checkParams(params: Map<String, Float>): String? {
        if (params.size > MAX_PARAMS) return "Too many effect settings."
        params.forEach { (key, value) ->
            if (!PARAM_KEY.matches(key)) return "Malformed effect setting."
            finite(value)?.let { return it }
        }
        return null
    }
}

/** What a batch of changes needs: permissions, or the owner. */
data class Needs(val perms: Set<Perm>, val ownerOnly: Boolean, val ownerOnlyReason: String? = null)

/** Works out which permissions a batch needs, measured against the project it applies to. */
class PermissionCheck(private val catalog: EffectCatalog) {
    fun needs(project: EditProject, ops: List<Op>): Needs {
        val perms = mutableSetOf<Perm>()
        var ownerOnly: String? = null
        var working = project
        // Clips and overlays created in this batch: their effects come along with them
        // (copying or splitting a clip), so they only need the permission that created them.
        val newClips = mutableSetOf<String>()
        val newOverlays = mutableSetOf<Pair<String, String>>()
        val known = ProjectSync.mediaHashes(project).toMutableSet()
        ops.forEach { op ->
            val bringsNewMedia = ProjectSync.opMediaHashes(op).any { it !in known }
            if (bringsNewMedia) perms += Perm.ADD_MEDIA
            when (op) {
                is Op.SetName -> ownerOnly = ownerOnly ?: "Only the owner can rename the project."
                is Op.PutClip -> {
                    val existing = working.clips.firstOrNull { it.id == op.clip.id }
                    if (existing == null) {
                        newClips += op.clip.id
                        if (!bringsNewMedia) perms += Perm.EDIT_MEDIA
                    } else perms += Perm.EDIT_MEDIA
                }
                is Op.RemoveClip -> if (working.clips.any { it.id == op.clipId }) perms += Perm.DELETE_MEDIA
                is Op.ClipOrder -> perms += Perm.EDIT_MEDIA
                is Op.PutOverlay -> {
                    val clip = working.clips.firstOrNull { it.id == op.clipId }
                    val existing = clip?.overlays?.firstOrNull { it.id == op.overlay.id }
                    if (existing == null) {
                        newOverlays += op.clipId to op.overlay.id
                        if (!bringsNewMedia && op.clipId !in newClips) perms += Perm.EDIT_MEDIA
                    } else if (op.clipId !in newClips) perms += Perm.EDIT_MEDIA
                }
                is Op.RemoveOverlay ->
                    if (working.clips.firstOrNull { it.id == op.clipId }?.overlays?.any { it.id == op.overlayId } == true) {
                        perms += Perm.DELETE_MEDIA
                    }
                is Op.OverlayOrder -> if (op.clipId !in newClips) perms += Perm.EDIT_MEDIA
                is Op.PutSegment -> {
                    val list = with(ProjectSync) { working.segmentsAt(op.at) }
                    val existing = list?.firstOrNull { it.id == op.segment.id }
                    val parentIsNew = op.at.clipId in newClips ||
                        (op.at.overlayId != null && (op.at.clipId to op.at.overlayId) in newOverlays)
                    if (!parentIsNew) perms += if (existing == null) Perm.ADD_EFFECT else Perm.EDIT_EFFECT
                    if (catalog.isPlugin(op.segment.effectId)) {
                        val before = existing?.let { it.stringParams["source"] to it.stringParams["language"] }
                        val after = op.segment.stringParams["source"] to op.segment.stringParams["language"]
                        val default = catalog.defaultPluginSources[op.segment.effectId]
                        val isDefault = (after.first == null || after.first == default) &&
                            (after.second == null || after.second == "c_style")
                        val changed = if (existing == null) !isDefault else before != after
                        if (changed && !(parentIsNew && existing == null && pluginCopiedFromProject(working, op.segment))) {
                            ownerOnly = ownerOnly ?: "Only the owner can change plug-in code."
                        }
                    }
                }
                is Op.RemoveSegment -> {
                    val list = with(ProjectSync) { working.segmentsAt(op.at) }
                    val parentIsNew = op.at.clipId in newClips ||
                        (op.at.overlayId != null && (op.at.clipId to op.at.overlayId) in newOverlays)
                    if (list?.any { it.id == op.segmentId } == true && !parentIsNew) perms += Perm.REMOVE_EFFECT
                }
                is Op.SegmentOrder -> {
                    val parentIsNew = op.at.clipId in newClips ||
                        (op.at.overlayId != null && (op.at.clipId to op.at.overlayId) in newOverlays)
                    if (!parentIsNew) perms += Perm.EDIT_EFFECT
                }
            }
            working = ProjectSync.applyOne(working, op)
            known += ProjectSync.opMediaHashes(op)
        }
        return Needs(perms, ownerOnly != null, ownerOnly)
    }

    /** True when the same plug-in code is already in the project (a copied or split clip). */
    private fun pluginCopiedFromProject(project: EditProject, segment: TimelineSegment): Boolean {
        val source = segment.stringParams["source"]
        val language = segment.stringParams["language"]
        return project.clips.any { clip ->
            (clip.effectSegments + clip.audioSegments + clip.overlays.flatMap { it.effectSegments + it.audioSegments })
                .any { it.effectId == segment.effectId && it.stringParams["source"] == source && it.stringParams["language"] == language }
        }
    }

    /** Null when [granted] covers [needs] (the owner always passes), otherwise a message. */
    fun refusal(needs: Needs, granted: Set<Perm>, isOwner: Boolean): String? {
        if (isOwner) return null
        if (needs.ownerOnly) return needs.ownerOnlyReason ?: "Only the owner can do that."
        val missing = needs.perms - granted
        if (missing.isEmpty()) return null
        return "The owner hasn't allowed: " + missing.joinToString(", ") { it.label.lowercase() } + "."
    }
}
