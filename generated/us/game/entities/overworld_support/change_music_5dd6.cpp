// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/overworld/change_music_5DD6.asm
bool resume_overworld_change_music_5dd6(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/change_music_5DD6.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC069ED: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/change_music_5DD6.asm:5 LDA NEXT_MAP_MUSIC_TRACK
    case 0xC069EF: {
        Instruction step(cpu, 0xAD, 0x005DD6u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/change_music_5DD6.asm:6 JSL CHANGE_MUSIC
    case 0xC069F2: {
        Instruction step(cpu, 0x22, 0xC4FBBDu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/change_music_5DD6.asm:7 END_C_FUNCTION
    case 0xC069F6: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
