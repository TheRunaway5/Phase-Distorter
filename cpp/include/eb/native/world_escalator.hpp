#pragma once

#include "eb/native/world_walking.hpp"

namespace eb::native {
class WorldDoorTransitions;
struct WorldDoorTransitionState;

// C047CF. The outer WorldControl owns trail/camera publication. This reducer
// probes the current location, completes a real door operation if present,
// then applies raw style-12 motion even when terrain/door permission says no.
// It never polls input, advances playback, runs actors or invokes a frame.
class WorldEscalator {
public:
  class Operation {
  public:
    ~Operation();
    Operation(const Operation &) = delete;
    Operation &operator=(const Operation &) = delete;
    bool advance();
    const std::optional<WorldDoorTransitionRequest> &request() const;
    bool complete() const noexcept { return complete_; }
  private:
    friend class WorldEscalator;
    explicit Operation(WorldEscalator &);
    WorldEscalator &owner_;
    std::unique_ptr<WorldDoors::Operation> door_;
    CollisionDirection direction_{};
    unsigned phase_{};
    bool complete_{};
  };
  WorldEscalator(const WalkingData &, ActorWorld &, npcs::InteractionState &,
                 WorldControlState &, WorldPartyState &, WorldNavigationState &,
                 const WorldDoorTransitionState &, WorldMaintenanceState &,
                 story::InputState &, WorldInteractionQueue &, WorldDoors &,
                 const WorldCollision &, const WorldMovement &, const WorldMapArea &);
  WorldEscalator(const WorldEscalator &) = delete;
  WorldEscalator &operator=(const WorldEscalator &) = delete;
  std::unique_ptr<Operation> begin();
  bool busy() const noexcept { return active_ != nullptr || doors_.busy(); }
  bool failed() const { return failed_ || queue_.failed() || doors_.failed(); }
  bool uses(const WorldControl &, const WorldWalking &, const WorldDoorTransitions &,
            const WorldMaintenanceState &, const story::InputState &,
            const WorldInteractionQueue &, const WorldCollision &,
            const WorldMapArea &) const noexcept;
private:
  void check() const;
  const WalkingData &data_;
  ActorWorld &actors_;
  npcs::InteractionState &leader_;
  WorldControlState &control_;
  WorldPartyState &formation_;
  WorldNavigationState &navigation_;
  const WorldDoorTransitionState &transitions_;
  WorldMaintenanceState &maintenance_;
  story::InputState &input_;
  WorldInteractionQueue &queue_;
  WorldDoors &doors_;
  const WorldCollision &collision_;
  const WorldMovement &movement_;
  const WorldMapArea &area_;
  Operation *active_{};
  bool failed_{};
};
} // namespace eb::native
