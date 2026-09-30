// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/text/ccs/dummy_1F_18.asm
bool resume_text_ccs_dummy_1f_18(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/text/ccs/dummy_1F_18.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC16801: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/dummy_1F_18.asm:4 LDA #$0006
    case 0xC16803: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/dummy_1F_18.asm:4 LDA #$0006
    // Overlapping static entry reached from 0xC16803.
    case 0xC16805: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/dummy_1F_18.asm:5 CLC
    case 0xC16806: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/ccs/dummy_1F_18.asm:6 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16807: {
        Instruction step(cpu, 0xED, 0x009A7Eu, 3u, AddressMode::Absolute);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/dummy_1F_18.asm:7 BRANCHLTEQS @UNKNOWN2
    case 0xC1680A: {
        Instruction step(cpu, 0x50, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_clear();
        return step.finish();
    }
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/dummy_1F_18.asm:7 BRANCHLTEQS @UNKNOWN2
    case 0xC1680C: {
        Instruction step(cpu, 0x10, 0x000017u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/dummy_1F_18.asm:7 BRANCHLTEQS @UNKNOWN2
    case 0xC1680E: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/dummy_1F_18.asm:7 BRANCHLTEQS @UNKNOWN2
    case 0xC16810: {
        Instruction step(cpu, 0x30, 0x000013u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/text/ccs/dummy_1F_18.asm:8 TXA
    case 0xC16812: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/dummy_1F_18.asm:9 SEP #PROC_FLAGS::ACCUM8
    case 0xC16813: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/dummy_1F_18.asm:10 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16815: {
        Instruction step(cpu, 0xAE, 0x009A7Eu, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/dummy_1F_18.asm:11 STA CC_ARGUMENT_STORAGE,X
    case 0xC16818: {
        Instruction step(cpu, 0x9D, 0x009A6Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/dummy_1F_18.asm:12 REP #PROC_FLAGS::ACCUM8
    case 0xC1681B: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/dummy_1F_18.asm:13 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC1681D: {
        Instruction step(cpu, 0xEE, 0x009A7Eu, 3u, AddressMode::Absolute);
        step.increment();
        return step.finish();
    }
    // src/text/ccs/dummy_1F_18.asm:14 LDA #.LOWORD(CC_1F_18)
    case 0xC16820: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x006801u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/dummy_1F_18.asm:14 LDA #.LOWORD(CC_1F_18)
    // Overlapping static entry reached from 0xC16820.
    case 0xC16822: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/ccs/dummy_1F_18.asm:15 BRA @UNKNOWN3
    case 0xC16823: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/dummy_1F_18.asm:17 LDA #NULL
    case 0xC16825: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/dummy_1F_18.asm:17 LDA #NULL
    // Overlapping static entry reached from 0xC16825.
    case 0xC16827: {
        Instruction step(cpu, 0x00, 0x000060u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/dummy_1F_18.asm:19 RTS
    case 0xC16828: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
