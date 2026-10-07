#pragma once
#include "eb/native/world_battle_return.hpp"
#include "eb/native/world_enemy_movement.hpp"
#include "eb/native/world_walking.hpp"
namespace eb::native::world::teleport {
// Retained movement globals not already owned by WorldTeleportState. Leader
// coordinates/fractions and the follower ring remain in their actual owners.
struct MovementState {
  std::uint32_t speed_x{}, speed_y{}, next_x{}, next_y{};
  std::uint16_t success_screen_x{}, success_screen_y{},
      success_screen_speed_x{}, success_screen_speed_y{};
};
enum class MovementPhase { Alpha, Beta, Departure, Arrival, Failure };
struct MovementOwners {
  WorldStartupOwners world;
  WorldPartyFollowing &following;
  const WalkingData &walking;
  const EnemyMovementData &angles;
  const WorldCollision &collision;
  const WorldMapArea &area;
  story::InputState &input;
  PeripheralState *peripherals{};
};
// C0E28F/C0E516, success departure/arrival and their actual party followers.
// Each call executes once at ActorWorld's real post-script callback phase.
class Movement final : public ActorTickService {
public:
  Movement(WorldTeleportState &, MovementState &, MovementOwners);
  ~Movement();
  bool uses(const ActorWorld &) const noexcept override;
  bool tick(ActorId, ActorTickCallback) override;
  void phase(MovementPhase p) noexcept { phase_ = p; }
  // C0DF22 is also independently source-compared as exact wrapped arithmetic.
  void velocity(std::uint16_t direction);
  void initialize();
  void prepare_departure();
  void prepare_arrival();

private:
  void alpha();
  void beta();
  void departure();
  void arrival();
  void follower(ActorId, bool failure);
  void record_trail();
  void animation_speed();
  void center(std::uint16_t, std::uint16_t);
  std::uint16_t surface(CollisionPoint, unsigned role);
  std::uint16_t terrain(CollisionPoint, CollisionPoint);
  WorldTeleportState &state_;
  MovementState &movement_;
  MovementOwners owners_;
  MovementPhase phase_ = MovementPhase::Alpha;
};
} // namespace eb::native::world::teleport
