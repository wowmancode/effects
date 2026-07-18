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
import dev.lec.effectapp.model.Overlay
import java.io.File
import java.util.UUID
@OptIn(UnstableApi::class)
class ProjectExporter(context: Context) {
 private var callback: Callback? = null
 private var batch: Batch? = null
 private var failedIhtxStatus: IhtxStatus? = null
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
   failedIhtxStatus=ihtxStatus(); batch?.files?.forEach(File::delete); batch=null; val c=callback; callback=null; c?.onError(exportException)
  }
  }).build()
 }
 fun start(project: EditProject, outputPath: String, callback: Callback) {
  check(this.callback==null) { "An export is already running" }; failedIhtxStatus=null; this.callback=callback
  transformer.start(ProjectCompositionFactory.create(project,resolveBitmap),outputPath)
 }
 fun startIhtx(project: EditProject,exports:Int,lengthMs:Long,outputPath:String,callback:Callback,overlays:List<Overlay> = emptyList()) {
  check(this.callback==null) { "An export is already running" }
  failedIhtxStatus=null
  val base=project.takeForExport(lengthMs); require(base.clips.isNotEmpty()) { "Length per export must be greater than zero" }
  val passes=exports.coerceAtLeast(1)
  val projects=(0..overlays.size).flatMap { count ->
   List(passes) { pass -> base.withIhtxOverlays(overlays.take(count)).repeatedEffects(count*passes+pass+1) }
  }
  val token=UUID.randomUUID().toString(); val parent=File(outputPath).parentFile ?: error("Export folder is unavailable")
  val files=List(projects.size) { i -> File(parent,"ihtx-" + token + "-" + i + ".mp4") }
  this.callback=callback; batch=Batch(projects,files,outputPath); startStage(requireNotNull(batch),0)
 }
 fun ihtxStatus():IhtxStatus? { val b=batch ?: return null; return if(b.concat) IhtxStatus(b.projects.size,b.projects.size,true) else IhtxStatus(b.done+1,b.projects.size,false) }
 fun lastIhtxFailure():IhtxStatus? = failedIhtxStatus
 fun progress():Int? { val h=ProgressHolder(); if(transformer.getProgress(h)!=Transformer.PROGRESS_STATE_AVAILABLE)return null; val b=batch?:return h.progress; return ((b.done*100+h.progress)/(b.projects.size+1)).coerceIn(0,100) }
 fun cancel(){ transformer.cancel(); batch?.files?.forEach(File::delete); batch=null; callback=null }
 interface Callback { fun onCompleted(); fun onError(error:ExportException) }
 private fun startStage(b:Batch,index:Int){ transformer.start(ProjectCompositionFactory.create(b.projects[index],resolveBitmap),b.files[index].absolutePath) }
 private fun concatenate(files:List<File>)=Composition.Builder(listOf(EditedMediaItemSequence.withAudioAndVideoFrom(files.map { EditedMediaItem.Builder(MediaItem.fromUri(Uri.fromFile(it))).build() }))).build()
 data class IhtxStatus(val current:Int,val total:Int,val concatenating:Boolean)
 private data class Batch(val projects:List<EditProject>,val files:List<File>,val output:String,var done:Int=0,var concat:Boolean=false)
 private fun EditProject.takeForExport(length:Long):EditProject { var left=length.coerceIn(1,durationMs); return copy(clips=clips.mapNotNull { c -> if(left<=0)null else { val d=c.durationMs.coerceAtMost(left); left-=d; c.copy(trimEndMs=c.trimStartMs+d,effectSegments=c.effectSegments.map{it.forWholeClip(d)},audioSegments=c.audioSegments.map{it.forWholeClip(d)}) } }) }
 private fun EditProject.repeatedEffects(passes:Int)=copy(clips=clips.map { c -> c.copy(effectSegments=List(passes){c.effectSegments}.flatten(),audioSegments=List(passes){c.audioSegments}.flatten()) })
 private fun EditProject.withIhtxOverlays(overlays:List<Overlay>):EditProject {
  if(overlays.isEmpty()) return this
  val columns=kotlin.math.ceil(kotlin.math.sqrt(overlays.size.toDouble())).toInt().coerceAtLeast(1)
  val rows=kotlin.math.ceil(overlays.size.toDouble()/columns).toInt().coerceAtLeast(1)
  val size=1f/maxOf(columns,rows)
  return copy(clips=clips.mapIndexed { clipIndex,clip -> if(clipIndex!=0) clip else clip.copy(overlays=clip.overlays+overlays.mapIndexed { index,overlay ->
   val column=index%columns; val row=index/columns
   overlay.copy(startMs=0,endMs=clip.durationMs,scale=size,offsetX=((column+.5f)/columns)*2f-1f,offsetY=((row+.5f)/rows)*2f-1f)
  }) })
 }
}
