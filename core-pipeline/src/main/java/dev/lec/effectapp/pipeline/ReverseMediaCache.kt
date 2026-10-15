package dev.lec.effectapp.pipeline

import android.content.Context
import android.media.MediaCodec
import android.media.MediaExtractor
import android.media.MediaFormat
import android.media.MediaMetadataRetriever
import android.media.MediaMuxer
import android.net.Uri
import android.os.Handler
import android.os.HandlerThread
import androidx.annotation.OptIn
import androidx.media3.common.MediaItem
import androidx.media3.common.MimeTypes
import androidx.media3.common.util.UnstableApi
import androidx.media3.transformer.Composition
import androidx.media3.transformer.DefaultEncoderFactory
import androidx.media3.transformer.EditedMediaItem
import androidx.media3.transformer.ExportException
import androidx.media3.transformer.ExportResult
import androidx.media3.transformer.Transformer
import androidx.media3.transformer.VideoEncoderSettings
import dev.lec.effectapp.model.Clip
import dev.lec.effectapp.model.EditProject
import dev.lec.effectapp.model.SourceOverride
import java.io.BufferedOutputStream
import java.io.File
import java.io.FileOutputStream
import java.io.RandomAccessFile
import java.nio.ByteBuffer
import java.nio.ByteOrder
import java.security.MessageDigest
import java.util.concurrent.ConcurrentHashMap
import java.util.concurrent.CountDownLatch
import java.util.concurrent.TimeUnit

/**
 * Builds truly reversed copies of clip media so reverse plays smoothly in the preview and exports
 * frame-accurately, instead of stitching hundreds of one-frame slices together.
 *
 * Video: the clip's range is transcoded once to an all-keyframe H.264 file, whose samples can then
 * be remuxed in reverse order without decoding (every frame decodes on its own). Audio: the range
 * is decoded to PCM and written back to front as a WAV file.
 *
 * Results are cached on disk by source and range. All functions block and must be called off the
 * main thread; they return null when the media can't be reversed this way, and callers fall back
 * to slicing.
 */
@OptIn(UnstableApi::class)
object ReverseMediaCache {
    private const val VERSION = 1
    private val locks = ConcurrentHashMap<String, Any>()
    // Failed builds are remembered for this app session so edits don't retry a slow transcode.
    private val failures: MutableSet<String> = ConcurrentHashMap.newKeySet()

    fun reversedVideo(context: Context, sourceUri: String, startMs: Long, endMs: Long): String? =
        cached(context, "video", sourceUri, startMs, endMs, "mp4") { out ->
            val intra = File(out.parentFile, out.nameWithoutExtension + ".intra.mp4")
            try {
                transcodeAllIntra(context, sourceUri, startMs, endMs, intra) && remuxReversed(intra, out)
            } finally {
                intra.delete()
            }
        }

    fun reversedAudio(context: Context, sourceUri: String, startMs: Long, endMs: Long): String? =
        cached(context, "audio", sourceUri, startMs, endMs, "wav") { out ->
            decodeReversedWav(context, sourceUri, startMs, endMs, out)
        }

    /**
     * Returns [project] with reversed sources attached to every clip that reverses its video or
     * audio. Clips whose media can't be reversed are left as they are.
     */
    fun prepare(context: Context, project: EditProject): EditProject =
        project.copy(clips = project.clips.map { prepare(context, it) })

    fun prepare(context: Context, clip: Clip): Clip {
        if (clip.mediaMissing) return clip
        val video = if (clip.reversesVideo() && clip.videoOverride == null) {
            reversedVideo(context, clip.sourceUri, clip.trimStartMs, clip.trimEndMs)?.let { SourceOverride(it) }
        } else clip.videoOverride
        val audio = if (clip.reversesAudio() && clip.audioOverride == null) {
            reversedAudio(context, clip.sourceUri, clip.trimStartMs, clip.trimEndMs)?.let { SourceOverride(it) }
        } else clip.audioOverride
        return clip.copy(videoOverride = video, audioOverride = audio)
    }

    private fun cached(
        context: Context,
        kind: String,
        sourceUri: String,
        startMs: Long,
        endMs: Long,
        extension: String,
        build: (File) -> Boolean,
    ): String? {
        if (endMs <= startMs) return null
        val key = hash("$VERSION|$kind|$sourceUri|$startMs|$endMs")
        val dir = File(context.cacheDir, "reverse").apply { mkdirs() }
        val out = File(dir, "$key.$extension")
        synchronized(locks.getOrPut(key) { Any() }) {
            if (out.length() > 0) return Uri.fromFile(out).toString()
            if (key in failures) return null
            val partial = File(dir, "$key.partial.$extension")
            val ok = runCatching { build(partial) }.getOrDefault(false) && partial.length() > 0
            if (ok && partial.renameTo(out)) return Uri.fromFile(out).toString()
            partial.delete()
            if (!Thread.currentThread().isInterrupted) failures += key
            return null
        }
    }

