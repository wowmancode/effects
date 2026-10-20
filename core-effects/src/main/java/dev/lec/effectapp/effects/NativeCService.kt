package dev.lec.effectapp.effects

import android.app.Service
import android.content.Intent
import android.os.Binder
import android.os.IBinder
import android.os.Parcel
import android.os.ParcelFileDescriptor
import android.os.Process
import dev.lec.effectapp.model.NativePluginPolicy
import java.io.File
import java.nio.ByteBuffer

/** Compiler and all user machine code live here, never in the editor process. */
class NativeCService : Service() {
    private data class Program(val key: String, val handle: Long, val audio: Boolean, var users: Int = 0)
    private data class Session(val program: Program, val instance: Long, val buffer: ByteBuffer, val capacity: Int)
    private val programs = LinkedHashMap<String, Program>(16, .75f, true)
    private val sessions = HashMap<Int, Session>()
    private var nextSession = 1
    private lateinit var root: File

    override fun onCreate() {
        super.onCreate()
        root = File(filesDir, "native-c/tinycc-e23dab-api1")
        if (!File(root, ".complete").exists()) {
            fun copy(path: String, destination: File) {
                val names = assets.list(path).orEmpty()
                if (names.isNotEmpty()) {
                    destination.mkdirs()
                    names.forEach { copy("$path/$it", File(destination, it)) }
                } else assets.open(path).use { input -> destination.outputStream().use { input.copyTo(it) } }
            }
            root.mkdirs()
            copy("native-c", root)
            File(root, ".complete").writeText("1")
        }
    }

    private fun program(source: String, audio: Boolean): Program {
        NativePluginPolicy.validateSource(source, audio)?.let { error(it) }
        val key = NativePluginPolicy.approvalKey(source, audio)
        programs[key]?.let { return it }
        return Program(key, NativeCCompiler.compile(root.absolutePath, source, audio), audio).also {
            programs[key] = it
            trim(key)
        }
    }

    private fun trim(except: String? = null) {
        while (programs.size > 8) {
            val entry = programs.entries.firstOrNull { it.value.users == 0 && it.key != except } ?: break
            programs.remove(entry.key)
            NativeCCompiler.deleteProgram(entry.value.handle)
        }
    }

    private fun close(id: Int) {
        val session = sessions.remove(id) ?: return
        try { NativeCCompiler.deleteInstance(session.instance) } finally {
            NativeCCompiler.unmapBuffer(session.buffer)
            session.program.users--
            trim()
        }
    }

    private val binder = object : Binder() {
        override fun onTransact(code: Int, data: Parcel, reply: Parcel?, flags: Int): Boolean {
            if (code == IBinder.INTERFACE_TRANSACTION) { reply?.writeString(NativeCWire.TOKEN); return true }
            require(Binder.getCallingUid() == Process.myUid()) { "Private plug-in worker." }
            data.enforceInterface(NativeCWire.TOKEN)
            if (reply == null) return false
            try {
                synchronized(programs) {
                    when (code) {
                        NativeCWire.HELLO -> { reply.writeNoException(); reply.writeInt(Process.myPid()) }
                        NativeCWire.COMPILE -> {
                            program(requireNotNull(data.readString()), data.readInt() != 0)
                            reply.writeNoException()
                        }
                        NativeCWire.OPEN -> {
                            val source = requireNotNull(data.readString())
                            val audio = data.readInt() != 0
                            val capacity = data.readInt()
                            require(capacity in 4..NativeCWire.MAX_BUFFER_BYTES) { "Invalid native plug-in buffer size." }
                            @Suppress("DEPRECATION")
                            val descriptor = requireNotNull(data.readParcelable<ParcelFileDescriptor>(ParcelFileDescriptor::class.java.classLoader))
                            descriptor.use { fd ->
                                val compiled = program(source, audio)
                                val memory = NativeCCompiler.mapBuffer(fd.fd, capacity)
                                val instance = try { NativeCCompiler.createInstance(compiled.handle) } catch (error: Throwable) {
                                    NativeCCompiler.unmapBuffer(memory); throw error
                                }
                                compiled.users++
                                val id = nextSession++
                                sessions[id] = Session(compiled, instance, memory, capacity)
                                reply.writeNoException(); reply.writeInt(id)
                            }
                        }
                        NativeCWire.PROCESS -> {
                            val session = requireNotNull(sessions[data.readInt()]) { "Native C instance expired." }
                            val first = data.readInt(); val second = data.readInt(); val rate = data.readInt()
                            val time = data.readDouble()
                            val controls = requireNotNull(data.createFloatArray())
                            require(controls.size == 8 && time.isFinite()) { "Invalid native C controls or time." }
                            require(first > 0 && second > 0 && first.toLong() * second * 4 <= session.capacity) { "Native C buffer overflow." }
                            if (session.program.audio) require(second <= 32 && rate in 1..768_000) { "Invalid audio format." }
                            NativeCCompiler.process(session.instance, session.buffer, session.program.audio, first, second, rate, time, controls)
                            reply.writeNoException()
                        }
                        NativeCWire.CLOSE -> { close(data.readInt()); reply.writeNoException() }
                        else -> return super.onTransact(code, data, reply, flags)
                    }
                }
            } catch (error: Exception) {
                reply.setDataPosition(0)
                reply.writeException(IllegalStateException(error.message ?: "Native C worker failed."))
            }
            return true
        }
    }

    override fun onBind(intent: Intent): IBinder = binder
    override fun onStartCommand(intent: Intent?, flags: Int, startId: Int): Int = START_NOT_STICKY
    override fun onDestroy() {
        synchronized(programs) {
            sessions.keys.toList().forEach(::close)
            programs.values.forEach { NativeCCompiler.deleteProgram(it.handle) }
            programs.clear()
        }
        super.onDestroy()
    }
}

/** Referenced only by the worker, so loading the compiler cannot run native code in the editor. */
internal object NativeCCompiler {
    init { System.loadLibrary("lec_native_c") }
    external fun compile(root: String, source: String, audio: Boolean): Long
    external fun deleteProgram(program: Long)
    external fun createInstance(program: Long): Long
    external fun deleteInstance(instance: Long)
    external fun mapBuffer(fd: Int, capacity: Int): ByteBuffer
    external fun unmapBuffer(buffer: ByteBuffer)
    external fun process(instance: Long, buffer: ByteBuffer, audio: Boolean, first: Int, second: Int, rate: Int, time: Double, controls: FloatArray)
}

internal object NativeCWire {
    const val TOKEN = "dev.lec.effectapp.effects.NativeCWorker.v1"
    const val HELLO = IBinder.FIRST_CALL_TRANSACTION
    const val COMPILE = HELLO + 1
    const val OPEN = HELLO + 2
    const val PROCESS = HELLO + 3
    const val CLOSE = HELLO + 4
    const val MAX_BUFFER_BYTES = 128 * 1024 * 1024
}
