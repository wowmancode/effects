package dev.lec.effectapp.effects

import android.content.Context
import android.opengl.GLES20
import androidx.annotation.OptIn
import androidx.media3.common.Effect
import androidx.media3.common.VideoFrameProcessingException
import androidx.media3.common.util.GlProgram
import androidx.media3.common.util.GlUtil
import androidx.media3.common.util.Size
import androidx.media3.common.util.UnstableApi
import androidx.media3.effect.BaseGlShaderProgram
import androidx.media3.effect.GlEffect
import androidx.media3.effect.GlShaderProgram
import kotlin.math.abs
import kotlin.math.cos
import kotlin.math.max
import kotlin.math.min
import kotlin.math.sin

const val DEFAULT_VIDEO_PLUGIN_SOURCE = "red = 1.0 - red;\nblue = 1.0 - blue;"
const val DEFAULT_AUDIO_PLUGIN_SOURCE = "sample = sample * (0.65 + 0.35 * sin(time * 12.0));"

class VideoPluginEffect : LecEffect {
    override val id = "plugin_video"
    override val displayName = "Plug-In · video (C-style)"
    override val category = EffectCategory.EFFECTS
    override val params = emptyList<EffectParam>()
    @OptIn(UnstableApi::class)
    override fun toMediaEffect(values: Map<String, Float>): Effect = videoPluginEffect(DEFAULT_VIDEO_PLUGIN_SOURCE)
}

class AudioPluginEffect : LecEffect {
    override val id = "plugin_audio"
    override val displayName = "Plug-In · audio (C-style)"
    override val category = EffectCategory.AUDIO
    override val params = emptyList<EffectParam>()
    @OptIn(UnstableApi::class)
    override fun toMediaEffect(values: Map<String, Float>): Effect? = null
}

fun validatePluginSource(source: String, audio: Boolean): String? =
    compilePlugin(source, audio).exceptionOrNull()?.message

@OptIn(UnstableApi::class)
fun videoPluginEffect(source: String): Effect {
    val program = compilePlugin(source, audio = false).getOrElse {
        compilePlugin("red = red;", audio = false).getOrThrow()
    }
    return PluginVideoGlEffect(program)
}

internal fun compileAudioPlugin(source: String): PluginProgram =
    compilePlugin(source, audio = true).getOrElse {
        compilePlugin("sample = sample;", audio = true).getOrThrow()
    }

internal data class PluginProgram(val assignments: List<PluginAssignment>) {
    fun evaluate(initial: Map<String, Float>): Map<String, Float> {
        val variables = initial.toMutableMap()
        evaluateInPlace(variables)
        return variables
    }

    fun evaluateInPlace(variables: MutableMap<String, Float>) {
        assignments.forEach { assignment ->
            variables[assignment.target] = assignment.expression.evaluate(variables)
        }
    }

    fun glslStatements(): String = assignments.joinToString("\n") {
        "${it.target} = ${it.expression.toGlsl()};"
    }
}

internal data class PluginAssignment(val target: String, val expression: PluginExpression)

internal sealed interface PluginExpression {
    fun evaluate(variables: Map<String, Float>): Float
    fun toGlsl(): String
}

private data class NumberExpression(val value: Float) : PluginExpression {
    override fun evaluate(variables: Map<String, Float>): Float = value
    override fun toGlsl(): String = if (value % 1f == 0f) "${value.toInt()}.0" else value.toString()
}

private data class VariableExpression(val name: String) : PluginExpression {
    override fun evaluate(variables: Map<String, Float>): Float = variables[name] ?: 0f
    override fun toGlsl(): String = name
}

private data class UnaryExpression(val operator: Char, val value: PluginExpression) : PluginExpression {
    override fun evaluate(variables: Map<String, Float>): Float =
        if (operator == '-') -value.evaluate(variables) else value.evaluate(variables)

    override fun toGlsl(): String = "($operator${value.toGlsl()})"
}

