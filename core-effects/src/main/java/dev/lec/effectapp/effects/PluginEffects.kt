package dev.lec.effectapp.effects

import dev.lec.effectapp.model.NATIVE_C_PLUGIN_LANGUAGE
import dev.lec.effectapp.model.NativePluginPolicy
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
import kotlin.math.atan2
import kotlin.math.ceil
import kotlin.math.cos
import kotlin.math.exp
import kotlin.math.floor
import kotlin.math.ln
import kotlin.math.max
import kotlin.math.min
import kotlin.math.pow
import kotlin.math.sin
import kotlin.math.sqrt
import kotlin.math.tan

const val DEFAULT_VIDEO_PLUGIN_SOURCE = "red = 1.0 - red;\nblue = 1.0 - blue;"
const val DEFAULT_AUDIO_PLUGIN_SOURCE = "sample = sample * (0.65 + 0.35 * sin(time * 12.0));"
const val PLUGIN_LANGUAGE_C_STYLE = "c_style"
const val PLUGIN_LANGUAGE_GLSL = "glsl"

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

fun validatePluginSource(
    source: String,
    audio: Boolean,
    language: String = PLUGIN_LANGUAGE_C_STYLE,
): String? = when (language) {
    NATIVE_C_PLUGIN_LANGUAGE -> NativePluginPolicy.validateSource(source, audio)
    PLUGIN_LANGUAGE_C_STYLE -> compilePlugin(source, audio).exceptionOrNull()?.message
    PLUGIN_LANGUAGE_GLSL -> validateGlslFragment(source, audio)
    else -> "Unknown plug-in language."
}

@OptIn(UnstableApi::class)
fun videoPluginEffect(
    source: String,
    controls: Map<String, Float> = emptyMap(),
    language: String = PLUGIN_LANGUAGE_C_STYLE,
): Effect {
    if (language == NATIVE_C_PLUGIN_LANGUAGE) return NativeCVideoEffect(source, controls)
    if (language == PLUGIN_LANGUAGE_GLSL && validateGlslFragment(source, audio = false) == null) {
        return RawGlslVideoGlEffect(source, controls)
    }
    val program = compilePlugin(source, audio = false).getOrElse {
        compilePlugin("red = red;", audio = false).getOrThrow()
    }
    return PluginVideoGlEffect(program, controls)
}

