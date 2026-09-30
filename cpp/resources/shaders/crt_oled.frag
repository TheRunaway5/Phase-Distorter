#version 120
// Flat OLED adaptation of Timothy Lottes' public-domain CRTS / CRT-Lottes Fast.
// Upstream source, full license and pinned attribution: external/crt-lottes-fast/.
// Eight-tap Gaussian reconstruction, cosine beams, phosphor mask and tone curve.
uniform sampler2D Image;
uniform vec2 RasterSize;
uniform vec2 OutputSize;
uniform bool DirectScene;
varying vec2 UV;

vec3 linearColor(vec3 c) {
    return mix(c / 12.92, pow((c + 0.055) / 1.055, vec3(2.4)), step(vec3(0.04045), c));
}
vec3 displayColor(vec3 c) {
    return mix(c * 12.92, 1.055 * pow(max(c, vec3(0.0)), vec3(1.0 / 2.4)) - 0.055,
               step(vec3(0.0031308), c));
}
vec3 fetch(vec2 p) {
    // A copied GL viewport is bottom-up; native uploaded pictures are top-down.
    if (DirectScene) p.y = 1.0 - p.y;
    return linearColor(texture2D(Image, p).rgb);
}
void main() {
    // Keep a full flat rectangle, including corner pixels. Reduce the beam
    // contrast in small windows where 224 scanlines cannot be resolved cleanly.
    float strength = smoothstep(1.5, 3.0, OutputSize.y / RasterSize.y);
    float thin = mix(0.5, 0.7, strength);
    vec2 pos = UV * RasterSize;
    float y0 = floor(pos.y - 0.5) + 0.5;
    float off = pos.y - y0;
    float scanA = cos(min(0.5, off * thin) * 6.28318530718) * 0.5 + 0.5;
    float scanB = cos(min(0.5, (1.0 - off) * thin) * 6.28318530718) * 0.5 + 0.5;
    vec3 color;
    if (DirectScene) {
        // Preserve the source renderer's fractional actor/camera positions.
        // Snapping this already-rendered image back to 224 rows would undo
        // high-FPS motion. Reconstruct continuously, then apply native beams.
        // Reconstruct in native-pixel units in both axes. A narrow horizontal
        // three-tap pass left direct scenes visibly sharper than canonical CRT
        // pictures. These continuous Gaussian taps follow fractional motion.
        // The viewport copy already spans a larger part of a source row at
        // small scales; narrow the added vertical kernel to compensate.
        float verticalSharpness = 22.0 + 2.0 * clamp(5.0 - OutputSize.y / RasterSize.y, 0.0, 2.0);
        color = vec3(0.0);
        float total = 0.0;
        for (int y = -1; y <= 1; ++y) {
            for (int x = -3; x <= 3; ++x) {
                vec2 delta = vec2(float(x), float(y)) * 0.5;
                float weight = exp2(-2.5 * delta.x * delta.x - verticalSharpness * delta.y * delta.y);
                color += fetch(UV + delta / RasterSize) * weight;
                total += weight;
            }
        }
        color /= total;
        color *= scanA + scanB;
    } else {
        float x0 = floor(pos.x - 1.5) + 0.5;
        vec4 distance = vec4(pos.x - x0) - vec4(0.0, 1.0, 2.0, 3.0);
        vec4 weight = exp2(-2.5 * distance * distance);
        weight /= dot(weight, vec4(1.0));
        vec2 p = vec2(x0, y0) / RasterSize;
        vec2 dx = vec2(1.0 / RasterSize.x, 0.0);
        vec2 dy = vec2(0.0, 1.0 / RasterSize.y);
        vec3 a = fetch(p) * weight.x + fetch(p + dx) * weight.y
               + fetch(p + 2.0 * dx) * weight.z + fetch(p + 3.0 * dx) * weight.w;
        p += dy;
        vec3 b = fetch(p) * weight.x + fetch(p + dx) * weight.y
               + fetch(p + 2.0 * dx) * weight.z + fetch(p + 3.0 * dx) * weight.w;
        color = a * scanA + b * scanB;
    }
    // CRTS' brighter aperture-grille mask: a modest full-pixel RGB pattern
    // independent of the panel's physical RGB, WRGB or QD-OLED subpixel layout.
    float dark = 1.0 - 0.35 * strength;
    float stripe = mod(floor(gl_FragCoord.x), 3.0);
    vec3 mask = vec3(1.0);
    if (stripe < 1.0) mask.r = dark;
    else if (stripe < 2.0) mask.g = dark;
    else mask.b = dark;
    color *= mask;
    // Lottes' peak-preserving tone curve compensates midtone brightness without
    // clipping individual channels or lifting OLED black to grey.
    float mid = 0.18 / ((1.5 - thin) * (0.75 + 0.25 * dark));
    float shoulder = (mid - 0.18) / (0.82 * mid);
    float toe = (0.18 - 0.18 * mid) / (0.82 * mid);
    float peak = max(max(color.r, color.g), max(color.b, 1.0 / 16777216.0));
    color /= peak * shoulder + toe;
    gl_FragColor = vec4(displayColor(color), 1.0);
}
