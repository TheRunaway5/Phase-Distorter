// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/text/ccs/load_string.asm
bool resume_text_ccs_load_string(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/text/ccs/load_string.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC178F7: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/load_string.asm:4 TXA
    case 0xC178F9: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/load_string.asm:5 SEP #PROC_FLAGS::ACCUM8
    case 0xC178FA: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/load_string.asm:6 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC178FC: {
        Instruction step(cpu, 0xAE, 0x0097CAu, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/load_string.asm:7 STA TEXT_NEW_MENU_OPTION_BUFFER,X
    case 0xC178FF: {
        Instruction step(cpu, 0x9D, 0x0097D7u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/load_string.asm:8 REP #PROC_FLAGS::ACCUM8
    case 0xC17902: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/load_string.asm:9 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC17904: {
        Instruction step(cpu, 0xEE, 0x0097CAu, 3u, AddressMode::Absolute);
        step.increment();
        return step.finish();
    }
    // src/text/ccs/load_string.asm:10 LDA #.LOWORD(UNKNOWN_C17889)
    case 0xC17907: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000089u : 0x007889u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/load_string.asm:10 LDA #.LOWORD(UNKNOWN_C17889)
    // Overlapping static entry reached from 0xC17907.
    case 0xC17909: {
        Instruction step(cpu, 0x78, 0x000000u, 1u, AddressMode::Implied);
        step.disable_interrupts();
        return step.finish();
    }
    // src/text/ccs/load_string.asm:11 RTS
    case 0xC1790A: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
