package dev.lec.effectapp.model.veg

import java.nio.ByteBuffer
import java.nio.ByteOrder
import java.util.UUID

/*
 * Reader for .veg project files (layered desktop-editor projects).
 *
 * The file is a tree of Wave64-style chunks: a 16-byte GUID, a little-endian u64 size that
 * includes the 24-byte header, then the payload; chunks are padded to 8 bytes. Two GUIDs mark
 * containers ("riff" and "list"), whose payload starts with a 16-byte type GUID followed by
 * child chunks. Times are in 100 ns ticks. Only what the importer needs is decoded; everything
 * else is skipped, so unknown chunks never stop a read.
 */

const val TICKS_PER_MS = 10_000L

class VegFormatException(message: String) : Exception(message)

data class VegFile(
    val width: Int,
    val height: Int,
    val fps: Double,
    val media: Map<Int, VegMedia>,
    /** In file order, which is top to bottom: the first video track is drawn in front. */
    val tracks: List<VegTrack>,
)

data class VegMedia(
    val id: Int,
    /** Original path (Windows style), or "META:\Video Generator\{clsid} (n)[m]" for generators. */
    val path: String,
    /** Generator plug-in (solid color, noise, text…), null for a media file. */
    val generator: VegPlugin? = null,
    /** Text of a text generator, from its RTF. */
    val text: String? = null,
    /** Font size in RTF half-points (\fsN), 0 when unknown. */
    val textHalfPoints: Int = 0,
) {
    val isGenerator: Boolean get() = generator != null || path.startsWith("META:", ignoreCase = true)
    val fileName: String get() = path.substringAfterLast('\\').substringAfterLast('/')
}

data class VegTrack(
    val index: Int,
    val isVideo: Boolean,
    /** Compositing mode code; 0 is normal (source alpha). */
    val compositeCode: Int = 0,
    /** The track composites through a compositing plug-in. */
    val compositePlugin: Boolean = false,
    val motion: List<VegMotionKey> = emptyList(),
    val events: List<VegEvent>,
)

data class VegEvent(
    val startTicks: Long,
    val lengthTicks: Long,
    /** Playback rate; 1 = normal. */
    val rate: Double,
    /** Stored in-point; the real source position is offset × rate. */
    val offsetTicks: Long,
    val mediaId: Int,
    val takeName: String,
    val videoFx: List<VegPlugin> = emptyList(),
    /** Pitch Shift ratio from the event's audio FX (1 = none). */
    val pitchRatio: Double = 1.0,
    val panCrop: List<VegPanCropKey> = emptyList(),
    /** Pixel frame the Pan/Crop window is measured in. */
    val coordWidth: Int = 0,
    val coordHeight: Int = 0,
) {
    val rateOrOne: Double get() = if (rate.isFinite() && rate > 0.0) rate else 1.0
    val sourceStartTicks: Double get() = offsetTicks * rateOrOne
}

data class VegPlugin(val clsid: String, val preset: String, val params: ByteArray) {
    fun doubles(): DoubleArray {
        val buffer = ByteBuffer.wrap(params).order(ByteOrder.LITTLE_ENDIAN)
        return DoubleArray(params.size / 8) { buffer.getDouble(it * 8) }
    }

    fun floats(): FloatArray {
        val buffer = ByteBuffer.wrap(params).order(ByteOrder.LITTLE_ENDIAN)
        return FloatArray(params.size / 4) { buffer.getFloat(it * 4) }
    }

    override fun equals(other: Any?): Boolean =
        other is VegPlugin && clsid == other.clsid && preset == other.preset && params.contentEquals(other.params)

    override fun hashCode(): Int = (clsid.hashCode() * 31 + preset.hashCode()) * 31 + params.contentHashCode()
}

/** Pan/Crop window at an event-local time, in coordinate-frame pixels (Y down). */
data class VegPanCropKey(
    val timeTicks: Long,
    val width: Double,
    val height: Double,
    val centerX: Double,
    val centerY: Double,
    /** Radians. */
    val rotation: Double,
)

