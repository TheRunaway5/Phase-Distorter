#pragma once

#include "eb/display_settings.hpp"
#include "eb/game_version.hpp"
#include <cstdint>
#include <string>

namespace eb {
struct LaunchOptions {
    bool headless = false;
    // Explicit native Continue entry; zero retains the ordinary title path.
    unsigned native_continue_slot = 0;
    bool replay_only = false;
    bool vsync = true;
    bool audio = true;
    bool no_save = false;
    bool original_timing = false;
    bool debug = false;
    bool no_config = false;
    bool import_only = false;
    // A menu-selected game uses its own default cache, regardless of an initial
    // custom --assets path or environment override. These are internal options.
    bool default_assets_only = false;
    bool start_fullscreen = false;
    // Distinguish explicit CLI choices from defaults so preferences can fill in
    // unspecified values without undoing a user's command-line override.
    bool aspect_override = false;
    bool widescreen_override = false;
    bool flashing_override = false;
    bool crt_override = false;
    bool vrr_override = false;
    bool fps_override = false;
    bool interpolation_override = false;
    bool direct_rendering_override = false;
    bool game_override = false;
    GameVersion game = GameVersion::US;
    DisplaySettings display;
    std::uint64_t frames = 0;
    std::uint64_t steps = 0;
    std::uint16_t buttons = 0;
    int scale = 3;
    std::string screenshot;
    std::string gl_screenshot;
    std::string save;
    std::string wav;
    std::string input_script;
    std::string presentation_screenshot;
    std::string assets;
    std::string import_rom;
    std::string config;
};

struct PendingGameSwitch {
    GameVersion game;
    DisplaySettings display;
    bool fullscreen;
};

// Parse all CLI options before opening application files or creating a window.
// Explicit override flags preserve the precedence of CLI settings over preferences.
LaunchOptions parse_options(int argc, char **argv);
} // namespace eb
