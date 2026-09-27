// Generated from independent US and JP source builds. Do not edit.
// Read-only metadata used by scene-aware presentation. Each regional profile
// names offsets into the corresponding WRAM/ROM spans plus script identifiers;
// these are not host pointers. Selecting the matching profile prevents Japanese
// state from being interpreted using the US program's memory layout.
#pragma once
#include <array>
#include <cstdint>
#include "eb/game_version.hpp"
namespace eb {
// Offsets into WRAM/ROM spans, derived from each configuration's linked symbols.
struct SourceProfile {
    std::uint32_t wram_battle_flag;
    std::array<std::uint32_t, 2> wram_bg_records;
    std::uint32_t wram_map_combo;
    std::array<std::uint32_t, 4> wram_bg_scroll;
    std::uint32_t wram_map_arrangements;
    std::uint32_t wram_entity_script;
    std::uint32_t wram_entity_var0;
    std::uint32_t wram_entity_var1;
    std::uint32_t wram_lumine_header;
    std::array<std::uint32_t, 2> wram_lumine_maps;
    std::array<std::uint32_t, 10> rom_map_chunks;
    std::uint32_t rom_map_sectors;
    std::uint32_t title_event_first;
    std::uint32_t title_event_last;
    std::uint32_t file_select_event;
    std::uint32_t lumine_event;
};
const SourceProfile& source_profile(GameVersion version);
}
