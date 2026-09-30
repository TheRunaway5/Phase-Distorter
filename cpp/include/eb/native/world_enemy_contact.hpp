#pragma once

#include "eb/native/world_automatic.hpp"
#include "eb/native/world_encounter.hpp"
#include "eb/native/world_pathfinding.hpp"
#include <functional>

namespace eb::native {
class WorldEnemyMovement;
class WorldBattleEntry;
using WorldEnemyContactSound =
    std::function<void(const dialogue::ScriptSoundRequest &)>;

// Actual enemy task contact/arrival and its two prospective terrain helpers.
// All actor, collision, encounter, palette and control state is borrowed from
// its authoritative owner. The sound sink must execute the existing adapter
// command before returning. No logical frame, input poll or physics tick runs
// inside this service; a failed ordered side effect is never acknowledged.
class WorldEnemyContact {
public:
  WorldEnemyContact(ActorWorld &, const WorldEnemies &,
                    npcs::InteractionState &, WorldControlState &,
                    const dialogue::PromptState &, const WorldNavigationState &,
                    WorldMaintenanceState &, const WorldPathfinding &,
                    WorldEncounterState &, WorldEncounter &, WorldAutomatic &,
                    ScenePalette &, ScenePalette &contact_backup,
                    const WorldCollision &, const WorldMapArea &,
                    WorldEnemyContactSound);
  WorldEnemyContact(const WorldEnemyContact &) = delete;
  WorldEnemyContact &operator=(const WorldEnemyContact &) = delete;
  bool contact(ActorId);
  bool collided(ActorId) const;
  bool active() const;
  void prepare_palette();
  std::uint16_t prepare_directional_obstacles(ActorId);
  std::uint16_t prepare_vertical_obstacles(ActorId);
  bool failed() const noexcept;
  bool busy() const noexcept { return executing_; }
  bool uses(const ActorWorld &) const noexcept;
  bool uses(const WorldBattleEntry &, const WorldEnemyMovement &,
            const WorldControl &, const WorldWalking &, const WorldEnemies &,
            const WorldMaintenanceState &, const WorldAutomatic &,
            const WorldCollision &, const WorldMapArea &) const noexcept;
  bool uses(const WorldControl &, const WorldWalking &, const WorldEnemies &,
            const WorldMaintenanceState &, const WorldPathfinding &,
            const WorldEncounterState &, const WorldEncounter &,
            const WorldAutomatic &, const ScenePalette &,
            const ScenePalette &contact_backup, const WorldCollision &,
            const WorldMapArea &) const noexcept;

private:
  void check() const;
  bool collision(ActorId) const;
  bool reduce(ActorId);
  void grayscale();
  void pause_all();
  void pause(ActorId);
  std::uint16_t obstacles(ActorId, bool vertical);
  std::uint16_t enemy_type(ActorId) const;
  ActorWorld &actors_;
  const WorldEnemies &enemies_;
  npcs::InteractionState &leader_;
  WorldControlState &control_;
  const dialogue::PromptState &prompt_;
  const WorldNavigationState &navigation_;
  WorldMaintenanceState &maintenance_;
  const WorldPathfinding &paths_;
  WorldEncounterState &state_;
  WorldEncounter &encounter_;
  WorldAutomatic &automatic_;
  ScenePalette &colors_, &backup_;
  const WorldCollision &collision_;
  const WorldMapArea &area_;
  WorldEnemyContactSound sound_;
  bool executing_{}, failed_{};
};
} // namespace eb::native
