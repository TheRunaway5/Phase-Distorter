// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/battle/enemy_flashing_on.asm
bool resume_battle_enemy_flashing_on(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/enemy_flashing_on.asm:4 BEGIN_C_FUNCTION_FAR
    case 0xEF0052: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/enemy_flashing_on.asm:13 END_STACK_VARS
    case 0xEF0054: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/enemy_flashing_on.asm:13 END_STACK_VARS
    case 0xEF0055: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/enemy_flashing_on.asm:13 END_STACK_VARS
    case 0xEF0056: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/enemy_flashing_on.asm:13 END_STACK_VARS
    case 0xEF0057: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EEu : 0x00FFEEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/enemy_flashing_on.asm:13 END_STACK_VARS
    // Overlapping static entry reached from 0xEF0057.
    case 0xEF0059: {
        Instruction step(cpu, 0xFF, 0x86685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/enemy_flashing_on.asm:13 END_STACK_VARS
    case 0xEF005A: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/enemy_flashing_on.asm:13 END_STACK_VARS
    case 0xEF005B: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/battle/enemy_flashing_on.asm:14 STX @LOCAL01
    case 0xEF005C: {
        Instruction step(cpu, 0x86, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/enemy_flashing_on.asm:14 STX @LOCAL01
    // Overlapping static entry reached from 0xEF0059.
    case 0xEF005D: {
        Instruction step(cpu, 0x10, 0x000085u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // src/battle/enemy_flashing_on.asm:15 STA @LOCAL00
    case 0xEF005E: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/enemy_flashing_on.asm:15 STA @LOCAL00
    // Overlapping static entry reached from 0xEF005D.
    case 0xEF005F: {
        Instruction step(cpu, 0x0E, 0x00D0ADu, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // src/battle/enemy_flashing_on.asm:16 LDA CURRENT_FLASHING_ENEMY
    case 0xEF0060: {
        Instruction step(cpu, 0xAD, 0x0089D0u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/enemy_flashing_on.asm:16 LDA CURRENT_FLASHING_ENEMY
    // Overlapping static entry reached from 0xEF005F.
    case 0xEF0062: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x89, narrow ? 0x0000C9u : 0x00FFC9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.test_bits();
        return step.finish();
    }
    // src/battle/enemy_flashing_on.asm:17 CMP #$FFFF
    case 0xEF0063: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/enemy_flashing_on.asm:17 CMP #$FFFF
    // Overlapping static entry reached from 0xEF0062.
    case 0xEF0064: {
        Instruction step(cpu, 0xFF, 0x04F0FFu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/enemy_flashing_on.asm:17 CMP #$FFFF
    // Overlapping static entry reached from 0xEF0063.
    case 0xEF0065: {
        Instruction step(cpu, 0xFF, 0x2204F0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/enemy_flashing_on.asm:18 BEQ @UNKNOWN0
    case 0xEF0066: {
        Instruction step(cpu, 0xF0, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/enemy_flashing_on.asm:20 JSL ENEMY_FLASHING_OFF
    case 0xEF0068: {
        Instruction step(cpu, 0x22, 0xEF0000u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/enemy_flashing_on.asm:20 JSL ENEMY_FLASHING_OFF
    // Overlapping static entry reached from 0xEF0065.
    case 0xEF0069: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/enemy_flashing_on.asm:25 LDX @LOCAL01
    case 0xEF006C: {
        Instruction step(cpu, 0xA6, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/enemy_flashing_on.asm:26 STX CURRENT_FLASHING_ENEMY
    case 0xEF006E: {
        Instruction step(cpu, 0x8E, 0x0089D0u, 3u, AddressMode::Absolute);
        step.store_x();
        return step.finish();
    }
    // src/battle/enemy_flashing_on.asm:27 LDA @LOCAL00
    case 0xEF0071: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/enemy_flashing_on.asm:28 STA CURRENT_FLASHING_ENEMY_ROW
    case 0xEF0073: {
        Instruction step(cpu, 0x8D, 0x0089D2u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/enemy_flashing_on.asm:29 BEQ @UNKNOWN1
    case 0xEF0076: {
        Instruction step(cpu, 0xF0, 0x00001Au, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/enemy_flashing_on.asm:30 LDX CURRENT_FLASHING_ENEMY
    case 0xEF0078: {
        Instruction step(cpu, 0xAE, 0x0089D0u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/enemy_flashing_on.asm:31 LDA BACK_ROW_BATTLERS,X
    case 0xEF007B: {
        Instruction step(cpu, 0xBD, 0x00AD82u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/enemy_flashing_on.asm:32 AND #$00FF
    case 0xEF007E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/enemy_flashing_on.asm:32 AND #$00FF
    // Overlapping static entry reached from 0xEF007E.
    case 0xEF0080: {
        Instruction step(cpu, 0x00, 0x0000A0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/enemy_flashing_on.asm:33 LDY #.SIZEOF(battler)
    case 0xEF0081: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/enemy_flashing_on.asm:33 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xEF0081.
    case 0xEF0083: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/enemy_flashing_on.asm:34 JSL MULT168
    case 0xEF0084: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/enemy_flashing_on.asm:35 TAX
    case 0xEF0088: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/enemy_flashing_on.asm:36 SEP #PROC_FLAGS::ACCUM8
    case 0xEF0089: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/enemy_flashing_on.asm:37 LDA #1
    case 0xEF008B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x009D01u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/enemy_flashing_on.asm:38 STA BATTLERS_TABLE+battler::unknown74,X
    case 0xEF008D: {
        Instruction step(cpu, 0x9D, 0x009FF6u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/enemy_flashing_on.asm:38 STA BATTLERS_TABLE+battler::unknown74,X
    // Overlapping static entry reached from 0xEF008B.
    case 0xEF008E: {
        Instruction step(cpu, 0xF6, 0x00009Fu, 2u, AddressMode::DirectPageIndexedX);
        step.increment();
        return step.finish();
    }
    // src/battle/enemy_flashing_on.asm:39 BRA @UNKNOWN2
    case 0xEF0090: {
        Instruction step(cpu, 0x80, 0x000018u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/enemy_flashing_on.asm:42 LDX CURRENT_FLASHING_ENEMY
    case 0xEF0092: {
        Instruction step(cpu, 0xAE, 0x0089D0u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/enemy_flashing_on.asm:43 LDA FRONT_ROW_BATTLERS,X
    case 0xEF0095: {
        Instruction step(cpu, 0xBD, 0x00AD7Au, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/enemy_flashing_on.asm:44 AND #$00FF
    case 0xEF0098: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/enemy_flashing_on.asm:44 AND #$00FF
    // Overlapping static entry reached from 0xEF0098.
    case 0xEF009A: {
        Instruction step(cpu, 0x00, 0x0000A0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/enemy_flashing_on.asm:45 LDY #.SIZEOF(battler)
    case 0xEF009B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/enemy_flashing_on.asm:45 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xEF009B.
    case 0xEF009D: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/enemy_flashing_on.asm:46 JSL MULT168
    case 0xEF009E: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/enemy_flashing_on.asm:47 TAX
    case 0xEF00A2: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/enemy_flashing_on.asm:48 SEP #PROC_FLAGS::ACCUM8
    case 0xEF00A3: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/enemy_flashing_on.asm:49 LDA #1
    case 0xEF00A5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x009D01u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/enemy_flashing_on.asm:50 STA BATTLERS_TABLE+battler::unknown74,X
    case 0xEF00A7: {
        Instruction step(cpu, 0x9D, 0x009FF6u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/enemy_flashing_on.asm:50 STA BATTLERS_TABLE+battler::unknown74,X
    // Overlapping static entry reached from 0xEF00A5.
    case 0xEF00A8: {
        Instruction step(cpu, 0xF6, 0x00009Fu, 2u, AddressMode::DirectPageIndexedX);
        step.increment();
        return step.finish();
    }
    // src/battle/enemy_flashing_on.asm:50 STA BATTLERS_TABLE+battler::unknown74,X
    // Overlapping static entry reached from 0xEF05E1.
    case 0xEF00A9: {
        Instruction step(cpu, 0x9F, 0xA920C2u, 4u, AddressMode::LongIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/enemy_flashing_on.asm:52 REP #PROC_FLAGS::ACCUM8
    case 0xEF00AA: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/enemy_flashing_on.asm:53 LDA #1
    case 0xEF00AC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/enemy_flashing_on.asm:53 LDA #1
    // Overlapping static entry reached from 0xEF00A9.
    case 0xEF00AD: {
        Instruction step(cpu, 0x01, 0x000000u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/enemy_flashing_on.asm:53 LDA #1
    // Overlapping static entry reached from 0xEF00AC.
    case 0xEF00AE: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/enemy_flashing_on.asm:54 STA ENEMY_TARGETTING_FLASHING
    case 0xEF00AF: {
        Instruction step(cpu, 0x8D, 0x00ADA2u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/enemy_flashing_on.asm:55 SEP #PROC_FLAGS::ACCUM8
    case 0xEF00B2: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/enemy_flashing_on.asm:56 STA REDRAW_ALL_WINDOWS
    case 0xEF00B4: {
        Instruction step(cpu, 0x8D, 0x009623u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/enemy_flashing_on.asm:57 REP #PROC_FLAGS::ACCUM8
    case 0xEF00B7: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/enemy_flashing_on.asm:58 END_C_FUNCTION
    case 0xEF00B9: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/enemy_flashing_on.asm:58 END_C_FUNCTION
    case 0xEF00BA: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
