#include "eb/crt_filter.hpp"
#include "crt_shader_source.hpp"
#include <SDL.h>
#include <SDL_opengl.h>
#include <stdexcept>
#include <string>
#include <vector>

namespace eb {
namespace {
template<class T> T proc(const char* name) {
    auto value = reinterpret_cast<T>(SDL_GL_GetProcAddress(name));
    if (!value) throw std::runtime_error(std::string("CRT filter requires OpenGL 2.1: ") + name);
    return value;
}
}
struct CrtFilter::Impl {
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
    GL_PROC(PFNGLUNIFORM2FPROC, Uniform2f);
#undef GL_PROC
    GLuint program{}, copy{};
    int copy_width{}, copy_height{};
    ~Impl() { if (program) DeleteProgram(program); if (copy) glDeleteTextures(1, &copy); }
    GLuint shader(GLenum type, const char* source) {
        const GLuint result = CreateShader(type);
        ShaderSource(result, 1, &source, nullptr); CompileShader(result);
        GLint ok{}; GetShaderiv(result, GL_COMPILE_STATUS, &ok);
        if (!ok) {
            GLint length{}; GetShaderiv(result, GL_INFO_LOG_LENGTH, &length);
            std::vector<char> log(length + 1); GetShaderInfoLog(result, length, nullptr, log.data());
            DeleteShader(result);
            throw std::runtime_error(std::string("CRT shader compilation failed: ") + log.data());
        }
        return result;
    }
    void initialize() {
        static constexpr char vertex[] = "#version 120\nvarying vec2 UV; void main(){gl_Position=ftransform(); UV=gl_MultiTexCoord0.xy;}";
        const auto frag = shader(GL_FRAGMENT_SHADER, crt_oled_fragment);
        GLuint vert{};
        try { vert = shader(GL_VERTEX_SHADER, vertex); }
        catch (...) { DeleteShader(frag); throw; }
        program = CreateProgram(); AttachShader(program, vert); AttachShader(program, frag);
        LinkProgram(program); DeleteShader(vert); DeleteShader(frag);
        GLint ok{}; GetProgramiv(program, GL_LINK_STATUS, &ok);
        if (!ok) {
            GLint length{}; GetProgramiv(program, GL_INFO_LOG_LENGTH, &length);
            std::vector<char> log(length + 1); GetProgramInfoLog(program, length, nullptr, log.data());
            throw std::runtime_error(std::string("CRT shader link failed: ") + log.data());
        }
    }
};
CrtFilter::CrtFilter() : impl_(std::make_unique<Impl>()) { impl_->initialize(); }
CrtFilter::~CrtFilter() = default;
void CrtFilter::draw(unsigned native_texture, int source_width, int source_height, bool direct_scene) {
    auto& gl = *impl_;
    GLint viewport[4]{}; glGetIntegerv(GL_VIEWPORT, viewport);
    if (viewport[2] <= 0 || viewport[3] <= 0) return;
    glBindTexture(GL_TEXTURE_2D, 0);
    if (direct_scene) {
        // GPU-to-GPU copy of the game viewport only; no CPU readback, and no
        // resampling of fractional scene coordinates to a native framebuffer.
        if (!gl.copy) glGenTextures(1, &gl.copy);
        glBindTexture(GL_TEXTURE_2D, gl.copy);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
        if (gl.copy_width != viewport[2] || gl.copy_height != viewport[3]) {
            glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA8, viewport[2], viewport[3], 0, GL_RGBA, GL_UNSIGNED_BYTE, nullptr);
            gl.copy_width = viewport[2]; gl.copy_height = viewport[3];
        }
        glReadBuffer(GL_BACK);
        glCopyTexSubImage2D(GL_TEXTURE_2D, 0, 0, 0, viewport[0], viewport[1], viewport[2], viewport[3]);
    } else glBindTexture(GL_TEXTURE_2D, native_texture);
    gl.UseProgram(gl.program);
    gl.Uniform1i(gl.GetUniformLocation(gl.program, "Image"), 0);
    gl.Uniform1i(gl.GetUniformLocation(gl.program, "DirectScene"), direct_scene);
    gl.Uniform2f(gl.GetUniformLocation(gl.program, "RasterSize"), source_width, source_height);
    gl.Uniform2f(gl.GetUniformLocation(gl.program, "OutputSize"), viewport[2], viewport[3]);
    glBegin(GL_TRIANGLE_STRIP);
    glTexCoord2f(0, 1); glVertex2f(-1, -1);
    glTexCoord2f(1, 1); glVertex2f(1, -1);
    glTexCoord2f(0, 0); glVertex2f(-1, 1);
    glTexCoord2f(1, 0); glVertex2f(1, 1);
    glEnd();
    gl.UseProgram(0);
    glBindTexture(GL_TEXTURE_2D, 0);
    if (glGetError() != GL_NO_ERROR) throw std::runtime_error("OpenGL CRT filter failed");
}
} // namespace eb
