#include "eb/frame_presenter.hpp"

// This layer only uploads completed pictures. It never advances the game or
// changes the hardware framebuffer when adapting it to a host window.

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

FramePresenter::~FramePresenter() { glDeleteTextures(1, &texture_); }

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
    drawable_width_ = drawable_width;
    drawable_height_ = drawable_height;
    if (drawable_width <= 0 || drawable_height <= 0) return;
    // Keep capture dimensions at the full drawable size. Only the game's
    // viewport shrinks, leaving at least one row when a tiny window is resized.
    const int game_height = drawable_height - std::clamp(top_inset_pixels, 0, drawable_height - 1);
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
    const double view_height_exact = std::min(double(game_height), double(drawable_width) / display_aspect);
    const int view_width = std::min(drawable_width, int(std::lround(view_height_exact * display_aspect)));
    const int view_height = std::min(game_height, int(std::lround(view_height_exact)));
    // Reestablish our GL state each frame because the ImGui overlay uses the
    // same context. Clear the entire back buffer before applying letterboxing.
    glDisable(GL_DEPTH_TEST);
    glDisable(GL_BLEND);
    glDisable(GL_DITHER);
    glDisable(GL_SCISSOR_TEST);
    glEnable(GL_TEXTURE_2D);
    glClearColor(0, 0, 0, 1);
    glClear(GL_COLOR_BUFFER_BIT);
    // GL starts at the bottom: centering within game_height leaves the reserved
    // strip at the top, while the complete source texture remains in the quad.
    glViewport((drawable_width - view_width) / 2, (game_height - view_height) / 2, view_width, view_height);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glColor4f(1, 1, 1, 1);
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
