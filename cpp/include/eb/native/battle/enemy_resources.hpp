#pragma once

#include "eb/game_version.hpp"
#include <array>
#include <cstdint>
#include <memory>
#include <span>

namespace eb::native::battle {
// Immutable numerical fields consumed by BATTLE_INIT_ENEMY_STATS. Text and
// artwork keep their existing catalog owners; no authored bytes are bundled.
struct EnemyStats {
    std::uint16_t sprite{}, hp{}, pp{}, money{};
    std::uint32_t experience{};
    // The source deliberately takes only the low byte of offense/defense.
    std::uint8_t level{}, offense{}, defense{}, speed{}, guts{}, luck{}, iq{};
    std::uint8_t fire{}, freeze{}, flash{}, paralysis{}, hypnosis_brainshock{};
    std::uint8_t initial_status{}, row{};
    bool operator==(const EnemyStats&) const = default;
};
class EnemyResources {
public:
    static std::shared_ptr<const EnemyResources> import(std::span<const std::uint8_t>, GameVersion);
    GameVersion version() const { return version_; }
    const EnemyStats& enemy(unsigned id) const { return enemies_.at(id); }
    static constexpr unsigned count = 231;
private:
    explicit EnemyResources(GameVersion version) : version_(version) {}
    GameVersion version_;
    std::array<EnemyStats, count> enemies_{};
};
} // namespace eb::native::battle
