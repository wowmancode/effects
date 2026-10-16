package dev.lec.effectapp.online

import java.security.KeyFactory
import java.security.KeyPair
import java.security.KeyPairGenerator
import java.security.MessageDigest
import java.security.PublicKey
import java.security.SecureRandom
import java.security.interfaces.ECPublicKey
import java.security.spec.ECGenParameterSpec
import java.security.spec.X509EncodedKeySpec
import javax.crypto.Cipher
import javax.crypto.KeyAgreement
import javax.crypto.Mac
import javax.crypto.spec.GCMParameterSpec
import javax.crypto.spec.SecretKeySpec

/**
 * A room invite: 32 random bytes plus the relay server both phones connect through.
 * Text form: `lecfx1.<43 base64url chars>.<host[:port]>`. The secret never leaves the phones;
 * the server only ever sees a room id derived from it.
 */
class Invite(secret: ByteArray, val host: String) {
    private val secretBytes = secret.copyOf()
    val secret: ByteArray get() = secretBytes.copyOf()

    init {
        require(secretBytes.size == SECRET_BYTES) { "Invite secrets are $SECRET_BYTES bytes." }
        require(isValidHost(host)) { "Invalid relay server." }
    }

    fun format(): String = "$PREFIX${Codec.base64Url(secretBytes)}.$host"

    companion object {
        const val SECRET_BYTES = 32
        private const val PREFIX = "lecfx1."
        private val PATTERN = Regex("lecfx1\\.([A-Za-z0-9_-]{43})\\.([A-Za-z0-9.-]{1,253}(?::[0-9]{1,5})?)")
        private val HOST = Regex("[A-Za-z0-9]([A-Za-z0-9-]{0,62})(\\.[A-Za-z0-9]([A-Za-z0-9-]{0,62}))*(:[0-9]{1,5})?")

        fun create(host: String, random: SecureRandom = SecureRandom()): Invite =
            Invite(ByteArray(SECRET_BYTES).also(random::nextBytes), host)

        /** Finds an invite anywhere in pasted text (chat apps often add words around it). */
        fun parse(text: String): Invite? {
            val match = PATTERN.find(text) ?: return null
            val secret = Codec.fromBase64Url(match.groupValues[1]) ?: return null
            if (secret.size != SECRET_BYTES) return null
            val host = match.groupValues[2].trimEnd('.')
            if (!isValidHost(host)) return null
            return Invite(secret, host)
        }

        fun isValidHost(host: String): Boolean {
            if (host.length > 253 || !HOST.matches(host)) return false
            val port = host.substringAfter(':', "").takeIf { it.isNotEmpty() }?.toIntOrNull()
            return !host.contains(':') || (port != null && port in 1..65535)
        }
    }
}

/** Keys every member derives from the invite secret. */
class RoomKeys(secret: ByteArray) {
    /** Sent to the relay server so it can pair connections; reveals nothing about the secret. */
    val roomId: String = Codec.hex(Hkdf.derive(secret, ByteArray(0), "lecfx room id".toByteArray(), 16))

    /** Encrypts the join handshake, proving the joiner was given the invite. */
    val roomKey: ByteArray = Hkdf.derive(secret, ByteArray(0), "lecfx room key".toByteArray(), 32)
}

object Hkdf {
    fun extract(salt: ByteArray, ikm: ByteArray): ByteArray = hmac(if (salt.isEmpty()) ByteArray(32) else salt, ikm)

    fun expand(prk: ByteArray, info: ByteArray, length: Int): ByteArray {
        require(length in 1..255 * 32)
        val out = ByteArray(length)
        var previous = ByteArray(0)
        var offset = 0
        var counter = 1
        while (offset < length) {
            previous = hmac(prk, previous + info + byteArrayOf(counter.toByte()))
            val n = minOf(previous.size, length - offset)
            previous.copyInto(out, offset, 0, n)
            offset += n
            counter++
        }
        return out
    }

    fun derive(ikm: ByteArray, salt: ByteArray, info: ByteArray, length: Int): ByteArray =
        expand(extract(salt, ikm), info, length)

    fun hmac(key: ByteArray, data: ByteArray): ByteArray =
        Mac.getInstance("HmacSHA256").run {
            init(SecretKeySpec(key, "HmacSHA256"))
            doFinal(data)
        }
}

/** AES-256-GCM with a random nonce, for the few join handshake messages. */
object HandshakeBox {
    private const val NONCE = 12
    private val random = SecureRandom()

    fun seal(key: ByteArray, aad: ByteArray, plaintext: ByteArray): ByteArray {
        val nonce = ByteArray(NONCE).also(random::nextBytes)
        val cipher = Cipher.getInstance("AES/GCM/NoPadding")
        cipher.init(Cipher.ENCRYPT_MODE, SecretKeySpec(key, "AES"), GCMParameterSpec(128, nonce))
        cipher.updateAAD(aad)
        return nonce + cipher.doFinal(plaintext)
    }

    fun open(key: ByteArray, aad: ByteArray, sealed: ByteArray): ByteArray? {
        if (sealed.size < NONCE + 16) return null
        return runCatching {
            val cipher = Cipher.getInstance("AES/GCM/NoPadding")
            cipher.init(Cipher.DECRYPT_MODE, SecretKeySpec(key, "AES"), GCMParameterSpec(128, sealed, 0, NONCE))
            cipher.updateAAD(aad)
            cipher.doFinal(sealed, NONCE, sealed.size - NONCE)
        }.getOrNull()
    }
}

