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
    private var now = 0L
    private fun hub(limits: RelayHub.Limits = RelayHub.Limits()) = RelayHub(limits) { now }

    private suspend fun RelayHub.owner(peer: RelayHub.Peer, token: String? = null) =
        openOwner(room, peer, token) as RelayHub.OwnerResult.Opened

    @Test
    fun routesBetweenOwnerAndGuests() = runTest {
        val hub = hub()
        val owner = FakePeer()
        val alice = FakePeer()
        val bob = FakePeer()
        hub.owner(owner)
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
        val hub = hub()
        val owner = FakePeer()
        val alice = FakePeer()
        val bob = FakePeer()
        hub.owner(owner)
        hub.openGuest(room, alice)
        hub.openGuest(room, bob)
        hub.fromOwner(alice, RelayHub.idBytes(bob.id) + byteArrayOf(1))
        hub.kick(alice, bob.id)
        assertTrue(bob.binary.isEmpty())
        assertNull(bob.closed)
        // Taking over the room needs the owner's token, not just the room id.
        val intruder = FakePeer()
        assertEquals(RelayHub.OwnerResult.Refused("room-taken"), hub.openOwner(room, intruder))
        assertEquals(RelayHub.OwnerResult.Refused("room-taken"), hub.openOwner(room, intruder, "f".repeat(32)))
    }

    @Test
    fun rejectsMissingAndFullRooms() = runTest {
        val hub = hub(RelayHub.Limits(maxGuestsPerRoom = 1))
        assertEquals("no-room", hub.openGuest(room, FakePeer()))
        assertEquals(RelayHub.OwnerResult.Refused("bad-request"), hub.openOwner("nope", FakePeer()))
        hub.owner(FakePeer())
        assertNull(hub.openGuest(room, FakePeer()))
        assertEquals("room-full", hub.openGuest(room, FakePeer()))
    }

    @Test
    fun ownerCanComeBackWithTheirToken() = runTest {
        val hub = hub()
        val owner = FakePeer()
        val alice = FakePeer()
        val token = hub.owner(owner).token
        hub.openGuest(room, alice)
        hub.leave(owner)
        assertTrue(alice.text.last().contains("owner-away"))
        assertNull(alice.closed)
        // Frames sent while the owner is away go nowhere.
        hub.fromGuest(alice, byteArrayOf(1))

        now += 30_000
        hub.expire()
        val back = FakePeer()
        val opened = hub.owner(back, token)
        assertTrue(opened.resumed)
        assertTrue(back.text.any { it.contains(alice.id) && it.contains("joined") })
        assertTrue(back.text.last().contains("synced"))
        assertTrue(alice.text.last().contains("owner-back"))
        hub.fromGuest(alice, byteArrayOf(2))
        assertArrayEquals(RelayHub.idBytes(alice.id) + byteArrayOf(2), back.binary.single())
    }

    @Test
    fun roomClosesWhenTheOwnerDoesntComeBack() = runTest {
        val hub = hub()
        val owner = FakePeer()
        val alice = FakePeer()
        val token = hub.owner(owner).token
        hub.openGuest(room, alice)
        hub.leave(owner)
        now += 120_000
        hub.expire()
        assertEquals("room closed", alice.closed)
        assertEquals(0, hub.roomCount())
        assertEquals("no-room", hub.openGuest(room, FakePeer()))
        // After a relay restart (or expiry) the owner can open it again under the same token.
        assertEquals(token, hub.owner(FakePeer(), token).token)
    }

    @Test
    fun guestLeavingTellsTheOwner() = runTest {
        val hub = hub()
        val owner = FakePeer()
        val alice = FakePeer()
        hub.owner(owner)
        hub.openGuest(room, alice)
        hub.leave(alice)
        assertTrue(owner.text.last().contains("left"))
        hub.fromGuest(alice, byteArrayOf(1))
        assertTrue(owner.binary.isEmpty())
    }

    @Test
    fun understandsExactlyWhatTheAppSends() {
        // Same text the app's RelayClient sends and expects; keep these in step with it.
        assertTrue(HELLO.matchEntire("""{"v":2,"room":"$room","role":"owner"}""") != null)
        assertTrue(HELLO.matchEntire("""{"v":2,"room":"$room","role":"guest"}""") != null)
        val resume = HELLO.matchEntire("""{"v":2,"room":"$room","role":"owner","resume":"${"a".repeat(32)}"}""")
        assertEquals("a".repeat(32), resume!!.groupValues[3])
        assertTrue(HELLO.matchEntire("""{"v":2,"room":"$room","role":"owner"\}""") == null)
        assertTrue(KICK.matchEntire("""{"kick":"0123456789abcdef"}""") != null)
        val ready = Regex("""^\{"ok":true,"id":"([0-9a-f]{16})"(?:,"token":"([0-9a-f]{32})")?\}$""")
        assertTrue(ready.matches("""{"ok":true,"id":"${RelayHub.newPeerId()}"}"""))
        assertTrue(ready.matches("""{"ok":true,"id":"${RelayHub.newPeerId()}","token":"${RelayHub.newToken()}"}"""))
    }
}
