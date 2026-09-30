#pragma once

#include "eb/native/npcs/interaction.hpp"
#include "eb/native/world_enemies.hpp"
#include "eb/native/world_party.hpp"

namespace eb::native {
// Shared source-ordered NPC contact reducer for walking and bicycle movement.
// It resolves the live formation leader and enemy identities at each query,
// and publishes only InteractionState::collision_actor.
void world_npc_collision(ActorWorld &, const WorldEnemies &,
                         npcs::InteractionState &, const WorldPartyState &,
                         CollisionPoint);
} // namespace eb::native
