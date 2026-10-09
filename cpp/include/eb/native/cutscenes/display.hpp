#pragma once
#include "eb/native/display/text_tiles.hpp"
#include "eb/native/cutscenes/display_view.hpp"
#include "eb/native/world_map_load.hpp"
#include "eb/native/world_scene_presentation.hpp"
#include "eb/native/world_fade_out.hpp"
#include "eb/native/world_music.hpp"
#include "eb/native/battle/background_loader.hpp"
#include "eb/native_audio.hpp"
namespace eb::native::cutscenes {
struct DisplayOwners {
  WorldRuntime &runtime;
  npcs::Interactions &interactions;
  ActorWorld &actors;
  WorldMapLoad &map_load;
  WorldMapLoadState &map_state;
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
  battle::PsiDisplayState &video;
  battle::FrameDisplay &frames;
  WorldDisplayFade &fade;
  BattleBackgroundScene &background;
  battle::BackgroundLoader &background_loader;
  battle::BackgroundDisplayState &layout;
  battle::DisplaySetup &blank;
  battle::Frame &battle_frame;
  battle::FrameState &frame_state;
  const WorldLayerConfigurations &layers;
  WorldLayerSelection &layer;
  NativeAudio &audio;
};
// Shared authored display helpers. Source scenes retain their own parser and
// sequence, and borrow this same publication/VRAM/palette/input timeline.
class Display {
public:
  enum class Kind { Blank, BackgroundAnimation, ReloadMap, RestoreWindows, FadeOut };
  class Operation {
  public:
    ~Operation();
    Operation(const Operation &)=delete;
    dialogue::Progress advance(unsigned budget=4096);
    WorldRuntime::Operation *runtime_operation() noexcept;
    bool complete() const noexcept {return done_;}
  private:
    friend class Display;
    Operation(Display &,Kind,WorldRuntime::Operation *);
    void wait(bool publication);
    void start_blank(battle::DisplayBlankKind);
    void finish_blank();
    void prepare_windows();
    Display &owner_;
    Kind kind_;
    WorldRuntime::Operation *parent_{};
    BattleBackgroundPair pair_{};
    unsigned phase_{};
    bool done_{},executing_{},source_blank_finished_{};
    std::unique_ptr<WorldRuntime::Operation> runtime_;
    std::unique_ptr<WorldMapLoad::Operation> map_;
    std::unique_ptr<dialogue::WindowGraphics::Operation> artwork_;
    std::unique_ptr<WorldFadeOut::Operation> fade_;
    std::unique_ptr<battle::DisplaySetup::SourceOperation> source_blank_;
  };
  Display(GameVersion,DisplayState &,DisplayOwners);
  DisplayOwners &owners() noexcept {return owners_;}
  const DisplayOwners &owners() const noexcept {return owners_;}
  DisplayState &state() noexcept {return state_;}
  GameVersion version() const noexcept {return version_;}
  void bind_source_work(story::SourceWorkService &);
  std::unique_ptr<Operation> blank(battle::DisplayBlankKind,WorldRuntime::Operation *parent=nullptr);
  std::unique_ptr<Operation> load_background_animation(BattleBackgroundPair,WorldRuntime::Operation *parent=nullptr);
  std::unique_ptr<Operation> reload_map(WorldRuntime::Operation *parent=nullptr);
  std::unique_ptr<Operation> restore_windows(WorldRuntime::Operation *parent=nullptr);
  std::unique_ptr<Operation> fade_out(std::uint16_t magnitude,std::uint16_t delay,WorldRuntime::Operation *parent=nullptr);
  std::unique_ptr<WorldRuntime::Operation> begin_frame(WorldRuntime::Operation *parent=nullptr);
  std::unique_ptr<WorldRuntime::Operation> begin_publication(WorldRuntime::Operation *parent=nullptr);
  void configure_background(unsigned layer,std::uint16_t map,std::uint16_t graphics,std::uint8_t size=0);
  void configure_layer(unsigned selector);
  // COPY_TO_VRAM while source is forced blank, using the actual transport.
  void transfer(battle::PsiTransfer);
  void load_enemy_battle_sprites();
  bool busy() const noexcept {return active_!=nullptr;}
  bool failed() const noexcept {return failed_;}
private:
  std::unique_ptr<Operation> begin(Kind,WorldRuntime::Operation *);
  GameVersion version_;
  DisplayState &state_;
  DisplayOwners owners_;
  WorldFadeOut synchronous_fade_;
  story::SourceWorkService *source_work_{};
  Operation *active_{};
  bool failed_{};
};
}
