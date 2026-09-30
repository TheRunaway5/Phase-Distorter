// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/battle/actions/level_2_attack_diamondize.asm
bool resume_battle_actions_level_2_attack_diamondize(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/level_2_attack_diamondize.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC29105: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/actions/level_2_attack_diamondize.asm:6 END_STACK_VARS
    case 0xC29107: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/actions/level_2_attack_diamondize.asm:6 END_STACK_VARS
    case 0xC29108: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/level_2_attack_diamondize.asm:6 END_STACK_VARS
    case 0xC29109: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EEu : 0x00FFEEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/level_2_attack_diamondize.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC29109.
    case 0xC2910B: {
        Instruction step(cpu, 0xFF, 0x94205Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/actions/level_2_attack_diamondize.asm:6 END_STACK_VARS
    case 0xC2910C: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/battle/actions/level_2_attack_diamondize.asm:7 JSR FAIL_ATTACK_ON_NPCS
    case 0xC2910D: {
        Instruction step(cpu, 0x20, 0x007C94u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/level_2_attack_diamondize.asm:7 JSR FAIL_ATTACK_ON_NPCS
    // Overlapping static entry reached from 0xC2910B.
    case 0xC2910F: {
        Instruction step(cpu, 0x7C, 0x0000C9u, 3u, AddressMode::AbsoluteIndexedIndirectX);
        step.jump();
        return step.finish();
    }
    // src/battle/actions/level_2_attack_diamondize.asm:8 CMP #0
    case 0xC29110: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/level_2_attack_diamondize.asm:8 CMP #0
    // Overlapping static entry reached from 0xC29110.
    case 0xC29112: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/actions/level_2_attack_diamondize.asm:9 BNEL @UNKNOWN7
    case 0xC29113: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/actions/level_2_attack_diamondize.asm:9 BNEL @UNKNOWN7
    case 0xC29115: {
        Instruction step(cpu, 0x4C, 0x0091E9u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/actions/level_2_attack_diamondize.asm:10 LDA #0
    case 0xC29118: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/level_2_attack_diamondize.asm:10 LDA #0
    // Overlapping static entry reached from 0xC29118.
    case 0xC2911A: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/level_2_attack_diamondize.asm:11 JSR MISS_CALC
    case 0xC2911B: {
        Instruction step(cpu, 0x20, 0x00829Eu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/level_2_attack_diamondize.asm:12 CMP #0
    case 0xC2911E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/level_2_attack_diamondize.asm:12 CMP #0
    // Overlapping static entry reached from 0xC2911E.
    case 0xC29120: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/actions/level_2_attack_diamondize.asm:13 BNEL @UNKNOWN7
    case 0xC29121: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/actions/level_2_attack_diamondize.asm:13 BNEL @UNKNOWN7
    case 0xC29123: {
        Instruction step(cpu, 0x4C, 0x0091E9u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/actions/level_2_attack_diamondize.asm:14 JSR SMAAAASH
    case 0xC29126: {
        Instruction step(cpu, 0x20, 0x00839Fu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/level_2_attack_diamondize.asm:15 CMP #0
    case 0xC29129: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/level_2_attack_diamondize.asm:15 CMP #0
    // Overlapping static entry reached from 0xC29129.
    case 0xC2912B: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/actions/level_2_attack_diamondize.asm:16 BNEL @UNKNOWN7
    case 0xC2912C: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/actions/level_2_attack_diamondize.asm:16 BNEL @UNKNOWN7
    case 0xC2912E: {
        Instruction step(cpu, 0x4C, 0x0091E9u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/actions/level_2_attack_diamondize.asm:17 JSR DETERMINE_DODGE
    case 0xC29131: {
        Instruction step(cpu, 0x20, 0x008454u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/level_2_attack_diamondize.asm:18 CMP #0
    case 0xC29134: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/level_2_attack_diamondize.asm:18 CMP #0
    // Overlapping static entry reached from 0xC29134.
    case 0xC29136: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/actions/level_2_attack_diamondize.asm:19 BNEL @UNKNOWN6
    case 0xC29137: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/actions/level_2_attack_diamondize.asm:19 BNEL @UNKNOWN6
    case 0xC29139: {
        Instruction step(cpu, 0x4C, 0x0091DBu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/actions/level_2_attack_diamondize.asm:20 JSR BTLACT_LEVEL_2_ATK
    case 0xC2913C: {
        Instruction step(cpu, 0x20, 0x0084CAu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/level_2_attack_diamondize.asm:21 JSR HEAL_STRANGENESS
    case 0xC2913F: {
        Instruction step(cpu, 0x20, 0x008512u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/level_2_attack_diamondize.asm:22 JSR SUCCESS_LUCK80
    case 0xC29142: {
        Instruction step(cpu, 0x20, 0x007C2Du, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/level_2_attack_diamondize.asm:23 CMP #0
    case 0xC29145: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/level_2_attack_diamondize.asm:23 CMP #0
    // Overlapping static entry reached from 0xC29145.
    case 0xC29147: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/actions/level_2_attack_diamondize.asm:24 BEQL @UNKNOWN7
    case 0xC29148: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/actions/level_2_attack_diamondize.asm:24 BEQL @UNKNOWN7
    case 0xC2914A: {
        Instruction step(cpu, 0x4C, 0x0091E9u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/actions/level_2_attack_diamondize.asm:25 LDY #STATUS_0::DIAMONDIZED
    case 0xC2914D: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/actions/level_2_attack_diamondize.asm:25 LDY #STATUS_0::DIAMONDIZED
    // Overlapping static entry reached from 0xC2914D.
    case 0xC2914F: {
        Instruction step(cpu, 0x00, 0x0000A2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/level_2_attack_diamondize.asm:26 LDX #STATUS_GROUP::PERSISTENT_EASYHEAL
    case 0xC29150: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/level_2_attack_diamondize.asm:26 LDX #STATUS_GROUP::PERSISTENT_EASYHEAL
    // Overlapping static entry reached from 0xC29150.
    case 0xC29152: {
        Instruction step(cpu, 0x00, 0x0000ADu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/level_2_attack_diamondize.asm:27 LDA CURRENT_TARGET
    case 0xC29153: {
        Instruction step(cpu, 0xAD, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/level_2_attack_diamondize.asm:27 LDA CURRENT_TARGET
    // Overlapping static entry reached from 0xC291CD.
    case 0xC29154: {
        Instruction step(cpu, 0x74, 0x0000ABu, 2u, AddressMode::DirectPageIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/actions/level_2_attack_diamondize.asm:28 JSR INFLICT_STATUS_BATTLE
    case 0xC29156: {
        Instruction step(cpu, 0x20, 0x00718Du, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/level_2_attack_diamondize.asm:29 CMP #0
    case 0xC29159: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/level_2_attack_diamondize.asm:29 CMP #0
    // Overlapping static entry reached from 0xC29159.
    case 0xC2915B: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/actions/level_2_attack_diamondize.asm:30 BEQL @UNKNOWN7
    case 0xC2915C: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/actions/level_2_attack_diamondize.asm:30 BEQL @UNKNOWN7
    case 0xC2915E: {
        Instruction step(cpu, 0x4C, 0x0091E9u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/actions/level_2_attack_diamondize.asm:31 SEP #PROC_FLAGS::ACCUM8
    case 0xC29161: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/actions/level_2_attack_diamondize.asm:32 LDA #0
    case 0xC29163: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x00AE00u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/level_2_attack_diamondize.asm:33 LDX CURRENT_TARGET
    case 0xC29165: {
        Instruction step(cpu, 0xAE, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/level_2_attack_diamondize.asm:33 LDX CURRENT_TARGET
    // Overlapping static entry reached from 0xC29163.
    case 0xC29166: {
        Instruction step(cpu, 0x74, 0x0000ABu, 2u, AddressMode::DirectPageIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/actions/level_2_attack_diamondize.asm:34 STA a:battler::afflictions + STATUS_GROUP::SHIELD,X
    case 0xC29168: {
        Instruction step(cpu, 0x9D, 0x000023u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/level_2_attack_diamondize.asm:35 LDX CURRENT_TARGET
    case 0xC2916B: {
        Instruction step(cpu, 0xAE, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/level_2_attack_diamondize.asm:36 STA a:battler::afflictions + STATUS_GROUP::HOMESICKNESS,X
    case 0xC2916E: {
        Instruction step(cpu, 0x9D, 0x000022u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/level_2_attack_diamondize.asm:37 LDX CURRENT_TARGET
    case 0xC29171: {
        Instruction step(cpu, 0xAE, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/level_2_attack_diamondize.asm:38 STA a:battler::afflictions + STATUS_GROUP::CONCENTRATION,X
    case 0xC29174: {
        Instruction step(cpu, 0x9D, 0x000021u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/level_2_attack_diamondize.asm:39 LDX CURRENT_TARGET
    case 0xC29177: {
        Instruction step(cpu, 0xAE, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/level_2_attack_diamondize.asm:40 STA a:battler::afflictions + STATUS_GROUP::STRANGENESS,X
    case 0xC2917A: {
        Instruction step(cpu, 0x9D, 0x000020u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/level_2_attack_diamondize.asm:41 LDX CURRENT_TARGET
    case 0xC2917D: {
        Instruction step(cpu, 0xAE, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/level_2_attack_diamondize.asm:42 STA a:battler::afflictions + STATUS_GROUP::TEMPORARY,X
    case 0xC29180: {
        Instruction step(cpu, 0x9D, 0x00001Fu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/level_2_attack_diamondize.asm:43 LDX CURRENT_TARGET
    case 0xC29183: {
        Instruction step(cpu, 0xAE, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/level_2_attack_diamondize.asm:44 STA a:battler::afflictions + STATUS_GROUP::PERSISTENT_HARDHEAL,X
    case 0xC29186: {
        Instruction step(cpu, 0x9D, 0x00001Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/level_2_attack_diamondize.asm:45 REP #PROC_FLAGS::ACCUM8
    case 0xC29189: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/actions/level_2_attack_diamondize.asm:46 LDA CURRENT_TARGET
    case 0xC2918B: {
        Instruction step(cpu, 0xAD, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/level_2_attack_diamondize.asm:47 CLC
    case 0xC2918E: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/actions/level_2_attack_diamondize.asm:48 ADC #battler::exp
    case 0xC2918F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00003Fu : 0x00003Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/actions/level_2_attack_diamondize.asm:48 ADC #battler::exp
    // Overlapping static entry reached from 0xC2918F.
    case 0xC29191: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/level_2_attack_diamondize.asm:49 TAY
    case 0xC29192: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/battle/actions/level_2_attack_diamondize.asm:50 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC29193: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1114 STA dest
    // Macro caller: src/battle/actions/level_2_attack_diamondize.asm:50 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC29196: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/battle/actions/level_2_attack_diamondize.asm:50 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC29198: {
        Instruction step(cpu, 0xB9, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/battle/actions/level_2_attack_diamondize.asm:50 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC2919B: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/level_2_attack_diamondize.asm:51 MOVE_INT BATTLE_EXP_SCRATCH, @VIRTUAL06
    case 0xC2919D: {
        Instruction step(cpu, 0xAD, 0x00AB76u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/level_2_attack_diamondize.asm:51 MOVE_INT BATTLE_EXP_SCRATCH, @VIRTUAL06
    case 0xC291A0: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/level_2_attack_diamondize.asm:51 MOVE_INT BATTLE_EXP_SCRATCH, @VIRTUAL06
    case 0xC291A2: {
        Instruction step(cpu, 0xAD, 0x00AB78u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/level_2_attack_diamondize.asm:51 MOVE_INT BATTLE_EXP_SCRATCH, @VIRTUAL06
    case 0xC291A5: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/level_2_attack_diamondize.asm:52 CLC
    case 0xC291A7: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // include/macros.asm:942 LDA val1
    // Macro caller: src/battle/actions/level_2_attack_diamondize.asm:53 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC291A8: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:943 ADC val2
    // Macro caller: src/battle/actions/level_2_attack_diamondize.asm:53 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC291AA: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:944 STA dest
    // Macro caller: src/battle/actions/level_2_attack_diamondize.asm:53 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC291AC: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/battle/actions/level_2_attack_diamondize.asm:53 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC291AE: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/battle/actions/level_2_attack_diamondize.asm:53 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC291B0: {
        Instruction step(cpu, 0x65, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/battle/actions/level_2_attack_diamondize.asm:53 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC291B2: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/level_2_attack_diamondize.asm:54 MOVE_INT @VIRTUAL06, BATTLE_EXP_SCRATCH
    case 0xC291B4: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/level_2_attack_diamondize.asm:54 MOVE_INT @VIRTUAL06, BATTLE_EXP_SCRATCH
    case 0xC291B6: {
        Instruction step(cpu, 0x8D, 0x00AB76u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/level_2_attack_diamondize.asm:54 MOVE_INT @VIRTUAL06, BATTLE_EXP_SCRATCH
    case 0xC291B9: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/level_2_attack_diamondize.asm:54 MOVE_INT @VIRTUAL06, BATTLE_EXP_SCRATCH
    case 0xC291BB: {
        Instruction step(cpu, 0x8D, 0x00AB78u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/level_2_attack_diamondize.asm:55 LDX CURRENT_TARGET
    case 0xC291BE: {
        Instruction step(cpu, 0xAE, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/level_2_attack_diamondize.asm:56 LDA a:battler::money,X
    case 0xC291C1: {
        Instruction step(cpu, 0xBD, 0x00003Du, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/level_2_attack_diamondize.asm:57 CLC
    case 0xC291C4: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/actions/level_2_attack_diamondize.asm:58 ADC BATTLE_MONEY_SCRATCH
    case 0xC291C5: {
        Instruction step(cpu, 0x6D, 0x00AB7Au, 3u, AddressMode::Absolute);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/actions/level_2_attack_diamondize.asm:59 STA BATTLE_MONEY_SCRATCH
    case 0xC291C8: {
        Instruction step(cpu, 0x8D, 0x00AB7Au, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/level_2_attack_diamondize.asm:60 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_DAIYA_ON
    case 0xC291CB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Cu : 0x00300Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/level_2_attack_diamondize.asm:60 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_DAIYA_ON
    // Overlapping static entry reached from 0xC291CB.
    case 0xC291CD: {
        Instruction step(cpu, 0x30, 0x000085u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/level_2_attack_diamondize.asm:60 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_DAIYA_ON
    case 0xC291CE: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/level_2_attack_diamondize.asm:60 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_DAIYA_ON
    // Overlapping static entry reached from 0xC291CD.
    case 0xC291CF: {
        Instruction step(cpu, 0x0E, 0x00C7A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/level_2_attack_diamondize.asm:60 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_DAIYA_ON
    case 0xC291D0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/level_2_attack_diamondize.asm:60 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_DAIYA_ON
    // Overlapping static entry reached from 0xC291D0.
    case 0xC291D2: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/level_2_attack_diamondize.asm:60 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_DAIYA_ON
    case 0xC291D3: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/level_2_attack_diamondize.asm:60 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_DAIYA_ON
    case 0xC291D5: {
        Instruction step(cpu, 0x22, 0xC1D9FFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/level_2_attack_diamondize.asm:61 BRA @UNKNOWN7
    case 0xC291D9: {
        Instruction step(cpu, 0x80, 0x00000Eu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/level_2_attack_diamondize.asm:63 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TATAKU_YOKETA
    case 0xC291DB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000B6u : 0x002DB6u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/level_2_attack_diamondize.asm:63 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TATAKU_YOKETA
    // Overlapping static entry reached from 0xC291DB.
    case 0xC291DD: {
        Instruction step(cpu, 0x2D, 0x000E85u, 3u, AddressMode::Absolute);
        step.and_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/level_2_attack_diamondize.asm:63 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TATAKU_YOKETA
    case 0xC291DE: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/level_2_attack_diamondize.asm:63 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TATAKU_YOKETA
    case 0xC291E0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/level_2_attack_diamondize.asm:63 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TATAKU_YOKETA
    // Overlapping static entry reached from 0xC291E0.
    case 0xC291E2: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/level_2_attack_diamondize.asm:63 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TATAKU_YOKETA
    case 0xC291E3: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/level_2_attack_diamondize.asm:63 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TATAKU_YOKETA
    case 0xC291E5: {
        Instruction step(cpu, 0x22, 0xC1D9FFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/actions/level_2_attack_diamondize.asm:65 END_C_FUNCTION
    case 0xC291E9: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/level_2_attack_diamondize.asm:65 END_C_FUNCTION
    case 0xC291EA: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
