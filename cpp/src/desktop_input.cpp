#include "desktop_input.hpp"
#include <array>
#include <utility>

namespace eb {
DesktopInput::DesktopInput() {
    for (int index = 0; index < SDL_NumJoysticks(); ++index)
        open_controller(index);
}
DesktopInput::~DesktopInput() {
    if (controller_)
        SDL_GameControllerClose(controller_);
}
void DesktopInput::process_device_event(const SDL_Event &event) {
    if (event.type == SDL_CONTROLLERDEVICEADDED)
        open_controller(event.cdevice.which);
    if (event.type == SDL_CONTROLLERDEVICEREMOVED && controller_ &&
        SDL_JoystickInstanceID(SDL_GameControllerGetJoystick(controller_)) == event.cdevice.which) {
        SDL_GameControllerClose(controller_);
        controller_ = nullptr;
    }
}
std::uint16_t DesktopInput::buttons() const {
    std::uint16_t buttons = 0;
    const auto *keys = SDL_GetKeyboardState(nullptr);
    // Bit positions match the SNES JOY1 register layout, not SDL key values.
    const std::array<std::pair<SDL_Scancode, unsigned>, 12> key_map{{{SDL_SCANCODE_Z, 15},
                                                                     {SDL_SCANCODE_A, 14},
                                                                     {SDL_SCANCODE_RSHIFT, 13},
                                                                     {SDL_SCANCODE_RETURN, 12},
                                                                     {SDL_SCANCODE_UP, 11},
                                                                     {SDL_SCANCODE_DOWN, 10},
                                                                     {SDL_SCANCODE_LEFT, 9},
                                                                     {SDL_SCANCODE_RIGHT, 8},
                                                                     {SDL_SCANCODE_X, 7},
                                                                     {SDL_SCANCODE_S, 6},
                                                                     {SDL_SCANCODE_Q, 5},
                                                                     {SDL_SCANCODE_W, 4}}};
    for (const auto &[key, bit] : key_map)
        if (keys[key])
            buttons |= std::uint16_t(1u << bit);
    if (controller_) {
        const std::array<std::pair<SDL_GameControllerButton, unsigned>, 12> button_map{
            {{SDL_CONTROLLER_BUTTON_A, 15},
             {SDL_CONTROLLER_BUTTON_X, 14},
             {SDL_CONTROLLER_BUTTON_BACK, 13},
             {SDL_CONTROLLER_BUTTON_START, 12},
             {SDL_CONTROLLER_BUTTON_DPAD_UP, 11},
             {SDL_CONTROLLER_BUTTON_DPAD_DOWN, 10},
             {SDL_CONTROLLER_BUTTON_DPAD_LEFT, 9},
             {SDL_CONTROLLER_BUTTON_DPAD_RIGHT, 8},
             {SDL_CONTROLLER_BUTTON_B, 7},
             {SDL_CONTROLLER_BUTTON_Y, 6},
             {SDL_CONTROLLER_BUTTON_LEFTSHOULDER, 5},
             {SDL_CONTROLLER_BUTTON_RIGHTSHOULDER, 4}}};
        for (const auto &[button, bit] : button_map)
            if (SDL_GameControllerGetButton(controller_, button))
                buttons |= std::uint16_t(1u << bit);
        const int axis_x = SDL_GameControllerGetAxis(controller_, SDL_CONTROLLER_AXIS_LEFTX);
        const int axis_y = SDL_GameControllerGetAxis(controller_, SDL_CONTROLLER_AXIS_LEFTY);
        if (axis_x < -12000)
            buttons |= 1u << 9;
        if (axis_x > 12000)
            buttons |= 1u << 8;
        if (axis_y < -12000)
            buttons |= 1u << 11;
        if (axis_y > 12000)
            buttons |= 1u << 10;
    }

    return buttons;
}
void DesktopInput::open_controller(int index) {
    if (!controller_ && SDL_IsGameController(index))
        controller_ = SDL_GameControllerOpen(index);
}

} // namespace eb
