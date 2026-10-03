#pragma once

#include <SDL.h>
#include <array>
#include <cstdint>
#include <string>

namespace eb {
// Bindings use SDL's positional layout after Nintendo input is normalized.
// Order follows the SNES JOY1 register, from B at bit 15 through R at bit 4.
struct ControllerSettings {
    std::array<int, 12> bindings{SDL_CONTROLLER_BUTTON_A,
                                 SDL_CONTROLLER_BUTTON_X,
                                 SDL_CONTROLLER_BUTTON_BACK,
                                 SDL_CONTROLLER_BUTTON_START,
                                 SDL_CONTROLLER_BUTTON_DPAD_UP,
                                 SDL_CONTROLLER_BUTTON_DPAD_DOWN,
                                 SDL_CONTROLLER_BUTTON_DPAD_LEFT,
                                 SDL_CONTROLLER_BUTTON_DPAD_RIGHT,
                                 SDL_CONTROLLER_BUTTON_B,
                                 SDL_CONTROLLER_BUTTON_Y,
                                 SDL_CONTROLLER_BUTTON_LEFTSHOULDER,
                                 SDL_CONTROLLER_BUTTON_RIGHTSHOULDER};
    int stick_deadzone = 12000;
    bool operator==(const ControllerSettings &) const = default;
};

inline constexpr std::array<const char *, 12> snes_button_names{
    "B", "Y", "Select", "Start", "Up", "Down", "Left", "Right", "A", "X", "L", "R"};

struct ControllerSnapshot {
    bool connected = false;
    bool nintendo_layout = false;
    std::string name;
    std::array<bool, SDL_CONTROLLER_BUTTON_MAX> pressed{};
    int stick_x{}, stick_y{};
    std::uint16_t game_buttons{};
};

// Labels match physical Nintendo/SNES buttons or SDL's generic Xbox layout.
inline const char *controller_button_name(int button, bool nintendo_layout) {
    if (button < 0 || button >= SDL_CONTROLLER_BUTTON_MAX)
        return "Unassigned";
    switch (button) {
    case SDL_CONTROLLER_BUTTON_A:
        return nintendo_layout ? "B (bottom)" : "A (bottom)";
    case SDL_CONTROLLER_BUTTON_B:
        return nintendo_layout ? "A (right)" : "B (right)";
    case SDL_CONTROLLER_BUTTON_X:
        return nintendo_layout ? "Y (left)" : "X (left)";
    case SDL_CONTROLLER_BUTTON_Y:
        return nintendo_layout ? "X (top)" : "Y (top)";
    case SDL_CONTROLLER_BUTTON_BACK:
        return "Select / Back";
    case SDL_CONTROLLER_BUTTON_GUIDE:
        return "Home / Guide";
    case SDL_CONTROLLER_BUTTON_START:
        return "Start";
    case SDL_CONTROLLER_BUTTON_LEFTSTICK:
        return "Left stick click";
    case SDL_CONTROLLER_BUTTON_RIGHTSTICK:
        return "Right stick click";
    case SDL_CONTROLLER_BUTTON_LEFTSHOULDER:
        return "L / Left shoulder";
    case SDL_CONTROLLER_BUTTON_RIGHTSHOULDER:
        return "R / Right shoulder";
    case SDL_CONTROLLER_BUTTON_DPAD_UP:
        return "D-pad Up";
    case SDL_CONTROLLER_BUTTON_DPAD_DOWN:
        return "D-pad Down";
    case SDL_CONTROLLER_BUTTON_DPAD_LEFT:
        return "D-pad Left";
    case SDL_CONTROLLER_BUTTON_DPAD_RIGHT:
        return "D-pad Right";
    case SDL_CONTROLLER_BUTTON_MISC1:
        return "Capture / Misc";
    case SDL_CONTROLLER_BUTTON_PADDLE1:
        return "Paddle 1";
    case SDL_CONTROLLER_BUTTON_PADDLE2:
        return "Paddle 2";
    case SDL_CONTROLLER_BUTTON_PADDLE3:
        return "Paddle 3";
    case SDL_CONTROLLER_BUTTON_PADDLE4:
        return "Paddle 4";
    case SDL_CONTROLLER_BUTTON_TOUCHPAD:
        return "Touchpad";
    default:
        return "Unassigned";
    }
}
} // namespace eb
