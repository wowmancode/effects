package dev.lec.effectapp.model

import org.junit.Assert.assertEquals
import org.junit.Assert.assertNull
import org.junit.Assert.assertThrows
import org.junit.Assert.assertTrue
import org.junit.Test

class IhtxPatternTest {
    @Test
    fun directionsStayInsideTheGrid() {
        val topLeft = IhtxGridCell(0, 0)
        assertNull(topLeft.move(IhtxDirection.UP, 3))
        assertNull(topLeft.move(IhtxDirection.LEFT, 3))
        assertEquals(IhtxGridCell(1, 0), topLeft.move(IhtxDirection.DOWN, 3))
        assertEquals(IhtxGridCell(0, 1), topLeft.move(IhtxDirection.RIGHT, 3))
        assertNull(IhtxGridCell(2, 2).move(IhtxDirection.RIGHT, 3))
        assertNull(IhtxGridCell(2, 2).move(IhtxDirection.DOWN, 3))
    }

    @Test
    fun everyBuiltInPatternCoversEveryCellExactlyOnce() {
        for (size in listOf(1, 2, 3, 4, 16)) {
            val allCells = IhtxPatternKind.ROWS.cells(size).toSet()
            for (kind in IhtxPatternKind.entries) {
                val cells = kind.cells(size)
                assertEquals("${kind.label} at size $size", size * size, cells.size)
                assertEquals(allCells, cells.toSet())
            }
        }
    }

    @Test
    fun snakeAndSpiralMoveOnlyToAdjacentCells() {
        for (kind in listOf(IhtxPatternKind.SNAKE, IhtxPatternKind.SPIRAL)) {
            for (size in listOf(2, 3, 4, 16)) {
                kind.cells(size).zipWithNext().forEach { (a, b) ->
                    assertEquals(1, kotlin.math.abs(a.row - b.row) + kotlin.math.abs(a.column - b.column))
                }
            }
        }
        assertEquals(
            listOf(IhtxGridCell(0, 0), IhtxGridCell(0, 1), IhtxGridCell(1, 1), IhtxGridCell(1, 0)),
            IhtxPatternKind.SNAKE.cells(2),
        )
    }

    @Test
    fun multipleNamedPatternsKeepTheirOwnGridAndOrderAcrossRestarts() {
        val patterns = listOf(
            IhtxOverlayPattern("one", "Corners", 3, listOf(IhtxGridCell(0, 0), IhtxGridCell(2, 2))),
            IhtxOverlayPattern("two", "Snake", 2, IhtxPatternKind.SNAKE.cells(2)),
        )
        assertEquals(patterns, IhtxPatternLibraryJson.decode(IhtxPatternLibraryJson.encode(patterns)))
        assertTrue(IhtxPatternLibraryJson.decode("[]").isEmpty())
    }

    @Test
    fun invalidSavedPatternsAreRejected() {
        assertThrows(IllegalArgumentException::class.java) { IhtxPatternKind.ROWS.cells(0) }
        assertThrows(IllegalArgumentException::class.java) { IhtxPatternKind.SNAKE.cells(17) }
        assertThrows(IllegalArgumentException::class.java) { IhtxOverlayPattern("id", "Empty", 2, emptyList()) }
        assertThrows(IllegalArgumentException::class.java) {
            IhtxOverlayPattern("id", "Outside", 2, listOf(IhtxGridCell(2, 0)))
        }
    }
}
