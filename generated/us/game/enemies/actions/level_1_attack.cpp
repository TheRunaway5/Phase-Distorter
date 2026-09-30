// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/battle/actions/level_1_attack.asm
bool resume_battle_actions_level_1_attack(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/level_1_attack.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC286CB: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/actions/level_1_attack.asm:7 END_STACK_VARS
    case 0xC286CD: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/actions/level_1_attack.asm:7 END_STACK_VARS
    case 0xC286CE: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/level_1_attack.asm:7 END_STACK_VARS
    case 0xC286CF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000ECu : 0x00FFECu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/level_1_attack.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC286CF.
    case 0xC286D1: {
        Instruction step(cpu, 0xFF, 0x00A95Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/actions/level_1_attack.asm:7 END_STACK_VARS
    case 0xC286D2: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/battle/actions/level_1_attack.asm:8 LDA #0
    case 0xC286D3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/level_1_attack.asm:8 LDA #0
    // Overlapping static entry reached from 0xC286D3.
    case 0xC286D5: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/level_1_attack.asm:9 JSR MISS_CALC
    case 0xC286D6: {
        Instruction step(cpu, 0x20, 0x0082F8u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/level_1_attack.asm:10 CMP #0
    case 0xC286D9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/level_1_attack.asm:10 CMP #0
    // Overlapping static entry reached from 0xC286D9.
    case 0xC286DB: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/level_1_attack.asm:11 BNE @UNKNOWN7
    case 0xC286DC: {
        Instruction step(cpu, 0xD0, 0x000060u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/actions/level_1_attack.asm:12 JSR SMAAAASH
    case 0xC286DE: {
        Instruction step(cpu, 0x20, 0x0083F8u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/level_1_attack.asm:13 CMP #0
    case 0xC286E1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/level_1_attack.asm:13 CMP #0
    // Overlapping static entry reached from 0xC286E1.
    case 0xC286E3: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/level_1_attack.asm:14 BNE @UNKNOWN7
    case 0xC286E4: {
        Instruction step(cpu, 0xD0, 0x000058u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/actions/level_1_attack.asm:15 JSR DETERMINE_DODGE
    case 0xC286E6: {
        Instruction step(cpu, 0x20, 0x0084ADu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/level_1_attack.asm:15 JSR DETERMINE_DODGE
    // Overlapping static entry reached from 0xC2EBC0.
    case 0xC286E8: {
        Instruction step(cpu, 0x84, 0x0000C9u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/actions/level_1_attack.asm:16 CMP #0
    case 0xC286E9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/level_1_attack.asm:16 CMP #0
    // Overlapping static entry reached from 0xC286E8.
    case 0xC286EA: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/level_1_attack.asm:16 CMP #0
    // Overlapping static entry reached from 0xC286E9.
    case 0xC286EB: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/level_1_attack.asm:17 BNE @UNKNOWN6
    case 0xC286EC: {
        Instruction step(cpu, 0xD0, 0x000042u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/actions/level_1_attack.asm:18 LDX CURRENT_ATTACKER
    case 0xC286EE: {
        Instruction step(cpu, 0xAE, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/level_1_attack.asm:19 LDA a:battler::offense,X
    case 0xC286F1: {
        Instruction step(cpu, 0xBD, 0x000026u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/level_1_attack.asm:20 LDX CURRENT_TARGET
    case 0xC286F4: {
        Instruction step(cpu, 0xAE, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/level_1_attack.asm:21 SEC
    case 0xC286F7: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/battle/actions/level_1_attack.asm:22 SBC a:battler::defense,X
    case 0xC286F8: {
        Instruction step(cpu, 0xFD, 0x000028u, 3u, AddressMode::AbsoluteIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/actions/level_1_attack.asm:23 STA @LOCAL01
    case 0xC286FB: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/level_1_attack.asm:24 CLC
    case 0xC286FD: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/actions/level_1_attack.asm:25 SBC #0
    case 0xC286FE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/actions/level_1_attack.asm:25 SBC #0
    // Overlapping static entry reached from 0xC286FE.
    case 0xC28700: {
        Instruction step(cpu, 0x00, 0x000050u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:807 BVC :+
    // Macro caller: src/battle/actions/level_1_attack.asm:26 BRANCHLTEQS @UNKNOWN2
    case 0xC28701: {
        Instruction step(cpu, 0x50, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_clear();
        return step.finish();
    }
    // include/macros.asm:808 BPL dest
    // Macro caller: src/battle/actions/level_1_attack.asm:26 BRANCHLTEQS @UNKNOWN2
    case 0xC28703: {
        Instruction step(cpu, 0x10, 0x00000Bu, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:809 BRA :++
    // Macro caller: src/battle/actions/level_1_attack.asm:26 BRANCHLTEQS @UNKNOWN2
    case 0xC28705: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:811 BMI dest
    // Macro caller: src/battle/actions/level_1_attack.asm:26 BRANCHLTEQS @UNKNOWN2
    case 0xC28707: {
        Instruction step(cpu, 0x30, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/battle/actions/level_1_attack.asm:27 LDA @LOCAL01
    case 0xC28709: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/level_1_attack.asm:28 JSR TWENTY_FIVE_PERCENT_VARIANCE
    case 0xC2870B: {
        Instruction step(cpu, 0x20, 0x006AFDu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/level_1_attack.asm:29 STA @LOCAL01
    case 0xC2870E: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/level_1_attack.asm:31 LDA @LOCAL01
    case 0xC28710: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/level_1_attack.asm:32 CLC
    case 0xC28712: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/actions/level_1_attack.asm:33 SBC #0
    case 0xC28713: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/actions/level_1_attack.asm:33 SBC #0
    // Overlapping static entry reached from 0xC28713.
    case 0xC28715: {
        Instruction step(cpu, 0x00, 0x000070u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:798 BVS :+
    // Macro caller: src/battle/actions/level_1_attack.asm:34 BRANCHGTS @UNKNOWN5
    case 0xC28716: {
        Instruction step(cpu, 0x70, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_set();
        return step.finish();
    }
    // include/macros.asm:799 BPL dest
    // Macro caller: src/battle/actions/level_1_attack.asm:34 BRANCHGTS @UNKNOWN5
    case 0xC28718: {
        Instruction step(cpu, 0x10, 0x000009u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:800 BRA :++
    // Macro caller: src/battle/actions/level_1_attack.asm:34 BRANCHGTS @UNKNOWN5
    case 0xC2871A: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:802 BMI dest
    // Macro caller: src/battle/actions/level_1_attack.asm:34 BRANCHGTS @UNKNOWN5
    case 0xC2871C: {
        Instruction step(cpu, 0x30, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/battle/actions/level_1_attack.asm:35 LDA #1
    case 0xC2871E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/level_1_attack.asm:35 LDA #1
    // Overlapping static entry reached from 0xC2871E.
    case 0xC28720: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/level_1_attack.asm:36 STA @LOCAL01
    case 0xC28721: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/level_1_attack.asm:38 LDX #$00FF
    case 0xC28723: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/level_1_attack.asm:38 LDX #$00FF
    // Overlapping static entry reached from 0xC28723.
    case 0xC28725: {
        Instruction step(cpu, 0x00, 0x0000A5u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/level_1_attack.asm:39 LDA @LOCAL01
    case 0xC28726: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/level_1_attack.asm:40 JSR CALC_RESIST_DAMAGE
    case 0xC28728: {
        Instruction step(cpu, 0x20, 0x008125u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/level_1_attack.asm:41 JSR HEAL_STRANGENESS
    case 0xC2872B: {
        Instruction step(cpu, 0x20, 0x00856Bu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/level_1_attack.asm:42 BRA @UNKNOWN7
    case 0xC2872E: {
        Instruction step(cpu, 0x80, 0x00000Eu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/level_1_attack.asm:44 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TATAKU_YOKETA
    case 0xC28730: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000055u : 0x007655u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/level_1_attack.asm:44 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TATAKU_YOKETA
    // Overlapping static entry reached from 0xC28730.
    case 0xC28732: {
        Instruction step(cpu, 0x76, 0x000085u, 2u, AddressMode::DirectPageIndexedX);
        step.rotate_right();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/level_1_attack.asm:44 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TATAKU_YOKETA
    case 0xC28733: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/level_1_attack.asm:44 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TATAKU_YOKETA
    // Overlapping static entry reached from 0xC28732.
    case 0xC28734: {
        Instruction step(cpu, 0x0E, 0x00EFA9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/level_1_attack.asm:44 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TATAKU_YOKETA
    case 0xC28735: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000EFu : 0x0000EFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/level_1_attack.asm:44 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TATAKU_YOKETA
    // Overlapping static entry reached from 0xC28735.
    case 0xC28737: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/level_1_attack.asm:44 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TATAKU_YOKETA
    case 0xC28738: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/level_1_attack.asm:44 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TATAKU_YOKETA
    case 0xC2873A: {
        Instruction step(cpu, 0x22, 0xC1DC1Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/actions/level_1_attack.asm:46 END_C_FUNCTION
    case 0xC2873E: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/level_1_attack.asm:46 END_C_FUNCTION
    case 0xC2873F: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
