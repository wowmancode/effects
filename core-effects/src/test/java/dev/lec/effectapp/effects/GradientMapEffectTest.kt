package dev.lec.effectapp.effects

import org.junit.Assert.assertEquals
import org.junit.Assert.assertTrue
import org.junit.Test

class GradientMapEffectTest {
    @Test
    fun emptyValuesStartWithThreeColorStops() {
        val stops = GradientMapEffect.decodeStops(emptyMap())

        assertEquals(3, stops.size)
        assertEquals(listOf(0f, 0.5f, 1f), stops.map { it.position })
    }

    @Test
    fun addedStopsRoundTripInPositionOrder() {
        val stops = GradientMapEffect.defaultStops + GradientColorStop(0.25f, 0.2f, 0.3f, 0.4f)

        val decoded = GradientMapEffect.decodeStops(GradientMapEffect.encodeStops(stops))

        assertEquals(4, decoded.size)
        assertEquals(listOf(0f, 0.25f, 0.5f, 1f), decoded.map { it.position })
        assertTrue(decoded.all { it.red in 0f..1f && it.green in 0f..1f && it.blue in 0f..1f })
    }
}
