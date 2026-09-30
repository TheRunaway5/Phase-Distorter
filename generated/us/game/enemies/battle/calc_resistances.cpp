// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/battle/calc_resistances.asm
bool resume_battle_calc_resistances(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/calc_resistances.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC21E03: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/calc_resistances.asm:9 END_STACK_VARS
    case 0xC21E05: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/calc_resistances.asm:9 END_STACK_VARS
    case 0xC21E06: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/calc_resistances.asm:9 END_STACK_VARS
    case 0xC21E07: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/calc_resistances.asm:9 END_STACK_VARS
    case 0xC21E08: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000ECu : 0x00FFECu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/calc_resistances.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC21E08.
    case 0xC21E0A: {
        Instruction step(cpu, 0xFF, 0xAA685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/calc_resistances.asm:9 END_STACK_VARS
    case 0xC21E0B: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/calc_resistances.asm:9 END_STACK_VARS
    case 0xC21E0C: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:10 TAX
    case 0xC21E0D: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:11 DEX
    case 0xC21E0E: {
        Instruction step(cpu, 0xCA, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_x();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:12 STX @LOCAL02
    case 0xC21E0F: {
        Instruction step(cpu, 0x86, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:13 TXA
    case 0xC21E11: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:14 LDY #.SIZEOF(char_struct)
    case 0xC21E12: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Fu : 0x00005Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:14 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC21E12.
    case 0xC21E14: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:15 JSL MULT168
    case 0xC21E15: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:16 STA @LOCAL01
    case 0xC21E19: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:17 TAX
    case 0xC21E1B: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:18 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::BODY,X
    case 0xC21E1C: {
        Instruction step(cpu, 0xBD, 0x009A00u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:19 AND #$00FF
    case 0xC21E1F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:19 AND #$00FF
    // Overlapping static entry reached from 0xC21E1F.
    case 0xC21E21: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:20 TAY
    case 0xC21E22: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:21 BEQ @UNKNOWN0
    case 0xC21E23: {
        Instruction step(cpu, 0xF0, 0x000037u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:22 TYA
    case 0xC21E25: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:23 DEC
    case 0xC21E26: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:24 STA @VIRTUAL02
    case 0xC21E27: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:25 LDA @LOCAL01
    case 0xC21E29: {
        Instruction step(cpu, 0xA5, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:26 CLC
    case 0xC21E2B: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:27 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    case 0xC21E2C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000F1u : 0x0099F1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:27 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    // Overlapping static entry reached from 0xC21E2C.
    case 0xC21E2E: {
        Instruction step(cpu, 0x99, 0x006518u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:28 CLC
    case 0xC21E2F: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:29 ADC @VIRTUAL02
    case 0xC21E30: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:29 ADC @VIRTUAL02
    // Overlapping static entry reached from 0xC21E2E.
    case 0xC21E31: {
        Instruction step(cpu, 0x02, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:30 TAX
    case 0xC21E32: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:31 LDA __BSS_START__,X
    case 0xC21E33: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:32 AND #$00FF
    case 0xC21E36: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:32 AND #$00FF
    // Overlapping static entry reached from 0xC21E36.
    case 0xC21E38: {
        Instruction step(cpu, 0x00, 0x0000A0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/battle/calc_resistances.asm:33 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21E39: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000027u : 0x000027u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/battle/calc_resistances.asm:33 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    // Overlapping static entry reached from 0xC21E39.
    case 0xC21E3B: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/battle/calc_resistances.asm:33 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21E3C: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:34 CLC
    case 0xC21E40: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:35 ADC #item::params + item_parameters::special
    case 0xC21E41: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000022u : 0x000022u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:35 ADC #item::params + item_parameters::special
    // Overlapping static entry reached from 0xC21E41.
    case 0xC21E43: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:36 TAX
    case 0xC21E44: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:37 SEP #PROC_FLAGS::ACCUM8
    case 0xC21E45: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:38 LDA f:ITEM_CONFIGURATION_TABLE,X
    case 0xC21E47: {
        Instruction step(cpu, 0xBF, 0xD55000u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:39 REP #PROC_FLAGS::ACCUM8
    case 0xC21E4B: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:40 SEC
    case 0xC21E4D: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:41 AND #$00FF
    case 0xC21E4E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:41 AND #$00FF
    // Overlapping static entry reached from 0xC21E4E.
    case 0xC21E50: {
        Instruction step(cpu, 0x00, 0x0000E9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:42 SBC #$0080
    case 0xC21E51: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x000080u : 0x000080u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:42 SBC #$0080
    // Overlapping static entry reached from 0xC21E51.
    case 0xC21E53: {
        Instruction step(cpu, 0x00, 0x000049u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:43 EOR #$FF80
    case 0xC21E54: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x49, narrow ? 0x000080u : 0x00FF80u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.xor_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:43 EOR #$FF80
    // Overlapping static entry reached from 0xC21E54.
    case 0xC21E56: {
        Instruction step(cpu, 0xFF, 0x000329u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:44 AND #$0003
    case 0xC21E57: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:44 AND #$0003
    // Overlapping static entry reached from 0xC21E57.
    case 0xC21E59: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:45 BRA @UNKNOWN1
    case 0xC21E5A: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:47 LDA #$0000
    case 0xC21E5C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:47 LDA #$0000
    // Overlapping static entry reached from 0xC21E5C.
    case 0xC21E5E: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:49 STA @LOCAL00
    case 0xC21E5F: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:50 LDX @LOCAL02
    case 0xC21E61: {
        Instruction step(cpu, 0xA6, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:51 TXA
    case 0xC21E63: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:52 LDY #.SIZEOF(char_struct)
    case 0xC21E64: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Fu : 0x00005Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:52 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC21E64.
    case 0xC21E66: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:53 JSL MULT168
    case 0xC21E67: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:54 STA @VIRTUAL02
    case 0xC21E6B: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:55 LDX @VIRTUAL02
    case 0xC21E6D: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:56 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::OTHER,X
    case 0xC21E6F: {
        Instruction step(cpu, 0xBD, 0x009A02u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:57 AND #$00FF
    case 0xC21E72: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:57 AND #$00FF
    // Overlapping static entry reached from 0xC21E72.
    case 0xC21E74: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:58 TAY
    case 0xC21E75: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:59 BEQ @UNKNOWN2
    case 0xC21E76: {
        Instruction step(cpu, 0xF0, 0x00003Eu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:60 TYA
    case 0xC21E78: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:61 DEC
    case 0xC21E79: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:62 STA @VIRTUAL04
    case 0xC21E7A: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:63 LDA @VIRTUAL02
    case 0xC21E7C: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:64 CLC
    case 0xC21E7E: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:65 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    case 0xC21E7F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000F1u : 0x0099F1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:65 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    // Overlapping static entry reached from 0xC21E7F.
    case 0xC21E81: {
        Instruction step(cpu, 0x99, 0x006518u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:66 CLC
    case 0xC21E82: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:67 ADC @VIRTUAL04
    case 0xC21E83: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:67 ADC @VIRTUAL04
    // Overlapping static entry reached from 0xC21E81.
    case 0xC21E84: {
        Instruction step(cpu, 0x04, 0x0000AAu, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:68 TAX
    case 0xC21E85: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:69 LDA __BSS_START__,X
    case 0xC21E86: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:70 AND #$00FF
    case 0xC21E89: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:70 AND #$00FF
    // Overlapping static entry reached from 0xC21E89.
    case 0xC21E8B: {
        Instruction step(cpu, 0x00, 0x0000A0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/battle/calc_resistances.asm:71 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21E8C: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000027u : 0x000027u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/battle/calc_resistances.asm:71 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    // Overlapping static entry reached from 0xC21E8C.
    case 0xC21E8E: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/battle/calc_resistances.asm:71 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21E8F: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:72 CLC
    case 0xC21E93: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:73 ADC #item::params + item_parameters::special
    case 0xC21E94: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000022u : 0x000022u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:73 ADC #item::params + item_parameters::special
    // Overlapping static entry reached from 0xC21E94.
    case 0xC21E96: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:74 TAX
    case 0xC21E97: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:75 SEP #PROC_FLAGS::ACCUM8
    case 0xC21E98: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:76 LDA f:ITEM_CONFIGURATION_TABLE,X
    case 0xC21E9A: {
        Instruction step(cpu, 0xBF, 0xD55000u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:77 REP #PROC_FLAGS::ACCUM8
    case 0xC21E9E: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:78 SEC
    case 0xC21EA0: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:79 AND #$00FF
    case 0xC21EA1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:79 AND #$00FF
    // Overlapping static entry reached from 0xC21EA1.
    case 0xC21EA3: {
        Instruction step(cpu, 0x00, 0x0000E9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:80 SBC #$0080
    case 0xC21EA4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x000080u : 0x000080u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:80 SBC #$0080
    // Overlapping static entry reached from 0xC2EBB1.
    case 0xC21EA5: {
        Instruction step(cpu, 0x80, 0x000000u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:80 SBC #$0080
    // Overlapping static entry reached from 0xC21EA4.
    case 0xC21EA6: {
        Instruction step(cpu, 0x00, 0x000049u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:81 EOR #$FF80
    case 0xC21EA7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x49, narrow ? 0x000080u : 0x00FF80u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.xor_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:81 EOR #$FF80
    // Overlapping static entry reached from 0xC21EA7.
    case 0xC21EA9: {
        Instruction step(cpu, 0xFF, 0x000329u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:82 AND #$0003
    case 0xC21EAA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:82 AND #$0003
    // Overlapping static entry reached from 0xC21EAA.
    case 0xC21EAC: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:83 STA @VIRTUAL02
    case 0xC21EAD: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:84 LDA @LOCAL00
    case 0xC21EAF: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:85 CLC
    case 0xC21EB1: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:86 ADC @VIRTUAL02
    case 0xC21EB2: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:87 STA @LOCAL00
    case 0xC21EB4: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:89 LDA @LOCAL00
    case 0xC21EB6: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:90 CLC
    case 0xC21EB8: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:91 SBC #$0003
    case 0xC21EB9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:91 SBC #$0003
    // Overlapping static entry reached from 0xC21EB9.
    case 0xC21EBB: {
        Instruction step(cpu, 0x00, 0x000050u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:807 BVC :+
    // Macro caller: src/battle/calc_resistances.asm:92 BRANCHLTEQS @UNKNOWN5
    case 0xC21EBC: {
        Instruction step(cpu, 0x50, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_clear();
        return step.finish();
    }
    // include/macros.asm:808 BPL dest
    // Macro caller: src/battle/calc_resistances.asm:92 BRANCHLTEQS @UNKNOWN5
    case 0xC21EBE: {
        Instruction step(cpu, 0x10, 0x00000Bu, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:809 BRA :++
    // Macro caller: src/battle/calc_resistances.asm:92 BRANCHLTEQS @UNKNOWN5
    case 0xC21EC0: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:811 BMI dest
    // Macro caller: src/battle/calc_resistances.asm:92 BRANCHLTEQS @UNKNOWN5
    case 0xC21EC2: {
        Instruction step(cpu, 0x30, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:93 LDY #$0003
    case 0xC21EC4: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:93 LDY #$0003
    // Overlapping static entry reached from 0xC21EC4.
    case 0xC21EC6: {
        Instruction step(cpu, 0x00, 0x000084u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:94 STY @LOCAL01
    case 0xC21EC7: {
        Instruction step(cpu, 0x84, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:95 BRA @UNKNOWN6
    case 0xC21EC9: {
        Instruction step(cpu, 0x80, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:97 LDA @LOCAL00
    case 0xC21ECB: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:98 TAY
    case 0xC21ECD: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:99 STY @LOCAL01
    case 0xC21ECE: {
        Instruction step(cpu, 0x84, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:101 LDX @LOCAL02
    case 0xC21ED0: {
        Instruction step(cpu, 0xA6, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:102 TXA
    case 0xC21ED2: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:103 LDY #.SIZEOF(char_struct)
    case 0xC21ED3: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Fu : 0x00005Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:103 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC21ED3.
    case 0xC21ED5: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:104 JSL MULT168
    case 0xC21ED6: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:105 STA @LOCAL00
    case 0xC21EDA: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:106 TAX
    case 0xC21EDC: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:107 LDY @LOCAL01
    case 0xC21EDD: {
        Instruction step(cpu, 0xA4, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:108 TYA
    case 0xC21EDF: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:109 SEP #PROC_FLAGS::ACCUM8
    case 0xC21EE0: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:110 STA PARTY_CHARACTERS+char_struct::fire_resist,X
    case 0xC21EE2: {
        Instruction step(cpu, 0x9D, 0x009A20u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:111 REP #PROC_FLAGS::ACCUM8
    case 0xC21EE5: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:112 LDA @LOCAL00
    case 0xC21EE7: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:113 TAX
    case 0xC21EE9: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:114 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::BODY,X
    case 0xC21EEA: {
        Instruction step(cpu, 0xBD, 0x009A00u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:115 AND #$00FF
    case 0xC21EED: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:115 AND #$00FF
    // Overlapping static entry reached from 0xC21EED.
    case 0xC21EEF: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:116 TAY
    case 0xC21EF0: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:117 BEQ @UNKNOWN7
    case 0xC21EF1: {
        Instruction step(cpu, 0xF0, 0x000045u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:118 SEP #PROC_FLAGS::ACCUM8
    case 0xC21EF3: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:119 LDA #$0002
    case 0xC21EF5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x004802u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:120 PHA
    case 0xC21EF7: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:121 REP #PROC_FLAGS::ACCUM8
    case 0xC21EF8: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:122 TYA
    case 0xC21EFA: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:123 DEC
    case 0xC21EFB: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:124 STA @VIRTUAL02
    case 0xC21EFC: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:125 LDA @LOCAL00
    case 0xC21EFE: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:126 CLC
    case 0xC21F00: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:127 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    case 0xC21F01: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000F1u : 0x0099F1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:127 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    // Overlapping static entry reached from 0xC21F01.
    case 0xC21F03: {
        Instruction step(cpu, 0x99, 0x006518u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:128 CLC
    case 0xC21F04: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:129 ADC @VIRTUAL02
    case 0xC21F05: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:129 ADC @VIRTUAL02
    // Overlapping static entry reached from 0xC21F03.
    case 0xC21F06: {
        Instruction step(cpu, 0x02, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:130 TAX
    case 0xC21F07: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:131 LDA __BSS_START__,X
    case 0xC21F08: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:132 AND #$00FF
    case 0xC21F0B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:132 AND #$00FF
    // Overlapping static entry reached from 0xC21F0B.
    case 0xC21F0D: {
        Instruction step(cpu, 0x00, 0x0000A0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/battle/calc_resistances.asm:133 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21F0E: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000027u : 0x000027u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/battle/calc_resistances.asm:133 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    // Overlapping static entry reached from 0xC21F0E.
    case 0xC21F10: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/battle/calc_resistances.asm:133 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21F11: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:134 CLC
    case 0xC21F15: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:135 ADC #item::params + item_parameters::special
    case 0xC21F16: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000022u : 0x000022u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:135 ADC #item::params + item_parameters::special
    // Overlapping static entry reached from 0xC21F16.
    case 0xC21F18: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:136 TAX
    case 0xC21F19: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:137 SEP #PROC_FLAGS::ACCUM8
    case 0xC21F1A: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:138 LDA f:ITEM_CONFIGURATION_TABLE,X
    case 0xC21F1C: {
        Instruction step(cpu, 0xBF, 0xD55000u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:139 REP #PROC_FLAGS::ACCUM8
    case 0xC21F20: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:140 SEC
    case 0xC21F22: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:141 AND #$00FF
    case 0xC21F23: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:141 AND #$00FF
    // Overlapping static entry reached from 0xC21F23.
    case 0xC21F25: {
        Instruction step(cpu, 0x00, 0x0000E9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:142 SBC #$0080
    case 0xC21F26: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x000080u : 0x000080u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:142 SBC #$0080
    // Overlapping static entry reached from 0xC21F26.
    case 0xC21F28: {
        Instruction step(cpu, 0x00, 0x000049u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:143 EOR #$FF80
    case 0xC21F29: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x49, narrow ? 0x000080u : 0x00FF80u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.xor_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:143 EOR #$FF80
    // Overlapping static entry reached from 0xC21F29.
    case 0xC21F2B: {
        Instruction step(cpu, 0xFF, 0x000C29u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:144 AND #$000C
    case 0xC21F2C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x00000Cu : 0x00000Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:144 AND #$000C
    // Overlapping static entry reached from 0xC21F2C.
    case 0xC21F2E: {
        Instruction step(cpu, 0x00, 0x0000E2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:145 SEP #PROC_FLAGS::INDEX8
    case 0xC21F2F: {
        Instruction step(cpu, 0xE2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:146 PLY
    case 0xC21F31: {
        Instruction step(cpu, 0x7A, 0x000000u, 1u, AddressMode::Implied);
        step.pull_y();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:147 JSL ASR16
    case 0xC21F32: {
        Instruction step(cpu, 0x22, 0xC0925Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:148 BRA @UNKNOWN8
    case 0xC21F36: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:150 LDA #$0000
    case 0xC21F38: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:150 LDA #$0000
    // Overlapping static entry reached from 0xC21F38.
    case 0xC21F3A: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:152 STA @LOCAL00
    case 0xC21F3B: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:153 REP #PROC_FLAGS::INDEX8
    case 0xC21F3D: {
        Instruction step(cpu, 0xC2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:154 LDX @LOCAL02
    case 0xC21F3F: {
        Instruction step(cpu, 0xA6, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:155 TXA
    case 0xC21F41: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:156 LDY #.SIZEOF(char_struct)
    case 0xC21F42: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Fu : 0x00005Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:156 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC21F42.
    case 0xC21F44: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:157 JSL MULT168
    case 0xC21F45: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:158 STA @VIRTUAL02
    case 0xC21F49: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:159 LDX @VIRTUAL02
    case 0xC21F4B: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:160 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::OTHER,X
    case 0xC21F4D: {
        Instruction step(cpu, 0xBD, 0x009A02u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:161 AND #$00FF
    case 0xC21F50: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:161 AND #$00FF
    // Overlapping static entry reached from 0xC21F50.
    case 0xC21F52: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:162 TAY
    case 0xC21F53: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:163 BEQ @UNKNOWN9
    case 0xC21F54: {
        Instruction step(cpu, 0xF0, 0x00004Cu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:164 SEP #PROC_FLAGS::ACCUM8
    case 0xC21F56: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:165 LDA #$0002
    case 0xC21F58: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x004802u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:166 PHA
    case 0xC21F5A: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:167 REP #PROC_FLAGS::ACCUM8
    case 0xC21F5B: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:168 TYA
    case 0xC21F5D: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:169 DEC
    case 0xC21F5E: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:170 STA @VIRTUAL04
    case 0xC21F5F: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:171 LDA @VIRTUAL02
    case 0xC21F61: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:172 CLC
    case 0xC21F63: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:173 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    case 0xC21F64: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000F1u : 0x0099F1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:173 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    // Overlapping static entry reached from 0xC21F64.
    case 0xC21F66: {
        Instruction step(cpu, 0x99, 0x006518u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:174 CLC
    case 0xC21F67: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:175 ADC @VIRTUAL04
    case 0xC21F68: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:175 ADC @VIRTUAL04
    // Overlapping static entry reached from 0xC21F66.
    case 0xC21F69: {
        Instruction step(cpu, 0x04, 0x0000AAu, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:176 TAX
    case 0xC21F6A: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:177 LDA __BSS_START__,X
    case 0xC21F6B: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:178 AND #$00FF
    case 0xC21F6E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:178 AND #$00FF
    // Overlapping static entry reached from 0xC21F6E.
    case 0xC21F70: {
        Instruction step(cpu, 0x00, 0x0000A0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/battle/calc_resistances.asm:179 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21F71: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000027u : 0x000027u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/battle/calc_resistances.asm:179 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    // Overlapping static entry reached from 0xC21F71.
    case 0xC21F73: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/battle/calc_resistances.asm:179 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21F74: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:180 CLC
    case 0xC21F78: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:181 ADC #item::params + item_parameters::special
    case 0xC21F79: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000022u : 0x000022u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:181 ADC #item::params + item_parameters::special
    // Overlapping static entry reached from 0xC21F79.
    case 0xC21F7B: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:182 TAX
    case 0xC21F7C: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:183 SEP #PROC_FLAGS::ACCUM8
    case 0xC21F7D: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:184 LDA f:ITEM_CONFIGURATION_TABLE,X
    case 0xC21F7F: {
        Instruction step(cpu, 0xBF, 0xD55000u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:185 REP #PROC_FLAGS::ACCUM8
    case 0xC21F83: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:186 SEC
    case 0xC21F85: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:187 AND #$00FF
    case 0xC21F86: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:187 AND #$00FF
    // Overlapping static entry reached from 0xC21F86.
    case 0xC21F88: {
        Instruction step(cpu, 0x00, 0x0000E9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:188 SBC #$0080
    case 0xC21F89: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x000080u : 0x000080u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:188 SBC #$0080
    // Overlapping static entry reached from 0xC21F89.
    case 0xC21F8B: {
        Instruction step(cpu, 0x00, 0x000049u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:189 EOR #$FF80
    case 0xC21F8C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x49, narrow ? 0x000080u : 0x00FF80u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.xor_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:189 EOR #$FF80
    // Overlapping static entry reached from 0xC21F8C.
    case 0xC21F8E: {
        Instruction step(cpu, 0xFF, 0x000C29u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:190 AND #$000C
    case 0xC21F8F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x00000Cu : 0x00000Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:190 AND #$000C
    // Overlapping static entry reached from 0xC21F8F.
    case 0xC21F91: {
        Instruction step(cpu, 0x00, 0x0000E2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:191 SEP #PROC_FLAGS::INDEX8
    case 0xC21F92: {
        Instruction step(cpu, 0xE2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:192 PLY
    case 0xC21F94: {
        Instruction step(cpu, 0x7A, 0x000000u, 1u, AddressMode::Implied);
        step.pull_y();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:193 JSL ASR16
    case 0xC21F95: {
        Instruction step(cpu, 0x22, 0xC0925Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:194 STA @VIRTUAL02
    case 0xC21F99: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:195 LDA @LOCAL00
    case 0xC21F9B: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:196 CLC
    case 0xC21F9D: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:197 ADC @VIRTUAL02
    case 0xC21F9E: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:198 STA @LOCAL00
    case 0xC21FA0: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:200 LDA @LOCAL00
    case 0xC21FA2: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:201 CLC
    case 0xC21FA4: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:202 SBC #$0003
    case 0xC21FA5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:202 SBC #$0003
    // Overlapping static entry reached from 0xC21FA5.
    case 0xC21FA7: {
        Instruction step(cpu, 0x00, 0x000050u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:807 BVC :+
    // Macro caller: src/battle/calc_resistances.asm:203 BRANCHLTEQS @UNKNOWN12
    case 0xC21FA8: {
        Instruction step(cpu, 0x50, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_clear();
        return step.finish();
    }
    // include/macros.asm:808 BPL dest
    // Macro caller: src/battle/calc_resistances.asm:203 BRANCHLTEQS @UNKNOWN12
    case 0xC21FAA: {
        Instruction step(cpu, 0x10, 0x00000Du, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:809 BRA :++
    // Macro caller: src/battle/calc_resistances.asm:203 BRANCHLTEQS @UNKNOWN12
    case 0xC21FAC: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:811 BMI dest
    // Macro caller: src/battle/calc_resistances.asm:203 BRANCHLTEQS @UNKNOWN12
    case 0xC21FAE: {
        Instruction step(cpu, 0x30, 0x000009u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:204 REP #PROC_FLAGS::INDEX8
    case 0xC21FB0: {
        Instruction step(cpu, 0xC2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:205 LDY #$0003
    case 0xC21FB2: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:205 LDY #$0003
    // Overlapping static entry reached from 0xC21FB2.
    case 0xC21FB4: {
        Instruction step(cpu, 0x00, 0x000084u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:206 STY @LOCAL01
    case 0xC21FB5: {
        Instruction step(cpu, 0x84, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:207 BRA @UNKNOWN13
    case 0xC21FB7: {
        Instruction step(cpu, 0x80, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:209 LDA @LOCAL00
    case 0xC21FB9: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:210 REP #PROC_FLAGS::INDEX8
    case 0xC21FBB: {
        Instruction step(cpu, 0xC2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:211 TAY
    case 0xC21FBD: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:212 STY @LOCAL01
    case 0xC21FBE: {
        Instruction step(cpu, 0x84, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:214 LDX @LOCAL02
    case 0xC21FC0: {
        Instruction step(cpu, 0xA6, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:215 TXA
    case 0xC21FC2: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:216 LDY #.SIZEOF(char_struct)
    case 0xC21FC3: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Fu : 0x00005Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:216 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC21FC3.
    case 0xC21FC5: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:217 JSL MULT168
    case 0xC21FC6: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:218 STA @LOCAL00
    case 0xC21FCA: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:219 TAX
    case 0xC21FCC: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:220 LDY @LOCAL01
    case 0xC21FCD: {
        Instruction step(cpu, 0xA4, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:221 TYA
    case 0xC21FCF: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:222 SEP #PROC_FLAGS::ACCUM8
    case 0xC21FD0: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:223 STA PARTY_CHARACTERS+char_struct::freeze_resist,X
    case 0xC21FD2: {
        Instruction step(cpu, 0x9D, 0x009A21u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:224 REP #PROC_FLAGS::ACCUM8
    case 0xC21FD5: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:225 LDA @LOCAL00
    case 0xC21FD7: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:226 TAX
    case 0xC21FD9: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:227 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::BODY,X
    case 0xC21FDA: {
        Instruction step(cpu, 0xBD, 0x009A00u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:228 AND #$00FF
    case 0xC21FDD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:228 AND #$00FF
    // Overlapping static entry reached from 0xC21FDD.
    case 0xC21FDF: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:229 TAY
    case 0xC21FE0: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:230 BEQ @UNKNOWN14
    case 0xC21FE1: {
        Instruction step(cpu, 0xF0, 0x000045u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:231 SEP #PROC_FLAGS::ACCUM8
    case 0xC21FE3: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:232 LDA #$0004
    case 0xC21FE5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000004u : 0x004804u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:233 PHA
    case 0xC21FE7: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:234 REP #PROC_FLAGS::ACCUM8
    case 0xC21FE8: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:235 TYA
    case 0xC21FEA: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:236 DEC
    case 0xC21FEB: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:237 STA @VIRTUAL02
    case 0xC21FEC: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:238 LDA @LOCAL00
    case 0xC21FEE: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:239 CLC
    case 0xC21FF0: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:240 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    case 0xC21FF1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000F1u : 0x0099F1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:240 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    // Overlapping static entry reached from 0xC21FF1.
    case 0xC21FF3: {
        Instruction step(cpu, 0x99, 0x006518u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:241 CLC
    case 0xC21FF4: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:242 ADC @VIRTUAL02
    case 0xC21FF5: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:242 ADC @VIRTUAL02
    // Overlapping static entry reached from 0xC21FF3.
    case 0xC21FF6: {
        Instruction step(cpu, 0x02, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:243 TAX
    case 0xC21FF7: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:244 LDA __BSS_START__,X
    case 0xC21FF8: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:245 AND #$00FF
    case 0xC21FFB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:245 AND #$00FF
    // Overlapping static entry reached from 0xC21FFB.
    case 0xC21FFD: {
        Instruction step(cpu, 0x00, 0x0000A0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/battle/calc_resistances.asm:246 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21FFE: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000027u : 0x000027u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/battle/calc_resistances.asm:246 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    // Overlapping static entry reached from 0xC21FFE.
    case 0xC22000: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/battle/calc_resistances.asm:246 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC22001: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/battle/calc_resistances.asm:246 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    // Overlapping static entry reached from 0xC2C691.
    case 0xC22003: {
        Instruction step(cpu, 0x8F, 0x6918C0u, 4u, AddressMode::Long);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:247 CLC
    case 0xC22005: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:248 ADC #item::params + item_parameters::special
    case 0xC22006: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000022u : 0x000022u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:248 ADC #item::params + item_parameters::special
    // Overlapping static entry reached from 0xC22003.
    case 0xC22007: {
        Instruction step(cpu, 0x22, 0xE2AA00u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:248 ADC #item::params + item_parameters::special
    // Overlapping static entry reached from 0xC22006.
    case 0xC22008: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:249 TAX
    case 0xC22009: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:250 SEP #PROC_FLAGS::ACCUM8
    case 0xC2200A: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:250 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC22007.
    case 0xC2200B: {
        Instruction step(cpu, 0x20, 0x0000BFu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:251 LDA f:ITEM_CONFIGURATION_TABLE,X
    case 0xC2200C: {
        Instruction step(cpu, 0xBF, 0xD55000u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:251 LDA f:ITEM_CONFIGURATION_TABLE,X
    // Overlapping static entry reached from 0xC2200B.
    case 0xC2200E: {
        Instruction step(cpu, 0x50, 0x0000D5u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_clear();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:252 REP #PROC_FLAGS::ACCUM8
    case 0xC22010: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:253 SEC
    case 0xC22012: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:254 AND #$00FF
    case 0xC22013: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:254 AND #$00FF
    // Overlapping static entry reached from 0xC22013.
    case 0xC22015: {
        Instruction step(cpu, 0x00, 0x0000E9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:255 SBC #$0080
    case 0xC22016: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x000080u : 0x000080u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:255 SBC #$0080
    // Overlapping static entry reached from 0xC22016.
    case 0xC22018: {
        Instruction step(cpu, 0x00, 0x000049u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:256 EOR #$FF80
    case 0xC22019: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x49, narrow ? 0x000080u : 0x00FF80u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.xor_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:256 EOR #$FF80
    // Overlapping static entry reached from 0xC22019.
    case 0xC2201B: {
        Instruction step(cpu, 0xFF, 0x003029u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:257 AND #$0030
    case 0xC2201C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000030u : 0x000030u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:257 AND #$0030
    // Overlapping static entry reached from 0xC2201C.
    case 0xC2201E: {
        Instruction step(cpu, 0x00, 0x0000E2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:258 SEP #PROC_FLAGS::INDEX8
    case 0xC2201F: {
        Instruction step(cpu, 0xE2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:259 PLY
    case 0xC22021: {
        Instruction step(cpu, 0x7A, 0x000000u, 1u, AddressMode::Implied);
        step.pull_y();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:260 JSL ASR16
    case 0xC22022: {
        Instruction step(cpu, 0x22, 0xC0925Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:261 BRA @UNKNOWN15
    case 0xC22026: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:263 LDA #$0000
    case 0xC22028: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:263 LDA #$0000
    // Overlapping static entry reached from 0xC22028.
    case 0xC2202A: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:265 STA @LOCAL00
    case 0xC2202B: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:266 REP #PROC_FLAGS::INDEX8
    case 0xC2202D: {
        Instruction step(cpu, 0xC2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:267 LDX @LOCAL02
    case 0xC2202F: {
        Instruction step(cpu, 0xA6, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:268 TXA
    case 0xC22031: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:269 LDY #.SIZEOF(char_struct)
    case 0xC22032: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Fu : 0x00005Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:269 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC22032.
    case 0xC22034: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:270 JSL MULT168
    case 0xC22035: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:271 STA @VIRTUAL02
    case 0xC22039: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:272 LDX @VIRTUAL02
    case 0xC2203B: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:273 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::OTHER,X
    case 0xC2203D: {
        Instruction step(cpu, 0xBD, 0x009A02u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:274 AND #$00FF
    case 0xC22040: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:274 AND #$00FF
    // Overlapping static entry reached from 0xC22040.
    case 0xC22042: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:275 TAY
    case 0xC22043: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:276 BEQ @UNKNOWN16
    case 0xC22044: {
        Instruction step(cpu, 0xF0, 0x00004Cu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:277 SEP #PROC_FLAGS::ACCUM8
    case 0xC22046: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:278 LDA #$0004
    case 0xC22048: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000004u : 0x004804u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:279 PHA
    case 0xC2204A: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:280 REP #PROC_FLAGS::ACCUM8
    case 0xC2204B: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:281 TYA
    case 0xC2204D: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:282 DEC
    case 0xC2204E: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:283 STA @VIRTUAL04
    case 0xC2204F: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:284 LDA @VIRTUAL02
    case 0xC22051: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:285 CLC
    case 0xC22053: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:286 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    case 0xC22054: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000F1u : 0x0099F1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:286 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    // Overlapping static entry reached from 0xC22054.
    case 0xC22056: {
        Instruction step(cpu, 0x99, 0x006518u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:287 CLC
    case 0xC22057: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:288 ADC @VIRTUAL04
    case 0xC22058: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:288 ADC @VIRTUAL04
    // Overlapping static entry reached from 0xC22056.
    case 0xC22059: {
        Instruction step(cpu, 0x04, 0x0000AAu, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:289 TAX
    case 0xC2205A: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:290 LDA __BSS_START__,X
    case 0xC2205B: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:291 AND #$00FF
    case 0xC2205E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:291 AND #$00FF
    // Overlapping static entry reached from 0xC2205E.
    case 0xC22060: {
        Instruction step(cpu, 0x00, 0x0000A0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/battle/calc_resistances.asm:292 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC22061: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000027u : 0x000027u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/battle/calc_resistances.asm:292 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    // Overlapping static entry reached from 0xC22061.
    case 0xC22063: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/battle/calc_resistances.asm:292 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC22064: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:293 CLC
    case 0xC22068: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:294 ADC #item::params + item_parameters::special
    case 0xC22069: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000022u : 0x000022u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:294 ADC #item::params + item_parameters::special
    // Overlapping static entry reached from 0xC22069.
    case 0xC2206B: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:295 TAX
    case 0xC2206C: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:296 SEP #PROC_FLAGS::ACCUM8
    case 0xC2206D: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:297 LDA f:ITEM_CONFIGURATION_TABLE,X
    case 0xC2206F: {
        Instruction step(cpu, 0xBF, 0xD55000u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:298 REP #PROC_FLAGS::ACCUM8
    case 0xC22073: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:299 SEC
    case 0xC22075: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:300 AND #$00FF
    case 0xC22076: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:300 AND #$00FF
    // Overlapping static entry reached from 0xC22076.
    case 0xC22078: {
        Instruction step(cpu, 0x00, 0x0000E9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:301 SBC #$0080
    case 0xC22079: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x000080u : 0x000080u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:301 SBC #$0080
    // Overlapping static entry reached from 0xC22079.
    case 0xC2207B: {
        Instruction step(cpu, 0x00, 0x000049u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:302 EOR #$FF80
    case 0xC2207C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x49, narrow ? 0x000080u : 0x00FF80u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.xor_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:302 EOR #$FF80
    // Overlapping static entry reached from 0xC2207C.
    case 0xC2207E: {
        Instruction step(cpu, 0xFF, 0x003029u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:303 AND #$0030
    case 0xC2207F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000030u : 0x000030u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:303 AND #$0030
    // Overlapping static entry reached from 0xC2207F.
    case 0xC22081: {
        Instruction step(cpu, 0x00, 0x0000E2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:304 SEP #PROC_FLAGS::INDEX8
    case 0xC22082: {
        Instruction step(cpu, 0xE2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:305 PLY
    case 0xC22084: {
        Instruction step(cpu, 0x7A, 0x000000u, 1u, AddressMode::Implied);
        step.pull_y();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:306 JSL ASR16
    case 0xC22085: {
        Instruction step(cpu, 0x22, 0xC0925Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:307 STA @VIRTUAL02
    case 0xC22089: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:308 LDA @LOCAL00
    case 0xC2208B: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:309 CLC
    case 0xC2208D: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:310 ADC @VIRTUAL02
    case 0xC2208E: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:311 STA @LOCAL00
    case 0xC22090: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:313 LDA @LOCAL00
    case 0xC22092: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:314 CLC
    case 0xC22094: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:315 SBC #$0003
    case 0xC22095: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:315 SBC #$0003
    // Overlapping static entry reached from 0xC22095.
    case 0xC22097: {
        Instruction step(cpu, 0x00, 0x000050u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:807 BVC :+
    // Macro caller: src/battle/calc_resistances.asm:316 BRANCHLTEQS @UNKNOWN19
    case 0xC22098: {
        Instruction step(cpu, 0x50, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_clear();
        return step.finish();
    }
    // include/macros.asm:808 BPL dest
    // Macro caller: src/battle/calc_resistances.asm:316 BRANCHLTEQS @UNKNOWN19
    case 0xC2209A: {
        Instruction step(cpu, 0x10, 0x00000Du, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:809 BRA :++
    // Macro caller: src/battle/calc_resistances.asm:316 BRANCHLTEQS @UNKNOWN19
    case 0xC2209C: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:811 BMI dest
    // Macro caller: src/battle/calc_resistances.asm:316 BRANCHLTEQS @UNKNOWN19
    case 0xC2209E: {
        Instruction step(cpu, 0x30, 0x000009u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:317 REP #PROC_FLAGS::INDEX8
    case 0xC220A0: {
        Instruction step(cpu, 0xC2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:318 LDY #$0003
    case 0xC220A2: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:318 LDY #$0003
    // Overlapping static entry reached from 0xC220A2.
    case 0xC220A4: {
        Instruction step(cpu, 0x00, 0x000084u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:319 STY @LOCAL01
    case 0xC220A5: {
        Instruction step(cpu, 0x84, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:320 BRA @UNKNOWN20
    case 0xC220A7: {
        Instruction step(cpu, 0x80, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:322 LDA @LOCAL00
    case 0xC220A9: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:323 REP #PROC_FLAGS::INDEX8
    case 0xC220AB: {
        Instruction step(cpu, 0xC2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:324 TAY
    case 0xC220AD: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:325 STY @LOCAL01
    case 0xC220AE: {
        Instruction step(cpu, 0x84, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:327 LDX @LOCAL02
    case 0xC220B0: {
        Instruction step(cpu, 0xA6, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:328 TXA
    case 0xC220B2: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:329 LDY #.SIZEOF(char_struct)
    case 0xC220B3: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Fu : 0x00005Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:329 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC220B3.
    case 0xC220B5: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:330 JSL MULT168
    case 0xC220B6: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:331 STA @LOCAL00
    case 0xC220BA: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:332 TAX
    case 0xC220BC: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:333 LDY @LOCAL01
    case 0xC220BD: {
        Instruction step(cpu, 0xA4, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:334 TYA
    case 0xC220BF: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:335 SEP #PROC_FLAGS::ACCUM8
    case 0xC220C0: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:336 STA PARTY_CHARACTERS+char_struct::flash_resist,X
    case 0xC220C2: {
        Instruction step(cpu, 0x9D, 0x009A22u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:337 REP #PROC_FLAGS::ACCUM8
    case 0xC220C5: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:338 LDA @LOCAL00
    case 0xC220C7: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:339 TAX
    case 0xC220C9: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:340 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::BODY,X
    case 0xC220CA: {
        Instruction step(cpu, 0xBD, 0x009A00u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:341 AND #$00FF
    case 0xC220CD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:341 AND #$00FF
    // Overlapping static entry reached from 0xC220CD.
    case 0xC220CF: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:342 TAY
    case 0xC220D0: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:343 BEQ @UNKNOWN21
    case 0xC220D1: {
        Instruction step(cpu, 0xF0, 0x000045u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:344 SEP #PROC_FLAGS::ACCUM8
    case 0xC220D3: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:345 LDA #$0006
    case 0xC220D5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000006u : 0x004806u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:346 PHA
    case 0xC220D7: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:347 REP #PROC_FLAGS::ACCUM8
    case 0xC220D8: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:348 TYA
    case 0xC220DA: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:349 DEC
    case 0xC220DB: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:350 STA @VIRTUAL02
    case 0xC220DC: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:351 LDA @LOCAL00
    case 0xC220DE: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:352 CLC
    case 0xC220E0: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:353 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    case 0xC220E1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000F1u : 0x0099F1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:353 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    // Overlapping static entry reached from 0xC2D23F.
    case 0xC220E2: {
        Instruction step(cpu, 0xF1, 0x000099u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:353 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    // Overlapping static entry reached from 0xC220E1.
    case 0xC220E3: {
        Instruction step(cpu, 0x99, 0x006518u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:354 CLC
    case 0xC220E4: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:355 ADC @VIRTUAL02
    case 0xC220E5: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:355 ADC @VIRTUAL02
    // Overlapping static entry reached from 0xC220E3.
    case 0xC220E6: {
        Instruction step(cpu, 0x02, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:356 TAX
    case 0xC220E7: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:357 LDA __BSS_START__,X
    case 0xC220E8: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:358 AND #$00FF
    case 0xC220EB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:358 AND #$00FF
    // Overlapping static entry reached from 0xC220EB.
    case 0xC220ED: {
        Instruction step(cpu, 0x00, 0x0000A0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/battle/calc_resistances.asm:359 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC220EE: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000027u : 0x000027u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/battle/calc_resistances.asm:359 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    // Overlapping static entry reached from 0xC220EE.
    case 0xC220F0: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/battle/calc_resistances.asm:359 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC220F1: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:360 CLC
    case 0xC220F5: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:361 ADC #item::params + item_parameters::special
    case 0xC220F6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000022u : 0x000022u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:361 ADC #item::params + item_parameters::special
    // Overlapping static entry reached from 0xC220F6.
    case 0xC220F8: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:362 TAX
    case 0xC220F9: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:363 SEP #PROC_FLAGS::ACCUM8
    case 0xC220FA: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:364 LDA f:ITEM_CONFIGURATION_TABLE,X
    case 0xC220FC: {
        Instruction step(cpu, 0xBF, 0xD55000u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:365 REP #PROC_FLAGS::ACCUM8
    case 0xC22100: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:366 SEC
    case 0xC22102: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:367 AND #$00FF
    case 0xC22103: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:367 AND #$00FF
    // Overlapping static entry reached from 0xC22103.
    case 0xC22105: {
        Instruction step(cpu, 0x00, 0x0000E9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:368 SBC #$0080
    case 0xC22106: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x000080u : 0x000080u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:368 SBC #$0080
    // Overlapping static entry reached from 0xC22106.
    case 0xC22108: {
        Instruction step(cpu, 0x00, 0x000049u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:369 EOR #$FF80
    case 0xC22109: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x49, narrow ? 0x000080u : 0x00FF80u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.xor_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:369 EOR #$FF80
    // Overlapping static entry reached from 0xC22109.
    case 0xC2210B: {
        Instruction step(cpu, 0xFF, 0x00C029u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:370 AND #$00C0
    case 0xC2210C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000C0u : 0x0000C0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:370 AND #$00C0
    // Overlapping static entry reached from 0xC2210C.
    case 0xC2210E: {
        Instruction step(cpu, 0x00, 0x0000E2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:371 SEP #PROC_FLAGS::INDEX8
    case 0xC2210F: {
        Instruction step(cpu, 0xE2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:372 PLY
    case 0xC22111: {
        Instruction step(cpu, 0x7A, 0x000000u, 1u, AddressMode::Implied);
        step.pull_y();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:373 JSL ASR16
    case 0xC22112: {
        Instruction step(cpu, 0x22, 0xC0925Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:374 BRA @UNKNOWN22
    case 0xC22116: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:376 LDA #$0000
    case 0xC22118: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:376 LDA #$0000
    // Overlapping static entry reached from 0xC22118.
    case 0xC2211A: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:378 STA @LOCAL00
    case 0xC2211B: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:379 REP #PROC_FLAGS::INDEX8
    case 0xC2211D: {
        Instruction step(cpu, 0xC2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:380 LDX @LOCAL02
    case 0xC2211F: {
        Instruction step(cpu, 0xA6, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:381 TXA
    case 0xC22121: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:382 LDY #.SIZEOF(char_struct)
    case 0xC22122: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Fu : 0x00005Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:382 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC22122.
    case 0xC22124: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:383 JSL MULT168
    case 0xC22125: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:384 STA @VIRTUAL02
    case 0xC22129: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:385 LDX @VIRTUAL02
    case 0xC2212B: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:386 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::OTHER,X
    case 0xC2212D: {
        Instruction step(cpu, 0xBD, 0x009A02u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:387 AND #$00FF
    case 0xC22130: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:387 AND #$00FF
    // Overlapping static entry reached from 0xC22130.
    case 0xC22132: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:388 TAY
    case 0xC22133: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:389 BEQ @UNKNOWN23
    case 0xC22134: {
        Instruction step(cpu, 0xF0, 0x00004Cu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:390 SEP #PROC_FLAGS::ACCUM8
    case 0xC22136: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:391 LDA #$0006
    case 0xC22138: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000006u : 0x004806u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:392 PHA
    case 0xC2213A: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:393 REP #PROC_FLAGS::ACCUM8
    case 0xC2213B: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:394 TYA
    case 0xC2213D: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:395 DEC
    case 0xC2213E: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:396 STA @VIRTUAL04
    case 0xC2213F: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:397 LDA @VIRTUAL02
    case 0xC22141: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:398 CLC
    case 0xC22143: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:399 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    case 0xC22144: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000F1u : 0x0099F1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:399 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    // Overlapping static entry reached from 0xC22144.
    case 0xC22146: {
        Instruction step(cpu, 0x99, 0x006518u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:400 CLC
    case 0xC22147: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:401 ADC @VIRTUAL04
    case 0xC22148: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:401 ADC @VIRTUAL04
    // Overlapping static entry reached from 0xC22146.
    case 0xC22149: {
        Instruction step(cpu, 0x04, 0x0000AAu, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:402 TAX
    case 0xC2214A: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:403 LDA __BSS_START__,X
    case 0xC2214B: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:404 AND #$00FF
    case 0xC2214E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:404 AND #$00FF
    // Overlapping static entry reached from 0xC2214E.
    case 0xC22150: {
        Instruction step(cpu, 0x00, 0x0000A0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/battle/calc_resistances.asm:405 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC22151: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000027u : 0x000027u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/battle/calc_resistances.asm:405 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    // Overlapping static entry reached from 0xC22151.
    case 0xC22153: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/battle/calc_resistances.asm:405 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC22154: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:406 CLC
    case 0xC22158: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:407 ADC #item::params + item_parameters::special
    case 0xC22159: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000022u : 0x000022u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:407 ADC #item::params + item_parameters::special
    // Overlapping static entry reached from 0xC22159.
    case 0xC2215B: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:408 TAX
    case 0xC2215C: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:409 SEP #PROC_FLAGS::ACCUM8
    case 0xC2215D: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:410 LDA f:ITEM_CONFIGURATION_TABLE,X
    case 0xC2215F: {
        Instruction step(cpu, 0xBF, 0xD55000u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:411 REP #PROC_FLAGS::ACCUM8
    case 0xC22163: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:412 SEC
    case 0xC22165: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:413 AND #$00FF
    case 0xC22166: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:413 AND #$00FF
    // Overlapping static entry reached from 0xC22166.
    case 0xC22168: {
        Instruction step(cpu, 0x00, 0x0000E9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:414 SBC #$0080
    case 0xC22169: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x000080u : 0x000080u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:414 SBC #$0080
    // Overlapping static entry reached from 0xC22169.
    case 0xC2216B: {
        Instruction step(cpu, 0x00, 0x000049u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:415 EOR #$FF80
    case 0xC2216C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x49, narrow ? 0x000080u : 0x00FF80u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.xor_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:415 EOR #$FF80
    // Overlapping static entry reached from 0xC2216C.
    case 0xC2216E: {
        Instruction step(cpu, 0xFF, 0x00C029u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:416 AND #$00C0
    case 0xC2216F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000C0u : 0x0000C0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:416 AND #$00C0
    // Overlapping static entry reached from 0xC2216F.
    case 0xC22171: {
        Instruction step(cpu, 0x00, 0x0000E2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:417 SEP #PROC_FLAGS::INDEX8
    case 0xC22172: {
        Instruction step(cpu, 0xE2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:418 PLY
    case 0xC22174: {
        Instruction step(cpu, 0x7A, 0x000000u, 1u, AddressMode::Implied);
        step.pull_y();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:419 JSL ASR16
    case 0xC22175: {
        Instruction step(cpu, 0x22, 0xC0925Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:420 STA @VIRTUAL02
    case 0xC22179: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:421 LDA @LOCAL00
    case 0xC2217B: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:422 CLC
    case 0xC2217D: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:423 ADC @VIRTUAL02
    case 0xC2217E: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:424 STA @LOCAL00
    case 0xC22180: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:426 LDA @LOCAL00
    case 0xC22182: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:427 CLC
    case 0xC22184: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:428 SBC #$0003
    case 0xC22185: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:428 SBC #$0003
    // Overlapping static entry reached from 0xC22185.
    case 0xC22187: {
        Instruction step(cpu, 0x00, 0x000050u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:807 BVC :+
    // Macro caller: src/battle/calc_resistances.asm:429 BRANCHLTEQS @UNKNOWN26
    case 0xC22188: {
        Instruction step(cpu, 0x50, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_clear();
        return step.finish();
    }
    // include/macros.asm:808 BPL dest
    // Macro caller: src/battle/calc_resistances.asm:429 BRANCHLTEQS @UNKNOWN26
    case 0xC2218A: {
        Instruction step(cpu, 0x10, 0x00000Du, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:809 BRA :++
    // Macro caller: src/battle/calc_resistances.asm:429 BRANCHLTEQS @UNKNOWN26
    case 0xC2218C: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:811 BMI dest
    // Macro caller: src/battle/calc_resistances.asm:429 BRANCHLTEQS @UNKNOWN26
    case 0xC2218E: {
        Instruction step(cpu, 0x30, 0x000009u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:430 REP #PROC_FLAGS::INDEX8
    case 0xC22190: {
        Instruction step(cpu, 0xC2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:431 LDY #$0003
    case 0xC22192: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:431 LDY #$0003
    // Overlapping static entry reached from 0xC22192.
    case 0xC22194: {
        Instruction step(cpu, 0x00, 0x000084u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:432 STY @LOCAL01
    case 0xC22195: {
        Instruction step(cpu, 0x84, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:433 BRA @UNKNOWN27
    case 0xC22197: {
        Instruction step(cpu, 0x80, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:435 LDA @LOCAL00
    case 0xC22199: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:436 REP #PROC_FLAGS::INDEX8
    case 0xC2219B: {
        Instruction step(cpu, 0xC2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:437 TAY
    case 0xC2219D: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:438 STY @LOCAL01
    case 0xC2219E: {
        Instruction step(cpu, 0x84, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:440 LDX @LOCAL02
    case 0xC221A0: {
        Instruction step(cpu, 0xA6, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:441 TXA
    case 0xC221A2: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:442 LDY #.SIZEOF(char_struct)
    case 0xC221A3: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Fu : 0x00005Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:442 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC221A3.
    case 0xC221A5: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:443 JSL MULT168
    case 0xC221A6: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:443 JSL MULT168
    // Overlapping static entry reached from 0xC232B4.
    case 0xC221A9: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000085u : 0x000E85u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:444 STA @LOCAL00
    case 0xC221AA: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:444 STA @LOCAL00
    // Overlapping static entry reached from 0xC221A9.
    case 0xC221AB: {
        Instruction step(cpu, 0x0E, 0x00A4AAu, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:445 TAX
    case 0xC221AC: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:446 LDY @LOCAL01
    case 0xC221AD: {
        Instruction step(cpu, 0xA4, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:446 LDY @LOCAL01
    // Overlapping static entry reached from 0xC221AB.
    case 0xC221AE: {
        Instruction step(cpu, 0x10, 0x000098u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:447 TYA
    case 0xC221AF: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:448 SEP #PROC_FLAGS::ACCUM8
    case 0xC221B0: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:449 STA PARTY_CHARACTERS+char_struct::paralysis_resist,X
    case 0xC221B2: {
        Instruction step(cpu, 0x9D, 0x009A23u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:450 REP #PROC_FLAGS::ACCUM8
    case 0xC221B5: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:451 LDA @LOCAL00
    case 0xC221B7: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:452 TAX
    case 0xC221B9: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:453 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::ARMS,X
    case 0xC221BA: {
        Instruction step(cpu, 0xBD, 0x009A01u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:454 AND #$00FF
    case 0xC221BD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:454 AND #$00FF
    // Overlapping static entry reached from 0xC221BD.
    case 0xC221BF: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:455 TAY
    case 0xC221C0: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:456 BEQ @UNKNOWN28
    case 0xC221C1: {
        Instruction step(cpu, 0xF0, 0x000036u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:457 TYA
    case 0xC221C3: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:458 DEC
    case 0xC221C4: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:459 STA @VIRTUAL02
    case 0xC221C5: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:460 LDA @LOCAL00
    case 0xC221C7: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:461 CLC
    case 0xC221C9: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:462 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    case 0xC221CA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000F1u : 0x0099F1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:462 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    // Overlapping static entry reached from 0xC221CA.
    case 0xC221CC: {
        Instruction step(cpu, 0x99, 0x006518u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:463 CLC
    case 0xC221CD: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:464 ADC @VIRTUAL02
    case 0xC221CE: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:464 ADC @VIRTUAL02
    // Overlapping static entry reached from 0xC221CC.
    case 0xC221CF: {
        Instruction step(cpu, 0x02, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:465 TAX
    case 0xC221D0: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:466 LDA __BSS_START__,X
    case 0xC221D1: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:467 AND #$00FF
    case 0xC221D4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:467 AND #$00FF
    // Overlapping static entry reached from 0xC221D4.
    case 0xC221D6: {
        Instruction step(cpu, 0x00, 0x0000A0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/battle/calc_resistances.asm:468 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC221D7: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000027u : 0x000027u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/battle/calc_resistances.asm:468 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    // Overlapping static entry reached from 0xC221D7.
    case 0xC221D9: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/battle/calc_resistances.asm:468 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC221DA: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:469 CLC
    case 0xC221DE: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:470 ADC #item::params + item_parameters::special
    case 0xC221DF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000022u : 0x000022u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:470 ADC #item::params + item_parameters::special
    // Overlapping static entry reached from 0xC221DF.
    case 0xC221E1: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:471 TAX
    case 0xC221E2: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:472 SEP #PROC_FLAGS::ACCUM8
    case 0xC221E3: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:473 LDA f:ITEM_CONFIGURATION_TABLE,X
    case 0xC221E5: {
        Instruction step(cpu, 0xBF, 0xD55000u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:474 REP #PROC_FLAGS::ACCUM8
    case 0xC221E9: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:475 SEC
    case 0xC221EB: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:476 AND #$00FF
    case 0xC221EC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:476 AND #$00FF
    // Overlapping static entry reached from 0xC221EC.
    case 0xC221EE: {
        Instruction step(cpu, 0x00, 0x0000E9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:477 SBC #$0080
    case 0xC221EF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x000080u : 0x000080u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:477 SBC #$0080
    // Overlapping static entry reached from 0xC221EF.
    case 0xC221F1: {
        Instruction step(cpu, 0x00, 0x000049u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:478 EOR #$FF80
    case 0xC221F2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x49, narrow ? 0x000080u : 0x00FF80u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.xor_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:478 EOR #$FF80
    // Overlapping static entry reached from 0xC221F2.
    case 0xC221F4: {
        Instruction step(cpu, 0xFF, 0x801085u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:479 STA @LOCAL01
    case 0xC221F5: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:480 BRA @UNKNOWN29
    case 0xC221F7: {
        Instruction step(cpu, 0x80, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:480 BRA @UNKNOWN29
    // Overlapping static entry reached from 0xC221F4.
    case 0xC221F8: {
        Instruction step(cpu, 0x05, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:482 LDA #$0000
    case 0xC221F9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:482 LDA #$0000
    // Overlapping static entry reached from 0xC221F8.
    case 0xC221FA: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:482 LDA #$0000
    // Overlapping static entry reached from 0xC221F9.
    case 0xC221FB: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:483 STA @LOCAL01
    case 0xC221FC: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:485 LDX @LOCAL02
    case 0xC221FE: {
        Instruction step(cpu, 0xA6, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:486 TXA
    case 0xC22200: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:487 LDY #.SIZEOF(char_struct)
    case 0xC22201: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Fu : 0x00005Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:487 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC22201.
    case 0xC22203: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:488 JSL MULT168
    case 0xC22204: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:489 TAX
    case 0xC22208: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:490 LDA @LOCAL01
    case 0xC22209: {
        Instruction step(cpu, 0xA5, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:491 SEP #PROC_FLAGS::ACCUM8
    case 0xC2220B: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:492 STA PARTY_CHARACTERS+char_struct::hypnosis_brainshock_resist,X
    case 0xC2220D: {
        Instruction step(cpu, 0x9D, 0x009A24u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:493 REP #PROC_FLAGS::ACCUM8
    case 0xC22210: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/calc_resistances.asm:494 END_C_FUNCTION
    case 0xC22212: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/calc_resistances.asm:494 END_C_FUNCTION
    case 0xC22213: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
