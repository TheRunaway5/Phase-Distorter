// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/battle/enemy_flashing_off.asm
bool resume_battle_enemy_flashing_off(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/enemy_flashing_off.asm:4 BEGIN_C_FUNCTION_FAR
    case 0xEF0000: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/enemy_flashing_off.asm:8 LDA CURRENT_FLASHING_ENEMY
    case 0xEF0002: {
        Instruction step(cpu, 0xAD, 0x0089D0u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/enemy_flashing_off.asm:9 CMP #$FFFF
    case 0xEF0005: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/enemy_flashing_off.asm:9 CMP #$FFFF
    // Overlapping static entry reached from 0xEF0005.
    case 0xEF0007: {
        Instruction step(cpu, 0xFF, 0xAD45F0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/enemy_flashing_off.asm:10 BEQ @UNKNOWN2
    case 0xEF0008: {
        Instruction step(cpu, 0xF0, 0x000045u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/enemy_flashing_off.asm:11 LDA CURRENT_FLASHING_ENEMY_ROW
    case 0xEF000A: {
        Instruction step(cpu, 0xAD, 0x0089D2u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/enemy_flashing_off.asm:11 LDA CURRENT_FLASHING_ENEMY_ROW
    // Overlapping static entry reached from 0xEF0007.
    case 0xEF000B: {
        Instruction step(cpu, 0xD2, 0x000089u, 2u, AddressMode::DirectPageIndirect);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/enemy_flashing_off.asm:12 BEQ @UNKNOWN0
    case 0xEF000D: {
        Instruction step(cpu, 0xF0, 0x000018u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/enemy_flashing_off.asm:13 LDX CURRENT_FLASHING_ENEMY
    case 0xEF000F: {
        Instruction step(cpu, 0xAE, 0x0089D0u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/enemy_flashing_off.asm:14 LDA BACK_ROW_BATTLERS,X
    case 0xEF0012: {
        Instruction step(cpu, 0xBD, 0x00AD82u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/enemy_flashing_off.asm:15 AND #$00FF
    case 0xEF0015: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/enemy_flashing_off.asm:15 AND #$00FF
    // Overlapping static entry reached from 0xEF0015.
    case 0xEF0017: {
        Instruction step(cpu, 0x00, 0x0000A0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/enemy_flashing_off.asm:16 LDY #.SIZEOF(battler)
    case 0xEF0018: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/enemy_flashing_off.asm:16 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xEF0018.
    case 0xEF001A: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/enemy_flashing_off.asm:17 JSL MULT168
    case 0xEF001B: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/enemy_flashing_off.asm:18 TAX
    case 0xEF001F: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/enemy_flashing_off.asm:19 SEP #PROC_FLAGS::ACCUM8
    case 0xEF0020: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/enemy_flashing_off.asm:20 STZ BATTLERS_TABLE+74,X
    case 0xEF0022: {
        Instruction step(cpu, 0x9E, 0x009FF6u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/enemy_flashing_off.asm:21 BRA @UNKNOWN1
    case 0xEF0025: {
        Instruction step(cpu, 0x80, 0x000016u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/enemy_flashing_off.asm:24 LDX CURRENT_FLASHING_ENEMY
    case 0xEF0027: {
        Instruction step(cpu, 0xAE, 0x0089D0u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/enemy_flashing_off.asm:25 LDA FRONT_ROW_BATTLERS,X
    case 0xEF002A: {
        Instruction step(cpu, 0xBD, 0x00AD7Au, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/enemy_flashing_off.asm:26 AND #$00FF
    case 0xEF002D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/enemy_flashing_off.asm:26 AND #$00FF
    // Overlapping static entry reached from 0xEF002D.
    case 0xEF002F: {
        Instruction step(cpu, 0x00, 0x0000A0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/enemy_flashing_off.asm:27 LDY #.SIZEOF(battler)
    case 0xEF0030: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/enemy_flashing_off.asm:27 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xEF0030.
    case 0xEF0032: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/enemy_flashing_off.asm:28 JSL MULT168
    case 0xEF0033: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/enemy_flashing_off.asm:29 TAX
    case 0xEF0037: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/enemy_flashing_off.asm:30 SEP #PROC_FLAGS::ACCUM8
    case 0xEF0038: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/enemy_flashing_off.asm:31 STZ BATTLERS_TABLE+74,X
    case 0xEF003A: {
        Instruction step(cpu, 0x9E, 0x009FF6u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/enemy_flashing_off.asm:33 REP #PROC_FLAGS::ACCUM8
    case 0xEF003D: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/enemy_flashing_off.asm:34 STZ ENEMY_TARGETTING_FLASHING
    case 0xEF003F: {
        Instruction step(cpu, 0x9C, 0x00ADA2u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/enemy_flashing_off.asm:35 LDA #$FFFF
    case 0xEF0042: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/enemy_flashing_off.asm:35 LDA #$FFFF
    // Overlapping static entry reached from 0xEF0042.
    case 0xEF0044: {
        Instruction step(cpu, 0xFF, 0x89D08Du, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/enemy_flashing_off.asm:36 STA CURRENT_FLASHING_ENEMY
    case 0xEF0045: {
        Instruction step(cpu, 0x8D, 0x0089D0u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/enemy_flashing_off.asm:37 SEP #PROC_FLAGS::ACCUM8
    case 0xEF0048: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/enemy_flashing_off.asm:38 LDA #$0001
    case 0xEF004A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x008D01u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/enemy_flashing_off.asm:39 STA REDRAW_ALL_WINDOWS
    case 0xEF004C: {
        Instruction step(cpu, 0x8D, 0x009623u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/enemy_flashing_off.asm:39 STA REDRAW_ALL_WINDOWS
    // Overlapping static entry reached from 0xEF004A.
    case 0xEF004D: {
        Instruction step(cpu, 0x23, 0x000096u, 2u, AddressMode::StackRelative);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/enemy_flashing_off.asm:41 REP #PROC_FLAGS::ACCUM8
    case 0xEF004F: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/enemy_flashing_off.asm:42 END_C_FUNCTION
    case 0xEF0051: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
