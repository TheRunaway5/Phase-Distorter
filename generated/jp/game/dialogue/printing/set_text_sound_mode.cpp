// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/text/set_text_sound_mode.asm
bool resume_text_set_text_sound_mode(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/set_text_sound_mode.asm:3 BEGIN_C_FUNCTION
    case 0xC10044: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/set_text_sound_mode.asm:6 STA TEXT_SOUND_MODE
    case 0xC10046: {
        Instruction step(cpu, 0x8D, 0x009947u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/text/set_text_sound_mode.asm:7 END_C_FUNCTION
    case 0xC10049: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
