package dev.lec.effectapp.online

import org.junit.Assert.assertArrayEquals
import org.junit.Assert.assertEquals
import org.junit.Assert.assertNotEquals
import org.junit.Assert.assertNotNull
import org.junit.Assert.assertNull
import org.junit.Test
import java.security.SecureRandom

class OnlineCryptoTest {
    @Test
    fun base64UrlRoundTripsEveryLength() {
        val random = SecureRandom()
        for (size in 0..70) {
            val bytes = ByteArray(size).also(random::nextBytes)
            val text = Codec.base64Url(bytes)
            assertArrayEquals(bytes, Codec.fromBase64Url(text))
        }
        assertNull(Codec.fromBase64Url("ab+c"))
        assertNull(Codec.fromBase64Url("abc="))
        // Non-zero leftover bits are a second spelling of the same bytes.
        assertNull(Codec.fromBase64Url("AB"))
    }

    @Test
    fun inviteRoundTripsAndIsFoundInsideAMessage() {
        val invite = Invite.create("relay.example.com:8443")
        val parsed = Invite.parse("join my edit! ${invite.format()} see you")
        assertNotNull(parsed)
        assertArrayEquals(invite.secret, parsed!!.secret)
        assertEquals("relay.example.com:8443", parsed.host)
    }

    @Test
    fun inviteRejectsBadHosts() {
        val secret = Codec.base64Url(ByteArray(32) { 7 })
        assertNull(Invite.parse("lecfx1.$secret.-bad-"))
        assertNull(Invite.parse("lecfx1.$secret.host:99999"))
        assertNull(Invite.parse("lecfx1.short.host"))
        assertNotNull(Invite.parse("lecfx1.$secret.example.org"))
    }

    @Test
    fun roomIdDoesNotRevealTheRoomKey() {
        val keys = RoomKeys(ByteArray(32) { it.toByte() })
        assertEquals(32, keys.roomId.length)
        assertNotEquals(keys.roomId, Codec.hex(keys.roomKey).take(32))
    }

    @Test
    fun handshakeBoxNeedsTheKeyAndAad() {
        val key = ByteArray(32) { 1 }
        val sealed = HandshakeBox.seal(key, "a".toByteArray(), "hi".toByteArray())
        assertArrayEquals("hi".toByteArray(), HandshakeBox.open(key, "a".toByteArray(), sealed))
        assertNull(HandshakeBox.open(key, "b".toByteArray(), sealed))
        assertNull(HandshakeBox.open(ByteArray(32) { 2 }, "a".toByteArray(), sealed))
    }

    @Test
    fun ownerAndGuestDeriveTheSameKeysAndSafetyCode() {
        val roomKey = ByteArray(32) { 9 }
        val owner = SessionIdentity.create()
        val guest = SessionIdentity.create()
        val ownerKeys = PairKeys.derive(owner.agree(guest.publicBytes)!!, roomKey, owner.publicBytes, guest.publicBytes)
        val guestKeys = PairKeys.derive(guest.agree(owner.publicBytes)!!, roomKey, owner.publicBytes, guest.publicBytes)
        assertArrayEquals(ownerKeys.ownerToGuest, guestKeys.ownerToGuest)
        assertArrayEquals(ownerKeys.guestToOwner, guestKeys.guestToOwner)
        assertEquals(ownerKeys.safetyCode, guestKeys.safetyCode)
        assertEquals(14, ownerKeys.safetyCode.length)

        val ownerSide = SessionCipher(ownerKeys.ownerToGuest, ownerKeys.guestToOwner)
        val guestSide = SessionCipher(guestKeys.guestToOwner, guestKeys.ownerToGuest)
        val first = ownerSide.seal("one".toByteArray())
        val second = ownerSide.seal("two".toByteArray())
        assertArrayEquals("one".toByteArray(), guestSide.open(first))
        assertArrayEquals("two".toByteArray(), guestSide.open(second))
        // Replays and old messages are dropped.
        assertNull(guestSide.open(second))
        assertNull(guestSide.open(first))
        // A message can't be bounced back to its sender.
        assertNull(ownerSide.open(ownerSide.seal("x".toByteArray())))
    }

    @Test
    fun aMiddlemanShowsDifferentSafetyCodes() {
        val owner = SessionIdentity.create()
        val guest = SessionIdentity.create()
        val middle = SessionIdentity.create()
        assertNotEquals(
            PairKeys.safetyCode(owner.publicBytes, middle.publicBytes),
            PairKeys.safetyCode(middle.publicBytes, guest.publicBytes),
        )
    }

    @Test
    fun rejectsJunkPublicKeys() {
        val identity = SessionIdentity.create()
        assertNull(identity.agree(ByteArray(91)))
        assertNull(identity.agree(ByteArray(5)))
    }

    @Test
    fun hkdfMatchesRfc5869CaseOne() {
        val ikm = ByteArray(22) { 0x0b }
        val salt = Codec.fromHex("000102030405060708090a0b0c")!!
        val info = Codec.fromHex("f0f1f2f3f4f5f6f7f8f9")!!
        assertEquals(
            "3cb25f25faacd57a90434f64d0362f2a2d2d0a90cf1a5a4c5db02d56ecc4c5bf34007208d5b887185865",
            Codec.hex(Hkdf.derive(ikm, salt, info, 42)),
        )
    }
}
