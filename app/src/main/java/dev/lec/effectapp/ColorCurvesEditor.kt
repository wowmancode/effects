package dev.lec.effectapp

import androidx.compose.foundation.Canvas
import androidx.compose.foundation.background
import androidx.compose.foundation.gestures.detectDragGestures
import androidx.compose.foundation.gestures.detectTapGestures
import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.Row
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.height
import androidx.compose.foundation.layout.padding
import androidx.compose.material3.Button
import androidx.compose.material3.OutlinedButton
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.runtime.getValue
import androidx.compose.runtime.mutableFloatStateOf
import androidx.compose.runtime.mutableStateOf
import androidx.compose.runtime.remember
import androidx.compose.runtime.rememberUpdatedState
import androidx.compose.runtime.setValue
import androidx.compose.ui.Modifier
import androidx.compose.ui.geometry.Offset
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.input.pointer.pointerInput
import androidx.compose.ui.unit.dp
import dev.lec.effectapp.effects.ColorCurvePoint
import dev.lec.effectapp.effects.ColorCurvesEffect
import kotlin.math.hypot

private data class CurveChannel(val id: String, val label: String, val color: Color)

private val curveChannels = listOf(
    CurveChannel("master", "All", Color.White),
    CurveChannel("red", "R", Color(0xFFFF5C69)),
    CurveChannel("green", "G", Color(0xFF55D98B)),
    CurveChannel("blue", "B", Color(0xFF5C9DFF)),
)

@Composable
internal fun ColorCurvesEditor(params: Map<String, Float>, onChange: (Map<String, Float>) -> Unit) {
    var activeChannels by remember { mutableStateOf(setOf("master")) }
    var selectedInput by remember { mutableFloatStateOf(Float.NaN) }
    val latestParams by rememberUpdatedState(params)
    val latestOnChange by rememberUpdatedState(onChange)

    Column(verticalArrangement = Arrangement.spacedBy(8.dp)) {
        Text("Channels · select one or several")
        Row(Modifier.fillMaxWidth(), horizontalArrangement = Arrangement.spacedBy(6.dp)) {
            curveChannels.forEach { channel ->
                val selected = channel.id in activeChannels
                val click = {
                    activeChannels = if (selected && activeChannels.size > 1) {
                        activeChannels - channel.id
                    } else {
                        activeChannels + channel.id
                    }
                }
                if (selected) {
                    Button(onClick = click, modifier = Modifier.weight(1f)) { Text(channel.label) }
                } else {
                    OutlinedButton(onClick = click, modifier = Modifier.weight(1f)) { Text(channel.label) }
                }
            }
        }
        Text("Tap to add a point. Drag a point to reshape every selected channel.")
        Canvas(
            Modifier
                .fillMaxWidth()
                .height(260.dp)
                .background(Color(0xFF111318))
                .padding(8.dp)
                .pointerInput(activeChannels) {
                    detectTapGestures { offset ->
                        val width = size.width.toFloat().coerceAtLeast(1f)
                        val height = size.height.toFloat().coerceAtLeast(1f)
                        val input = (offset.x / width).coerceIn(0f, 1f)
                        val output = (1f - offset.y / height).coerceIn(0f, 1f)
                        val primary = ColorCurvesEffect.decodePoints(latestParams, activeChannels.first())
                        val nearest = primary.minByOrNull { point ->
                            hypot((point.input - input) * width, (point.output - output) * height)
                        }
                        val distance = nearest?.let {
                            hypot((it.input - input) * width, (it.output - output) * height)
                        } ?: Float.MAX_VALUE
                        if (nearest != null && distance <= 32f) {
                            selectedInput = nearest.input
                        } else if (activeChannels.all {
                                ColorCurvesEffect.decodePoints(latestParams, it).size < ColorCurvesEffect.MAX_POINTS
                            }
                        ) {
                            latestOnChange(
                                updateCurveChannels(latestParams, activeChannels) { points ->
                                    (points + ColorCurvePoint(input, output)).sortedBy(ColorCurvePoint::input)
                                },
                            )
                            selectedInput = input
                        }
                    }
                }
                .pointerInput(activeChannels) {
                    detectDragGestures(
                        onDragStart = { offset ->
                            val width = size.width.toFloat().coerceAtLeast(1f)
                            val height = size.height.toFloat().coerceAtLeast(1f)
                            val input = (offset.x / width).coerceIn(0f, 1f)
                            val output = (1f - offset.y / height).coerceIn(0f, 1f)
                            val points = ColorCurvesEffect.decodePoints(latestParams, activeChannels.first())
                            val nearest = points.minByOrNull { point ->
                                hypot((point.input - input) * width, (point.output - output) * height)
                            }
                            selectedInput = nearest?.input ?: Float.NaN
                        },
                    ) { change, _ ->
                        if (selectedInput.isNaN()) return@detectDragGestures
                        change.consume()
                        val input = (change.position.x / size.width.toFloat().coerceAtLeast(1f)).coerceIn(0f, 1f)
                        val output = (1f - change.position.y / size.height.toFloat().coerceAtLeast(1f)).coerceIn(0f, 1f)
                        latestOnChange(
                            updateCurveChannels(latestParams, activeChannels) { points ->
                                moveNearestPoint(points, selectedInput, input, output)
                            },
                        )
                        selectedInput = input
                    }
                },
        ) {
            repeat(5) { index ->
                val fraction = index / 4f
                drawLine(Color(0xFF30343B), Offset(fraction * size.width, 0f), Offset(fraction * size.width, size.height))
                drawLine(Color(0xFF30343B), Offset(0f, fraction * size.height), Offset(size.width, fraction * size.height))
            }
            curveChannels.filter { it.id in activeChannels }.forEach { channel ->
                val points = ColorCurvesEffect.decodePoints(params, channel.id)
                points.zipWithNext().forEach { (left, right) ->
                    drawLine(
                        color = channel.color,
                        start = left.toOffset(size.width, size.height),
                        end = right.toOffset(size.width, size.height),
                        strokeWidth = 5f,
                    )
                }
                points.forEach { point ->
                    val selected = !selectedInput.isNaN() && kotlin.math.abs(point.input - selectedInput) < 0.025f
                    drawCircle(
                        color = channel.color,
                        radius = if (selected) 11f else 7f,
                        center = point.toOffset(size.width, size.height),
                    )
                    drawCircle(
                        color = Color(0xFF111318),
                        radius = if (selected) 5f else 3f,
                        center = point.toOffset(size.width, size.height),
                    )
                }
            }
        }
        val selectedPoint = selectedInput.takeUnless(Float::isNaN)?.let { input ->
            ColorCurvesEffect.decodePoints(params, activeChannels.first()).minByOrNull { point ->
                kotlin.math.abs(point.input - input)
            }
        }
        if (selectedPoint != null) {
            ParameterSlider("Selected point input", selectedPoint.input, 0f..1f) { input ->
                val moved = moveNearestPoint(
                    ColorCurvesEffect.decodePoints(params, activeChannels.first()),
                    selectedInput,
                    input,
                    selectedPoint.output,
                )
                val actualInput = moved.minByOrNull { kotlin.math.abs(it.input - input) }?.input ?: input
                onChange(updateCurveChannels(params, activeChannels) { points ->
                    moveNearestPoint(points, selectedInput, actualInput, selectedPoint.output)
                })
                selectedInput = actualInput
            }
            ParameterSlider("Selected point output", selectedPoint.output, 0f..1f) { output ->
                onChange(updateCurveChannels(params, activeChannels) { points ->
                    moveNearestPoint(points, selectedInput, selectedPoint.input, output)
                })
            }
        }
        Row(Modifier.fillMaxWidth(), horizontalArrangement = Arrangement.spacedBy(8.dp)) {
            OutlinedButton(
                onClick = {
                    if (!selectedInput.isNaN()) {
                        onChange(updateCurveChannels(params, activeChannels) { points -> removeNearestPoint(points, selectedInput) })
                        selectedInput = Float.NaN
                    }
                },
                enabled = !selectedInput.isNaN(),
                modifier = Modifier.weight(1f),
            ) { Text("Delete point") }
            OutlinedButton(
                onClick = {
                    onChange(updateCurveChannels(params, activeChannels) { ColorCurvesEffect.defaultPoints })
                    selectedInput = Float.NaN
                },
                modifier = Modifier.weight(1f),
            ) { Text("Reset selected") }
        }
    }
}

