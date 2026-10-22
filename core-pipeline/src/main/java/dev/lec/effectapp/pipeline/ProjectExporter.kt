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
import dev.lec.effectapp.model.EffectPreset
import dev.lec.effectapp.model.IhtxGridCell
import dev.lec.effectapp.model.IhtxPlan
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
 @Volatile private var passProgress: Int? = null
 @Volatile private var videoMimeType: String = MimeTypes.VIDEO_H264
 @Volatile private var encoderSettings: ExportEncoderSettings = ExportEncoderSettings()
 @Volatile private var antiDesync: Boolean = false
 @Volatile private var outputPath: String? = null
 /** The unsynced export while the anti-desync pass rewrites it; null otherwise. */
 @Volatile private var syncSource: File? = null
 @Volatile private var syncNote: String? = null
 private val resolveBitmap = OverlayBitmapCache.resolver(context)
 private val progressPoll = object : Runnable {
  override fun run() {
   if (callback == null) { lastProgress = null; return }
   val h=ProgressHolder()
   val b=batch
   val available=transformer.getProgress(h)==Transformer.PROGRESS_STATE_AVAILABLE
   lastProgress = when {
    b!=null -> (((b.done*100)+(if(available) h.progress else 0))/(b.projects.size+1)).coerceIn(0,100)
    available -> h.progress
    else -> null
   }
   // Layered passes often can't report their own progress; the pass count still moves the bar.
   passProgress = if(b!=null && available) h.progress else null
   queue.postDelayed(this, PROGRESS_POLL_MS)
  }
 }
 private fun finish(block:(Callback)->Unit) {
  val c=callback; callback=null; lastProgress=null
  if(c!=null) main.post { block(c) }
 }
 private val transformerListener = object : Transformer.Listener {
  override fun onCompleted(composition: Composition, exportResult: ExportResult) {
   syncSource?.let { source -> source.delete(); syncSource=null; transformer=newTransformer(); finish { it.onCompleted() }; return }
   val b=batch
   if (b==null) { transformer=newTransformer(); finishOrSync(outputPath); return }
   b.retries=0; b.lastError=emptyList()
   b.done++
   b.ihtx?.let { plan ->
    if (b.done < b.projects.size) {
     val previous=b.files[b.done - 1]
     b.projects[b.done] = plan.nextProject(Uri.fromFile(previous).toString(), b.done, audioLeadMs(previous, plan.base.durationMs))
    }
   }
   if (b.done < b.projects.size) { transformer=newTransformer(); queue.post { if (batch===b) startStage(b,b.done) } }
   else if (!b.concat && b.files.size == 1) {
    b.files.single().copyTo(File(b.output), overwrite=true)
    batch=null; b.files.forEach(File::delete); transformer=newTransformer(); finishOrSync(b.output)
   }
   else if (!b.concat) {
    b.concat=true
    transformer=newTransformer()
    queue.post { if (batch===b) transformer.start(concatenate(b.files,b.ihtx?.base?.durationMs),b.output) }
   }
   else { batch=null; b.files.forEach(File::delete); transformer=newTransformer(); finishOrSync(b.output) }
  }
  override fun onError(composition: Composition, exportResult: ExportResult, exportException: ExportException) {
   syncSource?.let { source ->
    // The export itself worked: keep it as it was rather than losing it to the sync pass.
    syncSource=null
    val target=outputPath?.let(::File)
    if(target!=null) { target.delete(); source.renameTo(target) }
    syncNote="Anti-desync failed, saved without it: "+(exportException.message ?: exportException.javaClass.simpleName)
    transformer=newTransformer(); finish { it.onCompleted() }
    return
   }
   val b=batch
   // A crashed or killed plug-in worker gets more tries, each with a fresh worker and a pause.
   val nativeFailure=isNativeWorkerFailure(exportException)
   if (b != null && !b.concat && b.done < b.projects.size && b.retries < (if(nativeFailure) MAX_NATIVE_RETRIES else MAX_STAGE_RETRIES)) {
    b.retries++
    b.lastError=listOfNotNull(exportException.message)+generateSequence(exportException.cause) { it.cause }.take(4).mapNotNull { it.message ?: it.javaClass.simpleName }
    b.files.getOrNull(b.done)?.delete()
    if(nativeFailure) dev.lec.effectapp.effects.NativeCClient.restartWorker()
    transformer=newTransformer()
    queue.postDelayed({ if (batch===b) startStage(b,b.done) }, if(nativeFailure) NATIVE_RETRY_COOLDOWN_MS else RETRY_COOLDOWN_MS)
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
  // Media3 gives up after 10 s without output ("no output sample written in the last 10000
  // milliseconds"). Starting a plug-in worker and compiling can take longer than that; real hangs
  // are still caught by the plug-in's own per-frame timeout.
  .setMaxDelayBetweenMuxerSamplesMs(MAX_DELAY_BETWEEN_SAMPLES_MS)
  .apply { encoderSettings.takeUnless { it.isDefault }?.let { setEncoderFactory(encoderFactory(it)) } }
  .addListener(transformerListener)
  .build()
 fun start(project: EditProject, outputPath: String, callback: Callback, codec: ExportCodec = ExportCodec.H264, settings: ExportEncoderSettings = ExportEncoderSettings(), antiDesync: Boolean = false) {
  if (rejectNative(project, callback)) return
  check(this.callback==null) { "An export is already running" }; failedIhtxStatus=null; this.callback=callback
  videoMimeType=codec.mimeType
  encoderSettings=settings
  this.antiDesync=antiDesync; this.outputPath=outputPath; syncNote=null
  preparing=true
  background {
   val prepared=ReverseMediaCache.prepare(context,SourceLengths.fit(context,project))
   queue.post {
    preparing=false
    if(this.callback===callback) {
     transformer=newTransformer()
     val size=settings.maxLongEdge?.let { edge -> prepared.clips.firstOrNull()?.let { videoSize(it.sourceUri) }?.let { capLongEdge(it,edge) } }
     transformer.start(ProjectCompositionFactory.create(prepared,resolveBitmap,outputPresentationSize=size),outputPath)
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
 /**
  * [veryFast]: every pass is rendered at up to 720p and encoded at a modest bitrate with fewer
  * keyframes, so effects, encoder and disk all have far less to push through per pass. Anything
  * chosen in [settings] (bitrate, keyframe interval, B-frames, audio bitrate, resolution…) wins
  * over those defaults.
  */
 fun startIhtx(project: EditProject,exports:Int,lengthMs:Long,outputPath:String,callback:Callback,overlays:List<Overlay> = emptyList(),overlayGridSize:Int = 2,exportAspectRatio:Float? = null,startMs:Long = 0,codec:ExportCodec = ExportCodec.H264,veryFast:Boolean = true,presets:List<EffectPreset> = emptyList(),overlayPattern:List<IhtxGridCell> = emptyList(),settings:ExportEncoderSettings = ExportEncoderSettings(),antiDesync:Boolean = false) {
  settings.problem()?.let { message -> main.post { callback.onError(ExportException.createForUnexpected(IllegalArgumentException(message))) }; return }
  check(this.callback==null) { "An export is already running" }
  val allSources = project.copy(clips = project.clips + presets.map { preset ->
   dev.lec.effectapp.model.Clip(id="native-check", sourceUri="", displayName=preset.name, trimEndMs=1, effectSegments=preset.effectSegments, audioSegments=preset.audioSegments)
  } + dev.lec.effectapp.model.Clip(id="native-check-overlays", sourceUri="", displayName="IHTX overlays", trimEndMs=1, overlays=overlays))
  if (rejectNative(allSources, callback)) return
  val planned=runCatching { IhtxPlan(project,exports,presets,overlays,overlayGridSize,overlayPattern) }
  val plan=planned.getOrNull()
  if(plan==null) {
   main.post { callback.onError(ExportException.createForUnexpected(IllegalArgumentException(planned.exceptionOrNull()?.message))) }
   return
  }
  videoMimeType=codec.mimeType
  encoderSettings=settings.resolved(veryFast)
  this.antiDesync=antiDesync; this.outputPath=outputPath; syncNote=null
  failedIhtxStatus=null
  this.callback=callback
  preparing=true
  background {
   // Reverse the whole clips first so trimming the start keeps what the preview shows.
   // Fit clips to their files' real lengths first: a start past the end of a file fails the export.
   val result=runCatching { ReverseMediaCache.prepare(context,SourceLengths.fit(context,plan.firstProject())).takeForExport(startMs,lengthMs) }
   queue.post {
    preparing=false
    if(this.callback!==callback) return@post
    val base=result.getOrNull()
    if(base==null || base.clips.isEmpty()) {
     finish { it.onError(ExportException.createForUnexpected(IllegalArgumentException(result.exceptionOrNull()?.message ?: "Nothing to export after the start time"))) }
     return@post
    }
    transformer=newTransformer()
    beginIhtx(plan.copy(base=base),outputPath,exportAspectRatio)
    queue.removeCallbacks(progressPoll); queue.post(progressPoll)
   }
  }
 }
 private fun rejectNative(project: EditProject, callback: Callback): Boolean {
  val error = dev.lec.effectapp.effects.NativeCClient.projectError(project) ?: return false
  main.post { callback.onError(ExportException.createForUnexpected(IllegalStateException(error))) }
  return true
 }
 private fun beginIhtx(plan:IhtxPlan,outputPath:String,exportAspectRatio:Float?) {
  val base=plan.base; val total=plan.totalExports
  val token=UUID.randomUUID().toString(); val parent=File(outputPath).parentFile ?: error("Export folder is unavailable")
  val files=List(total) { i -> File(parent,"ihtx-" + token + "-" + i + ".mp4") }
  val fullSize=outputSizeForAspect(videoSize(base.clips.first().sourceUri),exportAspectRatio)
  val outputSize=encoderSettings.maxLongEdge?.let { edge -> fullSize?.let { capLongEdge(it,edge) } } ?: fullSize
  batch=Batch(MutableList(total){base},files,outputPath,ihtx=plan,outputSize=outputSize,overlayAspectRatio=outputSize?.let { it.width.toFloat()/it.height.toFloat() }); startStage(requireNotNull(batch),0)
 }
 fun ihtxStatus():IhtxStatus? {
  val b=batch ?: return null
  val done=b.done
  if(b.concat || done>=b.projects.size) return IhtxStatus(b.projects.size,b.projects.size,true)
  val plan=b.ihtx
  val seconds=if(b.stageStartedAt>0) (android.os.SystemClock.elapsedRealtime()-b.stageStartedAt)/1_000 else 0
  return IhtxStatus(done+1,b.projects.size,false,plan?.presetForPass(done)?.name,plan?.let { done%it.exportsPerPreset+1 },plan?.exportsPerPreset,
   passSeconds=seconds,passProgress=passProgress,retry=b.retries,retryReason=b.lastError.distinct().joinToString(" · ").takeIf { b.retries>0 && it.isNotBlank() })
 }
 fun lastIhtxFailure():IhtxStatus? = failedIhtxStatus
 /** Latest progress (0..100), sampled on the export thread; null when not known. */
 fun progress():Int? = lastProgress
 /** Stops the export without waiting for it (the Transformer is cancelled on its own thread). */
 fun cancel(){
  callback=null; preparing=false; lastProgress=null
  queue.post {
   runCatching { transformer.cancel() }
   batch?.files?.forEach(File::delete); batch=null
   syncSource?.delete(); syncSource=null
   transformer=newTransformer()
  }
 }
 /** Cancels anything running and ends the export thread; the exporter can't be used afterwards. */
 fun release(){ cancel(); queue.post { exportThread.quitSafely() } }
 interface Callback { fun onCompleted(); fun onError(error:ExportException) }
 /** True when [error] came from the native C plug-in worker dying or not answering. */
 private fun isNativeWorkerFailure(error:Throwable):Boolean {
  var cause:Throwable?=error; var depth=0
  while(cause!=null && depth<10) {
   if(cause is android.os.DeadObjectException) return true
   if(cause.message?.contains("native C worker",ignoreCase=true)==true) return true
   cause=cause.cause; depth++
  }
  return false
 }
 /** True while the anti-desync pass is rewriting the finished export. */
 fun syncing():Boolean = syncSource!=null
 /** What anti-desync did to the last export (speed and track lengths), or null when it was off. */
 fun lastSyncNote():String? = syncNote
 /**
  * Ends the export, or with anti-desync on first measures the finished file's tracks: when the
  * picture and sound lengths differ, the picture is re-timed to exactly the sound's length (the
  * sound is copied through untouched), so they start and end together with no drift between.
  */
 private fun finishOrSync(output:String?) {
  if(!antiDesync || output==null) { finish { it.onCompleted() }; return }
  val file=File(output)
  val (audioUs,videoUs)=trackDurationsUs(file)
  fun s(us:Long)=String.format(java.util.Locale.ROOT,"%.3f s",us/1_000_000.0)
  if(audioUs<=0 || videoUs<=0) { syncNote="Anti-desync: nothing to sync (no ${if(audioUs<=0) "sound" else "picture"} track)."; finish { it.onCompleted() }; return }
  val diffUs=videoUs-audioUs
  if(kotlin.math.abs(diffUs)<SYNC_TOLERANCE_US) { syncNote="Anti-desync: already in sync · video ${s(videoUs)}, audio ${s(audioUs)}"; finish { it.onCompleted() }; return }
  // Playing the picture at video/audio speed makes it last exactly as long as the sound.
  val speed=videoUs.toDouble()/audioUs
  if(speed !in MIN_SYNC_SPEED..MAX_SYNC_SPEED) { syncNote="Anti-desync skipped: tracks differ too much to stretch (video ${s(videoUs)}, audio ${s(audioUs)})"; finish { it.onCompleted() }; return }
  val source=File(file.parentFile,"desync-"+UUID.randomUUID()+".mp4")
  if(!file.renameTo(source)) { syncNote="Anti-desync failed: couldn't stage the export."; finish { it.onCompleted() }; return }
  syncNote="Anti-desync · video speed ${String.format(java.util.Locale.ROOT,"%.6f",speed)} · video ${s(videoUs)}, audio ${s(audioUs)}, diff ${String.format(java.util.Locale.ROOT,"%+.3f s",diffUs/1_000_000.0)}"
  syncSource=source
  queue.post { if(syncSource===source && callback!=null) transformer.start(syncComposition(source,speed.toFloat()),output) }
 }
 /** The picture of [source] re-timed by [speed] (re-encoded), with its sound copied as it is. */
 private fun syncComposition(source:File,speed:Float):Composition {
  val uri=Uri.fromFile(source)
  val video=EditedMediaItemSequence.Builder(setOf(androidx.media3.common.C.TRACK_TYPE_VIDEO))
   .addItem(EditedMediaItem.Builder(MediaItem.fromUri(uri)).setRemoveAudio(true).setSpeed(object:androidx.media3.common.audio.SpeedProvider {
    override fun getSpeed(timeUs:Long):Float = speed
    override fun getNextSpeedChangeTimeUs(timeUs:Long):Long = androidx.media3.common.C.TIME_UNSET
   }).build())
   .build()
  val audio=EditedMediaItemSequence.Builder(setOf(androidx.media3.common.C.TRACK_TYPE_AUDIO))
   .addItem(EditedMediaItem.Builder(MediaItem.fromUri(uri)).setRemoveVideo(true).build())
   .build()
  return Composition.Builder(listOf(video,audio)).setTransmuxAudio(true).build()
 }
 private fun startStage(b:Batch,index:Int){
  // A fresh plug-in worker every few passes, so leaked memory can't build up over a long export.
  if(index>0 && index%WORKER_RECYCLE_PASSES==0 && b.retries==0) dev.lec.effectapp.effects.NativeCClient.restartWorker()
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
 private fun startTransformer(b:Batch,index:Int){ b.stageStartedAt=android.os.SystemClock.elapsedRealtime(); transformer.start(ProjectCompositionFactory.create(b.projects[index],resolveBitmap,overlayAspectRatio=b.overlayAspectRatio,durationAnchorMs=b.ihtx?.base?.durationMs,ihtxOutputSize=b.outputSize,outputPresentationSize=b.outputSize,muteBaseAudio=b.ihtx?.mutesBaseAudio(index)==true),b.files[index].absolutePath) }
 /**
  * The priming silence (ms, 0..250) an AAC encoder put in front of a pass's sound when the device
  * doesn't report it for removal: how much longer the sound track is than the length the pass was
  * rendered to. Measured against that length, not the picture track, whose reported length can
  * be a frame short (which would skip a frame of sound every pass and add up over many passes).
  */
 private fun audioLeadMs(file:File,intendedMs:Long):Long {
  val (audioUs,_)=trackDurationsUs(file)
  return if(audioUs<0 || intendedMs<=0) 0 else (audioUs/1_000-intendedMs).coerceIn(0,MAX_AUDIO_LEAD_MS)
 }
 /** (audio, video) track durations of an export file in µs; -1 when a track is missing. */
 private fun trackDurationsUs(file:File):Pair<Long,Long> {
  val extractor=android.media.MediaExtractor()
  return try {
   extractor.setDataSource(file.absolutePath)
   var audioUs=-1L; var videoUs=-1L
   for(i in 0 until extractor.trackCount) {
    val format=extractor.getTrackFormat(i)
    val mime=format.getString(android.media.MediaFormat.KEY_MIME) ?: continue
    if(!format.containsKey(android.media.MediaFormat.KEY_DURATION)) continue
    val duration=format.getLong(android.media.MediaFormat.KEY_DURATION)
    if(mime.startsWith("audio/")) audioUs=maxOf(audioUs,duration)
    if(mime.startsWith("video/")) videoUs=maxOf(videoUs,duration)
   }
   audioUs to videoUs
  } catch (_:Exception) { -1L to -1L } finally { extractor.release() }
 }
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
 /** Fits [size] within [longEdge] px on its long edge (even dimensions); smaller sizes are kept. */
 private fun capLongEdge(size:Size,longEdge:Int):Size {
  val longest=maxOf(size.width,size.height)
  if(longest<=longEdge) return size
  val scale=longEdge.toFloat()/longest
  fun even(value:Float):Int = (((value.roundToInt().coerceAtLeast(2)+1)/2)*2)
  return Size(even(size.width*scale),even(size.height*scale))
 }
 /**
  * An encoder asking for [settings]: KEY_BIT_RATE and KEY_BITRATE_MODE, KEY_I_FRAME_INTERVAL,
  * KEY_MAX_B_FRAMES, KEY_OPERATING_RATE/KEY_PRIORITY and the AAC bitrate. Fallback stays on, so a
  * value the phone's encoder can't do is brought into its range instead of failing the export.
  */
 private fun encoderFactory(settings:ExportEncoderSettings)=androidx.media3.transformer.DefaultEncoderFactory.Builder(context)
  .setRequestedVideoEncoderSettings(
   androidx.media3.transformer.VideoEncoderSettings.Builder()
    .apply {
     settings.videoBitrate?.let { setBitrate(it) }
     setBitrateMode(settings.bitrateMode.mediaCodecValue)
     settings.keyframeIntervalSeconds?.let { setiFrameIntervalSeconds(it) }
     settings.maxBFrames?.takeIf { it>0 }?.let { setMaxBFrames(it) }
     if(settings.encoderSpeed==ExportEncoderSettings.EncoderSpeed.REALTIME) {
      // Priority 0 = real time; the operating rate is left to the encoder.
      setEncoderPerformanceParameters(androidx.media3.transformer.VideoEncoderSettings.RATE_UNSET,0)
     }
    }
    .build(),
  )
  .apply {
   settings.audioBitrate?.let { bitrate ->
    setRequestedAudioEncoderSettings(androidx.media3.transformer.AudioEncoderSettings.Builder().setBitrate(bitrate).build())
   }
  }
  .setEnableFallback(true)
  .build()
 private fun outputSizeForAspect(source:Size?,aspectRatio:Float?):Size? {
  if(source==null || aspectRatio==null) return source
  val targetAspect=aspectRatio.coerceIn(0.1f,10f)
  val longestEdge=maxOf(source.width,source.height).toFloat()
  fun even(value:Float):Int = (((value.roundToInt().coerceAtLeast(2)+1)/2)*2)
  return if(targetAspect >= 1f) Size(even(longestEdge),even(longestEdge/targetAspect)) else Size(even(longestEdge*targetAspect),even(longestEdge))
 }
 /**
  * Joins the passes. Each pass's sound starts with encoder priming and runs that much longer than
  * its picture, so joining files as they are would push the sound later with every pass. Instead
  * the pictures are copied through untouched and each pass's sound is cut to just its content
  * (from after the priming, as long as the picture) and encoded once.
  */
 private fun concatenate(files:List<File>,passMs:Long?):Composition {
  val durations=files.map(::trackDurationsUs)
  if(durations.any { (audioUs,videoUs) -> audioUs<0 || videoUs<=0 }) {
   // A pass without sound or picture: join as before.
   return Composition.Builder(listOf(EditedMediaItemSequence.withAudioAndVideoFrom(files.map { EditedMediaItem.Builder(MediaItem.fromUri(Uri.fromFile(it))).build() })))
    .setTransmuxAudio(true)
    .setTransmuxVideo(true)
    .build()
  }
  val video=EditedMediaItemSequence.Builder(setOf(androidx.media3.common.C.TRACK_TYPE_VIDEO))
   .addItems(files.map { file ->
    // A file's length is its longest track (the sound, with its priming), so the pictures are
    // cut to the pass length too, or each would sit that much apart from the next.
    val builder=MediaItem.Builder().setUri(Uri.fromFile(file))
    if(passMs!=null && passMs>0) builder.setClippingConfiguration(MediaItem.ClippingConfiguration.Builder().setEndPositionMs(passMs).build())
    EditedMediaItem.Builder(builder.build()).setRemoveAudio(true).build()
   })
   .build()
  val audio=EditedMediaItemSequence.Builder(setOf(androidx.media3.common.C.TRACK_TYPE_AUDIO))
   .addItems(files.zip(durations) { file,(audioUs,videoUs) ->
    // Every pass is rendered to the same length; each segment of sound is cut to exactly it.
    val lengthMs=passMs?.takeIf { it>0 } ?: (videoUs/1_000)
    val leadMs=(audioUs/1_000-lengthMs).coerceIn(0,MAX_AUDIO_LEAD_MS)
    val item=MediaItem.Builder()
     .setUri(Uri.fromFile(file))
     .setClippingConfiguration(MediaItem.ClippingConfiguration.Builder()
      .setStartPositionMs(leadMs)
      .setEndPositionMs(leadMs+lengthMs)
      .build())
     .build()
    EditedMediaItem.Builder(item).setRemoveVideo(true).build()
   })
   .build()
  return Composition.Builder(listOf(video,audio))
   .setTransmuxVideo(true)
   .setTransmuxAudio(false)
   .build()
 }
 /** [passSeconds]: time on the current pass; [retry] > 0 when it's being tried again after [retryReason]. */
 data class IhtxStatus(val current:Int,val total:Int,val concatenating:Boolean,val presetName:String?=null,val exportInPreset:Int?=null,val exportsPerPreset:Int?=null,val passSeconds:Long=0,val passProgress:Int?=null,val retry:Int=0,val retryReason:String?=null)
 private data class Batch(val projects:MutableList<EditProject>,val files:List<File>,val output:String,var done:Int=0,var concat:Boolean=false,val ihtx:IhtxPlan?=null,var retries:Int=0,val outputSize:Size?=null,val overlayAspectRatio:Float?=null,var stageStartedAt:Long=0,var lastError:List<String> = emptyList())
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

 private companion object {
  const val PROGRESS_POLL_MS = 200L
  const val MAX_AUDIO_LEAD_MS = 250L
  const val MAX_STAGE_RETRIES = 2
  const val RETRY_COOLDOWN_MS = 150L
  const val MAX_NATIVE_RETRIES = 5
  const val NATIVE_RETRY_COOLDOWN_MS = 1_500L
  const val WORKER_RECYCLE_PASSES = 10
  const val MAX_DELAY_BETWEEN_SAMPLES_MS = 30_000L
  /** Under ~half a frame at 30 fps the tracks count as in sync and the export isn't re-encoded. */
  const val SYNC_TOLERANCE_US = 15_000L
  const val MIN_SYNC_SPEED = 0.5
  const val MAX_SYNC_SPEED = 2.0
 }

}
