package dev.lec.effectapp.pipeline

import android.graphics.Matrix
import android.net.Uri
import androidx.annotation.OptIn
import androidx.media3.common.C
import androidx.media3.common.Effect
import androidx.media3.common.MediaItem
import androidx.media3.common.audio.SpeedProvider
import androidx.media3.common.util.UnstableApi
import androidx.media3.effect.GlEffect
import androidx.media3.effect.MatrixTransformation
import androidx.media3.effect.TimestampWrapper
import androidx.media3.transformer.Composition
import androidx.media3.transformer.EditedMediaItem
import androidx.media3.transformer.EditedMediaItemSequence
import androidx.media3.transformer.Effects
import dev.lec.effectapp.effects.EffectRegistry
import dev.lec.effectapp.effects.audioProcessorFor
import dev.lec.effectapp.model.Clip
import dev.lec.effectapp.model.EditProject
import dev.lec.effectapp.model.TimelineSegment

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
        clip.effectSegments.filter { it.enabled }.forEach { segment ->
            val effect = EffectRegistry.byId(segment.effectId)?.toMediaEffect(segment.params)
            if (effect is GlEffect) result += TimestampWrapper(effect, segment.startMs * 1_000, segment.endMs * 1_000)
        }
        return result
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
        val builder = EditedMediaItem.Builder(mediaItem).setEffects(Effects(audioProcessors, videoEffects(clip)))
        val pitchSegments = clip.audioSegments.filter { it.enabled && it.effectId == "pitch_change" }
        if (pitchSegments.isNotEmpty()) builder.setSpeed(SegmentSpeedProvider(pitchSegments))
        return builder.build()
    }
}

@OptIn(UnstableApi::class)
private class SegmentSpeedProvider(segments: List<TimelineSegment>) : SpeedProvider {
    private val segments = segments.sortedBy { it.startMs }

    override fun getSpeed(timeUs: Long): Float {
        val timeMs = timeUs / 1_000
        return segments.lastOrNull { timeMs in it.startMs until it.endMs }?.params?.get("speed") ?: 1f
    }

    override fun getNextSpeedChangeTimeUs(timeUs: Long): Long {
        val timeMs = timeUs / 1_000
        return segments.asSequence()
            .flatMap { sequenceOf(it.startMs, it.endMs) }
            .filter { it > timeMs }
            .minOrNull()
            ?.times(1_000)
            ?: C.TIME_UNSET
    }
}
