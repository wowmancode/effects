package dev.lec.effectapp.online

import dev.lec.effectapp.model.*
import org.junit.Assert.*
import org.junit.Test

class NativePluginSyncTest {
    private val validator = WireValidator(EffectCatalog(setOf("plugin_audio", "plugin_video"), emptyMap()))
    private val clip = Clip("clip", MediaRef.of("a".repeat(64)), "video", trimEndMs = 1_000)

    @Test fun rejectsNativeAudioAndVideoInSnapshotsAndOperationsEvenWhenDisabled() {
        for (audio in listOf(false, true)) for (overlay in listOf(false, true)) {
            val native = TimelineSegment("c", if (audio) "plugin_audio" else "plugin_video", 0, 1_000,
                enabled = false, stringParams = mapOf("language" to NATIVE_C_PLUGIN_LANGUAGE, "source" to "untrusted source"))
            val layer = Overlay("overlay", MediaRef.of("b".repeat(64)), "overlay", endMs = 1_000,
                effectSegments = if (!audio) listOf(native) else emptyList(), audioSegments = if (audio) listOf(native) else emptyList())
            val changed = if (overlay) clip.copy(overlays = listOf(layer)) else clip.copy(
                effectSegments = if (!audio) listOf(native) else emptyList(), audioSegments = if (audio) listOf(native) else emptyList())
            val before = EditProject(clips = listOf(clip))
            val after = before.copy(clips = listOf(changed))
            assertEquals("Native C plug-ins are offline-only.", validator.checkProject(after))
            assertEquals("Native C plug-ins are offline-only.", validator.checkOps(listOf(Op.PutSegment(SegmentList(clip.id, if (overlay) layer.id else null, audio), native))))
            assertNotNull(validator.checkOps(ProjectSync.diff(before, after)))
        }
    }

    @Test fun existingPluginLanguagesRemainAvailable() {
        for (language in listOf("c_style", "glsl")) {
            val plugin = TimelineSegment("c", "plugin_video", 0, 1_000, stringParams = mapOf("language" to language, "source" to "source"))
            assertNull(validator.checkOps(listOf(Op.PutSegment(SegmentList(clip.id), plugin))))
        }
    }
}
