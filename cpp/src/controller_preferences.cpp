#include "eb/controller_preferences.hpp"
#include <charconv>
#include <filesystem>
#include <fstream>
#include <random>
#include <sstream>
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
std::filesystem::path preferences_path(const std::string &path) {
    // SDL and launch options provide UTF-8 paths on every host.
    return std::filesystem::path(std::u8string(path.begin(), path.end()));
}
bool integer_value(const std::string &text, int &value) {
    const auto result = std::from_chars(text.data(), text.data() + text.size(), value);
    return result.ec == std::errc{} && result.ptr == text.data() + text.size();
}
} // namespace

ControllerSettings load_controller_settings(const std::string &path) {
    ControllerSettings settings;
    if (path.empty())
        return settings;
    std::ifstream input(preferences_path(path));
    std::string line;
    while (std::getline(input, line)) {
        std::istringstream fields(line);
        std::string key, text, extra;
        int value{};
        // Invalid lines do not consume the key or value from the next line.
        if (!(fields >> key >> text) || fields >> extra || !integer_value(text, value))
            continue;
        if (key == "stick_deadzone") {
            if (value >= 0 && value <= 32766)
                settings.stick_deadzone = value;
        } else if (value >= -1 && value < SDL_CONTROLLER_BUTTON_MAX) {
            for (std::size_t index = 0; index < snes_button_names.size(); ++index) {
                if (key == "binding_" + std::string(snes_button_names[index])) {
                    settings.bindings[index] = value;
                    break;
                }
            }
        }
    }
    return settings;
}

void store_controller_settings(const std::string &path, const ControllerSettings &settings) {
    if (path.empty())
        return;
    const auto destination = preferences_path(path);
    if (!destination.parent_path().empty())
        std::filesystem::create_directories(destination.parent_path());
    auto temporary = destination;
    temporary += ".tmp." + std::to_string(std::random_device{}());
    try {
        std::ofstream output(temporary);
        output << "stick_deadzone " << settings.stick_deadzone << '\n';
        for (std::size_t index = 0; index < snes_button_names.size(); ++index)
            output << "binding_" << snes_button_names[index] << ' ' << settings.bindings[index] << '\n';
        output.close();
        if (!output)
            throw std::runtime_error("Cannot write controller preferences: " + path);
#ifdef _WIN32
        if (!MoveFileExW(temporary.c_str(), destination.c_str(),
                         MOVEFILE_REPLACE_EXISTING | MOVEFILE_WRITE_THROUGH))
            throw std::system_error(GetLastError(), std::system_category(),
                                    "Cannot replace controller preferences");
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
