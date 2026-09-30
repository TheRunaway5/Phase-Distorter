// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/battle/psi_shield_nullify.asm
bool resume_battle_psi_shield_nullify(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/psi_shield_nullify.asm:3 BEGIN_C_FUNCTION
    case 0xC293C6: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/psi_shield_nullify.asm:7 END_STACK_VARS
    case 0xC293C8: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/psi_shield_nullify.asm:7 END_STACK_VARS
    case 0xC293C9: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/psi_shield_nullify.asm:7 END_STACK_VARS
    case 0xC293CA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EEu : 0x00FFEEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/psi_shield_nullify.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC293CA.
    case 0xC293CC: {
        Instruction step(cpu, 0xFF, 0x01A95Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/psi_shield_nullify.asm:7 END_STACK_VARS
    case 0xC293CD: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/battle/psi_shield_nullify.asm:8 LDA #1
    case 0xC293CE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/psi_shield_nullify.asm:8 LDA #1
    // Overlapping static entry reached from 0xC293CE.
    case 0xC293D0: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/psi_shield_nullify.asm:9 STA SHIELD_HAS_NULLIFIED_DAMAGE
    case 0xC293D1: {
        Instruction step(cpu, 0x8D, 0x00AC69u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/psi_shield_nullify.asm:10 LDX CURRENT_ATTACKER
    case 0xC293D4: {
        Instruction step(cpu, 0xAE, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/psi_shield_nullify.asm:11 SEP #PROC_FLAGS::ACCUM8
    case 0xC293D7: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/psi_shield_nullify.asm:12 LDA a:battler::current_action_argument,X
    case 0xC293D9: {
        Instruction step(cpu, 0xBD, 0x000008u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/psi_shield_nullify.asm:13 JSL REDIRECT_C1ACF8
    case 0xC293DC: {
        Instruction step(cpu, 0x22, 0xC1DB59u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/psi_shield_nullify.asm:15 LDX CURRENT_ATTACKER
    case 0xC293E0: {
        Instruction step(cpu, 0xAE, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/psi_shield_nullify.asm:16 LDA a:battler::current_action,X
    case 0xC293E3: {
        Instruction step(cpu, 0xBD, 0x000004u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:568 STA scratch
    // Macro caller: src/battle/psi_shield_nullify.asm:17 OPTIMIZED_MULT $04, 12
    case 0xC293E6: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:569 ASL
    // Macro caller: src/battle/psi_shield_nullify.asm:17 OPTIMIZED_MULT $04, 12
    case 0xC293E8: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/battle/psi_shield_nullify.asm:17 OPTIMIZED_MULT $04, 12
    case 0xC293E9: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:571 ASL
    // Macro caller: src/battle/psi_shield_nullify.asm:17 OPTIMIZED_MULT $04, 12
    case 0xC293EB: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:572 ASL
    // Macro caller: src/battle/psi_shield_nullify.asm:17 OPTIMIZED_MULT $04, 12
    case 0xC293EC: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/psi_shield_nullify.asm:18 TAX
    case 0xC293ED: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/psi_shield_nullify.asm:19 INX
    case 0xC293EE: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/psi_shield_nullify.asm:20 INX
    case 0xC293EF: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/psi_shield_nullify.asm:21 LDA f:BATTLE_ACTION_TABLE,X
    case 0xC293F0: {
        Instruction step(cpu, 0xBF, 0xD58B1Eu, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/psi_shield_nullify.asm:22 AND #$00FF
    case 0xC293F4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/psi_shield_nullify.asm:22 AND #$00FF
    // Overlapping static entry reached from 0xC293F4.
    case 0xC293F6: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/psi_shield_nullify.asm:23 CMP #ACTION_TYPE::PSI
    case 0xC293F7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/psi_shield_nullify.asm:23 CMP #ACTION_TYPE::PSI
    // Overlapping static entry reached from 0xC293F7.
    case 0xC293F9: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/psi_shield_nullify.asm:24 BEQ @UNKNOWN2
    case 0xC293FA: {
        Instruction step(cpu, 0xF0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/psi_shield_nullify.asm:25 LDA #0
    case 0xC293FC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/psi_shield_nullify.asm:25 LDA #0
    // Overlapping static entry reached from 0xC293FC.
    case 0xC293FE: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/psi_shield_nullify.asm:26 BRA @RETURN
    case 0xC293FF: {
        Instruction step(cpu, 0x80, 0x000074u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/psi_shield_nullify.asm:28 LDX CURRENT_TARGET
    case 0xC29401: {
        Instruction step(cpu, 0xAE, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/psi_shield_nullify.asm:29 LDA a:battler::afflictions + STATUS_GROUP::SHIELD,X
    case 0xC29404: {
        Instruction step(cpu, 0xBD, 0x000023u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/psi_shield_nullify.asm:30 AND #$00FF
    case 0xC29407: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/psi_shield_nullify.asm:30 AND #$00FF
    // Overlapping static entry reached from 0xC29407.
    case 0xC29409: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/psi_shield_nullify.asm:31 CMP #STATUS_6::PSI_SHIELD_POWER
    case 0xC2940A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/psi_shield_nullify.asm:31 CMP #STATUS_6::PSI_SHIELD_POWER
    // Overlapping static entry reached from 0xC2940A.
    case 0xC2940C: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/psi_shield_nullify.asm:32 BEQ @REFLECT_PSI
    case 0xC2940D: {
        Instruction step(cpu, 0xF0, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/psi_shield_nullify.asm:33 CMP #STATUS_6::PSI_SHIELD
    case 0xC2940F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/psi_shield_nullify.asm:33 CMP #STATUS_6::PSI_SHIELD
    // Overlapping static entry reached from 0xC2940F.
    case 0xC29411: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/psi_shield_nullify.asm:34 BEQ @ABSORB_PSI
    case 0xC29412: {
        Instruction step(cpu, 0xF0, 0x00001Bu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/psi_shield_nullify.asm:35 BRA @UNKNOWN6
    case 0xC29414: {
        Instruction step(cpu, 0x80, 0x00005Cu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/psi_shield_nullify.asm:38 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSYPOWER_TURN
    case 0xC29416: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000A8u : 0x0035A8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/psi_shield_nullify.asm:38 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSYPOWER_TURN
    // Overlapping static entry reached from 0xC29416.
    case 0xC29418: {
        Instruction step(cpu, 0x35, 0x000085u, 2u, AddressMode::DirectPageIndexedX);
        step.and_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/psi_shield_nullify.asm:38 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSYPOWER_TURN
    case 0xC29419: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/psi_shield_nullify.asm:38 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSYPOWER_TURN
    // Overlapping static entry reached from 0xC29418.
    case 0xC2941A: {
        Instruction step(cpu, 0x0E, 0x00C7A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/psi_shield_nullify.asm:38 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSYPOWER_TURN
    case 0xC2941B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/psi_shield_nullify.asm:38 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSYPOWER_TURN
    // Overlapping static entry reached from 0xC2941B.
    case 0xC2941D: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/psi_shield_nullify.asm:38 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSYPOWER_TURN
    case 0xC2941E: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/psi_shield_nullify.asm:38 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSYPOWER_TURN
    case 0xC29420: {
        Instruction step(cpu, 0x22, 0xC1D9FFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/psi_shield_nullify.asm:39 LDA #1
    case 0xC29424: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/psi_shield_nullify.asm:39 LDA #1
    // Overlapping static entry reached from 0xC29424.
    case 0xC29426: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/psi_shield_nullify.asm:40 STA DAMAGE_IS_REFLECTED
    case 0xC29427: {
        Instruction step(cpu, 0x8D, 0x00AC6Bu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/psi_shield_nullify.asm:41 JSR SWAP_ATTACKER_WITH_TARGET
    case 0xC2942A: {
        Instruction step(cpu, 0x20, 0x007E21u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/psi_shield_nullify.asm:42 BRA @UNKNOWN6
    case 0xC2942D: {
        Instruction step(cpu, 0x80, 0x000043u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/psi_shield_nullify.asm:44 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSYCO_TURN
    case 0xC2942F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000CEu : 0x0035CEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/psi_shield_nullify.asm:44 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSYCO_TURN
    // Overlapping static entry reached from 0xC2942F.
    case 0xC29431: {
        Instruction step(cpu, 0x35, 0x000085u, 2u, AddressMode::DirectPageIndexedX);
        step.and_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/psi_shield_nullify.asm:44 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSYCO_TURN
    case 0xC29432: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/psi_shield_nullify.asm:44 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSYCO_TURN
    // Overlapping static entry reached from 0xC29431.
    case 0xC29433: {
        Instruction step(cpu, 0x0E, 0x00C7A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/psi_shield_nullify.asm:44 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSYCO_TURN
    case 0xC29434: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/psi_shield_nullify.asm:44 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSYCO_TURN
    // Overlapping static entry reached from 0xC29434.
    case 0xC29436: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/psi_shield_nullify.asm:44 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSYCO_TURN
    case 0xC29437: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/psi_shield_nullify.asm:44 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSYCO_TURN
    case 0xC29439: {
        Instruction step(cpu, 0x22, 0xC1D9FFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/psi_shield_nullify.asm:45 LDA CURRENT_TARGET
    case 0xC2943D: {
        Instruction step(cpu, 0xAD, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/psi_shield_nullify.asm:46 CLC
    case 0xC29440: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/psi_shield_nullify.asm:47 ADC #battler::shield_hp
    case 0xC29441: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000025u : 0x000025u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/psi_shield_nullify.asm:47 ADC #battler::shield_hp
    // Overlapping static entry reached from 0xC29441.
    case 0xC29443: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/psi_shield_nullify.asm:48 TAX
    case 0xC29444: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/psi_shield_nullify.asm:49 SEP #PROC_FLAGS::ACCUM8
    case 0xC29445: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/psi_shield_nullify.asm:50 LDA __BSS_START__,X
    case 0xC29447: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/psi_shield_nullify.asm:51 DEC
    case 0xC2944A: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/battle/psi_shield_nullify.asm:52 STA __BSS_START__,X
    case 0xC2944B: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/psi_shield_nullify.asm:53 REP #PROC_FLAGS::ACCUM8
    case 0xC2944E: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/psi_shield_nullify.asm:54 AND #$00FF
    case 0xC29450: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/psi_shield_nullify.asm:54 AND #$00FF
    // Overlapping static entry reached from 0xC29450.
    case 0xC29452: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/psi_shield_nullify.asm:55 BNE @UNKNOWN5
    case 0xC29453: {
        Instruction step(cpu, 0xD0, 0x000018u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/psi_shield_nullify.asm:56 LDX CURRENT_TARGET
    case 0xC29455: {
        Instruction step(cpu, 0xAE, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/psi_shield_nullify.asm:57 SEP #PROC_FLAGS::ACCUM8
    case 0xC29458: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/psi_shield_nullify.asm:58 STZ a:battler::afflictions + STATUS_GROUP::SHIELD,X
    case 0xC2945A: {
        Instruction step(cpu, 0x9E, 0x000023u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/psi_shield_nullify.asm:59 REP #PROC_FLAGS::ACCUM8
    case 0xC2945D: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/psi_shield_nullify.asm:60 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_OFF
    case 0xC2945F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00006Eu : 0x00356Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/psi_shield_nullify.asm:60 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_OFF
    // Overlapping static entry reached from 0xC2945F.
    case 0xC29461: {
        Instruction step(cpu, 0x35, 0x000085u, 2u, AddressMode::DirectPageIndexedX);
        step.and_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/psi_shield_nullify.asm:60 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_OFF
    case 0xC29462: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/psi_shield_nullify.asm:60 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_OFF
    // Overlapping static entry reached from 0xC29461.
    case 0xC29463: {
        Instruction step(cpu, 0x0E, 0x00C7A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/psi_shield_nullify.asm:60 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_OFF
    case 0xC29464: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/psi_shield_nullify.asm:60 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_OFF
    // Overlapping static entry reached from 0xC29464.
    case 0xC29466: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/psi_shield_nullify.asm:60 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_OFF
    case 0xC29467: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/psi_shield_nullify.asm:60 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_OFF
    case 0xC29469: {
        Instruction step(cpu, 0x22, 0xC1D9FFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/psi_shield_nullify.asm:62 LDA #1
    case 0xC2946D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/psi_shield_nullify.asm:62 LDA #1
    // Overlapping static entry reached from 0xC2946D.
    case 0xC2946F: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/psi_shield_nullify.asm:63 BRA @RETURN
    case 0xC29470: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/psi_shield_nullify.asm:65 LDA #0
    case 0xC29472: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/psi_shield_nullify.asm:65 LDA #0
    // Overlapping static entry reached from 0xC29472.
    case 0xC29474: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/psi_shield_nullify.asm:67 END_C_FUNCTION
    case 0xC29475: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/psi_shield_nullify.asm:67 END_C_FUNCTION
    case 0xC29476: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
