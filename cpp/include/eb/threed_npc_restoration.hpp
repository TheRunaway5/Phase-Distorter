#pragma once
#include "eb/game_version.hpp"
#include <cstdint>

namespace eb {
constexpr unsigned threed_npc_table_offset(GameVersion version) {
    return version == GameVersion::JP ? 0x0f89c1 : 0x0f8985;
}

// Restore two original npc_config appearance conditions at consumption time.
// The imported image, placement, sprite, action and dialogue bytes stay intact.
// NPC 526 must survive Belch to reach its authored ghost-pet dialogue. NPC 563
// waits on unused flag 610; use Belch's flag 71 as its restored story gate.
// Original research infers, rather than proves, that latter appearance timing.
constexpr std::uint8_t restored_threed_npc_byte(unsigned definitions, unsigned offset,
                                               std::uint8_t value) {
    if (offset == definitions + 526 * 17 + 8 && value == 1)
        return 0; // SHOW_IF_OFF -> SHOW_ALWAYS
    if (offset == definitions + 563 * 17 + 6 && value == 0x62)
        return 0x47; // UNKNOWN_0610 -> FLG_WIN_GEPPU
    if (offset == definitions + 563 * 17 + 7 && value == 0x02)
        return 0;
    return value;
}
} // namespace eb
