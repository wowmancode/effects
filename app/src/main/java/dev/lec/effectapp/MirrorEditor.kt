package dev.lec.effectapp

import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.Row
import androidx.compose.foundation.layout.RowScope
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.material3.Button
import androidx.compose.material3.OutlinedButton
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.ui.Modifier
import androidx.compose.ui.unit.dp

@Composable
internal fun MirrorEditor(values: Map<String, Float>, onChange: (Map<String, Float>) -> Unit) {
    val selected = (values["source_side"] ?: 0f).toInt().coerceIn(0, 3)
    Text("Choose which half of the video is copied across the center.")
    Column(verticalArrangement = Arrangement.spacedBy(8.dp)) {
        Row(Modifier.fillMaxWidth(), horizontalArrangement = Arrangement.spacedBy(8.dp)) {
            MirrorSideButton("Left side", 0, selected) { onChange(values + ("source_side" to it.toFloat())) }
            MirrorSideButton("Right side", 1, selected) { onChange(values + ("source_side" to it.toFloat())) }
        }
        Row(Modifier.fillMaxWidth(), horizontalArrangement = Arrangement.spacedBy(8.dp)) {
            MirrorSideButton("Top side", 2, selected) { onChange(values + ("source_side" to it.toFloat())) }
            MirrorSideButton("Bottom side", 3, selected) { onChange(values + ("source_side" to it.toFloat())) }
        }
    }
}

@Composable
private fun RowScope.MirrorSideButton(label: String, value: Int, selected: Int, onClick: (Int) -> Unit) {
    if (value == selected) {
        Button(onClick = { onClick(value) }, modifier = Modifier.weight(1f)) { Text(label) }
    } else {
        OutlinedButton(onClick = { onClick(value) }, modifier = Modifier.weight(1f)) { Text(label) }
    }
}
