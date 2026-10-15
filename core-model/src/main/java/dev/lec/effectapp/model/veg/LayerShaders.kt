package dev.lec.effectapp.model.veg

/*
 * GLSL sources for imported effects, used as "plugin_video" segments (language "glsl").
 * HSL_ADJUST and TV_SIMULATOR are the same recreations as the preset library's shaders, so
 * imported projects and presets look alike. Controls follow each shader's own comments.
 */
internal object LayerShaders {
    val HSL_ADJUST = """
precision highp float;

uniform sampler2D uTexSampler;
uniform float uControl1;
uniform float uControl2;
uniform float uControl3;
uniform float uControl4;
varying vec2 vTexSamplingCoord;

vec3 rgbToHsl(vec3 c) {
    float hi = max(max(c.r, c.g), c.b);
    float lo = min(min(c.r, c.g), c.b);
    float d = hi - lo;
    float l = 0.5 * (hi + lo);
    if (d < 0.000001) return vec3(0.0, 0.0, l);
    float s = d / max(1.0 - abs(2.0 * l - 1.0), 0.000001);
    float h;
    if (hi == c.r) h = mod((c.g - c.b) / d, 6.0);
    else if (hi == c.g) h = (c.b - c.r) / d + 2.0;
    else h = (c.r - c.g) / d + 4.0;
    return vec3(fract(h / 6.0), s, l);
}

vec3 hslToRgb(vec3 hsl) {
    float c = (1.0 - abs(2.0 * hsl.z - 1.0)) * hsl.y;
    float h = fract(hsl.x) * 6.0;
    float x = c * (1.0 - abs(mod(h, 2.0) - 1.0));
    vec3 rgb;
    if (h < 1.0) rgb = vec3(c, x, 0.0);
    else if (h < 2.0) rgb = vec3(x, c, 0.0);
    else if (h < 3.0) rgb = vec3(0.0, c, x);
    else if (h < 4.0) rgb = vec3(0.0, x, c);
    else if (h < 5.0) rgb = vec3(x, 0.0, c);
    else rgb = vec3(c, 0.0, x);
    return rgb + vec3(hsl.z - 0.5 * c);
}

void main() {
    vec2 uv = clamp(vTexSamplingCoord, 0.0, 1.0);
    vec4 original = texture2D(uTexSampler, uv);
    if (abs(uControl2) + abs(uControl3) + abs(uControl4) < 0.000001) {
        gl_FragColor = clamp(original, 0.0, 1.0);
        return;
    }
    vec3 hsl = rgbToHsl(original.rgb);
    hsl.x = fract(hsl.x + 0.5 * uControl2);
    float saturationScale = clamp((exp2(uControl3) - 0.25) / 0.75,
                                  0.0, 2.0);
    float luminanceScale = clamp((exp2(uControl4) - 0.25) / 0.75,
                                 0.0, 2.0);
    hsl.y = hsl.y * saturationScale;
    hsl.z = clamp(hsl.z * luminanceScale, 0.0, 1.0);
    vec3 effected = hslToRgb(hsl);
    gl_FragColor = clamp(vec4(mix(original.rgb, effected,
                                  clamp(uControl1, 0.0, 1.0)), original.a),
                         0.0, 1.0);
}
""".trimStart('\n')

