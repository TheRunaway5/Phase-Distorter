#pragma once
#include "eb/native/world_runtime.hpp"
#include "eb/native/world_display_fade.hpp"
#include "eb/native/battle/frame_display.hpp"
namespace eb::native {
// FADE_OUT_WITH_MOSAIC's actual Y=0 caller, including C0878B's retained
// display requests and final fresh NMI. Ordinary actors and battle ticks are
// not run by this synchronous display helper.
class WorldFadeOut {
public:
  class Operation {
  public:
    ~Operation();
    dialogue::Progress advance(unsigned budget=4096);
    WorldRuntime::Operation *runtime_operation() noexcept;
    bool complete() const noexcept;
  private:
    friend class WorldFadeOut;
    struct State;
    explicit Operation(std::unique_ptr<State>);
    std::unique_ptr<State> state_;
  };
  WorldFadeOut(WorldRuntime &, WorldDisplayFade &, battle::FrameDisplay &,
               story::TickState &, GameVersion);
  std::unique_ptr<Operation> begin(std::uint16_t magnitude, std::uint16_t delay);
  std::unique_ptr<Operation> begin_nested(std::uint16_t magnitude, std::uint16_t delay, WorldRuntime::Operation &parent);
private:
  WorldRuntime &runtime_;
  WorldDisplayFade &fade_;
  battle::FrameDisplay &frames_;
  story::TickState &clock_;
  GameVersion version_;
  Operation *active_{};
  bool failed_{};
};
}
