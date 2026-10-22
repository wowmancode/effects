package dev.lec.effectapp.effects

import android.content.ComponentName
import android.content.Context
import android.content.Intent
import android.content.ServiceConnection
import android.os.IBinder
import android.os.Parcel
import android.os.ParcelFileDescriptor
import android.os.Process
import dev.lec.effectapp.model.EditProject
import dev.lec.effectapp.model.NativePluginPolicy
import java.io.File
import java.io.RandomAccessFile
import java.nio.ByteBuffer
import java.nio.ByteOrder
import java.nio.channels.FileChannel
import java.util.concurrent.Callable
import java.util.concurrent.CompletableFuture
import java.util.concurrent.Executors
import java.util.concurrent.TimeUnit
import kotlinx.coroutines.flow.MutableStateFlow
import kotlinx.coroutines.flow.asStateFlow

/** Local approvals are never stored in plug-in, preset, project, or online messages. */
object NativeCClient {
    @Volatile private var context: Context? = null
    @Volatile var onlineBlocked: Boolean = false
        private set
    private val lock = Any()
    private val executor = Executors.newCachedThreadPool { task -> Thread(task, "native-c-rpc").apply { isDaemon = true } }
    private class Binding(val future: CompletableFuture<IBinder>, val connection: ServiceConnection, var pid: Int = 0)
    private var binding: Binding? = null
    private val _approvalRevision = MutableStateFlow(0)
    val approvalRevision = _approvalRevision.asStateFlow()

    fun initialize(value: Context) { context = value.applicationContext }

    fun approved(source: String, audio: Boolean): Boolean = context?.getSharedPreferences("native-c-approvals", Context.MODE_PRIVATE)
        ?.getBoolean(NativePluginPolicy.approvalKey(source, audio), false) == true

    fun canRun(source: String, audio: Boolean): Boolean = !onlineBlocked && approved(source, audio)

    /** Called synchronously before any online room connection is started. */
    fun setOnlineMode(active: Boolean) {
        synchronized(lock) { onlineBlocked = active }
        if (active) disconnect()
    }

    fun projectError(project: EditProject): String? = NativePluginPolicy.segments(project).firstNotNullOfOrNull { segment ->
        when {
            onlineBlocked -> "Native C plug-ins are offline-only. Leave the online room before exporting them."
            !segment.enabled -> null
            !approved(segment.stringParams["source"].orEmpty(), segment.effectId == "plugin_audio") ->
                "A native C plug-in needs local approval. Open its source, review the warning, then compile and apply it."
            else -> null
        }
    }

    /**
     * Stops the worker so the next plug-in call starts a fresh one. Long exports call this between
     * passes, so memory a plug-in (or the compiler) never gives back can't pile up until Android
     * kills the worker partway through.
     */
    fun restartWorker() = disconnect()

    /** The caller must obtain explicit user approval before calling this method. */
    fun compileAndApprove(source: String, audio: Boolean) {
        check(!onlineBlocked) { "Native C plug-ins are offline-only." }
        NativePluginPolicy.validateSource(source, audio)?.let { error(it) }
        val remote = remote()
        request(remote, NativeCWire.COMPILE, 30_000, { writeString(source); writeInt(if (audio) 1 else 0) }) { }
        check(!onlineBlocked) { "Native C plug-ins are offline-only." }
        requireNotNull(context).getSharedPreferences("native-c-approvals", Context.MODE_PRIVATE).edit()
            .putBoolean(NativePluginPolicy.approvalKey(source, audio), true).apply()
        _approvalRevision.value++
    }

    fun open(source: String, audio: Boolean, capacity: Int): Session {
        check(canRun(source, audio)) { "Native C requires local approval and is unavailable in online rooms." }
        require(capacity in 4..NativeCWire.MAX_BUFFER_BYTES) { "This frame is too large for a native C plug-in." }
        val remote = remote()
        val file = File.createTempFile("native-c-", ".buffer", requireNotNull(context).cacheDir)
        try {
            val memory = RandomAccessFile(file, "rw").use { output ->
                output.setLength(capacity.toLong())
                output.channel.map(FileChannel.MapMode.READ_WRITE, 0, capacity.toLong()).order(ByteOrder.nativeOrder())
            }
            val id = ParcelFileDescriptor.open(file, ParcelFileDescriptor.MODE_READ_WRITE).use { descriptor ->
                request(remote, NativeCWire.OPEN, 30_000, {
                    writeString(source); writeInt(if (audio) 1 else 0); writeInt(capacity); writeParcelable(descriptor, 0)
                }) { readInt() }
            }
            return Session(remote, id, file, memory)
        } catch (error: Throwable) { file.delete(); throw error }
    }

