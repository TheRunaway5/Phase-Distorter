// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/battle/actions/handbag_strap.asm
bool resume_battle_actions_handbag_strap(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/handbag_strap.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2A5EC: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/actions/handbag_strap.asm:7 END_STACK_VARS
    case 0xC2A5EE: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/actions/handbag_strap.asm:7 END_STACK_VARS
    case 0xC2A5EF: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/handbag_strap.asm:7 END_STACK_VARS
    case 0xC2A5F0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000ECu : 0x00FFECu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/handbag_strap.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC2A5F0.
    case 0xC2A5F2: {
        Instruction step(cpu, 0xFF, 0xFD205Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/actions/handbag_strap.asm:7 END_STACK_VARS
    case 0xC2A5F3: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/battle/actions/handbag_strap.asm:8 JSR FAIL_ATTACK_ON_NPCS
    case 0xC2A5F4: {
        Instruction step(cpu, 0x20, 0x007CFDu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/handbag_strap.asm:8 JSR FAIL_ATTACK_ON_NPCS
    // Overlapping static entry reached from 0xC2A5F2.
    case 0xC2A5F6: {
        Instruction step(cpu, 0x7C, 0x0000C9u, 3u, AddressMode::AbsoluteIndexedIndirectX);
        step.jump();
        return step.finish();
    }
    // src/battle/actions/handbag_strap.asm:9 CMP #0
    case 0xC2A5F7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/handbag_strap.asm:9 CMP #0
    // Overlapping static entry reached from 0xC2A5F7.
    case 0xC2A5F9: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/handbag_strap.asm:10 BNE @UNKNOWN3
    case 0xC2A5FA: {
        Instruction step(cpu, 0xD0, 0x00005Au, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/actions/handbag_strap.asm:11 LDA #250
    case 0xC2A5FC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FAu : 0x0000FAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/handbag_strap.asm:11 LDA #250
    // Overlapping static entry reached from 0xC2A5FC.
    case 0xC2A5FE: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/handbag_strap.asm:12 JSR SUCCESS_SPEED
    case 0xC2A5FF: {
        Instruction step(cpu, 0x20, 0x007CAFu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/handbag_strap.asm:13 CMP #0
    case 0xC2A602: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/handbag_strap.asm:13 CMP #0
    // Overlapping static entry reached from 0xC2A602.
    case 0xC2A604: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/handbag_strap.asm:14 BEQ @UNKNOWN2
    case 0xC2A605: {
        Instruction step(cpu, 0xF0, 0x000041u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/actions/handbag_strap.asm:15 LDX CURRENT_TARGET
    case 0xC2A607: {
        Instruction step(cpu, 0xAE, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/handbag_strap.asm:16 LDA #HANDBAG_STRAP_BASE_DAMAGE
    case 0xC2A60A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000064u : 0x000064u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/handbag_strap.asm:16 LDA #HANDBAG_STRAP_BASE_DAMAGE
    // Overlapping static entry reached from 0xC2A60A.
    case 0xC2A60C: {
        Instruction step(cpu, 0x00, 0x000038u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/handbag_strap.asm:17 SEC
    case 0xC2A60D: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/battle/actions/handbag_strap.asm:18 SBC a:battler::defense,X
    case 0xC2A60E: {
        Instruction step(cpu, 0xFD, 0x000028u, 3u, AddressMode::AbsoluteIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/actions/handbag_strap.asm:19 STA @LOCAL01
    case 0xC2A611: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/handbag_strap.asm:20 CLC
    case 0xC2A613: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/actions/handbag_strap.asm:21 SBC #0
    case 0xC2A614: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/actions/handbag_strap.asm:21 SBC #0
    // Overlapping static entry reached from 0xC2A614.
    case 0xC2A616: {
        Instruction step(cpu, 0x00, 0x000050u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:807 BVC :+
    // Macro caller: src/battle/actions/handbag_strap.asm:22 BRANCHLTEQS @UNKNOWN2
    case 0xC2A617: {
        Instruction step(cpu, 0x50, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_clear();
        return step.finish();
    }
    // include/macros.asm:808 BPL dest
    // Macro caller: src/battle/actions/handbag_strap.asm:22 BRANCHLTEQS @UNKNOWN2
    case 0xC2A619: {
        Instruction step(cpu, 0x10, 0x00002Du, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:808 BPL dest
    // Macro caller: src/battle/actions/handbag_strap.asm:22 BRANCHLTEQS @UNKNOWN2
    // Overlapping static entry reached from 0xC245B2.
    case 0xC2A61A: {
        Instruction step(cpu, 0x2D, 0x000280u, 3u, AddressMode::Absolute);
        step.and_accumulator();
        return step.finish();
    }
    // include/macros.asm:809 BRA :++
    // Macro caller: src/battle/actions/handbag_strap.asm:22 BRANCHLTEQS @UNKNOWN2
    case 0xC2A61B: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:811 BMI dest
    // Macro caller: src/battle/actions/handbag_strap.asm:22 BRANCHLTEQS @UNKNOWN2
    case 0xC2A61D: {
        Instruction step(cpu, 0x30, 0x000029u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/battle/actions/handbag_strap.asm:23 LDX #$00FF
    case 0xC2A61F: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/handbag_strap.asm:23 LDX #$00FF
    // Overlapping static entry reached from 0xC2A61F.
    case 0xC2A621: {
        Instruction step(cpu, 0x00, 0x0000A5u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/handbag_strap.asm:24 LDA @LOCAL01
    case 0xC2A622: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/handbag_strap.asm:25 JSR CALC_RESIST_DAMAGE
    case 0xC2A624: {
        Instruction step(cpu, 0x20, 0x008125u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/handbag_strap.asm:26 LDY #STATUS_2::SOLIDIFIED
    case 0xC2A627: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/actions/handbag_strap.asm:26 LDY #STATUS_2::SOLIDIFIED
    // Overlapping static entry reached from 0xC2A627.
    case 0xC2A629: {
        Instruction step(cpu, 0x00, 0x0000A2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/handbag_strap.asm:27 LDX #STATUS_GROUP::TEMPORARY
    case 0xC2A62A: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/handbag_strap.asm:27 LDX #STATUS_GROUP::TEMPORARY
    // Overlapping static entry reached from 0xC2A62A.
    case 0xC2A62C: {
        Instruction step(cpu, 0x00, 0x0000ADu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/handbag_strap.asm:28 LDA CURRENT_TARGET
    case 0xC2A62D: {
        Instruction step(cpu, 0xAD, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/handbag_strap.asm:29 JSR INFLICT_STATUS_BATTLE
    case 0xC2A630: {
        Instruction step(cpu, 0x20, 0x00724Au, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/handbag_strap.asm:30 CMP #0
    case 0xC2A633: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/handbag_strap.asm:30 CMP #0
    // Overlapping static entry reached from 0xC2A633.
    case 0xC2A635: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/handbag_strap.asm:31 BEQ @UNKNOWN3
    case 0xC2A636: {
        Instruction step(cpu, 0xF0, 0x00001Eu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/handbag_strap.asm:32 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KOORI_ON
    case 0xC2A638: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000EFu : 0x006BEFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/handbag_strap.asm:32 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KOORI_ON
    // Overlapping static entry reached from 0xC2A638.
    case 0xC2A63A: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/handbag_strap.asm:32 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KOORI_ON
    case 0xC2A63B: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/handbag_strap.asm:32 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KOORI_ON
    case 0xC2A63D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000EFu : 0x0000EFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/handbag_strap.asm:32 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KOORI_ON
    // Overlapping static entry reached from 0xC2A63D.
    case 0xC2A63F: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/handbag_strap.asm:32 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KOORI_ON
    case 0xC2A640: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/handbag_strap.asm:32 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KOORI_ON
    case 0xC2A642: {
        Instruction step(cpu, 0x22, 0xC1DC1Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/handbag_strap.asm:33 BRA @UNKNOWN3
    case 0xC2A646: {
        Instruction step(cpu, 0x80, 0x00000Eu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/handbag_strap.asm:35 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC2A648: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00006Eu : 0x00766Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/handbag_strap.asm:35 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    // Overlapping static entry reached from 0xC2A648.
    case 0xC2A64A: {
        Instruction step(cpu, 0x76, 0x000085u, 2u, AddressMode::DirectPageIndexedX);
        step.rotate_right();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/handbag_strap.asm:35 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC2A64B: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/handbag_strap.asm:35 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    // Overlapping static entry reached from 0xC2A64A.
    case 0xC2A64C: {
        Instruction step(cpu, 0x0E, 0x00EFA9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/handbag_strap.asm:35 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC2A64D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000EFu : 0x0000EFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/handbag_strap.asm:35 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    // Overlapping static entry reached from 0xC2A64D.
    case 0xC2A64F: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/handbag_strap.asm:35 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC2A650: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/handbag_strap.asm:35 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC2A652: {
        Instruction step(cpu, 0x22, 0xC1DC1Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/handbag_strap.asm:35 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    // Overlapping static entry reached from 0xC2A6B9.
    case 0xC2A653: {
        Instruction step(cpu, 0x1C, 0x00C1DCu, 3u, AddressMode::Absolute);
        step.reset_tested_bits();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/actions/handbag_strap.asm:37 END_C_FUNCTION
    case 0xC2A656: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/handbag_strap.asm:37 END_C_FUNCTION
    case 0xC2A657: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
