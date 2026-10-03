#pragma once
#include <cstdint>

namespace eb::native::battle {
// These are the actual BATTLE_ROUTINE globals absent from the shared party,
// encounter, action, frame and scheduler owners. No collected roster copy or
// independent clock is retained here.
struct EncounterState {
    std::uint16_t mode = 0xffff, special_defeat{}, item_dropped{}, money_gained{};
    std::uint32_t experience_gained{};
};
} // namespace eb::native::battle
