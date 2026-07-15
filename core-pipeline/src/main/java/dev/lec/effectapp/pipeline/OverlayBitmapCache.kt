package dev.lec.effectapp.pipeline

import android.content.Context
import android.graphics.Bitmap
import android.graphics.BitmapFactory
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
        val bounds = BitmapFactory.Options().apply { inJustDecodeBounds = true }
        context.contentResolver.openInputStream(parsed)?.use { BitmapFactory.decodeStream(it, null, bounds) }
        var sampleSize = 1
        val largest = maxOf(bounds.outWidth, bounds.outHeight)
        while (largest / sampleSize > MAX_DIMENSION) sampleSize *= 2
        val options = BitmapFactory.Options().apply { inSampleSize = sampleSize }
        return context.contentResolver.openInputStream(parsed)?.use { BitmapFactory.decodeStream(it, null, options) }
    }
}
