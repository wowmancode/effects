package dev.lec.effectapp.online

import dev.lec.effectapp.model.EditProject
import kotlinx.serialization.SerialName
import kotlinx.serialization.Serializable
import kotlinx.serialization.encodeToString
import kotlinx.serialization.json.Json

@Serializable
data class MemberInfo(
    val id: String,
    val name: String,
    val owner: Boolean = false,
    val perms: Set<Perm> = emptySet(),
)

@Serializable
data class RoomState(
    /** People allowed in the room, the owner included (2..10). */
    val maxMembers: Int,
    val locked: Boolean = false,
    val mediaCapMb: Int,
    val defaultPerms: Set<Perm>,
    val members: List<MemberInfo>,
) {
    companion object {
        const val HARD_MAX_MEMBERS = 10
        val MEDIA_CAPS_MB = listOf(50, 100, 200, 500)
    }
}

enum class MediaKind { VIDEO, AUDIO, IMAGE, FILE }

@Serializable
data class MediaOffer(
    val hash: String,
    val name: String,
    val size: Long,
    val kind: MediaKind,
    val from: String = "",
)

/** Join handshake, encrypted with the room key (anyone with the invite can read these). */
@Serializable
sealed class Handshake {
    @Serializable @SerialName("hello")
    data class GuestHello(val version: Int, val key: String, val name: String) : Handshake()

    @Serializable @SerialName("welcome")
    data class OwnerHello(val key: String) : Handshake()

    @Serializable @SerialName("refused")
    data class Refused(val reason: String) : Handshake()
}

/** Everything after the handshake, encrypted per owner-guest pair. */
@Serializable
sealed class Msg {
    // Owner to guest
    @Serializable @SerialName("admitted")
    data class Admitted(val memberId: String, val version: Long, val project: EditProject, val room: RoomState) : Msg()

    @Serializable @SerialName("room")
    data class Room(val room: RoomState) : Msg()

    @Serializable @SerialName("ops")
    data class Ops(val version: Long, val from: String, val batchId: Long, val ops: List<Op>) : Msg()

    @Serializable @SerialName("refused")
    data class BatchRefused(val batchId: Long, val reason: String) : Msg()

    @Serializable @SerialName("snapshot")
    data class Snapshot(val version: Long, val project: EditProject) : Msg()

    @Serializable @SerialName("chat-out")
    data class ChatOut(val from: String, val name: String, val text: String, val sentAt: Long, val timelineMs: Long? = null) : Msg()

    @Serializable @SerialName("offer-out")
    data class OfferOut(val offer: MediaOffer) : Msg()

    @Serializable @SerialName("upload-request")
    data class UploadRequest(val hash: String) : Msg()

    @Serializable @SerialName("kicked")
    data class Kicked(val reason: String) : Msg()

    @Serializable @SerialName("ended")
    data class Ended(val reason: String) : Msg()

    @Serializable @SerialName("notice")
    data class Notice(val text: String) : Msg()

    // Guest to owner
    @Serializable @SerialName("batch")
    data class Batch(val batchId: Long, val ops: List<Op>) : Msg()

    @Serializable @SerialName("chat")
    data class Chat(val text: String, val timelineMs: Long? = null) : Msg()

    @Serializable @SerialName("offer")
    data class Offer(val offer: MediaOffer) : Msg()

    @Serializable @SerialName("want")
    data class Want(val hash: String) : Msg()

    @Serializable @SerialName("leave")
    data object Leave : Msg()

    // Both ways (file transfer)
    @Serializable @SerialName("media-start")
    data class MediaStart(val hash: String, val size: Long) : Msg()

    @Serializable @SerialName("media-end")
    data class MediaEnd(val hash: String) : Msg()

    @Serializable @SerialName("media-failed")
    data class MediaFailed(val hash: String, val reason: String) : Msg()
}

object Wire {
    val json = Json {
        classDiscriminator = "t"
        ignoreUnknownKeys = true
        encodeDefaults = false
        explicitNulls = false
    }

    const val CHUNK_BYTES = 64 * 1024
    private const val FRAGMENT_BYTES = 96 * 1024
    const val MAX_MESSAGE_BYTES = 16 * 1024 * 1024
    private const val KIND_JSON: Byte = 0
    private const val KIND_CHUNK: Byte = 1
    private const val KIND_FRAGMENT: Byte = 2

