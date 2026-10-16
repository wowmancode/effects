package dev.lec.relay

import kotlinx.coroutines.test.runTest
import org.junit.Assert.assertArrayEquals
import org.junit.Assert.assertEquals
import org.junit.Assert.assertNull
import org.junit.Assert.assertTrue
import org.junit.Test

class RelayHubTest {
    private class FakePeer(override val id: String = RelayHub.newPeerId()) : RelayHub.Peer {
        val binary = mutableListOf<ByteArray>()
        val text = mutableListOf<String>()
        var closed: String? = null
        override suspend fun sendBinary(bytes: ByteArray) { binary += bytes }
        override suspend fun sendText(text: String) { this.text += text }
        override suspend fun close(reason: String) { closed = reason }
    }

    private val room = "0123456789abcdef0123456789abcdef"

    @Test
    fun routesBetweenOwnerAndGuests() = runTest {
        val hub = RelayHub()
        val owner = FakePeer()
        val alice = FakePeer()
        val bob = FakePeer()
        assertNull(hub.openOwner(room, owner))
        assertNull(hub.openGuest(room, alice))
        assertNull(hub.openGuest(room, bob))
        assertEquals(2, owner.text.count { it.contains("joined") })

        hub.fromGuest(alice, byteArrayOf(1, 2, 3))
        assertArrayEquals(RelayHub.idBytes(alice.id) + byteArrayOf(1, 2, 3), owner.binary.single())

        hub.fromOwner(owner, RelayHub.idBytes(bob.id) + byteArrayOf(9))
        assertArrayEquals(byteArrayOf(9), bob.binary.single())
        assertTrue(alice.binary.isEmpty())
    }

    @Test
    fun guestsCannotPretendToBeTheOwner() = runTest {
        val hub = RelayHub()
        val owner = FakePeer()
        val alice = FakePeer()
        val bob = FakePeer()
        hub.openOwner(room, owner)
        hub.openGuest(room, alice)
        hub.openGuest(room, bob)
        hub.fromOwner(alice, RelayHub.idBytes(bob.id) + byteArrayOf(1))
        hub.kick(alice, bob.id)
        assertTrue(bob.binary.isEmpty())
        assertNull(bob.closed)
    }

    @Test
    fun rejectsTakenMissingAndFullRooms() = runTest {
        val hub = RelayHub(RelayHub.Limits(maxGuestsPerRoom = 1))
        assertEquals("no-room", hub.openGuest(room, FakePeer()))
        assertEquals("bad-request", hub.openOwner("nope", FakePeer()))
        hub.openOwner(room, FakePeer())
        assertEquals("room-taken", hub.openOwner(room, FakePeer()))
        assertNull(hub.openGuest(room, FakePeer()))
        assertEquals("room-full", hub.openGuest(room, FakePeer()))
    }

    @Test
    fun ownerLeavingClosesTheRoom() = runTest {
        val hub = RelayHub()
        val owner = FakePeer()
        val alice = FakePeer()
        hub.openOwner(room, owner)
        hub.openGuest(room, alice)
        hub.leave(owner)
        assertEquals("room closed", alice.closed)
        assertEquals(0, hub.roomCount())
        assertEquals("no-room", hub.openGuest(room, FakePeer()))
    }

    @Test
    fun guestLeavingTellsTheOwner() = runTest {
        val hub = RelayHub()
        val owner = FakePeer()
        val alice = FakePeer()
        hub.openOwner(room, owner)
        hub.openGuest(room, alice)
        hub.leave(alice)
        assertTrue(owner.text.last().contains("left"))
        hub.fromGuest(alice, byteArrayOf(1))
        assertTrue(owner.binary.isEmpty())
    }
}
