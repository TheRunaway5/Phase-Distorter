#pragma once

#include "eb/controller_settings.hpp"
#include <SDL.h>
#include <cstdint>

namespace eb {
// Internal desktop module. SDL's controller subsystem must outlive this owner.
// Produces a JOY1 mask; selecting/replaying inputs belongs to the application.
class DesktopInput {
  public:
    DesktopInput();
    ~DesktopInput();
    DesktopInput(const DesktopInput &) = delete;
    DesktopInput &operator=(const DesktopInput &) = delete;
    void process_device_event(const SDL_Event &event);
    std::uint16_t buttons() const;
    ControllerSnapshot controller_snapshot() const;
    void configure(const ControllerSettings &settings);

  private:
    void open_controller(int index);
    ControllerSnapshot sample_controller(bool include_identity) const;
    SDL_GameController *controller_ = nullptr;
    ControllerSettings settings_;
};
} // namespace eb