    private fun hash(text: String): String =
        MessageDigest.getInstance("SHA-256").digest(text.toByteArray())
            .joinToString("") { "%02x".format(it) }.take(32)

    // --- Video -------------------------------------------------------------------------------

    private fun transcodeAllIntra(context: Context, sourceUri: String, startMs: Long, endMs: Long, out: File): Boolean {
        val bitrate = intraBitrate(context, sourceUri)
        val thread = HandlerThread("reverse-transcode").apply { start() }
        val done = CountDownLatch(1)
        var success = false
        val handler = Handler(thread.looper)
        var transformer: Transformer? = null
        handler.post {
            val encoderSettings = VideoEncoderSettings.Builder()
                // 0 requests an all-keyframe stream: every frame decodes independently.
                .setiFrameIntervalSeconds(0f)
                .setBitrate(bitrate)
                .build()
            transformer = Transformer.Builder(context)
                .setLooper(thread.looper)
                .setVideoMimeType(MimeTypes.VIDEO_H264)
                .setEncoderFactory(
                    DefaultEncoderFactory.Builder(context)
                        .setRequestedVideoEncoderSettings(encoderSettings)
                        .build(),
                )
                .addListener(object : Transformer.Listener {
                    override fun onCompleted(composition: Composition, exportResult: ExportResult) {
                        success = true
                        done.countDown()
                    }

                    override fun onError(
                        composition: Composition,
                        exportResult: ExportResult,
                        exportException: ExportException,
                    ) {
                        done.countDown()
                    }
                })
                .build()
            val item = MediaItem.Builder()
                .setUri(Uri.parse(sourceUri))
                .setClippingConfiguration(
                    MediaItem.ClippingConfiguration.Builder()
                        .setStartPositionMs(startMs)
                        .setEndPositionMs(endMs)
                        .build(),
                )
                .build()
            runCatching {
                transformer?.start(EditedMediaItem.Builder(item).setRemoveAudio(true).build(), out.absolutePath)
            }.onFailure { done.countDown() }
        }
        try {
            // Generous bound: a stuck encoder must not hang the preview or export forever.
            if (!done.await(30, TimeUnit.MINUTES)) handler.post { transformer?.cancel() }
        } catch (interrupted: InterruptedException) {
            handler.post { transformer?.cancel() }
            Thread.currentThread().interrupt()
        } finally {
            thread.quitSafely()
        }
        return success
    }

    /** All-intra frames are larger than predicted ones, so give the intermediate plenty of bits. */
    private fun intraBitrate(context: Context, sourceUri: String): Int {
        val retriever = MediaMetadataRetriever()
        val pixels = try {
            retriever.setDataSource(context, Uri.parse(sourceUri))
            val width = retriever.extractMetadata(MediaMetadataRetriever.METADATA_KEY_VIDEO_WIDTH)?.toLongOrNull()
            val height = retriever.extractMetadata(MediaMetadataRetriever.METADATA_KEY_VIDEO_HEIGHT)?.toLongOrNull()
            if (width != null && height != null) width * height else null
        } catch (_: RuntimeException) {
            null
        } finally {
            retriever.release()
        }
        val estimate = (pixels ?: (1920L * 1080L)) * 30L / 3L // ~0.33 bits per pixel at 30 fps
        return estimate.coerceIn(4_000_000L, 60_000_000L).toInt()
    }

