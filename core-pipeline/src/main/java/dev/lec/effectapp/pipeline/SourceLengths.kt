package dev.lec.effectapp.pipeline

import android.content.Context
import android.media.MediaMetadataRetriever
import android.net.Uri
import dev.lec.effectapp.model.EditProject

/**
 * Fits every clip and overlay to the real length of its media before an export, so a project made
 * with longer files (or relinked to shorter ones) never asks a decoder to start past the end of a
 * file, which fails the whole export.
 *
 * Clips: an in-point past the end wraps around (the source loops, as layered editors do); a clip
 * that would run off the end starts earlier instead, and one that needs more than the whole file
 * plays it a little faster so the clip keeps its length (timing of everything after it depends on
 * it). Overlays: their source length is recorded so export loops them, and in-points wrap.
 */
object SourceLengths {
    fun fit(context: Context, project: EditProject): EditProject {
        val lengths = HashMap<String, Long?>()
        fun lengthOf(uri: String): Long? = lengths.getOrPut(uri) { probe(context, uri) }
        return project.copy(
            clips = project.clips.map { original ->
                var clip = original
                val length = lengthOf(clip.sourceUri)
                if (length != null && length > 0 && clip.durationMs > 0) {
                    var speed = clip.playbackSpeed
                    var span = clip.sourceEndMs - clip.trimStartMs
                    if (span > length) {
                        speed = length.toFloat() / clip.durationMs
                        span = length
                    }
                    var inPoint = clip.trimStartMs.mod(length)
                    if (inPoint + span > length) inPoint = (length - span).coerceAtLeast(0)
                    if (inPoint != clip.trimStartMs || speed != clip.playbackSpeed) {
                        clip = clip.copy(trimStartMs = inPoint, trimEndMs = inPoint + clip.durationMs, speed = speed)
                    }
                }
                clip.copy(
                    overlays = clip.overlays.map { overlay ->
                        if (!overlay.isVideo && !overlay.audioOnly) return@map overlay
                        val overlayLength = lengthOf(overlay.sourceUri)?.takeIf { it > 0 } ?: return@map overlay
                        overlay.copy(
                            sourceDurationMs = overlayLength,
                            sourceStartMs = overlay.sourceStartMs.mod(overlayLength),
                        )
                    },
                )
            },
        )
    }

    private fun probe(context: Context, uri: String): Long? {
        val retriever = MediaMetadataRetriever()
        return try {
            retriever.setDataSource(context, Uri.parse(uri))
            retriever.extractMetadata(MediaMetadataRetriever.METADATA_KEY_DURATION)?.toLongOrNull()
        } catch (_: RuntimeException) {
            null
        } finally {
            runCatching { retriever.release() }
        }
    }
}
