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
import kotlin.math.floor
import kotlin.math.max
import kotlin.math.min
import kotlin.math.pow
import kotlin.math.sin
import kotlin.math.sqrt

const val DEFAULT_VIDEO_PLUGIN_SOURCE = "red = 1.0 - red;\nblue = 1.0 - blue;"
const val DEFAULT_AUDIO_PLUGIN_SOURCE = "sample = sample * (0.65 + 0.35 * sin(time * 12.0));"

class VideoPluginEffect : LecEffect {
    override val id = "plugin_video"
    override val displayName = "Plug-In · video (C-style)"
    override val category = EffectCategory.EFFECTS
    override val params = pluginControlParams()
    @OptIn(UnstableApi::class)
    override fun toMediaEffect(values: Map<String, Float>): Effect =
        videoPluginEffect(DEFAULT_VIDEO_PLUGIN_SOURCE, values)
}

class AudioPluginEffect : LecEffect {
    override val id = "plugin_audio"
    override val displayName = "Plug-In · audio (C-style)"
    override val category = EffectCategory.AUDIO
    override val params = pluginControlParams()
    @OptIn(UnstableApi::class)
    override fun toMediaEffect(values: Map<String, Float>): Effect? = null
}

private fun pluginControlParams(): List<EffectParam> = (1..8).map { index ->
    EffectParam("control$index", "Control $index", -2f, 2f, if (index == 1) 1f else 0f)
}

fun validatePluginSource(source: String, audio: Boolean): String? =
    compilePlugin(source, audio).exceptionOrNull()?.message

@OptIn(UnstableApi::class)
fun videoPluginEffect(source: String, controls: Map<String, Float> = emptyMap()): Effect {
    val program = compilePlugin(source, audio = false).getOrElse {
        compilePlugin("red = red;", audio = false).getOrThrow()
    }
    return PluginVideoGlEffect(program, controls)
}

internal fun compileAudioPlugin(source: String): PluginProgram =
    compilePlugin(source, audio = true).getOrElse {
        compilePlugin("sample = sample;", audio = true).getOrThrow()
    }

internal data class PluginProgram(val assignments: List<PluginAssignment>) {
    fun evaluate(initial: Map<String, Float>, runtime: PluginRuntime? = null): Map<String, Float> {
        val variables = initial.toMutableMap()
        evaluateInPlace(variables, runtime)
        return variables
    }

    fun evaluateInPlace(variables: MutableMap<String, Float>, runtime: PluginRuntime? = null) {
        assignments.forEach { assignment ->
            variables[assignment.target] = assignment.expression.evaluate(variables, runtime)
        }
    }

    fun glslStatements(): String = assignments.joinToString("\n") {
        "${it.target} = ${it.expression.toGlsl()};"
    }
}

internal fun interface PluginRuntime {
    fun call(name: String, arguments: List<Float>): Float?
}

internal data class PluginAssignment(val target: String, val expression: PluginExpression)

internal sealed interface PluginExpression {
    fun evaluate(variables: Map<String, Float>, runtime: PluginRuntime?): Float
    fun toGlsl(): String
}

private data class NumberExpression(val value: Float) : PluginExpression {
    override fun evaluate(variables: Map<String, Float>, runtime: PluginRuntime?): Float = value
    override fun toGlsl(): String = if (value % 1f == 0f) "${value.toInt()}.0" else value.toString()
}

private data class VariableExpression(val name: String) : PluginExpression {
    override fun evaluate(variables: Map<String, Float>, runtime: PluginRuntime?): Float = variables[name] ?: 0f
    override fun toGlsl(): String = name
}

private data class UnaryExpression(val operator: Char, val value: PluginExpression) : PluginExpression {
    override fun evaluate(variables: Map<String, Float>, runtime: PluginRuntime?): Float =
        if (operator == '-') -value.evaluate(variables, runtime) else value.evaluate(variables, runtime)

    override fun toGlsl(): String = "($operator${value.toGlsl()})"
}

