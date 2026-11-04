/* Reconstructed from Vegas Pro 12 float routines at RVAs 3d2180..3d4cc0.
   No original executable bytes, Windows ABI, SIMD instructions, or emulation. */
#include "a17.h"
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <limits.h>

void a17_destroy(a17_state *s) {
    if(!s)return;
    free(s->input);free(s->output);free(s->window);
    memset(s,0,sizeof(*s));
}

int a17_init(a17_state *s,unsigned channels,unsigned rate,double ratio,float fraction) {
    if(!s || channels<1 || channels>2 || rate<8000 || rate>192000 ||
       !isfinite(ratio) || ratio<.25 || ratio>8 || !isfinite(fraction) || fraction<0 || fraction>1)
        return -1;
    memset(s,0,sizeof(*s));
    s->channels=channels;s->rate=rate;s->ratio=ratio;s->search_fraction=fraction;
    /* Original preset [50,11402,5,2,3,112,1000,300,-100,0]. */
    s->length=(int)(50U*rate*4U/2000U);
    s->synthesis_hop=s->length/4;
    s->overlap=(int)(3U*rate/1000U);
    if(s->overlap>s->length/4-1)s->overlap=s->length/4-1;
    s->exact_hop=(double)s->synthesis_hop/ratio;
    if(s->exact_hop<1)s->exact_hop=1;
    if(s->exact_hop>s->length)s->exact_hop=s->length;
    s->initial_hop=(int)(s->exact_hop+.5);
    if(s->initial_hop>s->length)s->initial_hop=s->length;
    s->analysis_hop=s->initial_hop;
    s->output_count=s->synthesis_hop;
    s->retained_input=s->length-s->analysis_hop;
    s->search_step=rate<32000?(int)(2U*rate/44100U):2;
    if(s->search_step<1)s->search_step=1;
    s->search_length=s->synthesis_hop-s->overlap;
    if(s->search_length>(int)(5U*rate/1000U))s->search_length=(int)(5U*rate/1000U);
    s->threshold=10.0f;s->first=1;
    size_t samples=(size_t)s->length*channels;
    s->input=calloc(samples,sizeof(float));s->output=calloc(samples,sizeof(float));
    s->window=malloc((size_t)s->length*sizeof(float));
    if(!s->input || !s->output || !s->window){a17_destroy(s);return -1;}
    for(int i=0;i<s->length;i++)s->window[i]=1;
    if(s->overlap>1) {
        for(int i=0;i<s->overlap;i++) {
            float value=(float)i/(float)s->overlap;
            s->window[i]*=value;
            s->window[s->length/4+s->overlap-i]=s->window[i];
        }
        for(int i=s->length/4+s->overlap+1;i<s->length;i++)s->window[i]=0;
    }
    return 0;
}

static unsigned search_mono(const a17_state *s) {
    unsigned best=0,step=(unsigned)s->search_step;
    unsigned span=(unsigned)(uint64_t)((float)s->search_length*s->search_fraction);
    /* The original truncates the centering factor BEFORE multiplying by span. */
    int center=(int)((1.0-(double)s->search_fraction)*.5)*s->search_length;
    const float *reference=s->output+center;
    float baseline=0,best_energy=0;
    for(unsigned j=0;j<span;j+=step)baseline+=reference[j]*reference[j];
    for(unsigned candidate=0;candidate<span;candidate+=step) {
        float energy=0;
        for(unsigned j=0;j<span;j+=step) {
            float value=reference[j]+s->input[center+candidate+j];
            energy+=value*value;
        }
        if(baseline*s->threshold<energy)return candidate;
        if(best_energy<energy){best_energy=energy;best=candidate;}
    }
    return best;
}

static unsigned search_stereo(const a17_state *s) {
    unsigned best=0,step=(unsigned)s->search_step;
    unsigned span=(unsigned)(uint64_t)((float)s->search_length*s->search_fraction);
    int center=(int)((1.0-(double)s->search_fraction)*.5)*s->search_length*2;
    const float *reference=s->output+center;
    float left_baseline=0,right_baseline=0,best_energy=0;
    /* Preserve the original stereo baseline's repeated first-sample operation. */
    float square=reference[0]*reference[0];
    for(unsigned j=0;j<span;j+=step){left_baseline+=square;right_baseline+=square;}
    for(unsigned candidate=0;candidate<(unsigned)s->search_length;candidate+=step) {
        float left=0,right=0;
        for(unsigned j=0;j<span;j+=step) {
            float a=reference[j*2]+s->input[center+(candidate+j)*2];
            float b=reference[j*2+1]+s->input[center+(candidate+j)*2+1];
            left+=a*a;right+=b*b;
        }
        if(left_baseline*s->threshold<left && right_baseline*s->threshold<right)return candidate;
        if(best_energy<right+left){best_energy=right+left;best=candidate;}
    }
    return best;
}

