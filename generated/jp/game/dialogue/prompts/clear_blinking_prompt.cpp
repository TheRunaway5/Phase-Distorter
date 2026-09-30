// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/text/clear_blinking_prompt.asm
bool resume_text_clear_blinking_prompt(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/clear_blinking_prompt.asm:3 BEGIN_C_FUNCTION
    case 0xC10038: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/clear_blinking_prompt.asm:5 STZ BLINKING_TRIANGLE_FLAG
    case 0xC1003A: {
        Instruction step(cpu, 0x9C, 0x009945u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/text/clear_blinking_prompt.asm:6 END_C_FUNCTION
    case 0xC1003D: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
