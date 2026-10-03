#include "desktop_input.hpp"
#include <algorithm>
#include <array>
#include <utility>

namespace eb {
DesktopInput::DesktopInput() {
    // The game maps by physical position. SDL defaults to printed Nintendo
    // labels, which otherwise reverses both face-button pairs on NSO pads.
    SDL_SetHintWithPriority(SDL_HINT_GAMECONTROLLER_USE_BUTTON_LABELS, "0", SDL_HINT_OVERRIDE);
    SDL_version version{};
    SDL_GetVersion(&version);
    if (SDL_VERSIONNUM(version.major, version.minor, version.patch) >= SDL_VERSIONNUM(2, 26, 0)) {
        // SDL2 lacks these Linux hid-nintendo mappings. Use SDL's upstream
        // positional rows, including name CRCs: Genesis Bluetooth shares the
        // SNES product ID, so matching VID/PID alone would be unsafe.
        // https://github.com/libsdl-org/SDL/blob/main/src/joystick/SDL_gamepad_db.h
        for (const char *mapping : {"030000007e0500001720000011810000,Nintendo SNES "
                                    "Controller,crc:f648,a:b0,b:b1,back:b8,dpdown:h0.4,dpleft:h0.8,"
                                    "dpright:h0.2,dpup:h0.1,leftshoulder:b4,lefttrigger:b6,rightshoulder:"
                                    "b5,righttrigger:b7,start:b9,x:b3,y:b2,platform:Linux,",
                                    "050000007e0500001720000001800000,Nintendo SNES "
                                    "Controller,crc:dbc0,a:b0,b:b1,back:b8,dpdown:h0.4,dpleft:h0.8,"
                                    "dpright:h0.2,dpup:h0.1,leftshoulder:b4,lefttrigger:b6,rightshoulder:"
                                    "b5,righttrigger:b7,start:b9,x:b3,y:b2,platform:Linux,"})
            SDL_GameControllerAddMapping(mapping);
    }
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
        // Select the next available pad, including one already connected.
        for (int index = 0; index < SDL_NumJoysticks(); ++index)
            open_controller(index);
    }
}
void DesktopInput::configure(const ControllerSettings &settings) {
    settings_ = settings;
    settings_.stick_deadzone = std::clamp(settings_.stick_deadzone, 0, 32766);
    for (auto &binding : settings_.bindings)
        if (binding < -1 || binding >= SDL_CONTROLLER_BUTTON_MAX)
            binding = -1;
}
ControllerSnapshot DesktopInput::controller_snapshot() const { return sample_controller(true); }
ControllerSnapshot DesktopInput::sample_controller(bool include_identity) const {
    ControllerSnapshot snapshot;
    if (!controller_ || !SDL_GameControllerGetAttached(controller_))
        return snapshot;
    snapshot.connected = true;
    if (include_identity) {
        if (const char *name = SDL_GameControllerName(controller_))
            snapshot.name = name;
        snapshot.nintendo_layout = SDL_GameControllerGetVendor(controller_) == 0x057e;
    }
    for (int button = 0; button < SDL_CONTROLLER_BUTTON_MAX; ++button)
        snapshot.pressed[button] =
            SDL_GameControllerGetButton(controller_, static_cast<SDL_GameControllerButton>(button)) != 0;
    for (unsigned index = 0; index < settings_.bindings.size(); ++index) {
        const int source = settings_.bindings[index];
        if (source >= 0 && source < SDL_CONTROLLER_BUTTON_MAX && snapshot.pressed[source])
            snapshot.game_buttons |= std::uint16_t(1u << (15 - index));
    }
    snapshot.stick_x = SDL_GameControllerGetAxis(controller_, SDL_CONTROLLER_AXIS_LEFTX);
    snapshot.stick_y = SDL_GameControllerGetAxis(controller_, SDL_CONTROLLER_AXIS_LEFTY);
    if (snapshot.stick_x < -settings_.stick_deadzone)
        snapshot.game_buttons |= 1u << 9;
    if (snapshot.stick_x > settings_.stick_deadzone)
        snapshot.game_buttons |= 1u << 8;
    if (snapshot.stick_y < -settings_.stick_deadzone)
        snapshot.game_buttons |= 1u << 11;
    if (snapshot.stick_y > settings_.stick_deadzone)
        snapshot.game_buttons |= 1u << 10;
    return snapshot;
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
    buttons |= sample_controller(false).game_buttons;

    return buttons;
}
void DesktopInput::open_controller(int index) {
    if (!controller_ && SDL_IsGameController(index))
        controller_ = SDL_GameControllerOpen(index);
}

} // namespace eb
