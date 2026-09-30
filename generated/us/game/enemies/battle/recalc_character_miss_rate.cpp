// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/battle/recalc_character_miss_rate.asm
bool resume_battle_recalc_character_miss_rate(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/recalc_character_miss_rate.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC21D95: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/recalc_character_miss_rate.asm:8 END_STACK_VARS
    case 0xC21D97: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/recalc_character_miss_rate.asm:8 END_STACK_VARS
    case 0xC21D98: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/recalc_character_miss_rate.asm:8 END_STACK_VARS
    case 0xC21D99: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/recalc_character_miss_rate.asm:8 END_STACK_VARS
    case 0xC21D9A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EFu : 0x00FFEFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/recalc_character_miss_rate.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC21D9A.
    case 0xC21D9C: {
        Instruction step(cpu, 0xFF, 0xA8685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/recalc_character_miss_rate.asm:8 END_STACK_VARS
    case 0xC21D9D: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/recalc_character_miss_rate.asm:8 END_STACK_VARS
    case 0xC21D9E: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/battle/recalc_character_miss_rate.asm:9 TAY
    case 0xC21D9F: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/battle/recalc_character_miss_rate.asm:10 DEY
    case 0xC21DA0: {
        Instruction step(cpu, 0x88, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_y();
        return step.finish();
    }
    // src/battle/recalc_character_miss_rate.asm:11 STY @LOCAL01
    case 0xC21DA1: {
        Instruction step(cpu, 0x84, 0x00000Fu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/recalc_character_miss_rate.asm:12 TYA
    case 0xC21DA3: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/recalc_character_miss_rate.asm:13 LDY #.SIZEOF(char_struct)
    case 0xC21DA4: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Fu : 0x00005Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/recalc_character_miss_rate.asm:13 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC21DA4.
    case 0xC21DA6: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/recalc_character_miss_rate.asm:14 JSL MULT168
    case 0xC21DA7: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/recalc_character_miss_rate.asm:15 TAX
    case 0xC21DAB: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/recalc_character_miss_rate.asm:16 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::WEAPON,X
    case 0xC21DAC: {
        Instruction step(cpu, 0xBD, 0x0099FFu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/recalc_character_miss_rate.asm:17 AND #$00FF
    case 0xC21DAF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/recalc_character_miss_rate.asm:17 AND #$00FF
    // Overlapping static entry reached from 0xC21DAF.
    case 0xC21DB1: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/recalc_character_miss_rate.asm:18 BEQ @UNKNOWN0
    case 0xC21DB2: {
        Instruction step(cpu, 0xF0, 0x000032u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/recalc_character_miss_rate.asm:19 DEC
    case 0xC21DB4: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/battle/recalc_character_miss_rate.asm:20 STA @VIRTUAL02
    case 0xC21DB5: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/recalc_character_miss_rate.asm:21 TXA
    case 0xC21DB7: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/recalc_character_miss_rate.asm:22 CLC
    case 0xC21DB8: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/recalc_character_miss_rate.asm:23 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    case 0xC21DB9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000F1u : 0x0099F1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/recalc_character_miss_rate.asm:23 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    // Overlapping static entry reached from 0xC21DB9.
    case 0xC21DBB: {
        Instruction step(cpu, 0x99, 0x006518u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/recalc_character_miss_rate.asm:24 CLC
    case 0xC21DBC: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/recalc_character_miss_rate.asm:25 ADC @VIRTUAL02
    case 0xC21DBD: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/recalc_character_miss_rate.asm:25 ADC @VIRTUAL02
    // Overlapping static entry reached from 0xC21DBB.
    case 0xC21DBE: {
        Instruction step(cpu, 0x02, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/battle/recalc_character_miss_rate.asm:26 TAX
    case 0xC21DBF: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/recalc_character_miss_rate.asm:27 LDA __BSS_START__,X
    case 0xC21DC0: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/recalc_character_miss_rate.asm:28 AND #$00FF
    case 0xC21DC3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/recalc_character_miss_rate.asm:28 AND #$00FF
    // Overlapping static entry reached from 0xC21DC3.
    case 0xC21DC5: {
        Instruction step(cpu, 0x00, 0x0000A0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/battle/recalc_character_miss_rate.asm:29 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21DC6: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000027u : 0x000027u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/battle/recalc_character_miss_rate.asm:29 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    // Overlapping static entry reached from 0xC21DC6.
    case 0xC21DC8: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/battle/recalc_character_miss_rate.asm:29 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21DC9: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/recalc_character_miss_rate.asm:30 CLC
    case 0xC21DCD: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/recalc_character_miss_rate.asm:31 ADC #item::params + item_parameters::special
    case 0xC21DCE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000022u : 0x000022u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/recalc_character_miss_rate.asm:31 ADC #item::params + item_parameters::special
    // Overlapping static entry reached from 0xC21DCE.
    case 0xC21DD0: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/recalc_character_miss_rate.asm:32 TAX
    case 0xC21DD1: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/recalc_character_miss_rate.asm:33 SEP #PROC_FLAGS::ACCUM8
    case 0xC21DD2: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/recalc_character_miss_rate.asm:34 LDA f:ITEM_CONFIGURATION_TABLE,X
    case 0xC21DD4: {
        Instruction step(cpu, 0xBF, 0xD55000u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/recalc_character_miss_rate.asm:35 REP #PROC_FLAGS::ACCUM8
    case 0xC21DD8: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/recalc_character_miss_rate.asm:36 SEC
    case 0xC21DDA: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/battle/recalc_character_miss_rate.asm:37 AND #$00FF
    case 0xC21DDB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/recalc_character_miss_rate.asm:37 AND #$00FF
    // Overlapping static entry reached from 0xC21DDB.
    case 0xC21DDD: {
        Instruction step(cpu, 0x00, 0x0000E9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/recalc_character_miss_rate.asm:38 SBC #$0080
    case 0xC21DDE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x000080u : 0x000080u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/recalc_character_miss_rate.asm:38 SBC #$0080
    // Overlapping static entry reached from 0xC21DDE.
    case 0xC21DE0: {
        Instruction step(cpu, 0x00, 0x000049u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/recalc_character_miss_rate.asm:39 EOR #$FF80
    case 0xC21DE1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x49, narrow ? 0x000080u : 0x00FF80u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.xor_accumulator();
        return step.finish();
    }
    // src/battle/recalc_character_miss_rate.asm:39 EOR #$FF80
    // Overlapping static entry reached from 0xC21DE1.
    case 0xC21DE3: {
        Instruction step(cpu, 0xFF, 0xA90380u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/recalc_character_miss_rate.asm:40 BRA @UNKNOWN1
    case 0xC21DE4: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/recalc_character_miss_rate.asm:42 LDA #0
    case 0xC21DE6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/recalc_character_miss_rate.asm:42 LDA #0
    // Overlapping static entry reached from 0xC21DE3.
    case 0xC21DE7: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/recalc_character_miss_rate.asm:42 LDA #0
    // Overlapping static entry reached from 0xC21DE6.
    case 0xC21DE8: {
        Instruction step(cpu, 0x00, 0x0000E2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/recalc_character_miss_rate.asm:44 SEP #PROC_FLAGS::ACCUM8
    case 0xC21DE9: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/recalc_character_miss_rate.asm:45 STA @LOCAL00
    case 0xC21DEB: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/recalc_character_miss_rate.asm:46 LDY @LOCAL01
    case 0xC21DED: {
        Instruction step(cpu, 0xA4, 0x00000Fu, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/recalc_character_miss_rate.asm:47 REP #PROC_FLAGS::ACCUM8
    case 0xC21DEF: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/recalc_character_miss_rate.asm:48 TYA
    case 0xC21DF1: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/recalc_character_miss_rate.asm:49 LDY #.SIZEOF(char_struct)
    case 0xC21DF2: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Fu : 0x00005Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/recalc_character_miss_rate.asm:49 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC21DF2.
    case 0xC21DF4: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/recalc_character_miss_rate.asm:50 JSL MULT168
    case 0xC21DF5: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/recalc_character_miss_rate.asm:51 TAX
    case 0xC21DF9: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/recalc_character_miss_rate.asm:52 SEP #PROC_FLAGS::ACCUM8
    case 0xC21DFA: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/recalc_character_miss_rate.asm:53 LDA @LOCAL00
    case 0xC21DFC: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/recalc_character_miss_rate.asm:54 STA PARTY_CHARACTERS+char_struct::miss_rate,X
    case 0xC21DFE: {
        Instruction step(cpu, 0x9D, 0x009A1Fu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/recalc_character_miss_rate.asm:55 END_C_FUNCTION
    case 0xC21E01: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/recalc_character_miss_rate.asm:55 END_C_FUNCTION
    case 0xC21E02: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
