package dev.lec.effectapp

import androidx.compose.foundation.background
import androidx.compose.foundation.clickable
import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Box
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.Row
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.height
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.layout.size
import androidx.compose.material3.MaterialTheme
import androidx.compose.material3.OutlinedButton
import androidx.compose.material3.Slider
import androidx.compose.material3.Text
import androidx.compose.material3.TextButton
import androidx.compose.runtime.Composable
import androidx.compose.runtime.getValue
import androidx.compose.runtime.mutableFloatStateOf
import androidx.compose.runtime.mutableIntStateOf
import androidx.compose.runtime.remember
import androidx.compose.runtime.setValue
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.graphics.Brush
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.unit.dp
import dev.lec.effectapp.effects.GradientColorStop
import dev.lec.effectapp.effects.GradientMapEffect

@Composable
internal fun GradientMapEditor(values: Map<String, Float>, onChange: (Map<String, Float>) -> Unit) {
    val stops = GradientMapEffect.decodeStops(values)
    var expandedPoint by remember { mutableIntStateOf(-1) }
    val gradientColors = stops.map { stop ->
        stop.position to Color(stop.red, stop.green, stop.blue, stop.alpha)
    }.toTypedArray()

    Text("Color points", style = MaterialTheme.typography.titleSmall)
    Box(
        Modifier.fillMaxWidth().height(30.dp).padding(vertical = 4.dp)
            .background(Brush.horizontalGradient(*gradientColors)),
    )
    Text("Maps the darkest pixels on the left to the brightest pixels on the right.")
    Text("Alpha controls the mapped color's opacity without making the video frame transparent.")

    stops.forEachIndexed { index, stop ->
        Column(Modifier.fillMaxWidth().padding(top = 10.dp)) {
            Row(
                Modifier.fillMaxWidth(),
                horizontalArrangement = Arrangement.spacedBy(8.dp),
                verticalAlignment = Alignment.CenterVertically,
            ) {
                Box(
                    Modifier.size(32.dp).background(Color(stop.red, stop.green, stop.blue, stop.alpha)).clickable {
                        expandedPoint = if (expandedPoint == index) -1 else index
                    },
                )
                Text("Point ${index + 1}", Modifier.weight(1f), style = MaterialTheme.typography.titleSmall)
                TextButton(onClick = { expandedPoint = if (expandedPoint == index) -1 else index }) {
                    Text(if (expandedPoint == index) "Close picker" else "Pick color")
                }
                TextButton(
                    onClick = { onChange(GradientMapEffect.encodeStops(stops.filterIndexed { i, _ -> i != index })) },
                    enabled = stops.size > 2,
                ) { Text("Remove") }
            }
            if (expandedPoint == index) {
                HsvColorPicker(Color(stop.red, stop.green, stop.blue)) { color ->
                    onChange(
                        GradientMapEffect.encodeStops(
                            stops.replaced(index, stop.copy(red = color.red, green = color.green, blue = color.blue)),
                        ),
                    )
                }
            }
            GradientStopSlider("Position", stop.position) { value ->
                onChange(GradientMapEffect.encodeStops(stops.replaced(index, stop.copy(position = value))))
            }
            GradientStopSlider("Red", stop.red) { value ->
                onChange(GradientMapEffect.encodeStops(stops.replaced(index, stop.copy(red = value))))
            }
            GradientStopSlider("Green", stop.green) { value ->
                onChange(GradientMapEffect.encodeStops(stops.replaced(index, stop.copy(green = value))))
            }
            GradientStopSlider("Blue", stop.blue) { value ->
                onChange(GradientMapEffect.encodeStops(stops.replaced(index, stop.copy(blue = value))))
            }
            GradientStopSlider("Alpha", stop.alpha) { value ->
                onChange(GradientMapEffect.encodeStops(stops.replaced(index, stop.copy(alpha = value))))
            }
        }
    }

    OutlinedButton(
        onClick = { onChange(GradientMapEffect.encodeStops(addGradientStop(stops))) },
        enabled = stops.size < GradientMapEffect.MAX_STOPS,
        modifier = Modifier.fillMaxWidth().padding(top = 8.dp),
    ) { Text("+ Add color point (${stops.size}/${GradientMapEffect.MAX_STOPS})") }
}

@Composable
private fun GradientStopSlider(label: String, value: Float, onChange: (Float) -> Unit) {
    var sliderValue by remember(value) { mutableFloatStateOf(value) }
    Text("$label: ${"%.2f".format(sliderValue)}")
    Slider(
        value = sliderValue.coerceIn(0f, 1f),
        onValueChange = { sliderValue = it },
        onValueChangeFinished = { onChange(sliderValue) },
        valueRange = 0f..1f,
    )
}

private fun List<GradientColorStop>.replaced(index: Int, value: GradientColorStop): List<GradientColorStop> =
    mapIndexed { current, stop -> if (current == index) value else stop }

private fun addGradientStop(stops: List<GradientColorStop>): List<GradientColorStop> {
    if (stops.size >= GradientMapEffect.MAX_STOPS) return stops
    val sorted = stops.sortedBy(GradientColorStop::position)
    val gap = sorted.zipWithNext().maxByOrNull { (left, right) -> right.position - left.position }
    val left = gap?.first ?: GradientMapEffect.defaultStops.first()
    val right = gap?.second ?: GradientMapEffect.defaultStops.last()
    return sorted + GradientColorStop(
        position = (left.position + right.position) / 2f,
        red = (left.red + right.red) / 2f,
        green = (left.green + right.green) / 2f,
        blue = (left.blue + right.blue) / 2f,
        alpha = (left.alpha + right.alpha) / 2f,
    )
}
