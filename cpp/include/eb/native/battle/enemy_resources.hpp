#pragma once

#include "eb/game_version.hpp"
#include <array>
#include <cstdint>
#include <memory>
#include <span>
#include <vector>
#include <utility>

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
    std::uint8_t action_pattern{}, final_argument{}, boss{}, gender{};
    std::uint8_t type{}, miss_rate{}, death_type{}, mirror_success{}, max_called{};
    std::uint32_t death_text{};
    std::array<std::uint16_t, 4> actions{};
    std::array<std::uint8_t, 4> arguments{};
    std::uint16_t final_action{};
    bool operator==(const EnemyStats&) const = default;
};
class EnemyResources {
public:
    static std::shared_ptr<const EnemyResources> import(std::span<const std::uint8_t>, GameVersion);
    GameVersion version() const { return version_; }
    const EnemyStats& enemy(unsigned id) const { return enemies_.at(id); }
    // Raw action_order bytes can index beyond the four ordinary choices.
    // Preserve reads into the imported contiguous table; reject only reads
    // outside that owned table instead of silently masking the source index.
    std::pair<std::uint16_t, std::uint8_t> action(unsigned enemy, unsigned index) const;
    static constexpr unsigned count = 231;
private:
    explicit EnemyResources(GameVersion version) : version_(version) {}
    GameVersion version_;
    std::array<EnemyStats, count> enemies_{};
    std::vector<std::uint8_t> table_;
    unsigned stride_{}, shift_{};
};
} // namespace eb::native::battle
