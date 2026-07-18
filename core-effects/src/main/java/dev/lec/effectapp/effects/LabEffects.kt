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
internal data class LabColorEffect(val mode: Int, val mix: Float, val degrees: Float, val channels: FloatArray, val colorspace: Int = 3) : GlEffect {
    override fun toGlShaderProgram(context: Context, useHdr: Boolean): GlShaderProgram =
        LabColorShaderProgram(useHdr, mode, mix, degrees, channels, colorspace)
}

@OptIn(UnstableApi::class)
private class LabColorShaderProgram(useHdr: Boolean, mode: Int, mix: Float, degrees: Float, private val channels: FloatArray, colorspace: Int) : BaseGlShaderProgram(useHdr, 1) {
    private val program = try { GlProgram(LAB_VERTEX, LAB_FRAGMENT) } catch (error: GlUtil.GlException) { throw VideoFrameProcessingException(error) }
    private val settings = floatArrayOf(mode.toFloat(), mix.coerceIn(0f, 1f), degrees * Math.PI.toFloat() / 180f, colorspace.toFloat())
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
 vec3 rgbHsv(vec3 c){
   float hi=max(c.r,max(c.g,c.b)),lo=min(c.r,min(c.g,c.b)),d=hi-lo; float h=0.0;
   if(d>.00001){if(hi==c.r)h=mod((c.g-c.b)/d,6.0);else if(hi==c.g)h=(c.b-c.r)/d+2.0;else h=(c.r-c.g)/d+4.0;h/=6.0;if(h<0.0)h+=1.0;}
   return vec3(h,hi<.00001?0.0:d/hi,hi);
 }
 vec3 hsvRgb(vec3 c){float h=c.x*6.0;float x=c.z*(1.0-abs(mod(h,2.0)-1.0));vec3 p=vec3(0.0);if(h<1.0)p=vec3(c.z,x,0.0);else if(h<2.0)p=vec3(x,c.z,0.0);else if(h<3.0)p=vec3(0.0,c.z,x);else if(h<4.0)p=vec3(0.0,x,c.z);else if(h<5.0)p=vec3(x,0.0,c.z);else p=vec3(c.z,0.0,x);return p*c.y+vec3(c.z*(1.0-c.y));}
 vec3 rgbYuv(vec3 c){return vec3(dot(c,vec3(.299,.587,.114)),dot(c,vec3(-.14713,-.28886,.436)),dot(c,vec3(.615,-.51499,-.10001)));}
 vec3 yuvRgb(vec3 c){return clamp(vec3(c.x+1.13983*c.z,c.x-.39465*c.y-.58060*c.z,c.x+2.03211*c.y),0.0,1.0);}
 void main(){
   vec4 source=texture2D(uTexSampler,vTexSamplingCoord); vec3 changed=source.rgb; float cs=cos(uSettings.z),sn=sin(uSettings.z);
   if(uSettings.w<.5){
     if(uSettings.x<.5) changed=vec3(1.0)-source.rgb;
     else {vec3 h=rgbHsv(source.rgb);h.x=fract(h.x+uSettings.z/6.2831853);changed=hsvRgb(h);}
   } else if(uSettings.w<1.5){
     vec3 h=rgbHsv(source.rgb); if(uSettings.x<.5)h=vec3(1.0)-h;else h.x=fract(h.x+uSettings.z/6.2831853); changed=hsvRgb(h);
   } else if(uSettings.w<2.5){
     vec3 y=rgbYuv(source.rgb); if(uSettings.x<.5)y=vec3(1.0-y.x,-y.y,-y.z);else y.yz=vec2(y.y*cs-y.z*sn,y.y*sn+y.z*cs); changed=yuvRgb(y);
   } else {
     vec3 lab=rgbLab(source.rgb); if(uSettings.x<.5){lab.x=100.0-lab.x;lab.y=-lab.y;lab.z=-lab.z;}else lab.yz=vec2(lab.y*cs-lab.z*sn,lab.y*sn+lab.z*cs);changed=labRgb(lab);
   }
   gl_FragColor=vec4(mix(source.rgb,changed,uSettings.y),source.a);
 }
"""
