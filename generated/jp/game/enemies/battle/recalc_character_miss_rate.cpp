// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/battle/recalc_character_miss_rate.asm
bool resume_battle_recalc_character_miss_rate(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/recalc_character_miss_rate.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC21C2A: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/recalc_character_miss_rate.asm:8 END_STACK_VARS
    case 0xC21C2C: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/recalc_character_miss_rate.asm:8 END_STACK_VARS
    case 0xC21C2D: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/recalc_character_miss_rate.asm:8 END_STACK_VARS
    case 0xC21C2E: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/recalc_character_miss_rate.asm:8 END_STACK_VARS
    case 0xC21C2F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EFu : 0x00FFEFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/recalc_character_miss_rate.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC21C2F.
    case 0xC21C31: {
        Instruction step(cpu, 0xFF, 0xA8685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/recalc_character_miss_rate.asm:8 END_STACK_VARS
    case 0xC21C32: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/recalc_character_miss_rate.asm:8 END_STACK_VARS
    case 0xC21C33: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/battle/recalc_character_miss_rate.asm:9 TAY
    case 0xC21C34: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/battle/recalc_character_miss_rate.asm:10 DEY
    case 0xC21C35: {
        Instruction step(cpu, 0x88, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_y();
        return step.finish();
    }
    // src/battle/recalc_character_miss_rate.asm:11 STY @LOCAL01
    case 0xC21C36: {
        Instruction step(cpu, 0x84, 0x00000Fu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/recalc_character_miss_rate.asm:12 TYA
    case 0xC21C38: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/recalc_character_miss_rate.asm:13 LDY #.SIZEOF(char_struct)
    case 0xC21C39: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Eu : 0x00005Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/recalc_character_miss_rate.asm:13 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC21C39.
    case 0xC21C3B: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/recalc_character_miss_rate.asm:14 JSL MULT168
    case 0xC21C3C: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/recalc_character_miss_rate.asm:15 TAX
    case 0xC21C40: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/recalc_character_miss_rate.asm:16 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::WEAPON,X
    case 0xC21C41: {
        Instruction step(cpu, 0xBD, 0x009CAFu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/recalc_character_miss_rate.asm:17 AND #$00FF
    case 0xC21C44: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/recalc_character_miss_rate.asm:17 AND #$00FF
    // Overlapping static entry reached from 0xC21C44.
    case 0xC21C46: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/recalc_character_miss_rate.asm:18 BEQ @UNKNOWN0
    case 0xC21C47: {
        Instruction step(cpu, 0xF0, 0x000033u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/recalc_character_miss_rate.asm:19 DEC
    case 0xC21C49: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/battle/recalc_character_miss_rate.asm:20 STA @VIRTUAL02
    case 0xC21C4A: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/recalc_character_miss_rate.asm:21 TXA
    case 0xC21C4C: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/recalc_character_miss_rate.asm:22 CLC
    case 0xC21C4D: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/recalc_character_miss_rate.asm:23 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    case 0xC21C4E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000A1u : 0x009CA1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/recalc_character_miss_rate.asm:23 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    // Overlapping static entry reached from 0xC21C4E.
    case 0xC21C50: {
        Instruction step(cpu, 0x9C, 0x006518u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/recalc_character_miss_rate.asm:24 CLC
    case 0xC21C51: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/recalc_character_miss_rate.asm:25 ADC @VIRTUAL02
    case 0xC21C52: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/recalc_character_miss_rate.asm:25 ADC @VIRTUAL02
    // Overlapping static entry reached from 0xC21C50.
    case 0xC21C53: {
        Instruction step(cpu, 0x02, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/battle/recalc_character_miss_rate.asm:26 TAX
    case 0xC21C54: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/recalc_character_miss_rate.asm:27 LDA __BSS_START__,X
    case 0xC21C55: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/recalc_character_miss_rate.asm:28 AND #$00FF
    case 0xC21C58: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/recalc_character_miss_rate.asm:28 AND #$00FF
    // Overlapping static entry reached from 0xC21C58.
    case 0xC21C5A: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:623 STA scratch
    // Macro caller: src/battle/recalc_character_miss_rate.asm:29 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21C5B: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:624 ASL
    // Macro caller: src/battle/recalc_character_miss_rate.asm:29 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21C5D: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:625 ADC scratch
    // Macro caller: src/battle/recalc_character_miss_rate.asm:29 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21C5E: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:626 ASL
    // Macro caller: src/battle/recalc_character_miss_rate.asm:29 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21C60: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:627 ASL
    // Macro caller: src/battle/recalc_character_miss_rate.asm:29 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21C61: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:628 ASL
    // Macro caller: src/battle/recalc_character_miss_rate.asm:29 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21C62: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/recalc_character_miss_rate.asm:30 CLC
    case 0xC21C63: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/recalc_character_miss_rate.asm:31 ADC #item::params + item_parameters::special
    case 0xC21C64: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000013u : 0x000013u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/recalc_character_miss_rate.asm:31 ADC #item::params + item_parameters::special
    // Overlapping static entry reached from 0xC21C64.
    case 0xC21C66: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/recalc_character_miss_rate.asm:32 TAX
    case 0xC21C67: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/recalc_character_miss_rate.asm:33 SEP #PROC_FLAGS::ACCUM8
    case 0xC21C68: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/recalc_character_miss_rate.asm:34 LDA f:ITEM_CONFIGURATION_TABLE,X
    case 0xC21C6A: {
        Instruction step(cpu, 0xBF, 0xD57000u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/recalc_character_miss_rate.asm:35 REP #PROC_FLAGS::ACCUM8
    case 0xC21C6E: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/recalc_character_miss_rate.asm:36 SEC
    case 0xC21C70: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/battle/recalc_character_miss_rate.asm:37 AND #$00FF
    case 0xC21C71: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/recalc_character_miss_rate.asm:37 AND #$00FF
    // Overlapping static entry reached from 0xC21C71.
    case 0xC21C73: {
        Instruction step(cpu, 0x00, 0x0000E9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/recalc_character_miss_rate.asm:38 SBC #$0080
    case 0xC21C74: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x000080u : 0x000080u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/recalc_character_miss_rate.asm:38 SBC #$0080
    // Overlapping static entry reached from 0xC21C74.
    case 0xC21C76: {
        Instruction step(cpu, 0x00, 0x000049u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/recalc_character_miss_rate.asm:39 EOR #$FF80
    case 0xC21C77: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x49, narrow ? 0x000080u : 0x00FF80u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.xor_accumulator();
        return step.finish();
    }
    // src/battle/recalc_character_miss_rate.asm:39 EOR #$FF80
    // Overlapping static entry reached from 0xC21C77.
    case 0xC21C79: {
        Instruction step(cpu, 0xFF, 0xA90380u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/recalc_character_miss_rate.asm:40 BRA @UNKNOWN1
    case 0xC21C7A: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/recalc_character_miss_rate.asm:42 LDA #0
    case 0xC21C7C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/recalc_character_miss_rate.asm:42 LDA #0
    // Overlapping static entry reached from 0xC21C79.
    case 0xC21C7D: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/recalc_character_miss_rate.asm:42 LDA #0
    // Overlapping static entry reached from 0xC21C7C.
    case 0xC21C7E: {
        Instruction step(cpu, 0x00, 0x0000E2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/recalc_character_miss_rate.asm:44 SEP #PROC_FLAGS::ACCUM8
    case 0xC21C7F: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/recalc_character_miss_rate.asm:45 STA @LOCAL00
    case 0xC21C81: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/recalc_character_miss_rate.asm:46 LDY @LOCAL01
    case 0xC21C83: {
        Instruction step(cpu, 0xA4, 0x00000Fu, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/recalc_character_miss_rate.asm:47 REP #PROC_FLAGS::ACCUM8
    case 0xC21C85: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/recalc_character_miss_rate.asm:48 TYA
    case 0xC21C87: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/recalc_character_miss_rate.asm:49 LDY #.SIZEOF(char_struct)
    case 0xC21C88: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Eu : 0x00005Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/recalc_character_miss_rate.asm:49 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC21C88.
    case 0xC21C8A: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/recalc_character_miss_rate.asm:50 JSL MULT168
    case 0xC21C8B: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/recalc_character_miss_rate.asm:51 TAX
    case 0xC21C8F: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/recalc_character_miss_rate.asm:52 SEP #PROC_FLAGS::ACCUM8
    case 0xC21C90: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/recalc_character_miss_rate.asm:53 LDA @LOCAL00
    case 0xC21C92: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/recalc_character_miss_rate.asm:54 STA PARTY_CHARACTERS+char_struct::miss_rate,X
    case 0xC21C94: {
        Instruction step(cpu, 0x9D, 0x009CCFu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/recalc_character_miss_rate.asm:55 END_C_FUNCTION
    case 0xC21C97: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/recalc_character_miss_rate.asm:55 END_C_FUNCTION
    case 0xC21C98: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
