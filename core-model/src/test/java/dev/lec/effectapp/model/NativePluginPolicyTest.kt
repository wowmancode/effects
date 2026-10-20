package dev.lec.effectapp.model

import org.junit.Assert.*
import org.junit.Test

class NativePluginPolicyTest {
    private val native = TimelineSegment("c", "plugin_audio", 0, 1_000, stringParams = mapOf("language" to NATIVE_C_PLUGIN_LANGUAGE, "source" to "void lec_audio() {}"), enabled = false)

    @Test fun findsDisabledNativeCodeInBothOverlayStacks() {
        val overlay = Overlay("overlay", "content://media", "media", effectSegments = listOf(native.copy(effectId = "plugin_video")), audioSegments = listOf(native))
        val project = EditProject(clips = listOf(Clip("clip", "content://video", "video", trimEndMs = 1_000, overlays = listOf(overlay))))
        assertTrue(NativePluginPolicy.containsNative(project))
        assertEquals(2, NativePluginPolicy.segments(ProjectJson.decode(ProjectJson.encode(project))).size)
    }

    @Test fun approvalsAreBoundToExactSourceAndKind() {
        val source = "void lec_audio() {}"
        assertEquals(NativePluginPolicy.approvalKey(source, true), NativePluginPolicy.approvalKey(source, true))
        assertNotEquals(NativePluginPolicy.approvalKey(source, true), NativePluginPolicy.approvalKey(source + " ", true))
        assertNotEquals(NativePluginPolicy.approvalKey(source, true), NativePluginPolicy.approvalKey(source, false))
    }

    @Test fun checksStructureWithoutExecutingImportedCode() {
        assertNull(NativePluginPolicy.validateSource("void lec_audio() { for (;;) {} }", true))
        assertNotNull(NativePluginPolicy.validateSource("void lec_audio() {}", false))
        assertNotNull(NativePluginPolicy.validateSource("void lec_video() {}\u0000", false))
        assertNotNull(NativePluginPolicy.validateSource(" ".repeat(NativePluginPolicy.MAX_SOURCE_CHARS + 1), false))
    }
}