    val TV_SIMULATOR = """
// TV simulator — GLSL ES 1.00 port of tv() from veggy_fx.c
//
// Paste with the "Full GLSL" mode selected (not C-style).
// Controls (Control 1 = 1 and the rest 0 = clean passthrough):
//   uControl1  detail zoom        (1..2 -> zoom 1x..4x; app default 1 = no zoom)
//   uControl2  aperture grill
//   uControl3  interlacing
//   uControl4  line sync error    (= 1 - line_sync;     0 = locked)
//   uControl5  vertical roll      (= 1 - vertical_sync; 0 = locked)
//   uControl6  scan phasing
//   uControl7  phosphorescence
//   uControl8  static
//
// Presets from the C code, in these terms:
//   tv-look : 1, .316, .66, 0,   0,    .15, .9, 0
//   bad-sync: 1, .316, .78, .68, .746, .2,  .5, 0
//
// uWidth/uHeight must be set (pixel size of the frame). uTime drives all motion.

precision highp float;

uniform sampler2D uTexSampler;
varying vec2 vTexSamplingCoord;

uniform float uTime;
uniform float uWidth;
uniform float uHeight;

uniform float uControl1;
uniform float uControl2;
uniform float uControl3;
uniform float uControl4;
uniform float uControl5;
uniform float uControl6;
uniform float uControl7;
uniform float uControl8;

// ---------- noise ----------

// Hash in -1..1 (sine-free, stable on GPUs)
float hash12(vec2 p) {
    vec3 p3 = fract(vec3(p.xyx) * 0.1031);
    p3 += dot(p3, p3.yzx + 33.33);
    return fract((p3.x + p3.y) * p3.z) * 2.0 - 1.0;
}

// 1D value noise with smoothstep fade (smooth_noise in C)
float smoothNoise(float x, float seed) {
    float i = floor(x);
    float f = x - i;
    float u = f * f * (3.0 - 2.0 * f);
    return mix(hash12(vec2(i, seed)), hash12(vec2(i + 1.0, seed)), u);
}

// Periodic 32x64 lattice (stands in for sync_lattice[64][32])
float latticeAt(float x, float y) {
    return hash12(vec2(mod(x, 32.0), mod(y, 64.0)) + vec2(3.17, 11.3));
}

float cubic(float p0, float p1, float p2, float p3, float x) {
    return p1 + 0.5 * x * (p2 - p0 + x * (2.0 * p0 - 5.0 * p1 + 4.0 * p2 - p3 +
           x * (3.0 * (p1 - p2) + p3 - p0)));
}

float latticeRow(float ix, float y, float fx) {
    return cubic(latticeAt(ix, y), latticeAt(ix + 1.0, y),
                 latticeAt(ix + 2.0, y), latticeAt(ix + 3.0, y), fx);
}

float latticeNoise(vec2 p) {
    vec2 i = floor(p) - 1.0;
    vec2 f = fract(p);
    return cubic(latticeRow(i.x, i.y,       f.x),
                 latticeRow(i.x, i.y + 1.0, f.x),
                 latticeRow(i.x, i.y + 2.0, f.x),
                 latticeRow(i.x, i.y + 3.0, f.x), f.y);
}

// Horizontal line-sync jitter in pixels, 4 octaves
float lineSyncOffset(float row, float h, float w, float t, float zoom, float strength) {
    if (strength <= 0.0) return 0.0;
    float sum = 0.0;
    float amp = strength;
    float space = 4.567 / zoom;
    float ts = 6.213;
    for (int i = 0; i < 4; i++) {
        float x = mod(2.0 * (row + 1.0) * space / h, 32.0);
        float y = mod(2.0 * t * ts, 64.0);
        sum += amp * 0.15 * w * latticeNoise(vec2(x, y));
        amp /= 2.71;
        space *= 2.231;
        ts *= 2.142;
    }
    return sum;
}

// ---------- lookup tables ----------

// interlace[10] = {.8,1.2,1.2,1.2,1.2,.8,.5,.2,.2,.5}
float interlaceAt(float i) {
    i = mod(i, 10.0);
    if (i < 0.5) return 0.8;
    if (i < 4.5) return 1.2;
    if (i < 5.5) return 0.8;
    if (i < 6.5) return 0.5;
    if (i < 8.5) return 0.2;
    return 0.5;
}
float interlaceLerp(float p) {
    p = mod(p, 10.0);
    float i = floor(p);
    return mix(interlaceAt(i), interlaceAt(i + 1.0), p - i);
}

// scan_shape[5] = {1,1.7,2.5,1.7,1}
float scanAt(float i) {
    i = mod(i, 5.0);
    if (i < 0.5) return 1.0;
    if (i < 1.5) return 1.7;
    if (i < 2.5) return 2.5;
    if (i < 3.5) return 1.7;
    return 1.0;
}
float scanLerp(float p) {
    p = mod(p, 5.0);
    float i = floor(p);
    return mix(scanAt(i), scanAt(i + 1.0), p - i);
}

// Aperture-grille RGB stripe mask (0..192 per channel)
vec3 maskAt(float i) {
    if (i < 0.5) return vec3(0.0);
    if (i < 1.5) return vec3(192.0, 0.0, 0.0);
    if (i < 2.5) return vec3(0.0, 192.0, 0.0);
    if (i < 3.5) return vec3(0.0, 0.0, 192.0);
    return vec3(0.0);
}
vec3 grille(float phase) {
    phase = mod(phase, 4.0);
    float i = floor(phase);
    return mix(maskAt(i), maskAt(i + 1.0), phase - i);
}

// ---------- main ----------

void main() {
    vec2 res = max(vec2(uWidth, uHeight), vec2(1.0));
    float w = res.x;
    float h = res.y;
    vec2 px = floor(vTexSamplingCoord * res);   // integer pixel (z, y)

    float zoom      = 1.0 + 3.0 * clamp(uControl1 - 1.0, 0.0, 1.0);
    float apGrill   = clamp(uControl2, 0.0, 1.0);
    float interlace = clamp(uControl3, 0.0, 1.0);
    float lineErr   = clamp(uControl4, 0.0, 1.0);
    float vertErr   = clamp(uControl5, 0.0, 1.0);
    float scanPh    = clamp(uControl6, 0.0, 1.0);
    float phos      = clamp(uControl7, 0.0, 1.0);
    float statik    = clamp(uControl8, 0.0, 1.0);
    float t         = uTime;   // may be negative at playback start; don't clamp

    vec2 c = (res - 1.0) * 0.5;
    float grilleStep = 10.0 / (2.0 * h * 0.011127083333333334) / zoom;
    float aperture = 0.75 * max(apGrill, statik);

    float jitter = smoothNoise(t * 6.0, 51.7) * 0.05 * phos;
    vec3 gamma = clamp(1.0 - vec3(0.6, 0.5, 0.15) * phos + jitter, 0.05, 2.0);

    // Vertical roll + zoom, wrapped
    float roll = mod(vertErr * h * (t * 0.3333333 + 0.137), h);
    float sy = mod((px.y - c.y) / zoom + c.y + roll, h);

    // Per-line horizontal jitter
    float lineJitter = lineSyncOffset(floor(sy), h, w, t, zoom, lineErr);

    // Interlace brightness pattern
    float scan = (1.0 - interlace) + interlace * interlaceLerp(sy);

    // Rolling bright scan band
    if (scanPh > 0.0001) {
        float sh = h * 0.35 * zoom;
        float phase = mod(t * 3.0 * scanPh, 1.0);
        float center = phase * (h * zoom + sh) - sh * 0.5 + (h - h * zoom) * 0.5;
        float s0 = center - sh * 0.5;
        if (px.y > s0 && px.y <= s0 + sh)
            scan *= scanLerp(4.0 * (px.y - s0) / sh);
    }

    // Bilinear source sample with edge clamp
    float sx = (px.x - c.x) / zoom + c.x + lineJitter;
    vec2 uv = (clamp(vec2(sx, sy), vec2(0.0), res - 1.0) + 0.5) / res;
    vec4 src = texture2D(uTexSampler, uv);
    vec3 v = src.rgb * 255.0;

    // Grille + static grain
    float phaseG = px.x * grilleStep;
    vec3 grain = vec3(0.0);
    if (statik > 0.0) {
        float nx = phaseG * 0.5 + t * 23.0;
        float s = px.y * 3.0;
        grain = 127.5 * statik * vec3(smoothNoise(nx, s),
                                      smoothNoise(nx, s + 1.0),
                                      smoothNoise(nx, s + 2.0));
    }
    vec3 g = grille(phaseG) + grain;

    v = (v * (1.0 - aperture) + aperture * (2.0 * v * g / 256.0 + g * 0.25)) * scan;
    v = 255.0 * pow(clamp(v / 255.0, 0.0, 1.0), gamma);

    gl_FragColor = vec4(floor(v + 0.5) / 255.0, src.a);
}
""".trimStart('\n')

