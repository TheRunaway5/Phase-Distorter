// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/battle/calc_resistances.asm
bool resume_battle_calc_resistances(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/calc_resistances.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC21C99: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/calc_resistances.asm:9 END_STACK_VARS
    case 0xC21C9B: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/calc_resistances.asm:9 END_STACK_VARS
    case 0xC21C9C: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/calc_resistances.asm:9 END_STACK_VARS
    case 0xC21C9D: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/calc_resistances.asm:9 END_STACK_VARS
    case 0xC21C9E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000ECu : 0x00FFECu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/calc_resistances.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC21C9E.
    case 0xC21CA0: {
        Instruction step(cpu, 0xFF, 0xAA685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/calc_resistances.asm:9 END_STACK_VARS
    case 0xC21CA1: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/calc_resistances.asm:9 END_STACK_VARS
    case 0xC21CA2: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:10 TAX
    case 0xC21CA3: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:11 DEX
    case 0xC21CA4: {
        Instruction step(cpu, 0xCA, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_x();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:12 STX @LOCAL02
    case 0xC21CA5: {
        Instruction step(cpu, 0x86, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:13 TXA
    case 0xC21CA7: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:14 LDY #.SIZEOF(char_struct)
    case 0xC21CA8: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Eu : 0x00005Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:14 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC21CA8.
    case 0xC21CAA: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:15 JSL MULT168
    case 0xC21CAB: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:16 STA @LOCAL01
    case 0xC21CAF: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:17 TAX
    case 0xC21CB1: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:18 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::BODY,X
    case 0xC21CB2: {
        Instruction step(cpu, 0xBD, 0x009CB0u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:19 AND #$00FF
    case 0xC21CB5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:19 AND #$00FF
    // Overlapping static entry reached from 0xC21CB5.
    case 0xC21CB7: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:20 TAY
    case 0xC21CB8: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:21 BEQ @UNKNOWN0
    case 0xC21CB9: {
        Instruction step(cpu, 0xF0, 0x000038u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:22 TYA
    case 0xC21CBB: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:23 DEC
    case 0xC21CBC: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:24 STA @VIRTUAL02
    case 0xC21CBD: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:25 LDA @LOCAL01
    case 0xC21CBF: {
        Instruction step(cpu, 0xA5, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:26 CLC
    case 0xC21CC1: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:27 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    case 0xC21CC2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000A1u : 0x009CA1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:27 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    // Overlapping static entry reached from 0xC21CC2.
    case 0xC21CC4: {
        Instruction step(cpu, 0x9C, 0x006518u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:28 CLC
    case 0xC21CC5: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:29 ADC @VIRTUAL02
    case 0xC21CC6: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:29 ADC @VIRTUAL02
    // Overlapping static entry reached from 0xC21CC4.
    case 0xC21CC7: {
        Instruction step(cpu, 0x02, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:30 TAX
    case 0xC21CC8: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:31 LDA __BSS_START__,X
    case 0xC21CC9: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:32 AND #$00FF
    case 0xC21CCC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:32 AND #$00FF
    // Overlapping static entry reached from 0xC21CCC.
    case 0xC21CCE: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:623 STA scratch
    // Macro caller: src/battle/calc_resistances.asm:33 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21CCF: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:624 ASL
    // Macro caller: src/battle/calc_resistances.asm:33 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21CD1: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:625 ADC scratch
    // Macro caller: src/battle/calc_resistances.asm:33 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21CD2: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:626 ASL
    // Macro caller: src/battle/calc_resistances.asm:33 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21CD4: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:627 ASL
    // Macro caller: src/battle/calc_resistances.asm:33 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21CD5: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:628 ASL
    // Macro caller: src/battle/calc_resistances.asm:33 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21CD6: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:34 CLC
    case 0xC21CD7: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:35 ADC #item::params + item_parameters::special
    case 0xC21CD8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000013u : 0x000013u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:35 ADC #item::params + item_parameters::special
    // Overlapping static entry reached from 0xC21CD8.
    case 0xC21CDA: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:36 TAX
    case 0xC21CDB: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:37 SEP #PROC_FLAGS::ACCUM8
    case 0xC21CDC: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:38 LDA f:ITEM_CONFIGURATION_TABLE,X
    case 0xC21CDE: {
        Instruction step(cpu, 0xBF, 0xD57000u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:39 REP #PROC_FLAGS::ACCUM8
    case 0xC21CE2: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:40 SEC
    case 0xC21CE4: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:41 AND #$00FF
    case 0xC21CE5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:41 AND #$00FF
    // Overlapping static entry reached from 0xC21CE5.
    case 0xC21CE7: {
        Instruction step(cpu, 0x00, 0x0000E9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:42 SBC #$0080
    case 0xC21CE8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x000080u : 0x000080u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:42 SBC #$0080
    // Overlapping static entry reached from 0xC21CE8.
    case 0xC21CEA: {
        Instruction step(cpu, 0x00, 0x000049u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:43 EOR #$FF80
    case 0xC21CEB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x49, narrow ? 0x000080u : 0x00FF80u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.xor_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:43 EOR #$FF80
    // Overlapping static entry reached from 0xC21CEB.
    case 0xC21CED: {
        Instruction step(cpu, 0xFF, 0x000329u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:44 AND #$0003
    case 0xC21CEE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:44 AND #$0003
    // Overlapping static entry reached from 0xC21CEE.
    case 0xC21CF0: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:45 BRA @UNKNOWN1
    case 0xC21CF1: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:47 LDA #$0000
    case 0xC21CF3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:47 LDA #$0000
    // Overlapping static entry reached from 0xC21CF3.
    case 0xC21CF5: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:49 STA @LOCAL00
    case 0xC21CF6: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:50 LDX @LOCAL02
    case 0xC21CF8: {
        Instruction step(cpu, 0xA6, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:51 TXA
    case 0xC21CFA: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:52 LDY #.SIZEOF(char_struct)
    case 0xC21CFB: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Eu : 0x00005Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:52 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC21CFB.
    case 0xC21CFD: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:53 JSL MULT168
    case 0xC21CFE: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:54 STA @VIRTUAL02
    case 0xC21D02: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:55 LDX @VIRTUAL02
    case 0xC21D04: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:56 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::OTHER,X
    case 0xC21D06: {
        Instruction step(cpu, 0xBD, 0x009CB2u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:57 AND #$00FF
    case 0xC21D09: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:57 AND #$00FF
    // Overlapping static entry reached from 0xC21D09.
    case 0xC21D0B: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:58 TAY
    case 0xC21D0C: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:59 BEQ @UNKNOWN2
    case 0xC21D0D: {
        Instruction step(cpu, 0xF0, 0x00003Fu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:60 TYA
    case 0xC21D0F: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:61 DEC
    case 0xC21D10: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:62 STA @VIRTUAL04
    case 0xC21D11: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:63 LDA @VIRTUAL02
    case 0xC21D13: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:64 CLC
    case 0xC21D15: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:65 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    case 0xC21D16: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000A1u : 0x009CA1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:65 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    // Overlapping static entry reached from 0xC21D16.
    case 0xC21D18: {
        Instruction step(cpu, 0x9C, 0x006518u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:66 CLC
    case 0xC21D19: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:67 ADC @VIRTUAL04
    case 0xC21D1A: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:67 ADC @VIRTUAL04
    // Overlapping static entry reached from 0xC21D18.
    case 0xC21D1B: {
        Instruction step(cpu, 0x04, 0x0000AAu, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:68 TAX
    case 0xC21D1C: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:69 LDA __BSS_START__,X
    case 0xC21D1D: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:70 AND #$00FF
    case 0xC21D20: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:70 AND #$00FF
    // Overlapping static entry reached from 0xC21D20.
    case 0xC21D22: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:623 STA scratch
    // Macro caller: src/battle/calc_resistances.asm:71 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21D23: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:624 ASL
    // Macro caller: src/battle/calc_resistances.asm:71 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21D25: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:625 ADC scratch
    // Macro caller: src/battle/calc_resistances.asm:71 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21D26: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:626 ASL
    // Macro caller: src/battle/calc_resistances.asm:71 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21D28: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:627 ASL
    // Macro caller: src/battle/calc_resistances.asm:71 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21D29: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:628 ASL
    // Macro caller: src/battle/calc_resistances.asm:71 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21D2A: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:72 CLC
    case 0xC21D2B: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:73 ADC #item::params + item_parameters::special
    case 0xC21D2C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000013u : 0x000013u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:73 ADC #item::params + item_parameters::special
    // Overlapping static entry reached from 0xC21D2C.
    case 0xC21D2E: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:74 TAX
    case 0xC21D2F: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:75 SEP #PROC_FLAGS::ACCUM8
    case 0xC21D30: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:76 LDA f:ITEM_CONFIGURATION_TABLE,X
    case 0xC21D32: {
        Instruction step(cpu, 0xBF, 0xD57000u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:77 REP #PROC_FLAGS::ACCUM8
    case 0xC21D36: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:78 SEC
    case 0xC21D38: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:79 AND #$00FF
    case 0xC21D39: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:79 AND #$00FF
    // Overlapping static entry reached from 0xC21D39.
    case 0xC21D3B: {
        Instruction step(cpu, 0x00, 0x0000E9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:80 SBC #$0080
    case 0xC21D3C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x000080u : 0x000080u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:80 SBC #$0080
    // Overlapping static entry reached from 0xC21D3C.
    case 0xC21D3E: {
        Instruction step(cpu, 0x00, 0x000049u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:81 EOR #$FF80
    case 0xC21D3F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x49, narrow ? 0x000080u : 0x00FF80u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.xor_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:81 EOR #$FF80
    // Overlapping static entry reached from 0xC21D3F.
    case 0xC21D41: {
        Instruction step(cpu, 0xFF, 0x000329u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:82 AND #$0003
    case 0xC21D42: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:82 AND #$0003
    // Overlapping static entry reached from 0xC21D42.
    case 0xC21D44: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:83 STA @VIRTUAL02
    case 0xC21D45: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:84 LDA @LOCAL00
    case 0xC21D47: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:85 CLC
    case 0xC21D49: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:86 ADC @VIRTUAL02
    case 0xC21D4A: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:87 STA @LOCAL00
    case 0xC21D4C: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:89 LDA @LOCAL00
    case 0xC21D4E: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:90 CLC
    case 0xC21D50: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:91 SBC #$0003
    case 0xC21D51: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:91 SBC #$0003
    // Overlapping static entry reached from 0xC21D51.
    case 0xC21D53: {
        Instruction step(cpu, 0x00, 0x000050u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:807 BVC :+
    // Macro caller: src/battle/calc_resistances.asm:92 BRANCHLTEQS @UNKNOWN5
    case 0xC21D54: {
        Instruction step(cpu, 0x50, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_clear();
        return step.finish();
    }
    // include/macros.asm:808 BPL dest
    // Macro caller: src/battle/calc_resistances.asm:92 BRANCHLTEQS @UNKNOWN5
    case 0xC21D56: {
        Instruction step(cpu, 0x10, 0x00000Bu, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:809 BRA :++
    // Macro caller: src/battle/calc_resistances.asm:92 BRANCHLTEQS @UNKNOWN5
    case 0xC21D58: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:811 BMI dest
    // Macro caller: src/battle/calc_resistances.asm:92 BRANCHLTEQS @UNKNOWN5
    case 0xC21D5A: {
        Instruction step(cpu, 0x30, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:93 LDY #$0003
    case 0xC21D5C: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:93 LDY #$0003
    // Overlapping static entry reached from 0xC21D5C.
    case 0xC21D5E: {
        Instruction step(cpu, 0x00, 0x000084u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:94 STY @LOCAL01
    case 0xC21D5F: {
        Instruction step(cpu, 0x84, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:95 BRA @UNKNOWN6
    case 0xC21D61: {
        Instruction step(cpu, 0x80, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:97 LDA @LOCAL00
    case 0xC21D63: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:98 TAY
    case 0xC21D65: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:99 STY @LOCAL01
    case 0xC21D66: {
        Instruction step(cpu, 0x84, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:101 LDX @LOCAL02
    case 0xC21D68: {
        Instruction step(cpu, 0xA6, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:102 TXA
    case 0xC21D6A: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:103 LDY #.SIZEOF(char_struct)
    case 0xC21D6B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Eu : 0x00005Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:103 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC21D6B.
    case 0xC21D6D: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:104 JSL MULT168
    case 0xC21D6E: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:105 STA @LOCAL00
    case 0xC21D72: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:106 TAX
    case 0xC21D74: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:107 LDY @LOCAL01
    case 0xC21D75: {
        Instruction step(cpu, 0xA4, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:108 TYA
    case 0xC21D77: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:109 SEP #PROC_FLAGS::ACCUM8
    case 0xC21D78: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:110 STA PARTY_CHARACTERS+char_struct::fire_resist,X
    case 0xC21D7A: {
        Instruction step(cpu, 0x9D, 0x009CD0u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:111 REP #PROC_FLAGS::ACCUM8
    case 0xC21D7D: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:112 LDA @LOCAL00
    case 0xC21D7F: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:113 TAX
    case 0xC21D81: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:114 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::BODY,X
    case 0xC21D82: {
        Instruction step(cpu, 0xBD, 0x009CB0u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:115 AND #$00FF
    case 0xC21D85: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:115 AND #$00FF
    // Overlapping static entry reached from 0xC21D85.
    case 0xC21D87: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:116 TAY
    case 0xC21D88: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:117 BEQ @UNKNOWN7
    case 0xC21D89: {
        Instruction step(cpu, 0xF0, 0x000046u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:118 SEP #PROC_FLAGS::ACCUM8
    case 0xC21D8B: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:119 LDA #$0002
    case 0xC21D8D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x004802u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:120 PHA
    case 0xC21D8F: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:121 REP #PROC_FLAGS::ACCUM8
    case 0xC21D90: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:122 TYA
    case 0xC21D92: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:123 DEC
    case 0xC21D93: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:124 STA @VIRTUAL02
    case 0xC21D94: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:125 LDA @LOCAL00
    case 0xC21D96: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:126 CLC
    case 0xC21D98: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:127 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    case 0xC21D99: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000A1u : 0x009CA1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:127 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    // Overlapping static entry reached from 0xC21D99.
    case 0xC21D9B: {
        Instruction step(cpu, 0x9C, 0x006518u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:128 CLC
    case 0xC21D9C: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:129 ADC @VIRTUAL02
    case 0xC21D9D: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:129 ADC @VIRTUAL02
    // Overlapping static entry reached from 0xC21D9B.
    case 0xC21D9E: {
        Instruction step(cpu, 0x02, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:130 TAX
    case 0xC21D9F: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:131 LDA __BSS_START__,X
    case 0xC21DA0: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:132 AND #$00FF
    case 0xC21DA3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:132 AND #$00FF
    // Overlapping static entry reached from 0xC21DA3.
    case 0xC21DA5: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:623 STA scratch
    // Macro caller: src/battle/calc_resistances.asm:133 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21DA6: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:624 ASL
    // Macro caller: src/battle/calc_resistances.asm:133 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21DA8: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:625 ADC scratch
    // Macro caller: src/battle/calc_resistances.asm:133 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21DA9: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:626 ASL
    // Macro caller: src/battle/calc_resistances.asm:133 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21DAB: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:627 ASL
    // Macro caller: src/battle/calc_resistances.asm:133 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21DAC: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:628 ASL
    // Macro caller: src/battle/calc_resistances.asm:133 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21DAD: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:134 CLC
    case 0xC21DAE: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:135 ADC #item::params + item_parameters::special
    case 0xC21DAF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000013u : 0x000013u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:135 ADC #item::params + item_parameters::special
    // Overlapping static entry reached from 0xC21DAF.
    case 0xC21DB1: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:136 TAX
    case 0xC21DB2: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:137 SEP #PROC_FLAGS::ACCUM8
    case 0xC21DB3: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:138 LDA f:ITEM_CONFIGURATION_TABLE,X
    case 0xC21DB5: {
        Instruction step(cpu, 0xBF, 0xD57000u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:139 REP #PROC_FLAGS::ACCUM8
    case 0xC21DB9: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:140 SEC
    case 0xC21DBB: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:141 AND #$00FF
    case 0xC21DBC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:141 AND #$00FF
    // Overlapping static entry reached from 0xC21DBC.
    case 0xC21DBE: {
        Instruction step(cpu, 0x00, 0x0000E9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:142 SBC #$0080
    case 0xC21DBF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x000080u : 0x000080u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:142 SBC #$0080
    // Overlapping static entry reached from 0xC21DBF.
    case 0xC21DC1: {
        Instruction step(cpu, 0x00, 0x000049u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:143 EOR #$FF80
    case 0xC21DC2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x49, narrow ? 0x000080u : 0x00FF80u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.xor_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:143 EOR #$FF80
    // Overlapping static entry reached from 0xC21DC2.
    case 0xC21DC4: {
        Instruction step(cpu, 0xFF, 0x000C29u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:144 AND #$000C
    case 0xC21DC5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x00000Cu : 0x00000Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:144 AND #$000C
    // Overlapping static entry reached from 0xC21DC5.
    case 0xC21DC7: {
        Instruction step(cpu, 0x00, 0x0000E2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:145 SEP #PROC_FLAGS::INDEX8
    case 0xC21DC8: {
        Instruction step(cpu, 0xE2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:146 PLY
    case 0xC21DCA: {
        Instruction step(cpu, 0x7A, 0x000000u, 1u, AddressMode::Implied);
        step.pull_y();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:147 JSL ASR16
    case 0xC21DCB: {
        Instruction step(cpu, 0x22, 0xC0923Du, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:148 BRA @UNKNOWN8
    case 0xC21DCF: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:150 LDA #$0000
    case 0xC21DD1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:150 LDA #$0000
    // Overlapping static entry reached from 0xC21DD1.
    case 0xC21DD3: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:152 STA @LOCAL00
    case 0xC21DD4: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:153 REP #PROC_FLAGS::INDEX8
    case 0xC21DD6: {
        Instruction step(cpu, 0xC2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:154 LDX @LOCAL02
    case 0xC21DD8: {
        Instruction step(cpu, 0xA6, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:155 TXA
    case 0xC21DDA: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:156 LDY #.SIZEOF(char_struct)
    case 0xC21DDB: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Eu : 0x00005Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:156 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC21DDB.
    case 0xC21DDD: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:157 JSL MULT168
    case 0xC21DDE: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:158 STA @VIRTUAL02
    case 0xC21DE2: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:159 LDX @VIRTUAL02
    case 0xC21DE4: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:160 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::OTHER,X
    case 0xC21DE6: {
        Instruction step(cpu, 0xBD, 0x009CB2u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:161 AND #$00FF
    case 0xC21DE9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:161 AND #$00FF
    // Overlapping static entry reached from 0xC21DE9.
    case 0xC21DEB: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:162 TAY
    case 0xC21DEC: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:163 BEQ @UNKNOWN9
    case 0xC21DED: {
        Instruction step(cpu, 0xF0, 0x00004Du, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:164 SEP #PROC_FLAGS::ACCUM8
    case 0xC21DEF: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:165 LDA #$0002
    case 0xC21DF1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x004802u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:166 PHA
    case 0xC21DF3: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:167 REP #PROC_FLAGS::ACCUM8
    case 0xC21DF4: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:168 TYA
    case 0xC21DF6: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:169 DEC
    case 0xC21DF7: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:170 STA @VIRTUAL04
    case 0xC21DF8: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:171 LDA @VIRTUAL02
    case 0xC21DFA: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:172 CLC
    case 0xC21DFC: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:173 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    case 0xC21DFD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000A1u : 0x009CA1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:173 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    // Overlapping static entry reached from 0xC21DFD.
    case 0xC21DFF: {
        Instruction step(cpu, 0x9C, 0x006518u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:174 CLC
    case 0xC21E00: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:175 ADC @VIRTUAL04
    case 0xC21E01: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:175 ADC @VIRTUAL04
    // Overlapping static entry reached from 0xC21DFF.
    case 0xC21E02: {
        Instruction step(cpu, 0x04, 0x0000AAu, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:176 TAX
    case 0xC21E03: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:177 LDA __BSS_START__,X
    case 0xC21E04: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:178 AND #$00FF
    case 0xC21E07: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:178 AND #$00FF
    // Overlapping static entry reached from 0xC21E07.
    case 0xC21E09: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:623 STA scratch
    // Macro caller: src/battle/calc_resistances.asm:179 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21E0A: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:624 ASL
    // Macro caller: src/battle/calc_resistances.asm:179 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21E0C: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:625 ADC scratch
    // Macro caller: src/battle/calc_resistances.asm:179 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21E0D: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:626 ASL
    // Macro caller: src/battle/calc_resistances.asm:179 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21E0F: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:627 ASL
    // Macro caller: src/battle/calc_resistances.asm:179 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21E10: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:628 ASL
    // Macro caller: src/battle/calc_resistances.asm:179 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21E11: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:180 CLC
    case 0xC21E12: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:181 ADC #item::params + item_parameters::special
    case 0xC21E13: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000013u : 0x000013u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:181 ADC #item::params + item_parameters::special
    // Overlapping static entry reached from 0xC21E13.
    case 0xC21E15: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:182 TAX
    case 0xC21E16: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:183 SEP #PROC_FLAGS::ACCUM8
    case 0xC21E17: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:184 LDA f:ITEM_CONFIGURATION_TABLE,X
    case 0xC21E19: {
        Instruction step(cpu, 0xBF, 0xD57000u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:185 REP #PROC_FLAGS::ACCUM8
    case 0xC21E1D: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:186 SEC
    case 0xC21E1F: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:187 AND #$00FF
    case 0xC21E20: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:187 AND #$00FF
    // Overlapping static entry reached from 0xC21E20.
    case 0xC21E22: {
        Instruction step(cpu, 0x00, 0x0000E9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:188 SBC #$0080
    case 0xC21E23: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x000080u : 0x000080u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:188 SBC #$0080
    // Overlapping static entry reached from 0xC21E23.
    case 0xC21E25: {
        Instruction step(cpu, 0x00, 0x000049u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:189 EOR #$FF80
    case 0xC21E26: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x49, narrow ? 0x000080u : 0x00FF80u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.xor_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:189 EOR #$FF80
    // Overlapping static entry reached from 0xC21E26.
    case 0xC21E28: {
        Instruction step(cpu, 0xFF, 0x000C29u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:190 AND #$000C
    case 0xC21E29: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x00000Cu : 0x00000Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:190 AND #$000C
    // Overlapping static entry reached from 0xC21E29.
    case 0xC21E2B: {
        Instruction step(cpu, 0x00, 0x0000E2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:191 SEP #PROC_FLAGS::INDEX8
    case 0xC21E2C: {
        Instruction step(cpu, 0xE2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:192 PLY
    case 0xC21E2E: {
        Instruction step(cpu, 0x7A, 0x000000u, 1u, AddressMode::Implied);
        step.pull_y();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:193 JSL ASR16
    case 0xC21E2F: {
        Instruction step(cpu, 0x22, 0xC0923Du, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:194 STA @VIRTUAL02
    case 0xC21E33: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:195 LDA @LOCAL00
    case 0xC21E35: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:196 CLC
    case 0xC21E37: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:197 ADC @VIRTUAL02
    case 0xC21E38: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:198 STA @LOCAL00
    case 0xC21E3A: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:200 LDA @LOCAL00
    case 0xC21E3C: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:201 CLC
    case 0xC21E3E: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:202 SBC #$0003
    case 0xC21E3F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:202 SBC #$0003
    // Overlapping static entry reached from 0xC21E3F.
    case 0xC21E41: {
        Instruction step(cpu, 0x00, 0x000050u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:807 BVC :+
    // Macro caller: src/battle/calc_resistances.asm:203 BRANCHLTEQS @UNKNOWN12
    case 0xC21E42: {
        Instruction step(cpu, 0x50, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_clear();
        return step.finish();
    }
    // include/macros.asm:808 BPL dest
    // Macro caller: src/battle/calc_resistances.asm:203 BRANCHLTEQS @UNKNOWN12
    case 0xC21E44: {
        Instruction step(cpu, 0x10, 0x00000Du, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:809 BRA :++
    // Macro caller: src/battle/calc_resistances.asm:203 BRANCHLTEQS @UNKNOWN12
    case 0xC21E46: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:811 BMI dest
    // Macro caller: src/battle/calc_resistances.asm:203 BRANCHLTEQS @UNKNOWN12
    case 0xC21E48: {
        Instruction step(cpu, 0x30, 0x000009u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:204 REP #PROC_FLAGS::INDEX8
    case 0xC21E4A: {
        Instruction step(cpu, 0xC2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:205 LDY #$0003
    case 0xC21E4C: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:205 LDY #$0003
    // Overlapping static entry reached from 0xC21E4C.
    case 0xC21E4E: {
        Instruction step(cpu, 0x00, 0x000084u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:206 STY @LOCAL01
    case 0xC21E4F: {
        Instruction step(cpu, 0x84, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:207 BRA @UNKNOWN13
    case 0xC21E51: {
        Instruction step(cpu, 0x80, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:209 LDA @LOCAL00
    case 0xC21E53: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:210 REP #PROC_FLAGS::INDEX8
    case 0xC21E55: {
        Instruction step(cpu, 0xC2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:211 TAY
    case 0xC21E57: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:212 STY @LOCAL01
    case 0xC21E58: {
        Instruction step(cpu, 0x84, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:214 LDX @LOCAL02
    case 0xC21E5A: {
        Instruction step(cpu, 0xA6, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:215 TXA
    case 0xC21E5C: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:216 LDY #.SIZEOF(char_struct)
    case 0xC21E5D: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Eu : 0x00005Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:216 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC21E5D.
    case 0xC21E5F: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:217 JSL MULT168
    case 0xC21E60: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:218 STA @LOCAL00
    case 0xC21E64: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:219 TAX
    case 0xC21E66: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:220 LDY @LOCAL01
    case 0xC21E67: {
        Instruction step(cpu, 0xA4, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:221 TYA
    case 0xC21E69: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:222 SEP #PROC_FLAGS::ACCUM8
    case 0xC21E6A: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:223 STA PARTY_CHARACTERS+char_struct::freeze_resist,X
    case 0xC21E6C: {
        Instruction step(cpu, 0x9D, 0x009CD1u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:224 REP #PROC_FLAGS::ACCUM8
    case 0xC21E6F: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:225 LDA @LOCAL00
    case 0xC21E71: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:226 TAX
    case 0xC21E73: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:227 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::BODY,X
    case 0xC21E74: {
        Instruction step(cpu, 0xBD, 0x009CB0u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:228 AND #$00FF
    case 0xC21E77: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:228 AND #$00FF
    // Overlapping static entry reached from 0xC21E77.
    case 0xC21E79: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:229 TAY
    case 0xC21E7A: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:230 BEQ @UNKNOWN14
    case 0xC21E7B: {
        Instruction step(cpu, 0xF0, 0x000046u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:231 SEP #PROC_FLAGS::ACCUM8
    case 0xC21E7D: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:232 LDA #$0004
    case 0xC21E7F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000004u : 0x004804u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:233 PHA
    case 0xC21E81: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:234 REP #PROC_FLAGS::ACCUM8
    case 0xC21E82: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:235 TYA
    case 0xC21E84: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:236 DEC
    case 0xC21E85: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:237 STA @VIRTUAL02
    case 0xC21E86: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:238 LDA @LOCAL00
    case 0xC21E88: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:239 CLC
    case 0xC21E8A: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:240 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    case 0xC21E8B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000A1u : 0x009CA1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:240 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    // Overlapping static entry reached from 0xC21E8B.
    case 0xC21E8D: {
        Instruction step(cpu, 0x9C, 0x006518u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:241 CLC
    case 0xC21E8E: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:242 ADC @VIRTUAL02
    case 0xC21E8F: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:242 ADC @VIRTUAL02
    // Overlapping static entry reached from 0xC21E8D.
    case 0xC21E90: {
        Instruction step(cpu, 0x02, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:243 TAX
    case 0xC21E91: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:244 LDA __BSS_START__,X
    case 0xC21E92: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:245 AND #$00FF
    case 0xC21E95: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:245 AND #$00FF
    // Overlapping static entry reached from 0xC21E95.
    case 0xC21E97: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:623 STA scratch
    // Macro caller: src/battle/calc_resistances.asm:246 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21E98: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:624 ASL
    // Macro caller: src/battle/calc_resistances.asm:246 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21E9A: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:625 ADC scratch
    // Macro caller: src/battle/calc_resistances.asm:246 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21E9B: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:626 ASL
    // Macro caller: src/battle/calc_resistances.asm:246 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21E9D: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:627 ASL
    // Macro caller: src/battle/calc_resistances.asm:246 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21E9E: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:628 ASL
    // Macro caller: src/battle/calc_resistances.asm:246 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21E9F: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:247 CLC
    case 0xC21EA0: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:248 ADC #item::params + item_parameters::special
    case 0xC21EA1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000013u : 0x000013u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:248 ADC #item::params + item_parameters::special
    // Overlapping static entry reached from 0xC21EA1.
    case 0xC21EA3: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:249 TAX
    case 0xC21EA4: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:250 SEP #PROC_FLAGS::ACCUM8
    case 0xC21EA5: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:251 LDA f:ITEM_CONFIGURATION_TABLE,X
    case 0xC21EA7: {
        Instruction step(cpu, 0xBF, 0xD57000u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:252 REP #PROC_FLAGS::ACCUM8
    case 0xC21EAB: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:253 SEC
    case 0xC21EAD: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:254 AND #$00FF
    case 0xC21EAE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:254 AND #$00FF
    // Overlapping static entry reached from 0xC21EAE.
    case 0xC21EB0: {
        Instruction step(cpu, 0x00, 0x0000E9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:255 SBC #$0080
    case 0xC21EB1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x000080u : 0x000080u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:255 SBC #$0080
    // Overlapping static entry reached from 0xC21EB1.
    case 0xC21EB3: {
        Instruction step(cpu, 0x00, 0x000049u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:256 EOR #$FF80
    case 0xC21EB4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x49, narrow ? 0x000080u : 0x00FF80u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.xor_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:256 EOR #$FF80
    // Overlapping static entry reached from 0xC21EB4.
    case 0xC21EB6: {
        Instruction step(cpu, 0xFF, 0x003029u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:257 AND #$0030
    case 0xC21EB7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000030u : 0x000030u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:257 AND #$0030
    // Overlapping static entry reached from 0xC21EB7.
    case 0xC21EB9: {
        Instruction step(cpu, 0x00, 0x0000E2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:258 SEP #PROC_FLAGS::INDEX8
    case 0xC21EBA: {
        Instruction step(cpu, 0xE2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:259 PLY
    case 0xC21EBC: {
        Instruction step(cpu, 0x7A, 0x000000u, 1u, AddressMode::Implied);
        step.pull_y();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:260 JSL ASR16
    case 0xC21EBD: {
        Instruction step(cpu, 0x22, 0xC0923Du, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:261 BRA @UNKNOWN15
    case 0xC21EC1: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:263 LDA #$0000
    case 0xC21EC3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:263 LDA #$0000
    // Overlapping static entry reached from 0xC21EC3.
    case 0xC21EC5: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:265 STA @LOCAL00
    case 0xC21EC6: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:266 REP #PROC_FLAGS::INDEX8
    case 0xC21EC8: {
        Instruction step(cpu, 0xC2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:267 LDX @LOCAL02
    case 0xC21ECA: {
        Instruction step(cpu, 0xA6, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:268 TXA
    case 0xC21ECC: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:269 LDY #.SIZEOF(char_struct)
    case 0xC21ECD: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Eu : 0x00005Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:269 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC21ECD.
    case 0xC21ECF: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:270 JSL MULT168
    case 0xC21ED0: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:271 STA @VIRTUAL02
    case 0xC21ED4: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:272 LDX @VIRTUAL02
    case 0xC21ED6: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:273 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::OTHER,X
    case 0xC21ED8: {
        Instruction step(cpu, 0xBD, 0x009CB2u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:274 AND #$00FF
    case 0xC21EDB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:274 AND #$00FF
    // Overlapping static entry reached from 0xC21EDB.
    case 0xC21EDD: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:275 TAY
    case 0xC21EDE: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:276 BEQ @UNKNOWN16
    case 0xC21EDF: {
        Instruction step(cpu, 0xF0, 0x00004Du, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:277 SEP #PROC_FLAGS::ACCUM8
    case 0xC21EE1: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:278 LDA #$0004
    case 0xC21EE3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000004u : 0x004804u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:279 PHA
    case 0xC21EE5: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:280 REP #PROC_FLAGS::ACCUM8
    case 0xC21EE6: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:281 TYA
    case 0xC21EE8: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:282 DEC
    case 0xC21EE9: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:283 STA @VIRTUAL04
    case 0xC21EEA: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:284 LDA @VIRTUAL02
    case 0xC21EEC: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:285 CLC
    case 0xC21EEE: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:286 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    case 0xC21EEF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000A1u : 0x009CA1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:286 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    // Overlapping static entry reached from 0xC21EEF.
    case 0xC21EF1: {
        Instruction step(cpu, 0x9C, 0x006518u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:287 CLC
    case 0xC21EF2: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:288 ADC @VIRTUAL04
    case 0xC21EF3: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:288 ADC @VIRTUAL04
    // Overlapping static entry reached from 0xC21EF1.
    case 0xC21EF4: {
        Instruction step(cpu, 0x04, 0x0000AAu, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:289 TAX
    case 0xC21EF5: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:290 LDA __BSS_START__,X
    case 0xC21EF6: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:291 AND #$00FF
    case 0xC21EF9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:291 AND #$00FF
    // Overlapping static entry reached from 0xC21EF9.
    case 0xC21EFB: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:623 STA scratch
    // Macro caller: src/battle/calc_resistances.asm:292 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21EFC: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:624 ASL
    // Macro caller: src/battle/calc_resistances.asm:292 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21EFE: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:625 ADC scratch
    // Macro caller: src/battle/calc_resistances.asm:292 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21EFF: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:626 ASL
    // Macro caller: src/battle/calc_resistances.asm:292 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21F01: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:627 ASL
    // Macro caller: src/battle/calc_resistances.asm:292 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21F02: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:628 ASL
    // Macro caller: src/battle/calc_resistances.asm:292 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21F03: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:293 CLC
    case 0xC21F04: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:294 ADC #item::params + item_parameters::special
    case 0xC21F05: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000013u : 0x000013u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:294 ADC #item::params + item_parameters::special
    // Overlapping static entry reached from 0xC21F05.
    case 0xC21F07: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:295 TAX
    case 0xC21F08: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:296 SEP #PROC_FLAGS::ACCUM8
    case 0xC21F09: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:297 LDA f:ITEM_CONFIGURATION_TABLE,X
    case 0xC21F0B: {
        Instruction step(cpu, 0xBF, 0xD57000u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:298 REP #PROC_FLAGS::ACCUM8
    case 0xC21F0F: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:299 SEC
    case 0xC21F11: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:300 AND #$00FF
    case 0xC21F12: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:300 AND #$00FF
    // Overlapping static entry reached from 0xC21F12.
    case 0xC21F14: {
        Instruction step(cpu, 0x00, 0x0000E9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:301 SBC #$0080
    case 0xC21F15: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x000080u : 0x000080u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:301 SBC #$0080
    // Overlapping static entry reached from 0xC21F15.
    case 0xC21F17: {
        Instruction step(cpu, 0x00, 0x000049u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:302 EOR #$FF80
    case 0xC21F18: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x49, narrow ? 0x000080u : 0x00FF80u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.xor_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:302 EOR #$FF80
    // Overlapping static entry reached from 0xC21F18.
    case 0xC21F1A: {
        Instruction step(cpu, 0xFF, 0x003029u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:303 AND #$0030
    case 0xC21F1B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000030u : 0x000030u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:303 AND #$0030
    // Overlapping static entry reached from 0xC21F1B.
    case 0xC21F1D: {
        Instruction step(cpu, 0x00, 0x0000E2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:304 SEP #PROC_FLAGS::INDEX8
    case 0xC21F1E: {
        Instruction step(cpu, 0xE2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:305 PLY
    case 0xC21F20: {
        Instruction step(cpu, 0x7A, 0x000000u, 1u, AddressMode::Implied);
        step.pull_y();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:306 JSL ASR16
    case 0xC21F21: {
        Instruction step(cpu, 0x22, 0xC0923Du, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:307 STA @VIRTUAL02
    case 0xC21F25: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:308 LDA @LOCAL00
    case 0xC21F27: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:309 CLC
    case 0xC21F29: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:310 ADC @VIRTUAL02
    case 0xC21F2A: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:311 STA @LOCAL00
    case 0xC21F2C: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:313 LDA @LOCAL00
    case 0xC21F2E: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:314 CLC
    case 0xC21F30: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:315 SBC #$0003
    case 0xC21F31: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:315 SBC #$0003
    // Overlapping static entry reached from 0xC21F31.
    case 0xC21F33: {
        Instruction step(cpu, 0x00, 0x000050u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:807 BVC :+
    // Macro caller: src/battle/calc_resistances.asm:316 BRANCHLTEQS @UNKNOWN19
    case 0xC21F34: {
        Instruction step(cpu, 0x50, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_clear();
        return step.finish();
    }
    // include/macros.asm:808 BPL dest
    // Macro caller: src/battle/calc_resistances.asm:316 BRANCHLTEQS @UNKNOWN19
    case 0xC21F36: {
        Instruction step(cpu, 0x10, 0x00000Du, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:809 BRA :++
    // Macro caller: src/battle/calc_resistances.asm:316 BRANCHLTEQS @UNKNOWN19
    case 0xC21F38: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:811 BMI dest
    // Macro caller: src/battle/calc_resistances.asm:316 BRANCHLTEQS @UNKNOWN19
    case 0xC21F3A: {
        Instruction step(cpu, 0x30, 0x000009u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:317 REP #PROC_FLAGS::INDEX8
    case 0xC21F3C: {
        Instruction step(cpu, 0xC2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:318 LDY #$0003
    case 0xC21F3E: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:318 LDY #$0003
    // Overlapping static entry reached from 0xC21F3E.
    case 0xC21F40: {
        Instruction step(cpu, 0x00, 0x000084u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:319 STY @LOCAL01
    case 0xC21F41: {
        Instruction step(cpu, 0x84, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:320 BRA @UNKNOWN20
    case 0xC21F43: {
        Instruction step(cpu, 0x80, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:322 LDA @LOCAL00
    case 0xC21F45: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:323 REP #PROC_FLAGS::INDEX8
    case 0xC21F47: {
        Instruction step(cpu, 0xC2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:324 TAY
    case 0xC21F49: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:325 STY @LOCAL01
    case 0xC21F4A: {
        Instruction step(cpu, 0x84, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:327 LDX @LOCAL02
    case 0xC21F4C: {
        Instruction step(cpu, 0xA6, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:328 TXA
    case 0xC21F4E: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:329 LDY #.SIZEOF(char_struct)
    case 0xC21F4F: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Eu : 0x00005Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:329 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC21F4F.
    case 0xC21F51: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:330 JSL MULT168
    case 0xC21F52: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:331 STA @LOCAL00
    case 0xC21F56: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:332 TAX
    case 0xC21F58: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:333 LDY @LOCAL01
    case 0xC21F59: {
        Instruction step(cpu, 0xA4, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:334 TYA
    case 0xC21F5B: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:335 SEP #PROC_FLAGS::ACCUM8
    case 0xC21F5C: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:336 STA PARTY_CHARACTERS+char_struct::flash_resist,X
    case 0xC21F5E: {
        Instruction step(cpu, 0x9D, 0x009CD2u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:337 REP #PROC_FLAGS::ACCUM8
    case 0xC21F61: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:338 LDA @LOCAL00
    case 0xC21F63: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:339 TAX
    case 0xC21F65: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:340 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::BODY,X
    case 0xC21F66: {
        Instruction step(cpu, 0xBD, 0x009CB0u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:341 AND #$00FF
    case 0xC21F69: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:341 AND #$00FF
    // Overlapping static entry reached from 0xC21F69.
    case 0xC21F6B: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:342 TAY
    case 0xC21F6C: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:343 BEQ @UNKNOWN21
    case 0xC21F6D: {
        Instruction step(cpu, 0xF0, 0x000046u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:344 SEP #PROC_FLAGS::ACCUM8
    case 0xC21F6F: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:345 LDA #$0006
    case 0xC21F71: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000006u : 0x004806u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:346 PHA
    case 0xC21F73: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:347 REP #PROC_FLAGS::ACCUM8
    case 0xC21F74: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:348 TYA
    case 0xC21F76: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:349 DEC
    case 0xC21F77: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:350 STA @VIRTUAL02
    case 0xC21F78: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:351 LDA @LOCAL00
    case 0xC21F7A: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:352 CLC
    case 0xC21F7C: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:353 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    case 0xC21F7D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000A1u : 0x009CA1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:353 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    // Overlapping static entry reached from 0xC21F7D.
    case 0xC21F7F: {
        Instruction step(cpu, 0x9C, 0x006518u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:354 CLC
    case 0xC21F80: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:355 ADC @VIRTUAL02
    case 0xC21F81: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:355 ADC @VIRTUAL02
    // Overlapping static entry reached from 0xC21F7F.
    case 0xC21F82: {
        Instruction step(cpu, 0x02, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:356 TAX
    case 0xC21F83: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:357 LDA __BSS_START__,X
    case 0xC21F84: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:358 AND #$00FF
    case 0xC21F87: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:358 AND #$00FF
    // Overlapping static entry reached from 0xC21F87.
    case 0xC21F89: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:623 STA scratch
    // Macro caller: src/battle/calc_resistances.asm:359 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21F8A: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:624 ASL
    // Macro caller: src/battle/calc_resistances.asm:359 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21F8C: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:625 ADC scratch
    // Macro caller: src/battle/calc_resistances.asm:359 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21F8D: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:626 ASL
    // Macro caller: src/battle/calc_resistances.asm:359 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21F8F: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:627 ASL
    // Macro caller: src/battle/calc_resistances.asm:359 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21F90: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:628 ASL
    // Macro caller: src/battle/calc_resistances.asm:359 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21F91: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:360 CLC
    case 0xC21F92: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:361 ADC #item::params + item_parameters::special
    case 0xC21F93: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000013u : 0x000013u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:361 ADC #item::params + item_parameters::special
    // Overlapping static entry reached from 0xC21F93.
    case 0xC21F95: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:362 TAX
    case 0xC21F96: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:363 SEP #PROC_FLAGS::ACCUM8
    case 0xC21F97: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:364 LDA f:ITEM_CONFIGURATION_TABLE,X
    case 0xC21F99: {
        Instruction step(cpu, 0xBF, 0xD57000u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:365 REP #PROC_FLAGS::ACCUM8
    case 0xC21F9D: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:366 SEC
    case 0xC21F9F: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:367 AND #$00FF
    case 0xC21FA0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:367 AND #$00FF
    // Overlapping static entry reached from 0xC21FA0.
    case 0xC21FA2: {
        Instruction step(cpu, 0x00, 0x0000E9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:368 SBC #$0080
    case 0xC21FA3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x000080u : 0x000080u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:368 SBC #$0080
    // Overlapping static entry reached from 0xC21FA3.
    case 0xC21FA5: {
        Instruction step(cpu, 0x00, 0x000049u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:369 EOR #$FF80
    case 0xC21FA6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x49, narrow ? 0x000080u : 0x00FF80u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.xor_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:369 EOR #$FF80
    // Overlapping static entry reached from 0xC21FA6.
    case 0xC21FA8: {
        Instruction step(cpu, 0xFF, 0x00C029u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:370 AND #$00C0
    case 0xC21FA9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000C0u : 0x0000C0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:370 AND #$00C0
    // Overlapping static entry reached from 0xC21FA9.
    case 0xC21FAB: {
        Instruction step(cpu, 0x00, 0x0000E2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:371 SEP #PROC_FLAGS::INDEX8
    case 0xC21FAC: {
        Instruction step(cpu, 0xE2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:372 PLY
    case 0xC21FAE: {
        Instruction step(cpu, 0x7A, 0x000000u, 1u, AddressMode::Implied);
        step.pull_y();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:373 JSL ASR16
    case 0xC21FAF: {
        Instruction step(cpu, 0x22, 0xC0923Du, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:374 BRA @UNKNOWN22
    case 0xC21FB3: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:376 LDA #$0000
    case 0xC21FB5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:376 LDA #$0000
    // Overlapping static entry reached from 0xC21FB5.
    case 0xC21FB7: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:378 STA @LOCAL00
    case 0xC21FB8: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:379 REP #PROC_FLAGS::INDEX8
    case 0xC21FBA: {
        Instruction step(cpu, 0xC2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:380 LDX @LOCAL02
    case 0xC21FBC: {
        Instruction step(cpu, 0xA6, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:381 TXA
    case 0xC21FBE: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:382 LDY #.SIZEOF(char_struct)
    case 0xC21FBF: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Eu : 0x00005Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:382 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC21FBF.
    case 0xC21FC1: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:383 JSL MULT168
    case 0xC21FC2: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:384 STA @VIRTUAL02
    case 0xC21FC6: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:385 LDX @VIRTUAL02
    case 0xC21FC8: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:386 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::OTHER,X
    case 0xC21FCA: {
        Instruction step(cpu, 0xBD, 0x009CB2u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:387 AND #$00FF
    case 0xC21FCD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:387 AND #$00FF
    // Overlapping static entry reached from 0xC21FCD.
    case 0xC21FCF: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:388 TAY
    case 0xC21FD0: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:389 BEQ @UNKNOWN23
    case 0xC21FD1: {
        Instruction step(cpu, 0xF0, 0x00004Du, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:390 SEP #PROC_FLAGS::ACCUM8
    case 0xC21FD3: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:391 LDA #$0006
    case 0xC21FD5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000006u : 0x004806u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:392 PHA
    case 0xC21FD7: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:393 REP #PROC_FLAGS::ACCUM8
    case 0xC21FD8: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:394 TYA
    case 0xC21FDA: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:395 DEC
    case 0xC21FDB: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:396 STA @VIRTUAL04
    case 0xC21FDC: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:397 LDA @VIRTUAL02
    case 0xC21FDE: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:398 CLC
    case 0xC21FE0: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:399 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    case 0xC21FE1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000A1u : 0x009CA1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:399 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    // Overlapping static entry reached from 0xC21FE1.
    case 0xC21FE3: {
        Instruction step(cpu, 0x9C, 0x006518u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:400 CLC
    case 0xC21FE4: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:401 ADC @VIRTUAL04
    case 0xC21FE5: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:401 ADC @VIRTUAL04
    // Overlapping static entry reached from 0xC21FE3.
    case 0xC21FE6: {
        Instruction step(cpu, 0x04, 0x0000AAu, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:402 TAX
    case 0xC21FE7: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:403 LDA __BSS_START__,X
    case 0xC21FE8: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:404 AND #$00FF
    case 0xC21FEB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:404 AND #$00FF
    // Overlapping static entry reached from 0xC21FEB.
    case 0xC21FED: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:623 STA scratch
    // Macro caller: src/battle/calc_resistances.asm:405 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21FEE: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:624 ASL
    // Macro caller: src/battle/calc_resistances.asm:405 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21FF0: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:625 ADC scratch
    // Macro caller: src/battle/calc_resistances.asm:405 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21FF1: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:626 ASL
    // Macro caller: src/battle/calc_resistances.asm:405 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21FF3: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:627 ASL
    // Macro caller: src/battle/calc_resistances.asm:405 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21FF4: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:628 ASL
    // Macro caller: src/battle/calc_resistances.asm:405 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21FF5: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:406 CLC
    case 0xC21FF6: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:407 ADC #item::params + item_parameters::special
    case 0xC21FF7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000013u : 0x000013u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:407 ADC #item::params + item_parameters::special
    // Overlapping static entry reached from 0xC21FF7.
    case 0xC21FF9: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:408 TAX
    case 0xC21FFA: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:409 SEP #PROC_FLAGS::ACCUM8
    case 0xC21FFB: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:410 LDA f:ITEM_CONFIGURATION_TABLE,X
    case 0xC21FFD: {
        Instruction step(cpu, 0xBF, 0xD57000u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:411 REP #PROC_FLAGS::ACCUM8
    case 0xC22001: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:412 SEC
    case 0xC22003: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:413 AND #$00FF
    case 0xC22004: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:413 AND #$00FF
    // Overlapping static entry reached from 0xC22004.
    case 0xC22006: {
        Instruction step(cpu, 0x00, 0x0000E9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:414 SBC #$0080
    case 0xC22007: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x000080u : 0x000080u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:414 SBC #$0080
    // Overlapping static entry reached from 0xC22007.
    case 0xC22009: {
        Instruction step(cpu, 0x00, 0x000049u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:415 EOR #$FF80
    case 0xC2200A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x49, narrow ? 0x000080u : 0x00FF80u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.xor_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:415 EOR #$FF80
    // Overlapping static entry reached from 0xC2200A.
    case 0xC2200C: {
        Instruction step(cpu, 0xFF, 0x00C029u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:416 AND #$00C0
    case 0xC2200D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000C0u : 0x0000C0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:416 AND #$00C0
    // Overlapping static entry reached from 0xC2200D.
    case 0xC2200F: {
        Instruction step(cpu, 0x00, 0x0000E2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:417 SEP #PROC_FLAGS::INDEX8
    case 0xC22010: {
        Instruction step(cpu, 0xE2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:418 PLY
    case 0xC22012: {
        Instruction step(cpu, 0x7A, 0x000000u, 1u, AddressMode::Implied);
        step.pull_y();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:419 JSL ASR16
    case 0xC22013: {
        Instruction step(cpu, 0x22, 0xC0923Du, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:420 STA @VIRTUAL02
    case 0xC22017: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:421 LDA @LOCAL00
    case 0xC22019: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:422 CLC
    case 0xC2201B: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:423 ADC @VIRTUAL02
    case 0xC2201C: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:424 STA @LOCAL00
    case 0xC2201E: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:426 LDA @LOCAL00
    case 0xC22020: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:427 CLC
    case 0xC22022: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:428 SBC #$0003
    case 0xC22023: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:428 SBC #$0003
    // Overlapping static entry reached from 0xC22023.
    case 0xC22025: {
        Instruction step(cpu, 0x00, 0x000050u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:807 BVC :+
    // Macro caller: src/battle/calc_resistances.asm:429 BRANCHLTEQS @UNKNOWN26
    case 0xC22026: {
        Instruction step(cpu, 0x50, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_clear();
        return step.finish();
    }
    // include/macros.asm:808 BPL dest
    // Macro caller: src/battle/calc_resistances.asm:429 BRANCHLTEQS @UNKNOWN26
    case 0xC22028: {
        Instruction step(cpu, 0x10, 0x00000Du, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:809 BRA :++
    // Macro caller: src/battle/calc_resistances.asm:429 BRANCHLTEQS @UNKNOWN26
    case 0xC2202A: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:811 BMI dest
    // Macro caller: src/battle/calc_resistances.asm:429 BRANCHLTEQS @UNKNOWN26
    case 0xC2202C: {
        Instruction step(cpu, 0x30, 0x000009u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:430 REP #PROC_FLAGS::INDEX8
    case 0xC2202E: {
        Instruction step(cpu, 0xC2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:431 LDY #$0003
    case 0xC22030: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:431 LDY #$0003
    // Overlapping static entry reached from 0xC22030.
    case 0xC22032: {
        Instruction step(cpu, 0x00, 0x000084u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:432 STY @LOCAL01
    case 0xC22033: {
        Instruction step(cpu, 0x84, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:433 BRA @UNKNOWN27
    case 0xC22035: {
        Instruction step(cpu, 0x80, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:435 LDA @LOCAL00
    case 0xC22037: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:436 REP #PROC_FLAGS::INDEX8
    case 0xC22039: {
        Instruction step(cpu, 0xC2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:437 TAY
    case 0xC2203B: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:438 STY @LOCAL01
    case 0xC2203C: {
        Instruction step(cpu, 0x84, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:440 LDX @LOCAL02
    case 0xC2203E: {
        Instruction step(cpu, 0xA6, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:441 TXA
    case 0xC22040: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:442 LDY #.SIZEOF(char_struct)
    case 0xC22041: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Eu : 0x00005Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:442 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC22041.
    case 0xC22043: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:443 JSL MULT168
    case 0xC22044: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:444 STA @LOCAL00
    case 0xC22048: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:445 TAX
    case 0xC2204A: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:446 LDY @LOCAL01
    case 0xC2204B: {
        Instruction step(cpu, 0xA4, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:447 TYA
    case 0xC2204D: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:448 SEP #PROC_FLAGS::ACCUM8
    case 0xC2204E: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:449 STA PARTY_CHARACTERS+char_struct::paralysis_resist,X
    case 0xC22050: {
        Instruction step(cpu, 0x9D, 0x009CD3u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:450 REP #PROC_FLAGS::ACCUM8
    case 0xC22053: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:451 LDA @LOCAL00
    case 0xC22055: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:452 TAX
    case 0xC22057: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:453 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::ARMS,X
    case 0xC22058: {
        Instruction step(cpu, 0xBD, 0x009CB1u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:454 AND #$00FF
    case 0xC2205B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:454 AND #$00FF
    // Overlapping static entry reached from 0xC2205B.
    case 0xC2205D: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:455 TAY
    case 0xC2205E: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:456 BEQ @UNKNOWN28
    case 0xC2205F: {
        Instruction step(cpu, 0xF0, 0x000037u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:457 TYA
    case 0xC22061: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:458 DEC
    case 0xC22062: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:459 STA @VIRTUAL02
    case 0xC22063: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:460 LDA @LOCAL00
    case 0xC22065: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:461 CLC
    case 0xC22067: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:462 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    case 0xC22068: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000A1u : 0x009CA1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:462 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    // Overlapping static entry reached from 0xC22068.
    case 0xC2206A: {
        Instruction step(cpu, 0x9C, 0x006518u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:463 CLC
    case 0xC2206B: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:464 ADC @VIRTUAL02
    case 0xC2206C: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:464 ADC @VIRTUAL02
    // Overlapping static entry reached from 0xC2206A.
    case 0xC2206D: {
        Instruction step(cpu, 0x02, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:465 TAX
    case 0xC2206E: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:466 LDA __BSS_START__,X
    case 0xC2206F: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:467 AND #$00FF
    case 0xC22072: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:467 AND #$00FF
    // Overlapping static entry reached from 0xC22072.
    case 0xC22074: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:623 STA scratch
    // Macro caller: src/battle/calc_resistances.asm:468 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC22075: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:624 ASL
    // Macro caller: src/battle/calc_resistances.asm:468 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC22077: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:625 ADC scratch
    // Macro caller: src/battle/calc_resistances.asm:468 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC22078: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:626 ASL
    // Macro caller: src/battle/calc_resistances.asm:468 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC2207A: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:627 ASL
    // Macro caller: src/battle/calc_resistances.asm:468 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC2207B: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:628 ASL
    // Macro caller: src/battle/calc_resistances.asm:468 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC2207C: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:469 CLC
    case 0xC2207D: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:470 ADC #item::params + item_parameters::special
    case 0xC2207E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000013u : 0x000013u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:470 ADC #item::params + item_parameters::special
    // Overlapping static entry reached from 0xC2207E.
    case 0xC22080: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:471 TAX
    case 0xC22081: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:472 SEP #PROC_FLAGS::ACCUM8
    case 0xC22082: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:473 LDA f:ITEM_CONFIGURATION_TABLE,X
    case 0xC22084: {
        Instruction step(cpu, 0xBF, 0xD57000u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:474 REP #PROC_FLAGS::ACCUM8
    case 0xC22088: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:475 SEC
    case 0xC2208A: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:476 AND #$00FF
    case 0xC2208B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:476 AND #$00FF
    // Overlapping static entry reached from 0xC2208B.
    case 0xC2208D: {
        Instruction step(cpu, 0x00, 0x0000E9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:477 SBC #$0080
    case 0xC2208E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x000080u : 0x000080u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:477 SBC #$0080
    // Overlapping static entry reached from 0xC2208E.
    case 0xC22090: {
        Instruction step(cpu, 0x00, 0x000049u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:478 EOR #$FF80
    case 0xC22091: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x49, narrow ? 0x000080u : 0x00FF80u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.xor_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:478 EOR #$FF80
    // Overlapping static entry reached from 0xC22091.
    case 0xC22093: {
        Instruction step(cpu, 0xFF, 0x801085u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:479 STA @LOCAL01
    case 0xC22094: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:480 BRA @UNKNOWN29
    case 0xC22096: {
        Instruction step(cpu, 0x80, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:480 BRA @UNKNOWN29
    // Overlapping static entry reached from 0xC22093.
    case 0xC22097: {
        Instruction step(cpu, 0x05, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:482 LDA #$0000
    case 0xC22098: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:482 LDA #$0000
    // Overlapping static entry reached from 0xC22097.
    case 0xC22099: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:482 LDA #$0000
    // Overlapping static entry reached from 0xC22098.
    case 0xC2209A: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:483 STA @LOCAL01
    case 0xC2209B: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:485 LDX @LOCAL02
    case 0xC2209D: {
        Instruction step(cpu, 0xA6, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:486 TXA
    case 0xC2209F: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:487 LDY #.SIZEOF(char_struct)
    case 0xC220A0: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Eu : 0x00005Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:487 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC220A0.
    case 0xC220A2: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:488 JSL MULT168
    case 0xC220A3: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:489 TAX
    case 0xC220A7: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:490 LDA @LOCAL01
    case 0xC220A8: {
        Instruction step(cpu, 0xA5, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:491 SEP #PROC_FLAGS::ACCUM8
    case 0xC220AA: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:492 STA PARTY_CHARACTERS+char_struct::hypnosis_brainshock_resist,X
    case 0xC220AC: {
        Instruction step(cpu, 0x9D, 0x009CD4u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/calc_resistances.asm:493 REP #PROC_FLAGS::ACCUM8
    case 0xC220AF: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/calc_resistances.asm:494 END_C_FUNCTION
    case 0xC220B1: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/calc_resistances.asm:494 END_C_FUNCTION
    case 0xC220B2: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
