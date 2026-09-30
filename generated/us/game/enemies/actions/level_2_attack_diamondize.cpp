// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/battle/actions/level_2_attack_diamondize.asm
bool resume_battle_actions_level_2_attack_diamondize(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/level_2_attack_diamondize.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2916E: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/actions/level_2_attack_diamondize.asm:6 END_STACK_VARS
    case 0xC29170: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/actions/level_2_attack_diamondize.asm:6 END_STACK_VARS
    case 0xC29171: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/level_2_attack_diamondize.asm:6 END_STACK_VARS
    case 0xC29172: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EEu : 0x00FFEEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/level_2_attack_diamondize.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC29172.
    case 0xC29174: {
        Instruction step(cpu, 0xFF, 0xFD205Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/actions/level_2_attack_diamondize.asm:6 END_STACK_VARS
    case 0xC29175: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/battle/actions/level_2_attack_diamondize.asm:7 JSR FAIL_ATTACK_ON_NPCS
    case 0xC29176: {
        Instruction step(cpu, 0x20, 0x007CFDu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/level_2_attack_diamondize.asm:7 JSR FAIL_ATTACK_ON_NPCS
    // Overlapping static entry reached from 0xC29174.
    case 0xC29178: {
        Instruction step(cpu, 0x7C, 0x0000C9u, 3u, AddressMode::AbsoluteIndexedIndirectX);
        step.jump();
        return step.finish();
    }
    // src/battle/actions/level_2_attack_diamondize.asm:8 CMP #0
    case 0xC29179: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/level_2_attack_diamondize.asm:8 CMP #0
    // Overlapping static entry reached from 0xC29179.
    case 0xC2917B: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/actions/level_2_attack_diamondize.asm:9 BNEL @UNKNOWN7
    case 0xC2917C: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/actions/level_2_attack_diamondize.asm:9 BNEL @UNKNOWN7
    case 0xC2917E: {
        Instruction step(cpu, 0x4C, 0x009252u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/actions/level_2_attack_diamondize.asm:10 LDA #0
    case 0xC29181: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/level_2_attack_diamondize.asm:10 LDA #0
    // Overlapping static entry reached from 0xC29181.
    case 0xC29183: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/level_2_attack_diamondize.asm:11 JSR MISS_CALC
    case 0xC29184: {
        Instruction step(cpu, 0x20, 0x0082F8u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/level_2_attack_diamondize.asm:12 CMP #0
    case 0xC29187: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/level_2_attack_diamondize.asm:12 CMP #0
    // Overlapping static entry reached from 0xC29187.
    case 0xC29189: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/actions/level_2_attack_diamondize.asm:13 BNEL @UNKNOWN7
    case 0xC2918A: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/actions/level_2_attack_diamondize.asm:13 BNEL @UNKNOWN7
    case 0xC2918C: {
        Instruction step(cpu, 0x4C, 0x009252u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/actions/level_2_attack_diamondize.asm:14 JSR SMAAAASH
    case 0xC2918F: {
        Instruction step(cpu, 0x20, 0x0083F8u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/level_2_attack_diamondize.asm:15 CMP #0
    case 0xC29192: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/level_2_attack_diamondize.asm:15 CMP #0
    // Overlapping static entry reached from 0xC29192.
    case 0xC29194: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/actions/level_2_attack_diamondize.asm:16 BNEL @UNKNOWN7
    case 0xC29195: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/actions/level_2_attack_diamondize.asm:16 BNEL @UNKNOWN7
    case 0xC29197: {
        Instruction step(cpu, 0x4C, 0x009252u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/actions/level_2_attack_diamondize.asm:17 JSR DETERMINE_DODGE
    case 0xC2919A: {
        Instruction step(cpu, 0x20, 0x0084ADu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/level_2_attack_diamondize.asm:18 CMP #0
    case 0xC2919D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/level_2_attack_diamondize.asm:18 CMP #0
    // Overlapping static entry reached from 0xC2919D.
    case 0xC2919F: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/actions/level_2_attack_diamondize.asm:19 BNEL @UNKNOWN6
    case 0xC291A0: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/actions/level_2_attack_diamondize.asm:19 BNEL @UNKNOWN6
    case 0xC291A2: {
        Instruction step(cpu, 0x4C, 0x009244u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/actions/level_2_attack_diamondize.asm:20 JSR BTLACT_LEVEL_2_ATK
    case 0xC291A5: {
        Instruction step(cpu, 0x20, 0x008523u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/level_2_attack_diamondize.asm:21 JSR HEAL_STRANGENESS
    case 0xC291A8: {
        Instruction step(cpu, 0x20, 0x00856Bu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/level_2_attack_diamondize.asm:22 JSR SUCCESS_LUCK80
    case 0xC291AB: {
        Instruction step(cpu, 0x20, 0x007C96u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/level_2_attack_diamondize.asm:23 CMP #0
    case 0xC291AE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/level_2_attack_diamondize.asm:23 CMP #0
    // Overlapping static entry reached from 0xC291AE.
    case 0xC291B0: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/actions/level_2_attack_diamondize.asm:24 BEQL @UNKNOWN7
    case 0xC291B1: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/actions/level_2_attack_diamondize.asm:24 BEQL @UNKNOWN7
    case 0xC291B3: {
        Instruction step(cpu, 0x4C, 0x009252u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/actions/level_2_attack_diamondize.asm:25 LDY #STATUS_0::DIAMONDIZED
    case 0xC291B6: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/actions/level_2_attack_diamondize.asm:25 LDY #STATUS_0::DIAMONDIZED
    // Overlapping static entry reached from 0xC291B6.
    case 0xC291B8: {
        Instruction step(cpu, 0x00, 0x0000A2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/level_2_attack_diamondize.asm:26 LDX #STATUS_GROUP::PERSISTENT_EASYHEAL
    case 0xC291B9: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/level_2_attack_diamondize.asm:26 LDX #STATUS_GROUP::PERSISTENT_EASYHEAL
    // Overlapping static entry reached from 0xC291B9.
    case 0xC291BB: {
        Instruction step(cpu, 0x00, 0x0000ADu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/level_2_attack_diamondize.asm:27 LDA CURRENT_TARGET
    case 0xC291BC: {
        Instruction step(cpu, 0xAD, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/level_2_attack_diamondize.asm:28 JSR INFLICT_STATUS_BATTLE
    case 0xC291BF: {
        Instruction step(cpu, 0x20, 0x00724Au, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/level_2_attack_diamondize.asm:29 CMP #0
    case 0xC291C2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/level_2_attack_diamondize.asm:29 CMP #0
    // Overlapping static entry reached from 0xC291C2.
    case 0xC291C4: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/actions/level_2_attack_diamondize.asm:30 BEQL @UNKNOWN7
    case 0xC291C5: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/actions/level_2_attack_diamondize.asm:30 BEQL @UNKNOWN7
    case 0xC291C7: {
        Instruction step(cpu, 0x4C, 0x009252u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/actions/level_2_attack_diamondize.asm:31 SEP #PROC_FLAGS::ACCUM8
    case 0xC291CA: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/actions/level_2_attack_diamondize.asm:32 LDA #0
    case 0xC291CC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x00AE00u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/level_2_attack_diamondize.asm:33 LDX CURRENT_TARGET
    case 0xC291CE: {
        Instruction step(cpu, 0xAE, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/level_2_attack_diamondize.asm:33 LDX CURRENT_TARGET
    // Overlapping static entry reached from 0xC291CC.
    case 0xC291CF: {
        Instruction step(cpu, 0x72, 0x0000A9u, 2u, AddressMode::DirectPageIndirect);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/actions/level_2_attack_diamondize.asm:34 STA a:battler::afflictions + STATUS_GROUP::SHIELD,X
    case 0xC291D1: {
        Instruction step(cpu, 0x9D, 0x000023u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/level_2_attack_diamondize.asm:35 LDX CURRENT_TARGET
    case 0xC291D4: {
        Instruction step(cpu, 0xAE, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/level_2_attack_diamondize.asm:36 STA a:battler::afflictions + STATUS_GROUP::HOMESICKNESS,X
    case 0xC291D7: {
        Instruction step(cpu, 0x9D, 0x000022u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/level_2_attack_diamondize.asm:37 LDX CURRENT_TARGET
    case 0xC291DA: {
        Instruction step(cpu, 0xAE, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/level_2_attack_diamondize.asm:38 STA a:battler::afflictions + STATUS_GROUP::CONCENTRATION,X
    case 0xC291DD: {
        Instruction step(cpu, 0x9D, 0x000021u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/level_2_attack_diamondize.asm:39 LDX CURRENT_TARGET
    case 0xC291E0: {
        Instruction step(cpu, 0xAE, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/level_2_attack_diamondize.asm:40 STA a:battler::afflictions + STATUS_GROUP::STRANGENESS,X
    case 0xC291E3: {
        Instruction step(cpu, 0x9D, 0x000020u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/level_2_attack_diamondize.asm:41 LDX CURRENT_TARGET
    case 0xC291E6: {
        Instruction step(cpu, 0xAE, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/level_2_attack_diamondize.asm:42 STA a:battler::afflictions + STATUS_GROUP::TEMPORARY,X
    case 0xC291E9: {
        Instruction step(cpu, 0x9D, 0x00001Fu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/level_2_attack_diamondize.asm:43 LDX CURRENT_TARGET
    case 0xC291EC: {
        Instruction step(cpu, 0xAE, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/level_2_attack_diamondize.asm:44 STA a:battler::afflictions + STATUS_GROUP::PERSISTENT_HARDHEAL,X
    case 0xC291EF: {
        Instruction step(cpu, 0x9D, 0x00001Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/level_2_attack_diamondize.asm:45 REP #PROC_FLAGS::ACCUM8
    case 0xC291F2: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/actions/level_2_attack_diamondize.asm:46 LDA CURRENT_TARGET
    case 0xC291F4: {
        Instruction step(cpu, 0xAD, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/level_2_attack_diamondize.asm:47 CLC
    case 0xC291F7: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/actions/level_2_attack_diamondize.asm:48 ADC #battler::exp
    case 0xC291F8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00003Fu : 0x00003Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/actions/level_2_attack_diamondize.asm:48 ADC #battler::exp
    // Overlapping static entry reached from 0xC291F8.
    case 0xC291FA: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/level_2_attack_diamondize.asm:49 TAY
    case 0xC291FB: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/battle/actions/level_2_attack_diamondize.asm:50 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC291FC: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1114 STA dest
    // Macro caller: src/battle/actions/level_2_attack_diamondize.asm:50 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC291FF: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/battle/actions/level_2_attack_diamondize.asm:50 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC29201: {
        Instruction step(cpu, 0xB9, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/battle/actions/level_2_attack_diamondize.asm:50 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC29204: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/level_2_attack_diamondize.asm:51 MOVE_INT BATTLE_EXP_SCRATCH, @VIRTUAL06
    case 0xC29206: {
        Instruction step(cpu, 0xAD, 0x00A974u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/level_2_attack_diamondize.asm:51 MOVE_INT BATTLE_EXP_SCRATCH, @VIRTUAL06
    case 0xC29209: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/level_2_attack_diamondize.asm:51 MOVE_INT BATTLE_EXP_SCRATCH, @VIRTUAL06
    case 0xC2920B: {
        Instruction step(cpu, 0xAD, 0x00A976u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/level_2_attack_diamondize.asm:51 MOVE_INT BATTLE_EXP_SCRATCH, @VIRTUAL06
    case 0xC2920E: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/level_2_attack_diamondize.asm:52 CLC
    case 0xC29210: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // include/macros.asm:942 LDA val1
    // Macro caller: src/battle/actions/level_2_attack_diamondize.asm:53 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC29211: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:943 ADC val2
    // Macro caller: src/battle/actions/level_2_attack_diamondize.asm:53 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC29213: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:944 STA dest
    // Macro caller: src/battle/actions/level_2_attack_diamondize.asm:53 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC29215: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/battle/actions/level_2_attack_diamondize.asm:53 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC29217: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/battle/actions/level_2_attack_diamondize.asm:53 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC29219: {
        Instruction step(cpu, 0x65, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/battle/actions/level_2_attack_diamondize.asm:53 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC2921B: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/level_2_attack_diamondize.asm:54 MOVE_INT @VIRTUAL06, BATTLE_EXP_SCRATCH
    case 0xC2921D: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/level_2_attack_diamondize.asm:54 MOVE_INT @VIRTUAL06, BATTLE_EXP_SCRATCH
    case 0xC2921F: {
        Instruction step(cpu, 0x8D, 0x00A974u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/level_2_attack_diamondize.asm:54 MOVE_INT @VIRTUAL06, BATTLE_EXP_SCRATCH
    case 0xC29222: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/level_2_attack_diamondize.asm:54 MOVE_INT @VIRTUAL06, BATTLE_EXP_SCRATCH
    case 0xC29224: {
        Instruction step(cpu, 0x8D, 0x00A976u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/level_2_attack_diamondize.asm:55 LDX CURRENT_TARGET
    case 0xC29227: {
        Instruction step(cpu, 0xAE, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/level_2_attack_diamondize.asm:56 LDA a:battler::money,X
    case 0xC2922A: {
        Instruction step(cpu, 0xBD, 0x00003Du, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/level_2_attack_diamondize.asm:57 CLC
    case 0xC2922D: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/actions/level_2_attack_diamondize.asm:58 ADC BATTLE_MONEY_SCRATCH
    case 0xC2922E: {
        Instruction step(cpu, 0x6D, 0x00A978u, 3u, AddressMode::Absolute);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/actions/level_2_attack_diamondize.asm:59 STA BATTLE_MONEY_SCRATCH
    case 0xC29231: {
        Instruction step(cpu, 0x8D, 0x00A978u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/level_2_attack_diamondize.asm:60 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_DAIYA_ON
    case 0xC29234: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x006AC7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/level_2_attack_diamondize.asm:60 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_DAIYA_ON
    // Overlapping static entry reached from 0xC29234.
    case 0xC29236: {
        Instruction step(cpu, 0x6A, 0x000000u, 1u, AddressMode::Accumulator);
        step.rotate_right();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/level_2_attack_diamondize.asm:60 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_DAIYA_ON
    case 0xC29237: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/level_2_attack_diamondize.asm:60 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_DAIYA_ON
    case 0xC29239: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000EFu : 0x0000EFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/level_2_attack_diamondize.asm:60 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_DAIYA_ON
    // Overlapping static entry reached from 0xC29239.
    case 0xC2923B: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/level_2_attack_diamondize.asm:60 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_DAIYA_ON
    case 0xC2923C: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/level_2_attack_diamondize.asm:60 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_DAIYA_ON
    case 0xC2923E: {
        Instruction step(cpu, 0x22, 0xC1DC1Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/level_2_attack_diamondize.asm:61 BRA @UNKNOWN7
    case 0xC29242: {
        Instruction step(cpu, 0x80, 0x00000Eu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/level_2_attack_diamondize.asm:63 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TATAKU_YOKETA
    case 0xC29244: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000055u : 0x007655u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/level_2_attack_diamondize.asm:63 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TATAKU_YOKETA
    // Overlapping static entry reached from 0xC29244.
    case 0xC29246: {
        Instruction step(cpu, 0x76, 0x000085u, 2u, AddressMode::DirectPageIndexedX);
        step.rotate_right();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/level_2_attack_diamondize.asm:63 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TATAKU_YOKETA
    case 0xC29247: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/level_2_attack_diamondize.asm:63 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TATAKU_YOKETA
    // Overlapping static entry reached from 0xC29246.
    case 0xC29248: {
        Instruction step(cpu, 0x0E, 0x00EFA9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/level_2_attack_diamondize.asm:63 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TATAKU_YOKETA
    case 0xC29249: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000EFu : 0x0000EFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/level_2_attack_diamondize.asm:63 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TATAKU_YOKETA
    // Overlapping static entry reached from 0xC29249.
    case 0xC2924B: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/level_2_attack_diamondize.asm:63 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TATAKU_YOKETA
    case 0xC2924C: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/level_2_attack_diamondize.asm:63 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TATAKU_YOKETA
    case 0xC2924E: {
        Instruction step(cpu, 0x22, 0xC1DC1Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/actions/level_2_attack_diamondize.asm:65 END_C_FUNCTION
    case 0xC29252: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/level_2_attack_diamondize.asm:65 END_C_FUNCTION
    case 0xC29253: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
