package dev.lec.effectapp.pipeline

import android.graphics.Matrix
import android.net.Uri
import androidx.annotation.OptIn
import androidx.media3.common.Effect
import androidx.media3.common.MediaItem
import androidx.media3.common.util.UnstableApi
import androidx.media3.effect.MatrixTransformation
import androidx.media3.effect.Presentation
import androidx.media3.transformer.Composition
import androidx.media3.transformer.EditedMediaItem
import androidx.media3.transformer.EditedMediaItemSequence
import androidx.media3.transformer.Effects
import dev.lec.effectapp.effects.EffectRegistry
import dev.lec.effectapp.effects.audioProcessorFor
import dev.lec.effectapp.model.Clip
import dev.lec.effectapp.model.EditProject
import kotlin.math.ceil
import kotlin.math.max

@OptIn(UnstableApi::class)
object ProjectCompositionFactory {
    private const val MIN_REVERSE_SLICE_MS = 80L
    private const val MAX_REVERSE_SLICES = 600L

    fun create(project: EditProject): Composition {
        require(project.clips.isNotEmpty()) { "A project needs at least one clip" }
        val hasReverse = project.clips.any { it.reversesVideo() || it.reversesAudio() }
        if (!hasReverse) {
            return Composition.Builder(
                listOf(EditedMediaItemSequence.withAudioAndVideoFrom(project.clips.map(::editedItem))),
            ).build()
        }

        val videoItems = project.clips.flatMap { clip ->
            sourceSlices(clip, clip.reversesVideo()).map { slice ->
                editedItem(clip, slice, includeVideo = true, includeAudio = false)
            }
        }
        val audioItems = project.clips.flatMap { clip ->
            sourceSlices(clip, clip.reversesAudio()).map { slice ->
                editedItem(clip, slice, includeVideo = false, includeAudio = true)
            }
        }
        return Composition.Builder(
            listOf(
                EditedMediaItemSequence.withVideoFrom(videoItems),
                EditedMediaItemSequence.withAudioFrom(audioItems),
            ),
        ).build()
    }

    fun videoEffects(clip: Clip): List<Effect> {
        val result = mutableListOf<Effect>()
        val transform = clip.transform
        if (transform.scale != 1f || transform.rotationDegrees != 0f || transform.offsetX != 0f || transform.offsetY != 0f) {
            result += object : MatrixTransformation {
                override fun getMatrix(presentationTimeUs: Long): Matrix = Matrix().apply {
                    setScale(transform.scale, transform.scale)
                    postRotate(transform.rotationDegrees)
                    postTranslate(transform.offsetX, transform.offsetY)
                }
            }
        }
        // Visual effects are deliberately clip-wide. List order is stack order and is unbounded.
        clip.effectSegments.filter { it.enabled }.forEach { segment ->
            EffectRegistry.byId(segment.effectId)?.toMediaEffect(segment.params)?.let(result::add)
        }
        return result
    }

    fun previewVideoEffects(clip: Clip): List<Effect> = buildList {
        add(Presentation.createForHeight(540))
        addAll(videoEffects(clip))
    }

    private fun editedItem(clip: Clip): EditedMediaItem =
        editedItem(
            clip = clip,
            slice = SourceSlice(0, clip.durationMs),
            includeVideo = true,
            includeAudio = true,
        )

    private fun editedItem(
        clip: Clip,
        slice: SourceSlice,
        includeVideo: Boolean,
        includeAudio: Boolean,
    ): EditedMediaItem {
        val mediaItem = MediaItem.Builder()
            .setUri(Uri.parse(clip.sourceUri))
            .setClippingConfiguration(
                MediaItem.ClippingConfiguration.Builder()
                    .setStartPositionMs(clip.trimStartMs + slice.startMs)
                    .setEndPositionMs(clip.trimStartMs + slice.endMs)
                    .build(),
            )
            .build()
        val audioProcessors = if (includeAudio) {
            clip.audioSegments
                .filter { it.enabled && it.effectId != "reverse_audio" }
                .mapNotNull(::audioProcessorFor)
        } else {
            emptyList()
        }
        val effects = Effects(audioProcessors, if (includeVideo) videoEffects(clip) else emptyList())
        return EditedMediaItem.Builder(mediaItem)
            .setRemoveAudio(!includeAudio)
            .setRemoveVideo(!includeVideo)
            .setEffects(effects)
            .build()
    }

    private fun sourceSlices(clip: Clip, reversed: Boolean): List<SourceSlice> {
        if (!reversed) return listOf(SourceSlice(0, clip.durationMs))
        val sliceMs = max(MIN_REVERSE_SLICE_MS, ceil(clip.durationMs / MAX_REVERSE_SLICES.toDouble()).toLong())
        val slices = buildList {
            var start = 0L
            while (start < clip.durationMs) {
                val end = (start + sliceMs).coerceAtMost(clip.durationMs)
                add(SourceSlice(start, end))
                start = end
            }
        }
        return slices.asReversed()
    }

    private fun Clip.reversesVideo(): Boolean =
        effectSegments.any { it.enabled && it.effectId == "reverse_video" }

    private fun Clip.reversesAudio(): Boolean =
        audioSegments.any { it.enabled && it.effectId == "reverse_audio" }

    private data class SourceSlice(val startMs: Long, val endMs: Long)
}