    /** Writes the frames of an all-keyframe file in reverse order. False if any frame isn't a keyframe. */
    private fun remuxReversed(input: File, out: File): Boolean {
        val extractor = MediaExtractor()
        var muxer: MediaMuxer? = null
        try {
            extractor.setDataSource(input.absolutePath)
            val track = (0 until extractor.trackCount).firstOrNull { index ->
                extractor.getTrackFormat(index).getString(MediaFormat.KEY_MIME)?.startsWith("video/") == true
            } ?: return false
            extractor.selectTrack(track)
            val format = extractor.getTrackFormat(track)
            val times = ArrayList<Long>()
            var largest = 0
            val probe = ByteBuffer.allocateDirect(maxSampleSize(format))
            while (true) {
                val time = extractor.sampleTime
                if (time < 0) break
                if (extractor.sampleFlags and MediaExtractor.SAMPLE_FLAG_SYNC == 0) return false
                times += time
                largest = maxOf(largest, extractor.readSampleData(probe, 0))
                extractor.advance()
            }
            if (times.isEmpty()) return false
            times.sort()
            val last = times.last()
            val buffer = ByteBuffer.allocateDirect(maxOf(largest, 1))
            val info = MediaCodec.BufferInfo()
            val writer = MediaMuxer(out.absolutePath, MediaMuxer.OutputFormat.MUXER_OUTPUT_MPEG_4)
            muxer = writer
            if (format.containsKey(MediaFormat.KEY_ROTATION)) writer.setOrientationHint(format.getInteger(MediaFormat.KEY_ROTATION))
            val outTrack = writer.addTrack(format)
            writer.start()
            for (time in times.asReversed()) {
                extractor.seekTo(time, MediaExtractor.SEEK_TO_CLOSEST_SYNC)
                if (extractor.sampleTime != time) return false
                buffer.clear()
                val size = extractor.readSampleData(buffer, 0)
                if (size < 0) return false
                // Frame that played last now plays first; the clip keeps its length.
                info.set(0, size, last - time, MediaCodec.BUFFER_FLAG_KEY_FRAME)
                writer.writeSampleData(outTrack, buffer, info)
            }
            writer.stop()
            return true
        } catch (_: Exception) {
            return false
        } finally {
            runCatching { muxer?.release() }
            extractor.release()
        }
    }

    private fun maxSampleSize(format: MediaFormat): Int {
        if (format.containsKey(MediaFormat.KEY_MAX_INPUT_SIZE)) {
            val size = format.getInteger(MediaFormat.KEY_MAX_INPUT_SIZE)
            if (size > 0) return size
        }
        val width = format.getIntegerOr(MediaFormat.KEY_WIDTH, 1920)
        val height = format.getIntegerOr(MediaFormat.KEY_HEIGHT, 1080)
        return width * height * 3 / 2 + 1_048_576
    }

    private fun MediaFormat.getIntegerOr(key: String, fallback: Int): Int =
        if (containsKey(key)) getInteger(key) else fallback

    // --- Audio -------------------------------------------------------------------------------

    /** Decodes [startMs, endMs) to 16-bit PCM and writes it back to front as a WAV file. */
    private fun decodeReversedWav(context: Context, sourceUri: String, startMs: Long, endMs: Long, out: File): Boolean {
        val raw = File(out.parentFile, out.nameWithoutExtension + ".pcm")
        val extractor = MediaExtractor()
        var codec: MediaCodec? = null
        try {
            extractor.setDataSource(context, Uri.parse(sourceUri), null)
            val track = (0 until extractor.trackCount).firstOrNull { index ->
                extractor.getTrackFormat(index).getString(MediaFormat.KEY_MIME)?.startsWith("audio/") == true
            } ?: return false
            extractor.selectTrack(track)
            val inputFormat = extractor.getTrackFormat(track)
            val mime = inputFormat.getString(MediaFormat.KEY_MIME) ?: return false
            val startUs = startMs * 1_000
            val endUs = endMs * 1_000
            extractor.seekTo(startUs, MediaExtractor.SEEK_TO_PREVIOUS_SYNC)
            val decoder = MediaCodec.createDecoderByType(mime)
            codec = decoder
            decoder.configure(inputFormat, null, null, 0)
            decoder.start()
            var sampleRate = inputFormat.getIntegerOr(MediaFormat.KEY_SAMPLE_RATE, 44_100)
            var channels = inputFormat.getIntegerOr(MediaFormat.KEY_CHANNEL_COUNT, 2)
            var floatPcm = false
            var inputDone = false
            var outputDone = false
            val info = MediaCodec.BufferInfo()
            BufferedOutputStream(FileOutputStream(raw)).use { pcm ->
                while (!outputDone) {
                    if (!inputDone) {
                        val inIndex = decoder.dequeueInputBuffer(10_000)
                        if (inIndex >= 0) {
                            val inBuffer = requireNotNull(decoder.getInputBuffer(inIndex))
                            val size = extractor.readSampleData(inBuffer, 0)
                            if (size < 0 || extractor.sampleTime > endUs + 500_000) {
                                decoder.queueInputBuffer(inIndex, 0, 0, 0, MediaCodec.BUFFER_FLAG_END_OF_STREAM)
                                inputDone = true
                            } else {
                                decoder.queueInputBuffer(inIndex, 0, size, extractor.sampleTime, 0)
                                extractor.advance()
                            }
                        }
                    }
                    val outIndex = decoder.dequeueOutputBuffer(info, 10_000)
                    when {
                        outIndex == MediaCodec.INFO_OUTPUT_FORMAT_CHANGED -> {
                            val format = decoder.outputFormat
                            sampleRate = format.getIntegerOr(MediaFormat.KEY_SAMPLE_RATE, sampleRate)
                            channels = format.getIntegerOr(MediaFormat.KEY_CHANNEL_COUNT, channels)
                            floatPcm = format.getIntegerOr(MediaFormat.KEY_PCM_ENCODING, 2) == 4 // ENCODING_PCM_FLOAT
                        }
                        outIndex >= 0 -> {
                            val outBuffer = requireNotNull(decoder.getOutputBuffer(outIndex))
                            outBuffer.position(info.offset)
                            outBuffer.limit(info.offset + info.size)
                            writeRange(outBuffer.order(ByteOrder.nativeOrder()), info.presentationTimeUs, startUs, endUs,
                                sampleRate, channels, floatPcm, pcm)
                            decoder.releaseOutputBuffer(outIndex, false)
                            if (info.flags and MediaCodec.BUFFER_FLAG_END_OF_STREAM != 0) outputDone = true
                        }
                    }
                }
            }
            if (raw.length() == 0L) return false
            writeReversedWav(raw, out, sampleRate, channels)
            return true
        } catch (_: Exception) {
            return false
        } finally {
            runCatching { codec?.stop() }
            runCatching { codec?.release() }
            extractor.release()
            raw.delete()
        }
    }

