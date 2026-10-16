package dev.lec.effectapp

import java.util.concurrent.TimeUnit
import kotlinx.coroutines.delay
import okhttp3.OkHttpClient
import okhttp3.Request
import okhttp3.Response
import okhttp3.WebSocket
import okhttp3.WebSocketListener
import okio.ByteString
import okio.ByteString.Companion.toByteString

/**
 * One WebSocket to the relay server (always wss://). The relay only passes bytes between the
 * phones in a room; everything sent through it is already end-to-end encrypted.
 */
internal class RelayClient(
    host: String,
    private val roomId: String,
    private val owner: Boolean,
    private val listener: Listener,
) {
    interface Listener {
        fun onReady(connectionId: String)
        fun onEvent(json: String)
        fun onBinary(bytes: ByteArray)
        fun onClosed(reason: String)
    }

    private val url = "wss://$host/ws"
    private var socket: WebSocket? = null
    @Volatile private var ready = false
    @Volatile private var closed = false

    fun connect() {
        val request = runCatching { Request.Builder().url(url).build() }.getOrElse {
            finish("That relay server address isn't valid.")
            return
        }
        socket = client.newWebSocket(request, object : WebSocketListener() {
            override fun onOpen(webSocket: WebSocket, response: Response) {
                webSocket.send("""{"v":1,"room":"$roomId","role":"${if (owner) "owner" else "guest"}"}""")
            }

            override fun onMessage(webSocket: WebSocket, text: String) {
                if (text.length > 4_096) return
                if (!ready) {
                    val id = READY.find(text)?.groupValues?.get(1)
                    if (id != null) {
                        ready = true
                        listener.onReady(id)
                    } else {
                        val error = ERROR.find(text)?.groupValues?.get(1) ?: "unexpected reply"
                        finish(describe(error))
                        webSocket.close(1000, null)
                    }
                    return
                }
                listener.onEvent(text)
            }

            override fun onMessage(webSocket: WebSocket, bytes: ByteString) {
                if (!ready || bytes.size > MAX_FRAME) return
                listener.onBinary(bytes.toByteArray())
            }

            override fun onClosing(webSocket: WebSocket, code: Int, reason: String) {
                webSocket.close(1000, null)
                finish(if (reason == "kicked") "You were removed from the room." else "The connection closed.")
            }

            override fun onClosed(webSocket: WebSocket, code: Int, reason: String) {
                finish("The connection closed.")
            }

            override fun onFailure(webSocket: WebSocket, t: Throwable, response: Response?) {
                finish(if (ready) "Lost the connection to the relay server." else "Couldn't reach the relay server.")
            }
        })
    }

    private fun finish(reason: String) {
        if (closed) return
        closed = true
        listener.onClosed(reason)
    }

    /** Sends one frame, waiting while a lot is already queued (big file transfers). */
    suspend fun send(bytes: ByteArray): Boolean {
        val ws = socket ?: return false
        while (!closed && ws.queueSize() > MAX_QUEUED) delay(15)
        if (closed) return false
        return ws.send(bytes.toByteString())
    }

    fun sendEvent(json: String) {
        socket?.send(json)
    }

    fun close() {
        closed = true
        socket?.close(1000, null)
        socket = null
    }

    private fun describe(error: String) = when (error) {
        "no-room" -> "That room isn't open. It may have ended, or the invite is old."
        "room-full" -> "The room is full."
        "room-taken" -> "Couldn't create the room. Try again."
        "server-full" -> "The relay server is busy. Try again later."
        else -> "The relay server refused the connection."
    }

    companion object {
        const val MAX_FRAME = 600 * 1024
        private const val MAX_QUEUED = 2L * 1024 * 1024
        private val READY = Regex("""^\{"ok":true,"id":"([0-9a-f]{16})"}$""")
        private val ERROR = Regex("""^\{"error":"([a-z-]{1,32})"}$""")

        private val client: OkHttpClient by lazy {
            OkHttpClient.Builder()
                .pingInterval(20, TimeUnit.SECONDS)
                .connectTimeout(15, TimeUnit.SECONDS)
                .readTimeout(0, TimeUnit.SECONDS)
                .build()
        }
    }
}
