package dev.lec.effectapp.effects

import androidx.annotation.OptIn
import androidx.media3.common.C
import androidx.media3.common.audio.AudioProcessor
import androidx.media3.common.util.UnstableApi
import dev.lec.effectapp.model.TimelineSegment
import org.junit.Assert.assertEquals
import org.junit.Assert.assertTrue
import org.junit.Test
import java.nio.ByteBuffer
import java.nio.ByteOrder
import kotlin.math.PI
import kotlin.math.sin

/** Split pitch Methods 2 and 3 on a real device or emulator (64-bit ABIs). */
@OptIn(UnstableApi::class)
class SplitPitchMethodsTest {
    private val rate = 48_000
    private val input = ShortArray(rate) { frame ->
        (sin(frame * 2.0 * PI * 330.0 / rate) * 8_000.0 + if (frame % 1_100 == 0) 10_000.0 else 0.0).toInt().toShort()
    }

    private fun segment(algorithm: SplitPitchAlgorithm, dry: Float, wet: Float) = TimelineSegment(
        id = "split",
        effectId = "split_pitch",
        startMs = 0,
        endMs = 10_000,
        params = SplitPitchEffect.encodeVoices(
            listOf(SplitPitchVoice(7f), SplitPitchVoice(-5f, level = 0.5f)),
            mapOf("dry_mix" to dry, "voice_mix" to wet, "pitch_algorithm" to algorithm.storedValue),
        ),
    )

    /** Runs [samples] through an export processor in uneven buffers, including end of stream. */
    private fun export(segment: TimelineSegment, samples: ShortArray): ShortArray {
        val processor = requireNotNull(audioProcessorFor(segment))
        processor.configure(AudioProcessor.AudioFormat(rate, 1, C.ENCODING_PCM_16BIT))
        processor.flush()
        val output = ArrayList<Short>()
        fun drain() {
            val buffer = processor.output.order(ByteOrder.nativeOrder())
            while (buffer.remaining() >= 2) output += buffer.short
        }
        var position = 0
        var piece = 0
        while (position < samples.size) {
            val n = minOf(1 + (piece++ * 7_919) % 2_000, samples.size - position)
            val buffer = ByteBuffer.allocateDirect(n * 2).order(ByteOrder.nativeOrder())
            for (i in 0 until n) buffer.putShort(samples[position + i])
            buffer.flip()
            processor.queueInput(buffer)
            drain()
            position += n
        }
        processor.queueEndOfStream()
        drain()
        assertTrue(processor.isEnded)
        processor.reset()
        return output.toShortArray()
    }

    @Test
    fun methodsTwoAndThreeAreAvailableOn64BitDevices() {
        if (android.os.Process.is64Bit()) {
            assertTrue(SplitPitchAlgorithm.METHOD_2.isAvailable)
            assertTrue(SplitPitchAlgorithm.METHOD_3.isAvailable)
        }
    }

    @Test
    fun exportRemovesTheLatencyAndKeepsTheLength() {
        if (!android.os.Process.is64Bit()) return
        for (algorithm in listOf(SplitPitchAlgorithm.METHOD_2, SplitPitchAlgorithm.METHOD_3)) {
            // Dry only: the output must be the input, aligned and complete.
            val dry = export(segment(algorithm, 1f, 0f), input)
            assertEquals(algorithm.name, input.size, dry.size)
            input.indices.forEach { i ->
                val expected = (input[i] / 32_768f * 32_767f).toInt()
                assertTrue("$algorithm frame $i", kotlin.math.abs(dry[i] - expected) <= 1)
            }
            // Voices: same length, different from the input and from Original.
            val shifted = export(segment(algorithm, 0f, 1f), input)
            val original = export(segment(SplitPitchAlgorithm.ORIGINAL, 0f, 1f), input)
            assertEquals(input.size, shifted.size)
            assertTrue(shifted.indices.any { shifted[it] != input[it] })
            assertTrue(shifted.indices.any { shifted[it] != original[it] })
        }
    }

    @Test
    fun previewStateRunsTheNativeMethod() {
        if (!android.os.Process.is64Bit()) return
        val state = requireNotNull(createAudioDspState(segment(SplitPitchAlgorithm.METHOD_2, 0f, 1f), rate, 1))
        val rendered = input.mapIndexed { frame, sample -> state.process(sample.toInt(), frame * 1_000L / rate, 0) }
        state.close()
        assertTrue(rendered.drop(rate / 2).any { it != 0 })
    }
}
