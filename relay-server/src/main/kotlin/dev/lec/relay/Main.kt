package dev.lec.relay

import io.ktor.server.application.install
import io.ktor.server.engine.embeddedServer
import io.ktor.server.netty.Netty
import io.ktor.server.response.respondText
import io.ktor.server.routing.get
import io.ktor.server.routing.routing
import io.ktor.server.websocket.WebSockets
import io.ktor.server.websocket.webSocket
import io.ktor.websocket.CloseReason
import io.ktor.websocket.DefaultWebSocketSession
import io.ktor.websocket.Frame
import io.ktor.websocket.close
import io.ktor.websocket.readBytes
import io.ktor.websocket.readText
import kotlin.time.Duration.Companion.seconds
import kotlinx.coroutines.TimeoutCancellationException
import kotlinx.coroutines.channels.ClosedReceiveChannelException
import kotlinx.coroutines.withTimeout
import org.slf4j.LoggerFactory

private val log = LoggerFactory.getLogger("relay")
private val HELLO = Regex("""\{"v":1,"room":"([0-9a-f]{32})","role":"(owner|guest)"}""")
private val KICK = Regex("""\{"kick":"([0-9a-f]{16})"}""")

fun main() {
    val port = System.getenv("PORT")?.toIntOrNull() ?: 8080
    val hub = RelayHub()
    embeddedServer(Netty, port = port, host = "0.0.0.0") {
        install(WebSockets) {
            pingPeriod = 20.seconds
            timeout = 60.seconds
            maxFrameSize = 600L * 1024
            masking = false
        }
        routing {
            get("/") { call.respondText("effect-app relay\n") }
            webSocket("/ws") { serve(hub, this) }
        }
    }.start(wait = true)
}

private class SessionPeer(override val id: String, private val session: DefaultWebSocketSession) : RelayHub.Peer {
    override suspend fun sendBinary(bytes: ByteArray) {
        // A guest too slow to keep up for this long is dropped rather than stalling the room.
        runCatching { withTimeout(30_000) { session.outgoing.send(Frame.Binary(true, bytes)) } }
            .onFailure { if (it is TimeoutCancellationException) close("too slow") }
    }

    override suspend fun sendText(text: String) {
        runCatching { withTimeout(30_000) { session.outgoing.send(Frame.Text(text)) } }
    }

    override suspend fun close(reason: String) {
        runCatching { session.close(CloseReason(CloseReason.Codes.NORMAL, reason)) }
    }
}

private suspend fun serve(hub: RelayHub, session: DefaultWebSocketSession) {
    val peer = SessionPeer(RelayHub.newPeerId(), session)
    try {
        val hello = try {
            withTimeout(10_000) { session.incoming.receive() } as? Frame.Text
        } catch (_: TimeoutCancellationException) {
            null
        } catch (_: ClosedReceiveChannelException) {
            return
        }
        val match = hello?.readText()?.let(HELLO::matchEntire)
        if (match == null) {
            peer.sendText("""{"error":"bad-request"}""")
            peer.close("bad request")
            return
        }
        val (roomId, role) = match.destructured
        val owner = role == "owner"
        val error = if (owner) hub.openOwner(roomId, peer) else hub.openGuest(roomId, peer)
        if (error != null) {
            peer.sendText("""{"error":"$error"}""")
            peer.close(error)
            return
        }
        peer.sendText("""{"ok":true,"id":"${peer.id}"}""")
        log.info("{} connected ({} rooms)", if (owner) "owner" else "guest", hub.roomCount())
        val limiter = ByteBudget(bytesPerSecond = 16L * 1024 * 1024, burstBytes = 32L * 1024 * 1024)
        for (frame in session.incoming) {
            when (frame) {
                is Frame.Binary -> {
                    val bytes = frame.readBytes()
                    // Slows a connection down (rather than dropping it) when it sends too fast.
                    limiter.take(bytes.size.toLong())
                    if (owner) hub.fromOwner(peer, bytes) else hub.fromGuest(peer, bytes)
                }
                is Frame.Text -> if (owner) {
                    KICK.matchEntire(frame.readText())?.let { hub.kick(peer, it.groupValues[1]) }
                }
                else -> Unit
            }
        }
    } finally {
        hub.leave(peer)
    }
}

/** Allows short bursts but caps the average rate of one connection by waiting. */
private class ByteBudget(private val bytesPerSecond: Long, private val burstBytes: Long) {
    private var available = burstBytes.toDouble()
    private var last = System.nanoTime()

    suspend fun take(bytes: Long) {
        while (true) {
            val now = System.nanoTime()
            available = minOf(burstBytes.toDouble(), available + (now - last) / 1e9 * bytesPerSecond)
            last = now
            if (available >= bytes) {
                available -= bytes
                return
            }
            val waitMs = ((bytes - available) / bytesPerSecond * 1000).toLong().coerceIn(1, 1_000)
            kotlinx.coroutines.delay(waitMs)
        }
    }
}
