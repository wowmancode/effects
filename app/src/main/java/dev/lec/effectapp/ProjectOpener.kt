package dev.lec.effectapp

import android.content.Context
import android.graphics.Bitmap
import android.graphics.Canvas
import android.graphics.Color
import android.graphics.Paint
import android.graphics.Typeface
import android.net.Uri
import android.provider.OpenableColumns
import dev.lec.effectapp.model.EditProject
import dev.lec.effectapp.model.veg.GeneratedImage
import dev.lec.effectapp.model.veg.VegFormatException
import dev.lec.effectapp.model.veg.VegImporter
import dev.lec.effectapp.model.veg.VegReader
import java.io.File
import java.security.MessageDigest

/**
 * Opens a project file picked by the user: an effect-app project (JSON), or a layered project
 * from another editor, which is converted on the way in. Runs on a background thread.
 */
internal object ProjectOpener {
    sealed interface Result {
        data class Json(val text: String) : Result
        data class Converted(val project: EditProject, val notes: List<String>) : Result
        data class Failed(val message: String) : Result
    }

    fun open(context: Context, uri: Uri): Result = runCatching {
        val bytes = context.contentResolver.openInputStream(uri)?.use { it.readBytes() }
            ?: return Result.Failed("Couldn't read that file.")
        if (!VegReader.looksLike(bytes.copyOfRange(0, minOf(bytes.size, 64)))) {
            return Result.Json(bytes.decodeToString())
        }
        val name = displayName(context, uri).substringBeforeLast('.').ifBlank { "Imported edit" }
        val imported = VegImporter.import(VegReader.read(bytes), name)
        var project = imported.project
        imported.generatedImages.forEach { (key, spec) ->
            val file = renderImage(context, key, spec)
            project = project.relinkSource(key, Uri.fromFile(file).toString(), project.layerName(key))
        }
        Result.Converted(project, imported.notes)
    }.getOrElse { error ->
        Result.Failed(
            when (error) {
                is VegFormatException -> error.message ?: "That project couldn't be opened."
                is OutOfMemoryError -> "That project is too large to open."
                else -> "That project couldn't be opened."
            },
        )
    }

    private fun EditProject.layerName(key: String): String =
        clips.asSequence().flatMap { it.overlays.asSequence() }.firstOrNull { it.sourceUri == key }?.displayName ?: "Layer"

    /** Draws a generated layer once and caches it under the app's files (same spec, same file). */
    private fun renderImage(context: Context, key: String, spec: GeneratedImage): File {
        val directory = File(context.filesDir, "generated-layers").apply { mkdirs() }
        val digest = MessageDigest.getInstance("SHA-1")
            .digest("$key|${spec.width}x${spec.height}|${spec.text}|${spec.textSize}|${spec.argb}".toByteArray())
            .joinToString("") { "%02x".format(it) }
        val file = File(directory, "$digest.png")
        if (file.isFile && file.length() > 0) return file
        val bitmap = Bitmap.createBitmap(spec.width, spec.height, Bitmap.Config.ARGB_8888)
        val canvas = Canvas(bitmap)
        when (spec.kind) {
            GeneratedImage.Kind.SOLID, GeneratedImage.Kind.NOISE -> canvas.drawColor(spec.argb)
            GeneratedImage.Kind.TEXT -> drawText(canvas, spec)
        }
        file.outputStream().use { bitmap.compress(Bitmap.CompressFormat.PNG, 100, it) }
        bitmap.recycle()
        return file
    }

    /** Centred bold text with a dark outline, on a transparent background. */
    private fun drawText(canvas: Canvas, spec: GeneratedImage) {
        val size = (spec.textSize * spec.height).coerceIn(8f, spec.height.toFloat())
        val fill = Paint(Paint.ANTI_ALIAS_FLAG).apply {
            color = spec.argb
            textSize = size
            typeface = Typeface.DEFAULT_BOLD
            textAlign = Paint.Align.CENTER
        }
        val outline = Paint(fill).apply {
            color = Color.BLACK
            style = Paint.Style.STROKE
            strokeWidth = (size / 14f).coerceAtLeast(1f)
            strokeJoin = Paint.Join.ROUND
        }
        val lines = spec.text.lines().ifEmpty { listOf("") }
        val lineHeight = fill.fontSpacing
        var y = spec.height / 2f - lineHeight * (lines.size - 1) / 2f - (fill.ascent() + fill.descent()) / 2f
        lines.forEach { line ->
            canvas.drawText(line, spec.width / 2f, y, outline)
            canvas.drawText(line, spec.width / 2f, y, fill)
            y += lineHeight
        }
    }

    private fun displayName(context: Context, uri: Uri): String =
        context.contentResolver.query(uri, arrayOf(OpenableColumns.DISPLAY_NAME), null, null, null)?.use { cursor ->
            if (cursor.moveToFirst()) cursor.getString(0) else null
        } ?: uri.lastPathSegment ?: "Imported edit"
}
