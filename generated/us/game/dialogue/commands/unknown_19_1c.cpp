// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/text/ccs/unknown_19_1C.asm
bool resume_text_ccs_unknown_19_1c(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/unknown_19_1C.asm:3 BEGIN_C_FUNCTION
    case 0xC15FF7: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/unknown_19_1C.asm:10 END_STACK_VARS
    case 0xC15FF9: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/unknown_19_1C.asm:10 END_STACK_VARS
    case 0xC15FFA: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/unknown_19_1C.asm:10 END_STACK_VARS
    case 0xC15FFB: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/unknown_19_1C.asm:10 END_STACK_VARS
    case 0xC15FFC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EEu : 0x00FFEEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/unknown_19_1C.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC15FFC.
    case 0xC15FFE: {
        Instruction step(cpu, 0xFF, 0x86685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/unknown_19_1C.asm:10 END_STACK_VARS
    case 0xC15FFF: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/unknown_19_1C.asm:10 END_STACK_VARS
    case 0xC16000: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/ccs/unknown_19_1C.asm:11 STX @LOCAL01
    case 0xC16001: {
        Instruction step(cpu, 0x86, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/ccs/unknown_19_1C.asm:11 STX @LOCAL01
    // Overlapping static entry reached from 0xC15FFE.
    case 0xC16002: {
        Instruction step(cpu, 0x10, 0x0000A9u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // src/text/ccs/unknown_19_1C.asm:12 LDA #1
    case 0xC16003: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/unknown_19_1C.asm:12 LDA #1
    // Overlapping static entry reached from 0xC16002.
    case 0xC16004: {
        Instruction step(cpu, 0x01, 0x000000u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/ccs/unknown_19_1C.asm:12 LDA #1
    // Overlapping static entry reached from 0xC16003.
    case 0xC16005: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/unknown_19_1C.asm:13 CLC
    case 0xC16006: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/ccs/unknown_19_1C.asm:14 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16007: {
        Instruction step(cpu, 0xED, 0x0097CAu, 3u, AddressMode::Absolute);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/unknown_19_1C.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC1600A: {
        Instruction step(cpu, 0x50, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_clear();
        return step.finish();
    }
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/unknown_19_1C.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC1600C: {
        Instruction step(cpu, 0x10, 0x000017u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/unknown_19_1C.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC1600E: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/unknown_19_1C.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC16010: {
        Instruction step(cpu, 0x30, 0x000013u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/text/ccs/unknown_19_1C.asm:16 TXA
    case 0xC16012: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/unknown_19_1C.asm:17 SEP #PROC_FLAGS::ACCUM8
    case 0xC16013: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/unknown_19_1C.asm:18 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16015: {
        Instruction step(cpu, 0xAE, 0x0097CAu, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/unknown_19_1C.asm:19 STA CC_ARGUMENT_STORAGE,X
    case 0xC16018: {
        Instruction step(cpu, 0x9D, 0x0097BAu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/unknown_19_1C.asm:20 REP #PROC_FLAGS::ACCUM8
    case 0xC1601B: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/unknown_19_1C.asm:21 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC1601D: {
        Instruction step(cpu, 0xEE, 0x0097CAu, 3u, AddressMode::Absolute);
        step.increment();
        return step.finish();
    }
    // src/text/ccs/unknown_19_1C.asm:22 LDA #.LOWORD(CC_19_1C)
    case 0xC16020: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000F7u : 0x005FF7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/unknown_19_1C.asm:22 LDA #.LOWORD(CC_19_1C)
    // Overlapping static entry reached from 0xC16020.
    case 0xC16022: {
        Instruction step(cpu, 0x5F, 0xAD5980u, 4u, AddressMode::LongIndexedX);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/ccs/unknown_19_1C.asm:23 BRA @UNKNOWN9
    case 0xC16023: {
        Instruction step(cpu, 0x80, 0x000059u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/unknown_19_1C.asm:25 LDA CC_ARGUMENT_STORAGE
    case 0xC16025: {
        Instruction step(cpu, 0xAD, 0x0097BAu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/unknown_19_1C.asm:25 LDA CC_ARGUMENT_STORAGE
    // Overlapping static entry reached from 0xC16022.
    case 0xC16026: {
        Instruction step(cpu, 0xBA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_stack_to_x();
        return step.finish();
    }
    // src/text/ccs/unknown_19_1C.asm:25 LDA CC_ARGUMENT_STORAGE
    // Overlapping static entry reached from 0xC16026.
    case 0xC16027: {
        Instruction step(cpu, 0x97, 0x000029u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/unknown_19_1C.asm:26 AND #$00FF
    case 0xC16028: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/unknown_19_1C.asm:26 AND #$00FF
    // Overlapping static entry reached from 0xC16027.
    case 0xC16029: {
        Instruction step(cpu, 0xFF, 0x0FF000u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/ccs/unknown_19_1C.asm:26 AND #$00FF
    // Overlapping static entry reached from 0xC16028.
    case 0xC1602A: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/unknown_19_1C.asm:27 BEQ @ARG_1_IS_ZERO
    case 0xC1602B: {
        Instruction step(cpu, 0xF0, 0x00000Fu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/unknown_19_1C.asm:28 SEP #PROC_FLAGS::ACCUM8
    case 0xC1602D: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/unknown_19_1C.asm:29 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC1602F: {
        Instruction step(cpu, 0xAD, 0x0097BAu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/unknown_19_1C.asm:29 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC16032: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/unknown_19_1C.asm:29 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC16034: {
        Instruction step(cpu, 0x64, 0x000007u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/unknown_19_1C.asm:29 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC16036: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/unknown_19_1C.asm:29 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC16038: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/text/ccs/unknown_19_1C.asm:30 BRA @ARG_1_IS_NONZERO
    case 0xC1603A: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/unknown_19_1C.asm:32 JSR GET_WORKING_MEMORY
    case 0xC1603C: {
        Instruction step(cpu, 0x20, 0x00040Au, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/unknown_19_1C.asm:34 REP #PROC_FLAGS::ACCUM8
    case 0xC1603F: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/unknown_19_1C.asm:35 LDA @VIRTUAL06
    case 0xC16041: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/unknown_19_1C.asm:36 STA @VIRTUAL04
    case 0xC16043: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/unknown_19_1C.asm:37 LDX @LOCAL01
    case 0xC16045: {
        Instruction step(cpu, 0xA6, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/unknown_19_1C.asm:38 BEQ @ARG_2_IS_ZERO
    case 0xC16047: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/unknown_19_1C.asm:39 TXA
    case 0xC16049: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/unknown_19_1C.asm:40 BRA @ARG_2_IS_NONZERO
    case 0xC1604A: {
        Instruction step(cpu, 0x80, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/unknown_19_1C.asm:42 JSR GET_ARGUMENT_MEMORY
    case 0xC1604C: {
        Instruction step(cpu, 0x20, 0x0003DCu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/unknown_19_1C.asm:43 LDA @VIRTUAL06
    case 0xC1604F: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/unknown_19_1C.asm:45 TAY
    case 0xC16051: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/text/ccs/unknown_19_1C.asm:46 STY @LOCAL00
    case 0xC16052: {
        Instruction step(cpu, 0x84, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/ccs/unknown_19_1C.asm:47 LDA @VIRTUAL04
    case 0xC16054: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/unknown_19_1C.asm:48 CMP #$00FF
    case 0xC16056: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/unknown_19_1C.asm:48 CMP #$00FF
    // Overlapping static entry reached from 0xC16056.
    case 0xC16058: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/unknown_19_1C.asm:49 BNE @UNKNOWN7
    case 0xC16059: {
        Instruction step(cpu, 0xD0, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/ccs/unknown_19_1C.asm:50 TYA
    case 0xC1605B: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/unknown_19_1C.asm:51 JSR UNKNOWN_C191B0
    case 0xC1605C: {
        Instruction step(cpu, 0x20, 0x0091B0u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/unknown_19_1C.asm:52 STA @VIRTUAL02
    case 0xC1605F: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/unknown_19_1C.asm:53 BRA @UNKNOWN8
    case 0xC16061: {
        Instruction step(cpu, 0x80, 0x000011u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/unknown_19_1C.asm:55 TYX
    case 0xC16063: {
        Instruction step(cpu, 0xBB, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_x();
        return step.finish();
    }
    // src/text/ccs/unknown_19_1C.asm:56 LDA @VIRTUAL04
    case 0xC16064: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/unknown_19_1C.asm:57 JSL GET_CHARACTER_ITEM
    case 0xC16066: {
        Instruction step(cpu, 0x22, 0xC3E977u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/unknown_19_1C.asm:58 STA @VIRTUAL02
    case 0xC1606A: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/unknown_19_1C.asm:59 LDY @LOCAL00
    case 0xC1606C: {
        Instruction step(cpu, 0xA4, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/ccs/unknown_19_1C.asm:60 TYX
    case 0xC1606E: {
        Instruction step(cpu, 0xBB, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_x();
        return step.finish();
    }
    // src/text/ccs/unknown_19_1C.asm:61 LDA @VIRTUAL04
    case 0xC1606F: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/unknown_19_1C.asm:62 JSR REMOVE_ITEM_FROM_INVENTORY
    case 0xC16071: {
        Instruction step(cpu, 0x20, 0x008C27u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/unknown_19_1C.asm:64 LDX @VIRTUAL02
    case 0xC16074: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/unknown_19_1C.asm:65 LDA @VIRTUAL04
    case 0xC16076: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/unknown_19_1C.asm:66 JSR UNKNOWN_C15FB1
    case 0xC16078: {
        Instruction step(cpu, 0x20, 0x005FB1u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/unknown_19_1C.asm:67 LDA #NULL
    case 0xC1607B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/unknown_19_1C.asm:67 LDA #NULL
    // Overlapping static entry reached from 0xC1607B.
    case 0xC1607D: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/unknown_19_1C.asm:69 END_C_FUNCTION
    case 0xC1607E: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/unknown_19_1C.asm:69 END_C_FUNCTION
    case 0xC1607F: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
