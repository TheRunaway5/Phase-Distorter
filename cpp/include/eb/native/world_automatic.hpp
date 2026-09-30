#pragma once

#include "eb/native/world_walking.hpp"

namespace eb::native {
class WorldDoorTransitions;
class WorldBattleEntry;
struct WorldDoorTransitionState;

enum class WorldAutomaticService { ScriptSound, BattleEntry };

// Actual C04B53 modes, C46698/C466A8/C466B8 focus selectors and C04A88
// direction interval. Borrows actor identity and existing world/control state;
// never advances actors, raw input, generated playback or a frame. Authored
// focus follows a scene role through retirement/reuse; host-only targets keep
// strict actor identity. A true selector miss remains an unsupported read.
// Mode3 expiry restores the prior mode and retains a real BattleEntry request.
// There is no generic response which could pretend that battle entry happened.
class WorldAutomatic {
public:
  class Operation {
  public:
    ~Operation();
    Operation(const Operation &) = delete;
    Operation &operator=(const Operation &) = delete;
    bool advance();
    bool complete() const noexcept { return complete_; }
    const std::optional<WorldAutomaticService> &request() const noexcept {
      return request_;
    }
    const dialogue::ScriptSoundRequest &sound() const;
    // Called only after the existing audio adapter executes sound(). This is
    // the explicit ordered audio boundary, not a battle-service acknowledgment.
    void respond_sound();
    // Consume the pending entry only by running its actual native reducer.
    // No actor/input/frame tick is advanced at this boundary.
    void enter_battle(WorldBattleEntry &);

  private:
    friend class WorldAutomatic;
    Operation(WorldAutomatic &, bool start_interval);
    WorldAutomatic &owner_;
    bool start_interval_{}, complete_{};
    unsigned phase_{};
    std::optional<WorldAutomaticService> request_;
  };
  WorldAutomatic(const WalkingData &, ActorWorld &, const WorldEnemies &,
                 npcs::InteractionState &, WorldControlState &,
                 const WorldDoorTransitionState &, WorldPartyState &,
                 PartyTrail &, WorldMaintenanceState &, story::InputState &,
                 WorldInteractionQueue &);
  WorldAutomatic(const WorldAutomatic &) = delete;
  WorldAutomatic &operator=(const WorldAutomatic &) = delete;
  std::unique_ptr<Operation> begin();
  std::unique_ptr<Operation> begin_direction_interval();
  std::optional<CameraTarget> start_follow_npc(std::uint16_t);
  std::optional<CameraTarget> start_follow_sprite(std::uint16_t);
  void stop_follow();
  bool busy() const noexcept { return active_ != nullptr; }
  bool failed() const { return failed_ || queue_.failed(); }
  bool uses(const WorldControl &, const WorldWalking &,
            const WorldDoorTransitions &, const WorldEnemies &,
            const WorldMaintenanceState &, const story::InputState &,
            const WorldInteractionQueue &) const noexcept;
  bool uses(const ActorWorld &) const noexcept;
  bool uses(const ActorWorld &, const WorldControlState &) const noexcept;
  bool uses(const ActorWorld &, const WorldEnemies &,
            const npcs::InteractionState &, const WorldControlState &,
            const WorldMaintenanceState &) const noexcept;
  bool uses(const WorldBattleEntry &) const noexcept;

private:
  void check() const;
  void idle() const;
  std::unique_ptr<Operation> start(bool interval);
  void timed_motion();
  void follow_actor();
  void change_facing();
  const WalkingData &data_;
  ActorWorld &actors_;
  const WorldEnemies &enemies_;
  npcs::InteractionState &leader_;
  WorldControlState &control_;
  const WorldDoorTransitionState &transitions_;
  WorldPartyState &formation_;
  PartyTrail &trail_;
  WorldMaintenanceState &maintenance_;
  story::InputState &input_;
  WorldInteractionQueue &queue_;
  Operation *active_{};
  bool failed_{};
};
} // namespace eb::native
