// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/text/ccs/learn_special_psi.asm
bool resume_text_ccs_learn_special_psi(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/text/ccs/learn_special_psi.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC15ED7: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/learn_special_psi.asm:4 LDA #$0001
    case 0xC15ED9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/learn_special_psi.asm:4 LDA #$0001
    // Overlapping static entry reached from 0xC15ED9.
    case 0xC15EDB: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/learn_special_psi.asm:5 CLC
    case 0xC15EDC: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/ccs/learn_special_psi.asm:6 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC15EDD: {
        Instruction step(cpu, 0xED, 0x009A7Eu, 3u, AddressMode::Absolute);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/learn_special_psi.asm:7 BRANCHLTEQS @UNKNOWN2
    case 0xC15EE0: {
        Instruction step(cpu, 0x50, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_clear();
        return step.finish();
    }
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/learn_special_psi.asm:7 BRANCHLTEQS @UNKNOWN2
    case 0xC15EE2: {
        Instruction step(cpu, 0x10, 0x000017u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/learn_special_psi.asm:7 BRANCHLTEQS @UNKNOWN2
    case 0xC15EE4: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/learn_special_psi.asm:7 BRANCHLTEQS @UNKNOWN2
    case 0xC15EE6: {
        Instruction step(cpu, 0x30, 0x000013u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/text/ccs/learn_special_psi.asm:8 TXA
    case 0xC15EE8: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/learn_special_psi.asm:9 SEP #PROC_FLAGS::ACCUM8
    case 0xC15EE9: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/learn_special_psi.asm:10 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC15EEB: {
        Instruction step(cpu, 0xAE, 0x009A7Eu, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/learn_special_psi.asm:11 STA CC_ARGUMENT_STORAGE,X
    case 0xC15EEE: {
        Instruction step(cpu, 0x9D, 0x009A6Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/learn_special_psi.asm:12 REP #PROC_FLAGS::ACCUM8
    case 0xC15EF1: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/learn_special_psi.asm:13 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC15EF3: {
        Instruction step(cpu, 0xEE, 0x009A7Eu, 3u, AddressMode::Absolute);
        step.increment();
        return step.finish();
    }
    // src/text/ccs/learn_special_psi.asm:14 LDA #.LOWORD(CC_1F_71)
    case 0xC15EF6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D7u : 0x005ED7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/learn_special_psi.asm:14 LDA #.LOWORD(CC_1F_71)
    // Overlapping static entry reached from 0xC15EF6.
    case 0xC15EF8: {
        Instruction step(cpu, 0x5E, 0x000880u, 3u, AddressMode::AbsoluteIndexedX);
        step.shift_right();
        return step.finish();
    }
    // src/text/ccs/learn_special_psi.asm:15 BRA @UNKNOWN3
    case 0xC15EF9: {
        Instruction step(cpu, 0x80, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/learn_special_psi.asm:17 TXA
    case 0xC15EFB: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/learn_special_psi.asm:18 JSL LEARN_SPECIAL_PSI
    case 0xC15EFC: {
        Instruction step(cpu, 0x22, 0xC22694u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/learn_special_psi.asm:19 LDA #NULL
    case 0xC15F00: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/learn_special_psi.asm:19 LDA #NULL
    // Overlapping static entry reached from 0xC15F00.
    case 0xC15F02: {
        Instruction step(cpu, 0x00, 0x000060u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/learn_special_psi.asm:21 RTS
    case 0xC15F03: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