private data class BinaryExpression(
    val left: PluginExpression,
    val operator: Char,
    val right: PluginExpression,
) : PluginExpression {
    override fun evaluate(variables: Map<String, Float>, runtime: PluginRuntime?): Float {
        val first = left.evaluate(variables, runtime)
        val second = right.evaluate(variables, runtime)
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
    override fun evaluate(variables: Map<String, Float>, runtime: PluginRuntime?): Float {
        val values = arguments.map { it.evaluate(variables, runtime) }
        runtime?.call(name, values)?.let { return it }
        return builtinFunction(name, values)
    }

    override fun toGlsl(): String {
        val values = arguments.map { it.toGlsl() }
        return when (name) {
            "sample_red" -> "texture2D(uTexSampler, vec2(${values[0]}, ${values[1]})).r"
            "sample_green" -> "texture2D(uTexSampler, vec2(${values[0]}, ${values[1]})).g"
            "sample_blue" -> "texture2D(uTexSampler, vec2(${values[0]}, ${values[1]})).b"
            "sample_alpha" -> "texture2D(uTexSampler, vec2(${values[0]}, ${values[1]})).a"
            "offset_red" -> "texture2D(uTexSampler, vec2(x + ${values[0]}, y + ${values[1]})).r"
            "offset_green" -> "texture2D(uTexSampler, vec2(x + ${values[0]}, y + ${values[1]})).g"
            "offset_blue" -> "texture2D(uTexSampler, vec2(x + ${values[0]}, y + ${values[1]})).b"
            "offset_alpha" -> "texture2D(uTexSampler, vec2(x + ${values[0]}, y + ${values[1]})).a"
            "mirror" -> "abs(fract(${values[0]} * 0.5) * 2.0 - 1.0)"
            "pixelate" -> "(floor(${values[0]} / max(abs(${values[1]}), 0.0001)) * max(abs(${values[1]}), 0.0001))"
            "blend_difference" -> "mix(${values[0]}, abs(${values[0]} - ${values[1]}), clamp(${values[2]}, 0.0, 1.0))"
            "blend_multiply" -> "mix(${values[0]}, ${values[0]} * ${values[1]}, clamp(${values[2]}, 0.0, 1.0))"
            "blend_screen" -> "mix(${values[0]}, 1.0 - (1.0 - ${values[0]}) * (1.0 - ${values[1]}), clamp(${values[2]}, 0.0, 1.0))"
            "blend_overlay" -> "mix(${values[0]}, (${values[0]} < 0.5 ? 2.0 * ${values[0]} * ${values[1]} : 1.0 - 2.0 * (1.0 - ${values[0]}) * (1.0 - ${values[1]})), clamp(${values[2]}, 0.0, 1.0))"
            "blend_add" -> "mix(${values[0]}, min(1.0, ${values[0]} + ${values[1]}), clamp(${values[2]}, 0.0, 1.0))"
            "blend_subtract" -> "mix(${values[0]}, max(0.0, ${values[0]} - ${values[1]}), clamp(${values[2]}, 0.0, 1.0))"
            "blend_lighten" -> "mix(${values[0]}, max(${values[0]}, ${values[1]}), clamp(${values[2]}, 0.0, 1.0))"
            "blend_darken" -> "mix(${values[0]}, min(${values[0]}, ${values[1]}), clamp(${values[2]}, 0.0, 1.0))"
            else -> "$name(${values.joinToString(", ")})"
        }
    }
}

private fun builtinFunction(name: String, values: List<Float>): Float = when (name) {
    "sin" -> sin(values[0])
    "cos" -> cos(values[0])
    "abs" -> abs(values[0])
    "floor" -> floor(values[0]).toFloat()
    "fract" -> values[0] - floor(values[0])
    "sqrt" -> sqrt(values[0].coerceAtLeast(0f))
    "pow" -> values[0].toDouble().pow(values[1].toDouble()).toFloat()
    "mod" -> if (abs(values[1]) < 0.000001f) 0f else values[0] % values[1]
    "min" -> min(values[0], values[1])
    "max" -> max(values[0], values[1])
    "clamp" -> values[0].coerceIn(values[1], values[2])
    "mix" -> values[0] + (values[1] - values[0]) * values[2]
    "step" -> if (values[1] < values[0]) 0f else 1f
    "smoothstep" -> {
        val denominator = values[1] - values[0]
        val amount = if (abs(denominator) < 0.000001f) 0f
        else ((values[2] - values[0]) / denominator).coerceIn(0f, 1f)
        amount * amount * (3f - 2f * amount)
    }
    "mirror" -> abs((values[0] * 0.5f - floor(values[0] * 0.5f)) * 2f - 1f)
    "pixelate" -> {
        val size = abs(values[1]).coerceAtLeast(0.0001f)
        floor(values[0] / size) * size
    }
    "blend_difference" -> blend(values, abs(values[0] - values[1]))
    "blend_multiply" -> blend(values, values[0] * values[1])
    "blend_screen" -> blend(values, 1f - (1f - values[0]) * (1f - values[1]))
    "blend_overlay" -> blend(values, if (values[0] < 0.5f) 2f * values[0] * values[1] else 1f - 2f * (1f - values[0]) * (1f - values[1]))
    "blend_add" -> blend(values, min(1f, values[0] + values[1]))
    "blend_subtract" -> blend(values, max(0f, values[0] - values[1]))
    "blend_lighten" -> blend(values, max(values[0], values[1]))
    "blend_darken" -> blend(values, min(values[0], values[1]))
    else -> 0f
}

private fun blend(values: List<Float>, blended: Float): Float =
    values[0] + (blended - values[0]) * values[2].coerceIn(0f, 1f)

private val COMMON_FUNCTIONS = mapOf(
    "sin" to 1, "cos" to 1, "abs" to 1, "floor" to 1, "fract" to 1, "sqrt" to 1,
    "pow" to 2, "mod" to 2, "min" to 2, "max" to 2,
    "clamp" to 3, "mix" to 3, "step" to 2, "smoothstep" to 3,
)
private val VIDEO_FUNCTIONS = COMMON_FUNCTIONS + mapOf(
    "sample_red" to 2, "sample_green" to 2, "sample_blue" to 2, "sample_alpha" to 2,
    "offset_red" to 2, "offset_green" to 2, "offset_blue" to 2, "offset_alpha" to 2,
    "mirror" to 1, "pixelate" to 2,
    "blend_difference" to 3, "blend_multiply" to 3, "blend_screen" to 3, "blend_overlay" to 3,
    "blend_add" to 3, "blend_subtract" to 3, "blend_lighten" to 3, "blend_darken" to 3,
)
private val AUDIO_FUNCTIONS = COMMON_FUNCTIONS + mapOf(
    "delay" to 1,
    "pitch" to 1,
    "sine" to 1,
    "square" to 1,
    "saw" to 1,
    "triangle" to 1,
)
private val CONTROL_VARIABLES = (1..8).map { "control$it" }.toSet()

private fun compilePlugin(source: String, audio: Boolean): Result<PluginProgram> = runCatching {
    require(source.length <= 4_000) { "Plug-in source is limited to 4,000 characters." }
    val allowedTargets = if (audio) setOf("sample") else setOf("red", "green", "blue", "alpha", "x", "y")
    val allowedVariables = if (audio) {
        setOf("sample", "channel", "time", "sample_rate") + CONTROL_VARIABLES
    } else {
        setOf("red", "green", "blue", "alpha", "x", "y", "time") + CONTROL_VARIABLES
    }
    val cleaned = source.lineSequence()
        .map { it.substringBefore("//") }
        .joinToString("\n")
    val statements = cleaned.split(';', '\n').map(String::trim).filter(String::isNotEmpty)
    val allowedFunctions = if (audio) AUDIO_FUNCTIONS else VIDEO_FUNCTIONS
    require(statements.isNotEmpty()) { "Add at least one assignment, such as red = 1.0 - red;" }
    require(statements.size <= 24) { "Plug-ins are limited to 24 assignments." }
    val assignments = statements.map { statement ->
        val match = ASSIGNMENT.matchEntire(statement)
            ?: error("Use assignments like red = 1.0 - red;")
        val target = match.groupValues[1]
        require(target in allowedTargets) { "'$target' cannot be written by this plug-in." }
        val expression = ExpressionParser(match.groupValues[2], allowedVariables, allowedFunctions).parse()
        PluginAssignment(target, expression)
    }
    PluginProgram(assignments)
}

private val ASSIGNMENT = Regex("([A-Za-z_][A-Za-z0-9_]*)\\s*=\\s*(.+)")

private class ExpressionParser(
    private val source: String,
    private val allowedVariables: Set<String>,
    private val allowedFunctions: Map<String, Int>,
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
        require(allowedFunctions[name] == arguments.size) { "Function '$name' is unknown or has the wrong number of arguments." }
        return FunctionExpression(name, arguments)
    }

    private fun whitespace() {
        while (source.getOrNull(index)?.isWhitespace() == true) index++
    }
}

