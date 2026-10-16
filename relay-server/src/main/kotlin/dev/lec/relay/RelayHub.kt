package dev.lec.relay

import java.security.MessageDigest
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
 *
 * Reconnecting: when the owner's connection drops, the room stays open for [Limits.ownerGraceMs]
 * so the owner can come back with the resume token it was given, and guests stay connected.
 */
class RelayHub(
    private val limits: Limits = Limits(),
    private val clock: () -> Long = System::currentTimeMillis,
) {
    data class Limits(
        val maxRooms: Int = 2_000,
        val maxGuestsPerRoom: Int = 16,
        val maxFrameBytes: Int = 512 * 1024,
        val ownerGraceMs: Long = 120_000,
    )

    interface Peer {
        val id: String
        suspend fun sendBinary(bytes: ByteArray)
        suspend fun sendText(text: String)
        suspend fun close(reason: String)
    }

    sealed interface OwnerResult {
        data class Opened(val token: String, val resumed: Boolean) : OwnerResult
        data class Refused(val error: String) : OwnerResult
    }

    private class Room(var owner: Peer?, val token: String) {
        val guests = LinkedHashMap<String, Peer>()
        var ownerGoneAt = 0L
    }

    private val mutex = Mutex()
    private val rooms = HashMap<String, Room>()
    private val roomOf = HashMap<String, String>()

    suspend fun roomCount(): Int = mutex.withLock { rooms.size }

    /**
     * Opens a room, or hands it back to an owner who reconnects with [resumeToken]. A resume
     * for a room the relay no longer has (it restarted) opens it again under the same token.
     */
    suspend fun openOwner(
        roomId: String,
        peer: Peer,
        resumeToken: String? = null,
        onOpened: suspend (token: String) -> Unit = {},
    ): OwnerResult {
        if (!isRoomId(roomId)) return OwnerResult.Refused("bad-request")
        var previous: Peer? = null
        var guestsToTell: List<Peer> = emptyList()
        var guestIds: List<String> = emptyList()
        val result = mutex.withLock {
            val room = rooms[roomId]
            when {
                room == null -> {
                    if (rooms.size >= limits.maxRooms) return@withLock OwnerResult.Refused("server-full")
                    val token = resumeToken?.takeIf(::isToken) ?: newToken()
                    rooms[roomId] = Room(peer, token)
                    roomOf[peer.id] = roomId
                    OwnerResult.Opened(token, resumed = resumeToken != null)
                }
                resumeToken != null && sameToken(room.token, resumeToken) -> {
                    previous = room.owner
                    previous?.let { roomOf.remove(it.id) }
                    room.owner = peer
                    room.ownerGoneAt = 0
                    roomOf[peer.id] = roomId
                    guestsToTell = room.guests.values.toList()
                    guestIds = room.guests.keys.toList()
                    OwnerResult.Opened(room.token, resumed = true)
                }
                else -> OwnerResult.Refused("room-taken")
            }
        }
        previous?.let { runCatching { it.close("replaced") } }
        if (result is OwnerResult.Opened) onOpened(result.token)
        if (result is OwnerResult.Opened && result.resumed) {
            // Tell the returning owner who is still here, then that the list is complete.
            guestIds.forEach { peer.sendText("""{"event":"joined","id":"$it"}""") }
            peer.sendText("""{"event":"synced"}""")
            guestsToTell.forEach { it.sendText("""{"event":"owner-back"}""") }
        }
        return result
    }

    suspend fun openGuest(roomId: String, peer: Peer, onOpened: suspend () -> Unit = {}): String? {
        if (!isRoomId(roomId)) return "bad-request"
        val owner = mutex.withLock {
            val room = rooms[roomId] ?: return "no-room"
            if (room.guests.size >= limits.maxGuestsPerRoom) return "room-full"
            room.guests[peer.id] = peer
            roomOf[peer.id] = roomId
            room.owner
        }
        onOpened()
        if (owner != null) owner.sendText("""{"event":"joined","id":"${peer.id}"}""")
        else peer.sendText("""{"event":"owner-away"}""")
        return null
    }

    suspend fun fromGuest(peer: Peer, bytes: ByteArray) {
        if (bytes.isEmpty() || bytes.size > limits.maxFrameBytes) return
        // While the owner is away, guests' frames have nowhere to go; the apps catch up later.
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

    /** Call when a connection ends. When the owner leaves, the room waits for them to come back. */
    suspend fun leave(peer: Peer) {
        var notifyOwner: Peer? = null
        var notifyGuests: List<Peer> = emptyList()
        mutex.withLock {
            val roomId = roomOf.remove(peer.id) ?: return
            val room = rooms[roomId] ?: return
            if (room.owner === peer) {
                room.owner = null
                room.ownerGoneAt = clock()
                notifyGuests = room.guests.values.toList()
            } else if (room.guests.remove(peer.id) != null) {
                notifyOwner = room.owner
            }
        }
        notifyOwner?.sendText("""{"event":"left","id":"${peer.id}"}""")
        notifyGuests.forEach { runCatching { it.sendText("""{"event":"owner-away"}""") } }
    }

    /** Closes rooms whose owner didn't come back in time. Call every few seconds. */
    suspend fun expire() {
        val now = clock()
        val closing = mutex.withLock {
            val expired = rooms.filterValues { it.owner == null && now - it.ownerGoneAt >= limits.ownerGraceMs }
            expired.keys.forEach { rooms.remove(it) }
            expired.values.flatMap { room -> room.guests.values.onEach { roomOf.remove(it.id) } }
        }
        closing.forEach { guest ->
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
        fun isToken(value: String) = ROOM_ID.matches(value)

        fun newPeerId(): String = hex(ByteArray(ID_BYTES).also(random::nextBytes))
        fun newToken(): String = hex(ByteArray(16).also(random::nextBytes))

        private fun sameToken(a: String, b: String) = MessageDigest.isEqual(a.toByteArray(), b.toByteArray())

        fun hex(bytes: ByteArray): String = bytes.joinToString("") { "%02x".format(it) }

        fun idBytes(id: String): ByteArray = ByteArray(ID_BYTES) { i -> id.substring(i * 2, i * 2 + 2).toInt(16).toByte() }
    }
}
