#pragma once

#include "eb/native/world_encounter.hpp"
#include "eb/native/world_enemies.hpp"
#include "eb/native/world_generated_input.hpp"
#include "eb/native/world_maintenance.hpp"
#include "eb/native/world_pathfinding.hpp"

namespace eb::native {
class WorldEncounterEffects;
// The complete C0D19B encounter-entry tail. Contact selection remains owned by
// the live shared encounter state. This consumes the actual swirl initializer
// and native pathfinder synchronously; neither is an acknowledgment boundary.
// It returns before approach/swirl progression or combat initialization and
// advances no actor, input, clock, or presentation frame.
class WorldBattleEntry {
public:
  WorldBattleEntry(const GeneratedInputData &, ActorWorld &, WorldEnemies &,
                   const npcs::InteractionState &, const WorldPartyState &,
                   const party::State &, WorldMaintenanceState &,
                   WorldEncounterState &, WorldEncounter &, WorldPathfinding &);
  WorldBattleEntry(const WorldBattleEntry &) = delete;
  WorldBattleEntry &operator=(const WorldBattleEntry &) = delete;
  void enter();
  bool busy() const noexcept { return executing_; }
  bool failed() const noexcept;
  bool uses(const ActorWorld &, const WorldEnemies &,
            const npcs::InteractionState &, const WorldPartyState &,
            const party::State &, const WorldMaintenanceState &,
            const WorldEncounterState &) const noexcept;

  bool uses(const ActorWorld &, const WorldEnemies &,
            const npcs::InteractionState &, const WorldPartyState &,
            const WorldMaintenanceState &) const noexcept;
  bool uses(const party::State &, const WorldCollision &,
            const WorldMapArea &) const noexcept;
  bool uses(const WorldEncounterState &, const WorldEncounter &,
            const WorldPathfinding &) const noexcept;
  bool uses(const WorldEncounterEffects &) const noexcept;
  bool uses(const WorldPathfinding &paths) const noexcept {
    return &paths_ == &paths;
  }

private:
  std::array<WorldEncounterGroup, 4> group(unsigned) const;
  CollisionPoint target() const;
  void mark_candidates(ActorId, std::uint16_t,
                       const std::array<WorldEncounterGroup, 4> &);
  void prune(ActorId, const std::array<WorldEncounterGroup, 4> &);
  const GeneratedInputData &angles_;
  ActorWorld &actors_;
  WorldEnemies &enemies_;
  const npcs::InteractionState &leader_;
  const WorldPartyState &formation_;
  const party::State &party_;
  WorldMaintenanceState &maintenance_;
  WorldEncounterState &state_;
  WorldEncounter &encounter_;
  WorldPathfinding &paths_;
  bool executing_{}, failed_{};
};
} // namespace eb::native
