#pragma once

#include "eb/native/saves/session.hpp"
#include "eb/native/palette_transition.hpp"
#include "eb/native/world_bootstrap.hpp"
#include "eb/native/world_hotspots.hpp"
#include "eb/native/world_party_creation.hpp"
#include "eb/native/world_runtime.hpp"
#include "eb/native/story/party_formation.hpp"
#include "eb/native/world_map_load.hpp"
#include "eb/native/dialogue/window_graphics.hpp"

namespace eb::native {
// Immutable ordinary startup content. Only authored delivery parameters are
// imported; restoring deliveries creates actors through the actual world owner.
class WorldStartupData {
public:
  WorldStartupData(std::span<const std::uint8_t>, GameVersion);
  GameVersion version() const noexcept { return version_; }
  std::vector<ActorId> restore_deliveries(ActorWorld &, PreparedActorState &,
      std::span<const std::uint8_t> flags, story::RandomState &) const;
private:
  struct Delivery { std::uint16_t sprite{}, event_flag{}; };
  GameVersion version_;
  std::array<Delivery, 10> deliveries_{};
  std::array<std::uint16_t, 4> fallback_sprites_{};
};
// Session values not owned by party, dialogue, actors, or world control. These
// are live semantic values, not another persisted-state or memory-image copy.
struct WorldSessionState {
  std::uint32_t elapsed_timer{};
  std::uint16_t content_integrity{}, effect_in_progress{};
  std::uint16_t party_members_alive_overworld{};
  saves::Position respawn{};
  std::uint16_t input_disable_frames{}, teleport_style{}, teleport_speed{};
  // GAME_STATE.unknownC3: selected Teleport Box destination, not the active
  // PSI_TELEPORT_DESTINATION owned by ActorWorld's appearance scene.
  std::uint8_t teleport_box_destination{};
  std::uint16_t current_sector_attributes{};
  std::optional<CameraTarget> fading_actor;
};
void set_teleport_state(WorldSessionState &, AppearanceSceneContext &,
                        std::uint16_t destination, std::uint16_t style) noexcept;
struct WorldStartupOwners {
  dialogue::WindowHost &windows;
  party::State &party;
  ActorWorld &actors;
  WorldRuntime &runtime;
  npcs::Interactions &interactions;
  story::TickState &clock;
  WorldPartyState &formation;
  PartyTrail &trail;
  WorldControlState &control;
  WorldMaintenanceState &maintenance;
  WorldPartyFollowingState &following;
  WorldSpawnControls &spawn;
  WorldEnemies &enemies;
  party::Inventory &inventory;
  WorldHotspots &hotspots;
  WorldInteractionQueue &queue;
  WorldBootstrap &bootstrap;
  WorldPartyCreation &creation;
  WorldParty &updater;
  const WorldPartyData &party_data;
  story::PartyFormation &refresh;
  std::uint16_t &area_character_style;
  ScenePalette &scene_colors;
  WorldSessionState &session;
  story::RandomState &random;
};
enum class WorldStartupStage {
  Restore, CloseWindows, RescanItems, ConfigureText, PreGameDialogue,
  ResetWorld, CreateController, RebuildParty, ResetPalettes,
  MapPreparationRequired, InitializeMap, LoadMap, BuzzBuzzDialogue,
  RestoreDeliveries, PrepareWindowGraphics, PublishWindowGraphics, PositionParty, Complete
};
enum class WorldStartupService { Runtime, BicycleDismount, MapPreparation };

// Consumes a real Continue snapshot into the existing live owners, executes
// close-window effects and imported PRE_GAMESTART via the actual Runtime,
// then runs the source reset/controller/party/palette sequence. The later map
// preparation dependency remains explicit and cannot be acknowledged as done.
// Reaching that boundary is not a completed or playable session.
// All borrowed owners must outlive this service and remain exclusively under
// its operation until it is released. During a yield, the caller may service
// only runtime_operation()'s actual typed request, or sample immutable output;
// it must not independently start Runtime/actor/party work or mutate owners.
// These are the same stable-borrow requirements as the component operations.
class WorldStartup {
public:
  class Operation {
  public:
    ~Operation();
    Operation(const Operation &) = delete;
    Operation &operator=(const Operation &) = delete;
    dialogue::Progress advance(unsigned work_budget = 4096);
    WorldStartupStage stage() const noexcept;
    const std::optional<WorldStartupService> &service() const noexcept;
    // Only answer this real operation's typed requests here. Advancing the
    // outer operation resumes it; no generic startup acknowledgment exists.
    WorldRuntime::Operation *runtime_operation() noexcept;
    void respond_bicycle_dismount();
    std::span<const WorldPartyCreatedActor> created_party() const noexcept;
  private:
    friend class WorldStartup;
    struct State;
    explicit Operation(std::unique_ptr<State>);
    std::unique_ptr<State> state_;
  };
  WorldStartup(const saves::ContinueResources &,
               std::shared_ptr<const dialogue::Program>, WorldStartupOwners);
  WorldStartup(const WorldStartup &) = delete;
  WorldStartup &operator=(const WorldStartup &) = delete;
  std::unique_ptr<Operation> begin(saves::ContinueSnapshot);
  void bind_map_load(WorldMapLoad &, const WorldStartupData &, dialogue::WindowGraphics &);
  bool busy() const noexcept { return active_ != nullptr; }
  bool failed() const noexcept { return failed_; }
  // Exact C039E5 operation, available for the later real map owner. It changes
  // whole XY and projects the six nonzero display entries; fractional pose,
  // scripts, RNG and the frame clock remain unchanged. Not a map completion.
  void position_and_project_party();
private:
  void preflight() const;
  const saves::ContinueResources &resources_;
  std::shared_ptr<const dialogue::Program> program_;
  WorldStartupOwners owners_;
  WorldMapLoad *map_load_{};
  const WorldStartupData *startup_data_{};
  dialogue::WindowGraphics *graphics_{};
  Operation *active_{};
  bool failed_{};
};
} // namespace eb::native
