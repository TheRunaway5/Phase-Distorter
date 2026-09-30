#include "eb/native/world_npc_collision.hpp"
#include <stdexcept>

namespace eb::native {
namespace {
void require(bool okay, const char *message) {
  if (!okay)
    throw std::logic_error(message);
}
entities::CollisionShape shape(const WorldActor &actor) {
  require(actor.hitbox.has_value(),
          "Movement actor has no owned collision geometry");
  const auto &h = *actor.hitbox;
  return {h.enabled,
          actor.behavior.direction,
          {h.lateral.half_width, h.lateral.height},
          {h.vertical.half_width, h.vertical.height}};
}
} // namespace
void world_npc_collision(ActorWorld &actors, const WorldEnemies &enemies,
                         npcs::InteractionState &leader_state,
                         const WorldPartyState &formation,
                         CollisionPoint proposed) {
  const auto leader = actors.actor_for_role(formation.current_leader_role);
  require(leader.has_value(), "Movement formation has no current leader actor");
  const auto moving = shape(actors.actor(*leader));
  const entities::CollisionQuery query{
      proposed.x,
      proposed.y,
      moving,
      leader_state.movement_flags,
      leader_state.walking_style,
      leader_state.demo_frames,
      actors.appearance_scene().intangibility_ticks};
  // These source early exits do not inspect candidate geometry.
  if (!moving.hitbox_enabled || (query.movement_flags & 2) ||
      query.walking_style == 12 || query.demo_frames) {
    leader_state.collision_actor.reset();
    return;
  }
  std::vector<ActorId> ordered;
  for (unsigned role = 0; role < 23; ++role)
    if (const auto id = actors.actor_for_role(role))
      ordered.push_back(*id);
  for (const auto id : actors.actors())
    if (!actors.actor(id).authored_role())
      ordered.push_back(id);
  std::vector<entities::CollisionBody> bodies;
  bodies.reserve(ordered.size());
  for (const auto id : ordered) {
    const auto &a = actors.actor(id);
    std::uint16_t npc = a.npc().value_or(0xffff);
    for (const auto &enemy : enemies.actors())
      if (enemy.actor == id) {
        npc = enemy.npc_identity().value_or(0xffff);
        break;
      }
    const bool disabled =
        !a.action().alive || a.behavior.collision_object == -32768 ||
        (query.intangibility_frames && std::uint16_t(npc + 1) >= 0x8001);
    bodies.push_back(
        {std::uint16_t(a.action().position[0] >> 16),
         std::uint16_t(a.action().position[1] >> 16),
         std::uint16_t(a.action().alive ? 0 : 0xffff),
         std::uint16_t(a.behavior.collision_object == -32768 ? 0x8000 : 0xffff),
         npc, disabled ? entities::CollisionShape{} : shape(a)});
  }
  const auto hit = entities::check_npc_collision(query, bodies).selected_index;
  leader_state.collision_actor =
      hit ? std::optional(ordered.at(*hit)) : std::nullopt;
}
} // namespace eb::native
