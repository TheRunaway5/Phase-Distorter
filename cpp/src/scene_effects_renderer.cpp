#include "eb/scene_effects_renderer.hpp"
#include <SDL.h>
#include <SDL_opengl.h>
#include <algorithm>
#include <cmath>
#include <limits>
#include <stdexcept>
#include <string>
#include <vector>

namespace eb {
namespace {
template<class T> T proc(const char* name) {
    auto value = reinterpret_cast<T>(SDL_GL_GetProcAddress(name));
    if (!value) throw std::runtime_error(std::string("Scene effects require OpenGL 2.1/FBO: ") + name);
    return value;
}
constexpr const char* vertex_source = R"GLSL(#version 120
varying vec2 UV;
void main() { gl_Position = ftransform(); UV = gl_MultiTexCoord0.xy; }
)GLSL";
const std::string window_source = R"GLSL(
uniform sampler2D Windows;
uniform vec2 ViewSize, ViewOrigin;
uniform float SourceWidth;
uniform bool Invert;
bool windowMask() {
    vec2 position = gl_FragCoord.xy - ViewOrigin;
    float x = clamp(floor(position.x * SourceWidth / ViewSize.x - (SourceWidth - 256.0) / 2.0), 0.0, 255.0);
    float y = clamp(floor((ViewSize.y - position.y) * 224.0 / ViewSize.y), 0.0, 223.0);
    vec4 row = floor(texture2D(Windows, vec2(0.5, (y + 0.5) / 224.0)) * 255.0 + 0.5);
    bool inside = (x >= row.r && x <= row.g) || (x >= row.b && x <= row.a);
    return Invert ? inside : !inside;
}
)GLSL";
const std::string layer_source = std::string("#version 120\n") + window_source + R"GLSL(
uniform sampler2D Atlas;
uniform bool Masked;
uniform float PixelAlpha;
varying vec2 UV;
void main() {
    vec4 pixel = texture2D(Atlas, UV);
    // Discard source transparency before depth/stencil. Output alpha is separate
    // semantic metadata: ineligible main pixels must still occlude lower layers.
    if (pixel.a == 0.0 || (Masked && windowMask())) discard;
    gl_FragColor = vec4(pixel.rgb, PixelAlpha);
}
)GLSL";
const std::string resolve_source = std::string("#version 120\n") + window_source + R"GLSL(
uniform sampler2D MainImage, SubImage;
uniform bool Masked, UseSubscreen, Subtract, Half;
uniform int Clip, Prevent;
uniform vec3 Fixed;
uniform float Brightness;
varying vec2 UV;
bool affected(int policy, bool inside) {
    return policy == 3 || (policy == 1 && !inside) || (policy == 2 && inside);
}
vec3 rgb5(vec3 rgb) { return floor(floor(rgb * 255.0 + 0.5) / 8.0); }
void main() {
    vec4 mainPixel = texture2D(MainImage, UV);
    vec4 subPixel = texture2D(SubImage, UV);
    bool inside = Masked && windowMask();
    bool clipped = affected(Clip, inside);
    vec3 color = clipped ? vec3(0.0) : rgb5(mainPixel.rgb);
    if (mainPixel.a > 0.5 && !affected(Prevent, inside)) {
        vec3 other = UseSubscreen ? rgb5(subPixel.rgb) : Fixed;
        color = Subtract ? max(vec3(0.0), color - other) : color + other;
        if (Half && !clipped && (!UseSubscreen || subPixel.a > 0.5)) color = floor(color / 2.0);
        color = min(vec3(31.0), color);
    }
    color = floor((color * Brightness + 7.0) / 15.0);
    gl_FragColor = vec4((color * 8.0 + floor(color / 4.0)) / 255.0, 1.0);
}
)GLSL";
void texture_parameters() {
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
}
}
struct SceneEffectsRenderer::Impl {
#define GL_PROC(type, name) type name = proc<type>("gl" #name)
    GL_PROC(PFNGLCREATESHADERPROC, CreateShader);
    GL_PROC(PFNGLSHADERSOURCEPROC, ShaderSource);
    GL_PROC(PFNGLCOMPILESHADERPROC, CompileShader);
    GL_PROC(PFNGLGETSHADERIVPROC, GetShaderiv);
    GL_PROC(PFNGLGETSHADERINFOLOGPROC, GetShaderInfoLog);
    GL_PROC(PFNGLDELETESHADERPROC, DeleteShader);
    GL_PROC(PFNGLCREATEPROGRAMPROC, CreateProgram);
    GL_PROC(PFNGLATTACHSHADERPROC, AttachShader);
    GL_PROC(PFNGLLINKPROGRAMPROC, LinkProgram);
    GL_PROC(PFNGLGETPROGRAMIVPROC, GetProgramiv);
    GL_PROC(PFNGLGETPROGRAMINFOLOGPROC, GetProgramInfoLog);
    GL_PROC(PFNGLDELETEPROGRAMPROC, DeleteProgram);
    GL_PROC(PFNGLUSEPROGRAMPROC, UseProgram);
    GL_PROC(PFNGLGETUNIFORMLOCATIONPROC, GetUniformLocation);
    GL_PROC(PFNGLUNIFORM1IPROC, Uniform1i);
    GL_PROC(PFNGLUNIFORM1FPROC, Uniform1f);
    GL_PROC(PFNGLUNIFORM2FPROC, Uniform2f);
    GL_PROC(PFNGLUNIFORM3FPROC, Uniform3f);
    GL_PROC(PFNGLACTIVETEXTUREPROC, ActiveTexture);
    GL_PROC(PFNGLGENFRAMEBUFFERSEXTPROC, GenFramebuffersEXT);
    GL_PROC(PFNGLDELETEFRAMEBUFFERSEXTPROC, DeleteFramebuffersEXT);
    GL_PROC(PFNGLBINDFRAMEBUFFEREXTPROC, BindFramebufferEXT);
    GL_PROC(PFNGLCHECKFRAMEBUFFERSTATUSEXTPROC, CheckFramebufferStatusEXT);
    GL_PROC(PFNGLFRAMEBUFFERTEXTURE2DEXTPROC, FramebufferTexture2DEXT);
    GL_PROC(PFNGLGENRENDERBUFFERSEXTPROC, GenRenderbuffersEXT);
    GL_PROC(PFNGLDELETERENDERBUFFERSEXTPROC, DeleteRenderbuffersEXT);
    GL_PROC(PFNGLBINDRENDERBUFFEREXTPROC, BindRenderbufferEXT);
    GL_PROC(PFNGLRENDERBUFFERSTORAGEEXTPROC, RenderbufferStorageEXT);
    GL_PROC(PFNGLFRAMEBUFFERRENDERBUFFEREXTPROC, FramebufferRenderbufferEXT);
#undef GL_PROC
    struct Program {
        GLuint id{};
        GLint windows{}, size{}, origin{}, source_width{}, invert{}, masked{}, alpha{};
    } layer, resolve;
    GLuint framebuffer{}, depth_stencil{}, images[2]{}, windows{};
    int width{}, height{};
    ~Impl() {
        if (layer.id) DeleteProgram(layer.id);
        if (resolve.id) DeleteProgram(resolve.id);
        if (framebuffer) DeleteFramebuffersEXT(1, &framebuffer);
        if (depth_stencil) DeleteRenderbuffersEXT(1, &depth_stencil);
        glDeleteTextures(2, images);
        if (windows) glDeleteTextures(1, &windows);
    }
    GLuint shader(GLenum type, const char* source) {
        auto id = CreateShader(type);
        ShaderSource(id, 1, &source, nullptr); CompileShader(id);
        GLint ok{}; GetShaderiv(id, GL_COMPILE_STATUS, &ok);
        if (!ok) {
            GLint length{}; GetShaderiv(id, GL_INFO_LOG_LENGTH, &length);
            std::vector<char> log(length + 1); GetShaderInfoLog(id, length, nullptr, log.data());
            DeleteShader(id); throw std::runtime_error(std::string("Scene effect shader: ") + log.data());
        }
        return id;
    }
    Program program(const std::string& fragment) {
        const auto frag = shader(GL_FRAGMENT_SHADER, fragment.c_str());
        GLuint vert{};
        try { vert = shader(GL_VERTEX_SHADER, vertex_source); }
        catch (...) { DeleteShader(frag); throw; }
        Program p; p.id = CreateProgram(); AttachShader(p.id, vert); AttachShader(p.id, frag);
        LinkProgram(p.id); DeleteShader(vert); DeleteShader(frag);
        GLint ok{}; GetProgramiv(p.id, GL_LINK_STATUS, &ok);
        if (!ok) {
            GLint length{}; GetProgramiv(p.id, GL_INFO_LOG_LENGTH, &length);
            std::vector<char> log(length + 1); GetProgramInfoLog(p.id, length, nullptr, log.data());
            DeleteProgram(p.id); throw std::runtime_error(std::string("Scene effect program: ") + log.data());
        }
        p.windows = GetUniformLocation(p.id, "Windows"); p.size = GetUniformLocation(p.id, "ViewSize");
        p.origin = GetUniformLocation(p.id, "ViewOrigin"); p.source_width = GetUniformLocation(p.id, "SourceWidth");
        p.invert = GetUniformLocation(p.id, "Invert"); p.masked = GetUniformLocation(p.id, "Masked");
        p.alpha = GetUniformLocation(p.id, "PixelAlpha");
        return p;
    }
    void initialize() {
        layer = program(layer_source); resolve = program(resolve_source);
        GenFramebuffersEXT(1, &framebuffer); GenRenderbuffersEXT(1, &depth_stencil);
        glGenTextures(2, images); glGenTextures(1, &windows);
        glBindTexture(GL_TEXTURE_2D, windows); texture_parameters();
        glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA8, 1, 224, 0, GL_RGBA, GL_UNSIGNED_BYTE, nullptr);
    }
    void storage(int w, int h) {
        BindFramebufferEXT(GL_FRAMEBUFFER_EXT, framebuffer);
        if (w != width || h != height) {
            for (auto image : images) {
                glBindTexture(GL_TEXTURE_2D, image); texture_parameters();
                glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA8, w, h, 0, GL_RGBA, GL_UNSIGNED_BYTE, nullptr);
            }
            BindRenderbufferEXT(GL_RENDERBUFFER_EXT, depth_stencil);
            RenderbufferStorageEXT(GL_RENDERBUFFER_EXT, GL_DEPTH24_STENCIL8_EXT, w, h);
            FramebufferRenderbufferEXT(GL_FRAMEBUFFER_EXT, GL_DEPTH_ATTACHMENT_EXT, GL_RENDERBUFFER_EXT, depth_stencil);
            FramebufferRenderbufferEXT(GL_FRAMEBUFFER_EXT, GL_STENCIL_ATTACHMENT_EXT, GL_RENDERBUFFER_EXT, depth_stencil);
            BindRenderbufferEXT(GL_RENDERBUFFER_EXT, 0);
            width = w; height = h;
        }
        glDrawBuffer(GL_COLOR_ATTACHMENT0_EXT);
        FramebufferTexture2DEXT(GL_FRAMEBUFFER_EXT, GL_COLOR_ATTACHMENT0_EXT, GL_TEXTURE_2D, images[0], 0);
        if (CheckFramebufferStatusEXT(GL_FRAMEBUFFER_EXT) != GL_FRAMEBUFFER_COMPLETE_EXT)
            throw std::runtime_error("Scene effect framebuffer is incomplete");
    }
    void common(const Program& p, const DirectSceneFrame& scene, int x, int y) {
        UseProgram(p.id); Uniform1i(p.windows, 2); Uniform2f(p.size, width, height);
        Uniform2f(p.origin, x, y); Uniform1f(p.source_width, scene.width);
        Uniform1i(p.invert, scene.effects->invert);
    }
    void cleanup(const GLint* viewport) {
        UseProgram(0); BindFramebufferEXT(GL_FRAMEBUFFER_EXT, 0);
        glDrawBuffer(GL_BACK); glReadBuffer(GL_BACK);
        glViewport(viewport[0], viewport[1], viewport[2], viewport[3]);
        for (int unit : {2, 1}) {
            ActiveTexture(GL_TEXTURE0 + unit); glBindTexture(GL_TEXTURE_2D, 0); glDisable(GL_TEXTURE_2D);
        }
        ActiveTexture(GL_TEXTURE0); glEnable(GL_TEXTURE_2D); glBindTexture(GL_TEXTURE_2D, 0);
        glDisable(GL_SCISSOR_TEST); glDisable(GL_STENCIL_TEST); glDisable(GL_ALPHA_TEST); glDisable(GL_DEPTH_TEST);
    }
};

