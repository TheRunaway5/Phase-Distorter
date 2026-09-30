// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/battle/smaaaash.asm
bool resume_battle_smaaaash(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/smaaaash.asm:3 BEGIN_C_FUNCTION
    case 0xC283F8: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/smaaaash.asm:8 END_STACK_VARS
    case 0xC283FA: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/smaaaash.asm:8 END_STACK_VARS
    case 0xC283FB: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/smaaaash.asm:8 END_STACK_VARS
    case 0xC283FC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000ECu : 0x00FFECu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/smaaaash.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC283FC.
    case 0xC283FE: {
        Instruction step(cpu, 0xFF, 0x8E9C5Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/smaaaash.asm:8 END_STACK_VARS
    case 0xC283FF: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/battle/smaaaash.asm:9 STZ IS_SMAAAAASH_ATTACK
    case 0xC28400: {
        Instruction step(cpu, 0x9C, 0x00AA8Eu, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/smaaaash.asm:9 STZ IS_SMAAAAASH_ATTACK
    // Overlapping static entry reached from 0xC283FE.
    case 0xC28402: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/smaaaash.asm:10 LDX CURRENT_ATTACKER
    case 0xC28403: {
        Instruction step(cpu, 0xAE, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/smaaaash.asm:11 LDA __BSS_START__ + battler::guts,X
    case 0xC28406: {
        Instruction step(cpu, 0xBD, 0x00002Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/smaaaash.asm:12 STA @LOCAL01
    case 0xC28409: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/smaaaash.asm:13 LDX CURRENT_ATTACKER
    case 0xC2840B: {
        Instruction step(cpu, 0xAE, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/smaaaash.asm:14 LDA __BSS_START__ + battler::ally_or_enemy,X
    case 0xC2840E: {
        Instruction step(cpu, 0xBD, 0x00000Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/smaaaash.asm:15 AND #$00FF
    case 0xC28411: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/smaaaash.asm:15 AND #$00FF
    // Overlapping static entry reached from 0xC28411.
    case 0xC28413: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/smaaaash.asm:16 BNE @BYPASS_MINIMUM_GUTS
    case 0xC28414: {
        Instruction step(cpu, 0xD0, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/smaaaash.asm:17 LDA @LOCAL01
    case 0xC28416: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/smaaaash.asm:18 CMP #GUTS_FLOOR_FOR_SMAAAASH_CHANCE
    case 0xC28418: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000019u : 0x000019u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/smaaaash.asm:18 CMP #GUTS_FLOOR_FOR_SMAAAASH_CHANCE
    // Overlapping static entry reached from 0xC28418.
    case 0xC2841A: {
        Instruction step(cpu, 0x00, 0x0000B0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/smaaaash.asm:19 BCS @BYPASS_MINIMUM_GUTS
    case 0xC2841B: {
        Instruction step(cpu, 0xB0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/battle/smaaaash.asm:20 LDA #GUTS_FLOOR_FOR_SMAAAASH_CHANCE
    case 0xC2841D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000019u : 0x000019u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/smaaaash.asm:20 LDA #GUTS_FLOOR_FOR_SMAAAASH_CHANCE
    // Overlapping static entry reached from 0xC2841D.
    case 0xC2841F: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/smaaaash.asm:21 STA @LOCAL01
    case 0xC28420: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/smaaaash.asm:23 LDA @LOCAL01
    case 0xC28422: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/smaaaash.asm:24 JSR SUCCESS_500
    case 0xC28424: {
        Instruction step(cpu, 0x20, 0x006BDBu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/smaaaash.asm:25 CMP #0
    case 0xC28427: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/smaaaash.asm:25 CMP #0
    // Overlapping static entry reached from 0xC28427.
    case 0xC28429: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/smaaaash.asm:26 BEQL @FAILED
    case 0xC2842A: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/smaaaash.asm:26 BEQL @FAILED
    case 0xC2842C: {
        Instruction step(cpu, 0x4C, 0x0084A8u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/smaaaash.asm:27 LDX CURRENT_ATTACKER
    case 0xC2842F: {
        Instruction step(cpu, 0xAE, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/smaaaash.asm:28 LDA __BSS_START__ + battler::ally_or_enemy,X
    case 0xC28432: {
        Instruction step(cpu, 0xBD, 0x00000Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/smaaaash.asm:29 AND #$00FF
    case 0xC28435: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/smaaaash.asm:29 AND #$00FF
    // Overlapping static entry reached from 0xC28435.
    case 0xC28437: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/smaaaash.asm:30 BNE @ATTACKER_IS_ENEMY
    case 0xC28438: {
        Instruction step(cpu, 0xD0, 0x000016u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/smaaaash.asm:31 LDA #SMAAAASH_FLASH_DURATION
    case 0xC2843A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00003Cu : 0x00003Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/smaaaash.asm:31 LDA #SMAAAASH_FLASH_DURATION
    // Overlapping static entry reached from 0xC2843A.
    case 0xC2843C: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/smaaaash.asm:32 STA GREEN_FLASH_DURATION
    case 0xC2843D: {
        Instruction step(cpu, 0x8D, 0x00AD9Eu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/smaaaash.asm:33 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SMASH_PLAYER
    case 0xC28440: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000024u : 0x007624u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/smaaaash.asm:33 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SMASH_PLAYER
    // Overlapping static entry reached from 0xC28440.
    case 0xC28442: {
        Instruction step(cpu, 0x76, 0x000085u, 2u, AddressMode::DirectPageIndexedX);
        step.rotate_right();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/smaaaash.asm:33 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SMASH_PLAYER
    case 0xC28443: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/smaaaash.asm:33 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SMASH_PLAYER
    // Overlapping static entry reached from 0xC28442.
    case 0xC28444: {
        Instruction step(cpu, 0x0E, 0x00EFA9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/smaaaash.asm:33 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SMASH_PLAYER
    case 0xC28445: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000EFu : 0x0000EFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/smaaaash.asm:33 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SMASH_PLAYER
    // Overlapping static entry reached from 0xC28445.
    case 0xC28447: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/smaaaash.asm:33 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SMASH_PLAYER
    case 0xC28448: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/smaaaash.asm:33 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SMASH_PLAYER
    case 0xC2844A: {
        Instruction step(cpu, 0x22, 0xC1DC1Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/smaaaash.asm:34 BRA @SKIP_ENEMY_FLASH
    case 0xC2844E: {
        Instruction step(cpu, 0x80, 0x000014u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/smaaaash.asm:36 LDA #SMAAAASH_FLASH_DURATION
    case 0xC28450: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00003Cu : 0x00003Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/smaaaash.asm:36 LDA #SMAAAASH_FLASH_DURATION
    // Overlapping static entry reached from 0xC28450.
    case 0xC28452: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/smaaaash.asm:37 STA RED_FLASH_DURATION
    case 0xC28453: {
        Instruction step(cpu, 0x8D, 0x00ADA0u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/smaaaash.asm:38 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SMASH_MONSTER
    case 0xC28456: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000030u : 0x007630u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/smaaaash.asm:38 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SMASH_MONSTER
    // Overlapping static entry reached from 0xC28456.
    case 0xC28458: {
        Instruction step(cpu, 0x76, 0x000085u, 2u, AddressMode::DirectPageIndexedX);
        step.rotate_right();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/smaaaash.asm:38 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SMASH_MONSTER
    case 0xC28459: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/smaaaash.asm:38 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SMASH_MONSTER
    // Overlapping static entry reached from 0xC28458.
    case 0xC2845A: {
        Instruction step(cpu, 0x0E, 0x00EFA9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/smaaaash.asm:38 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SMASH_MONSTER
    case 0xC2845B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000EFu : 0x0000EFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/smaaaash.asm:38 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SMASH_MONSTER
    // Overlapping static entry reached from 0xC2845B.
    case 0xC2845D: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/smaaaash.asm:38 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SMASH_MONSTER
    case 0xC2845E: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/smaaaash.asm:38 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SMASH_MONSTER
    case 0xC28460: {
        Instruction step(cpu, 0x22, 0xC1DC1Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/smaaaash.asm:40 LDX CURRENT_TARGET
    case 0xC28464: {
        Instruction step(cpu, 0xAE, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/smaaaash.asm:41 LDA __BSS_START__ + battler::afflictions + STATUS_GROUP::SHIELD,X
    case 0xC28467: {
        Instruction step(cpu, 0xBD, 0x000023u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/smaaaash.asm:42 AND #$00FF
    case 0xC2846A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/smaaaash.asm:42 AND #$00FF
    // Overlapping static entry reached from 0xC2846A.
    case 0xC2846C: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/smaaaash.asm:43 TAX
    case 0xC2846D: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/smaaaash.asm:44 CPX #STATUS_6::SHIELD_POWER
    case 0xC2846E: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/battle/smaaaash.asm:44 CPX #STATUS_6::SHIELD_POWER
    // Overlapping static entry reached from 0xC2846E.
    case 0xC28470: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/smaaaash.asm:45 BEQ @TARGET_HAS_SHIELD
    case 0xC28471: {
        Instruction step(cpu, 0xF0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/smaaaash.asm:46 CPX #STATUS_6::SHIELD
    case 0xC28473: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/battle/smaaaash.asm:46 CPX #STATUS_6::SHIELD
    // Overlapping static entry reached from 0xC28473.
    case 0xC28475: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/smaaaash.asm:47 BNE @TARGET_DOES_NOT_HAVE_SHIELD
    case 0xC28476: {
        Instruction step(cpu, 0xD0, 0x00000Au, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/smaaaash.asm:49 SEP #PROC_FLAGS::ACCUM8
    case 0xC28478: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/smaaaash.asm:50 LDA #1
    case 0xC2847A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x00AE01u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/smaaaash.asm:51 LDX CURRENT_TARGET
    case 0xC2847C: {
        Instruction step(cpu, 0xAE, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/smaaaash.asm:51 LDX CURRENT_TARGET
    // Overlapping static entry reached from 0xC2847A.
    case 0xC2847D: {
        Instruction step(cpu, 0x72, 0x0000A9u, 2u, AddressMode::DirectPageIndirect);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/smaaaash.asm:52 STA __BSS_START__ + battler::shield_hp,X
    case 0xC2847F: {
        Instruction step(cpu, 0x9D, 0x000025u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/smaaaash.asm:54 REP #PROC_FLAGS::ACCUM8
    case 0xC28482: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/smaaaash.asm:55 LDA #1
    case 0xC28484: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/smaaaash.asm:55 LDA #1
    // Overlapping static entry reached from 0xC28484.
    case 0xC28486: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/smaaaash.asm:56 STA IS_SMAAAAASH_ATTACK
    case 0xC28487: {
        Instruction step(cpu, 0x8D, 0x00AA8Eu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/smaaaash.asm:57 LDX #$00FF
    case 0xC2848A: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/smaaaash.asm:57 LDX #$00FF
    // Overlapping static entry reached from 0xC2848A.
    case 0xC2848C: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/smaaaash.asm:58 STX @LOCAL01
    case 0xC2848D: {
        Instruction step(cpu, 0x86, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/smaaaash.asm:59 LDX CURRENT_ATTACKER
    case 0xC2848F: {
        Instruction step(cpu, 0xAE, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/smaaaash.asm:60 LDA __BSS_START__ + battler::offense,X
    case 0xC28492: {
        Instruction step(cpu, 0xBD, 0x000026u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/smaaaash.asm:61 ASL
    case 0xC28495: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/smaaaash.asm:62 ASL
    case 0xC28496: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/smaaaash.asm:63 LDX CURRENT_TARGET
    case 0xC28497: {
        Instruction step(cpu, 0xAE, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/smaaaash.asm:64 SEC
    case 0xC2849A: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/battle/smaaaash.asm:65 SBC __BSS_START__ + battler::defense,X
    case 0xC2849B: {
        Instruction step(cpu, 0xFD, 0x000028u, 3u, AddressMode::AbsoluteIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/smaaaash.asm:66 LDX @LOCAL01
    case 0xC2849E: {
        Instruction step(cpu, 0xA6, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/smaaaash.asm:67 JSR CALC_RESIST_DAMAGE
    case 0xC284A0: {
        Instruction step(cpu, 0x20, 0x008125u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/smaaaash.asm:68 LDA #1
    case 0xC284A3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/smaaaash.asm:68 LDA #1
    // Overlapping static entry reached from 0xC284A3.
    case 0xC284A5: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/smaaaash.asm:69 BRA @RETURN
    case 0xC284A6: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/smaaaash.asm:71 LDA #0
    case 0xC284A8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/smaaaash.asm:71 LDA #0
    // Overlapping static entry reached from 0xC284A8.
    case 0xC284AA: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/smaaaash.asm:73 END_C_FUNCTION
    case 0xC284AB: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/smaaaash.asm:73 END_C_FUNCTION
    case 0xC284AC: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
