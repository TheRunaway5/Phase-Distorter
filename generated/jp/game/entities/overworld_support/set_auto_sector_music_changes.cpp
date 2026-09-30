// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/overworld/set_auto_sector_music_changes.asm
bool resume_overworld_set_auto_sector_music_changes(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/set_auto_sector_music_changes.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC4D0E4: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/set_auto_sector_music_changes.asm:4 STA ENABLE_AUTO_SECTOR_MUSIC_CHANGES
    case 0xC4D0E6: {
        Instruction step(cpu, 0x8D, 0x00B6FAu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/set_auto_sector_music_changes.asm:5 RTL
    case 0xC4D0E9: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