/**
 * Track Motion at a track-local (= project) time. The frame is 2·aspect wide and 2 high,
 * centred on 0,0 with Y up; width = aspect and height = 1 is full size, negative means flipped.
 */
data class VegMotionKey(val timeTicks: Long, val x: Double, val y: Double, val width: Double, val height: Double)

object VegClsid {
    const val SOLID_COLOR = "d9dd0dfc-274f-45a7-b874-3d2bcfa61fe9"
    const val NOISE_TEXTURE = "2ccda29d-fbd5-4e5d-aa1b-b82ea7fbed51"
    const val TEXT = "0fe8789d-0c47-442a-afb0-0daf97669317"
    const val BLACK_AND_WHITE = "e87674d5-e8f2-11d1-9aa9-00a0c99b12c5"
    const val TV_SIMULATOR = "b892d510-9487-4022-b261-738123b55e47"
    const val PITCH_SHIFT = "ed1b4100-93be-11d0-aebc-00a0c9053912"
    val GENERATORS = listOf(SOLID_COLOR, NOISE_TEXTURE, TEXT)
}

object VegReader {
    private const val RIFF = "66666972-912e-11cf-a5d6-28db04c10000"
    private const val LIST = "7473696c-912f-11cf-a5d6-28db04c10000"
    private const val PROJECT_FORM = "46c429ef-904a-11d2-8722-00c04f8edb8a"
    private const val PROJECT_HEADER = "b28f2d5a-230f-11d2-86af-00c04f8edb8a"
    private const val MEDIA_POOL = "b28f2d5b-230f-11d2-86af-00c04f8edb8a"
    private const val MEDIA_ENTRY = "b28f2d5d-230f-11d2-86af-00c04f8edb8a"
    private const val TRACK_LIST = "4d6c0747-2316-11d2-86b0-00c04f8edb8a"
    private const val TRACK = "4d6c0748-2316-11d2-86b0-00c04f8edb8a"
    private const val TRACK_HEADER_OR_EVENTS = "4d6c0749-2316-11d2-86b0-00c04f8edb8a"
    private const val EVENT = "4d6c074a-2316-11d2-86b0-00c04f8edb8a"
    private const val EVENT_HEADER = "168d206a-2321-11d2-86b0-00c04f8edb8a"
    private const val EVENT_TAKE = "168d206d-2321-11d2-86b0-00c04f8edb8a"
    private const val EVENT_AUDIO_FX = "b66a95ce-5946-48ab-a4f4-f88c95acdc1d"
    private const val EVENT_VIDEO_FX = "1af0e4e4-6e7f-11d2-8705-00c04f8edb8a"
    private const val EVENT_PAN_CROP = "884bacff-74eb-456c-88f3-739e8390bd07"
    private const val TRACK_COMPOSITE = "69d46c28-7f0b-11d2-8717-00c04f8edb8a"
    private const val TRACK_MOTION = "d24df987-1842-4a39-b079-9e4379485a38"

    private val MAGIC = byteArrayOf(0x72, 0x69, 0x66, 0x66, 0x2e, 0x91.toByte(), 0xcf.toByte(), 0x11)

    /** True when [head] (the first bytes of a file) look like a project this reader understands. */
    fun looksLike(head: ByteArray): Boolean =
        head.size >= 40 && (0 until 8).all { head[it] == MAGIC[it] } &&
            guidAt(head, 24) == PROJECT_FORM

