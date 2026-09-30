// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/text/ccs/set_map_palette.asm
bool resume_text_ccs_set_map_palette(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/set_map_palette.asm:3 BEGIN_C_FUNCTION
    case 0xC1697D: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/set_map_palette.asm:10 END_STACK_VARS
    case 0xC1697F: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/set_map_palette.asm:10 END_STACK_VARS
    case 0xC16980: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/set_map_palette.asm:10 END_STACK_VARS
    case 0xC16981: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/set_map_palette.asm:10 END_STACK_VARS
    case 0xC16982: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000F0u : 0x00FFF0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/set_map_palette.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC16982.
    case 0xC16984: {
        Instruction step(cpu, 0xFF, 0xA9685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/set_map_palette.asm:10 END_STACK_VARS
    case 0xC16985: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/set_map_palette.asm:10 END_STACK_VARS
    case 0xC16986: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_map_palette.asm:11 LDA #2
    case 0xC16987: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_map_palette.asm:11 LDA #2
    // Overlapping static entry reached from 0xC16984.
    case 0xC16988: {
        Instruction step(cpu, 0x02, 0x000000u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/text/ccs/set_map_palette.asm:11 LDA #2
    // Overlapping static entry reached from 0xC16987.
    case 0xC16989: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/set_map_palette.asm:12 CLC
    case 0xC1698A: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/ccs/set_map_palette.asm:13 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC1698B: {
        Instruction step(cpu, 0xED, 0x009A7Eu, 3u, AddressMode::Absolute);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/set_map_palette.asm:14 BRANCHLTEQS @UNKNOWN2
    case 0xC1698E: {
        Instruction step(cpu, 0x50, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_clear();
        return step.finish();
    }
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/set_map_palette.asm:14 BRANCHLTEQS @UNKNOWN2
    case 0xC16990: {
        Instruction step(cpu, 0x10, 0x000017u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/set_map_palette.asm:14 BRANCHLTEQS @UNKNOWN2
    case 0xC16992: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/set_map_palette.asm:14 BRANCHLTEQS @UNKNOWN2
    case 0xC16994: {
        Instruction step(cpu, 0x30, 0x000013u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/set_map_palette.asm:14 BRANCHLTEQS @UNKNOWN2
    // Overlapping static entry reached from 0xC169F3.
    case 0xC16995: {
        Instruction step(cpu, 0x13, 0x00008Au, 2u, AddressMode::StackRelativeIndirectIndexedY);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_map_palette.asm:15 TXA
    case 0xC16996: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_map_palette.asm:16 SEP #PROC_FLAGS::ACCUM8
    case 0xC16997: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/set_map_palette.asm:17 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16999: {
        Instruction step(cpu, 0xAE, 0x009A7Eu, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/set_map_palette.asm:18 STA CC_ARGUMENT_STORAGE,X
    case 0xC1699C: {
        Instruction step(cpu, 0x9D, 0x009A6Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_map_palette.asm:19 REP #PROC_FLAGS::ACCUM8
    case 0xC1699F: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/set_map_palette.asm:20 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC169A1: {
        Instruction step(cpu, 0xEE, 0x009A7Eu, 3u, AddressMode::Absolute);
        step.increment();
        return step.finish();
    }
    // src/text/ccs/set_map_palette.asm:21 LDA #.LOWORD(CC_1F_E1)
    case 0xC169A4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Du : 0x00697Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_map_palette.asm:21 LDA #.LOWORD(CC_1F_E1)
    // Overlapping static entry reached from 0xC169A4.
    case 0xC169A6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000080u : 0x001880u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/set_map_palette.asm:22 BRA @UNKNOWN3
    case 0xC169A7: {
        Instruction step(cpu, 0x80, 0x000018u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/set_map_palette.asm:22 BRA @UNKNOWN3
    // Overlapping static entry reached from 0xC169A6.
    case 0xC169A8: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/ccs/set_map_palette.asm:24 SEP #PROC_FLAGS::ACCUM8
    case 0xC169A9: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/set_map_palette.asm:25 LDA CC_ARGUMENT_STORAGE+1
    case 0xC169AB: {
        Instruction step(cpu, 0xAD, 0x009A6Fu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_map_palette.asm:26 STA @LOCAL00
    case 0xC169AE: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_map_palette.asm:27 REP #PROC_FLAGS::ACCUM8
    case 0xC169B0: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/set_map_palette.asm:28 TXA
    case 0xC169B2: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_map_palette.asm:29 SEP #PROC_FLAGS::ACCUM8
    case 0xC169B3: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/set_map_palette.asm:30 STA @LOCAL01
    case 0xC169B5: {
        Instruction step(cpu, 0x85, 0x00000Fu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_map_palette.asm:31 LDA CC_ARGUMENT_STORAGE
    case 0xC169B7: {
        Instruction step(cpu, 0xAD, 0x009A6Eu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_map_palette.asm:32 JSL UNKNOWN_C4939C
    case 0xC169BA: {
        Instruction step(cpu, 0x22, 0xC469E6u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/set_map_palette.asm:34 LDA #NULL
    case 0xC169BE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_map_palette.asm:34 LDA #NULL
    // Overlapping static entry reached from 0xC169BE.
    case 0xC169C0: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/set_map_palette.asm:36 END_C_FUNCTION
    case 0xC169C1: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/set_map_palette.asm:36 END_C_FUNCTION
    case 0xC169C2: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
