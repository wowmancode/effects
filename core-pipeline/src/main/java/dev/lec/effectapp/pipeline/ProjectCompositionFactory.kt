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

@OptIn(UnstableApi::class)
object ProjectCompositionFactory {
    fun create(project: EditProject): Composition {
        require(project.clips.isNotEmpty()) { "A project needs at least one clip" }
        return Composition.Builder(listOf(EditedMediaItemSequence.withAudioAndVideoFrom(project.clips.map(::editedItem)))).build()
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

    private fun editedItem(clip: Clip): EditedMediaItem {
        val mediaItem = MediaItem.Builder()
            .setUri(Uri.parse(clip.sourceUri))
            .setClippingConfiguration(
                MediaItem.ClippingConfiguration.Builder()
                    .setStartPositionMs(clip.trimStartMs)
                    .setEndPositionMs(clip.trimEndMs)
                    .build(),
            )
            .build()
        val audioProcessors = clip.audioSegments.filter { it.enabled }.mapNotNull(::audioProcessorFor)
        return EditedMediaItem.Builder(mediaItem)
            .setEffects(Effects(audioProcessors, videoEffects(clip)))
            .build()
    }
}
