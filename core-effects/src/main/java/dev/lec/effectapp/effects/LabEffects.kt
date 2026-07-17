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

@OptIn(UnstableApi::class)
class LabInvertEffect : LecEffect {
    override val id = "lab_invert"
    override val displayName = "LAB invert"
    override val category = EffectCategory.EFFECTS
    override val params = listOf(
        EffectParam("red", "R · L* lightness", 0f, 1f, 1f, ParamKind.BOOLEAN),
        EffectParam("green", "G · a* axis", 0f, 1f, 1f, ParamKind.BOOLEAN),
        EffectParam("blue", "B · b* axis", 0f, 1f, 1f, ParamKind.BOOLEAN),
        EffectParam("mix", "Mix", 0f, 1f, 1f),
    )
    override fun toMediaEffect(values: Map<String, Float>): Effect = LabColorEffect(
        0, values["mix"] ?: 1f, 0f,
        floatArrayOf(values["red"] ?: 1f, values["green"] ?: 1f, values["blue"] ?: 1f),
    )
}

@OptIn(UnstableApi::class)
class LabHueShiftEffect : LecEffect {
    override val id = "lab_hue_shift"
    override val displayName = "LAB hue shift"
    override val category = EffectCategory.EFFECTS
    override val params = listOf(
        EffectParam("degrees", "Hue shift", -180f, 180f, 0f),
        EffectParam("mix", "Mix", 0f, 1f, 1f),
    )
    override fun toMediaEffect(values: Map<String, Float>): Effect =
        LabColorEffect(1, values["mix"] ?: 1f, values["degrees"] ?: 0f, floatArrayOf(1f, 1f, 1f))
}

@OptIn(UnstableApi::class)
private data class LabColorEffect(val mode: Int, val mix: Float, val degrees: Float, val channels: FloatArray) : GlEffect {
    override fun toGlShaderProgram(context: Context, useHdr: Boolean): GlShaderProgram =
        LabColorShaderProgram(useHdr, mode, mix, degrees, channels)
}

@OptIn(UnstableApi::class)
private class LabColorShaderProgram(useHdr: Boolean, mode: Int, mix: Float, degrees: Float, private val channels: FloatArray) : BaseGlShaderProgram(useHdr, 1) {
    private val program = try { GlProgram(LAB_VERTEX, LAB_FRAGMENT) } catch (error: GlUtil.GlException) { throw VideoFrameProcessingException(error) }
    private val settings = floatArrayOf(mode.toFloat(), mix.coerceIn(0f, 1f), degrees * Math.PI.toFloat() / 180f, 0f)
    override fun configure(inputWidth: Int, inputHeight: Int): Size = Size(inputWidth, inputHeight)
    override fun drawFrame(inputTexId: Int, presentationTimeUs: Long) {
        try {
            program.use()
            program.setSamplerTexIdUniform("uTexSampler", inputTexId, 0)
            program.setFloatsUniform("uSettings", settings)
            program.setFloatsUniform("uChannels", floatArrayOf(channels[0], channels[1], channels[2], 0f))
            program.setBufferAttribute("aFramePosition", LAB_VERTICES, 4)
            program.bindAttributesAndUniforms()
            GLES20.glDrawArrays(GLES20.GL_TRIANGLE_FAN, 0, 4)
            GlUtil.checkGlError()
        } catch (error: GlUtil.GlException) { throw VideoFrameProcessingException(error, presentationTimeUs) }
    }
    override fun release() { try { program.delete() } catch (error: GlUtil.GlException) { throw VideoFrameProcessingException(error) }; super.release() }
}

private val LAB_VERTICES = floatArrayOf(-1f, -1f, 0f, 1f, -1f, 1f, 0f, 1f, 1f, 1f, 0f, 1f, 1f, -1f, 0f, 1f)
private const val LAB_VERTEX = """
 attribute vec4 aFramePosition; varying vec2 vTexSamplingCoord;
 void main(){ gl_Position=aFramePosition; vTexSamplingCoord=aFramePosition.xy*.5+.5; }
"""
private const val LAB_FRAGMENT = """
 precision mediump float;
 uniform sampler2D uTexSampler; uniform vec4 uSettings; uniform vec4 uChannels; varying vec2 vTexSamplingCoord;
 float lin(float c){return c<=.04045?c/12.92:pow((c+.055)/1.055,2.4);}
 float srgb(float c){return c<=.0031308?12.92*c:1.055*pow(c,1.0/2.4)-.055;}
 float f(float t){return t>.008856?pow(t,1.0/3.0):7.787*t+16.0/116.0;}
 float fi(float t){float t3=t*t*t;return t3>.008856?t3:(t-16.0/116.0)/7.787;}
 vec3 rgbLab(vec3 c){
   c=vec3(lin(c.r),lin(c.g),lin(c.b));
   vec3 xyz=vec3(dot(c,vec3(.4124,.3576,.1805)),dot(c,vec3(.2126,.7152,.0722)),dot(c,vec3(.0193,.1192,.9505)));
   vec3 n=vec3(xyz.x/.95047,xyz.y,xyz.z/1.08883);
   return vec3(116.0*f(n.y)-16.0,500.0*(f(n.x)-f(n.y)),200.0*(f(n.y)-f(n.z)));
 }
 vec3 labRgb(vec3 l){
   float y=(l.x+16.0)/116.0; float x=l.y/500.0+y; float z=y-l.z/200.0;
   vec3 xyz=vec3(.95047*fi(x),fi(y),1.08883*fi(z));
   vec3 c=vec3(3.2406*xyz.x-1.5372*xyz.y-.4986*xyz.z,-.9689*xyz.x+1.8758*xyz.y+.0415*xyz.z,.0557*xyz.x-.2040*xyz.y+1.0570*xyz.z);
   return clamp(vec3(srgb(max(c.r,0.0)),srgb(max(c.g,0.0)),srgb(max(c.b,0.0))),0.0,1.0);
 }
 void main(){
   vec4 source=texture2D(uTexSampler,vTexSamplingCoord); vec3 lab=rgbLab(source.rgb);
   if(uSettings.x<.5){
     if(uChannels.r>.5) lab.x=100.0-lab.x;
     if(uChannels.g>.5) lab.y=-lab.y;
     if(uChannels.b>.5) lab.z=-lab.z;
   }
   else { float cs=cos(uSettings.z),sn=sin(uSettings.z); lab.yz=vec2(lab.y*cs-lab.z*sn,lab.y*sn+lab.z*cs); }
   vec3 changed=mix(source.rgb,labRgb(lab),uSettings.y);
   gl_FragColor=vec4(changed,source.a);
 }
"""