    class Session internal constructor(private val remote: IBinder, private val id: Int, private val file: File, val buffer: ByteBuffer) : AutoCloseable {
        private var closed = false
        val isAlive: Boolean get() = !closed && remote.isBinderAlive
        fun process(first: Int, second: Int, rate: Int, time: Double, controls: FloatArray) {
            check(!closed) { "Native C instance is closed." }
            request(remote, NativeCWire.PROCESS, 5_000, {
                writeInt(id); writeInt(first); writeInt(second); writeInt(rate); writeDouble(time); writeFloatArray(controls)
            }) { }
            buffer.position(0)
        }
        override fun close() {
            if (closed) return
            closed = true
            if (!onlineBlocked && remote.isBinderAlive) runCatching { request(remote, NativeCWire.CLOSE, 2_000, { writeInt(id) }) { } }
            file.delete()
        }
    }

    private fun remote(): IBinder {
        val future = synchronized(lock) {
            check(!onlineBlocked) { "Native C plug-ins are offline-only." }
            binding?.takeIf { !it.future.isCompletedExceptionally && (it.future.getNow(null)?.isBinderAlive != false) }?.future
                ?: connect()
        }
        return try { future.get(15, TimeUnit.SECONDS) } catch (error: Exception) {
            disconnect()
            throw IllegalStateException("Could not start the native C worker: ${error.cause?.message ?: error.message}", error)
        }
    }

    private fun connect(): CompletableFuture<IBinder> {
        val app = requireNotNull(context) { "Native C has not been initialized." }
        binding?.let { old ->
            if (old.pid > 0 && old.pid != Process.myPid()) Process.killProcess(old.pid)
            runCatching { app.unbindService(old.connection) }
            old.future.cancel(false)
        }
        val future = CompletableFuture<IBinder>()
        lateinit var value: Binding
        val connection = object : ServiceConnection {
            override fun onServiceConnected(name: ComponentName, service: IBinder) {
                val data = Parcel.obtain(); val reply = Parcel.obtain()
                try {
                    data.writeInterfaceToken(NativeCWire.TOKEN)
                    check(service.transact(NativeCWire.HELLO, data, reply, 0))
                    reply.readException()
                    val pid = reply.readInt()
                    synchronized(lock) {
                        value.pid = pid
                        if (onlineBlocked || binding !== value) {
                            if (pid != Process.myPid()) Process.killProcess(pid)
                            future.completeExceptionally(IllegalStateException("Native C is unavailable during online mode."))
                        } else future.complete(service)
                    }
                } catch (error: Exception) { future.completeExceptionally(error) }
                finally { data.recycle(); reply.recycle() }
            }
            override fun onServiceDisconnected(name: ComponentName) {
                future.completeExceptionally(IllegalStateException("The native C worker stopped. Check the plug-in code."))
            }
        }
        value = Binding(future, connection)
        binding = value
        if (!app.bindService(Intent(app, NativeCService::class.java), connection, Context.BIND_AUTO_CREATE)) {
            future.completeExceptionally(IllegalStateException("Native C worker is unavailable."))
        }
        return future
    }

    private fun disconnect(expected: IBinder? = null) {
        val old = synchronized(lock) {
            if (expected != null && runCatching { binding?.future?.getNow(null) }.getOrNull() !== expected) return
            val current = binding
            binding = null
            current?.future?.cancel(false)
            current
        } ?: return
        // Do not run user cleanup callbacks while entering an online room: stop the entire worker.
        if (old.pid > 0 && old.pid != Process.myPid()) Process.killProcess(old.pid)
        context?.let { app -> runCatching { app.unbindService(old.connection) } }
    }

    private fun <T> request(remote: IBinder, code: Int, timeoutMs: Long, write: Parcel.() -> Unit, read: Parcel.() -> T): T {
        check(!onlineBlocked) { "Native C plug-ins are offline-only." }
        val task = executor.submit(Callable {
            check(!onlineBlocked) { "Native C plug-ins are offline-only." }
            val data = Parcel.obtain(); val reply = Parcel.obtain()
            try {
                data.writeInterfaceToken(NativeCWire.TOKEN); data.write()
                check(remote.transact(code, data, reply, 0)) { "Native C worker rejected the request." }
                reply.readException(); reply.read()
            } finally { data.recycle(); reply.recycle() }
        })
        return try { task.get(timeoutMs, TimeUnit.MILLISECONDS) } catch (error: Exception) {
            task.cancel(true)
            disconnect(remote)
            val cause = (error as? java.util.concurrent.ExecutionException)?.cause ?: error
            val message = when {
                cause is android.os.DeadObjectException ->
                    "The native C worker crashed or was stopped by Android: the plug-in code crashed, it ran out of memory, or the app was in the background too long."
                error is java.util.concurrent.TimeoutException ->
                    "A native C plug-in took longer than $timeoutMs ms on one frame or buffer. Check the plug-in code for slow or endless loops."
                else -> cause.message ?: "Native C worker stopped or timed out. Check the plug-in code."
            }
            throw IllegalStateException(message, error)
        }
    }
}
