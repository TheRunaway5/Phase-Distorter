#define SDL_MAIN_HANDLED
#include "desktop_input.hpp"
#include <SDL.h>
#include <array>
#include <iostream>
#include <stdexcept>
#include <string>
#include <utility>

namespace {
unsigned checks{};
void require(bool condition, const std::string &message) {
    ++checks;
    if (!condition)
        throw std::runtime_error(message);
}
struct VirtualController {
    int index;
    SDL_Joystick *joystick;
    VirtualController(const char *name = "SNES Controller", Uint16 vendor = 0x057e, Uint16 product = 0x2017) {
        SDL_VirtualJoystickDesc desc{};
        desc.version = SDL_VIRTUAL_JOYSTICK_DESC_VERSION;
        desc.type = SDL_JOYSTICK_TYPE_GAMECONTROLLER;
        desc.naxes = 2;
        desc.nbuttons = SDL_CONTROLLER_BUTTON_MAX;
        desc.nhats = 1;
        desc.vendor_id = vendor;
        desc.product_id = product;
        desc.name = name;
        index = SDL_JoystickAttachVirtualEx(&desc);
        require(index >= 0, SDL_GetError());
        joystick = SDL_JoystickOpen(index);
        require(joystick != nullptr, SDL_GetError());
    }
    ~VirtualController() {
        SDL_JoystickClose(joystick);
        SDL_JoystickDetachVirtual(index);
    }
    void mapping(const std::string &fields) {
        char guid[33]{};
        SDL_JoystickGetGUIDString(SDL_JoystickGetGUID(joystick), guid, sizeof(guid));
        require(SDL_GameControllerAddMapping((std::string(guid) + ",Test controller," + fields).c_str()) >= 0,
                SDL_GetError());
    }
    void press(int button, bool down) {
        require(SDL_JoystickSetVirtualButton(joystick, button, down) == 0, SDL_GetError());
        SDL_JoystickUpdate();
    }
};
const char *common = "back:b4,start:b6,leftshoulder:b9,rightshoulder:b10,dpup:"
                     "b11,dpdown:b12,dpleft:b13,dpright:b14,leftx:a0,lefty:a1,";

void snes_contract(bool initial_labels) {
    SDL_SetHintWithPriority(SDL_HINT_GAMECONTROLLER_USE_BUTTON_LABELS, initial_labels ? "1" : "0",
                            SDL_HINT_OVERRIDE);
    VirtualController pad;
    pad.mapping(std::string("a:b0,b:b1,x:b2,y:b3,") + common);
    eb::DesktopInput input;
    // Virtual pads lack HIDAPI's hint callback. Replay its exact face mapping
    // after the application chooses the SDL layout, through real SDL sampling.
    const bool labels = SDL_GetHintBoolean(SDL_HINT_GAMECONTROLLER_USE_BUTTON_LABELS, SDL_TRUE);
    pad.mapping(std::string(labels ? "a:b0,b:b1,x:b2,y:b3," : "a:b1,b:b0,x:b3,y:b2,") + common);
    for (const auto &[button, mask] : std::array<std::pair<int, std::uint16_t>, 12>{{{0, 0x0080},
                                                                                     {1, 0x8000},
                                                                                     {2, 0x0040},
                                                                                     {3, 0x4000},
                                                                                     {4, 0x2000},
                                                                                     {6, 0x1000},
                                                                                     {9, 0x0020},
                                                                                     {10, 0x0010},
                                                                                     {11, 0x0800},
                                                                                     {12, 0x0400},
                                                                                     {13, 0x0200},
                                                                                     {14, 0x0100}}}) {
        pad.press(button, true);
        require(input.buttons() == mask, "SNES physical button " + std::to_string(button) +
                                             ": expected JOY1 " + std::to_string(mask) + ", got " +
                                             std::to_string(input.buttons()));
        require(input.controller_snapshot().game_buttons == mask, "Preview disagrees with gameplay");
        pad.press(button, false);
        require(input.buttons() == 0, "Released button remained held");
    }
    require(!labels, "Nintendo layout was not normalized to positions");
    const auto state = input.controller_snapshot();
    require(state.connected && state.nintendo_layout && !state.name.empty(), "Controller status missing");
    pad.press(0, true);
    pad.press(1, true);
    require(input.buttons() == 0x8080, "Simultaneous A/B did not combine");
    pad.press(1, false);
    auto remap = eb::ControllerSettings{};
    remap.bindings[8] = -1;
    remap.bindings[0] = SDL_CONTROLLER_BUTTON_B;
    input.configure(remap);
    require(input.buttons() == 0x8000, "Live remapping was not applied");
    require(input.controller_snapshot().pressed[SDL_CONTROLLER_BUTTON_B], "Remapping hid physical preview");
    remap.bindings[0] = -1;
    input.configure(remap);
    require(input.buttons() == 0, "Unassigned input still reached game");
    input.configure({});
    require(input.buttons() == 0x0080, "Restoring defaults did not restore SNES A");
    pad.press(0, false);
}
void linux_contract() {
#ifdef __linux__
    eb::DesktopInput registration;
    for (const auto *guid : {"030048f67e0500001720000011810000", "0500c0db7e0500001720000001800000"}) {
        char *mapping = SDL_GameControllerMappingForGUID(SDL_JoystickGetGUIDFromString(guid));
        require(mapping != nullptr, "SNES Linux USB/Bluetooth mapping missing");
        std::string fields(mapping);
        SDL_free(mapping);
        require(fields.find("x:b3") != std::string::npos && fields.find("y:b2") != std::string::npos,
                "Linux SNES X/Y was not positional");
        VirtualController pad;
        pad.mapping(fields.substr(fields.find(',', fields.find(',') + 1) + 1));
        eb::DesktopInput input;
        // Linux hid-nintendo emits B,A,X,Y,L,R,ZL,ZR,Select,Start.
        const std::array<std::uint16_t, 10> expected{0x8000, 0x0080, 0x0040, 0x4000, 0x0020,
                                                     0x0010, 0,      0,      0x2000, 0x1000};
        for (int button = 0; button < int(expected.size()); ++button) {
            pad.press(button, true);
            require(input.buttons() == expected[button], "Linux SNES button mapped incorrectly");
            pad.press(button, false);
        }
        for (const auto &[hat, mask] :
             std::array<std::pair<Uint8, std::uint16_t>, 5>{{{SDL_HAT_UP, 0x0800},
                                                             {SDL_HAT_DOWN, 0x0400},
                                                             {SDL_HAT_LEFT, 0x0200},
                                                             {SDL_HAT_RIGHT, 0x0100},
                                                             {SDL_HAT_RIGHTUP, 0x0900}}}) {
            require(SDL_JoystickSetVirtualHat(pad.joystick, 0, hat) == 0, SDL_GetError());
            SDL_JoystickUpdate();
            require(input.buttons() == mask, "Linux SNES D-pad mapped incorrectly");
        }
    }
    char *genesis =
        SDL_GameControllerMappingForGUID(SDL_JoystickGetGUIDFromString("0500bfc17e0500001720000001800000"));
    require(!genesis || std::string(genesis).find("Nintendo SNES Controller") == std::string::npos,
            "SNES mapping matched Genesis Bluetooth");
    SDL_free(genesis);
#endif
}
void hotplug_contract() {
    eb::DesktopInput input;
    require(!input.controller_snapshot().connected, "Disconnected status stale");
    {
        VirtualController pad("Generic gamepad", 0x1234, 0x5678);
        pad.mapping(std::string("a:b0,b:b1,x:b2,y:b3,") + common);
        SDL_Event added{};
        added.type = SDL_CONTROLLERDEVICEADDED;
        added.cdevice.which = pad.index;
        input.process_device_event(added);
        require(input.controller_snapshot().connected && !input.controller_snapshot().nintendo_layout,
                "Hotplug status incorrect");
        for (const auto &[button, mask] : std::array<std::pair<int, std::uint16_t>, 4>{
                 {{0, 0x8000}, {1, 0x0080}, {2, 0x4000}, {3, 0x0040}}}) {
            pad.press(button, true);
            require(input.buttons() == mask, "Generic face-button position changed");
            pad.press(button, false);
        }
        require(SDL_JoystickSetVirtualAxis(pad.joystick, 0, 12000) == 0, SDL_GetError());
        SDL_JoystickUpdate();
        require(input.buttons() == 0, "Deadzone boundary generated movement");
        require(SDL_JoystickSetVirtualAxis(pad.joystick, 0, 12001) == 0, SDL_GetError());
        SDL_JoystickUpdate();
        require(input.buttons() == 0x0100, "Stick beyond deadzone did not move");
        auto settings = eb::ControllerSettings{};
        settings.stick_deadzone = 20000;
        input.configure(settings);
        require(input.buttons() == 0, "Deadzone change did not apply live");
    }
    SDL_Event event{};
    while (SDL_PollEvent(&event))
        if (event.type == SDL_CONTROLLERDEVICEREMOVED)
            input.process_device_event(event);
    require(!input.controller_snapshot().connected && input.buttons() == 0, "Disconnect left stuck input");
    {
        VirtualController pad("Generic reconnected gamepad", 0x1234, 0x5678);
        pad.mapping(std::string("a:b0,b:b1,x:b2,y:b3,") + common);
        SDL_Event added{};
        added.type = SDL_CONTROLLERDEVICEADDED;
        added.cdevice.which = pad.index;
        input.process_device_event(added);
        pad.press(1, true);
        require(input.buttons() == 0x0080, "Reconnected controller unusable");
    }
}
} // namespace
int main() {
    try {
        SDL_SetMainReady();
        SDL_SetHint(SDL_HINT_JOYSTICK_HIDAPI, "0");
        SDL_SetHint(SDL_HINT_JOYSTICK_ALLOW_BACKGROUND_EVENTS, "1");
        require(SDL_Init(SDL_INIT_GAMECONTROLLER) == 0, SDL_GetError());
        snes_contract(true);
        snes_contract(false);
        linux_contract();
        hotplug_contract();
        SDL_Quit();
        std::cout << "Desktop controller input: " << checks << " checks passed\n";
        return 0;
    } catch (const std::exception &error) {
        std::cerr << error.what() << '\n';
        SDL_Quit();
        return 1;
    }
}
