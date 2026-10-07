#pragma once
#include "eb/native/world_startup.hpp"
#include "eb/native/world_party_following.hpp"
#include "eb/native/world_music.hpp"
#include "eb/native/world_teleport.hpp"
#include "eb/native/story/battle_publication.hpp"
#include "eb/native/battle/background_loader.hpp"
#include "eb/native_audio.hpp"
#include "eb/native/world_party_relocation.hpp"
#include "eb/native/world_npc_commands.hpp"

namespace eb::native {
// Globals written by TELEPORT_MAINLOOP, distinct from the saved destination
// selector and the active destination already held by actor appearance.
struct WorldTeleportState {
  std::uint32_t speed{};
  std::uint16_t state{}, beta_angle{}, beta_progress{}, better_progress{};
  std::uint16_t beta_x_adjustment{}, beta_y_adjustment{};
};
struct WorldBattleReturnOwners {
  WorldStartupOwners world;
  WorldPartyFollowing &following;
  WorldMapLoad &map_load;
  WorldMapLoadState &map_state;
  WorldMusic &music;
  WorldMusicState &music_state;
  NativeAudio &audio;
  WorldScenePresentation &presentation;
  story::BattlePublication &battle_publication;
  battle::DisplaySetup &blank;
  battle::BackgroundDisplayState &layout;
  battle::FrameDisplay &frames;
  WorldDisplayFade &fade;
  WorldEncounterVisualState &visual;
  const WorldLayerConfigurations &layers;
  WorldLayerSelection &layer;
  WorldEncounterState &encounter;
  WorldTeleportState &teleport;
  const WorldTeleportData &teleports;
  WorldPartyRelocation &relocation;
  WorldNpcCommands &npc_commands;
};
enum class WorldBattleReturnKind { Overworld, Scripted, InstantWin };
// INIT_BATTLE_COMMON's post-combat party tail, followed by the actual selected
// INIT_BATTLE caller's map/teleport/actor return. Borrowed children run through
// the same live Runtime; there is no acknowledgement of map loading or fades.
class WorldBattleReturn {
public:
  class Operation {
  public:
    ~Operation();
    Operation(const Operation &) = delete;
    Operation &operator=(const Operation &) = delete;
    dialogue::Progress advance(unsigned work_budget = 4096);
    WorldRuntime::Operation *runtime_operation() noexcept;
    story::PartyFormation::Operation *party_update() noexcept;
    bool complete() const noexcept;
    std::uint16_t result() const;
  private:
    friend class WorldBattleReturn;
    struct State;
    explicit Operation(std::unique_ptr<State>);
    std::unique_ptr<State> state_;
  };
  explicit WorldBattleReturn(WorldBattleReturnOwners);
  WorldBattleReturn(const WorldBattleReturn &) = delete;
  WorldBattleReturn &operator=(const WorldBattleReturn &) = delete;
  std::unique_ptr<Operation> begin(std::uint16_t battle_result,
                                  WorldBattleReturnKind = WorldBattleReturnKind::Overworld);
  bool busy() const noexcept { return active_ != nullptr; }
  bool failed() const noexcept { return failed_; }
private:
  WorldBattleReturnOwners owners_;
  Operation *active_{};
  bool failed_{};
};
} // namespace eb::native