private fun validateGlslFragment(source: String, audio: Boolean): String? = when {
    audio -> "GLSL is available for video plug-ins only."
    source.length > 48_000 -> "GLSL source is limited to 48,000 characters."
    source.isBlank() -> "Add a complete GLSL fragment shader."
    !Regex("\\bvoid\\s+main\\s*\\(").containsMatchIn(source) -> "GLSL plug-ins need a void main() function."
    else -> null
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
            "atan2" -> "atan(${values[0]}, ${values[1]})"
            "noise" -> "fract(sin(${values[0]} * 12.9898) * 43758.5453)"
            "select" -> "(${values[0]} >= 0.5 ? ${values[1]} : ${values[2]})"
            "less" -> "(${values[0]} < ${values[1]} ? 1.0 : 0.0)"
            "greater" -> "(${values[0]} > ${values[1]} ? 1.0 : 0.0)"
            "equal" -> "(abs(${values[0]} - ${values[1]}) < 0.000001 ? 1.0 : 0.0)"
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
    "tan" -> tan(values[0])
    "ceil" -> ceil(values[0])
    "exp" -> exp(values[0])
    "log" -> ln(values[0].coerceAtLeast(0.000001f))
    "atan2" -> atan2(values[0], values[1])
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
    "noise" -> values[0].let { value -> value * 12.9898f }.let { value -> sin(value) * 43758.5453f }.let { value -> value - floor(value) }
    "select" -> if (values[0] >= 0.5f) values[1] else values[2]
    "less" -> if (values[0] < values[1]) 1f else 0f
    "greater" -> if (values[0] > values[1]) 1f else 0f
    "equal" -> if (abs(values[0] - values[1]) < 0.000001f) 1f else 0f
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
    "sin" to 1, "cos" to 1, "tan" to 1, "abs" to 1, "floor" to 1, "ceil" to 1,
    "fract" to 1, "sqrt" to 1, "exp" to 1, "log" to 1, "noise" to 1,
    "pow" to 2, "mod" to 2, "min" to 2, "max" to 2, "atan2" to 2,
    "less" to 2, "greater" to 2, "equal" to 2,
    "clamp" to 3, "mix" to 3, "select" to 3, "step" to 2, "smoothstep" to 3,
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
private val TEMP_VARIABLES = (1..16).map { "temp$it" }.toSet()

private fun compilePlugin(source: String, audio: Boolean): Result<PluginProgram> = runCatching {
    require(source.length <= 12_000) { "Plug-in source is limited to 12,000 characters." }
    val allowedTargets = (if (audio) setOf("sample") else setOf("red", "green", "blue", "alpha", "x", "y")) + TEMP_VARIABLES
    val allowedVariables = if (audio) {
        setOf("sample", "channel", "time", "sample_rate") + CONTROL_VARIABLES + TEMP_VARIABLES
    } else {
        setOf("red", "green", "blue", "alpha", "x", "y", "time", "width", "height", "aspect") + CONTROL_VARIABLES + TEMP_VARIABLES
    }
    val cleaned = source.lineSequence()
        .map { it.substringBefore("//") }
        .joinToString("\n")
    val statements = cleaned.split(';', '\n').map(String::trim).filter(String::isNotEmpty)
    val allowedFunctions = if (audio) AUDIO_FUNCTIONS else VIDEO_FUNCTIONS
    require(statements.isNotEmpty()) { "Add at least one assignment, such as red = 1.0 - red;" }
    require(statements.size <= 64) { "Plug-ins are limited to 64 assignments." }
    var nodes = 0
    val assignments = statements.map { statement ->
        val match = ASSIGNMENT.matchEntire(statement)
            ?: error("Use assignments like red = 1.0 - red;")
        val target = match.groupValues[1]
        require(target in allowedTargets) { "'$target' cannot be written by this plug-in." }
        val parser = ExpressionParser(match.groupValues[2], allowedVariables, allowedFunctions)
        val expression = parser.parse()
        nodes += parser.nodeCount
        require(nodes <= MAX_PLUGIN_NODES) { "Plug-ins are limited to $MAX_PLUGIN_NODES operations." }
        PluginAssignment(target, expression)
    }
    PluginProgram(assignments)
}

private val ASSIGNMENT = Regex("([A-Za-z_][A-Za-z0-9_]*)\\s*=\\s*(.+)")

// Plug-ins can come from other people (shared files, online rooms), so the parser bounds how
// deep and how large an expression can get: a deeply nested one would overflow the stack when
// it is parsed, drawn into GLSL or evaluated, and a huge one would stall audio rendering.
private const val MAX_PLUGIN_DEPTH = 48
private const val MAX_PLUGIN_NODES = 2_000

private class ExpressionParser(
    private val source: String,
    private val allowedVariables: Set<String>,
    private val allowedFunctions: Map<String, Int>,
) {
    private var index = 0
    private var depth = 0
    var nodeCount = 0
        private set

    private inline fun <T> nested(block: () -> T): T {
        depth++
        require(depth <= MAX_PLUGIN_DEPTH) { "Expressions are nested too deeply." }
        try {
            return block()
        } finally {
            depth--
        }
    }

    private fun node() {
        nodeCount++
        require(nodeCount <= MAX_PLUGIN_NODES) { "Plug-ins are limited to $MAX_PLUGIN_NODES operations." }
    }

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
            node()
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
            node()
            expression = BinaryExpression(expression, operator, unary())
        }
    }

    private fun unary(): PluginExpression {
        whitespace()
        val operator = source.getOrNull(index)
        if (operator == '+' || operator == '-') {
            index++
            node()
            return UnaryExpression(operator, nested { unary() })
        }
        return primary()
    }

    private fun primary(): PluginExpression {
        whitespace()
        val character = source.getOrNull(index) ?: error("Expression ended unexpectedly.")
        if (character == '(') {
            index++
            val expression = nested { additive() }
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
        node()
        return NumberExpression(source.substring(start, index).toFloatOrNull() ?: error("Invalid number."))
    }

    private fun identifier(): PluginExpression {
        val start = index
        while (source.getOrNull(index)?.let { it.isLetterOrDigit() || it == '_' } == true) index++
        val name = source.substring(start, index)
        node()
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
                arguments += nested { additive() }
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
    private val pluginStatements = plugin.glslStatements()
    private val usesTime = pluginStatements.contains(Regex("\\btime\\b"))
    private val usesWidth = pluginStatements.contains(Regex("\\b(width|aspect)\\b"))
    private val usesHeight = pluginStatements.contains(Regex("\\b(height|aspect)\\b"))
    private var inputWidth = 1f
    private var inputHeight = 1f
    private val program = try {
        GlProgram(VERTEX_SHADER, fragmentShader(plugin, controls))
    } catch (exception: GlUtil.GlException) {
        throw VideoFrameProcessingException(exception)
    }

    override fun configure(inputWidth: Int, inputHeight: Int): Size {
        this.inputWidth = inputWidth.toFloat()
        this.inputHeight = inputHeight.toFloat()
        return Size(inputWidth, inputHeight)
    }

    override fun drawFrame(inputTexId: Int, presentationTimeUs: Long) {
        try {
            program.use()
            program.setSamplerTexIdUniform("uTexSampler", inputTexId, 0)
            if (usesWidth) program.setFloatUniform("uWidth", inputWidth)
            if (usesHeight) program.setFloatUniform("uHeight", inputHeight)
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

@OptIn(UnstableApi::class)
private data class RawGlslVideoGlEffect(
    val fragmentShader: String,
    val controls: Map<String, Float>,
) : GlEffect {
    override fun toGlShaderProgram(context: Context, useHdr: Boolean): GlShaderProgram =
        RawGlslVideoShaderProgram(useHdr, fragmentShader, controls)
}

@OptIn(UnstableApi::class)
private class RawGlslVideoShaderProgram(
    useHdr: Boolean,
    private val fragmentShader: String,
    private val controls: Map<String, Float>,
) : BaseGlShaderProgram(useHdr, 1) {
    private val usesTexture = fragmentShader.contains(Regex("\\buTexSampler\\b"))
    private val usesTime = fragmentShader.contains(Regex("\\buTime\\b"))
    private val usesWidth = fragmentShader.contains(Regex("\\buWidth\\b"))
    private val usesHeight = fragmentShader.contains(Regex("\\buHeight\\b"))
    private val usedControls = (1..8).filter { index ->
        fragmentShader.contains(Regex("\\buControl" + index + "\\b"))
    }
    private var inputWidth = 1f
    private var inputHeight = 1f
    private val program = try {
        GlProgram(VERTEX_SHADER, fragmentShader)
    } catch (exception: GlUtil.GlException) {
        throw VideoFrameProcessingException(exception)
    }

    override fun configure(inputWidth: Int, inputHeight: Int): Size {
        this.inputWidth = inputWidth.toFloat()
        this.inputHeight = inputHeight.toFloat()
        return Size(inputWidth, inputHeight)
    }

    override fun drawFrame(inputTexId: Int, presentationTimeUs: Long) {
        try {
            program.use()
            if (usesTexture) program.setSamplerTexIdUniform("uTexSampler", inputTexId, 0)
            if (usesTime) program.setFloatUniform("uTime", presentationTimeUs / 1_000_000f)
            if (usesWidth) program.setFloatUniform("uWidth", inputWidth)
            if (usesHeight) program.setFloatUniform("uHeight", inputHeight)
            usedControls.forEach { index ->
                program.setFloatUniform("uControl" + index, pluginControlValue(controls, index))
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

private fun pluginControlValue(controls: Map<String, Float>, index: Int): Float =
    controls["control" + index]?.takeIf(Float::isFinite) ?: if (index == 1) 1f else 0f

private fun fragmentShader(plugin: PluginProgram, controls: Map<String, Float>): String = """
    precision highp float;
    uniform sampler2D uTexSampler;
    uniform float uTime;
    uniform float uWidth;
    uniform float uHeight;
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
      float width = uWidth;
      float height = uHeight;
      float aspect = uWidth / max(uHeight, 1.0);
      ${pluginTempDeclarations()}
      ${pluginControlDeclarations(controls)}
      ${plugin.glslStatements()}
      gl_FragColor = clamp(vec4(red, green, blue, alpha), 0.0, 1.0);
    }
""".trimIndent()
private fun pluginTempDeclarations(): String =
    (1..16).joinToString("\n") { index -> "float temp$index = 0.0;" }

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

// ---------------------------------------------------------------------------------------------
// Fast evaluation for audio plug-ins. Audio runs the program once per sample (~96,000 times a
// second for stereo), so it is compiled into a tree of small nodes that read and write a
// FloatArray: no maps, no boxing, no lists and no name lookups while the sound plays.

/** What an audio plug-in can ask of the sound around it (echoes, pitch, oscillators). */
internal interface AudioPluginHost {
    fun delay(ms: Float): Float
    fun pitch(semitones: Float): Float
    fun oscillatorPhase(frequency: Float): Float
}

internal class CompiledAudioPlugin(
    private val statements: Array<Pair<Int, AudioNode>>,
    val slots: FloatArray,
    val sampleSlot: Int,
    val channelSlot: Int,
    val timeSlot: Int,
    val sampleRateSlot: Int,
    val controlSlots: IntArray,
) {
    fun run() {
        for ((target, node) in statements) slots[target] = node.eval(slots)
    }
}

internal abstract class AudioNode {
    abstract fun eval(v: FloatArray): Float
}

private class ConstNode(private val value: Float) : AudioNode() {
    override fun eval(v: FloatArray) = value
}

private class SlotNode(private val slot: Int) : AudioNode() {
    override fun eval(v: FloatArray) = v[slot]
}

private class NegNode(private val a: AudioNode) : AudioNode() {
    override fun eval(v: FloatArray) = -a.eval(v)
}

private class BinNode(private val op: Char, private val a: AudioNode, private val b: AudioNode) : AudioNode() {
    override fun eval(v: FloatArray): Float {
        val x = a.eval(v)
        val y = b.eval(v)
        return when (op) {
            '+' -> x + y
            '-' -> x - y
            '*' -> x * y
            else -> if (abs(y) < 0.000001f) 0f else x / y
        }
    }
}

private class Fn1Node(private val op: Int, private val a: AudioNode) : AudioNode() {
    override fun eval(v: FloatArray): Float = fn1(op, a.eval(v))
}

private class Fn2Node(private val op: Int, private val a: AudioNode, private val b: AudioNode) : AudioNode() {
    override fun eval(v: FloatArray): Float = fn2(op, a.eval(v), b.eval(v))
}

private class Fn3Node(private val op: Int, private val a: AudioNode, private val b: AudioNode, private val c: AudioNode) : AudioNode() {
    override fun eval(v: FloatArray): Float = fn3(op, a.eval(v), b.eval(v), c.eval(v))
}

private class HostNode(private val op: Int, private val a: AudioNode, private val host: AudioPluginHost) : AudioNode() {
    override fun eval(v: FloatArray): Float {
        val x = a.eval(v)
        return when (op) {
            H_DELAY -> host.delay(x)
            H_PITCH -> host.pitch(x)
            H_SINE -> sin(host.oscillatorPhase(x) * 2f * PI_F)
            H_SQUARE -> if (host.oscillatorPhase(x) < 0.5f) 1f else -1f
            H_SAW -> host.oscillatorPhase(x) * 2f - 1f
            else -> 1f - 4f * abs(host.oscillatorPhase(x) - 0.5f)
        }
    }
}

private const val PI_F = 3.1415927f
private const val H_DELAY = 0
private const val H_PITCH = 1
private const val H_SINE = 2
private const val H_SQUARE = 3
private const val H_SAW = 4
private const val H_TRIANGLE = 5
private val HOST_OPS = mapOf(
    "delay" to H_DELAY, "pitch" to H_PITCH, "sine" to H_SINE,
    "square" to H_SQUARE, "saw" to H_SAW, "triangle" to H_TRIANGLE,
)

private val FN1 = listOf("sin", "cos", "tan", "ceil", "exp", "log", "abs", "floor", "fract", "sqrt", "noise")
private val FN2 = listOf("atan2", "pow", "mod", "min", "max", "step", "less", "greater", "equal")
private val FN3 = listOf("clamp", "mix", "select", "smoothstep")

private fun fn1(op: Int, x: Float): Float = when (op) {
    0 -> sin(x)
    1 -> cos(x)
    2 -> tan(x)
    3 -> ceil(x)
    4 -> exp(x)
    5 -> ln(x.coerceAtLeast(0.000001f))
    6 -> abs(x)
    7 -> floor(x)
    8 -> x - floor(x)
    9 -> sqrt(x.coerceAtLeast(0f))
    else -> {
        val s = sin(x * 12.9898f) * 43758.5453f
        s - floor(s)
    }
}

private fun fn2(op: Int, x: Float, y: Float): Float = when (op) {
    0 -> atan2(x, y)
    1 -> x.toDouble().pow(y.toDouble()).toFloat()
    2 -> if (abs(y) < 0.000001f) 0f else x % y
    3 -> min(x, y)
    4 -> max(x, y)
    5 -> if (y < x) 0f else 1f
    6 -> if (x < y) 1f else 0f
    7 -> if (x > y) 1f else 0f
    else -> if (abs(x - y) < 0.000001f) 1f else 0f
}

private fun fn3(op: Int, x: Float, y: Float, z: Float): Float = when (op) {
    // clamp with a min above its max returns the min instead of throwing mid-playback.
    0 -> if (y > z) y else x.coerceIn(y, z)
    1 -> x + (y - x) * z
    2 -> if (x >= 0.5f) y else z
    else -> {
        val denominator = y - x
        val amount = if (abs(denominator) < 0.000001f) 0f else ((z - x) / denominator).coerceIn(0f, 1f)
        amount * amount * (3f - 2f * amount)
    }
}

/** Compiles a parsed audio plug-in into its fast form (see [CompiledAudioPlugin]). */
internal fun PluginProgram.compileAudio(host: AudioPluginHost): CompiledAudioPlugin {
    val names = LinkedHashMap<String, Int>()
    fun slot(name: String) = names.getOrPut(name) { names.size }
    val sample = slot("sample")
    val channel = slot("channel")
    val time = slot("time")
    val sampleRate = slot("sample_rate")
    val controls = IntArray(8) { slot("control${it + 1}") }
    (1..16).forEach { slot("temp$it") }

    fun build(expression: PluginExpression): AudioNode = when (expression) {
        is NumberExpression -> ConstNode(expression.value)
        is VariableExpression -> SlotNode(slot(expression.name))
        is UnaryExpression -> if (expression.operator == '-') NegNode(build(expression.value)) else build(expression.value)
        is BinaryExpression -> BinNode(expression.operator, build(expression.left), build(expression.right))
        is FunctionExpression -> {
            val args = expression.arguments.map(::build)
            val name = expression.name
            HOST_OPS[name]?.let { HostNode(it, args[0], host) }
                ?: FN1.indexOf(name).takeIf { it >= 0 && args.size == 1 }?.let { Fn1Node(it, args[0]) }
                ?: FN2.indexOf(name).takeIf { it >= 0 && args.size == 2 }?.let { Fn2Node(it, args[0], args[1]) }
                ?: FN3.indexOf(name).takeIf { it >= 0 && args.size == 3 }?.let { Fn3Node(it, args[0], args[1], args[2]) }
                ?: ConstNode(0f)
        }
    }

    val statements = assignments.map { slot(it.target) to build(it.expression) }.toTypedArray()
    return CompiledAudioPlugin(statements, FloatArray(names.size), sample, channel, time, sampleRate, controls)
}
