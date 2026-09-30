// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/text/ccs/dummy_1F_19.asm
bool resume_text_ccs_dummy_1f_19(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/text/ccs/dummy_1F_19.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC165AA: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/dummy_1F_19.asm:4 LDA #$0006
    case 0xC165AC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/dummy_1F_19.asm:4 LDA #$0006
    // Overlapping static entry reached from 0xC165AC.
    case 0xC165AE: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/dummy_1F_19.asm:5 CLC
    case 0xC165AF: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/ccs/dummy_1F_19.asm:6 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC165B0: {
        Instruction step(cpu, 0xED, 0x0097CAu, 3u, AddressMode::Absolute);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/dummy_1F_19.asm:7 BRANCHLTEQS @UNKNOWN2
    case 0xC165B3: {
        Instruction step(cpu, 0x50, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_clear();
        return step.finish();
    }
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/dummy_1F_19.asm:7 BRANCHLTEQS @UNKNOWN2
    case 0xC165B5: {
        Instruction step(cpu, 0x10, 0x000017u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/dummy_1F_19.asm:7 BRANCHLTEQS @UNKNOWN2
    case 0xC165B7: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/dummy_1F_19.asm:7 BRANCHLTEQS @UNKNOWN2
    case 0xC165B9: {
        Instruction step(cpu, 0x30, 0x000013u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/text/ccs/dummy_1F_19.asm:8 TXA
    case 0xC165BB: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/dummy_1F_19.asm:9 SEP #PROC_FLAGS::ACCUM8
    case 0xC165BC: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/dummy_1F_19.asm:10 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC165BE: {
        Instruction step(cpu, 0xAE, 0x0097CAu, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/dummy_1F_19.asm:11 STA CC_ARGUMENT_STORAGE,X
    case 0xC165C1: {
        Instruction step(cpu, 0x9D, 0x0097BAu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/dummy_1F_19.asm:12 REP #PROC_FLAGS::ACCUM8
    case 0xC165C4: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/dummy_1F_19.asm:13 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC165C6: {
        Instruction step(cpu, 0xEE, 0x0097CAu, 3u, AddressMode::Absolute);
        step.increment();
        return step.finish();
    }
    // src/text/ccs/dummy_1F_19.asm:14 LDA #.LOWORD(CC_1F_19)
    case 0xC165C9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000AAu : 0x0065AAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/dummy_1F_19.asm:14 LDA #.LOWORD(CC_1F_19)
    // Overlapping static entry reached from 0xC165C9.
    case 0xC165CB: {
        Instruction step(cpu, 0x65, 0x000080u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/dummy_1F_19.asm:15 BRA @UNKNOWN3
    case 0xC165CC: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/dummy_1F_19.asm:15 BRA @UNKNOWN3
    // Overlapping static entry reached from 0xC165CB.
    case 0xC165CD: {
        Instruction step(cpu, 0x03, 0x0000A9u, 2u, AddressMode::StackRelative);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/ccs/dummy_1F_19.asm:17 LDA #NULL
    case 0xC165CE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/dummy_1F_19.asm:17 LDA #NULL
    // Overlapping static entry reached from 0xC165CD.
    case 0xC165CF: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/dummy_1F_19.asm:17 LDA #NULL
    // Overlapping static entry reached from 0xC165CE.
    case 0xC165D0: {
        Instruction step(cpu, 0x00, 0x000060u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/dummy_1F_19.asm:19 RTS
    case 0xC165D1: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
