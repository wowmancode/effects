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
 * swapped live (overlays and a few multi-pass effects) still need [build] + setVideoEffects.
 */
@UnstableApi
class LivePreviewEffects {
    /** Position inside the clip, used to evaluate keyframes. Updated from the UI as playback moves. */
    @Volatile
    var timeMs: Long = 0

    @Volatile
    private var clip: Clip? = null
    private var builtClip: Clip? = null

    // Slots that turned out not to be swappable at runtime; their edits need a rebuild.
    private val notLive: MutableSet<String> = ConcurrentHashMap.newKeySet()

    /** Builds the full preview effect list for [clip]. Pass it to ExoPlayer.setVideoEffects. */
    fun build(clip: Clip, timeMs: Long, resolveBitmap: (String) -> Bitmap?): List<Effect> {
        this.clip = clip
        this.timeMs = timeMs
        builtClip = clip
        notLive.clear()
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
            clip.effectSegments.filter { it.enabled }.forEach { segment ->
                if (segment.effectId in STATIC_ONLY) {
                    ProjectCompositionFactory.segmentVideoEffect(segment, timeMs, waitForVideoMapFrames = false)?.let(::add)
                } else {
                    add(
                        LiveGlEffect(
                            current = { specFor(segment.id) },
                            onNotLive = { notLive += segment.id },
                        ),
                    )
                }
            }
            ProjectCompositionFactory.overlayEffect(clip, resolveBitmap, includeVideoPosters = true)?.let(::add)
        }
    }

    /**
     * Hands the live slots the edited [clip]. Returns true when every change is picked up live,
     * or false when something changed that only a [build] can apply.
     */
    fun update(clip: Clip): Boolean {
        val built = builtClip ?: return false
        this.clip = clip
        return staticContent(clip) == staticContent(built)
    }

    /** True when keyframes on a non-live effect need periodic rebuilds to animate. */
    fun hasStaticKeyframes(clip: Clip): Boolean =
        staticSegments(clip).any { it.keyframes.isNotEmpty() }

    private fun specFor(segmentId: String): LiveGlEffect.Spec {
        val segment = clip?.effectSegments?.firstOrNull { it.id == segmentId }
            ?: return LiveGlEffect.Spec(null) { null }
        val time = timeMs
        val params = segment.paramsAt(time)
        return LiveGlEffect.Spec(Triple(segment.effectId, params, segment.stringParams)) {
            ProjectCompositionFactory.segmentVideoEffect(segment, time, waitForVideoMapFrames = false)
        }
    }

    private fun staticSegments(clip: Clip) =
        clip.effectSegments.filter { it.enabled && (it.effectId in STATIC_ONLY || it.id in notLive) }

    private fun staticContent(clip: Clip): List<Any?> = listOf(
        clip.overlays,
        staticSegments(clip),
        if (TRANSFORM_SLOT in notLive) clip.transform else null,
    )

    private companion object {
        const val PREVIEW_HEIGHT = 540
        const val TRANSFORM_SLOT = "\u0000transform"

        // Multi-pass or stateful effects that can't be swapped inside a single shader pass, or
        // that open media when built (so rebuilding per slider tick would be too heavy).
        val STATIC_ONLY = setOf("ghost_trail", "freeze_frame", "displacement_map", "reverse_video")
    }
}
