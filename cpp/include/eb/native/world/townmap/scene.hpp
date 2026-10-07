#pragma once
#include "eb/native/world/townmap/resources.hpp"
#include "eb/native/world_map_load.hpp"
#include "eb/native/world_music.hpp"
#include "eb/native/battle/psi_animation.hpp"
#include "eb/native/battle/frame_display.hpp"
#include "eb/native/world_scene_presentation.hpp"
#include "eb/native/world_display_fade.hpp"
namespace eb::native::world::townmap {
struct Owners {
  WorldRuntime &runtime;
  story::InputState &input;
  npcs::Interactions &interactions;
  WorldMapLoad &map_load;
  dialogue::WindowHost &windows;
  dialogue::WindowGraphics &graphics;
  party::State &party;
  story::TickState &clock;
  WorldScenePresentation &presentation;
  WorldEncounterVisualState &visual;
  WorldMusic &music;
  WorldMusicState &music_state;
  battle::PaletteBankState &palette;
  battle::PsiScratch &scratch;
  battle::PsiDisplayState &display;
  battle::FrameDisplay &frame_display;
  WorldDisplayFade &fade;
};
// Complete DISPLAY_TOWN_MAP continuation. Its waits borrow the actual scene;
// UPDATE_SCREEN follows each real input poll and becomes visible at next NMI.
// SHOW_TOWN_MAP's inventory admission and actor-pause caller are external.
class Scene {
public:
  class Operation {
  public:
    ~Operation();
    Operation(const Operation &)=delete;
    Operation &operator=(const Operation &)=delete;
    dialogue::Progress advance(unsigned work_budget=4096);
    WorldRuntime::Operation *runtime_operation() noexcept { return runtime_.get(); }
    bool complete() const noexcept { return done_; }
    std::uint16_t result() const;
  private:
    friend class Scene;
    Operation(Scene &,WorldRuntime::Operation *);
    void wait(bool publication_only=false);
    void draw();
    void prepare_window_artwork();
    Scene &owner_;
    WorldRuntime::Operation *parent_{};
    std::unique_ptr<WorldRuntime::Operation> runtime_;
    std::unique_ptr<WorldMapLoad::Operation> reload_;
    std::unique_ptr<dialogue::WindowGraphics::Operation> artwork_;
    std::uint16_t selector_{};
    unsigned phase_{},exit_frames_{};
    bool done_{},executing_{},distinct_{};
  };
  Scene(const Resources &,State &,Owners);
  std::unique_ptr<Operation> begin(WorldRuntime::Operation *parent=nullptr);
  bool uses(const story::Scene &) const noexcept;
  bool busy() const noexcept { return active_!=nullptr; }
  bool failed() const noexcept { return failed_; }
private:
  const Resources &resources_;
  State &state_;
  Owners owners_;
  Operation *active_{};
  bool failed_{};
};
}