@OptIn(UnstableApi::class)
private data class PluginVideoGlEffect(
    val plugin: PluginProgram,
    val controls: Map<String, Float>,
) : GlEffect {
    override fun toGlShaderProgram(context: Context, useHdr: Boolean): GlShaderProgram =
        PluginVideoShaderProgram(useHdr, plugin, controls)
}

@OptIn(UnstableApi::class)
private class PluginVideoShaderProgram(
    useHdr: Boolean,
    plugin: PluginProgram,
    controls: Map<String, Float>,
) : BaseGlShaderProgram(useHdr, 1) {
    private val usesTime = plugin.glslStatements().contains(Regex("\\btime\\b"))
    private val program = try {
        GlProgram(VERTEX_SHADER, fragmentShader(plugin, controls))
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

private fun fragmentShader(plugin: PluginProgram, controls: Map<String, Float>): String = """
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
      ${pluginControlDeclarations(controls)}
      ${plugin.glslStatements()}
      gl_FragColor = clamp(vec4(red, green, blue, alpha), 0.0, 1.0);
    }
""".trimIndent()
private fun pluginControlDeclarations(controls: Map<String, Float>): String =
    (1..8).joinToString("\n") { index ->
        val value = controls["control$index"]?.takeIf(Float::isFinite) ?: if (index == 1) 1f else 0f
        val literal = if (value % 1f == 0f) "${value.toInt()}.0" else value.toString()
        "float control$index = $literal;"
    }


private val FRAME_VERTICES = floatArrayOf(-1f, -1f, 0f, 1f, -1f, 1f, 0f, 1f, 1f, 1f, 0f, 1f, 1f, -1f, 0f, 1f)

private const val VERTEX_SHADER = """
    attribute vec4 aFramePosition;
    varying vec2 vTexSamplingCoord;
    void main() {
      gl_Position = aFramePosition;
      vTexSamplingCoord = aFramePosition.xy * 0.5 + 0.5;
    }
"""
