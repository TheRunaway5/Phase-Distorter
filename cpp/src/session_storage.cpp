#include "eb/session_storage.hpp"
#include "eb/frame_presenter.hpp"
#include <chrono>
#include <fstream>
#include <random>
#include <stdexcept>
#include <system_error>
#ifdef _WIN32
#ifndef NOMINMAX
#define NOMINMAX
#endif
#include <windows.h>
#endif

namespace eb {
namespace {
constexpr int width = 256;
constexpr int height = 224;
} // namespace

std::filesystem::path native_path(const std::string &path) {
    // CLI/SDL path strings are UTF-8; filesystem uses its native representation.
    return std::filesystem::path(std::u8string(path.begin(), path.end()));
}

const char *game_basename(eb::GameVersion version) {
    // Separate default packs and SRAM files prevent cross-region save mixing.
    return version == eb::GameVersion::JP ? "mother2" : "earthbound";
}

void load_save(const std::string &path, std::span<std::uint8_t> save_ram) {
    // SRAM is a raw fixed-size hardware image; missing means a fresh cartridge,
    // while a wrong-sized file is an error rather than a partially loaded save.
    const auto source_path = native_path(path);
    if (!std::filesystem::exists(source_path))
        return;
    if (std::filesystem::file_size(source_path) != save_ram.size())
        throw std::runtime_error("Save must contain exactly " + std::to_string(save_ram.size()) +
                                 " bytes: " + path);
    std::ifstream input(source_path, std::ios::binary);
    input.read(reinterpret_cast<char *>(save_ram.data()), static_cast<std::streamsize>(save_ram.size()));
    if (!input)
        throw std::runtime_error("Cannot read save: " + path);
}

void store_save(const std::string &path, std::span<const std::uint8_t> save_ram) {
    const auto destination = native_path(path);
    auto temporary = destination;
    // Keep the previous battery image until the replacement has fully closed.
    temporary += ".tmp." + std::to_string(std::random_device{}()) + "." +
                 std::to_string(std::chrono::steady_clock::now().time_since_epoch().count());
    try {
        std::ofstream output(temporary, std::ios::binary | std::ios::trunc);
        output.write(reinterpret_cast<const char *>(save_ram.data()),
                     static_cast<std::streamsize>(save_ram.size()));
        output.close();
        if (!output)
            throw std::runtime_error("Cannot write temporary save: " + path);
#ifdef _WIN32
        if (!MoveFileExW(temporary.c_str(), destination.c_str(),
                         MOVEFILE_REPLACE_EXISTING | MOVEFILE_WRITE_THROUGH))
            throw std::system_error(GetLastError(), std::system_category(), "Cannot replace save: " + path);
#else
        std::filesystem::rename(temporary, destination);
#endif
    } catch (...) {
        std::error_code ignored;
        std::filesystem::remove(temporary, ignored);
        throw;
    }
}

void screenshot(const std::string &path, std::span<const std::uint32_t, 256 * 224> pixels) {
    // Capture the unmodified native framebuffer for source/reference comparisons.
    // Widescreen and ImGui cannot change the bytes produced by this path.
    std::ofstream output(path, std::ios::binary);
    if (!output)
        throw std::runtime_error("Cannot create screenshot: " + path);
    output << "P6\n" << width << ' ' << height << "\n255\n";
    for (const auto pixel : pixels) {
        const char rgb[] = {static_cast<char>(pixel >> 16), static_cast<char>(pixel >> 8),
                            static_cast<char>(pixel)};
        output.write(rgb, sizeof rgb);
    }
    output.close();
    if (!output)
        throw std::runtime_error("Cannot write screenshot: " + path);
}

void presentation_screenshot(const std::string &path, std::span<const std::uint32_t> pixels,
                             int source_width) {
    // The adapted canvas includes extra scene columns, but excludes host scaling,
    // letterboxing, and overlays. GL capture separately records those host layers.
    // This is the picture sent to the host renderer, including an enabled
    // photosensitivity filter. The native screenshot remains unfiltered.
    eb::FrameImage image{source_width, height, {}};
    image.rgb.reserve(static_cast<std::size_t>(image.width) * image.height * 3);
    for (auto pixel : pixels) {
        image.rgb.push_back(static_cast<std::uint8_t>(pixel >> 16));
        image.rgb.push_back(static_cast<std::uint8_t>(pixel >> 8));
        image.rgb.push_back(static_cast<std::uint8_t>(pixel));
    }
    image.write_ppm(path);
}

} // namespace eb
