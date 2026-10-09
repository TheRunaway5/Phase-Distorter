#include "eb/frame_presenter.hpp"
#include "scene_draw_batch.hpp"

// This layer draws completed pictures or immutable source scenes. It never
// advances the game or changes the hardware framebuffer.

#include <SDL_opengl.h>

#include <algorithm>
#include <cmath>
#include <fstream>
#include <stdexcept>

namespace eb {
void FrameImage::write_ppm(const std::string& path) const {
    std::ofstream output(path, std::ios::binary);
    output << "P6\n" << width << ' ' << height << "\n255\n";
    output.write(reinterpret_cast<const char*>(rgb.data()), static_cast<std::streamsize>(rgb.size()));
    output.close();
    if (!output) throw std::runtime_error("Cannot write OpenGL screenshot: " + path);
}

FramePresenter::FramePresenter() {
    glGenTextures(1, &texture_);
    glBindTexture(GL_TEXTURE_2D, texture_);
    // Preserve pixel edges; texture filtering must not blend neighboring tiles.
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, nullptr);
    if (glGetError() != GL_NO_ERROR) {
        glDeleteTextures(1, &texture_);
        throw std::runtime_error("OpenGL framebuffer texture creation failed");
    }
}

FramePresenter::~FramePresenter() { glDeleteTextures(1, &texture_); if (scene_texture_) glDeleteTextures(1, &scene_texture_); }

void FramePresenter::draw(std::span<const std::uint32_t, width * height> pixels,
                          int drawable_width, int drawable_height) {
    draw(pixels, width, height, drawable_width, drawable_height);
}

void FramePresenter::draw(std::span<const std::uint32_t> pixels, int source_width, int source_height,
                          int drawable_width, int drawable_height, double display_aspect,
                          int top_inset_pixels) {
    // Check the dynamic span before conversion or allocation. This overload is
    // also used when the widescreen setting changes while the game is running.
    if (source_width <= 0 || source_height <= 0 || source_width > 4096 || source_height > 4096 ||
        pixels.size() != static_cast<std::size_t>(source_width) * source_height)
        throw std::invalid_argument("Invalid presentation framebuffer dimensions");
    if (display_aspect == 0) display_aspect = double(source_width) / source_height;
    if (!std::isfinite(display_aspect) || display_aspect <= 0)
        throw std::invalid_argument("Invalid display aspect ratio");
    if (!begin_draw(drawable_width, drawable_height, display_aspect, top_inset_pixels)) return;
    source_width_ = source_width; source_height_ = source_height; direct_scene_ = false;
    pixels_.resize(pixels.size() * 4);
    // Source words have a defined numeric ARGB layout. Extract channels instead
    // of uploading their machine-dependent in-memory byte representation.
    for (std::size_t index = 0; index < pixels.size(); ++index) {
        const auto pixel = pixels[index];
        pixels_[index * 4] = static_cast<std::uint8_t>(pixel >> 16);
        pixels_[index * 4 + 1] = static_cast<std::uint8_t>(pixel >> 8);
        pixels_[index * 4 + 2] = static_cast<std::uint8_t>(pixel);
        pixels_[index * 4 + 3] = 255;
    }
    // Force the fixed-function sampler to refresh after a canvas resize. On
    // NVIDIA, rebinding the same name can retain stale sampling state and turn
    // subsequent widescreen frames black, even though texture uploads succeed.
    glBindTexture(GL_TEXTURE_2D, 0);
    glBindTexture(GL_TEXTURE_2D, texture_);
    glPixelStorei(GL_UNPACK_ALIGNMENT, 1);
    // Reallocate texture storage only when canvas dimensions change, such as
    // switching aspect ratio. Ordinary frames replace pixels in existing storage.
    if (texture_width_ != source_width || texture_height_ != source_height) {
        glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, source_width, source_height, 0, GL_RGBA, GL_UNSIGNED_BYTE, nullptr);
        texture_width_ = source_width;
        texture_height_ = source_height;
    }
    glTexSubImage2D(GL_TEXTURE_2D, 0, 0, 0, source_width, source_height, GL_RGBA, GL_UNSIGNED_BYTE, pixels_.data());
    glBegin(GL_TRIANGLE_STRIP);
    // Source row zero is the top of the picture, opposite GL's screen origin.
    glTexCoord2f(0, 1); glVertex2f(-1, -1);
    glTexCoord2f(1, 1); glVertex2f(1, -1);
    glTexCoord2f(0, 0); glVertex2f(-1, 1);
    glTexCoord2f(1, 0); glVertex2f(1, 1);
    glEnd();
    if (glGetError() != GL_NO_ERROR) throw std::runtime_error("OpenGL framebuffer presentation failed");
}

