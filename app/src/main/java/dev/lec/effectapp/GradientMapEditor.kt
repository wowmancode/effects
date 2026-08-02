package dev.lec.effectapp

import android.graphics.Paint
import androidx.compose.foundation.Canvas
import androidx.compose.foundation.background
import androidx.compose.foundation.clickable
import androidx.compose.foundation.gestures.detectDragGestures
import androidx.compose.foundation.gestures.detectTapGestures
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
import androidx.compose.material3.Text
import androidx.compose.material3.TextButton
import androidx.compose.runtime.Composable
import androidx.compose.runtime.getValue
import androidx.compose.runtime.mutableIntStateOf
import androidx.compose.runtime.remember
import androidx.compose.runtime.rememberUpdatedState
import androidx.compose.runtime.setValue
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.geometry.Offset
import androidx.compose.ui.geometry.Size
import androidx.compose.ui.graphics.Brush
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.graphics.drawscope.Stroke
import androidx.compose.ui.graphics.nativeCanvas
import androidx.compose.ui.input.pointer.pointerInput
import androidx.compose.ui.unit.dp
import dev.lec.effectapp.effects.GradientColorStop
import dev.lec.effectapp.effects.GradientMapEffect
import kotlin.math.abs

@Composable
internal fun GradientMapEditor(values: Map<String, Float>, onChange: (Map<String, Float>) -> Unit) {
    val stops = GradientMapEffect.decodeStops(values)
    var expandedPoint by remember { mutableIntStateOf(-1) }
    Text("Color points", style = MaterialTheme.typography.titleSmall)
    GradientStopCanvas(stops, onChange)
    Text("Drag a numbered point to move it. Double-tap the gradient to add a point there.")
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
                onChange(GradientMapEffect.encodeStops(moveGradientStop(stops, index, value)))
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
private fun GradientStopCanvas(
    stops: List<GradientColorStop>,
    onChange: (Map<String, Float>) -> Unit,
) {
    val latestStops by rememberUpdatedState(stops)
    val latestOnChange by rememberUpdatedState(onChange)
    val gradientColors = stops.map { stop ->
        stop.position to Color(stop.red, stop.green, stop.blue, stop.alpha)
    }.toTypedArray()

    Canvas(
        Modifier
            .fillMaxWidth()
            .height(62.dp)
            .pointerInput(Unit) {
                detectTapGestures(
                    onDoubleTap = { offset ->
                        val current = latestStops
                        if (current.size < GradientMapEffect.MAX_STOPS) {
                            val position = (offset.x / size.width.toFloat().coerceAtLeast(1f)).coerceIn(0f, 1f)
                            latestOnChange(GradientMapEffect.encodeStops(addGradientStopAt(current, position)))
                        }
                    },
                )
            }
            .pointerInput(Unit) {
                var draggedPosition = Float.NaN
                detectDragGestures(
                    onDragStart = { offset ->
                        val current = latestStops
                        val width = size.width.toFloat().coerceAtLeast(1f)
                        val nearest = current.minByOrNull { abs(it.position * width - offset.x) }
                        draggedPosition = nearest?.takeIf {
                            abs(it.position * width - offset.x) <= 24.dp.toPx()
                        }?.position ?: Float.NaN
                    },
                    onDragEnd = { draggedPosition = Float.NaN },
                    onDragCancel = { draggedPosition = Float.NaN },
                ) { change, _ ->
                    if (!draggedPosition.isNaN()) {
                        change.consume()
                        val current = latestStops
                        val index = current.indices.minByOrNull { abs(current[it].position - draggedPosition) }
                        if (index != null) {
                            val position = (change.position.x / size.width.toFloat().coerceAtLeast(1f)).coerceIn(0f, 1f)
                            val moved = moveGradientStop(current, index, position)
                            draggedPosition = moved[index].position
                            latestOnChange(GradientMapEffect.encodeStops(moved))
                        }
                    }
                }
            },
    ) {
        val barTop = 30.dp.toPx()
        val markerY = 14.dp.toPx()
        val markerRadius = 12.dp.toPx()
        drawRect(
            brush = Brush.horizontalGradient(*gradientColors),
            topLeft = Offset(0f, barTop),
            size = Size(size.width, size.height - barTop),
        )
        val numberPaint = Paint(Paint.ANTI_ALIAS_FLAG).apply {
            color = android.graphics.Color.WHITE
            textAlign = Paint.Align.CENTER
            textSize = 11.dp.toPx()
            isFakeBoldText = true
        }
        stops.forEachIndexed { index, stop ->
            val x = stop.position * size.width
            val markerX = x.coerceIn(markerRadius, size.width - markerRadius)
            drawLine(
                color = Color.White.copy(alpha = 0.8f),
                start = Offset(markerX, markerY + markerRadius),
                end = Offset(x, barTop),
                strokeWidth = 1.dp.toPx(),
            )
            drawCircle(Color.Black, markerRadius, Offset(markerX, markerY))
            drawCircle(
                Color(stop.red, stop.green, stop.blue, stop.alpha),
                markerRadius - 2.dp.toPx(),
                Offset(markerX, markerY),
            )
            drawCircle(Color.White, markerRadius, Offset(markerX, markerY), style = Stroke(1.dp.toPx()))
            drawContext.canvas.nativeCanvas.drawText(
                (index + 1).toString(),
                markerX,
                markerY - (numberPaint.ascent() + numberPaint.descent()) / 2f,
                numberPaint,
            )
        }
    }
}


@Composable
private fun GradientStopSlider(label: String, value: Float, onChange: (Float) -> Unit) {
    ParameterSlider(label, value, 0f..1f, onChange)
}

private fun List<GradientColorStop>.replaced(index: Int, value: GradientColorStop): List<GradientColorStop> =
    mapIndexed { current, stop -> if (current == index) value else stop }

private fun moveGradientStop(
    stops: List<GradientColorStop>,
    index: Int,
    requestedPosition: Float,
): List<GradientColorStop> {
    if (index !in stops.indices) return stops
    val minimum = if (index == 0) 0f else stops[index - 1].position + MIN_STOP_GAP
    val maximum = if (index == stops.lastIndex) 1f else stops[index + 1].position - MIN_STOP_GAP
    val position = if (minimum <= maximum) requestedPosition.coerceIn(minimum, maximum) else stops[index].position
    return stops.replaced(index, stops[index].copy(position = position))
}

private fun addGradientStopAt(
    stops: List<GradientColorStop>,
    requestedPosition: Float,
): List<GradientColorStop> {
    if (stops.size >= GradientMapEffect.MAX_STOPS) return stops
    val sorted = stops.sortedBy(GradientColorStop::position)
    val requested = requestedPosition.coerceIn(0f, 1f)
    val candidates = buildList {
        add(requested)
        repeat((1f / MIN_STOP_GAP).toInt()) { step ->
            add(requested + (step + 1) * MIN_STOP_GAP)
            add(requested - (step + 1) * MIN_STOP_GAP)
        }
    }
    val position = candidates.firstOrNull { candidate ->
        candidate in 0f..1f && sorted.none { abs(it.position - candidate) < MIN_STOP_GAP }
    } ?: return stops
    val rightIndex = sorted.indexOfFirst { it.position >= position }
    val left = sorted.getOrElse((rightIndex - 1).coerceAtLeast(0)) { sorted.first() }
    val right = sorted.getOrElse(rightIndex) { sorted.last() }
    val blend = if (right.position > left.position) {
        ((position - left.position) / (right.position - left.position)).coerceIn(0f, 1f)
    } else 0f
    fun interpolate(start: Float, end: Float): Float = start + (end - start) * blend
    return (sorted + GradientColorStop(
        position = position,
        red = interpolate(left.red, right.red),
        green = interpolate(left.green, right.green),
        blue = interpolate(left.blue, right.blue),
        alpha = interpolate(left.alpha, right.alpha),
    )).sortedBy(GradientColorStop::position)
}

private fun addGradientStop(stops: List<GradientColorStop>): List<GradientColorStop> {
    if (stops.size >= GradientMapEffect.MAX_STOPS) return stops
    val sorted = stops.sortedBy(GradientColorStop::position)
    val gap = sorted.zipWithNext().maxByOrNull { (left, right) -> right.position - left.position }
    val left = gap?.first ?: GradientMapEffect.defaultStops.first()
    val right = gap?.second ?: GradientMapEffect.defaultStops.last()
    return addGradientStopAt(sorted, (left.position + right.position) / 2f)
}

private const val MIN_STOP_GAP = 0.002f
