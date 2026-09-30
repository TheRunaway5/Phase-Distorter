#pragma once
#include "eb/native/world_enemies.hpp"

namespace eb::native {
// Borrowed semantic input supplied by the existing party/scene owner. This
// service keeps no second position, teleport speed, flag or party state.
struct ActorRetentionArea { std::uint16_t leader_x{}, leader_y{}, teleport_speed{}; };

// Fulfill one named pending lifecycle operation, preserving the same world
// tick. Missing area/role/appearance prerequisites or unrelated operations
// leave the original request pending without mutation. Creation requires the
// authoritative prepared height/variables; caller XY overrides prepared XY,
// and bare authored creation starts facing zero. Ordinary role exhaustion also
// stays pending; the original failure path writes invalid role-zero metadata.
// This never runs AI,
// changes visibility policy, invokes a source runtime or advances a frame.
bool fulfill_actor_lifecycle(ActorWorld &world, WorldEnemies &enemies,
                             const ActorRetentionArea *area = nullptr,
                             const PreparedActorState *prepared = nullptr);
} // namespace eb::native
