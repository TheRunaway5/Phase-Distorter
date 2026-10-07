#pragma once

#include <cstdint>
#include <optional>

namespace eb::native::battle {
// Source CURRENT_ATTACKER/TARGET select physical battler records. They do not
// follow a formation's moving record identities. A real caller publishes them;
// an absent selector is not guessed from party or roster order.
struct ActionState {
    std::optional<unsigned> attacker, target;
    std::uint32_t target_flags{};
    // The admitted ENEMIES_IN_BATTLE count, supplied by its actual producer.
    // Consciousness, array occupancy and collected encounter size are distinct.
    std::uint16_t enemy_count{};
    std::uint16_t shield_nullified{}, damage_reflected{};
    std::uint16_t smash_attack{}, enemy_final_attack{}, skip_death_cleanup{};
};
} // namespace eb::native::battle
