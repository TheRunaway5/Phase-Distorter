// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/text/unlock_input.asm
bool resume_text_unlock_input(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/text/unlock_input.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC102D6: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/unlock_input.asm:4 STZ TEXT_PROMPT_WAITING_FOR_INPUT
    case 0xC102D8: {
        Instruction step(cpu, 0x9C, 0x00993Du, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/text/unlock_input.asm:5 RTS
    case 0xC102DB: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
