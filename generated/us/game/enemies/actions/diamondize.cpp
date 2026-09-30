// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/battle/actions/diamondize.asm
bool resume_battle_actions_diamondize(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/diamondize.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC289CE: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/actions/diamondize.asm:6 END_STACK_VARS
    case 0xC289D0: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/actions/diamondize.asm:6 END_STACK_VARS
    case 0xC289D1: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/diamondize.asm:6 END_STACK_VARS
    case 0xC289D2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EEu : 0x00FFEEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/diamondize.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC289D2.
    case 0xC289D4: {
        Instruction step(cpu, 0xFF, 0xFD205Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/actions/diamondize.asm:6 END_STACK_VARS
    case 0xC289D5: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/battle/actions/diamondize.asm:7 JSR FAIL_ATTACK_ON_NPCS
    case 0xC289D6: {
        Instruction step(cpu, 0x20, 0x007CFDu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/diamondize.asm:7 JSR FAIL_ATTACK_ON_NPCS
    // Overlapping static entry reached from 0xC289D4.
    case 0xC289D8: {
        Instruction step(cpu, 0x7C, 0x0000C9u, 3u, AddressMode::AbsoluteIndexedIndirectX);
        step.jump();
        return step.finish();
    }
    // src/battle/actions/diamondize.asm:8 CMP #0
    case 0xC289D9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/diamondize.asm:8 CMP #0
    // Overlapping static entry reached from 0xC289D9.
    case 0xC289DB: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/actions/diamondize.asm:9 BNEL @UNKNOWN4
    case 0xC289DC: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/actions/diamondize.asm:9 BNEL @UNKNOWN4
    case 0xC289DE: {
        Instruction step(cpu, 0x4C, 0x008A90u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/actions/diamondize.asm:10 LDX CURRENT_TARGET
    case 0xC289E1: {
        Instruction step(cpu, 0xAE, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/diamondize.asm:11 SEP #PROC_FLAGS::ACCUM8
    case 0xC289E4: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/actions/diamondize.asm:12 LDA a:battler::paralysis_resist,X
    case 0xC289E6: {
        Instruction step(cpu, 0xBD, 0x000037u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/diamondize.asm:13 JSR SUCCESS_255
    case 0xC289E9: {
        Instruction step(cpu, 0x20, 0x006BB8u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/diamondize.asm:15 CMP #0
    case 0xC289EC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/diamondize.asm:15 CMP #0
    // Overlapping static entry reached from 0xC289EC.
    case 0xC289EE: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/actions/diamondize.asm:16 BEQL @UNKNOWN3
    case 0xC289EF: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/actions/diamondize.asm:16 BEQL @UNKNOWN3
    case 0xC289F1: {
        Instruction step(cpu, 0x4C, 0x008A82u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/actions/diamondize.asm:17 LDY #STATUS_0::DIAMONDIZED
    case 0xC289F4: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/actions/diamondize.asm:17 LDY #STATUS_0::DIAMONDIZED
    // Overlapping static entry reached from 0xC289F4.
    case 0xC289F6: {
        Instruction step(cpu, 0x00, 0x0000A2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/diamondize.asm:18 LDX #STATUS_GROUP::PERSISTENT_EASYHEAL
    case 0xC289F7: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/diamondize.asm:18 LDX #STATUS_GROUP::PERSISTENT_EASYHEAL
    // Overlapping static entry reached from 0xC289F7.
    case 0xC289F9: {
        Instruction step(cpu, 0x00, 0x0000ADu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/diamondize.asm:19 LDA CURRENT_TARGET
    case 0xC289FA: {
        Instruction step(cpu, 0xAD, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/diamondize.asm:20 JSR INFLICT_STATUS_BATTLE
    case 0xC289FD: {
        Instruction step(cpu, 0x20, 0x00724Au, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/diamondize.asm:21 CMP #0
    case 0xC28A00: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/diamondize.asm:21 CMP #0
    // Overlapping static entry reached from 0xC28A00.
    case 0xC28A02: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/actions/diamondize.asm:22 BEQL @UNKNOWN3
    case 0xC28A03: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/actions/diamondize.asm:22 BEQL @UNKNOWN3
    case 0xC28A05: {
        Instruction step(cpu, 0x4C, 0x008A82u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/actions/diamondize.asm:23 SEP #PROC_FLAGS::ACCUM8
    case 0xC28A08: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/actions/diamondize.asm:24 LDA #0
    case 0xC28A0A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x00AE00u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/diamondize.asm:25 LDX CURRENT_TARGET
    case 0xC28A0C: {
        Instruction step(cpu, 0xAE, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/diamondize.asm:25 LDX CURRENT_TARGET
    // Overlapping static entry reached from 0xC28A0A.
    case 0xC28A0D: {
        Instruction step(cpu, 0x72, 0x0000A9u, 2u, AddressMode::DirectPageIndirect);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/actions/diamondize.asm:26 STA a:battler::afflictions + STATUS_GROUP::SHIELD,X
    case 0xC28A0F: {
        Instruction step(cpu, 0x9D, 0x000023u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/diamondize.asm:27 LDX CURRENT_TARGET
    case 0xC28A12: {
        Instruction step(cpu, 0xAE, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/diamondize.asm:28 STA a:battler::afflictions + STATUS_GROUP::HOMESICKNESS,X
    case 0xC28A15: {
        Instruction step(cpu, 0x9D, 0x000022u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/diamondize.asm:29 LDX CURRENT_TARGET
    case 0xC28A18: {
        Instruction step(cpu, 0xAE, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/diamondize.asm:30 STA a:battler::afflictions + STATUS_GROUP::CONCENTRATION,X
    case 0xC28A1B: {
        Instruction step(cpu, 0x9D, 0x000021u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/diamondize.asm:31 LDX CURRENT_TARGET
    case 0xC28A1E: {
        Instruction step(cpu, 0xAE, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/diamondize.asm:32 STA a:battler::afflictions + STATUS_GROUP::STRANGENESS,X
    case 0xC28A21: {
        Instruction step(cpu, 0x9D, 0x000020u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/diamondize.asm:33 LDX CURRENT_TARGET
    case 0xC28A24: {
        Instruction step(cpu, 0xAE, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/diamondize.asm:34 STA a:battler::afflictions + STATUS_GROUP::TEMPORARY,X
    case 0xC28A27: {
        Instruction step(cpu, 0x9D, 0x00001Fu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/diamondize.asm:35 LDX CURRENT_TARGET
    case 0xC28A2A: {
        Instruction step(cpu, 0xAE, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/diamondize.asm:36 STA a:battler::afflictions + STATUS_GROUP::PERSISTENT_HARDHEAL,X
    case 0xC28A2D: {
        Instruction step(cpu, 0x9D, 0x00001Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/diamondize.asm:37 REP #PROC_FLAGS::ACCUM8
    case 0xC28A30: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/actions/diamondize.asm:38 LDA CURRENT_TARGET
    case 0xC28A32: {
        Instruction step(cpu, 0xAD, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/diamondize.asm:39 CLC
    case 0xC28A35: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/actions/diamondize.asm:40 ADC #battler::exp
    case 0xC28A36: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00003Fu : 0x00003Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/actions/diamondize.asm:40 ADC #battler::exp
    // Overlapping static entry reached from 0xC28A36.
    case 0xC28A38: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/diamondize.asm:41 TAY
    case 0xC28A39: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/battle/actions/diamondize.asm:42 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC28A3A: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1114 STA dest
    // Macro caller: src/battle/actions/diamondize.asm:42 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC28A3D: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/battle/actions/diamondize.asm:42 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC28A3F: {
        Instruction step(cpu, 0xB9, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/battle/actions/diamondize.asm:42 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC28A42: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/diamondize.asm:43 MOVE_INT BATTLE_EXP_SCRATCH, @VIRTUAL06
    case 0xC28A44: {
        Instruction step(cpu, 0xAD, 0x00A974u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/diamondize.asm:43 MOVE_INT BATTLE_EXP_SCRATCH, @VIRTUAL06
    case 0xC28A47: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/diamondize.asm:43 MOVE_INT BATTLE_EXP_SCRATCH, @VIRTUAL06
    case 0xC28A49: {
        Instruction step(cpu, 0xAD, 0x00A976u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/diamondize.asm:43 MOVE_INT BATTLE_EXP_SCRATCH, @VIRTUAL06
    case 0xC28A4C: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/diamondize.asm:44 CLC
    case 0xC28A4E: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // include/macros.asm:942 LDA val1
    // Macro caller: src/battle/actions/diamondize.asm:45 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC28A4F: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:943 ADC val2
    // Macro caller: src/battle/actions/diamondize.asm:45 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC28A51: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:944 STA dest
    // Macro caller: src/battle/actions/diamondize.asm:45 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC28A53: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/battle/actions/diamondize.asm:45 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC28A55: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/battle/actions/diamondize.asm:45 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC28A57: {
        Instruction step(cpu, 0x65, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/battle/actions/diamondize.asm:45 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC28A59: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/diamondize.asm:46 MOVE_INT @VIRTUAL06, BATTLE_EXP_SCRATCH
    case 0xC28A5B: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/diamondize.asm:46 MOVE_INT @VIRTUAL06, BATTLE_EXP_SCRATCH
    case 0xC28A5D: {
        Instruction step(cpu, 0x8D, 0x00A974u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/diamondize.asm:46 MOVE_INT @VIRTUAL06, BATTLE_EXP_SCRATCH
    case 0xC28A60: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/diamondize.asm:46 MOVE_INT @VIRTUAL06, BATTLE_EXP_SCRATCH
    case 0xC28A62: {
        Instruction step(cpu, 0x8D, 0x00A976u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/diamondize.asm:47 LDX CURRENT_TARGET
    case 0xC28A65: {
        Instruction step(cpu, 0xAE, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/diamondize.asm:48 LDA a:battler::money,X
    case 0xC28A68: {
        Instruction step(cpu, 0xBD, 0x00003Du, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/diamondize.asm:49 CLC
    case 0xC28A6B: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/actions/diamondize.asm:50 ADC BATTLE_MONEY_SCRATCH
    case 0xC28A6C: {
        Instruction step(cpu, 0x6D, 0x00A978u, 3u, AddressMode::Absolute);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/actions/diamondize.asm:51 STA BATTLE_MONEY_SCRATCH
    case 0xC28A6F: {
        Instruction step(cpu, 0x8D, 0x00A978u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/diamondize.asm:52 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_DAIYA_ON
    case 0xC28A72: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x006AC7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/diamondize.asm:52 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_DAIYA_ON
    // Overlapping static entry reached from 0xC28A72.
    case 0xC28A74: {
        Instruction step(cpu, 0x6A, 0x000000u, 1u, AddressMode::Accumulator);
        step.rotate_right();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/diamondize.asm:52 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_DAIYA_ON
    case 0xC28A75: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/diamondize.asm:52 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_DAIYA_ON
    case 0xC28A77: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000EFu : 0x0000EFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/diamondize.asm:52 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_DAIYA_ON
    // Overlapping static entry reached from 0xC28A77.
    case 0xC28A79: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/diamondize.asm:52 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_DAIYA_ON
    case 0xC28A7A: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/diamondize.asm:52 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_DAIYA_ON
    case 0xC28A7C: {
        Instruction step(cpu, 0x22, 0xC1DC1Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/diamondize.asm:53 BRA @UNKNOWN4
    case 0xC28A80: {
        Instruction step(cpu, 0x80, 0x00000Eu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/diamondize.asm:55 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC28A82: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00006Eu : 0x00766Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/diamondize.asm:55 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    // Overlapping static entry reached from 0xC28A82.
    case 0xC28A84: {
        Instruction step(cpu, 0x76, 0x000085u, 2u, AddressMode::DirectPageIndexedX);
        step.rotate_right();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/diamondize.asm:55 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC28A85: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/diamondize.asm:55 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    // Overlapping static entry reached from 0xC28A84.
    case 0xC28A86: {
        Instruction step(cpu, 0x0E, 0x00EFA9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/diamondize.asm:55 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC28A87: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000EFu : 0x0000EFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/diamondize.asm:55 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    // Overlapping static entry reached from 0xC28A87.
    case 0xC28A89: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/diamondize.asm:55 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC28A8A: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/diamondize.asm:55 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC28A8C: {
        Instruction step(cpu, 0x22, 0xC1DC1Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/actions/diamondize.asm:57 END_C_FUNCTION
    case 0xC28A90: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/diamondize.asm:57 END_C_FUNCTION
    case 0xC28A91: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