private data class BinaryExpression(
    val left: PluginExpression,
    val operator: Char,
    val right: PluginExpression,
) : PluginExpression {
    override fun evaluate(variables: Map<String, Float>): Float {
        val first = left.evaluate(variables)
        val second = right.evaluate(variables)
        return when (operator) {
            '+' -> first + second
            '-' -> first - second
            '*' -> first * second
            '/' -> if (abs(second) < 0.000001f) 0f else first / second
            else -> 0f
        }
    }

    override fun toGlsl(): String = "(${left.toGlsl()} $operator ${right.toGlsl()})"
}

private data class FunctionExpression(val name: String, val arguments: List<PluginExpression>) : PluginExpression {
    override fun evaluate(variables: Map<String, Float>): Float {
        val values = arguments.map { it.evaluate(variables) }
        return when (name) {
            "sin" -> sin(values[0])
            "cos" -> cos(values[0])
            "abs" -> abs(values[0])
            "min" -> min(values[0], values[1])
            "max" -> max(values[0], values[1])
            "clamp" -> values[0].coerceIn(values[1], values[2])
            "mix" -> values[0] + (values[1] - values[0]) * values[2]
            else -> 0f
        }
    }

    override fun toGlsl(): String = "$name(${arguments.joinToString(", ") { it.toGlsl() }})"
}

private fun compilePlugin(source: String, audio: Boolean): Result<PluginProgram> = runCatching {
    require(source.length <= 4_000) { "Plug-in source is limited to 4,000 characters." }
    val allowedTargets = if (audio) setOf("sample") else setOf("red", "green", "blue", "alpha")
    val allowedVariables = if (audio) {
        setOf("sample", "channel", "time", "sample_rate")
    } else {
        setOf("red", "green", "blue", "alpha", "x", "y", "time")
    }
    val cleaned = source.lineSequence()
        .map { it.substringBefore("//") }
        .joinToString("\n")
    val statements = cleaned.split(';', '\n').map(String::trim).filter(String::isNotEmpty)
    require(statements.isNotEmpty()) { "Add at least one assignment, such as red = 1.0 - red;" }
    require(statements.size <= 24) { "Plug-ins are limited to 24 assignments." }
    val assignments = statements.map { statement ->
        val match = ASSIGNMENT.matchEntire(statement)
            ?: error("Use assignments like red = 1.0 - red;")
        val target = match.groupValues[1]
        require(target in allowedTargets) { "'$target' cannot be written by this plug-in." }
        val expression = ExpressionParser(match.groupValues[2], allowedVariables).parse()
        PluginAssignment(target, expression)
    }
    PluginProgram(assignments)
}

private val ASSIGNMENT = Regex("([A-Za-z_][A-Za-z0-9_]*)\\s*=\\s*(.+)")

private class ExpressionParser(
    private val source: String,
    private val allowedVariables: Set<String>,
) {
    private var index = 0

    fun parse(): PluginExpression {
        val expression = additive()
        whitespace()
        require(index == source.length) { "Unexpected token near '${source.drop(index).take(12)}'." }
        return expression
    }

    private fun additive(): PluginExpression {
        var expression = multiplicative()
        while (true) {
            whitespace()
            val operator = source.getOrNull(index)
            if (operator != '+' && operator != '-') return expression
            index++
            expression = BinaryExpression(expression, operator, multiplicative())
        }
    }

    private fun multiplicative(): PluginExpression {
        var expression = unary()
        while (true) {
            whitespace()
            val operator = source.getOrNull(index)
            if (operator != '*' && operator != '/') return expression
            index++
            expression = BinaryExpression(expression, operator, unary())
        }
    }

    private fun unary(): PluginExpression {
        whitespace()
        val operator = source.getOrNull(index)
        if (operator == '+' || operator == '-') {
            index++
            return UnaryExpression(operator, unary())
        }
        return primary()
    }

    private fun primary(): PluginExpression {
        whitespace()
        val character = source.getOrNull(index) ?: error("Expression ended unexpectedly.")
        if (character == '(') {
            index++
            val expression = additive()
            whitespace()
            require(source.getOrNull(index) == ')') { "Missing closing parenthesis." }
            index++
            return expression
        }
        if (character.isDigit() || character == '.') return number()
        if (character.isLetter() || character == '_') return identifier()
        error("Unsupported character '$character'.")
    }

    private fun number(): PluginExpression {
        val start = index
        while (source.getOrNull(index)?.let { it.isDigit() || it == '.' } == true) index++
        return NumberExpression(source.substring(start, index).toFloatOrNull() ?: error("Invalid number."))
    }

    private fun identifier(): PluginExpression {
        val start = index
        while (source.getOrNull(index)?.let { it.isLetterOrDigit() || it == '_' } == true) index++
        val name = source.substring(start, index)
        whitespace()
        if (source.getOrNull(index) != '(') {
            require(name in allowedVariables) { "Unknown variable '$name'." }
            return VariableExpression(name)
        }
        index++
        val arguments = mutableListOf<PluginExpression>()
        whitespace()
        if (source.getOrNull(index) != ')') {
            while (true) {
                arguments += additive()
                whitespace()
                if (source.getOrNull(index) != ',') break
                index++
            }
        }
        require(source.getOrNull(index) == ')') { "Missing ')' after $name." }
        index++
        val arity = mapOf("sin" to 1, "cos" to 1, "abs" to 1, "min" to 2, "max" to 2, "clamp" to 3, "mix" to 3)
        require(arity[name] == arguments.size) { "Function '$name' has the wrong number of arguments." }
        return FunctionExpression(name, arguments)
    }

    private fun whitespace() {
        while (source.getOrNull(index)?.isWhitespace() == true) index++
    }
}