SceneEffectsRenderer::SceneEffectsRenderer() : impl_(std::make_unique<Impl>()) { impl_->initialize(); }
SceneEffectsRenderer::~SceneEffectsRenderer() = default;
void SceneEffectsRenderer::draw(const DirectScenePicture& picture, unsigned atlas_texture) {
    if (!picture.artwork || !picture.artwork->effects || !atlas_texture)
        throw std::invalid_argument("Scene effect draw requires an effect scene and atlas");
    const auto& scene = *picture.artwork; const auto& effect = *scene.effects;
    if (effect.brightness > 15 || std::any_of(effect.fixed.begin(), effect.fixed.end(), [](auto c) { return c > 31; }))
        throw std::invalid_argument("Invalid scene effect color range");
    for (const auto& quad : scene.quads)
        if (unsigned(quad.layer) > 5 || quad.u > scene.atlas_width || quad.width > scene.atlas_width - quad.u ||
            quad.v > scene.atlas_height || quad.height > scene.atlas_height - quad.v)
            throw std::invalid_argument("Scene effect primitive exceeds its atlas");
    auto& gl = *impl_; GLint viewport[4]; glGetIntegerv(GL_VIEWPORT, viewport);
    if (viewport[2] <= 0 || viewport[3] <= 0) return;
    try {
        gl.ActiveTexture(GL_TEXTURE0); gl.storage(viewport[2], viewport[3]);
        gl.ActiveTexture(GL_TEXTURE2); glBindTexture(GL_TEXTURE_2D, gl.windows);
        glPixelStorei(GL_UNPACK_ALIGNMENT, 1);
        glTexSubImage2D(GL_TEXTURE_2D, 0, 0, 0, 1, 224, GL_RGBA, GL_UNSIGNED_BYTE, effect.windows.data());
        gl.ActiveTexture(GL_TEXTURE0); glBindTexture(GL_TEXTURE_2D, atlas_texture);
        glViewport(0, 0, viewport[2], viewport[3]);
        glDisable(GL_BLEND); glDisable(GL_ALPHA_TEST); glDisable(GL_DITHER);
        glDepthMask(GL_TRUE); glStencilMask(255); glClearDepth(1); glClearStencil(0);
        gl.common(gl.layer, scene, 0, 0); gl.Uniform1i(gl.GetUniformLocation(gl.layer.id, "Atlas"), 0);
        for (unsigned pass = 0; pass < 2; ++pass) {
            gl.FramebufferTexture2DEXT(GL_FRAMEBUFFER_EXT, GL_COLOR_ATTACHMENT0_EXT, GL_TEXTURE_2D, gl.images[pass], 0);
            const auto expand = [](unsigned c) { return float((c << 3) | (c >> 2)) / 255; };
            if (pass) glClearColor(expand(effect.fixed[0]), expand(effect.fixed[1]), expand(effect.fixed[2]), 0);
            else glClearColor(float((effect.backdrop >> 16) & 255) / 255, float((effect.backdrop >> 8) & 255) / 255,
                              float(effect.backdrop & 255) / 255, effect.math[5] ? 1 : 0);
            glDisable(GL_SCISSOR_TEST); glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT | GL_STENCIL_BUFFER_BIT);
            glEnable(GL_DEPTH_TEST); glDepthFunc(GL_LESS);
            glStencilFunc(GL_EQUAL, 0, 255); glStencilOp(GL_KEEP, GL_INCR, GL_INCR);
            for (const auto& quad : scene.quads) {
                const auto layer = unsigned(quad.layer);
                if (layer == 5 || !(pass ? effect.sub[layer] : effect.main[layer])) continue;
                if (quad.object) glEnable(GL_STENCIL_TEST); else glDisable(GL_STENCIL_TEST);
                gl.Uniform1i(gl.layer.masked, effect.masked[layer]);
                gl.Uniform1f(gl.layer.alpha, pass ? (quad.priority >= 0 ? 1 : 0) :
                    (quad.color_math_eligible && effect.math[layer] ? 1 : 0));
                const auto offset = quad.motion < picture.offsets.size() ? picture.offsets[quad.motion] : DirectScenePicture::Offset{};
                const float l = std::max(0.f, quad.clip.left), r = std::min(float(scene.width), quad.clip.right),
                            t = std::max(0.f, quad.clip.top), b = std::min(224.f, quad.clip.bottom);
                if (l >= r || t >= b) continue;
                if (l > 0 || r < scene.width || t > 0 || b < 224) {
                    const int x0 = int(std::ceil(l * gl.width / scene.width - .5f)), x1 = int(std::ceil(r * gl.width / scene.width - .5f)),
                              y0 = int(std::ceil(t * gl.height / 224 - .5f)), y1 = int(std::ceil(b * gl.height / 224 - .5f));
                    glEnable(GL_SCISSOR_TEST); glScissor(x0, gl.height - y1, x1 - x0, y1 - y0);
                } else glDisable(GL_SCISSOR_TEST);
                const float left = (quad.x + offset.x) * 2 / scene.width - 1, right = left + quad.width * 2.f / scene.width,
                            top = 1 - (quad.y + offset.y) * 2 / 224, bottom = top - quad.height * 2.f / 224,
                            z = .8f - quad.priority * .1f;
                const auto uv = [](float v) { return std::nextafter(v, std::numeric_limits<float>::infinity()); };
                const float u0 = uv(float(quad.u) / scene.atlas_width), u1 = uv(float(quad.u + quad.width) / scene.atlas_width),
                            v0 = uv(float(quad.v) / scene.atlas_height), v1 = uv(float(quad.v + quad.height) / scene.atlas_height);
                glBegin(GL_TRIANGLE_STRIP);
                glTexCoord2f(u0, v1); glVertex3f(left, bottom, z); glTexCoord2f(u1, v1); glVertex3f(right, bottom, z);
                glTexCoord2f(u0, v0); glVertex3f(left, top, z); glTexCoord2f(u1, v0); glVertex3f(right, top, z);
                glEnd();
            }
        }
        glDisable(GL_SCISSOR_TEST); glDisable(GL_STENCIL_TEST); glDisable(GL_DEPTH_TEST);
        gl.BindFramebufferEXT(GL_FRAMEBUFFER_EXT, 0); glDrawBuffer(GL_BACK);
        glViewport(viewport[0], viewport[1], viewport[2], viewport[3]);
        gl.ActiveTexture(GL_TEXTURE1); glBindTexture(GL_TEXTURE_2D, gl.images[1]);
        gl.ActiveTexture(GL_TEXTURE0); glBindTexture(GL_TEXTURE_2D, gl.images[0]);
        gl.common(gl.resolve, scene, viewport[0], viewport[1]);
        const auto uniform = [&](const char* name, int value) { gl.Uniform1i(gl.GetUniformLocation(gl.resolve.id, name), value); };
        uniform("MainImage", 0); uniform("SubImage", 1); uniform("Masked", effect.masked[5]);
        uniform("UseSubscreen", effect.use_subscreen); uniform("Subtract", effect.subtract); uniform("Half", effect.half);
        uniform("Clip", int(effect.clip)); uniform("Prevent", int(effect.prevent));
        gl.Uniform3f(gl.GetUniformLocation(gl.resolve.id, "Fixed"), effect.fixed[0], effect.fixed[1], effect.fixed[2]);
        gl.Uniform1f(gl.GetUniformLocation(gl.resolve.id, "Brightness"), effect.brightness);
        glBegin(GL_TRIANGLE_STRIP);
        glTexCoord2f(0, 0); glVertex2f(-1, -1); glTexCoord2f(1, 0); glVertex2f(1, -1);
        glTexCoord2f(0, 1); glVertex2f(-1, 1); glTexCoord2f(1, 1); glVertex2f(1, 1);
        glEnd();
        if (glGetError() != GL_NO_ERROR) throw std::runtime_error("OpenGL scene effect composition failed");
    } catch (...) { gl.cleanup(viewport); throw; }
    gl.cleanup(viewport);
}
}
