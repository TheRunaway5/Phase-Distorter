// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/text/ccs/learn_special_psi.asm
bool resume_text_ccs_learn_special_psi(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/text/ccs/learn_special_psi.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC15C58: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/learn_special_psi.asm:4 LDA #$0001
    case 0xC15C5A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/learn_special_psi.asm:4 LDA #$0001
    // Overlapping static entry reached from 0xC15C5A.
    case 0xC15C5C: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/learn_special_psi.asm:5 CLC
    case 0xC15C5D: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/ccs/learn_special_psi.asm:6 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC15C5E: {
        Instruction step(cpu, 0xED, 0x0097CAu, 3u, AddressMode::Absolute);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/learn_special_psi.asm:7 BRANCHLTEQS @UNKNOWN2
    case 0xC15C61: {
        Instruction step(cpu, 0x50, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_clear();
        return step.finish();
    }
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/learn_special_psi.asm:7 BRANCHLTEQS @UNKNOWN2
    case 0xC15C63: {
        Instruction step(cpu, 0x10, 0x000017u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/learn_special_psi.asm:7 BRANCHLTEQS @UNKNOWN2
    case 0xC15C65: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/learn_special_psi.asm:7 BRANCHLTEQS @UNKNOWN2
    case 0xC15C67: {
        Instruction step(cpu, 0x30, 0x000013u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/text/ccs/learn_special_psi.asm:8 TXA
    case 0xC15C69: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/learn_special_psi.asm:9 SEP #PROC_FLAGS::ACCUM8
    case 0xC15C6A: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/learn_special_psi.asm:10 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC15C6C: {
        Instruction step(cpu, 0xAE, 0x0097CAu, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/learn_special_psi.asm:11 STA CC_ARGUMENT_STORAGE,X
    case 0xC15C6F: {
        Instruction step(cpu, 0x9D, 0x0097BAu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/learn_special_psi.asm:12 REP #PROC_FLAGS::ACCUM8
    case 0xC15C72: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/learn_special_psi.asm:13 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC15C74: {
        Instruction step(cpu, 0xEE, 0x0097CAu, 3u, AddressMode::Absolute);
        step.increment();
        return step.finish();
    }
    // src/text/ccs/learn_special_psi.asm:14 LDA #.LOWORD(CC_1F_71)
    case 0xC15C77: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000058u : 0x005C58u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/learn_special_psi.asm:14 LDA #.LOWORD(CC_1F_71)
    // Overlapping static entry reached from 0xC15C77.
    case 0xC15C79: {
        Instruction step(cpu, 0x5C, 0x8A0880u, 4u, AddressMode::Long);
        step.jump_long();
        return step.finish();
    }
    // src/text/ccs/learn_special_psi.asm:15 BRA @UNKNOWN3
    case 0xC15C7A: {
        Instruction step(cpu, 0x80, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/learn_special_psi.asm:17 TXA
    case 0xC15C7C: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/learn_special_psi.asm:18 JSL LEARN_SPECIAL_PSI
    case 0xC15C7D: {
        Instruction step(cpu, 0x22, 0xC227C8u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/learn_special_psi.asm:19 LDA #NULL
    case 0xC15C81: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/learn_special_psi.asm:19 LDA #NULL
    // Overlapping static entry reached from 0xC15C81.
    case 0xC15C83: {
        Instruction step(cpu, 0x00, 0x000060u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/learn_special_psi.asm:21 RTS
    case 0xC15C84: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
