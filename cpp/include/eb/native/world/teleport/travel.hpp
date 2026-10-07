#pragma once
#include "eb/native/world/teleport/movement.hpp"
#include "eb/native/world_scene_presentation.hpp"
namespace eb::native::world::teleport {
struct Owners {
  WorldStartupOwners world;
  WorldTeleportState &state;
  MovementState &movement_state;
  WorldPartyFollowing &following;
  const WalkingData &walking;
  const EnemyMovementData &angles;
  const WorldCollision &collision;
  const WorldMapArea &area;
  story::InputState &input;
  const WorldTeleportData &destinations;
  WorldMapLoad &map_load;
  WorldMapLoadState &map_state;
  WorldPartyRelocation &relocation;
  WorldNpcCommands &npc_commands;
  WorldMusic &music;
  WorldMusicState &music_state;
  NativeAudio &audio;
  WorldScenePresentation &presentation;
  battle::BackgroundDisplayState &layout;
  const WorldLayerConfigurations &layers;
  WorldLayerSelection &layer;
  WorldEncounterVisualState &visual;
  battle::FrameDisplay &frames;
  WorldDisplayFade &fade;
  PeripheralState *peripherals{};
};
// TELEPORT_MAINLOOP owns its movement/failure/success continuation. The PSI
// destination is read from the actual appearance owner. Every actor pass,
// publication, input wait, map load and relocation uses its actual child.
class Travel final : public story::ActorFrameService {
public:
  class Operation {
  public:
    ~Operation();
    dialogue::Progress advance(unsigned work_budget = 4096);
    WorldRuntime::Operation *runtime_operation() noexcept;
    bool complete() const noexcept;
    bool successful() const;

  private:
    friend class Travel;
    struct State;
    explicit Operation(std::unique_ptr<State>);
    std::unique_ptr<State> state_;
  };
  explicit Travel(Owners);
  bool uses(const story::Scene &) const noexcept override;
  void apply(story::ActorFramePhase) override;
  // A battle caller may retain its actual publisher through the initial WAIT;
  // its forced-blank success handoff happens immediately before map loading.
  std::unique_ptr<Operation>
  begin(story::BattlePublication *from_battle = nullptr);
  bool busy() const noexcept { return active_ != nullptr; }
  bool failed() const noexcept { return failed_; }

private:
  void callbacks(ActorTickCallback, ActorTickCallback);
  void freeze();
  Owners owners_;
  Movement movement_;
  Operation *active_{};
  bool failed_{};
};
} // namespace eb::native::world::teleport
