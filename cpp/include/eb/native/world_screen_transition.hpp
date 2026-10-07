#pragma once
#include "eb/native/world_runtime.hpp"
#include "eb/native/world_teleport_resources.hpp"
#include "eb/native/world_display_fade.hpp"
#include "eb/native/world_encounter_effects.hpp"
#include "eb/native/world_navigation.hpp"
#include "eb/native/battle/frame_display.hpp"
#include <functional>

namespace eb::native {
struct WorldMapLoadState;
enum class ScreenTransitionCheckpoint {
  InitializeMotion, PauseActors, ClearObjects, MoveCamera, ProjectActors,
  RunActors, UpdateScreen, AdvanceEffects, WaitFrame, ConfigureSwirl,
  PrepareBrightness, PreparePalette, PaletteWait, AdvancePalette,
  ForceBlank, FillWhite, WhitePalette, WhiteWait, ResumeActors,
  BeginFadeIn, FinishPalette, ClearWindow
};
// C42631's retained 16.16 background motion words.
struct WorldScreenTransitionState {
  std::uint16_t x_fraction{}, x_velocity{}, y_fraction{}, y_velocity{};
  std::uint16_t x{}, y{}, x_remainder{}, y_remainder{};
  bool operator==(const WorldScreenTransitionState &) const = default;
};
struct WorldScreenTransitionOwners {
  WorldRuntime &runtime;
  ActorWorld &actors;
  battle::PaletteBankState &colors;
  battle::PsiScratch &scratch;
  battle::PsiDisplayState &display;
  battle::FrameDisplay &frames;
  WorldDisplayFade &fade;
  story::TickState &clock;
  WorldEncounterVisualState &visual;
  WorldEncounterEffects &effects;
  WorldNavigationState &navigation;
  const std::uint16_t &giygas_phase;
  PeripheralState *peripherals{};
  WorldMapLoadState *map_state{};
  WorldEncounter *swirl_setup{};
};
// Complete SCREEN_TRANSITION, including signed slide motion, authored swirl
// setup/playback, black/white palette ramps and actual actor/frame/input work.
// White records require the real map palette target owner; authored animation
// records require the actual shared swirl setup owner.
// Optional suspended TELEPORT parents and all owners outlive the child.
class WorldScreenTransition {
public:
  class Operation {
  public:
    ~Operation();
    Operation(const Operation &) = delete;
    Operation &operator=(const Operation &) = delete;
    dialogue::Progress advance(unsigned budget=4096);
    WorldRuntime::Operation *runtime_operation() noexcept;
    bool complete() const noexcept;
  private:
    friend class WorldScreenTransition;
    struct State;
    explicit Operation(std::unique_ptr<State>);
    std::unique_ptr<State> state_;
  };
  WorldScreenTransition(const WorldTeleportResources &, WorldScreenTransitionState &,
                        WorldScreenTransitionOwners);
  // entering=true is source X=1: fade out before LOAD_MAP. False is the
  // secondary transition after the new map has actually been loaded.
  void validate_begin(unsigned index, bool entering) const;
  void validate_begin(unsigned index, bool entering, WorldRuntime::Operation &parent) const;
  std::unique_ptr<Operation> begin(unsigned index, bool entering);
  std::unique_ptr<Operation> begin(unsigned index, bool entering, WorldRuntime::Operation &parent);
  bool uses(const WorldRuntime &, const ActorWorld &, const WorldDisplayFade &,
            const story::TickState &) const noexcept;
  // Read-only diagnostics at actual source work boundaries. Observers must
  // not mutate owners or start work; they cannot complete a service or frame.
  void observe(std::function<void(ScreenTransitionCheckpoint, bool entering, unsigned iteration)>);
private:
  void validate_impl(unsigned,bool,WorldRuntime::Operation *) const;
  std::unique_ptr<Operation> begin_impl(unsigned,bool,WorldRuntime::Operation *);
  const WorldTeleportResources &resources_;
  WorldScreenTransitionState &state_;
  WorldScreenTransitionOwners owners_;
  Operation *active_{};
  bool failed_{};
  std::function<void(ScreenTransitionCheckpoint,bool,unsigned)> observer_;
};
} // namespace eb::native
