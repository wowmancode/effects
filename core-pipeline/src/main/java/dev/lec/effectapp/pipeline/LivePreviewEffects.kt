package dev.lec.effectapp.pipeline

import android.graphics.Bitmap
import androidx.media3.common.Effect
import androidx.media3.common.util.UnstableApi
import androidx.media3.effect.Presentation
import dev.lec.effectapp.effects.LiveGlEffect
import dev.lec.effectapp.model.Clip
import java.util.concurrent.ConcurrentHashMap

/**
 * The editor preview's effect stack for one clip, built so parameter edits apply on the next
 * drawn frame instead of rebuilding the player's effect pipeline.
 *
 * The transform and every enabled effect segment become a [LiveGlEffect] slot that reads its
 * current values from here on the GL thread. The UI pushes edits with [update]; only changes to
 * the stack's shape (adding, removing, reordering or toggling effects) or to parts that can't be
 * swapped live (a few multi-pass effects) still need [build] + setVideoEffects.
 */
@UnstableApi
class LivePreviewEffects {
    /** Position inside the clip, used to evaluate keyframes. Updated from the UI as playback moves. */
    @Volatile
    var timeMs: Long = 0

    @Volatile
    private var clip: Clip? = null

    // What the running pipeline was built for: its slot layout and its fixed (non-live) content.
    private var builtLayout: List<Any?>? = null
    private var builtStatic: List<Any?>? = null

    // Slots that turned out not to be swappable at runtime; their edits need a rebuild.
    private val notLive: MutableSet<String> = ConcurrentHashMap.newKeySet()

    /**
     * Builds the full preview effect list for [clip]. Pass it to ExoPlayer.setVideoEffects.
     *
     * Effect slots are positional: slot i draws the i-th enabled effect of whichever clip is
     * showing, and a slot with nothing to draw passes the frame through. Built with [slots] at
     * least the most effects any clip has, the same pipeline serves every clip whose
     * multi-pass effects sit in the same places, so playback moves from clip to clip with just
     * a live swap instead of tearing the player's pipeline down at every cut.
     */
    fun build(clip: Clip, timeMs: Long, resolveBitmap: (String) -> Bitmap?, slots: Int = 0): List<Effect> {
        this.clip = clip
        this.timeMs = timeMs
        notLive.clear()
        val enabled = enabledSegments(clip)
        val count = maxOf(enabled.size, slots)
        builtLayout = layoutKey(clip, count)
        builtStatic = staticContent(clip)
        return buildList {
            add(Presentation.createForHeight(PREVIEW_HEIGHT))
            // Always present (identity costs one cheap pass) so dragging scale back to 1.0 doesn't
            // change the stack shape and force a rebuild.
            add(
                LiveGlEffect(
                    current = {
                        val transform = this@LivePreviewEffects.clip?.transform
                        LiveGlEffect.Spec(transform) { transform?.let(ProjectCompositionFactory::transformEffect) }
                    },
                    onNotLive = { notLive += TRANSFORM_SLOT },
                ),
            )
            for (index in 0 until count) {
                val segment = enabled.getOrNull(index)
                if (segment != null && segment.effectId in STATIC_ONLY) {
                    ProjectCompositionFactory.segmentVideoEffect(segment, timeMs, waitForVideoMapFrames = false)?.let(::add)
                } else {
                    add(
                        LiveGlEffect(
                            current = { specAt(index) },
                            onNotLive = { notLive += slotKey(index) },
                        ),
                    )
                }
            }
            // Overlays are drawn by the editor over the player (PreviewOverlayLayer), so video
            // overlays play and can be dragged without rebuilding this pipeline.
        }
    }

    /**
     * Hands the live slots [clip] (an edit, or the next clip in the playlist). Returns true when
     * the running pipeline can show it as is, or false when only a [build] can.
     */
    fun update(clip: Clip): Boolean {
        val layout = builtLayout ?: return false
        if (layoutKey(clip, layout.size) != layout || staticContent(clip) != builtStatic) return false
        this.clip = clip
        return true
    }

    /**
     * The pipeline shape [clip] needs with [slots] slots: per slot, the multi-pass effect fixed
     * there or [LIVE]. Clips with equal keys share one pipeline.
     */
    fun layoutKey(clip: Clip, slots: Int): List<Any?> {
        val enabled = enabledSegments(clip).map { if (it.effectId in STATIC_ONLY) it.effectId else LIVE }
        return if (enabled.size >= slots) enabled else enabled + List(slots - enabled.size) { LIVE }
    }

    /** True when keyframes on a non-live effect need periodic rebuilds to animate. */
    fun hasStaticKeyframes(clip: Clip): Boolean =
        staticSegments(clip).any { (_, segment) -> segment.keyframes.isNotEmpty() }

    private fun enabledSegments(clip: Clip) = clip.effectSegments.filter { it.enabled }

    private fun specAt(index: Int): LiveGlEffect.Spec {
        val segment = clip?.let(::enabledSegments)?.getOrNull(index)
            ?.takeIf { it.effectId !in STATIC_ONLY }
            ?: return LiveGlEffect.Spec(null) { null }
        val time = timeMs
        val params = segment.paramsAt(time)
        return LiveGlEffect.Spec(Triple(segment.effectId, params, segment.stringParams)) {
            ProjectCompositionFactory.segmentVideoEffect(segment, time, waitForVideoMapFrames = false)
        }
    }

    private fun staticSegments(clip: Clip) = enabledSegments(clip).withIndex()
        .filter { (index, segment) -> segment.effectId in STATIC_ONLY || slotKey(index) in notLive }
        .map { (index, segment) -> index to segment }

    // Compared without segment ids, so equal fixed effects on different clips count as the same.
    private fun staticContent(clip: Clip): List<Any?> = listOf(
        staticSegments(clip).map { (index, segment) -> index to segment.copy(id = "") },
        if (TRANSFORM_SLOT in notLive) clip.transform else null,
    )

    private fun slotKey(index: Int) = "slot:$index"

    private companion object {
        const val PREVIEW_HEIGHT = 540
        const val TRANSFORM_SLOT = "\u0000transform"
        const val LIVE = "\u0000live"

        // Multi-pass or stateful effects that can't be swapped inside a single shader pass, or
        // that open media when built (so rebuilding per slider tick would be too heavy).
        val STATIC_ONLY = setOf("ghost_trail", "freeze_frame", "displacement_map", "reverse_video")
    }
}