bool FramePresenter::begin_draw(int drawable_width, int drawable_height, double display_aspect, int top_inset_pixels) {
    drawable_width_ = drawable_width;
    drawable_height_ = drawable_height;
    if (drawable_width <= 0 || drawable_height <= 0) return false;
    // Keep capture dimensions at the full drawable size. Only the game's
    // viewport shrinks, leaving at least one row when a tiny window is resized.
    const int game_height = drawable_height - std::clamp(top_inset_pixels, 0, drawable_height - 1);
    const double view_height_exact = std::min(double(game_height), double(drawable_width) / display_aspect);
    const int view_width = std::min(drawable_width, int(std::lround(view_height_exact * display_aspect)));
    const int view_height = std::min(game_height, int(std::lround(view_height_exact)));
    // Reestablish our GL state each frame because the ImGui overlay uses the
    // same context. Clear the entire back buffer before applying letterboxing.
    glDisable(GL_DEPTH_TEST);
    glDepthMask(GL_TRUE);
    glStencilMask(255);
    glDisable(GL_STENCIL_TEST);
    glDisable(GL_ALPHA_TEST);
    glDisable(GL_CULL_FACE);
    glDisable(GL_BLEND);
    glDisable(GL_DITHER);
    glDisable(GL_SCISSOR_TEST);
    glEnable(GL_TEXTURE_2D);
    glClearColor(0, 0, 0, 1);
    glClearDepth(1);
    glClearStencil(0);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT | GL_STENCIL_BUFFER_BIT);
    // GL starts at the bottom: centering within game_height leaves the reserved
    // strip at the top, while the complete source texture remains in the quad.
    glViewport((drawable_width - view_width) / 2, (game_height - view_height) / 2, view_width, view_height);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glColor4f(1, 1, 1, 1);
    return true;
}

