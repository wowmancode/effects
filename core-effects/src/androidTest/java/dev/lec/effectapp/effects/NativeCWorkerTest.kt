package dev.lec.effectapp.effects

import androidx.test.platform.app.InstrumentationRegistry
import org.junit.Assert.*
import org.junit.Before
import org.junit.After
import org.junit.Test

/** Runs the actual Android compiler, private Binder worker, and shared buffers. */
class NativeCWorkerTest {
    @Before fun setup() {
        NativeCClient.initialize(InstrumentationRegistry.getInstrumentation().targetContext)
        NativeCClient.setOnlineMode(false)
    }
    @After fun cleanup() { NativeCClient.setOnlineMode(true); NativeCClient.setOnlineMode(false) }

    @Test fun compilesAndRunsAudioWithMathAllocationAndPersistentState() {
        val code = """
            #include <math.h>
            #include <stdlib.h>
            void lec_audio(float *p, int frames, int channels, int rate, double time, const float c[8], void *state) {
                int *calls = state; ++*calls;
                float *scratch = malloc(frames * channels * sizeof(float));
                for (int i=0; i<frames*channels; ++i) scratch[i] = p[i]*c[0] + sin(time) + (*calls-1)*0.1f;
                for (int i=0; i<frames*channels; ++i) p[i] = scratch[i];
                free(scratch);
            }
        """.trimIndent()
        NativeCClient.compileAndApprove(code, true)
        NativeCClient.open(code, true, 16).use { session ->
            session.buffer.putFloat(0, .5f); session.buffer.putFloat(4, -.5f)
            session.process(1, 2, 48000, 0.0, floatArrayOf(.5f,0f,0f,0f,0f,0f,0f,0f))
            assertEquals(.25f, session.buffer.getFloat(0), .0001f)
            assertEquals(-.25f, session.buffer.getFloat(4), .0001f)
            session.process(1, 2, 48000, 0.0, floatArrayOf(1f,0f,0f,0f,0f,0f,0f,0f))
            assertEquals(.35f, session.buffer.getFloat(0), .0001f)
        }
    }

    @Test fun compilesAndRunsVideoAndStopsItForOnlineMode() {
        val code = """
            void lec_video(unsigned char *p, int width, int height, int stride, double time, const float c[8], void *state) {
                for (int y=0; y<height; ++y) for (int x=0; x<width; ++x)
                    for (int k=0; k<3; ++k) p[y*stride+x*4+k] = 255-p[y*stride+x*4+k];
            }
        """.trimIndent()
        assertFalse(NativeCClient.approved(code + " ", false))
        NativeCClient.compileAndApprove(code, false)
        NativeCClient.open(code, false, 8).use { session ->
            session.buffer.put(byteArrayOf(10,20,30,-1,100,110,120,-56))
            session.process(2, 1, 0, 0.0, FloatArray(8))
            assertEquals(245, session.buffer.get(0).toInt() and 255)
            assertEquals(255, session.buffer.get(3).toInt() and 255)
            assertEquals(155, session.buffer.get(4).toInt() and 255)
            NativeCClient.setOnlineMode(true)
            assertFalse(NativeCClient.canRun(code, false))
            try { session.process(2,1,0,0.0,FloatArray(8)); fail("Online mode allowed execution") }
            catch (expected: IllegalStateException) { assertTrue(expected.message.orEmpty().contains("offline-only")) }
        }
        assertTrue(NativeCClient.approved(code, false))
    }

    @Test fun runawayCodeTimesOutWithoutStoppingTheEditor() {
        val loop = "void lec_audio(float *p, int n, int c, int r, double t, const float v[8], void *s) { for (;;) {} }"
        NativeCClient.compileAndApprove(loop, true)
        NativeCClient.open(loop, true, 4).use { session ->
            try { session.process(1,1,48000,0.0,FloatArray(8)); fail("Runaway code did not time out") }
            catch (expected: IllegalStateException) { assertTrue(expected.message.orEmpty().contains("timed out")) }
        }
        val recovered = "void lec_audio(float *p, int n, int c, int r, double t, const float v[8], void *s) { p[0] = 0.75f; }"
        NativeCClient.compileAndApprove(recovered, true)
        NativeCClient.open(recovered, true, 4).use { session ->
            session.process(1,1,48000,0.0,FloatArray(8))
            assertEquals(.75f, session.buffer.getFloat(0), .0001f)
        }
    }

    @Test fun compileErrorsNeverGrantApproval() {
        val bad = "void lec_audio( { /* Android compiler error */"
        try { NativeCClient.compileAndApprove(bad, true); fail("Invalid C compiled") }
        catch (expected: IllegalStateException) { assertTrue(expected.message.orEmpty().isNotBlank()) }
        assertFalse(NativeCClient.approved(bad, true))
    }
}
