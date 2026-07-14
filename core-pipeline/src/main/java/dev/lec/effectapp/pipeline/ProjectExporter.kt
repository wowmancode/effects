package dev.lec.effectapp.pipeline

import android.content.Context
import androidx.annotation.OptIn
import androidx.media3.common.util.UnstableApi
import androidx.media3.transformer.Composition
import androidx.media3.transformer.ExportException
import androidx.media3.transformer.ExportResult
import androidx.media3.transformer.ProgressHolder
import androidx.media3.transformer.Transformer
import dev.lec.effectapp.model.EditProject

@OptIn(UnstableApi::class)
class ProjectExporter(context: Context) {
    private var callback: Callback? = null
    private val transformer = Transformer.Builder(context)
        .addListener(
            object : Transformer.Listener {
                override fun onCompleted(composition: Composition, exportResult: ExportResult) {
                    callback?.onCompleted()
                    callback = null
                }

                override fun onError(
                    composition: Composition,
                    exportResult: ExportResult,
                    exportException: ExportException,
                ) {
                    callback?.onError(exportException)
                    callback = null
                }
            },
        )
        .build()

    fun start(project: EditProject, outputPath: String, callback: Callback) {
        check(this.callback == null) { "An export is already running" }
        this.callback = callback
        transformer.start(ProjectCompositionFactory.create(project), outputPath)
    }

    fun progress(): Int? {
        val holder = ProgressHolder()
        return if (transformer.getProgress(holder) == Transformer.PROGRESS_STATE_AVAILABLE) holder.progress else null
    }

    fun cancel() {
        transformer.cancel()
        callback = null
    }

    interface Callback {
        fun onCompleted()
        fun onError(error: ExportException)
    }
}
