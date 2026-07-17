package dev.lec.effectapp.pipeline
import android.content.Context
import android.net.Uri
import android.os.Handler
import android.os.Looper
import androidx.annotation.OptIn
import androidx.media3.common.MediaItem
import androidx.media3.common.MimeTypes
import androidx.media3.common.util.UnstableApi
import androidx.media3.transformer.Composition
import androidx.media3.transformer.EditedMediaItem
import androidx.media3.transformer.EditedMediaItemSequence
import androidx.media3.transformer.ExportException
import androidx.media3.transformer.ExportResult
import androidx.media3.transformer.ProgressHolder
import androidx.media3.transformer.Transformer
import dev.lec.effectapp.model.EditProject
import java.io.File
import java.util.UUID
@OptIn(UnstableApi::class)
class ProjectExporter(context: Context) {
 private var callback: Callback? = null
 private var batch: Batch? = null
 private val resolveBitmap = OverlayBitmapCache.resolver(context)
 private val queue = Handler(Looper.getMainLooper())
 private lateinit var transformer: Transformer
 init {
  transformer = Transformer.Builder(context)
   .setVideoMimeType(MimeTypes.VIDEO_H264)
   .setAudioMimeType(MimeTypes.AUDIO_AAC)
   .addListener(object : Transformer.Listener {
  override fun onCompleted(composition: Composition, exportResult: ExportResult) {
   val b=batch
   if (b==null) { val c=callback; callback=null; c?.onCompleted(); return }
   b.done++
   if (b.done < b.projects.size) queue.post { if (batch===b) startStage(b,b.done) }
   else if (!b.concat && b.files.size == 1) {
    b.files.single().copyTo(File(b.output), overwrite=true)
    batch=null; b.files.forEach(File::delete); val c=callback; callback=null; c?.onCompleted()
   }
   else if (!b.concat) {
    b.concat=true
    queue.post { if (batch===b) transformer.start(concatenate(b.files),b.output) }
   }
   else { batch=null; b.files.forEach(File::delete); val c=callback; callback=null; c?.onCompleted() }
  }
  override fun onError(composition: Composition, exportResult: ExportResult, exportException: ExportException) {
   batch?.files?.forEach(File::delete); batch=null; val c=callback; callback=null; c?.onError(exportException)
  }
  }).build()
 }
 fun start(project: EditProject, outputPath: String, callback: Callback) {
  check(this.callback==null) { "An export is already running" }; this.callback=callback
  transformer.start(ProjectCompositionFactory.create(project,resolveBitmap),outputPath)
 }
 fun startIhtx(project: EditProject,exports:Int,lengthMs:Long,outputPath:String,callback:Callback) {
  check(this.callback==null) { "An export is already running" }
  val base=project.takeForExport(lengthMs); require(base.clips.isNotEmpty()) { "Length per export must be greater than zero" }
  val token=UUID.randomUUID().toString(); val parent=File(outputPath).parentFile ?: error("Export folder is unavailable")
  val files=List(exports.coerceAtLeast(1)) { i -> File(parent,"ihtx-${token}-${i}.mp4") }
  this.callback=callback; batch=Batch(List(files.size){ p -> base.repeatedEffects(p+1) },files,outputPath); startStage(requireNotNull(batch),0)
 }
 fun progress():Int? { val h=ProgressHolder(); if(transformer.getProgress(h)!=Transformer.PROGRESS_STATE_AVAILABLE)return null; val b=batch?:return h.progress; return ((b.done*100+h.progress)/(b.projects.size+1)).coerceIn(0,100) }
 fun cancel(){ transformer.cancel(); batch?.files?.forEach(File::delete); batch=null; callback=null }
 interface Callback { fun onCompleted(); fun onError(error:ExportException) }
 private fun startStage(b:Batch,index:Int){ transformer.start(ProjectCompositionFactory.create(b.projects[index],resolveBitmap),b.files[index].absolutePath) }
 private fun concatenate(files:List<File>)=Composition.Builder(listOf(EditedMediaItemSequence.withAudioAndVideoFrom(files.map { EditedMediaItem.Builder(MediaItem.fromUri(Uri.fromFile(it))).build() }))).build()
 private data class Batch(val projects:List<EditProject>,val files:List<File>,val output:String,var done:Int=0,var concat:Boolean=false)
 private fun EditProject.takeForExport(length:Long):EditProject { var left=length.coerceIn(1,durationMs); return copy(clips=clips.mapNotNull { c -> if(left<=0)null else { val d=c.durationMs.coerceAtMost(left); left-=d; c.copy(trimEndMs=c.trimStartMs+d,effectSegments=c.effectSegments.map{it.forWholeClip(d)},audioSegments=c.audioSegments.map{it.forWholeClip(d)}) } }) }
 private fun EditProject.repeatedEffects(passes:Int)=copy(clips=clips.map { c -> c.copy(effectSegments=List(passes){c.effectSegments}.flatten(),audioSegments=List(passes){c.audioSegments}.flatten()) })
}
