// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/battle/psi_shield_nullify.asm
bool resume_battle_psi_shield_nullify(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/psi_shield_nullify.asm:3 BEGIN_C_FUNCTION
    case 0xC2941D: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/psi_shield_nullify.asm:7 END_STACK_VARS
    case 0xC2941F: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/psi_shield_nullify.asm:7 END_STACK_VARS
    case 0xC29420: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/psi_shield_nullify.asm:7 END_STACK_VARS
    case 0xC29421: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EEu : 0x00FFEEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/psi_shield_nullify.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC29421.
    case 0xC29423: {
        Instruction step(cpu, 0xFF, 0x01A95Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/psi_shield_nullify.asm:7 END_STACK_VARS
    case 0xC29424: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/battle/psi_shield_nullify.asm:8 LDA #1
    case 0xC29425: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/psi_shield_nullify.asm:8 LDA #1
    // Overlapping static entry reached from 0xC29425.
    case 0xC29427: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/psi_shield_nullify.asm:9 STA SHIELD_HAS_NULLIFIED_DAMAGE
    case 0xC29428: {
        Instruction step(cpu, 0x8D, 0x00AA94u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/psi_shield_nullify.asm:10 LDX CURRENT_ATTACKER
    case 0xC2942B: {
        Instruction step(cpu, 0xAE, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/psi_shield_nullify.asm:11 SEP #PROC_FLAGS::ACCUM8
    case 0xC2942E: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/psi_shield_nullify.asm:12 LDA a:battler::current_action_argument,X
    case 0xC29430: {
        Instruction step(cpu, 0xBD, 0x000008u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/psi_shield_nullify.asm:13 JSL REDIRECT_C1ACF8
    case 0xC29433: {
        Instruction step(cpu, 0x22, 0xC1DD7Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/psi_shield_nullify.asm:15 LDX CURRENT_ATTACKER
    case 0xC29437: {
        Instruction step(cpu, 0xAE, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/psi_shield_nullify.asm:16 LDA a:battler::current_action,X
    case 0xC2943A: {
        Instruction step(cpu, 0xBD, 0x000004u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:568 STA scratch
    // Macro caller: src/battle/psi_shield_nullify.asm:17 OPTIMIZED_MULT $04, 12
    case 0xC2943D: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:569 ASL
    // Macro caller: src/battle/psi_shield_nullify.asm:17 OPTIMIZED_MULT $04, 12
    case 0xC2943F: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/battle/psi_shield_nullify.asm:17 OPTIMIZED_MULT $04, 12
    case 0xC29440: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:571 ASL
    // Macro caller: src/battle/psi_shield_nullify.asm:17 OPTIMIZED_MULT $04, 12
    case 0xC29442: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:572 ASL
    // Macro caller: src/battle/psi_shield_nullify.asm:17 OPTIMIZED_MULT $04, 12
    case 0xC29443: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/psi_shield_nullify.asm:18 TAX
    case 0xC29444: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/psi_shield_nullify.asm:19 INX
    case 0xC29445: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/psi_shield_nullify.asm:20 INX
    case 0xC29446: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/psi_shield_nullify.asm:21 LDA f:BATTLE_ACTION_TABLE,X
    case 0xC29447: {
        Instruction step(cpu, 0xBF, 0xD57B68u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/psi_shield_nullify.asm:22 AND #$00FF
    case 0xC2944B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/psi_shield_nullify.asm:22 AND #$00FF
    // Overlapping static entry reached from 0xC2944B.
    case 0xC2944D: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/psi_shield_nullify.asm:23 CMP #ACTION_TYPE::PSI
    case 0xC2944E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/psi_shield_nullify.asm:23 CMP #ACTION_TYPE::PSI
    // Overlapping static entry reached from 0xC2944E.
    case 0xC29450: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/psi_shield_nullify.asm:24 BEQ @UNKNOWN2
    case 0xC29451: {
        Instruction step(cpu, 0xF0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/psi_shield_nullify.asm:25 LDA #0
    case 0xC29453: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/psi_shield_nullify.asm:25 LDA #0
    // Overlapping static entry reached from 0xC29453.
    case 0xC29455: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/psi_shield_nullify.asm:26 BRA @RETURN
    case 0xC29456: {
        Instruction step(cpu, 0x80, 0x000074u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/psi_shield_nullify.asm:28 LDX CURRENT_TARGET
    case 0xC29458: {
        Instruction step(cpu, 0xAE, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/psi_shield_nullify.asm:29 LDA a:battler::afflictions + STATUS_GROUP::SHIELD,X
    case 0xC2945B: {
        Instruction step(cpu, 0xBD, 0x000023u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/psi_shield_nullify.asm:30 AND #$00FF
    case 0xC2945E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/psi_shield_nullify.asm:30 AND #$00FF
    // Overlapping static entry reached from 0xC2945E.
    case 0xC29460: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/psi_shield_nullify.asm:31 CMP #STATUS_6::PSI_SHIELD_POWER
    case 0xC29461: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/psi_shield_nullify.asm:31 CMP #STATUS_6::PSI_SHIELD_POWER
    // Overlapping static entry reached from 0xC29461.
    case 0xC29463: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/psi_shield_nullify.asm:32 BEQ @REFLECT_PSI
    case 0xC29464: {
        Instruction step(cpu, 0xF0, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/psi_shield_nullify.asm:33 CMP #STATUS_6::PSI_SHIELD
    case 0xC29466: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/psi_shield_nullify.asm:33 CMP #STATUS_6::PSI_SHIELD
    // Overlapping static entry reached from 0xC29466.
    case 0xC29468: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/psi_shield_nullify.asm:34 BEQ @ABSORB_PSI
    case 0xC29469: {
        Instruction step(cpu, 0xF0, 0x00001Bu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/psi_shield_nullify.asm:35 BRA @UNKNOWN6
    case 0xC2946B: {
        Instruction step(cpu, 0x80, 0x00005Cu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/psi_shield_nullify.asm:38 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSYPOWER_TURN
    case 0xC2946D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D2u : 0x0070D2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/psi_shield_nullify.asm:38 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSYPOWER_TURN
    // Overlapping static entry reached from 0xC2946D.
    case 0xC2946F: {
        Instruction step(cpu, 0x70, 0x000085u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_set();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/psi_shield_nullify.asm:38 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSYPOWER_TURN
    case 0xC29470: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/psi_shield_nullify.asm:38 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSYPOWER_TURN
    // Overlapping static entry reached from 0xC2946F.
    case 0xC29471: {
        Instruction step(cpu, 0x0E, 0x00EFA9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/psi_shield_nullify.asm:38 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSYPOWER_TURN
    case 0xC29472: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000EFu : 0x0000EFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/psi_shield_nullify.asm:38 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSYPOWER_TURN
    // Overlapping static entry reached from 0xC29472.
    case 0xC29474: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/psi_shield_nullify.asm:38 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSYPOWER_TURN
    case 0xC29475: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/psi_shield_nullify.asm:38 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSYPOWER_TURN
    case 0xC29477: {
        Instruction step(cpu, 0x22, 0xC1DC1Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/psi_shield_nullify.asm:39 LDA #1
    case 0xC2947B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/psi_shield_nullify.asm:39 LDA #1
    // Overlapping static entry reached from 0xC2947B.
    case 0xC2947D: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/psi_shield_nullify.asm:40 STA DAMAGE_IS_REFLECTED
    case 0xC2947E: {
        Instruction step(cpu, 0x8D, 0x00AA96u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/psi_shield_nullify.asm:41 JSR SWAP_ATTACKER_WITH_TARGET
    case 0xC29481: {
        Instruction step(cpu, 0x20, 0x007E8Au, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/psi_shield_nullify.asm:42 BRA @UNKNOWN6
    case 0xC29484: {
        Instruction step(cpu, 0x80, 0x000043u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/psi_shield_nullify.asm:44 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSYCO_TURN
    case 0xC29486: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FAu : 0x0070FAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/psi_shield_nullify.asm:44 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSYCO_TURN
    // Overlapping static entry reached from 0xC29486.
    case 0xC29488: {
        Instruction step(cpu, 0x70, 0x000085u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_set();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/psi_shield_nullify.asm:44 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSYCO_TURN
    case 0xC29489: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/psi_shield_nullify.asm:44 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSYCO_TURN
    // Overlapping static entry reached from 0xC29488.
    case 0xC2948A: {
        Instruction step(cpu, 0x0E, 0x00EFA9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/psi_shield_nullify.asm:44 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSYCO_TURN
    case 0xC2948B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000EFu : 0x0000EFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/psi_shield_nullify.asm:44 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSYCO_TURN
    // Overlapping static entry reached from 0xC29505.
    case 0xC2948C: {
        Instruction step(cpu, 0xEF, 0x108500u, 4u, AddressMode::Long);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/psi_shield_nullify.asm:44 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSYCO_TURN
    // Overlapping static entry reached from 0xC2948B.
    case 0xC2948D: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/psi_shield_nullify.asm:44 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSYCO_TURN
    case 0xC2948E: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/psi_shield_nullify.asm:44 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSYCO_TURN
    case 0xC29490: {
        Instruction step(cpu, 0x22, 0xC1DC1Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/psi_shield_nullify.asm:45 LDA CURRENT_TARGET
    case 0xC29494: {
        Instruction step(cpu, 0xAD, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/psi_shield_nullify.asm:46 CLC
    case 0xC29497: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/psi_shield_nullify.asm:47 ADC #battler::shield_hp
    case 0xC29498: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000025u : 0x000025u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/psi_shield_nullify.asm:47 ADC #battler::shield_hp
    // Overlapping static entry reached from 0xC29498.
    case 0xC2949A: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/psi_shield_nullify.asm:48 TAX
    case 0xC2949B: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/psi_shield_nullify.asm:49 SEP #PROC_FLAGS::ACCUM8
    case 0xC2949C: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/psi_shield_nullify.asm:50 LDA __BSS_START__,X
    case 0xC2949E: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/psi_shield_nullify.asm:51 DEC
    case 0xC294A1: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/battle/psi_shield_nullify.asm:52 STA __BSS_START__,X
    case 0xC294A2: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/psi_shield_nullify.asm:53 REP #PROC_FLAGS::ACCUM8
    case 0xC294A5: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/psi_shield_nullify.asm:54 AND #$00FF
    case 0xC294A7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/psi_shield_nullify.asm:54 AND #$00FF
    // Overlapping static entry reached from 0xC294A7.
    case 0xC294A9: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/psi_shield_nullify.asm:55 BNE @UNKNOWN5
    case 0xC294AA: {
        Instruction step(cpu, 0xD0, 0x000018u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/psi_shield_nullify.asm:56 LDX CURRENT_TARGET
    case 0xC294AC: {
        Instruction step(cpu, 0xAE, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/psi_shield_nullify.asm:57 SEP #PROC_FLAGS::ACCUM8
    case 0xC294AF: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/psi_shield_nullify.asm:58 STZ a:battler::afflictions + STATUS_GROUP::SHIELD,X
    case 0xC294B1: {
        Instruction step(cpu, 0x9E, 0x000023u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/psi_shield_nullify.asm:59 REP #PROC_FLAGS::ACCUM8
    case 0xC294B4: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/psi_shield_nullify.asm:60 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_OFF
    case 0xC294B6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000099u : 0x007099u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/psi_shield_nullify.asm:60 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_OFF
    // Overlapping static entry reached from 0xC294B6.
    case 0xC294B8: {
        Instruction step(cpu, 0x70, 0x000085u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_set();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/psi_shield_nullify.asm:60 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_OFF
    case 0xC294B9: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/psi_shield_nullify.asm:60 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_OFF
    // Overlapping static entry reached from 0xC294B8.
    case 0xC294BA: {
        Instruction step(cpu, 0x0E, 0x00EFA9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/psi_shield_nullify.asm:60 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_OFF
    case 0xC294BB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000EFu : 0x0000EFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/psi_shield_nullify.asm:60 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_OFF
    // Overlapping static entry reached from 0xC294BB.
    case 0xC294BD: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/psi_shield_nullify.asm:60 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_OFF
    case 0xC294BE: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/psi_shield_nullify.asm:60 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_OFF
    case 0xC294C0: {
        Instruction step(cpu, 0x22, 0xC1DC1Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/psi_shield_nullify.asm:62 LDA #1
    case 0xC294C4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/psi_shield_nullify.asm:62 LDA #1
    // Overlapping static entry reached from 0xC294C4.
    case 0xC294C6: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/psi_shield_nullify.asm:63 BRA @RETURN
    case 0xC294C7: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/psi_shield_nullify.asm:65 LDA #0
    case 0xC294C9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/psi_shield_nullify.asm:65 LDA #0
    // Overlapping static entry reached from 0xC294C9.
    case 0xC294CB: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/psi_shield_nullify.asm:67 END_C_FUNCTION
    case 0xC294CC: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/psi_shield_nullify.asm:67 END_C_FUNCTION
    case 0xC294CD: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