    /** Appends the frames of one decoded buffer that fall inside [startUs, endUs) as 16-bit PCM. */
    private fun writeRange(
        buffer: ByteBuffer,
        bufferStartUs: Long,
        startUs: Long,
        endUs: Long,
        sampleRate: Int,
        channels: Int,
        floatPcm: Boolean,
        out: BufferedOutputStream,
    ) {
        val bytesPerSample = if (floatPcm) 4 else 2
        val frames = buffer.remaining() / (bytesPerSample * channels)
        val bytes = ByteArray(2)
        for (frame in 0 until frames) {
            val timeUs = bufferStartUs + frame * 1_000_000L / sampleRate
            val inRange = timeUs in startUs until endUs
            for (channel in 0 until channels) {
                val sample: Int = if (floatPcm) {
                    (buffer.float.coerceIn(-1f, 1f) * 32767f).toInt()
                } else {
                    buffer.short.toInt()
                }
                if (inRange) {
                    bytes[0] = (sample and 0xff).toByte()
                    bytes[1] = (sample shr 8 and 0xff).toByte()
                    out.write(bytes)
                }
            }
        }
    }

    private fun writeReversedWav(raw: File, out: File, sampleRate: Int, channels: Int) {
        val frameBytes = 2 * channels
        val dataBytes = raw.length() / frameBytes * frameBytes
        RandomAccessFile(raw, "r").use { input ->
            BufferedOutputStream(FileOutputStream(out)).use { wav ->
                wav.write(wavHeader(dataBytes, sampleRate, channels))
                val blockFrames = 16_384
                val block = ByteArray(blockFrames * frameBytes)
                val reversed = ByteArray(block.size)
                var end = dataBytes
                while (end > 0) {
                    val start = maxOf(0L, end - block.size)
                    val length = (end - start).toInt()
                    input.seek(start)
                    input.readFully(block, 0, length)
                    val frames = length / frameBytes
                    for (frame in 0 until frames) {
                        System.arraycopy(block, (frames - 1 - frame) * frameBytes, reversed, frame * frameBytes, frameBytes)
                    }
                    wav.write(reversed, 0, length)
                    end = start
                }
            }
        }
    }

    private fun wavHeader(dataBytes: Long, sampleRate: Int, channels: Int): ByteArray =
        ByteBuffer.allocate(44).order(ByteOrder.LITTLE_ENDIAN).apply {
            put("RIFF".toByteArray())
            putInt((36 + dataBytes).toInt())
            put("WAVE".toByteArray())
            put("fmt ".toByteArray())
            putInt(16)
            putShort(1) // PCM
            putShort(channels.toShort())
            putInt(sampleRate)
            putInt(sampleRate * channels * 2)
            putShort((channels * 2).toShort())
            putShort(16)
            put("data".toByteArray())
            putInt(dataBytes.toInt())
        }.array()

    internal fun Clip.reversesVideo(): Boolean =
        effectSegments.any { it.enabled && it.effectId == "reverse_video" }

    internal fun Clip.reversesAudio(): Boolean =
        audioSegments.any { it.enabled && it.effectId == "reverse_audio" }
}
