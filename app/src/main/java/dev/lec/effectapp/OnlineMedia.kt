package dev.lec.effectapp

import android.content.Context
import android.net.Uri
import android.provider.OpenableColumns
import dev.lec.effectapp.online.MediaKind
import dev.lec.effectapp.online.MediaOffer
import dev.lec.effectapp.online.Names
import dev.lec.effectapp.online.sha256Hex
import java.io.File
import java.io.InputStream
import kotlinx.coroutines.Dispatchers
import kotlinx.coroutines.withContext

/**
 * Which file on this phone each shared hash means. Media people agreed to receive is kept in
 * the app's private storage (online-media/), named by its hash, so it stays after the room
 * ends. Files the owner only passes along for others go to online-relay/ and are never opened
 * on the owner's phone; they're deleted when the room ends.
 */
internal class OnlineMedia(private val context: Context) {
    private val uriByHash = HashMap<String, String>()
    private val hashByUri = HashMap<String, String>()
    private val metaByHash = HashMap<String, MediaOffer>()

    val receivedDir: File = File(context.filesDir, "online-media").apply { mkdirs() }
    val relayDir: File = File(context.cacheDir, "online-relay").apply { mkdirs() }

    fun uriFor(hash: String): String? = uriByHash[hash]
    fun hashFor(uri: String): String? = hashByUri[uri]
    fun metaFor(hash: String): MediaOffer? = metaByHash[hash]
    fun isUsable(hash: String) = hash in uriByHash

    fun register(hash: String, uri: String, meta: MediaOffer? = null) {
        uriByHash[hash] = uri
        hashByUri[uri] = hash
        if (meta != null) metaByHash[hash] = meta
    }

    fun clear() {
        uriByHash.clear()
        hashByUri.clear()
        metaByHash.clear()
        relayDir.listFiles()?.forEach { it.delete() }
        receivedDir.listFiles()?.filter { it.name.endsWith(".part") }?.forEach { it.delete() }
    }

    /** A verified file received earlier (in this room or an older one). */
    fun receivedFile(hash: String): File? =
        receivedDir.listFiles()?.firstOrNull { it.isFile && it.name.substringBefore('.') == hash && !it.name.endsWith(".part") }

    fun relayFile(hash: String): File? = File(relayDir, hash).takeIf { it.isFile }

    /** Hashes a local file. Null when unreadable or larger than [maxBytes]. */
    suspend fun describe(uri: String, maxBytes: Long): MediaOffer? = withContext(Dispatchers.IO) {
        runCatching {
            val parsed = Uri.parse(uri)
            val size = sizeOf(parsed) ?: -1L
            if (size > maxBytes) return@runCatching null
            val hash = open(uri)?.use { sha256Hex(it, maxBytes) } ?: return@runCatching null
            val actualSize = if (size >= 0) size else open(uri)?.use { countBytes(it) } ?: return@runCatching null
            MediaOffer(
                hash = hash,
                name = Names.clean(nameOf(parsed))?.take(100) ?: "Media",
                size = actualSize,
                kind = kindOf(parsed),
            )
        }.getOrNull()
    }

    /** Opens what this phone has for [hash]: the registered file, else a relay copy. */
    fun openForSending(hash: String): InputStream? =
        uriByHash[hash]?.let(::open) ?: relayFile(hash)?.inputStream()

    fun open(uri: String): InputStream? = runCatching {
        val parsed = Uri.parse(uri)
        if (parsed.scheme == "file") File(requireNotNull(parsed.path)).inputStream()
        else context.contentResolver.openInputStream(parsed)
    }.getOrNull()

    /** Where a received file is kept once verified, with an extension players recognise. */
    fun receivedTarget(offer: MediaOffer): File {
        val ext = offer.name.substringAfterLast('.', "").lowercase().takeIf { it.matches(Regex("[a-z0-9]{1,5}")) }
            ?: when (offer.kind) {
                MediaKind.VIDEO -> "mp4"
                MediaKind.AUDIO -> "m4a"
                MediaKind.IMAGE -> "png"
                MediaKind.FILE -> "bin"
            }
        return File(receivedDir, "${offer.hash}.$ext")
    }

    private fun countBytes(input: InputStream): Long {
        val buffer = ByteArray(1 shl 16)
        var total = 0L
        while (true) {
            val n = input.read(buffer)
            if (n < 0) return total
            total += n
        }
    }

    private fun sizeOf(uri: Uri): Long? = when (uri.scheme) {
        "file" -> uri.path?.let { File(it).length() }
        else -> runCatching {
            context.contentResolver.query(uri, arrayOf(OpenableColumns.SIZE), null, null, null)?.use { cursor ->
                if (cursor.moveToFirst() && !cursor.isNull(0)) cursor.getLong(0) else null
            }
        }.getOrNull()
    }

    private fun nameOf(uri: Uri): String? = when (uri.scheme) {
        "file" -> uri.lastPathSegment
        else -> runCatching {
            context.contentResolver.query(uri, arrayOf(OpenableColumns.DISPLAY_NAME), null, null, null)?.use { cursor ->
                if (cursor.moveToFirst()) cursor.getString(0) else null
            }
        }.getOrNull() ?: uri.lastPathSegment
    }

    private fun kindOf(uri: Uri): MediaKind {
        val type = runCatching { context.contentResolver.getType(uri) }.getOrNull()
            ?: android.webkit.MimeTypeMap.getSingleton()
                .getMimeTypeFromExtension(uri.lastPathSegment.orEmpty().substringAfterLast('.', "").lowercase())
        return when {
            type == null -> MediaKind.FILE
            type.startsWith("video/") -> MediaKind.VIDEO
            type.startsWith("audio/") -> MediaKind.AUDIO
            type.startsWith("image/") -> MediaKind.IMAGE
            else -> MediaKind.FILE
        }
    }
}
