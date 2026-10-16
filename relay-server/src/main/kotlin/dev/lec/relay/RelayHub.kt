package dev.lec.relay

import java.security.SecureRandom
import kotlinx.coroutines.sync.Mutex
import kotlinx.coroutines.sync.withLock

/**
 * Pairs phones in a room and passes their bytes along. Everything it carries is end-to-end
 * encrypted by the app, so the hub can't read edits, chat or media; it only sees a room id
 * (derived from the invite, which it never sees), connection ids and message sizes.
 *
 * Routing: a guest's frame goes to the owner with the guest's 8-byte id in front; the
 * owner's frame starts with the 8-byte id of the guest it's for, which is stripped.
 */
class RelayHub(private val limits: Limits = Limits()) {
    data class Limits(
        val maxRooms: Int = 2_000,
        val maxGuestsPerRoom: Int = 16,
        val maxFrameBytes: Int = 512 * 1024,
    )

    interface Peer {
        val id: String
        suspend fun sendBinary(bytes: ByteArray)
        suspend fun sendText(text: String)
        suspend fun close(reason: String)
    }

    private class Room(val owner: Peer) {
        val guests = LinkedHashMap<String, Peer>()
    }

    private val mutex = Mutex()
    private val rooms = HashMap<String, Room>()
    private val roomOf = HashMap<String, String>()

    suspend fun roomCount(): Int = mutex.withLock { rooms.size }

    /** Null when [peer] now owns [roomId], otherwise an error code to send back. */
    suspend fun openOwner(roomId: String, peer: Peer): String? = mutex.withLock {
        when {
            !isRoomId(roomId) -> "bad-request"
            roomId in rooms -> "room-taken"
            rooms.size >= limits.maxRooms -> "server-full"
            else -> {
                rooms[roomId] = Room(peer)
                roomOf[peer.id] = roomId
                null
            }
        }
    }

    suspend fun openGuest(roomId: String, peer: Peer): String? {
        val owner = mutex.withLock {
            val room = rooms[roomId] ?: return@withLock null
            if (room.guests.size >= limits.maxGuestsPerRoom) return "room-full"
            room.guests[peer.id] = peer
            roomOf[peer.id] = roomId
            room.owner
        } ?: return if (isRoomId(roomId)) "no-room" else "bad-request"
        owner.sendText("""{"event":"joined","id":"${peer.id}"}""")
        return null
    }

    suspend fun fromGuest(peer: Peer, bytes: ByteArray) {
        if (bytes.isEmpty() || bytes.size > limits.maxFrameBytes) return
        val owner = mutex.withLock { roomOf[peer.id]?.let { rooms[it] }?.takeIf { peer.id in it.guests }?.owner } ?: return
        owner.sendBinary(idBytes(peer.id) + bytes)
    }

    suspend fun fromOwner(peer: Peer, bytes: ByteArray) {
        if (bytes.size <= ID_BYTES || bytes.size > limits.maxFrameBytes + ID_BYTES) return
        val target = hex(bytes.copyOfRange(0, ID_BYTES))
        val guest = mutex.withLock {
            roomOf[peer.id]?.let { rooms[it] }?.takeIf { it.owner === peer }?.guests?.get(target)
        } ?: return
        guest.sendBinary(bytes.copyOfRange(ID_BYTES, bytes.size))
    }

    /** The owner asks for a guest's connection to be closed. */
    suspend fun kick(owner: Peer, guestId: String) {
        val guest = mutex.withLock {
            roomOf[owner.id]?.let { rooms[it] }?.takeIf { it.owner === owner }?.guests?.get(guestId)
        } ?: return
        guest.close("kicked")
    }

    /** Call when a connection ends. An owner leaving closes the room for everyone. */
    suspend fun leave(peer: Peer) {
        var notifyOwner: Peer? = null
        var closeGuests: List<Peer> = emptyList()
        mutex.withLock {
            val roomId = roomOf.remove(peer.id) ?: return
            val room = rooms[roomId] ?: return
            if (room.owner === peer) {
                rooms.remove(roomId)
                closeGuests = room.guests.values.toList()
                closeGuests.forEach { roomOf.remove(it.id) }
            } else if (room.guests.remove(peer.id) != null) {
                notifyOwner = room.owner
            }
        }
        notifyOwner?.sendText("""{"event":"left","id":"${peer.id}"}""")
        closeGuests.forEach { guest ->
            runCatching { guest.sendText("""{"event":"closed"}""") }
            runCatching { guest.close("room closed") }
        }
    }

    companion object {
        const val ID_BYTES = 8
        private val random = SecureRandom()
        private val ROOM_ID = Regex("[0-9a-f]{32}")
        private val PEER_ID = Regex("[0-9a-f]{16}")

        fun isRoomId(value: String) = ROOM_ID.matches(value)
        fun isPeerId(value: String) = PEER_ID.matches(value)

        fun newPeerId(): String = hex(ByteArray(ID_BYTES).also(random::nextBytes))

        fun hex(bytes: ByteArray): String = bytes.joinToString("") { "%02x".format(it) }

        fun idBytes(id: String): ByteArray = ByteArray(ID_BYTES) { i -> id.substring(i * 2, i * 2 + 2).toInt(16).toByte() }
    }
}
