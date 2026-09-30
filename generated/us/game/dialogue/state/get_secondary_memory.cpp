// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/text/get_secondary_memory.asm
bool resume_text_get_secondary_memory(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/get_secondary_memory.asm:3 BEGIN_C_FUNCTION
    case 0xC10400: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/get_secondary_memory.asm:5 JSR GET_ACTIVE_WINDOW_ADDRESS
    case 0xC10402: {
        Instruction step(cpu, 0x20, 0x000301u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/get_secondary_memory.asm:6 TAX
    case 0xC10405: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/get_secondary_memory.asm:7 LDA a:window_stats::secondary_memory,X
    case 0xC10406: {
        Instruction step(cpu, 0xBD, 0x00001Fu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/text/get_secondary_memory.asm:8 END_C_FUNCTION
    case 0xC10409: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
