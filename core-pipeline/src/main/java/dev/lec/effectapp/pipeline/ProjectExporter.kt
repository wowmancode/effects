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
   b.ihtx?.let { plan -> if (b.done < b.projects.size) b.projects[b.done] = plan.nextProject(b.files[b.done - 1], b.done) }
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
  val passes=exports.coerceAtLeast(1); val total=(overlays.size+1)*passes
  val token=UUID.randomUUID().toString(); val parent=File(outputPath).parentFile ?: error("Export folder is unavailable")
  val files=List(total) { i -> File(parent,"ihtx-" + token + "-" + i + ".mp4") }
  val plan=IhtxPlan(base,overlays,passes)
  this.callback=callback; batch=Batch(MutableList(total){base},files,outputPath,ihtx=plan); startStage(requireNotNull(batch),0)
 }
 fun ihtxStatus():IhtxStatus? { val b=batch ?: return null; return if(b.concat) IhtxStatus(b.projects.size,b.projects.size,true) else IhtxStatus(b.done+1,b.projects.size,false) }
 fun lastIhtxFailure():IhtxStatus? = failedIhtxStatus
 fun progress():Int? { val h=ProgressHolder(); if(transformer.getProgress(h)!=Transformer.PROGRESS_STATE_AVAILABLE)return null; val b=batch?:return h.progress; return ((b.done*100+h.progress)/(b.projects.size+1)).coerceIn(0,100) }
 fun cancel(){ transformer.cancel(); batch?.files?.forEach(File::delete); batch=null; callback=null }
 interface Callback { fun onCompleted(); fun onError(error:ExportException) }
 private fun startStage(b:Batch,index:Int){ transformer.start(ProjectCompositionFactory.create(b.projects[index],resolveBitmap),b.files[index].absolutePath) }
 private fun concatenate(files:List<File>)=Composition.Builder(listOf(EditedMediaItemSequence.withAudioAndVideoFrom(files.map { EditedMediaItem.Builder(MediaItem.fromUri(Uri.fromFile(it))).build() }))).build()
 data class IhtxStatus(val current:Int,val total:Int,val concatenating:Boolean)
 private data class Batch(val projects:MutableList<EditProject>,val files:List<File>,val output:String,var done:Int=0,var concat:Boolean=false,val ihtx:IhtxPlan?=null)
 private fun EditProject.takeForExport(length:Long):EditProject { var left=length.coerceIn(1,durationMs); return copy(clips=clips.mapNotNull { c -> if(left<=0)null else { val d=c.durationMs.coerceAtMost(left); left-=d; c.copy(trimEndMs=c.trimStartMs+d,effectSegments=c.effectSegments.map{it.forWholeClip(d)},audioSegments=c.audioSegments.map{it.forWholeClip(d)}) } }) }
 private data class IhtxPlan(val base:EditProject,val overlays:List<Overlay>,val passes:Int) {
  fun nextProject(previous:File,index:Int):EditProject {
   val stage=index/passes
   val duration=base.durationMs
   val first=base.clips.first().copy(sourceUri=Uri.fromFile(previous).toString(),trimStartMs=0,trimEndMs=duration,overlays=emptyList())
   val project=base.copy(clips=listOf(first))
   if(index%passes!=0 || stage==0) return project
   val total=overlays.size; val overlay=overlays[stage-1]
   val columns=kotlin.math.ceil(kotlin.math.sqrt(total.toDouble())).toInt().coerceAtLeast(1)
   val rows=kotlin.math.ceil(total.toDouble()/columns).toInt().coerceAtLeast(1)
   val column=(stage-1)%columns; val row=(stage-1)/columns
   val tile=overlay.copy(startMs=0,endMs=first.durationMs,scale=1f/maxOf(columns,rows),offsetX=((column+.5f)/columns)*2f-1f,offsetY=((row+.5f)/rows)*2f-1f)
   return project.copy(clips=listOf(first.copy(overlays=listOf(tile))))
  }
 }

}
