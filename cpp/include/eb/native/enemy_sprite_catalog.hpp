#pragma once
#include "eb/game_version.hpp"
#include <cstdint>
#include <memory>
#include <span>
#include <vector>

namespace eb::native {
// Imported file offsets and bounded declared tables; never runtime addresses.
struct EnemySpriteCatalogLayout {
  std::uint32_t cells{}, encounter_pointers{}, encounters{}, encounters_end{};
  std::uint32_t battle_pointers{}, battles{}, battles_end{}, enemies{},
      tilesets{}, sector_attributes{};
  unsigned encounter_count{}, battle_count{}, enemy_count{}, enemy_stride{},
      enemy_sprite_offset{};
  unsigned butterfly_battle{};
};
EnemySpriteCatalogLayout enemy_sprite_catalog_layout(GameVersion version);
struct EnemySpriteRectangle {
  int left{}, top{}, right{}, bottom{};
};
struct EnemySpriteEligibility {
  unsigned tileset{};
  std::span<const std::uint8_t> event_flags;
  bool spawns_enabled = true, monsters_disabled = false,
       final_boss_defeated = false;
};

// Possible artwork only, not selected enemies or predicted spawn positions.
// Normal authored spawn-chance/flag branches and butterfly sector rules are
// imported. RNG, spawn counters, existing enemies, capacity/collision checks,
// debug-forced encounters and anti-piracy overrides are not executed here.
class EnemySpriteCatalog {
public:
  EnemySpriteCatalog(std::span<const std::uint8_t> assets,
                     EnemySpriteCatalogLayout layout);
  // Readiness footprints use world pixels with exclusive right/bottom. Every
  // overlapping 64px encounter cell contributes its possible sprite groups.
  // Butterfly eligibility is independent of the regular loaded-area gate.
  std::vector<unsigned> query(EnemySpriteRectangle footprint,
                              const EnemySpriteEligibility &state) const;
  unsigned encounter(unsigned cell_x, unsigned cell_y) const;

private:
  struct State;
  std::shared_ptr<const State> state_;
};
} // namespace eb::native
