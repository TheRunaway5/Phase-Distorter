#include "eb/display_preferences.hpp"
#include "eb/launch_options.hpp"
#include "eb/session_storage.hpp"
#include <cmath>
#include <fstream>
#include <iomanip>
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
eb::DisplaySettings load_display_settings(const std::string &path, eb::GameVersion &game) {
    // Preferences are optional and recoverable: unknown or malformed fields
    // retain defaults. Asset and save validation is intentionally stricter.
    eb::DisplaySettings settings;
    if (path.empty())
        return settings;
    std::ifstream input(native_path(path));
    std::string key, value;
    while (input >> key >> value) {
        try {
            std::size_t used = 0;
            if (key == "widescreen" && (value == "0" || value == "1"))
                settings.widescreen = value == "1";
            else if (key == "crt_filter" && (value == "0" || value == "1"))
                settings.crt_filter = value == "1";
            else if (key == "variable_refresh" && (value == "0" || value == "1"))
                settings.variable_refresh = value == "1";
            else if (key == "interpolate_frames" && (value == "0" || value == "1"))
                settings.interpolate_frames = value == "1";
            else if (key == "direct_rendering" && (value == "0" || value == "1"))
                settings.direct_rendering = value == "1";
            else if (key == "frame_limit") {
                const auto limit = std::stoi(value, &used);
                if (used == value.size() && eb::DisplaySettings::valid_frame_limit(limit))
                    settings.frame_limit = limit;
            } else if (key == "reduce_flashing" && (value == "0" || value == "1"))
                settings.reduce_flashing = value == "1";
            else if (key == "game" && (value == "earthbound" || value == "mother2"))
                game = value == "mother2" ? eb::GameVersion::JP : eb::GameVersion::US;
            else if (key == "aspect") {
                const auto aspect = std::stoi(value, &used);
                if (used == value.size() && aspect >= 0 && aspect <= int(eb::AspectRatio::Custom))
                    settings.aspect = static_cast<eb::AspectRatio>(aspect);
            } else if (key == "custom_aspect") {
                const auto aspect = std::stof(value, &used);
                if (used == value.size() && std::isfinite(aspect) && aspect >= 256.f / 224 &&
                    aspect <= 1024.f / 224)
                    settings.custom_aspect = aspect;
            }
        } catch (const std::exception &) { /* Ignore malformed preferences, retaining safe defaults. */
        }
    }
    return settings;
}

DisplaySettings resolve_display_settings(const LaunchOptions &options, GameVersion &game) {
    auto settings = load_display_settings(options.config, game);
    if (options.game_override)
        game = options.game;
    if (options.widescreen_override)
        settings.widescreen = options.display.widescreen;
    if (options.vrr_override)
        settings.variable_refresh = options.display.variable_refresh;
    if (options.fps_override)
        settings.frame_limit = options.display.frame_limit;
    if (options.interpolation_override)
        settings.interpolate_frames = options.display.interpolate_frames;
    if (options.direct_rendering_override)
        settings.direct_rendering = options.display.direct_rendering;
    if (options.crt_override)
        settings.crt_filter = options.display.crt_filter;
    if (options.flashing_override)
        settings.reduce_flashing = options.display.reduce_flashing;
    if (options.aspect_override) {
        settings.aspect = options.display.aspect;
        settings.custom_aspect = options.display.custom_aspect;
    }
    return settings;
}

void store_display_settings(const std::string &path, const eb::DisplaySettings &settings,
                            eb::GameVersion game) {
    if (path.empty())
        return;
    const auto destination = native_path(path);
    if (!destination.parent_path().empty())
        std::filesystem::create_directories(destination.parent_path());
    auto temporary = destination;
    // Replace only after a complete write so interrupted shutdown cannot leave
    // a half-written preferences file in place of the previous valid settings.
    temporary += ".tmp." + std::to_string(std::random_device{}());
    try {
        std::ofstream output(temporary);
        output << "widescreen " << int(settings.widescreen) << "\naspect " << int(settings.aspect)
               << "\nreduce_flashing " << int(settings.reduce_flashing) << "\nvariable_refresh "
               << int(settings.variable_refresh) << "\nframe_limit " << settings.frame_limit
               << "\ninterpolate_frames " << int(settings.interpolate_frames)
               << "\ncrt_filter " << int(settings.crt_filter)
               << "\ndirect_rendering " << int(settings.direct_rendering) << "\ncustom_aspect "
               << std::setprecision(9) << settings.custom_aspect << "\ngame " << game_basename(game) << '\n';
        output.close();
        if (!output)
            throw std::runtime_error("Cannot write display preferences: " + path);
#ifdef _WIN32
        if (!MoveFileExW(temporary.c_str(), destination.c_str(),
                         MOVEFILE_REPLACE_EXISTING | MOVEFILE_WRITE_THROUGH))
            throw std::system_error(GetLastError(), std::system_category(),
                                    "Cannot replace display preferences");
#else
        std::filesystem::rename(temporary, destination);
#endif
    } catch (...) {
        std::error_code ignored;
        std::filesystem::remove(temporary, ignored);
        throw;
    }
}

} // namespace eb
