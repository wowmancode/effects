package dev.lec.effectapp

import androidx.compose.foundation.Canvas
import androidx.compose.foundation.gestures.detectDragGestures
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.height
import androidx.compose.foundation.layout.padding
import androidx.compose.runtime.Composable
import androidx.compose.runtime.getValue
import androidx.compose.runtime.mutableFloatStateOf
import androidx.compose.runtime.remember
import androidx.compose.runtime.setValue
import androidx.compose.ui.Modifier
import androidx.compose.ui.geometry.Offset
import androidx.compose.ui.graphics.Brush
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.graphics.drawscope.Stroke
import androidx.compose.ui.input.pointer.pointerInput
import androidx.compose.ui.unit.dp
import kotlin.math.abs
import kotlin.math.max
import kotlin.math.min

@Composable
internal fun HsvColorPicker(color: Color, onChangeFinished: (Color) -> Unit) {
    val initial = remember(color) { rgbToHsv(color) }
    var hue by remember(color) { mutableFloatStateOf(initial[0]) }
    var saturation by remember(color) { mutableFloatStateOf(initial[1]) }
    var brightness by remember(color) { mutableFloatStateOf(initial[2]) }

    Column(Modifier.fillMaxWidth().padding(vertical = 6.dp)) {
        Canvas(
            Modifier.fillMaxWidth().height(150.dp).pointerInput(hue) {
                fun update(position: Offset) {
                    saturation = (position.x / size.width).coerceIn(0f, 1f)
                    brightness = (1f - position.y / size.height).coerceIn(0f, 1f)
                }
                detectDragGestures(
                    onDragStart = { update(it) },
                    onDragEnd = { onChangeFinished(hsvToColor(hue, saturation, brightness)) },
                    onDrag = { change, _ -> change.consume(); update(change.position) },
                )
            },
        ) {
            drawRect(Brush.horizontalGradient(listOf(Color.White, hsvToColor(hue, 1f, 1f))))
            drawRect(Brush.verticalGradient(listOf(Color.Transparent, Color.Black)))
            val marker = Offset(saturation * size.width, (1f - brightness) * size.height)
            drawCircle(Color.Black, 8.dp.toPx(), marker, style = Stroke(4.dp.toPx()))
            drawCircle(Color.White, 8.dp.toPx(), marker, style = Stroke(2.dp.toPx()))
        }
        Canvas(
            Modifier.fillMaxWidth().height(34.dp).padding(top = 8.dp).pointerInput(Unit) {
                fun update(position: Offset) { hue = (position.x / size.width).coerceIn(0f, 1f) * 360f }
                detectDragGestures(
                    onDragStart = { update(it) },
                    onDragEnd = { onChangeFinished(hsvToColor(hue, saturation, brightness)) },
                    onDrag = { change, _ -> change.consume(); update(change.position) },
                )
            },
        ) {
            val colors = listOf(
                Color.Red, Color.Yellow, Color.Green, Color.Cyan,
                Color.Blue, Color.Magenta, Color.Red,
            )
            drawRect(Brush.horizontalGradient(colors))
            val marker = Offset(hue / 360f * size.width, size.height / 2f)
            drawCircle(Color.Black, 7.dp.toPx(), marker, style = Stroke(4.dp.toPx()))
            drawCircle(Color.White, 7.dp.toPx(), marker, style = Stroke(2.dp.toPx()))
        }
    }
}

private fun rgbToHsv(color: Color): FloatArray {
    val maximum = max(color.red, max(color.green, color.blue))
    val minimum = min(color.red, min(color.green, color.blue))
    val delta = maximum - minimum
    val hue = when {
        delta < 0.00001f -> 0f
        maximum == color.red -> 60f * (((color.green - color.blue) / delta) % 6f)
        maximum == color.green -> 60f * ((color.blue - color.red) / delta + 2f)
        else -> 60f * ((color.red - color.green) / delta + 4f)
    }.let { if (it < 0f) it + 360f else it }
    return floatArrayOf(hue, if (maximum == 0f) 0f else delta / maximum, maximum)
}

private fun hsvToColor(hue: Float, saturation: Float, value: Float): Color {
    val chroma = value * saturation
    val section = (hue / 60f) % 6f
    val x = chroma * (1f - abs(section % 2f - 1f))
    val (red, green, blue) = when (section.toInt()) {
        0 -> Triple(chroma, x, 0f)
        1 -> Triple(x, chroma, 0f)
        2 -> Triple(0f, chroma, x)
        3 -> Triple(0f, x, chroma)
        4 -> Triple(x, 0f, chroma)
        else -> Triple(chroma, 0f, x)
    }
    val match = value - chroma
    return Color(red + match, green + match, blue + match)
}
