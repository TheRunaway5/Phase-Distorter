#include "eb/native/world_battle_entry.hpp"
#include "eb/native/world_encounter_effects.hpp"
#include <algorithm>
#include <stdexcept>
#include <type_traits>

namespace eb::native {
bool WorldBattleEntry::uses(const WorldEncounterEffects &effects) const noexcept {
  return effects.uses(encounter_);
}

WorldBattleEntry::WorldBattleEntry(
    const GeneratedInputData &angles, ActorWorld &actors, WorldEnemies &enemies,
    const npcs::InteractionState &leader, const WorldPartyState &formation,
    const party::State &party, WorldMaintenanceState &maintenance,
    WorldEncounterState &state, WorldEncounter &encounter,
    WorldPathfinding &paths)
    : angles_(angles), actors_(actors), enemies_(enemies), leader_(leader),
      formation_(formation), party_(party), maintenance_(maintenance),
      state_(state), encounter_(encounter), paths_(paths) {
  if (angles.version() != actors.version() ||
      party.version() != actors.version())
    throw std::invalid_argument(
        "Native battle entry owners have different regions");
  if (!enemies.uses(actors) || !actors.uses_enemies(enemies) ||
      !encounter.uses(state) || !paths.uses(actors, formation, party))
    throw std::invalid_argument(
        "Native battle entry requires its actual borrowed service owners");
}
bool WorldBattleEntry::failed() const noexcept {
  return failed_ || encounter_.failed() || paths_.failed();
}
bool WorldBattleEntry::uses(const ActorWorld &actors,
                            const WorldEnemies &enemies,
                            const npcs::InteractionState &leader,
                            const WorldPartyState &formation,
                            const party::State &party,
                            const WorldMaintenanceState &maintenance,
                            const WorldEncounterState &state) const noexcept {
  return &actors == &actors_ && &enemies == &enemies_ && &leader == &leader_ &&
         &formation == &formation_ && &party == &party_ &&
         &maintenance == &maintenance_ && &state == &state_;
}
bool WorldBattleEntry::uses(
    const ActorWorld &actors, const WorldEnemies &enemies,
    const npcs::InteractionState &leader, const WorldPartyState &formation,
    const WorldMaintenanceState &maintenance) const noexcept {
  return &actors == &actors_ && &enemies == &enemies_ && &leader == &leader_ &&
         &formation == &formation_ && &maintenance == &maintenance_;
}
bool WorldBattleEntry::uses(const party::State &party,
                            const WorldCollision &collision,
                            const WorldMapArea &area) const noexcept {
  return &party == &party_ &&
         paths_.uses(actors_, collision, area, formation_, party);
}
bool WorldBattleEntry::uses(const WorldEncounterState &state,
                            const WorldEncounter &encounter,
                            const WorldPathfinding &paths) const noexcept {
  return &state_ == &state && &encounter_ == &encounter && &paths_ == &paths;
}
std::array<WorldEncounterGroup, 4> WorldBattleEntry::group(unsigned id) const {
  const auto &members = enemies_.data().battles.at(id);
  std::array<WorldEncounterGroup, 4> result{};
  for (unsigned i = 0; i < std::min<std::size_t>(4, members.size()); ++i) {
    const auto &member = members[i];
    if (member.count >= 255 ||
        (member.count && member.enemy >= enemies_.data().enemies.size()))
      throw std::invalid_argument(
          "Battle entry group is outside imported content");
    // A zero count advances the source record but publishes enemy ID zero.
    result[i] = {std::uint16_t(member.count ? member.enemy : 0),
                 std::uint16_t(member.count)};
  }
  return result;
}
CollisionPoint WorldBattleEntry::target() const {
  if (!state_.pathfinding_target)
    throw std::logic_error(
        "Battle entry lacks its actual contact-selected path target");
  return std::visit(
      [&](const auto &target) -> CollisionPoint {
        using T = std::decay_t<decltype(target)>;
        const auto position = [&]() {
          if constexpr (std::is_same_v<T, AuthoredRoleRef>)
            return actors_.authored_position(target.value());
          else
            return actors_.actor(target).action().position;
        }();
        return {std::uint16_t(position[0] >> 16),
                std::uint16_t(position[1] >> 16)};
      },
      *state_.pathfinding_target);
}
void WorldBattleEntry::mark_candidates(
    ActorId touched, std::uint16_t touched_type,
    const std::array<WorldEncounterGroup, 4> &members) {
  for (unsigned i = 0; i < members.size(); ++i) {
    const auto member = members[i];
    unsigned count = member.count;
    if (count) {
      if (member.enemy == touched_type) {
        actors_.actor(touched).behavior.path_state = 0xffff;
        --count;
      }
      if (count)
        for (unsigned role = 0; role < 23; ++role)
          if (const auto id = actors_.actor_for_role(role))
            if (actors_.actor(*id).action().alive &&
                actors_.authored_enemy_selector(role) == member.enemy)
              actors_.set_authored_path_state(role, 0xffff);
    }
    // The published count is authored, not the touched-adjusted local count.
    state_.remaining[i] = member;
  }
}
void WorldBattleEntry::prune(
    ActorId touched, const std::array<WorldEncounterGroup, 4> &members) {
  for (const auto member : members) {
    if (!member.count)
      continue;
    unsigned count = 0;
    for (const auto &candidate : paths_.candidates()) {
      const auto role = actors_.actor(candidate.actor).authored_role();
      if (!role)
        throw std::logic_error(
            "Authored encounter path candidate lost its role");
      if (actors_.authored_enemy_selector(*role) == member.enemy)
        ++count;
    }
    const bool prune = actors_.version() == GameVersion::JP
                           ? count >= member.count
                           : count > member.count;
    if (!prune)
      continue;
    // The initial jump reaches the post-decrement condition before the first
    // body: exactly excess attempts. JP equality enters but runs no body.
    // Touched protection retains its cost and can select it again.
    const unsigned attempts = count - member.count;
    for (unsigned attempt = 0; attempt < attempts; ++attempt) {
      std::optional<unsigned> selected;
      std::uint16_t greatest = 0;
      const auto candidates = paths_.candidates();
      for (unsigned i = 0; i < candidates.size(); ++i) {
        const auto &candidate = candidates[i];
        const auto role = actors_.actor(candidate.actor).authored_role();
        if (actors_.authored_enemy_selector(*role) == member.enemy &&
            candidate.raw_length > greatest) {
          selected = i;
          greatest = candidate.raw_length;
        }
      }
      if (!selected)
        throw std::logic_error("Source battle pruning selected its invalid "
                               "FFFF record: no positive matching path");
      const auto actor = candidates[*selected].actor;
      if (actor != touched) {
        paths_.clear_candidate_cost(*selected);
        actors_.actor(actor).behavior.path_state = 0;
      }
    }
  }
}
void WorldBattleEntry::enter() {
  if (failed())
    throw std::logic_error("Native battle entry owner failed");
  if (executing_)
    throw std::logic_error("Native battle entry is already executing");
  if (!actors_.uses_enemies(enemies_))
    throw std::logic_error(
        "Battle entry lost its active enemy lifetime binding");
  if (enemies_.busy())
    throw std::logic_error(
        "Battle entry cannot interrupt enemy spawn selection");
  if (!state_.touched)
    throw std::logic_error("Battle entry lacks the actual touched enemy");
  const auto touched = *state_.touched;
  const auto &actor = actors_.actor(touched);
  const auto type = enemies_.enemy_type(touched);
  const auto identity = enemies_.identity(touched);
  if (!actor.action().alive || !type || !identity)
    throw std::logic_error(
        "Battle entry touched enemy is not a live owned encounter identity");
  const auto group_id = std::uint16_t(*identity & 0x7fff);
  const auto members = group(group_id);
  // Preflight resolves fallible identity/content reads before the source's
  // first mutation. Direction8 deliberately does not read the target actor.
  WorldBattleInitiative initiative = WorldBattleInitiative::PartyFirst;
  if (actor.behavior.moving_direction != 8) {
    const auto octant = unsigned(
        angles_.direction({std::uint16_t(actor.action().position[0] >> 16),
                           std::uint16_t(actor.action().position[1] >> 16)},
                          target()));
    const auto aligned = [octant](unsigned facing) {
      const unsigned difference = (facing - octant) & 7;
      return difference == 0 || difference == 1 || difference == 7;
    };
    const bool enemy_aligned = aligned(actor.behavior.moving_direction),
               leader_aligned = aligned(leader_.leader_direction);
    initiative =
        !leader_aligned && !enemy_aligned ? WorldBattleInitiative::PartyFirst
        : leader_aligned && enemy_aligned ? WorldBattleInitiative::EnemiesFirst
                                          : WorldBattleInitiative::Normal;
  }
  executing_ = true;
  try {
    maintenance_.enemy_touched = 0;
    state_.initiative = initiative;
    actors_.appearance_scene().battle_swirl_ticks = 120;
    state_.group = group_id;
    encounter_.begin_swirl();
    if (!actors_.uses_enemies(enemies_))
      throw std::logic_error(
          "Battle entry music callback changed enemy lifetime binding");
    mark_candidates(touched, std::uint16_t(*type), members);
    state_.roster.clear();
    paths_.find_to_party(64, 64);
    prune(touched, group(state_.group));
    // Source visits every authored slot here, including inactive retained
    // slots. Their state changes belong to ActorWorld, never a fake ActorId.
    for (unsigned role = 0; role < 23; ++role) {
      if (actors_.actor_for_role(role) == touched)
        continue;
      if (actors_.authored_behavior(role).path_state == 0xffff)
        actors_.set_authored_pause(role, true, true);
      else
        actors_.set_authored_sprite_hidden(role, true);
    }
    actors_.actor(touched).behavior.path_state = 0;
    state_.roster.push_back(std::uint16_t(*type));
    executing_ = false;
  } catch (...) {
    executing_ = false;
    failed_ = true;
    throw;
  }
}
} // namespace eb::native