private fun updateCurveChannels(
    params: Map<String, Float>,
    channels: Set<String>,
    transform: (List<ColorCurvePoint>) -> List<ColorCurvePoint>,
): Map<String, Float> = channels.fold(params) { result, channel ->
    result + ColorCurvesEffect.encodePoints(channel, transform(ColorCurvesEffect.decodePoints(params, channel)))
}

private fun moveNearestPoint(
    points: List<ColorCurvePoint>,
    selectedInput: Float,
    input: Float,
    output: Float,
): List<ColorCurvePoint> {
    val index = points.indices.minByOrNull { kotlin.math.abs(points[it].input - selectedInput) } ?: return points
    val constrainedInput = when (index) {
        0 -> 0f
        points.lastIndex -> 1f
        else -> input.coerceIn(points[index - 1].input + 0.002f, points[index + 1].input - 0.002f)
    }
    return points.mapIndexed { pointIndex, point ->
        if (pointIndex == index) ColorCurvePoint(constrainedInput, output) else point
    }
}

private fun removeNearestPoint(points: List<ColorCurvePoint>, selectedInput: Float): List<ColorCurvePoint> {
    if (points.size <= 2) return points
    val index = points.indices.minByOrNull { kotlin.math.abs(points[it].input - selectedInput) } ?: return points
    if (index == 0 || index == points.lastIndex) return points
    return points.filterIndexed { pointIndex, _ -> pointIndex != index }
}

private fun ColorCurvePoint.toOffset(width: Float, height: Float): Offset =
    Offset(input * width, (1f - output) * height)
