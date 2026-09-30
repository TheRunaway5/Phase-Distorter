#pragma once

#include "eb/native/world_doors.hpp"
#include "eb/native/world_generated_input.hpp"
#include "eb/native/world_scheduler.hpp"

namespace eb::native {
class WalkingData;
class WorldInputPlayback;
struct WorldPartyState;
// The remaining transition fields. Whole position/style/facing, fractions,
// navigation and party projection continue to belong to their existing owners.
struct WorldDoorTransitionState {
  std::uint16_t automatic_direction{}, escalator_entrance{};
  CollisionPoint escalator_target{}, stairs_target{};
};
class WorldDoorTransitionData {
public:
  WorldDoorTransitionData(std::span<const std::uint8_t>, GameVersion);
  GameVersion version() const noexcept { return version_; }
  std::uint16_t escalator_offset(unsigned direction, bool exiting) const;
  CollisionDirection escalator_direction(unsigned direction) const;
  CollisionPoint stair_offset(unsigned direction, bool exiting) const;
  CollisionDirection stair_direction(unsigned direction, bool exiting) const;

private:
  GameVersion version_;
  std::array<std::array<std::uint16_t, 4>, 3> escalator_{};
  std::array<std::array<std::uint16_t, 4>, 6> stairs_{};
};

// Synchronous C06E6E/C070CB producers plus their four real scheduled callbacks.
// A completed execute installs the actual sequence and task. It never consumes
// a frame or moves the actor along the predicted route. Later control ticks
// consume playback input, and the scheduler owns callback timing.
class WorldDoorTransitions final : public WorldSchedulerCallbacks {
public:
  WorldDoorTransitions(const WorldDoorTransitionData &,
                       const GeneratedInputData &, const WalkingData &,
                       WorldInputPlayback &, WorldScheduler &,
                       npcs::InteractionState &, WorldControlState &,
                       WorldNavigationState &, WorldPartyState &,
                       WorldDoorTransitionState &);
  ~WorldDoorTransitions() override;
  WorldDoorTransitions(const WorldDoorTransitions &) = delete;
  WorldDoorTransitions &operator=(const WorldDoorTransitions &) = delete;
  void execute(const WorldDoorTransitionRequest &);
  bool failed() const noexcept;
  GameVersion version() const noexcept { return data_.version(); }
  bool uses(const WalkingData &walking) const noexcept {
    return &walking_ == &walking;
  }
  bool uses(const npcs::InteractionState &, const WorldControlState &,
            const WorldNavigationState &,
            const story::InputState &) const noexcept;
  const WorldPartyState &formation() const noexcept { return party_; }
  const WorldDoorTransitionState &state() const noexcept { return state_; }
  WorldScheduler &scheduler() const noexcept { return scheduler_; }
  WorldInputPlayback &playback() const noexcept { return playback_; }
  const GeneratedInputBuilder &builder() const noexcept { return builder_; }
  void escalator_enter(WorldScheduler &) override;
  void escalator_exit(WorldScheduler &) override;
  void stairs_enter(WorldScheduler &) override;
  void stairs_exit(WorldScheduler &) override;

private:
  void check() const;
  void check_callback(const WorldScheduler &) const;
  void snap(CollisionPoint);
  void schedule(std::uint16_t, WorldScheduledCallback);
  void escalator(const WorldDoorTransitionRequest &);
  void stairs(const WorldDoorTransitionRequest &);
  bool can_enter_stairs(std::uint16_t);
  std::uint16_t route(CollisionPoint);
  void install();
  const WorldDoorTransitionData &data_;
  const GeneratedInputData &generated_;
  const WalkingData &walking_;
  WorldInputPlayback &playback_;
  WorldScheduler &scheduler_;
  npcs::InteractionState &leader_;
  WorldControlState &control_;
  WorldNavigationState &navigation_;
  WorldPartyState &party_;
  WorldDoorTransitionState &state_;
  GeneratedInputBuilder builder_;
  bool failed_{};
};
} // namespace eb::native