bool FramePresenter::draw_scene(const DirectScenePicture& picture, int drawable_width, int drawable_height,
                                double display_aspect, int top_inset_pixels) {
    if (!picture.artwork) return false;
    const auto& scene = *picture.artwork;
    GLint depth{}, stencil{};
    glGetIntegerv(GL_DEPTH_BITS, &depth); glGetIntegerv(GL_STENCIL_BITS, &stencil);
    if ((!depth || !stencil) && !scene.effects) return false;
    if (!scene.width || !scene.atlas_width || !scene.atlas_height || scene.atlas_width > 4096 || scene.atlas_height > 4096 ||
        scene.atlas.size() != std::size_t(scene.atlas_width) * scene.atlas_height)
        throw std::invalid_argument("Invalid source scene atlas");
    if (display_aspect == 0) display_aspect = double(scene.width) / height;
    if (!std::isfinite(display_aspect) || display_aspect <= 0) throw std::invalid_argument("Invalid scene aspect");
    if (!begin_draw(drawable_width, drawable_height, display_aspect, top_inset_pixels)) return true;
    source_width_ = scene.width; source_height_ = height; direct_scene_ = true;
    // Rebind explicitly: retained fixed-function texture state can otherwise
    // sample black on repeated alpha-tested draws (also covered by readback).
    glBindTexture(GL_TEXTURE_2D, 0);
    if (!scene_texture_) {
        glGenTextures(1, &scene_texture_);
        glBindTexture(GL_TEXTURE_2D, scene_texture_);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
    } else glBindTexture(GL_TEXTURE_2D, scene_texture_);
    if (uploaded_scene_ != picture.artwork) {
        pixels_.resize(scene.atlas.size() * 4);
        for (std::size_t i = 0; i < scene.atlas.size(); ++i) {
            pixels_[4*i] = scene.atlas[i] >> 16; pixels_[4*i+1] = scene.atlas[i] >> 8;
            pixels_[4*i+2] = scene.atlas[i]; pixels_[4*i+3] = scene.atlas[i] >> 24;
        }
        glPixelStorei(GL_UNPACK_ALIGNMENT, 1);
        if (scene_texture_width_ != scene.atlas_width || scene_texture_height_ != scene.atlas_height) {
            glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA8, scene.atlas_width, scene.atlas_height, 0, GL_RGBA, GL_UNSIGNED_BYTE, nullptr);
            scene_texture_width_ = scene.atlas_width;
            scene_texture_height_ = scene.atlas_height;
        }
        glTexSubImage2D(GL_TEXTURE_2D, 0, 0, 0, scene.atlas_width, scene.atlas_height, GL_RGBA, GL_UNSIGNED_BYTE, pixels_.data());
        uploaded_scene_ = picture.artwork;
    }
    if (scene.effects) {
        if (!scene_effects_) scene_effects_ = std::make_unique<SceneEffectsRenderer>();
        scene_effects_->draw(picture, scene_texture_);
        return true;
    }
    glEnable(GL_ALPHA_TEST); glAlphaFunc(GL_GREATER, 0);
    glEnable(GL_DEPTH_TEST); glDepthFunc(GL_LESS);
    GLint viewport[4];
    glGetIntegerv(GL_VIEWPORT, viewport);
    bool objects = false;
    std::array<int, 4> scissor{};
    bool clipped = false;
    SceneDrawBatch batch(scene_vertices_);
    for (const auto& quad : scene.quads) {
        if (quad.object && !objects) {
            // The first opaque OBJ wins even if a background hides it. This
            // matches OAM selection before BG priority, unlike a Z buffer alone.
            batch.flush();
            objects = true; glEnable(GL_STENCIL_TEST);
            glStencilFunc(GL_EQUAL, 0, 255); glStencilOp(GL_KEEP, GL_INCR, GL_INCR);
        }
        const auto offset = quad.motion < picture.offsets.size() ? picture.offsets[quad.motion] : DirectScenePicture::Offset{};
        const float clipped_left = std::max(0.f, quad.clip.left),
                    clipped_right = std::min(float(scene.width), quad.clip.right),
                    clipped_top = std::max(0.f, quad.clip.top),
                    clipped_bottom = std::min(float(height), quad.clip.bottom);
        if (clipped_left >= clipped_right || clipped_top >= clipped_bottom) continue;
        const bool next_clipped = clipped_left > 0 || clipped_right < scene.width || clipped_top > 0 || clipped_bottom < height;
        std::array<int, 4> next_scissor{};
        if (next_clipped) {
            // Clip fragments after motion without changing the original quad
            // or UV interpolation. Cropping geometry can round exact nearest-
            // texel boundaries differently at fractional display positions.
            const int x0 = int(std::ceil(clipped_left * viewport[2] / scene.width - .5f)),
                      x1 = int(std::ceil(clipped_right * viewport[2] / scene.width - .5f)),
                      y0 = int(std::ceil(clipped_top * viewport[3] / height - .5f)),
                      y1 = int(std::ceil(clipped_bottom * viewport[3] / height - .5f));
            next_scissor = {viewport[0] + x0, viewport[1] + viewport[3] - y1, x1 - x0, y1 - y0};
        }
        if (next_clipped != clipped || (next_clipped && next_scissor != scissor)) {
            batch.flush();
            clipped = next_clipped; scissor = next_scissor;
            if (clipped) {
                glEnable(GL_SCISSOR_TEST);
                glScissor(scissor[0], scissor[1], scissor[2], scissor[3]);
            } else glDisable(GL_SCISSOR_TEST);
        }
        batch.append(quad, offset, scene);
    }
    batch.flush();
    glDisable(GL_SCISSOR_TEST); glDisable(GL_STENCIL_TEST); glDisable(GL_ALPHA_TEST); glDisable(GL_DEPTH_TEST);
    if (glGetError() != GL_NO_ERROR) throw std::runtime_error("OpenGL direct scene presentation failed");
    return true;
}