    fun read(bytes: ByteArray): VegFile {
        if (!looksLike(bytes)) throw VegFormatException("Not a supported project file.")
        val root = Chunk(bytes, 0, bytes.size).children()
        val header = root.firstOrNull { it.guid == PROJECT_HEADER }
        val (width, height, fps) = header?.let { readProjectHeader(it) } ?: Triple(0, 0, 0.0)
        val media = root.firstOrNull { it.isList(MEDIA_POOL) }?.children().orEmpty()
            .filter { it.guid == MEDIA_ENTRY }
            .mapNotNull { runCatching { readMedia(it) }.getOrNull() }
            .associateBy { it.id }
        val tracks = root.firstOrNull { it.isList(TRACK_LIST) }?.children().orEmpty()
            .filter { it.isList(TRACK) }
            .mapIndexedNotNull { index, chunk -> runCatching { readTrack(index, chunk) }.getOrNull() }
        if (tracks.isEmpty()) throw VegFormatException("The project has no tracks.")
        return VegFile(width, height, fps, media, tracks)
    }

    // ------------------------------------------------------------------ project

    private fun readProjectHeader(chunk: Chunk): Triple<Int, Int, Double> {
        // Fixed fields, then three null-terminated UTF-16 paths (project, documents, settings),
        // then a block that starts with its size, the frame width and height; fps is a double
        // 52 bytes after the width.
        var p = chunk.dataStart + 136
        repeat(3) { p = endOfUtf16(chunk.bytes, p, chunk.end) }
        p = (p - chunk.dataStart + 3) / 4 * 4 + chunk.dataStart
        if (p + 64 > chunk.end) return Triple(0, 0, 0.0)
        val width = u32(chunk.bytes, p + 4)
        val height = u32(chunk.bytes, p + 8)
        val fps = f64(chunk.bytes, p + 56)
        val sane = width in 16..16_384 && height in 16..16_384
        return Triple(if (sane) width else 0, if (sane) height else 0, if (fps in 1.0..1_000.0) fps else 0.0)
    }

    private fun readMedia(chunk: Chunk): VegMedia {
        val b = chunk.bytes
        val id = u32(b, chunk.dataStart + 60)
        val path = utf16z(b, chunk.dataStart + 96, chunk.end)
        val generator = VegClsid.GENERATORS.firstNotNullOfOrNull { clsid ->
            indexOf(b, guidBytes(clsid), chunk.dataStart, chunk.end)
                .takeIf { it >= 4 }
                ?.let { readPluginRecord(b, it - 4, chunk.end) }
        }
        var text: String? = null
        var halfPoints = 0
        if (generator?.clsid == VegClsid.TEXT) {
            val start = indexOf(b, "{\\rtf".toByteArray(Charsets.US_ASCII), chunk.dataStart, chunk.end)
            if (start >= 0) {
                var end = start
                while (end < chunk.end && b[end] != 0.toByte()) end++
                val rtf = String(b, start, end - start, Charsets.ISO_8859_1)
                text = RtfText.plainText(rtf)
                halfPoints = RtfText.fontHalfPoints(rtf)
            }
        }
        return VegMedia(id, path, generator, text, halfPoints)
    }

    // ------------------------------------------------------------------- tracks

    private fun readTrack(index: Int, chunk: Chunk): VegTrack {
        val kids = chunk.children()
        val header = kids.first { it.guid == TRACK_HEADER_OR_EVENTS }
        val isVideo = u32(chunk.bytes, header.dataStart + 12) == 3
        var compositeCode = 0
        var compositePlugin = false
        kids.firstOrNull { it.isList(TRACK_COMPOSITE) }?.children()?.firstOrNull()?.let { c ->
            if (c.dataStart + 104 <= c.end) {
                compositeCode = u32(c.bytes, c.dataStart + 96)
                compositePlugin = u32(c.bytes, c.dataStart + 100) == -1
            }
        }
        val motion = kids.firstOrNull { it.isList(TRACK_MOTION) }?.children()?.firstOrNull()
            ?.let { readMotion(it) }.orEmpty()
        val events = kids.firstOrNull { it.isList(TRACK_HEADER_OR_EVENTS) }?.children().orEmpty()
            .filter { it.isList(EVENT) }
            .mapNotNull { runCatching { readEvent(it) }.getOrNull() }
        return VegTrack(index, isVideo, compositeCode, compositePlugin, motion, events)
    }