/** A fresh P-256 key for one session. Nothing is stored, so sessions can't be linked. */
class SessionIdentity private constructor(private val keyPair: KeyPair) {
    val publicBytes: ByteArray = keyPair.public.encoded

    fun agree(peerPublic: ByteArray): ByteArray? = runCatching {
        val peer = decodePublic(peerPublic) ?: return null
        KeyAgreement.getInstance("ECDH").run {
            init(keyPair.private)
            doPhase(peer, true)
            generateSecret()
        }
    }.getOrNull()

    companion object {
        fun create(): SessionIdentity {
            val generator = KeyPairGenerator.getInstance("EC")
            generator.initialize(ECGenParameterSpec("secp256r1"))
            return SessionIdentity(generator.generateKeyPair())
        }

        /** Accepts only an uncompressed P-256 public key in X.509 form. */
        fun decodePublic(bytes: ByteArray): PublicKey? = runCatching {
            if (bytes.size !in 80..100) return null
            val key = KeyFactory.getInstance("EC").generatePublic(X509EncodedKeySpec(bytes)) as? ECPublicKey ?: return null
            if (key.params.curve.field.fieldSize != 256) return null
            key
        }.getOrNull()
    }
}

/** Keys and safety code for one owner-guest pair. */
class PairKeys(
    val ownerToGuest: ByteArray,
    val guestToOwner: ByteArray,
    /** Lets a guest prove, after reconnecting, that it's the same member (see [resumeProof]). */
    val resumeKey: ByteArray,
    /** 12 digits both phones show; equal codes mean nobody is sitting in the middle. */
    val safetyCode: String,
) {
    companion object {
        fun derive(shared: ByteArray, roomKey: ByteArray, ownerPublic: ByteArray, guestPublic: ByteArray): PairKeys {
            val info = "lecfx session v1".toByteArray() + ownerPublic + guestPublic
            val okm = Hkdf.derive(shared, roomKey, info, 96)
            return PairKeys(
                okm.copyOfRange(0, 32),
                okm.copyOfRange(32, 64),
                okm.copyOfRange(64, 96),
                safetyCode(ownerPublic, guestPublic),
            )
        }

        /**
         * Proof for a reconnecting guest, bound to the new relay connection id so a recorded
         * proof is useless on any other connection.
         */
        fun resumeProof(resumeKey: ByteArray, roomId: String, connectionId: String, memberId: String): ByteArray =
            Hkdf.hmac(resumeKey, "lecfx resume v1|$roomId|$connectionId|$memberId".toByteArray())

        fun safetyCode(ownerPublic: ByteArray, guestPublic: ByteArray): String {
            val digest = MessageDigest.getInstance("SHA-256")
                .digest("lecfx safety v1".toByteArray() + ownerPublic + guestPublic)
            var value = 0L
            for (i in 0 until 6) value = (value shl 8) or (digest[i].toLong() and 0xFF)
            val digits = (value % 1_000_000_000_000L).toString().padStart(12, '0')
            return digits.chunked(4).joinToString(" ")
        }
    }
}

/**
 * AES-256-GCM in one direction with a counter nonce. Each direction has its own key, so a
 * counter never repeats under a key, and a message whose counter isn't newer is dropped
 * (no replays or reordering).
 */
class SessionCipher(private val sendKey: ByteArray, private val receiveKey: ByteArray) {
    private var sendCounter = 0L
    private var receiveCounter = 0L

    @Synchronized
    fun seal(plaintext: ByteArray): ByteArray {
        sendCounter++
        check(sendCounter > 0)
        val counter = longBytes(sendCounter)
        val cipher = Cipher.getInstance("AES/GCM/NoPadding")
        cipher.init(Cipher.ENCRYPT_MODE, SecretKeySpec(sendKey, "AES"), GCMParameterSpec(128, nonce(counter)))
        cipher.updateAAD(AAD)
        return counter + cipher.doFinal(plaintext)
    }

    @Synchronized
    fun open(sealed: ByteArray): ByteArray? {
        if (sealed.size < 8 + 16) return null
        val counter = (0 until 8).fold(0L) { acc, i -> (acc shl 8) or (sealed[i].toLong() and 0xFF) }
        if (counter <= receiveCounter) return null
        val plain = runCatching {
            val cipher = Cipher.getInstance("AES/GCM/NoPadding")
            cipher.init(Cipher.DECRYPT_MODE, SecretKeySpec(receiveKey, "AES"), GCMParameterSpec(128, nonce(sealed.copyOfRange(0, 8))))
            cipher.updateAAD(AAD)
            cipher.doFinal(sealed, 8, sealed.size - 8)
        }.getOrNull() ?: return null
        receiveCounter = counter
        return plain
    }

    private fun nonce(counter: ByteArray) = ByteArray(4) + counter

    private fun longBytes(value: Long) = ByteArray(8) { i -> (value ushr (56 - 8 * i)).toByte() }

    private companion object {
        val AAD = "lecfx msg v1".toByteArray()
    }
}

/** SHA-256 of a stream, as lowercase hex. */
fun sha256Hex(input: java.io.InputStream, maxBytes: Long = Long.MAX_VALUE): String? {
    val digest = MessageDigest.getInstance("SHA-256")
    val buffer = ByteArray(1 shl 16)
    var total = 0L
    while (true) {
        val n = input.read(buffer)
        if (n < 0) break
        total += n
        if (total > maxBytes) return null
        digest.update(buffer, 0, n)
    }
    return Codec.hex(digest.digest())
}
