// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/battle/smaaaash.asm
bool resume_battle_smaaaash(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/smaaaash.asm:3 BEGIN_C_FUNCTION
    case 0xC2839F: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/smaaaash.asm:8 END_STACK_VARS
    case 0xC283A1: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/smaaaash.asm:8 END_STACK_VARS
    case 0xC283A2: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/smaaaash.asm:8 END_STACK_VARS
    case 0xC283A3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000ECu : 0x00FFECu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/smaaaash.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC283A3.
    case 0xC283A5: {
        Instruction step(cpu, 0xFF, 0x639C5Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/smaaaash.asm:8 END_STACK_VARS
    case 0xC283A6: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/battle/smaaaash.asm:9 STZ IS_SMAAAAASH_ATTACK
    case 0xC283A7: {
        Instruction step(cpu, 0x9C, 0x00AC63u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/smaaaash.asm:9 STZ IS_SMAAAAASH_ATTACK
    // Overlapping static entry reached from 0xC283A5.
    case 0xC283A9: {
        Instruction step(cpu, 0xAC, 0x0072AEu, 3u, AddressMode::Absolute);
        step.load_y();
        return step.finish();
    }
    // src/battle/smaaaash.asm:10 LDX CURRENT_ATTACKER
    case 0xC283AA: {
        Instruction step(cpu, 0xAE, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/smaaaash.asm:10 LDX CURRENT_ATTACKER
    // Overlapping static entry reached from 0xC283A9.
    case 0xC283AC: {
        Instruction step(cpu, 0xAB, 0x000000u, 1u, AddressMode::Implied);
        step.pull_data_bank();
        return step.finish();
    }
    // src/battle/smaaaash.asm:11 LDA __BSS_START__ + battler::guts,X
    case 0xC283AD: {
        Instruction step(cpu, 0xBD, 0x00002Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/smaaaash.asm:12 STA @LOCAL01
    case 0xC283B0: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/smaaaash.asm:13 LDX CURRENT_ATTACKER
    case 0xC283B2: {
        Instruction step(cpu, 0xAE, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/smaaaash.asm:14 LDA __BSS_START__ + battler::ally_or_enemy,X
    case 0xC283B5: {
        Instruction step(cpu, 0xBD, 0x00000Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/smaaaash.asm:15 AND #$00FF
    case 0xC283B8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/smaaaash.asm:15 AND #$00FF
    // Overlapping static entry reached from 0xC283B8.
    case 0xC283BA: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/smaaaash.asm:16 BNE @BYPASS_MINIMUM_GUTS
    case 0xC283BB: {
        Instruction step(cpu, 0xD0, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/smaaaash.asm:17 LDA @LOCAL01
    case 0xC283BD: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/smaaaash.asm:18 CMP #GUTS_FLOOR_FOR_SMAAAASH_CHANCE
    case 0xC283BF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000019u : 0x000019u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/smaaaash.asm:18 CMP #GUTS_FLOOR_FOR_SMAAAASH_CHANCE
    // Overlapping static entry reached from 0xC283BF.
    case 0xC283C1: {
        Instruction step(cpu, 0x00, 0x0000B0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/smaaaash.asm:19 BCS @BYPASS_MINIMUM_GUTS
    case 0xC283C2: {
        Instruction step(cpu, 0xB0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/battle/smaaaash.asm:20 LDA #GUTS_FLOOR_FOR_SMAAAASH_CHANCE
    case 0xC283C4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000019u : 0x000019u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/smaaaash.asm:20 LDA #GUTS_FLOOR_FOR_SMAAAASH_CHANCE
    // Overlapping static entry reached from 0xC283C4.
    case 0xC283C6: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/smaaaash.asm:21 STA @LOCAL01
    case 0xC283C7: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/smaaaash.asm:23 LDA @LOCAL01
    case 0xC283C9: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/smaaaash.asm:24 JSR SUCCESS_500
    case 0xC283CB: {
        Instruction step(cpu, 0x20, 0x006B1Au, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/smaaaash.asm:25 CMP #0
    case 0xC283CE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/smaaaash.asm:25 CMP #0
    // Overlapping static entry reached from 0xC283CE.
    case 0xC283D0: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/smaaaash.asm:26 BEQL @FAILED
    case 0xC283D1: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/smaaaash.asm:26 BEQL @FAILED
    case 0xC283D3: {
        Instruction step(cpu, 0x4C, 0x00844Fu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/smaaaash.asm:27 LDX CURRENT_ATTACKER
    case 0xC283D6: {
        Instruction step(cpu, 0xAE, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/smaaaash.asm:28 LDA __BSS_START__ + battler::ally_or_enemy,X
    case 0xC283D9: {
        Instruction step(cpu, 0xBD, 0x00000Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/smaaaash.asm:29 AND #$00FF
    case 0xC283DC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/smaaaash.asm:29 AND #$00FF
    // Overlapping static entry reached from 0xC283DC.
    case 0xC283DE: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/smaaaash.asm:30 BNE @ATTACKER_IS_ENEMY
    case 0xC283DF: {
        Instruction step(cpu, 0xD0, 0x000016u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/smaaaash.asm:31 LDA #SMAAAASH_FLASH_DURATION
    case 0xC283E1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00003Cu : 0x00003Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/smaaaash.asm:31 LDA #SMAAAASH_FLASH_DURATION
    // Overlapping static entry reached from 0xC283E1.
    case 0xC283E3: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/smaaaash.asm:32 STA GREEN_FLASH_DURATION
    case 0xC283E4: {
        Instruction step(cpu, 0x8D, 0x00AF73u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/smaaaash.asm:33 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SMASH_PLAYER
    case 0xC283E7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00008Du : 0x002D8Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/smaaaash.asm:33 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SMASH_PLAYER
    // Overlapping static entry reached from 0xC283E7.
    case 0xC283E9: {
        Instruction step(cpu, 0x2D, 0x000E85u, 3u, AddressMode::Absolute);
        step.and_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/smaaaash.asm:33 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SMASH_PLAYER
    case 0xC283EA: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/smaaaash.asm:33 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SMASH_PLAYER
    case 0xC283EC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/smaaaash.asm:33 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SMASH_PLAYER
    // Overlapping static entry reached from 0xC283EC.
    case 0xC283EE: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/smaaaash.asm:33 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SMASH_PLAYER
    case 0xC283EF: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/smaaaash.asm:33 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SMASH_PLAYER
    case 0xC283F1: {
        Instruction step(cpu, 0x22, 0xC1D9FFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/smaaaash.asm:34 BRA @SKIP_ENEMY_FLASH
    case 0xC283F5: {
        Instruction step(cpu, 0x80, 0x000014u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/smaaaash.asm:36 LDA #SMAAAASH_FLASH_DURATION
    case 0xC283F7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00003Cu : 0x00003Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/smaaaash.asm:36 LDA #SMAAAASH_FLASH_DURATION
    // Overlapping static entry reached from 0xC283F7.
    case 0xC283F9: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/smaaaash.asm:37 STA RED_FLASH_DURATION
    case 0xC283FA: {
        Instruction step(cpu, 0x8D, 0x00AF75u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/smaaaash.asm:38 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SMASH_MONSTER
    case 0xC283FD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000097u : 0x002D97u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/smaaaash.asm:38 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SMASH_MONSTER
    // Overlapping static entry reached from 0xC283FD.
    case 0xC283FF: {
        Instruction step(cpu, 0x2D, 0x000E85u, 3u, AddressMode::Absolute);
        step.and_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/smaaaash.asm:38 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SMASH_MONSTER
    case 0xC28400: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/smaaaash.asm:38 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SMASH_MONSTER
    case 0xC28402: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/smaaaash.asm:38 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SMASH_MONSTER
    // Overlapping static entry reached from 0xC28402.
    case 0xC28404: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/smaaaash.asm:38 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SMASH_MONSTER
    case 0xC28405: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/smaaaash.asm:38 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SMASH_MONSTER
    case 0xC28407: {
        Instruction step(cpu, 0x22, 0xC1D9FFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/smaaaash.asm:40 LDX CURRENT_TARGET
    case 0xC2840B: {
        Instruction step(cpu, 0xAE, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/smaaaash.asm:41 LDA __BSS_START__ + battler::afflictions + STATUS_GROUP::SHIELD,X
    case 0xC2840E: {
        Instruction step(cpu, 0xBD, 0x000023u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/smaaaash.asm:42 AND #$00FF
    case 0xC28411: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/smaaaash.asm:42 AND #$00FF
    // Overlapping static entry reached from 0xC28411.
    case 0xC28413: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/smaaaash.asm:43 TAX
    case 0xC28414: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/smaaaash.asm:44 CPX #STATUS_6::SHIELD_POWER
    case 0xC28415: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/battle/smaaaash.asm:44 CPX #STATUS_6::SHIELD_POWER
    // Overlapping static entry reached from 0xC28415.
    case 0xC28417: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/smaaaash.asm:45 BEQ @TARGET_HAS_SHIELD
    case 0xC28418: {
        Instruction step(cpu, 0xF0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/smaaaash.asm:46 CPX #STATUS_6::SHIELD
    case 0xC2841A: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/battle/smaaaash.asm:46 CPX #STATUS_6::SHIELD
    // Overlapping static entry reached from 0xC2841A.
    case 0xC2841C: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/smaaaash.asm:47 BNE @TARGET_DOES_NOT_HAVE_SHIELD
    case 0xC2841D: {
        Instruction step(cpu, 0xD0, 0x00000Au, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/smaaaash.asm:49 SEP #PROC_FLAGS::ACCUM8
    case 0xC2841F: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/smaaaash.asm:50 LDA #1
    case 0xC28421: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x00AE01u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/smaaaash.asm:51 LDX CURRENT_TARGET
    case 0xC28423: {
        Instruction step(cpu, 0xAE, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/smaaaash.asm:51 LDX CURRENT_TARGET
    // Overlapping static entry reached from 0xC28421.
    case 0xC28424: {
        Instruction step(cpu, 0x74, 0x0000ABu, 2u, AddressMode::DirectPageIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/smaaaash.asm:52 STA __BSS_START__ + battler::shield_hp,X
    case 0xC28426: {
        Instruction step(cpu, 0x9D, 0x000025u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/smaaaash.asm:54 REP #PROC_FLAGS::ACCUM8
    case 0xC28429: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/smaaaash.asm:55 LDA #1
    case 0xC2842B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/smaaaash.asm:55 LDA #1
    // Overlapping static entry reached from 0xC2842B.
    case 0xC2842D: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/smaaaash.asm:56 STA IS_SMAAAAASH_ATTACK
    case 0xC2842E: {
        Instruction step(cpu, 0x8D, 0x00AC63u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/smaaaash.asm:57 LDX #$00FF
    case 0xC28431: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/smaaaash.asm:57 LDX #$00FF
    // Overlapping static entry reached from 0xC28431.
    case 0xC28433: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/smaaaash.asm:58 STX @LOCAL01
    case 0xC28434: {
        Instruction step(cpu, 0x86, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/smaaaash.asm:59 LDX CURRENT_ATTACKER
    case 0xC28436: {
        Instruction step(cpu, 0xAE, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/smaaaash.asm:60 LDA __BSS_START__ + battler::offense,X
    case 0xC28439: {
        Instruction step(cpu, 0xBD, 0x000026u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/smaaaash.asm:61 ASL
    case 0xC2843C: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/smaaaash.asm:62 ASL
    case 0xC2843D: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/smaaaash.asm:63 LDX CURRENT_TARGET
    case 0xC2843E: {
        Instruction step(cpu, 0xAE, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/smaaaash.asm:64 SEC
    case 0xC28441: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/battle/smaaaash.asm:65 SBC __BSS_START__ + battler::defense,X
    case 0xC28442: {
        Instruction step(cpu, 0xFD, 0x000028u, 3u, AddressMode::AbsoluteIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/smaaaash.asm:66 LDX @LOCAL01
    case 0xC28445: {
        Instruction step(cpu, 0xA6, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/smaaaash.asm:67 JSR CALC_RESIST_DAMAGE
    case 0xC28447: {
        Instruction step(cpu, 0x20, 0x0080CBu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/smaaaash.asm:68 LDA #1
    case 0xC2844A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/smaaaash.asm:68 LDA #1
    // Overlapping static entry reached from 0xC2844A.
    case 0xC2844C: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/smaaaash.asm:69 BRA @RETURN
    case 0xC2844D: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/smaaaash.asm:71 LDA #0
    case 0xC2844F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/smaaaash.asm:71 LDA #0
    // Overlapping static entry reached from 0xC2844F.
    case 0xC28451: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/smaaaash.asm:73 END_C_FUNCTION
    case 0xC28452: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/smaaaash.asm:73 END_C_FUNCTION
    case 0xC28453: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