    private fun readMotion(chunk: Chunk): List<VegMotionKey> {
        val b = chunk.bytes
        val base = chunk.dataStart
        if (base + 40 > chunk.end) return emptyList()
        val count = u32(b, base + 36)
        var p = base + 40
        val keys = mutableListOf<VegMotionKey>()
        repeat(count.coerceIn(0, 10_000)) {
            if (p + 96 > chunk.end) return keys
            val size = u32(b, p)
            if (size < 96 || p + size > chunk.end) return keys
            keys += VegMotionKey(
                timeTicks = i64(b, p + 4),
                x = f64(b, p + 48),
                y = f64(b, p + 56),
                width = f64(b, p + 80),
                height = f64(b, p + 88),
            )
            p += size
        }
        return keys
    }

    // ------------------------------------------------------------------- events

    private fun readEvent(chunk: Chunk): VegEvent? {
        val kids = chunk.children()
        val header = kids.firstOrNull { it.guid == EVENT_HEADER } ?: return null
        val take = kids.firstOrNull { it.guid == EVENT_TAKE } ?: return null
        val h = header.dataStart
        val t = take.dataStart
        val b = chunk.bytes
        val nameBytes = u32(b, t + 32)
        val name = if (nameBytes in 2..4_096 && t + 42 + nameBytes <= take.end) {
            String(b, t + 42, nameBytes, Charsets.UTF_16LE).trimEnd('\u0000')
        } else utf16z(b, t + 42, take.end)

        val videoFx = kids.filter { it.isList(EVENT_VIDEO_FX) }
            .flatMap { it.children() }
            .mapNotNull { fx -> readPluginRecord(b, fx.dataStart, fx.end) }

        var pitch = 1.0
        kids.filter { it.isList(EVENT_AUDIO_FX) }.flatMap { it.children() }.forEach { fx ->
            val at = indexOf(b, guidBytes(VegClsid.PITCH_SHIFT), fx.dataStart, fx.end)
            if (at >= 0 && at + 112 <= fx.end) {
                val ratio = f64(b, at + 104)
                if (ratio.isFinite() && ratio in 0.001..1_000.0) pitch *= ratio
            }
        }

        var panCrop = emptyList<VegPanCropKey>()
        var coordW = 0
        var coordH = 0
        kids.firstOrNull { it.guid == EVENT_PAN_CROP }?.let { pc ->
            val parsed = readPanCrop(b, pc.dataStart, pc.end)
            panCrop = parsed.first
            coordW = parsed.second
            coordH = parsed.third
        }
        return VegEvent(
            startTicks = i64(b, h + 16),
            lengthTicks = i64(b, h + 24),
            rate = f64(b, h + 40),
            offsetTicks = i64(b, t + 16),
            mediaId = u32(b, t + 36),
            takeName = name,
            videoFx = videoFx,
            pitchRatio = pitch,
            panCrop = panCrop,
            coordWidth = coordW,
            coordHeight = coordH,
        )
    }

    /** Pan/Crop is a classic RIFF tree: LIST EPCP { EPCS, KFRS, LIST POSL { POSK… }, masks }. */
    private fun readPanCrop(b: ByteArray, start: Int, end: Int): Triple<List<VegPanCropKey>, Int, Int> {
        val keys = mutableListOf<VegPanCropKey>()
        var dims = 0 to 0
        fun walk(from: Int, to: Int) {
            var p = from
            while (p + 8 <= to) {
                val tag = String(b, p, 4, Charsets.ISO_8859_1)
                val size = u32(b, p + 4)
                if (size < 0 || p + 8 + size > to) return
                val data = p + 8
                when (tag) {
                    "LIST" -> walk(data + 4, data + size)
                    "EPCS" -> if (size >= 16) dims = u32(b, data + size - 8) to u32(b, data + size - 4)
                    "POSK" -> if (size >= 60) keys += VegPanCropKey(
                        timeTicks = i64(b, data),
                        width = f64(b, data + 20),
                        height = f64(b, data + 28),
                        centerX = f64(b, data + 36),
                        centerY = f64(b, data + 44),
                        rotation = f64(b, data + 52),
                    )
                }
                p = data + size + (size and 1)
            }
        }
        walk(start, end)
        val (w, h) = dims
        val sane = w in 16..16_384 && h in 16..16_384
        return Triple(keys.sortedBy { it.timeTicks }, if (sane) w else 0, if (sane) h else 0)
    }

