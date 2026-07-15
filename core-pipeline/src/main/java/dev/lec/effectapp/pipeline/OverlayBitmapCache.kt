package dev.lec.effectapp.pipeline

import android.content.Context
import android.graphics.Bitmap
import android.graphics.BitmapFactory
import android.media.MediaMetadataRetriever
import android.net.Uri

/**
 * Decodes and caches overlay images so the preview and export pipelines can build overlay effects
 * without a [Context]. Images are down-sampled to keep GL texture uploads cheap.
 */
object OverlayBitmapCache {
    private const val MAX_DIMENSION = 1280
    private val cache = HashMap<String, Bitmap>()

    /** Returns a decoder bound to [context] for use as the pipeline's overlay bitmap resolver. */
    fun resolver(context: Context): (String) -> Bitmap? {
        val appContext = context.applicationContext
        return { uri -> get(appContext, uri) }
    }

    @Synchronized
    fun get(context: Context, uri: String): Bitmap? {
        cache[uri]?.let { return it }
        val decoded = runCatching { decode(context, uri) }.getOrNull() ?: return null
        cache[uri] = decoded
        return decoded
    }

    private fun decode(context: Context, uri: String): Bitmap? {
        val parsed = Uri.parse(uri)
        return decodeImage(context, parsed) ?: decodeVideoFrame(context, parsed)
    }

    private fun decodeImage(context: Context, uri: Uri): Bitmap? {
        val bounds = BitmapFactory.Options().apply { inJustDecodeBounds = true }
        context.contentResolver.openInputStream(uri)?.use { BitmapFactory.decodeStream(it, null, bounds) }
        if (bounds.outWidth <= 0) return null
        var sampleSize = 1
        val largest = maxOf(bounds.outWidth, bounds.outHeight)
        while (largest / sampleSize > MAX_DIMENSION) sampleSize *= 2
        val options = BitmapFactory.Options().apply { inSampleSize = sampleSize }
        return context.contentResolver.openInputStream(uri)?.use { BitmapFactory.decodeStream(it, null, options) }
    }

    /** Grabs a representative frame so a video overlay shows as a still poster in the preview. */
    private fun decodeVideoFrame(context: Context, uri: Uri): Bitmap? = runCatching {
        MediaMetadataRetriever().use { retriever ->
            retriever.setDataSource(context, uri)
            val frame = retriever.getFrameAtTime(0) ?: return null
            val largest = maxOf(frame.width, frame.height)
            if (largest <= MAX_DIMENSION) return frame
            val scale = MAX_DIMENSION.toFloat() / largest
            Bitmap.createScaledBitmap(frame, (frame.width * scale).toInt(), (frame.height * scale).toInt(), true)
        }
    }.getOrNull()
}
