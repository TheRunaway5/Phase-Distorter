#ifndef SDL_MAIN_HANDLED
#define SDL_MAIN_HANDLED
#endif
#include "eb/controller_preferences.hpp"
#include <chrono>
#include <filesystem>
#include <fstream>
#include <iostream>
#include <iterator>
#include <stdexcept>
#include <string>

namespace {
unsigned checks{};
void require(bool condition, const std::string &message) {
    ++checks;
    if (!condition)
        throw std::runtime_error(message);
}
std::string path_text(const std::filesystem::path &path) {
    const auto utf8 = path.u8string();
    return {utf8.begin(), utf8.end()};
}
struct TemporaryDirectory {
    std::filesystem::path path =
        std::filesystem::temp_directory_path() /
        ("phase-controller-preferences-" +
         std::to_string(std::chrono::steady_clock::now().time_since_epoch().count()));
    TemporaryDirectory() { std::filesystem::create_directories(path); }
    ~TemporaryDirectory() {
        std::error_code ignored;
        std::filesystem::remove_all(path, ignored);
    }
};
void write_file(const std::filesystem::path &path, const std::string &contents) {
    std::ofstream output(path, std::ios::binary);
    output << contents;
}
std::string read_file(const std::filesystem::path &path) {
    std::ifstream input(path, std::ios::binary);
    return {std::istreambuf_iterator<char>(input), {}};
}
void roundtrip(const std::filesystem::path &directory) {
    const auto path = directory / std::filesystem::path(u8"設定") / "display.cfg.controllers";
    eb::ControllerSettings settings;
    settings.stick_deadzone = 0;
    for (std::size_t index = 0; index < settings.bindings.size(); ++index)
        settings.bindings[index] = int(index);
    settings.bindings.front() = -1;
    settings.bindings.back() = SDL_CONTROLLER_BUTTON_MAX - 1;
    eb::store_controller_settings(path_text(path), settings);
    require(eb::load_controller_settings(path_text(path)) == settings,
            "Controller preferences, unassigned bindings, and UTF-8 paths did "
            "not roundtrip");
    settings.stick_deadzone = 32766;
    settings.bindings.fill(-1);
    eb::store_controller_settings(path_text(path), settings);
    require(eb::load_controller_settings(path_text(path)) == settings,
            "Replacing controller preferences retained stale values");
    require(read_file(path).find("binding_B -1\n") != std::string::npos,
            "Unassigned bindings were not persisted explicitly");
    for (const auto &entry : std::filesystem::directory_iterator(path.parent_path()))
        require(entry.path() == path, "Successful write leaked a temporary preferences file");
}
void malformed_fields(const std::filesystem::path &directory) {
    const auto path = directory / "malformed.controllers";
    const eb::ControllerSettings defaults;
    write_file(path, "unknown 4\nstick_deadzone 32767\nbinding_B -2\nbinding_Y " +
                         std::to_string(SDL_CONTROLLER_BUTTON_MAX) +
                         "\nbinding_Select 2oops\nbinding_Start 999999999999999999999999\n"
                         "binding_Up\nbinding_Down 7 extra\nbinding_Left nan\n"
                         "binding_Right 0.5\nbinding_A -1\nbinding_X 0\nbinding_L "
                         "1\nbinding_R 2\n");
    auto expected = defaults;
    expected.bindings[8] = -1;
    expected.bindings[9] = 0;
    expected.bindings[10] = 1;
    expected.bindings[11] = 2;
    require(eb::load_controller_settings(path_text(path)) == expected,
            "Malformed fields disturbed defaults or prevented valid independent "
            "fields from loading");
    write_file(path, "stick_deadzone -1\nbinding_Unknown 2\n");
    require(eb::load_controller_settings(path_text(path)) == defaults,
            "Negative deadzone or unknown binding changed defaults");
    write_file(path, "stick_deadzone garbage\n");
    require(eb::load_controller_settings(path_text(path)) == defaults, "Malformed deadzone changed defaults");
    require(eb::load_controller_settings(path_text(directory / "missing.controllers")) == defaults,
            "Missing preferences did not use defaults");
}
void disabled_persistence(const std::filesystem::path &directory) {
    const eb::ControllerSettings defaults;
    auto changed = defaults;
    changed.bindings.fill(-1);
    changed.stick_deadzone = 0;
    const auto before =
        std::distance(std::filesystem::directory_iterator(directory), std::filesystem::directory_iterator{});
    eb::store_controller_settings("", changed);
    require(eb::load_controller_settings("") == defaults,
            "Empty preferences path did not disable loading and storing");
    require(std::distance(std::filesystem::directory_iterator(directory),
                          std::filesystem::directory_iterator{}) == before,
            "Disabled persistence created a file");
}
void failed_replacement(const std::filesystem::path &directory) {
    const auto destination = directory / "existing-directory";
    std::filesystem::create_directory(destination);
    write_file(destination / "keep", "previous settings");
    bool failed = false;
    try {
        eb::store_controller_settings(path_text(destination), {});
    } catch (const std::exception &) {
        failed = true;
    }
    require(failed, "Replacing a directory should report an error");
    require(read_file(destination / "keep") == "previous settings",
            "Failed controller preferences write damaged the destination");
    for (const auto &entry : std::filesystem::directory_iterator(directory))
        require(path_text(entry.path().filename()).find(".tmp.") == std::string::npos,
                "Failed controller preferences write leaked a temporary file");
}
} // namespace

int main() {
    try {
        TemporaryDirectory directory;
        roundtrip(directory.path);
        malformed_fields(directory.path);
        disabled_persistence(directory.path);
        failed_replacement(directory.path);
        std::cout << "PASS " << checks << " controller preferences contracts\n";
    } catch (const std::exception &error) {
        std::cerr << "FAIL: " << error.what() << '\n';
        return 1;
    }
}