    /**
     * A plug-in record: u32 56 (header size), CLSID, u32 parameter bytes at +20, u32 name length
     * at +52, the UTF-16 preset name at +56, then the parameter block (keyframes follow it).
     */
    private fun readPluginRecord(b: ByteArray, at: Int, end: Int): VegPlugin? {
        if (at < 0 || at + 56 > end || u32(b, at) != 56) return null
        val clsid = guidAt(b, at + 4)
        val paramBytes = u32(b, at + 20)
        val nameLen = u32(b, at + 52)
        if (nameLen !in 0..4_096 || paramBytes !in 0..65_536) return null
        val paramsAt = at + 56 + nameLen
        if (paramsAt + paramBytes > end) return null
        val name = String(b, at + 56, nameLen, Charsets.UTF_16LE).trimEnd('\u0000')
        return VegPlugin(clsid, name, b.copyOfRange(paramsAt, paramsAt + paramBytes))
    }

    // -------------------------------------------------------------- chunk tree

    private class Chunk(val bytes: ByteArray, val start: Int, val end: Int) {
        val guid: String = if (start + 16 <= bytes.size) guidAt(bytes, start) else ""
        val isContainer: Boolean get() = guid == RIFF || guid == LIST
        val type: String get() = if (isContainer && start + 40 <= end) guidAt(bytes, start + 24) else ""
        val dataStart: Int get() = start + 24

        fun isList(listType: String): Boolean = isContainer && type == listType

        /** Child chunks of a container (the whole file is one "riff" container). */
        fun children(): List<Chunk> {
            if (!isContainer) return emptyList()
            val result = mutableListOf<Chunk>()
            var p = (start + 40).toLong()
            while (p + 24 <= end) {
                val size = i64(bytes, p.toInt() + 16)
                if (size < 24 || p + size > end) break
                result += Chunk(bytes, p.toInt(), (p + size).toInt())
                p = (p + size + 7) / 8 * 8
            }
            return result
        }
    }

    // ------------------------------------------------------------------ bytes

    private fun u32(b: ByteArray, p: Int): Int =
        (b[p].toInt() and 0xff) or ((b[p + 1].toInt() and 0xff) shl 8) or
            ((b[p + 2].toInt() and 0xff) shl 16) or ((b[p + 3].toInt() and 0xff) shl 24)

    private fun i64(b: ByteArray, p: Int): Long =
        (u32(b, p).toLong() and 0xffffffffL) or (u32(b, p + 4).toLong() shl 32)

    private fun f64(b: ByteArray, p: Int): Double = java.lang.Double.longBitsToDouble(i64(b, p))

    private fun endOfUtf16(b: ByteArray, from: Int, end: Int): Int {
        var p = from
        while (p + 1 < end && (b[p].toInt() != 0 || b[p + 1].toInt() != 0)) p += 2
        return (p + 2).coerceAtMost(end)
    }

    private fun utf16z(b: ByteArray, from: Int, end: Int): String {
        val stop = endOfUtf16(b, from, end) - 2
        return if (stop > from) String(b, from, stop - from, Charsets.UTF_16LE) else ""
    }