void FramePresenter::apply_crt(bool enabled) {
    if (!enabled || drawable_width_ <= 0 || drawable_height_ <= 0) return;
    if (!crt_) crt_ = std::make_unique<CrtFilter>();
    crt_->draw(texture_, source_width_, source_height_, direct_scene_);
}

void FramePresenter::prepare_scene_effects() {
    if (scene_effects_) return;
    scene_effects_ = std::make_unique<SceneEffectsRenderer>();
    auto scene = std::make_shared<DirectSceneFrame>();
    scene->width = scene->atlas_width = 1; scene->atlas_height = height;
    scene->atlas.assign(height, 0xff000000);
    scene->quads = {{0, 0, 1, height, 0, 0, 0, 0, false}};
    auto& effect = scene->effects.emplace();
    effect.main[0] = effect.sub[0] = effect.math[0] = true;
    effect.masked[0] = effect.masked[5] = effect.invert = true;
    for (auto& row : effect.windows) row = {255, 0, 255, 0};
    draw_scene({scene, {}}, 1, 1, 1);
    // Some drivers specialize shaders on their first use of uniform branches.
    effect.use_subscreen = effect.subtract = effect.half = true;
    effect.clip = DirectSceneFrame::WindowPolicy::Inside;
    effect.prevent = DirectSceneFrame::WindowPolicy::Inside;
    draw_scene({scene, {}}, 1, 1, 1);
    glFinish();
}

void FramePresenter::prepare_crt() {
    if (crt_) return;
    const std::array<std::uint32_t, 1> black{0xff000000};
    draw(black, 1, 1, 1, 1);
    apply_crt(true);
    // Some drivers compile the uniform-selected source path on its first draw.
    // Exercise both variants and finish the GPU work outside timed gameplay.
    crt_->draw(texture_, 1, 1, true);
    glFinish();
}

FrameImage FramePresenter::capture() const {
    if (drawable_width_ <= 0 || drawable_height_ <= 0)
        throw std::runtime_error("OpenGL framebuffer has no drawable area");
    FrameImage image{drawable_width_, drawable_height_, {}};
    const std::size_t row_bytes = static_cast<std::size_t>(drawable_width_) * 3;
    image.rgb.resize(row_bytes * drawable_height_);
    glPixelStorei(GL_PACK_ALIGNMENT, 1);
    glReadBuffer(GL_BACK);
    glReadPixels(0, 0, drawable_width_, drawable_height_, GL_RGB, GL_UNSIGNED_BYTE, image.rgb.data());
    if (glGetError() != GL_NO_ERROR) throw std::runtime_error("OpenGL screenshot readback failed");
    // Convert bottom-up GL readback to the top-down rows used by PPM and tests.
    for (int row = 0; row < drawable_height_ / 2; ++row) {
        auto top = image.rgb.begin() + row * row_bytes;
        auto bottom = image.rgb.begin() + (drawable_height_ - row - 1) * row_bytes;
        std::swap_ranges(top, top + row_bytes, bottom);
    }
    return image;
}
} // namespace eb