    val NOISE = """
precision highp float;
uniform sampler2D uTexSampler;
uniform float uTime;
uniform float uWidth;
uniform float uHeight;
uniform float uControl1;
uniform float uControl2;
varying vec2 vTexSamplingCoord;

// Animated grey value noise, drawn over the layer's own colour.
// Control 1: strength (0..1). Control 2: cell size in pixels (scaled by 8).
float hash(vec3 p) {
    p = fract(p * 0.1031);
    p += dot(p, p.yzx + 33.33);
    return fract((p.x + p.y) * p.z);
}

float valueNoise(vec2 p, float t) {
    vec2 i = floor(p);
    vec2 f = fract(p);
    vec2 u = f * f * (3.0 - 2.0 * f);
    float a = hash(vec3(i, t));
    float b = hash(vec3(i + vec2(1.0, 0.0), t));
    float c = hash(vec3(i + vec2(0.0, 1.0), t));
    float d = hash(vec3(i + vec2(1.0, 1.0), t));
    return mix(mix(a, b, u.x), mix(c, d, u.x), u.y);
}

void main() {
    vec2 uv = clamp(vTexSamplingCoord, 0.0, 1.0);
    vec4 base = texture2D(uTexSampler, uv);
    float cell = max(1.0, 8.0 * max(uControl2, 0.125));
    vec2 p = uv * vec2(max(uWidth, 1.0), max(uHeight, 1.0)) / cell;
    float frame = floor(uTime * 25.0);
    float n = 0.65 * valueNoise(p, frame) + 0.35 * valueNoise(p * 2.0, frame + 17.0);
    vec3 noisy = mix(base.rgb, vec3(n), clamp(uControl1, 0.0, 1.0));
    gl_FragColor = vec4(noisy, base.a);
}
""".trimStart('\n')

    val SOLID_BLACK = """
precision mediump float;
varying vec2 vTexSamplingCoord;

// Paints the frame opaque black (used where nothing covers the picture).
void main() {
    gl_FragColor = vec4(0.0, 0.0, 0.0, 1.0);
}
""".trimStart('\n')
}