    private fun guidAt(b: ByteArray, p: Int): String {
        val buffer = ByteBuffer.wrap(b, p, 16)
        val d1 = buffer.order(ByteOrder.LITTLE_ENDIAN).getInt(p).toLong() and 0xffffffffL
        val d2 = buffer.order(ByteOrder.LITTLE_ENDIAN).getShort(p + 4).toLong() and 0xffffL
        val d3 = buffer.order(ByteOrder.LITTLE_ENDIAN).getShort(p + 6).toLong() and 0xffffL
        val high = (d1 shl 32) or (d2 shl 16) or d3
        val low = buffer.order(ByteOrder.BIG_ENDIAN).getLong(p + 8)
        return UUID(high, low).toString()
    }

    /** The 16 on-disk bytes (mixed-endian) of [guid]. */
    private fun guidBytes(guid: String): ByteArray {
        val uuid = UUID.fromString(guid)
        val out = ByteBuffer.allocate(16)
        val high = uuid.mostSignificantBits
        out.order(ByteOrder.LITTLE_ENDIAN)
        out.putInt((high ushr 32).toInt())
        out.putShort((high ushr 16).toShort())
        out.putShort(high.toShort())
        out.order(ByteOrder.BIG_ENDIAN)
        out.putLong(uuid.leastSignificantBits)
        return out.array()
    }

    private fun indexOf(b: ByteArray, needle: ByteArray, from: Int, to: Int): Int {
        if (needle.isEmpty()) return -1
        var i = from
        val last = to - needle.size
        outer@ while (i <= last) {
            for (j in needle.indices) if (b[i + j] != needle[j]) { i++; continue@outer }
            return i
        }
        return -1
    }
}

/** Just enough RTF to get a text generator's words and size. */
internal object RtfText {
    fun plainText(rtf: String): String {
        val out = StringBuilder()
        var i = 0
        var depth = 0
        var skipDepth = -1
        while (i < rtf.length) {
            val c = rtf[i]
            when {
                c == '{' -> { depth++; i++ }
                c == '}' -> { if (depth == skipDepth) skipDepth = -1; depth--; i++ }
                c == '\\' && i + 1 < rtf.length -> {
                    val next = rtf[i + 1]
                    if (next == '\\' || next == '{' || next == '}') {
                        if (skipDepth < 0) out.append(next); i += 2
                    } else if (next == '\'' && i + 3 < rtf.length) {
                        rtf.substring(i + 2, i + 4).toIntOrNull(16)?.let { if (skipDepth < 0) out.append(it.toChar()) }
                        i += 4
                    } else {
                        var j = i + 1
                        while (j < rtf.length && rtf[j].isLetter()) j++
                        val word = rtf.substring(i + 1, j)
                        var k = j
                        if (k < rtf.length && (rtf[k] == '-' || rtf[k].isDigit())) {
                            k++
                            while (k < rtf.length && rtf[k].isDigit()) k++
                        }
                        val arg = rtf.substring(j, k).toIntOrNull()
                        if (k < rtf.length && rtf[k] == ' ') k++
                        when (word) {
                            "fonttbl", "colortbl", "stylesheet", "info", "pict" -> if (skipDepth < 0) skipDepth = depth
                            "par", "line" -> if (skipDepth < 0) out.append('\n')
                            "u" -> if (arg != null && skipDepth < 0) {
                                out.append((if (arg < 0) arg + 65_536 else arg).toChar())
                                if (k < rtf.length && rtf[k] != '\\' && rtf[k] != '{' && rtf[k] != '}') k++
                            }
                        }
                        i = if (word.isEmpty()) i + 2 else k
                    }
                }
                c == '\r' || c == '\n' -> i++
                else -> { if (skipDepth < 0 && depth > 0) out.append(c); i++ }
            }
        }
        return out.toString().trim()
    }

    fun fontHalfPoints(rtf: String): Int =
        Regex("\\\\fs(\\d+)").find(rtf)?.groupValues?.get(1)?.toIntOrNull() ?: 0
}
