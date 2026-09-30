// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/text/ccs/unknown_1F_40.asm
bool resume_text_ccs_unknown_1f_40(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/text/ccs/unknown_1F_40.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC172BC: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/unknown_1F_40.asm:4 LDA CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC172BE: {
        Instruction step(cpu, 0xAD, 0x0097CAu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/unknown_1F_40.asm:5 BNE @UNKNOWN0
    case 0xC172C1: {
        Instruction step(cpu, 0xD0, 0x000013u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/ccs/unknown_1F_40.asm:6 TXA
    case 0xC172C3: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/unknown_1F_40.asm:7 SEP #PROC_FLAGS::ACCUM8
    case 0xC172C4: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/unknown_1F_40.asm:8 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC172C6: {
        Instruction step(cpu, 0xAE, 0x0097CAu, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/unknown_1F_40.asm:9 STA CC_ARGUMENT_STORAGE,X
    case 0xC172C9: {
        Instruction step(cpu, 0x9D, 0x0097BAu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/unknown_1F_40.asm:10 REP #PROC_FLAGS::ACCUM8
    case 0xC172CC: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/unknown_1F_40.asm:11 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC172CE: {
        Instruction step(cpu, 0xEE, 0x0097CAu, 3u, AddressMode::Absolute);
        step.increment();
        return step.finish();
    }
    // src/text/ccs/unknown_1F_40.asm:12 LDA #.LOWORD(CC_1F_40)
    case 0xC172D1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000BCu : 0x0072BCu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/unknown_1F_40.asm:12 LDA #.LOWORD(CC_1F_40)
    // Overlapping static entry reached from 0xC172D1.
    case 0xC172D3: {
        Instruction step(cpu, 0x72, 0x000080u, 2u, AddressMode::DirectPageIndirect);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/unknown_1F_40.asm:13 BRA @UNKNOWN1
    case 0xC172D4: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/unknown_1F_40.asm:13 BRA @UNKNOWN1
    // Overlapping static entry reached from 0xC172D3.
    case 0xC172D5: {
        Instruction step(cpu, 0x03, 0x0000A9u, 2u, AddressMode::StackRelative);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/ccs/unknown_1F_40.asm:15 LDA #NULL
    case 0xC172D6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/unknown_1F_40.asm:15 LDA #NULL
    // Overlapping static entry reached from 0xC172D5.
    case 0xC172D7: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/unknown_1F_40.asm:15 LDA #NULL
    // Overlapping static entry reached from 0xC172D6.
    case 0xC172D8: {
        Instruction step(cpu, 0x00, 0x000060u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/unknown_1F_40.asm:17 RTS
    case 0xC172D9: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