static void overlap_add(a17_state *s,unsigned offset) {
    const float *source=s->input+(size_t)offset*s->channels;
    int overlap=s->overlap,hop=s->synthesis_hop;
    if(s->channels==1) {
        for(int i=0;i<overlap;i++) {
            if(s->first)s->output[i]=source[i];
            else s->output[i]=source[i]*s->window[i]+s->output[i];
        }
        s->first=0;
        for(int i=overlap;i<overlap+hop;i++)
            s->output[i]=source[i]*s->window[i]+s->output[i];
    } else {
        for(int i=0;i<overlap;i++)
            for(int c=0;c<2;c++) {
                if(s->first)s->output[i*2+c]=source[i*2+c]+s->output[i*2+c];
                else s->output[i*2+c]=source[i*2+c]*s->window[i]+s->output[i*2+c];
            }
        s->first=0;
        memcpy(s->output+overlap*2,source+overlap*2,(size_t)(s->length/4-overlap)*2*sizeof(float));
        for(int i=hop;i<hop+overlap;i++)
            for(int c=0;c<2;c++)s->output[i*2+c]=source[i*2+c]*s->window[i]+s->output[i*2+c];
    }
}

static void reset(a17_state *s) {
    size_t samples=(size_t)s->length*s->channels;
    memset(s->input,0,samples*sizeof(float));memset(s->output,0,samples*sizeof(float));
    s->analysis_hop=s->initial_hop;s->output_count=s->synthesis_hop;
    s->retained_input=s->length-s->analysis_hop;
    s->first=1;s->ready=0;s->input_used=0;s->input_fill=0;s->output_used=0;s->output_pos=0;
    s->flushed=0;s->total_advance=0;s->grain_count=0;
}

int a17_process(a17_state *s,int action,const float *input,int *input_frames,
                float *output,int *output_frames) {
    if(!s || !s->input || !input_frames || !output_frames || action<0 || action>2 ||
       *input_frames<0 || *output_frames<0 || (*input_frames && !input) || (*output_frames && !output))
        return -1;
    if(action==0)reset(s);
    s->ending=action==2;s->input_used=0;s->output_used=0;
    if(*input_frames==0 && !s->ready && s->flushed){*output_frames=0;return 1;}
    for(;;) {
        if(s->ready) {
            if(s->output_count) {
                int n=s->output_count-s->output_pos;
                if(n>*output_frames-s->output_used)n=*output_frames-s->output_used;
                memcpy(output+(size_t)s->output_used*s->channels,
                       s->output+(size_t)s->output_pos*s->channels,(size_t)n*s->channels*sizeof(float));
                s->output_used+=n;s->output_pos+=n;
            }
            if(s->output_pos!=s->output_count)break;
            s->output_pos=0;
            if(!s->ending)s->input_fill=s->retained_input;
            s->ready=0;
            memmove(s->input,s->input+(size_t)s->analysis_hop*s->channels,
                    (size_t)(s->length-s->analysis_hop)*s->channels*sizeof(float));
            memmove(s->output,s->output+(size_t)s->synthesis_hop*s->channels,
                    (size_t)s->overlap*s->channels*sizeof(float));
            memset(s->output+(size_t)s->overlap*s->channels,0,
                   (size_t)(s->length-s->overlap)*s->channels*sizeof(float));
        }
        int n=s->length-s->input_fill;
        if(n>*input_frames-s->input_used)n=*input_frames-s->input_used;
        if(n)memcpy(s->input+(size_t)s->input_fill*s->channels,
                    input+(size_t)s->input_used*s->channels,(size_t)n*s->channels*sizeof(float));
        s->input_fill+=n;s->input_used+=n;
        if(s->ending) {
            int fill=s->input_fill;
            if(fill<s->synthesis_hop) {
                if(s->flushed)break;
                s->flushed=1;
                if(fill<1)break;
                memset(s->input+(size_t)fill*s->channels,0,
                       (size_t)(s->length-fill)*s->channels*sizeof(float));
                int count=(int)((double)fill*s->ratio);
                if(count<0)count=0;
                if(count>s->length)count=s->length;
                s->output_count=count;
            }
            s->input_fill=fill-s->analysis_hop;
        }
        if(s->input_fill!=s->length && !s->ending)break;
        unsigned offset=s->channels==1?search_mono(s):search_stereo(s);
        overlap_add(s,offset);
        s->grain_count++;
        s->total_advance+=s->analysis_hop;
        s->ready=1;
        s->analysis_hop=(int)(((double)(s->grain_count+1)*s->exact_hop-(double)s->total_advance)+.5);
        s->retained_input=s->length-s->analysis_hop;
    }
    *input_frames=s->input_used;*output_frames=s->output_used;
    return 0;
}