@OptIn(UnstableApi::class)
private data class PluginVideoGlEffect(val plugin: PluginProgram) : GlEffect {
    override fun toGlShaderProgram(context: Context, useHdr: Boolean): GlShaderProgram =
        PluginVideoShaderProgram(useHdr, plugin)
}

@OptIn(UnstableApi::class)
private class PluginVideoShaderProgram(useHdr: Boolean, plugin: PluginProgram) : BaseGlShaderProgram(useHdr, 1) {
    private val usesTime = plugin.glslStatements().contains(Regex("\\btime\\b"))
    private val program = try {
        GlProgram(VERTEX_SHADER, fragmentShader(plugin))
    } catch (exception: GlUtil.GlException) {
        throw VideoFrameProcessingException(exception)
    }

    override fun configure(inputWidth: Int, inputHeight: Int): Size = Size(inputWidth, inputHeight)

    override fun drawFrame(inputTexId: Int, presentationTimeUs: Long) {
        try {
            program.use()
            program.setSamplerTexIdUniform("uTexSampler", inputTexId, 0)
            if (usesTime) {
                program.setFloatUniform("uTime", presentationTimeUs / 1_000_000f)
            }
            program.setBufferAttribute("aFramePosition", FRAME_VERTICES, 4)
            program.bindAttributesAndUniforms()
            GLES20.glDrawArrays(GLES20.GL_TRIANGLE_FAN, 0, 4)
            GlUtil.checkGlError()
        } catch (exception: GlUtil.GlException) {
            throw VideoFrameProcessingException(exception, presentationTimeUs)
        }
    }

    override fun release() {
        super.release()
        try { program.delete() } catch (exception: GlUtil.GlException) { throw VideoFrameProcessingException(exception) }
    }
}

private fun fragmentShader(plugin: PluginProgram): String = """
    precision highp float;
    uniform sampler2D uTexSampler;
    uniform float uTime;
    varying vec2 vTexSamplingCoord;
    void main() {
      vec2 uv = vTexSamplingCoord;
      vec4 color = texture2D(uTexSampler, uv);
      float red = color.r;
      float green = color.g;
      float blue = color.b;
      float alpha = color.a;
      float x = uv.x;
      float y = uv.y;
      float time = uTime;
      ${plugin.glslStatements()}
      gl_FragColor = clamp(vec4(red, green, blue, alpha), 0.0, 1.0);
    }
""".trimIndent()

private val FRAME_VERTICES = floatArrayOf(-1f, -1f, 0f, 1f, -1f, 1f, 0f, 1f, 1f, 1f, 0f, 1f, 1f, -1f, 0f, 1f)

private const val VERTEX_SHADER = """
    attribute vec4 aFramePosition;
    varying vec2 vTexSamplingCoord;
    void main() {
      gl_Position = aFramePosition;
      vTexSamplingCoord = aFramePosition.xy * 0.5 + 0.5;
    }
"""
