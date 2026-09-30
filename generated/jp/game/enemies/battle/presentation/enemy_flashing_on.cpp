// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/battle/enemy_flashing_on.asm
bool resume_battle_enemy_flashing_on(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/enemy_flashing_on.asm:6 BEGIN_C_FUNCTION
    case 0xC10DF2: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/enemy_flashing_on.asm:13 END_STACK_VARS
    case 0xC10DF4: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/enemy_flashing_on.asm:13 END_STACK_VARS
    case 0xC10DF5: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/enemy_flashing_on.asm:13 END_STACK_VARS
    case 0xC10DF6: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/enemy_flashing_on.asm:13 END_STACK_VARS
    case 0xC10DF7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EEu : 0x00FFEEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/enemy_flashing_on.asm:13 END_STACK_VARS
    // Overlapping static entry reached from 0xC10DF7.
    case 0xC10DF9: {
        Instruction step(cpu, 0xFF, 0x86685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/enemy_flashing_on.asm:13 END_STACK_VARS
    case 0xC10DFA: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/enemy_flashing_on.asm:13 END_STACK_VARS
    case 0xC10DFB: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/battle/enemy_flashing_on.asm:14 STX @LOCAL01
    case 0xC10DFC: {
        Instruction step(cpu, 0x86, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/enemy_flashing_on.asm:14 STX @LOCAL01
    // Overlapping static entry reached from 0xC10DF9.
    case 0xC10DFD: {
        Instruction step(cpu, 0x10, 0x000085u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // src/battle/enemy_flashing_on.asm:15 STA @LOCAL00
    case 0xC10DFE: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/enemy_flashing_on.asm:15 STA @LOCAL00
    // Overlapping static entry reached from 0xC10DFD.
    case 0xC10DFF: {
        Instruction step(cpu, 0x0E, 0x000EADu, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // src/battle/enemy_flashing_on.asm:16 LDA CURRENT_FLASHING_ENEMY
    case 0xC10E00: {
        Instruction step(cpu, 0xAD, 0x008D0Eu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/enemy_flashing_on.asm:16 LDA CURRENT_FLASHING_ENEMY
    // Overlapping static entry reached from 0xC10DFF.
    case 0xC10E02: {
        Instruction step(cpu, 0x8D, 0x00FFC9u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/enemy_flashing_on.asm:17 CMP #$FFFF
    case 0xC10E03: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/enemy_flashing_on.asm:17 CMP #$FFFF
    // Overlapping static entry reached from 0xC10E03.
    case 0xC10E05: {
        Instruction step(cpu, 0xFF, 0x2003F0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/enemy_flashing_on.asm:18 BEQ @UNKNOWN0
    case 0xC10E06: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/enemy_flashing_on.asm:22 JSR ENEMY_FLASHING_OFF
    case 0xC10E08: {
        Instruction step(cpu, 0x20, 0x000DA0u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/enemy_flashing_on.asm:22 JSR ENEMY_FLASHING_OFF
    // Overlapping static entry reached from 0xC10E05.
    case 0xC10E09: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00000Du : 0x00A60Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/enemy_flashing_on.asm:25 LDX @LOCAL01
    case 0xC10E0B: {
        Instruction step(cpu, 0xA6, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/enemy_flashing_on.asm:25 LDX @LOCAL01
    // Overlapping static entry reached from 0xC10E09.
    case 0xC10E0C: {
        Instruction step(cpu, 0x10, 0x00008Eu, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // src/battle/enemy_flashing_on.asm:26 STX CURRENT_FLASHING_ENEMY
    case 0xC10E0D: {
        Instruction step(cpu, 0x8E, 0x008D0Eu, 3u, AddressMode::Absolute);
        step.store_x();
        return step.finish();
    }
    // src/battle/enemy_flashing_on.asm:26 STX CURRENT_FLASHING_ENEMY
    // Overlapping static entry reached from 0xC10E0C.
    case 0xC10E0E: {
        Instruction step(cpu, 0x0E, 0x00A58Du, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // src/battle/enemy_flashing_on.asm:27 LDA @LOCAL00
    case 0xC10E10: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/enemy_flashing_on.asm:27 LDA @LOCAL00
    // Overlapping static entry reached from 0xC10E0E.
    case 0xC10E11: {
        Instruction step(cpu, 0x0E, 0x00108Du, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // src/battle/enemy_flashing_on.asm:28 STA CURRENT_FLASHING_ENEMY_ROW
    case 0xC10E12: {
        Instruction step(cpu, 0x8D, 0x008D10u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/enemy_flashing_on.asm:28 STA CURRENT_FLASHING_ENEMY_ROW
    // Overlapping static entry reached from 0xC10E11.
    case 0xC10E14: {
        Instruction step(cpu, 0x8D, 0x001AF0u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/enemy_flashing_on.asm:29 BEQ @UNKNOWN1
    case 0xC10E15: {
        Instruction step(cpu, 0xF0, 0x00001Au, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/enemy_flashing_on.asm:30 LDX CURRENT_FLASHING_ENEMY
    case 0xC10E17: {
        Instruction step(cpu, 0xAE, 0x008D0Eu, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/enemy_flashing_on.asm:31 LDA BACK_ROW_BATTLERS,X
    case 0xC10E1A: {
        Instruction step(cpu, 0xBD, 0x00AF57u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/enemy_flashing_on.asm:32 AND #$00FF
    case 0xC10E1D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/enemy_flashing_on.asm:32 AND #$00FF
    // Overlapping static entry reached from 0xC10E1D.
    case 0xC10E1F: {
        Instruction step(cpu, 0x00, 0x0000A0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/enemy_flashing_on.asm:33 LDY #.SIZEOF(battler)
    case 0xC10E20: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/enemy_flashing_on.asm:33 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC10E20.
    case 0xC10E22: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/enemy_flashing_on.asm:34 JSL MULT168
    case 0xC10E23: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/enemy_flashing_on.asm:35 TAX
    case 0xC10E27: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/enemy_flashing_on.asm:36 SEP #PROC_FLAGS::ACCUM8
    case 0xC10E28: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/enemy_flashing_on.asm:37 LDA #1
    case 0xC10E2A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x009D01u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/enemy_flashing_on.asm:38 STA BATTLERS_TABLE+battler::unknown74,X
    case 0xC10E2C: {
        Instruction step(cpu, 0x9D, 0x00A1F8u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/enemy_flashing_on.asm:38 STA BATTLERS_TABLE+battler::unknown74,X
    // Overlapping static entry reached from 0xC10E2A.
    case 0xC10E2D: {
        Instruction step(cpu, 0xF8, 0x000000u, 1u, AddressMode::Implied);
        step.set_decimal();
        return step.finish();
    }
    // src/battle/enemy_flashing_on.asm:38 STA BATTLERS_TABLE+battler::unknown74,X
    // Overlapping static entry reached from 0xC10E2D.
    case 0xC10E2E: {
        Instruction step(cpu, 0xA1, 0x000080u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/enemy_flashing_on.asm:39 BRA @UNKNOWN2
    case 0xC10E2F: {
        Instruction step(cpu, 0x80, 0x000018u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/enemy_flashing_on.asm:39 BRA @UNKNOWN2
    // Overlapping static entry reached from 0xC10E2E.
    case 0xC10E30: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/enemy_flashing_on.asm:42 LDX CURRENT_FLASHING_ENEMY
    case 0xC10E31: {
        Instruction step(cpu, 0xAE, 0x008D0Eu, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/enemy_flashing_on.asm:43 LDA FRONT_ROW_BATTLERS,X
    case 0xC10E34: {
        Instruction step(cpu, 0xBD, 0x00AF4Fu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/enemy_flashing_on.asm:44 AND #$00FF
    case 0xC10E37: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/enemy_flashing_on.asm:44 AND #$00FF
    // Overlapping static entry reached from 0xC10E37.
    case 0xC10E39: {
        Instruction step(cpu, 0x00, 0x0000A0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/enemy_flashing_on.asm:45 LDY #.SIZEOF(battler)
    case 0xC10E3A: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/enemy_flashing_on.asm:45 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC10E3A.
    case 0xC10E3C: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/enemy_flashing_on.asm:46 JSL MULT168
    case 0xC10E3D: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/enemy_flashing_on.asm:47 TAX
    case 0xC10E41: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/enemy_flashing_on.asm:48 SEP #PROC_FLAGS::ACCUM8
    case 0xC10E42: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/enemy_flashing_on.asm:49 LDA #1
    case 0xC10E44: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x009D01u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/enemy_flashing_on.asm:50 STA BATTLERS_TABLE+battler::unknown74,X
    case 0xC10E46: {
        Instruction step(cpu, 0x9D, 0x00A1F8u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/enemy_flashing_on.asm:50 STA BATTLERS_TABLE+battler::unknown74,X
    // Overlapping static entry reached from 0xC10E44.
    case 0xC10E47: {
        Instruction step(cpu, 0xF8, 0x000000u, 1u, AddressMode::Implied);
        step.set_decimal();
        return step.finish();
    }
    // src/battle/enemy_flashing_on.asm:50 STA BATTLERS_TABLE+battler::unknown74,X
    // Overlapping static entry reached from 0xC10E47.
    case 0xC10E48: {
        Instruction step(cpu, 0xA1, 0x0000C2u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/enemy_flashing_on.asm:52 REP #PROC_FLAGS::ACCUM8
    case 0xC10E49: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/enemy_flashing_on.asm:52 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC10E48.
    case 0xC10E4A: {
        Instruction step(cpu, 0x20, 0x0001A9u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/enemy_flashing_on.asm:53 LDA #1
    case 0xC10E4B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/enemy_flashing_on.asm:53 LDA #1
    // Overlapping static entry reached from 0xC10E4B.
    case 0xC10E4D: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/enemy_flashing_on.asm:54 STA ENEMY_TARGETTING_FLASHING
    case 0xC10E4E: {
        Instruction step(cpu, 0x8D, 0x00AF77u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/enemy_flashing_on.asm:55 SEP #PROC_FLAGS::ACCUM8
    case 0xC10E51: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/enemy_flashing_on.asm:56 STA REDRAW_ALL_WINDOWS
    case 0xC10E53: {
        Instruction step(cpu, 0x8D, 0x00991Bu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/enemy_flashing_on.asm:57 REP #PROC_FLAGS::ACCUM8
    case 0xC10E56: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/enemy_flashing_on.asm:58 END_C_FUNCTION
    case 0xC10E58: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/enemy_flashing_on.asm:58 END_C_FUNCTION
    case 0xC10E59: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
