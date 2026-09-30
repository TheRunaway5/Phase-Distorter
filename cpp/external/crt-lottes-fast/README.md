CRT-Lottes Fast (CRTS), Timothy Lottes; GLSL/RetroArch adaptation by hunterk.
Public domain / Unlicense; the complete license is in the vendored source.

Pinned upstream: https://github.com/libretro/glsl-shaders/blob/a8136d8b8b5c6375296f833e7e81efa15ed76f11/crt/shaders/crt-lottes-fast.glsl

`../../resources/shaders/crt_oled.frag` adapts its eight-tap Gaussian/cosine
reconstruction, linear-light phosphor mask and tone compensation for our
OpenGL 2.1 presenter. Geometry stays flat, without vignette or rounded corners.
Native pictures retain source-grid sampling; direct scenes sample the rendered
subpixel positions before applying native-height beams. Mask contrast and beam
strength taper at low display scales to avoid severe aliasing in small windows.
No temporal blending, persistence, frame history, or black-frame insertion.
The shader is embedded at build time; the executable needs no external shader.
