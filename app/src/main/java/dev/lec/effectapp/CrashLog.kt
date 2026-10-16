package dev.lec.effectapp

import android.content.Context
import android.os.Build
import android.util.Log
import java.io.File

/**
 * Keeps the last crash (or caught room error) on this phone so it can be shown and copied
 * the next time the app opens. Nothing is sent anywhere.
 */
object CrashLog {
    private var file: File? = null
    private var versionName = "?"

    fun install(context: Context) {
        file = File(context.filesDir, "last-crash.txt")
        versionName = runCatching {
            context.packageManager.getPackageInfo(context.packageName, 0).versionName
        }.getOrNull() ?: "?"
        val previous = Thread.getDefaultUncaughtExceptionHandler()
        Thread.setDefaultUncaughtExceptionHandler { thread, error ->
            record(error, "crash on thread ${thread.name}")
            previous?.uncaughtException(thread, error)
        }
    }

    fun record(error: Throwable, what: String) {
        val target = file ?: return
        runCatching {
            target.writeText(
                "effect-app $versionName, Android ${Build.VERSION.RELEASE} (API ${Build.VERSION.SDK_INT}), ${Build.MODEL}\n" +
                    "$what at ${java.util.Date()}\n\n" +
                    Log.getStackTraceString(error).take(20_000),
            )
        }
    }

    fun read(): String? = file?.takeIf { it.isFile }?.let { runCatching { it.readText() }.getOrNull() }

    fun clear() {
        file?.delete()
    }
}
