#pragma once

#include "eb/display_settings.hpp"
#include "eb/game_version.hpp"
#include <string>

namespace eb {
struct LaunchOptions;
// Malformed or unknown optional fields leave defaults in place. A valid saved
// game updates the caller's selection, which may later be overridden by the CLI.
DisplaySettings load_display_settings(const std::string &path, GameVersion &game);
// Load persisted settings, then apply only explicit launch overrides.
DisplaySettings resolve_display_settings(const LaunchOptions &options, GameVersion &game);
// A completed temporary write replaces the existing preferences atomically.
void store_display_settings(const std::string &path, const DisplaySettings &settings, GameVersion game);
} // namespace eb