    fun handshake(message: Handshake): ByteArray = json.encodeToString(message).toByteArray()
    fun handshake(bytes: ByteArray): Handshake? = runCatching { json.decodeFromString<Handshake>(bytes.decodeToString()) }.getOrNull()

    /** Plaintext frames for a message: one, or fragments when it's large. */
    fun encode(message: Msg, fragmentId: Int): List<ByteArray> {
        val body = json.encodeToString(message).toByteArray()
        require(body.size <= MAX_MESSAGE_BYTES) { "Message too large." }
        if (body.size <= FRAGMENT_BYTES) return listOf(byteArrayOf(KIND_JSON) + body)
        val parts = (body.indices step FRAGMENT_BYTES).map { start ->
            body.copyOfRange(start, minOf(start + FRAGMENT_BYTES, body.size))
        }
        return parts.mapIndexed { index, part ->
            byteArrayOf(KIND_FRAGMENT) + intBytes(fragmentId) + shortBytes(index) + shortBytes(parts.size) + part
        }
    }

    fun chunk(hash: String, index: Int, data: ByteArray, length: Int = data.size): ByteArray {
        val hashBytes = requireNotNull(Codec.fromHex(hash)) { "Bad hash." }
        return byteArrayOf(KIND_CHUNK) + hashBytes + intBytes(index) + data.copyOf(length)
    }

    sealed interface Frame {
        data class Message(val msg: Msg) : Frame
        data class Chunk(val hash: String, val index: Int, val data: ByteArray) : Frame
    }

    /** Joins fragments and decodes frames from one sender. Malformed input yields null. */
    class Decoder {
        private var fragmentId = -1
        private var expected = 0
        private val parts = mutableListOf<ByteArray>()
        private var size = 0

        fun decode(frame: ByteArray): Frame? {
            if (frame.isEmpty()) return null
            return when (frame[0]) {
                KIND_JSON -> parse(frame.copyOfRange(1, frame.size))
                KIND_CHUNK -> {
                    if (frame.size < 1 + 32 + 4) return null
                    Frame.Chunk(
                        Codec.hex(frame.copyOfRange(1, 33)),
                        readInt(frame, 33),
                        frame.copyOfRange(37, frame.size),
                    )
                }
                KIND_FRAGMENT -> {
                    if (frame.size < 1 + 8) return null
                    val id = readInt(frame, 1)
                    val index = readShort(frame, 5)
                    val count = readShort(frame, 7)
                    if (count < 2 || index >= count) return reset()
                    if (index == 0) {
                        fragmentId = id; expected = count; parts.clear(); size = 0
                    } else if (id != fragmentId || count != expected || index != parts.size) return reset()
                    val part = frame.copyOfRange(9, frame.size)
                    size += part.size
                    if (size > MAX_MESSAGE_BYTES) return reset()
                    parts += part
                    if (parts.size < expected) return null
                    val whole = ByteArray(size)
                    var offset = 0
                    parts.forEach { it.copyInto(whole, offset); offset += it.size }
                    reset()
                    parse(whole)
                }
                else -> null
            }
        }

        private fun reset(): Frame? {
            fragmentId = -1; expected = 0; parts.clear(); size = 0
            return null
        }

        private fun parse(body: ByteArray): Frame? =
            runCatching { Frame.Message(json.decodeFromString<Msg>(body.decodeToString())) }.getOrNull()
    }

    private fun intBytes(value: Int) = byteArrayOf((value ushr 24).toByte(), (value ushr 16).toByte(), (value ushr 8).toByte(), value.toByte())
    private fun shortBytes(value: Int) = byteArrayOf((value ushr 8).toByte(), value.toByte())
    private fun readInt(b: ByteArray, at: Int) =
        ((b[at].toInt() and 0xFF) shl 24) or ((b[at + 1].toInt() and 0xFF) shl 16) or ((b[at + 2].toInt() and 0xFF) shl 8) or (b[at + 3].toInt() and 0xFF)
    private fun readShort(b: ByteArray, at: Int) = ((b[at].toInt() and 0xFF) shl 8) or (b[at + 1].toInt() and 0xFF)
}
