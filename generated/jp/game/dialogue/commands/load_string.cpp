// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/text/ccs/load_string.asm
bool resume_text_ccs_load_string(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/text/ccs/load_string.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC17B68: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/load_string.asm:4 TXA
    case 0xC17B6A: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/load_string.asm:5 SEP #PROC_FLAGS::ACCUM8
    case 0xC17B6B: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/load_string.asm:6 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC17B6D: {
        Instruction step(cpu, 0xAE, 0x009A7Eu, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/load_string.asm:7 STA TEXT_NEW_MENU_OPTION_BUFFER,X
    case 0xC17B70: {
        Instruction step(cpu, 0x9D, 0x009A8Bu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/load_string.asm:8 REP #PROC_FLAGS::ACCUM8
    case 0xC17B73: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/load_string.asm:9 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC17B75: {
        Instruction step(cpu, 0xEE, 0x009A7Eu, 3u, AddressMode::Absolute);
        step.increment();
        return step.finish();
    }
    // src/text/ccs/load_string.asm:10 LDA #.LOWORD(UNKNOWN_C17889)
    case 0xC17B78: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FAu : 0x007AFAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/load_string.asm:10 LDA #.LOWORD(UNKNOWN_C17889)
    // Overlapping static entry reached from 0xC17B78.
    case 0xC17B7A: {
        Instruction step(cpu, 0x7A, 0x000000u, 1u, AddressMode::Implied);
        step.pull_y();
        return step.finish();
    }
    // src/text/ccs/load_string.asm:11 RTS
    case 0xC17B7B: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
