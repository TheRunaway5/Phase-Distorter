#pragma once

#include "eb/native/party/movement_policy.hpp"
#include "eb/native/world_control.hpp"
#include "eb/native/world_doors.hpp"
#include "eb/native/world_enemies.hpp"
#include "eb/native/world_hotspots.hpp"
#include "eb/native/world_movement.hpp"

namespace eb::native {
struct WalkingDataLayout {
  std::size_t cardinal, diagonal, allowed, mushroom_remapping;
};
WalkingDataLayout walking_data_layout(GameVersion);
// Owned content only: VELOCITY_STORE's expanded fixed-point deltas and the
// authored input tables. No mutable party/controller state is retained here.
class WalkingData {
public:
  WalkingData(std::span<const std::uint8_t>, GameVersion);
  WalkingData(std::span<const std::uint8_t>, GameVersion, WalkingDataLayout);
  GameVersion version() const { return version_; }
  std::uint32_t raw_delta(unsigned axis, unsigned style,
                          CollisionDirection) const;
  CollisionDirection direction(unsigned style, std::uint16_t pad,
                               bool pending) const;
  void remap(party::MovementPolicyState &, story::InputState &,
             std::uint16_t demo_frames) const;
  std::uint32_t adjust(std::uint32_t position, unsigned axis, unsigned style,
                       CollisionDirection, std::uint16_t terrain,
                       std::uint16_t demo_frames,
                       std::uint8_t party_status) const;

private:
  GameVersion version_;
  std::array<std::array<std::array<std::uint32_t, 2>, 8>, 14> deltas_{};
  std::array<std::uint16_t, 14> allowed_{};
  std::array<std::array<std::uint16_t, 16>, 3> remapping_{};
};

// C0449B only. Input was already polled, and the existing WorldControl owns
// the outer trail/camera work. All fields are borrowed from their actual owner.
// Those owners must outlive this stable service, which must outlive each
// operation. Abandonment after begin invalidates the service; effects are not
// rolled back or replayed. Finish walking before another world operation.
// Untagged native collision actors follow the source role0..22 prefix in their
// stable active order; reserved authored roles never become obstacles here.
// An unfinished door transition remains pending without an acknowledgment API
// until the real producer exists; walking cannot invent or skip that work.
class WorldWalking {
public:
  class Operation {
  public:
    ~Operation();
    Operation(const Operation &) = delete;
    Operation &operator=(const Operation &) = delete;
    bool advance();
    const std::optional<WorldDoorTransitionRequest> &request() const;
    bool complete() const { return complete_; }

  private:
    friend class WorldWalking;
    explicit Operation(WorldWalking &);
    WorldWalking &owner_;
    std::unique_ptr<WorldDoors::Operation> door_;
    std::array<std::uint32_t, 2> proposed_{};
    unsigned phase_{};
    bool allowed_{}, complete_{};
  };
  WorldWalking(const WalkingData &, ActorWorld &, const WorldEnemies &,
               npcs::InteractionState &, WorldControlState &, WorldPartyState &,
               party::State &, party::MovementPolicyState &,
               dialogue::PromptState &, story::InputState &, story::TickState &,
               WorldNavigationState &, WorldInteractionQueue &, WorldHotspots &,
               WorldDoors &, const WorldCollision &, const WorldMovement &,
               const WorldMapArea &);
  WorldWalking(const WorldWalking &) = delete;
  WorldWalking &operator=(const WorldWalking &) = delete;
  std::unique_ptr<Operation> begin();
  bool busy() const { return active_ != nullptr || doors_.busy(); }
  bool failed() const { return failed_ || doors_.failed() || queue_.failed(); }
  void bind_transitions(WorldDoorTransitions &);
  const WalkingData &data() const noexcept { return data_; }
  const WorldMovement &movement() const noexcept { return movement_; }
  const WorldDoors &doors() const noexcept { return doors_; }
  const WorldNavigationState &navigation() const noexcept {
    return navigation_;
  }
  bool uses(const WorldControl &, const ActorWorld &, const WorldEnemies &,
            const WorldInteractionQueue &, const WorldMaintenanceState &,
            const party::State &, const story::InputState &,
            const story::TickState &, const WorldCollision &,
            const WorldMapArea &) const noexcept;

private:
  void check() const;
  void collide(CollisionPoint);
  const WalkingData &data_;
  ActorWorld &actors_;
  const WorldEnemies &enemies_;
  npcs::InteractionState &leader_;
  WorldControlState &control_;
  WorldPartyState &formation_;
  party::State &party_;
  party::MovementPolicyState &mushroom_;
  dialogue::PromptState &prompt_;
  story::InputState &input_;
  story::TickState &clock_;
  WorldNavigationState &navigation_;
  WorldInteractionQueue &queue_;
  WorldHotspots &hotspots_;
  WorldDoors &doors_;
  const WorldCollision &collision_;
  const WorldMovement &movement_;
  const WorldMapArea &area_;
  Operation *active_{};
  bool failed_{};
};
} // namespace eb::native
