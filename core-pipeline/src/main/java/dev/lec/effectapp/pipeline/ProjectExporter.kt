package dev.lec.effectapp.pipeline
import android.content.Context
import android.media.MediaMetadataRetriever
import android.net.Uri
import android.os.Handler
import android.os.HandlerThread
import android.os.Looper
import androidx.annotation.OptIn
import androidx.media3.common.MediaItem
import androidx.media3.common.MimeTypes
import androidx.media3.common.util.Size
import androidx.media3.common.util.UnstableApi
import androidx.media3.transformer.Composition
import androidx.media3.transformer.EditedMediaItem
import androidx.media3.transformer.EditedMediaItemSequence
import androidx.media3.transformer.ExportException
import androidx.media3.transformer.ExportResult
import androidx.media3.transformer.ProgressHolder
import androidx.media3.transformer.Transformer
import dev.lec.effectapp.model.EditProject
import dev.lec.effectapp.model.EffectKeyframe
import dev.lec.effectapp.model.Overlay
import dev.lec.effectapp.model.OverlayKeyframe
import dev.lec.effectapp.model.TimelineSegment
import java.io.File
import java.util.UUID
import kotlin.math.roundToInt
import kotlin.math.roundToLong
@OptIn(UnstableApi::class)
class ProjectExporter(private val context: Context) {
 // The Transformer runs on its own thread: its calls (start, cancel) and callbacks can block or
 // take a while with large layered projects, and must never hold up the UI. Results are handed
 // back to the main thread; progress is sampled on the export thread and cached for the UI.
 private val exportThread = HandlerThread("effect-export").apply { start() }
 private val queue = Handler(exportThread.looper)
 private val main = Handler(Looper.getMainLooper())
 @Volatile private var callback: Callback? = null
 @Volatile private var batch: Batch? = null
 @Volatile private var failedIhtxStatus: IhtxStatus? = null
 @Volatile private var lastProgress: Int? = null
 @Volatile private var videoMimeType: String = MimeTypes.VIDEO_H264
 private val resolveBitmap = OverlayBitmapCache.resolver(context)
 private val progressPoll = object : Runnable {
  override fun run() {
   if (callback == null) { lastProgress = null; return }
   val h=ProgressHolder()
   lastProgress = if(transformer.getProgress(h)!=Transformer.PROGRESS_STATE_AVAILABLE) null else {
    val b=batch
    if(b==null) h.progress else ((b.done*100+h.progress)/(b.projects.size+1)).coerceIn(0,100)
   }
   queue.postDelayed(this, PROGRESS_POLL_MS)
  }
 }
 private fun finish(block:(Callback)->Unit) {
  val c=callback; callback=null; lastProgress=null
  if(c!=null) main.post { block(c) }
 }
 private val transformerListener = object : Transformer.Listener {
  override fun onCompleted(composition: Composition, exportResult: ExportResult) {
   val b=batch
   if (b==null) { transformer=newTransformer(); finish { it.onCompleted() }; return }
   b.retries=0
   b.done++
   b.ihtx?.let { plan -> if (b.done < b.projects.size) b.projects[b.done] = plan.nextProject(b.files[b.done - 1], b.done) }
   if (b.done < b.projects.size) { transformer=newTransformer(); queue.post { if (batch===b) startStage(b,b.done) } }
   else if (!b.concat && b.files.size == 1) {
    b.files.single().copyTo(File(b.output), overwrite=true)
    batch=null; b.files.forEach(File::delete); transformer=newTransformer(); finish { it.onCompleted() }
   }
   else if (!b.concat) {
    b.concat=true
    transformer=newTransformer()
    queue.post { if (batch===b) transformer.start(concatenate(b.files),b.output) }
   }
   else { batch=null; b.files.forEach(File::delete); transformer=newTransformer(); finish { it.onCompleted() } }
  }
  override fun onError(composition: Composition, exportResult: ExportResult, exportException: ExportException) {
   val b=batch
   if (b != null && !b.concat && b.done < b.projects.size && b.retries < MAX_STAGE_RETRIES) {
    b.retries++
    b.files.getOrNull(b.done)?.delete()
    transformer=newTransformer()
    queue.postDelayed({ if (batch===b) startStage(b,b.done) }, RETRY_COOLDOWN_MS)
    return
   }
   failedIhtxStatus=ihtxStatus(); batch?.files?.forEach(File::delete); batch=null; transformer=newTransformer(); finish { it.onError(exportException) }
  }
 }
 @Volatile private var preparing=false
 @Volatile private var transformer: Transformer = newTransformer()
 private fun newTransformer():Transformer = Transformer.Builder(context)
  .setLooper(exportThread.looper)
  .setVideoMimeType(videoMimeType)
  .setAudioMimeType(MimeTypes.AUDIO_AAC)
  .addListener(transformerListener)
  .build()
 fun start(project: EditProject, outputPath: String, callback: Callback, codec: ExportCodec = ExportCodec.H264) {
  check(this.callback==null) { "An export is already running" }; failedIhtxStatus=null; this.callback=callback
  videoMimeType=codec.mimeType
  preparing=true
  background {
   val prepared=ReverseMediaCache.prepare(context,SourceLengths.fit(context,project))
   queue.post {
    preparing=false
    if(this.callback===callback) {
     transformer=newTransformer()
     transformer.start(ProjectCompositionFactory.create(prepared,resolveBitmap),outputPath)
     queue.removeCallbacks(progressPoll); queue.post(progressPoll)
    }
   }
  }
 }
 /** True while reversed clip media is being rendered, before the export itself starts. */
 fun preparing():Boolean = preparing
 /**
  * Exports [lengthMs] of the project beginning [startMs] into it, [exports] times cumulatively.
  * Reversed media is rendered first, on a background thread; the call returns immediately.
  */
 fun startIhtx(project: EditProject,exports:Int,lengthMs:Long,outputPath:String,callback:Callback,overlays:List<Overlay> = emptyList(),overlayGridSize:Int = 2,exportAspectRatio:Float? = null,startMs:Long = 0,codec:ExportCodec = ExportCodec.H264) {
  check(this.callback==null) { "An export is already running" }
  videoMimeType=codec.mimeType
  failedIhtxStatus=null
  this.callback=callback
  preparing=true
  background {
   // Reverse the whole clips first so trimming the start keeps what the preview shows.
   // Fit clips to their files' real lengths first: a start past the end of a file fails the export.
   val result=runCatching { ReverseMediaCache.prepare(context,SourceLengths.fit(context,project)).takeForExport(startMs,lengthMs) }
   queue.post {
    preparing=false
    if(this.callback!==callback) return@post
    val base=result.getOrNull()
    if(base==null || base.clips.isEmpty()) {
     finish { it.onError(ExportException.createForUnexpected(IllegalArgumentException(result.exceptionOrNull()?.message ?: "Nothing to export after the start time"))) }
     return@post
    }
    transformer=newTransformer()
    beginIhtx(base,exports,outputPath,overlays,overlayGridSize,exportAspectRatio)
    queue.removeCallbacks(progressPoll); queue.post(progressPoll)
   }
  }
 }
 private fun beginIhtx(base: EditProject,exports:Int,outputPath:String,overlays:List<Overlay>,overlayGridSize:Int,exportAspectRatio:Float?) {
  val passes=exports.coerceAtLeast(1); val total=(overlays.size+1)*passes
  val token=UUID.randomUUID().toString(); val parent=File(outputPath).parentFile ?: error("Export folder is unavailable")
  val files=List(total) { i -> File(parent,"ihtx-" + token + "-" + i + ".mp4") }
  val outputSize=outputSizeForAspect(videoSize(base.clips.first().sourceUri),exportAspectRatio)
  val plan=IhtxPlan(base,overlays,passes,overlayGridSize.coerceAtLeast(1),outputSize?.let { it.width.toFloat() / it.height.toFloat() },outputSize)
  batch=Batch(MutableList(total){base},files,outputPath,ihtx=plan); startStage(requireNotNull(batch),0)
 }
 fun ihtxStatus():IhtxStatus? { val b=batch ?: return null; return if(b.concat) IhtxStatus(b.projects.size,b.projects.size,true) else IhtxStatus(b.done+1,b.projects.size,false) }
 fun lastIhtxFailure():IhtxStatus? = failedIhtxStatus
 /** Latest progress (0..100), sampled on the export thread; null when not known. */
 fun progress():Int? = lastProgress
 /** Stops the export without waiting for it (the Transformer is cancelled on its own thread). */
 fun cancel(){
  callback=null; preparing=false; lastProgress=null
  queue.post {
   runCatching { transformer.cancel() }
   batch?.files?.forEach(File::delete); batch=null
   transformer=newTransformer()
  }
 }
 /** Cancels anything running and ends the export thread; the exporter can't be used afterwards. */
 fun release(){ cancel(); queue.post { exportThread.quitSafely() } }
 interface Callback { fun onCompleted(); fun onError(error:ExportException) }
 private fun startStage(b:Batch,index:Int){
  if(index>0) {
   // Later passes re-apply the clip's effects to the previous pass, including any reverse.
   preparing=true
   val project=b.projects[index]
   background {
    val prepared=ReverseMediaCache.prepare(context,project)
    queue.post { preparing=false; if(batch===b) { b.projects[index]=prepared; startTransformer(b,index) } }
   }
  } else startTransformer(b,index)
 }
 private fun background(block:()->Unit) { Thread(block,"export-prepare").start() }
 private fun startTransformer(b:Batch,index:Int){ transformer.start(ProjectCompositionFactory.create(b.projects[index],resolveBitmap,overlayAspectRatio=b.ihtx?.overlayAspectRatio,durationAnchorMs=b.ihtx?.base?.durationMs,ihtxOutputSize=b.ihtx?.outputSize,outputPresentationSize=b.ihtx?.outputSize,muteBaseAudio=b.ihtx?.mutesBaseAudio(index)==true),b.files[index].absolutePath) }
 private fun videoSize(sourceUri:String):Size? {
  val retriever=MediaMetadataRetriever()
  return try {
   retriever.setDataSource(context,Uri.parse(sourceUri))
   val width=retriever.extractMetadata(MediaMetadataRetriever.METADATA_KEY_VIDEO_WIDTH)?.toIntOrNull() ?: return null
   val height=retriever.extractMetadata(MediaMetadataRetriever.METADATA_KEY_VIDEO_HEIGHT)?.toIntOrNull() ?: return null
   val rotation=retriever.extractMetadata(MediaMetadataRetriever.METADATA_KEY_VIDEO_ROTATION)?.toIntOrNull() ?: 0
   if(rotation % 180 == 0) Size(width,height) else Size(height,width)
  } catch (_:RuntimeException) { null } finally { retriever.release() }
 }
 private fun outputSizeForAspect(source:Size?,aspectRatio:Float?):Size? {
  if(source==null || aspectRatio==null) return source
  val targetAspect=aspectRatio.coerceIn(0.1f,10f)
  val longestEdge=maxOf(source.width,source.height).toFloat()
  fun even(value:Float):Int = (((value.roundToInt().coerceAtLeast(2)+1)/2)*2)
  return if(targetAspect >= 1f) Size(even(longestEdge),even(longestEdge/targetAspect)) else Size(even(longestEdge*targetAspect),even(longestEdge))
 }
 private fun concatenate(files:List<File>)=Composition.Builder(listOf(EditedMediaItemSequence.withAudioAndVideoFrom(files.map { EditedMediaItem.Builder(MediaItem.fromUri(Uri.fromFile(it))).build() })))
  .setTransmuxAudio(true)
  .setTransmuxVideo(true)
  .build()
 data class IhtxStatus(val current:Int,val total:Int,val concatenating:Boolean)
 private data class Batch(val projects:MutableList<EditProject>,val files:List<File>,val output:String,var done:Int=0,var concat:Boolean=false,val ihtx:IhtxPlan?=null,var retries:Int=0)
 private fun EditProject.takeForExport(start:Long,length:Long):EditProject {
  // Start inside the project (at least the last millisecond) and keep the length within what's left.
  var skip=start.coerceIn(0,(durationMs-1).coerceAtLeast(0))
  var left=length.coerceIn(1,(durationMs-skip).coerceAtLeast(1))
  return copy(clips=clips.mapNotNull { c ->
   if(skip>=c.durationMs) { skip-=c.durationMs; return@mapNotNull null }
   if(left<=0) return@mapNotNull null
   val cut=skip; skip=0
   val d=(c.durationMs-cut).coerceAtMost(left); left-=d
   // The clip reads speed× as much source as it lasts, so the cut moves its in-point by cut×speed.
   val inPoint=c.sourceMsAt(cut)
   c.copy(
    trimStartMs=inPoint,
    trimEndMs=inPoint+d,
    effectSegments=c.effectSegments.map{it.shiftedBy(cut).forWholeClip(d)},
    audioSegments=c.audioSegments.map{it.shiftedBy(cut).forWholeClip(d)},
    overlays=c.overlays.mapNotNull { it.shiftedBy(cut) },
    videoOverride=c.videoOverride?.let { it.copy(startMs=it.startMs+cut) },
    audioOverride=c.audioOverride?.let { it.copy(startMs=it.startMs+cut) },
   )
  })
 }
 private fun TimelineSegment.shiftedBy(cut:Long):TimelineSegment {
  if(cut==0L || keyframes.isEmpty()) return this
  val kept=keyframes.map { it.copy(timeMs=it.timeMs-cut) }.filter { it.timeMs>=0 }
  // Keyframes before the cut still shape the values: pin them at the new start.
  val pinned=if(kept.none { it.timeMs==0L }) listOf(EffectKeyframe(0,paramsAt(cut))) else emptyList()
  return copy(keyframes=pinned+kept)
 }
 /** Moves an overlay [cut] ms earlier in its clip; null when it ends before the cut. */
 private fun Overlay.shiftedBy(cut:Long):Overlay? {
  if(cut==0L) return this
  val untilEnd=endMs<=startMs
  if(!untilEnd && endMs<=cut) return null
  val kept=keyframes.map { it.copy(timeMs=it.timeMs-cut) }.filter { it.timeMs>=0 }
  // Keyframes before the cut still shape the animation: pin their value at the new start.
  val pinned=if(keyframes.isNotEmpty() && kept.none { it.timeMs==0L }) {
   val v=valuesAt(cut); listOf(OverlayKeyframe(0,v.alpha,v.scale,v.offsetX,v.offsetY))
  } else emptyList()
  return copy(
   startMs=(startMs-cut).coerceAtLeast(0),
   endMs=if(untilEnd) 0 else endMs-cut,
   keyframes=pinned+kept,
   // An overlay video already playing at the cut continues from where it was.
   sourceOffsetMs=sourceOffsetMs+((cut-startMs).coerceAtLeast(0)*playbackSpeed.toDouble()).roundToLong(),
  )
 }
 private data class IhtxPlan(val base:EditProject,val overlays:List<Overlay>,val passes:Int,val gridSize:Int,val overlayAspectRatio:Float?,val outputSize:Size?) {
  private companion object { const val GRID_COVERAGE = 1.02f }
  fun mutesBaseAudio(index:Int):Boolean = index>0 && index%passes==0
  fun nextProject(previous:File,index:Int):EditProject {
   val stage=index/passes
   val first=base.clips.first().copy(sourceUri=Uri.fromFile(previous).toString(),trimStartMs=0,trimEndMs=base.durationMs,speed=1f,overlays=emptyList(),videoOverride=null,audioOverride=null)
   val project=base.copy(clips=listOf(first))
   if(index%passes!=0 || stage==0) return project
   val overlay=overlays[stage-1]
   val column=(stage-1)%gridSize; val row=(stage-1)/gridSize
   val tile=overlay.copy(startMs=0,endMs=first.durationMs,scale=GRID_COVERAGE/gridSize,offsetX=((column+.5f)/gridSize)*2f-1f,offsetY=1f-((row+.5f)/gridSize)*2f)
   return project.copy(clips=listOf(first.copy(overlays=listOf(tile))))
  }
 }

 private companion object {
  const val PROGRESS_POLL_MS = 200L
  const val MAX_STAGE_RETRIES = 2
  const val RETRY_COOLDOWN_MS = 150L
 }

}
