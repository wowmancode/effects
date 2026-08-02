package dev.lec.effectapp

import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.material3.MaterialTheme
import androidx.compose.material3.OutlinedButton
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.ui.Modifier
import dev.lec.effectapp.effects.EffectCategory
import dev.lec.effectapp.effects.EffectRegistry
import dev.lec.effectapp.model.Clip

@Composable
internal fun AudioEffectStack(viewModel: EditorViewModel, clip: Clip, onAddAudioEffect: (String) -> Unit) {
    Text("${clip.displayName} · audio stack", style = MaterialTheme.typography.titleMedium)
    Text("Every audio effect applies to the entire clip. Add, stack, and reorder as many as you need.")
    OutlinedButton(onClick = { onAddAudioEffect(clip.id) }) { Text("+ Add audio effect") }
    if (clip.audioSegments.isEmpty()) {
        Text("No audio effects yet.")
    } else {
        clip.audioSegments.forEachIndexed { index, segment ->
            val name = EffectRegistry.byId(segment.effectId)?.displayName ?: segment.effectId
            OutlinedButton(
                onClick = { viewModel.selectSegment(clip.id, segment.id, EffectCategory.AUDIO) },
                modifier = Modifier.fillMaxWidth(),
            ) { Text("${index + 1}. $name") }
        }
    }
}
