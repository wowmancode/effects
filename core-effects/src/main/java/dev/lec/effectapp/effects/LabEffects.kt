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
internal data class LabColorEffect(val mode: Int, val mix: Float, val degrees: Float, val channels: FloatArray, val colorspace: Int = 7) : GlEffect {
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
 precision mediump float; uniform sampler2D uTexSampler; uniform vec4 uSettings; uniform vec4 uChannels; varying vec2 vTexSamplingCoord;
 float lin(float c){return c<=.04045?c/12.92:pow((c+.055)/1.055,2.4);}
 float srgb(float c){return c<=.0031308?12.92*c:1.055*pow(c,1./2.4)-.055;}
 vec3 hsv(vec3 c){float a=max(c.r,max(c.g,c.b)),b=min(c.r,min(c.g,c.b)),d=a-b,h=0.;if(d>.0001){if(a==c.r)h=mod((c.g-c.b)/d,6.);else if(a==c.g)h=(c.b-c.r)/d+2.;else h=(c.r-c.g)/d+4.;h/=6.;if(h<0.)h+=1.;}return vec3(h,a<.0001?0.:d/a,a);}
 vec3 rgb(vec3 c){float h=c.x*6.,x=c.z*(1.-abs(mod(h,2.)-1.)),m=c.z*(1.-c.y);vec3 p;if(h<1.)p=vec3(c.z,x,0.);else if(h<2.)p=vec3(x,c.z,0.);else if(h<3.)p=vec3(0.,c.z,x);else if(h<4.)p=vec3(0.,x,c.z);else if(h<5.)p=vec3(x,0.,c.z);else p=vec3(c.z,0.,x);return p*c.y+vec3(m);}
 vec3 hsl(vec3 c){float a=max(c.r,max(c.g,c.b)),b=min(c.r,min(c.g,c.b)),d=a-b,l=(a+b)*.5,h=0.;if(d>.0001){if(a==c.r)h=mod((c.g-c.b)/d,6.);else if(a==c.g)h=(c.b-c.r)/d+2.;else h=(c.r-c.g)/d+4.;h/=6.;if(h<0.)h+=1.;}return vec3(h,d<.0001?0.:d/(1.-abs(2.*l-1.)),l);}
 vec3 hslrgb(vec3 c){float h=c.x*6.,a=(1.-abs(2.*c.z-1.))*c.y,x=a*(1.-abs(mod(h,2.)-1.)),m=c.z-a*.5;vec3 p;if(h<1.)p=vec3(a,x,0.);else if(h<2.)p=vec3(x,a,0.);else if(h<3.)p=vec3(0.,a,x);else if(h<4.)p=vec3(0.,x,a);else if(h<5.)p=vec3(x,0.,a);else p=vec3(a,0.,x);return p+vec3(m);}
 vec3 yuv(vec3 c){return vec3(dot(c,vec3(.299,.587,.114)),dot(c,vec3(-.14713,-.28886,.436)),dot(c,vec3(.615,-.51499,-.10001)));}
 vec3 yuvrgb(vec3 c){return clamp(vec3(c.x+1.13983*c.z,c.x-.39465*c.y-.5806*c.z,c.x+2.03211*c.y),0.,1.);}
 vec3 ycbcr(vec3 c){return vec3(dot(c,vec3(.299,.587,.114)),.5-.168736*c.r-.331264*c.g+.5*c.b,.5+.5*c.r-.418688*c.g-.081312*c.b);}
 vec3 ycbcrrgb(vec3 c){float b=c.y-.5,r=c.z-.5;return clamp(vec3(c.x+1.402*r,c.x-.344136*b-.714136*r,c.x+1.772*b),0.,1.);}
 vec3 ycocg(vec3 c){return vec3(.25*c.r+.5*c.g+.25*c.b,.5*c.r-.5*c.b,-.25*c.r+.5*c.g-.25*c.b);}
 vec3 ycocgrgb(vec3 c){return clamp(vec3(c.x+c.y-c.z,c.x+c.z,c.x-c.y-c.z),0.,1.);}
 vec3 xyz(vec3 c){c=vec3(lin(c.r),lin(c.g),lin(c.b));return vec3(dot(c,vec3(.4124,.3576,.1805)),dot(c,vec3(.2126,.7152,.0722)),dot(c,vec3(.0193,.1192,.9505)));}
 vec3 xyzrgb(vec3 c){vec3 v=vec3(3.2406*c.x-1.5372*c.y-.4986*c.z,-.9689*c.x+1.8758*c.y+.0415*c.z,.0557*c.x-.204*c.y+1.057*c.z);return clamp(vec3(srgb(max(v.r,0.)),srgb(max(v.g,0.)),srgb(max(v.b,0.))),0.,1.);}
 float labf(float t){return t>.008856?pow(t,1./3.):7.787*t+16./116.;}
 float labi(float t){float t3=t*t*t;return t3>.008856?t3:(t-16./116.)/7.787;}
 vec3 lab(vec3 c){vec3 q=xyz(c),n=vec3(q.x/.95047,q.y,q.z/1.08883);return vec3(116.*labf(n.y)-16.,500.*(labf(n.x)-labf(n.y)),200.*(labf(n.y)-labf(n.z)));}
 vec3 labrgb(vec3 v){float y=(v.x+16.)/116.,x=v.y/500.+y,z=y-v.z/200.;return xyzrgb(vec3(.95047*labi(x),labi(y),1.08883*labi(z)));}
 vec3 inv01(vec3 v){if(uChannels.r>.5)v.r=1.-v.r;if(uChannels.g>.5)v.g=1.-v.g;if(uChannels.b>.5)v.b=1.-v.b;return v;}
 vec3 invSigned(vec3 v){if(uChannels.r>.5)v.r=1.-v.r;if(uChannels.g>.5)v.g=-v.g;if(uChannels.b>.5)v.b=-v.b;return v;}
 void main(){vec4 s=texture2D(uTexSampler,vTexSamplingCoord);vec3 o=s.rgb;float c=cos(uSettings.z),n=sin(uSettings.z);
 if(uSettings.w<.5){if(uSettings.x<.5)o=inv01(s.rgb);else{vec3 v=hsv(s.rgb);v.x=fract(v.x+uSettings.z/6.2831853);o=rgb(v);}}
 else if(uSettings.w<1.5){vec3 v=hsv(s.rgb);if(uSettings.x<.5)v=inv01(v);else v.x=fract(v.x+uSettings.z/6.2831853);o=rgb(v);}
 else if(uSettings.w<2.5){vec3 v=hsl(s.rgb);if(uSettings.x<.5)v=inv01(v);else v.x=fract(v.x+uSettings.z/6.2831853);o=hslrgb(v);}
 else if(uSettings.w<3.5){vec3 v=yuv(s.rgb);if(uSettings.x<.5)v=invSigned(v);else v.yz=vec2(v.y*c-v.z*n,v.y*n+v.z*c);o=yuvrgb(v);}
 else if(uSettings.w<4.5){vec3 v=ycbcr(s.rgb);if(uSettings.x<.5)v=inv01(v);else{vec2 q=v.yz-vec2(.5);v.yz=vec2(q.x*c-q.y*n,q.x*n+q.y*c)+vec2(.5);}o=ycbcrrgb(v);}
 else if(uSettings.w<5.5){vec3 v=ycocg(s.rgb);if(uSettings.x<.5)v=invSigned(v);else v.yz=vec2(v.y*c-v.z*n,v.y*n+v.z*c);o=ycocgrgb(v);}
 else if(uSettings.w<6.5){vec3 v=xyz(s.rgb);if(uSettings.x<.5)v=inv01(v);else v.xz=vec2(v.x*c-v.z*n,v.x*n+v.z*c);o=xyzrgb(v);}
 else if(uSettings.w<7.5){vec3 v=lab(s.rgb);if(uSettings.x<.5){if(uChannels.r>.5)v.x=100.-v.x;if(uChannels.g>.5)v.y=-v.y;if(uChannels.b>.5)v.z=-v.z;}else v.yz=vec2(v.y*c-v.z*n,v.y*n+v.z*c);o=labrgb(v);}
 else {vec3 v=1.-s.rgb;if(uSettings.x<.5)v=inv01(v);else v.rg=vec2(v.r*c-v.g*n,v.r*n+v.g*c);o=clamp(1.-v,0.,1.);}
 gl_FragColor=vec4(mix(s.rgb,o,uSettings.y),s.a);}
"""