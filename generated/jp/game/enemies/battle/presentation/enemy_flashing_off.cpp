// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/battle/enemy_flashing_off.asm
bool resume_battle_enemy_flashing_off(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/enemy_flashing_off.asm:6 BEGIN_C_FUNCTION
    case 0xC10DA0: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/enemy_flashing_off.asm:8 LDA CURRENT_FLASHING_ENEMY
    case 0xC10DA2: {
        Instruction step(cpu, 0xAD, 0x008D0Eu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/enemy_flashing_off.asm:9 CMP #$FFFF
    case 0xC10DA5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/enemy_flashing_off.asm:9 CMP #$FFFF
    // Overlapping static entry reached from 0xC10DA5.
    case 0xC10DA7: {
        Instruction step(cpu, 0xFF, 0xAD45F0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/enemy_flashing_off.asm:10 BEQ @UNKNOWN2
    case 0xC10DA8: {
        Instruction step(cpu, 0xF0, 0x000045u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/enemy_flashing_off.asm:11 LDA CURRENT_FLASHING_ENEMY_ROW
    case 0xC10DAA: {
        Instruction step(cpu, 0xAD, 0x008D10u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/enemy_flashing_off.asm:11 LDA CURRENT_FLASHING_ENEMY_ROW
    // Overlapping static entry reached from 0xC10DA7.
    case 0xC10DAB: {
        Instruction step(cpu, 0x10, 0x00008Du, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // src/battle/enemy_flashing_off.asm:12 BEQ @UNKNOWN0
    case 0xC10DAD: {
        Instruction step(cpu, 0xF0, 0x000018u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/enemy_flashing_off.asm:13 LDX CURRENT_FLASHING_ENEMY
    case 0xC10DAF: {
        Instruction step(cpu, 0xAE, 0x008D0Eu, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/enemy_flashing_off.asm:14 LDA BACK_ROW_BATTLERS,X
    case 0xC10DB2: {
        Instruction step(cpu, 0xBD, 0x00AF57u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/enemy_flashing_off.asm:15 AND #$00FF
    case 0xC10DB5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/enemy_flashing_off.asm:15 AND #$00FF
    // Overlapping static entry reached from 0xC10DB5.
    case 0xC10DB7: {
        Instruction step(cpu, 0x00, 0x0000A0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/enemy_flashing_off.asm:16 LDY #.SIZEOF(battler)
    case 0xC10DB8: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/enemy_flashing_off.asm:16 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC10DB8.
    case 0xC10DBA: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/enemy_flashing_off.asm:17 JSL MULT168
    case 0xC10DBB: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/enemy_flashing_off.asm:18 TAX
    case 0xC10DBF: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/enemy_flashing_off.asm:19 SEP #PROC_FLAGS::ACCUM8
    case 0xC10DC0: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/enemy_flashing_off.asm:20 STZ BATTLERS_TABLE+74,X
    case 0xC10DC2: {
        Instruction step(cpu, 0x9E, 0x00A1F8u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/enemy_flashing_off.asm:21 BRA @UNKNOWN1
    case 0xC10DC5: {
        Instruction step(cpu, 0x80, 0x000016u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/enemy_flashing_off.asm:24 LDX CURRENT_FLASHING_ENEMY
    case 0xC10DC7: {
        Instruction step(cpu, 0xAE, 0x008D0Eu, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/enemy_flashing_off.asm:25 LDA FRONT_ROW_BATTLERS,X
    case 0xC10DCA: {
        Instruction step(cpu, 0xBD, 0x00AF4Fu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/enemy_flashing_off.asm:26 AND #$00FF
    case 0xC10DCD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/enemy_flashing_off.asm:26 AND #$00FF
    // Overlapping static entry reached from 0xC10DCD.
    case 0xC10DCF: {
        Instruction step(cpu, 0x00, 0x0000A0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/enemy_flashing_off.asm:27 LDY #.SIZEOF(battler)
    case 0xC10DD0: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/enemy_flashing_off.asm:27 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC10DD0.
    case 0xC10DD2: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/enemy_flashing_off.asm:28 JSL MULT168
    case 0xC10DD3: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/enemy_flashing_off.asm:29 TAX
    case 0xC10DD7: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/enemy_flashing_off.asm:30 SEP #PROC_FLAGS::ACCUM8
    case 0xC10DD8: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/enemy_flashing_off.asm:31 STZ BATTLERS_TABLE+74,X
    case 0xC10DDA: {
        Instruction step(cpu, 0x9E, 0x00A1F8u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/enemy_flashing_off.asm:33 REP #PROC_FLAGS::ACCUM8
    case 0xC10DDD: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/enemy_flashing_off.asm:34 STZ ENEMY_TARGETTING_FLASHING
    case 0xC10DDF: {
        Instruction step(cpu, 0x9C, 0x00AF77u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/enemy_flashing_off.asm:35 LDA #$FFFF
    case 0xC10DE2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/enemy_flashing_off.asm:35 LDA #$FFFF
    // Overlapping static entry reached from 0xC10DE2.
    case 0xC10DE4: {
        Instruction step(cpu, 0xFF, 0x8D0E8Du, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/enemy_flashing_off.asm:36 STA CURRENT_FLASHING_ENEMY
    case 0xC10DE5: {
        Instruction step(cpu, 0x8D, 0x008D0Eu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/enemy_flashing_off.asm:37 SEP #PROC_FLAGS::ACCUM8
    case 0xC10DE8: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/enemy_flashing_off.asm:38 LDA #$0001
    case 0xC10DEA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x008D01u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/enemy_flashing_off.asm:39 STA REDRAW_ALL_WINDOWS
    case 0xC10DEC: {
        Instruction step(cpu, 0x8D, 0x00991Bu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/enemy_flashing_off.asm:39 STA REDRAW_ALL_WINDOWS
    // Overlapping static entry reached from 0xC10DEA.
    case 0xC10DED: {
        Instruction step(cpu, 0x1B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_stack();
        return step.finish();
    }
    // src/battle/enemy_flashing_off.asm:39 STA REDRAW_ALL_WINDOWS
    // Overlapping static entry reached from 0xC10DED.
    case 0xC10DEE: {
        Instruction step(cpu, 0x99, 0x0020C2u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/enemy_flashing_off.asm:41 REP #PROC_FLAGS::ACCUM8
    case 0xC10DEF: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/enemy_flashing_off.asm:42 END_C_FUNCTION
    case 0xC10DF1: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
