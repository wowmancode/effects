package dev.lec.effectapp

import android.content.Context
import android.net.Uri
import android.provider.DocumentsContract
import kotlinx.coroutines.Dispatchers
import kotlinx.coroutines.withContext
import java.io.ByteArrayOutputStream
import java.util.Locale
import java.util.zip.ZipInputStream

internal data class PresetFolderScan(
    val payloads: List<String>,
    val filesRead: Int,
)

/** Reads preset documents through SAF. It never writes, renames, or deletes source documents. */
internal suspend fun scanPresetFolder(context: Context, treeUri: Uri): PresetFolderScan =
    withContext(Dispatchers.IO) {
        val resolver = context.contentResolver
        val payloads = mutableListOf<String>()
        var filesRead = 0

        fun readLimited(uri: Uri, limit: Int): ByteArray? = resolver.openInputStream(uri)?.use { input ->
            val output = ByteArrayOutputStream()
            val buffer = ByteArray(16 * 1024)
            var total = 0
            while (true) {
                val count = input.read(buffer)
                if (count < 0) break
                total += count
                if (total > limit) return@use null
                output.write(buffer, 0, count)
            }
            output.toByteArray()
        }

        fun readArchive(uri: Uri): List<String> {
            val entries = mutableListOf<String>()
            resolver.openInputStream(uri)?.use { input ->
                ZipInputStream(input.buffered()).use { zip ->
                    var entry = zip.nextEntry
                    while (entry != null && entries.size < MAX_ARCHIVE_ENTRIES) {
                        if (!entry.isDirectory && entry.name.endsWith(".json", ignoreCase = true)) {
                            val output = ByteArrayOutputStream()
                            val buffer = ByteArray(16 * 1024)
                            var total = 0
                            while (true) {
                                val count = zip.read(buffer)
                                if (count < 0) break
                                total += count
                                if (total > MAX_PRESET_BYTES) {
                                    output.reset()
                                    break
                                }
                                output.write(buffer, 0, count)
                            }
                            if (output.size() > 0) entries += output.toString(Charsets.UTF_8.name())
                        }
                        zip.closeEntry()
                        entry = zip.nextEntry
                    }
                }
            }
            return entries
        }

        fun scanChildren(parentDocumentId: String) {
            val childrenUri = DocumentsContract.buildChildDocumentsUriUsingTree(treeUri, parentDocumentId)
            resolver.query(childrenUri, SCAN_COLUMNS, null, null, null)?.use { cursor ->
                val idIndex = cursor.getColumnIndexOrThrow(DocumentsContract.Document.COLUMN_DOCUMENT_ID)
                val nameIndex = cursor.getColumnIndexOrThrow(DocumentsContract.Document.COLUMN_DISPLAY_NAME)
                val mimeIndex = cursor.getColumnIndexOrThrow(DocumentsContract.Document.COLUMN_MIME_TYPE)
                while (cursor.moveToNext()) {
                    val documentId = cursor.getString(idIndex)
                    val name = cursor.getString(nameIndex).orEmpty()
                    val mime = cursor.getString(mimeIndex).orEmpty()
                    if (mime == DocumentsContract.Document.MIME_TYPE_DIR) {
                        scanChildren(documentId)
                        continue
                    }
                    val extension = name.substringAfterLast('.', "").lowercase(Locale.ROOT)
                    if (extension !in PRESET_EXTENSIONS) continue
                    val documentUri = DocumentsContract.buildDocumentUriUsingTree(treeUri, documentId)
                    filesRead++
                    val archiveEntries = if (extension in ARCHIVE_EXTENSIONS) {
                        runCatching { readArchive(documentUri) }.getOrDefault(emptyList())
                    } else emptyList()
                    if (archiveEntries.isNotEmpty()) {
                        payloads += archiveEntries
                    } else {
                        readLimited(documentUri, MAX_PRESET_BYTES)?.decodeToString()?.let(payloads::add)
                    }
                }
            }
        }

        scanChildren(DocumentsContract.getTreeDocumentId(treeUri))
        PresetFolderScan(payloads, filesRead)
    }

private const val MAX_PRESET_BYTES = 4 * 1024 * 1024
private const val MAX_ARCHIVE_ENTRIES = 1_000
private val ARCHIVE_EXTENSIONS = setOf("zip", "archive", "presetarchive", "lecarchive", "lecpresets")
private val PRESET_EXTENSIONS = ARCHIVE_EXTENSIONS + setOf("json", "preset", "lecpreset")
private val SCAN_COLUMNS = arrayOf(
    DocumentsContract.Document.COLUMN_DOCUMENT_ID,
    DocumentsContract.Document.COLUMN_DISPLAY_NAME,
    DocumentsContract.Document.COLUMN_MIME_TYPE,
)
