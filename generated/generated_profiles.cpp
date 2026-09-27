// Generated from independent US and JP source builds. Do not edit.
// Frozen linked-symbol metadata for the two source configurations. Returning a
// const reference avoids copying this table and keeps it immutable throughout
// rendering. The values guide presentation reads; they do not alter emulated
// addresses, game scripts, entity activation or camera state.
#include "generated_profile.hpp"
namespace eb {
namespace {
constexpr SourceProfile profile_us{
    0x9643, // wram_battle_flag
    {0xadd4,0xae4b}, // wram_bg_records
    0x436e, // wram_map_combo
    {0x31,0x33,0x35,0x37}, // wram_bg_scroll
    0x18000, // wram_map_arrangements
    0xa62, // wram_entity_script
    0xe5e, // wram_entity_var0
    0xe9a, // wram_entity_var1
    0x10000, // wram_lumine_header
    {0x11000,0x14000}, // wram_lumine_maps
    {0x160000,0x162800,0x165000,0x168000,0x16a800,0x16d000,0x170000,0x172800,0x175000,0x178000}, // rom_map_chunks
    0x17a800, // rom_map_sectors
    0x314, // title_event_first
    0x31e, // title_event_last
    0x313, // file_select_event
    0x161, // lumine_event
};
constexpr SourceProfile profile_jp{
    0x993b, // wram_battle_flag
    {0xafa9,0xb020}, // wram_bg_records
    0x46f4, // wram_map_combo
    {0x31,0x33,0x35,0x37}, // wram_bg_scroll
    0x18000, // wram_map_arrangements
    0xa58, // wram_entity_script
    0xe54, // wram_entity_var0
    0xe90, // wram_entity_var1
    0x10000, // wram_lumine_header
    {0x12000,0x14000}, // wram_lumine_maps
    {0x160000,0x162800,0x165000,0x168000,0x16a800,0x16d000,0x170000,0x172800,0x175000,0x178000}, // rom_map_chunks
    0x17a800, // rom_map_sectors
    0x314, // title_event_first
    0x31a, // title_event_last
    0x313, // file_select_event
    0x161, // lumine_event
};
}
const SourceProfile& source_profile(GameVersion version) { return version == GameVersion::JP ? profile_jp : profile_us; }
}
