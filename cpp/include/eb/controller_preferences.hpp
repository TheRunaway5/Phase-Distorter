#pragma once

#include "eb/controller_settings.hpp"
#include <string>

namespace eb {
// An empty path disables persistence. Missing, unknown, or malformed fields
// retain defaults; each binding accepts -1 (unassigned) or an SDL button.
ControllerSettings load_controller_settings(const std::string &path);
// Replace the preferences only after a complete temporary write.
void store_controller_settings(const std::string &path, const ControllerSettings &settings);
} // namespace eb
