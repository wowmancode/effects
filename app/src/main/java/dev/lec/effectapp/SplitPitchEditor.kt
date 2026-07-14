package dev.lec.effectapp

import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.Row
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.padding
import androidx.compose.material3.MaterialTheme
import androidx.compose.material3.OutlinedButton
import androidx.compose.material3.Slider
import androidx.compose.material3.Text
import androidx.compose.material3.TextButton
import androidx.compose.runtime.Composable
import androidx.compose.runtime.getValue
import androidx.compose.runtime.mutableFloatStateOf
import androidx.compose.runtime.remember
import androidx.compose.runtime.setValue
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.unit.dp
import dev.lec.effectapp.effects.SplitPitchEffect
import dev.lec.effectapp.effects.SplitPitchVoice

@Composable
internal fun SplitPitchEditor(values: Map<String, Float>, onChange: (Map<String, Float>) -> Unit) {
    val voices = SplitPitchEffect.decodeVoices(values)
    Text("Pitch voices", style = MaterialTheme.typography.titleSmall)
    Text("Each voice is a separate copy of the clip audio. Add intervals to build chords.")

    voices.forEachIndexed { index, voice ->
        Column(Modifier.fillMaxWidth().padding(top = 10.dp)) {
            Row(
                Modifier.fillMaxWidth(),
                horizontalArrangement = Arrangement.spacedBy(8.dp),
                verticalAlignment = Alignment.CenterVertically,
            ) {
                Text("Voice ${index + 1}", Modifier.weight(1f), style = MaterialTheme.typography.titleSmall)
                TextButton(
                    onClick = {
                        onChange(SplitPitchEffect.encodeVoices(voices.filterIndexed { i, _ -> i != index }, values))
                    },
                    enabled = voices.size > 1,
                ) { Text("Remove") }
            }
            VoiceSlider("Pitch", voice.semitones, -12f..12f, " semitones") { semitones ->
                onChange(SplitPitchEffect.encodeVoices(voices.replaced(index, voice.copy(semitones = semitones)), values))
            }
            VoiceSlider("Level", voice.level, 0f..1f) { level ->
                onChange(SplitPitchEffect.encodeVoices(voices.replaced(index, voice.copy(level = level)), values))
            }
        }
    }

    OutlinedButton(
        onClick = {
            val interval = nextInterval(voices.size)
            onChange(SplitPitchEffect.encodeVoices(voices + SplitPitchVoice(interval), values))
        },
        enabled = voices.size < SplitPitchEffect.MAX_VOICES,
        modifier = Modifier.fillMaxWidth().padding(top = 8.dp),
    ) { Text("+ Add pitch voice (${voices.size}/${SplitPitchEffect.MAX_VOICES})") }

    VoiceSlider("Original voice", values["dry_mix"] ?: 0.2f, 0f..1f) {
        onChange(values + ("dry_mix" to it))
    }
    VoiceSlider("All pitch voices", values["voice_mix"] ?: 0.8f, 0f..1f) {
        onChange(values + ("voice_mix" to it))
    }
}

@Composable
private fun VoiceSlider(
    label: String,
    value: Float,
    range: ClosedFloatingPointRange<Float>,
    suffix: String = "",
    onChange: (Float) -> Unit,
) {
    var local by remember(value, range.start, range.endInclusive) { mutableFloatStateOf(value) }
    Text("$label: ${"%.2f".format(local)}$suffix")
    Slider(
        value = local.coerceIn(range.start, range.endInclusive),
        onValueChange = { local = it },
        onValueChangeFinished = { onChange(local) },
        valueRange = range,
    )
}

private fun List<SplitPitchVoice>.replaced(index: Int, value: SplitPitchVoice): List<SplitPitchVoice> =
    mapIndexed { current, voice -> if (current == index) value else voice }

private fun nextInterval(existingCount: Int): Float {
    val distance = existingCount / 2 + 1
    return if (existingCount % 2 == 0) -distance.toFloat() else distance.toFloat()
}
