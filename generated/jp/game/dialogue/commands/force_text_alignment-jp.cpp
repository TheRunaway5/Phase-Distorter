// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/text/ccs/force_text_alignment-jp.asm
bool resume_text_ccs_force_text_alignment_jp(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/text/ccs/force_text_alignment-jp.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC1492B: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/force_text_alignment-jp.asm:4 LDA #$0001
    case 0xC1492D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/force_text_alignment-jp.asm:4 LDA #$0001
    // Overlapping static entry reached from 0xC1492D.
    case 0xC1492F: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/force_text_alignment-jp.asm:5 CLC
    case 0xC14930: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/ccs/force_text_alignment-jp.asm:6 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14931: {
        Instruction step(cpu, 0xED, 0x009A7Eu, 3u, AddressMode::Absolute);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/force_text_alignment-jp.asm:7 BRANCHLTEQS @UNKNOWN2
    case 0xC14934: {
        Instruction step(cpu, 0x50, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_clear();
        return step.finish();
    }
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/force_text_alignment-jp.asm:7 BRANCHLTEQS @UNKNOWN2
    case 0xC14936: {
        Instruction step(cpu, 0x10, 0x000017u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/force_text_alignment-jp.asm:7 BRANCHLTEQS @UNKNOWN2
    case 0xC14938: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/force_text_alignment-jp.asm:7 BRANCHLTEQS @UNKNOWN2
    case 0xC1493A: {
        Instruction step(cpu, 0x30, 0x000013u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/text/ccs/force_text_alignment-jp.asm:8 TXA
    case 0xC1493C: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/force_text_alignment-jp.asm:9 SEP #PROC_FLAGS::ACCUM8
    case 0xC1493D: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/force_text_alignment-jp.asm:10 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC1493F: {
        Instruction step(cpu, 0xAE, 0x009A7Eu, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/force_text_alignment-jp.asm:11 STA CC_ARGUMENT_STORAGE,X
    case 0xC14942: {
        Instruction step(cpu, 0x9D, 0x009A6Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/force_text_alignment-jp.asm:12 REP #PROC_FLAGS::ACCUM8
    case 0xC14945: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/force_text_alignment-jp.asm:13 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14947: {
        Instruction step(cpu, 0xEE, 0x009A7Eu, 3u, AddressMode::Absolute);
        step.increment();
        return step.finish();
    }
    // src/text/ccs/force_text_alignment-jp.asm:14 LDA #.LOWORD(CC_18_05)
    case 0xC1494A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00002Bu : 0x00492Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/force_text_alignment-jp.asm:14 LDA #.LOWORD(CC_18_05)
    // Overlapping static entry reached from 0xC1494A.
    case 0xC1494C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x49, narrow ? 0x000080u : 0x000C80u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/ccs/force_text_alignment-jp.asm:15 BRA @UNKNOWN5
    case 0xC1494D: {
        Instruction step(cpu, 0x80, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/force_text_alignment-jp.asm:15 BRA @UNKNOWN5
    // Overlapping static entry reached from 0xC1494C.
    case 0xC1494E: {
        Instruction step(cpu, 0x0C, 0x006EADu, 3u, AddressMode::Absolute);
        step.set_tested_bits();
        return step.finish();
    }
    // src/text/ccs/force_text_alignment-jp.asm:17 LDA CC_ARGUMENT_STORAGE
    case 0xC1494F: {
        Instruction step(cpu, 0xAD, 0x009A6Eu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/force_text_alignment-jp.asm:17 LDA CC_ARGUMENT_STORAGE
    // Overlapping static entry reached from 0xC1494E.
    case 0xC14951: {
        Instruction step(cpu, 0x9A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_stack();
        return step.finish();
    }
    // src/text/ccs/force_text_alignment-jp.asm:18 AND #$00FF
    case 0xC14952: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/force_text_alignment-jp.asm:18 AND #$00FF
    // Overlapping static entry reached from 0xC14952.
    case 0xC14954: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/force_text_alignment-jp.asm:19 JSR UNKNOWN_C438A5
    case 0xC14955: {
        Instruction step(cpu, 0x20, 0x001169u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/force_text_alignment-jp.asm:21 LDA #NULL
    case 0xC14958: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/force_text_alignment-jp.asm:21 LDA #NULL
    // Overlapping static entry reached from 0xC14958.
    case 0xC1495A: {
        Instruction step(cpu, 0x00, 0x000060u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/force_text_alignment-jp.asm:23 RTS
    case 0xC1495B: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
