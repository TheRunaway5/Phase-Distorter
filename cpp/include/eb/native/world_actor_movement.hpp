#pragma once

#include "eb/native/actor_world.hpp"
#include "eb/native/world_collision.hpp"

namespace eb::native {

// Synchronous movement owner borrowing the current native collision field.
// The area object remains stable across in-place event/sector preparation.
// ActorWorld owns positions, surfaces, path state and hitboxes; this service
// retains no second actor list, party state, collision result or tick clock.
class WorldActorMovement {
  public:
    WorldActorMovement(const WorldCollision &, const WorldMapArea &);
    ActorHitbox prepare_hitbox(const SpriteDefinition &) const;
    static bool required(ActorPhysics);
    void advance(WorldActor &) const;
    // These operations run at their actual script call site, before the later
    // physics pass. Missing authored roles stay an explicit service request.
    std::optional<std::uint16_t> execute(const BoundAction &, ActorWorld &, ActorId) const;

  private:
    const WorldCollision &collision_;
    const WorldMapArea &area_;
    std::uint16_t surface(const WorldActor &, const ActionActorState &) const;
    std::uint16_t prospective_collision(ActorWorld &, ActorId) const;
};
} // namespace eb::native
