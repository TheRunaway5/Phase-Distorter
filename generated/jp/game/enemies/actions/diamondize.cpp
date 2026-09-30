// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/battle/actions/diamondize.asm
bool resume_battle_actions_diamondize(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/diamondize.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC28965: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/actions/diamondize.asm:6 END_STACK_VARS
    case 0xC28967: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/actions/diamondize.asm:6 END_STACK_VARS
    case 0xC28968: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/diamondize.asm:6 END_STACK_VARS
    case 0xC28969: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EEu : 0x00FFEEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/diamondize.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC28969.
    case 0xC2896B: {
        Instruction step(cpu, 0xFF, 0x94205Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/actions/diamondize.asm:6 END_STACK_VARS
    case 0xC2896C: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/battle/actions/diamondize.asm:7 JSR FAIL_ATTACK_ON_NPCS
    case 0xC2896D: {
        Instruction step(cpu, 0x20, 0x007C94u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/diamondize.asm:7 JSR FAIL_ATTACK_ON_NPCS
    // Overlapping static entry reached from 0xC2896B.
    case 0xC2896F: {
        Instruction step(cpu, 0x7C, 0x0000C9u, 3u, AddressMode::AbsoluteIndexedIndirectX);
        step.jump();
        return step.finish();
    }
    // src/battle/actions/diamondize.asm:8 CMP #0
    case 0xC28970: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/diamondize.asm:8 CMP #0
    // Overlapping static entry reached from 0xC28970.
    case 0xC28972: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/actions/diamondize.asm:9 BNEL @UNKNOWN4
    case 0xC28973: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/actions/diamondize.asm:9 BNEL @UNKNOWN4
    case 0xC28975: {
        Instruction step(cpu, 0x4C, 0x008A27u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/actions/diamondize.asm:10 LDX CURRENT_TARGET
    case 0xC28978: {
        Instruction step(cpu, 0xAE, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/diamondize.asm:11 SEP #PROC_FLAGS::ACCUM8
    case 0xC2897B: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/actions/diamondize.asm:12 LDA a:battler::paralysis_resist,X
    case 0xC2897D: {
        Instruction step(cpu, 0xBD, 0x000037u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/diamondize.asm:13 JSR SUCCESS_255
    case 0xC28980: {
        Instruction step(cpu, 0x20, 0x006AF7u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/diamondize.asm:15 CMP #0
    case 0xC28983: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/diamondize.asm:15 CMP #0
    // Overlapping static entry reached from 0xC28983.
    case 0xC28985: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/actions/diamondize.asm:16 BEQL @UNKNOWN3
    case 0xC28986: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/actions/diamondize.asm:16 BEQL @UNKNOWN3
    case 0xC28988: {
        Instruction step(cpu, 0x4C, 0x008A19u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/actions/diamondize.asm:17 LDY #STATUS_0::DIAMONDIZED
    case 0xC2898B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/actions/diamondize.asm:17 LDY #STATUS_0::DIAMONDIZED
    // Overlapping static entry reached from 0xC2898B.
    case 0xC2898D: {
        Instruction step(cpu, 0x00, 0x0000A2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/diamondize.asm:18 LDX #STATUS_GROUP::PERSISTENT_EASYHEAL
    case 0xC2898E: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/diamondize.asm:18 LDX #STATUS_GROUP::PERSISTENT_EASYHEAL
    // Overlapping static entry reached from 0xC2898E.
    case 0xC28990: {
        Instruction step(cpu, 0x00, 0x0000ADu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/diamondize.asm:19 LDA CURRENT_TARGET
    case 0xC28991: {
        Instruction step(cpu, 0xAD, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/diamondize.asm:19 LDA CURRENT_TARGET
    // Overlapping static entry reached from 0xC28A0B.
    case 0xC28992: {
        Instruction step(cpu, 0x74, 0x0000ABu, 2u, AddressMode::DirectPageIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/actions/diamondize.asm:20 JSR INFLICT_STATUS_BATTLE
    case 0xC28994: {
        Instruction step(cpu, 0x20, 0x00718Du, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/diamondize.asm:21 CMP #0
    case 0xC28997: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/diamondize.asm:21 CMP #0
    // Overlapping static entry reached from 0xC28997.
    case 0xC28999: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/actions/diamondize.asm:22 BEQL @UNKNOWN3
    case 0xC2899A: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/actions/diamondize.asm:22 BEQL @UNKNOWN3
    case 0xC2899C: {
        Instruction step(cpu, 0x4C, 0x008A19u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/actions/diamondize.asm:23 SEP #PROC_FLAGS::ACCUM8
    case 0xC2899F: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/actions/diamondize.asm:24 LDA #0
    case 0xC289A1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x00AE00u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/diamondize.asm:25 LDX CURRENT_TARGET
    case 0xC289A3: {
        Instruction step(cpu, 0xAE, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/diamondize.asm:25 LDX CURRENT_TARGET
    // Overlapping static entry reached from 0xC289A1.
    case 0xC289A4: {
        Instruction step(cpu, 0x74, 0x0000ABu, 2u, AddressMode::DirectPageIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/actions/diamondize.asm:26 STA a:battler::afflictions + STATUS_GROUP::SHIELD,X
    case 0xC289A6: {
        Instruction step(cpu, 0x9D, 0x000023u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/diamondize.asm:27 LDX CURRENT_TARGET
    case 0xC289A9: {
        Instruction step(cpu, 0xAE, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/diamondize.asm:28 STA a:battler::afflictions + STATUS_GROUP::HOMESICKNESS,X
    case 0xC289AC: {
        Instruction step(cpu, 0x9D, 0x000022u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/diamondize.asm:28 STA a:battler::afflictions + STATUS_GROUP::HOMESICKNESS,X
    // Overlapping static entry reached from 0xC2EC7D.
    case 0xC289AD: {
        Instruction step(cpu, 0x22, 0x74AE00u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/diamondize.asm:29 LDX CURRENT_TARGET
    case 0xC289AF: {
        Instruction step(cpu, 0xAE, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/diamondize.asm:29 LDX CURRENT_TARGET
    // Overlapping static entry reached from 0xC289AD.
    case 0xC289B1: {
        Instruction step(cpu, 0xAB, 0x000000u, 1u, AddressMode::Implied);
        step.pull_data_bank();
        return step.finish();
    }
    // src/battle/actions/diamondize.asm:30 STA a:battler::afflictions + STATUS_GROUP::CONCENTRATION,X
    case 0xC289B2: {
        Instruction step(cpu, 0x9D, 0x000021u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/diamondize.asm:31 LDX CURRENT_TARGET
    case 0xC289B5: {
        Instruction step(cpu, 0xAE, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/diamondize.asm:32 STA a:battler::afflictions + STATUS_GROUP::STRANGENESS,X
    case 0xC289B8: {
        Instruction step(cpu, 0x9D, 0x000020u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/diamondize.asm:33 LDX CURRENT_TARGET
    case 0xC289BB: {
        Instruction step(cpu, 0xAE, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/diamondize.asm:34 STA a:battler::afflictions + STATUS_GROUP::TEMPORARY,X
    case 0xC289BE: {
        Instruction step(cpu, 0x9D, 0x00001Fu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/diamondize.asm:35 LDX CURRENT_TARGET
    case 0xC289C1: {
        Instruction step(cpu, 0xAE, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/diamondize.asm:36 STA a:battler::afflictions + STATUS_GROUP::PERSISTENT_HARDHEAL,X
    case 0xC289C4: {
        Instruction step(cpu, 0x9D, 0x00001Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/diamondize.asm:37 REP #PROC_FLAGS::ACCUM8
    case 0xC289C7: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/actions/diamondize.asm:38 LDA CURRENT_TARGET
    case 0xC289C9: {
        Instruction step(cpu, 0xAD, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/diamondize.asm:39 CLC
    case 0xC289CC: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/actions/diamondize.asm:40 ADC #battler::exp
    case 0xC289CD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00003Fu : 0x00003Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/actions/diamondize.asm:40 ADC #battler::exp
    // Overlapping static entry reached from 0xC289CD.
    case 0xC289CF: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/diamondize.asm:41 TAY
    case 0xC289D0: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/battle/actions/diamondize.asm:42 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC289D1: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1114 STA dest
    // Macro caller: src/battle/actions/diamondize.asm:42 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC289D4: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/battle/actions/diamondize.asm:42 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC289D6: {
        Instruction step(cpu, 0xB9, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/battle/actions/diamondize.asm:42 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC289D9: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/diamondize.asm:43 MOVE_INT BATTLE_EXP_SCRATCH, @VIRTUAL06
    case 0xC289DB: {
        Instruction step(cpu, 0xAD, 0x00AB76u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/diamondize.asm:43 MOVE_INT BATTLE_EXP_SCRATCH, @VIRTUAL06
    case 0xC289DE: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/diamondize.asm:43 MOVE_INT BATTLE_EXP_SCRATCH, @VIRTUAL06
    case 0xC289E0: {
        Instruction step(cpu, 0xAD, 0x00AB78u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/diamondize.asm:43 MOVE_INT BATTLE_EXP_SCRATCH, @VIRTUAL06
    case 0xC289E3: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/diamondize.asm:44 CLC
    case 0xC289E5: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // include/macros.asm:942 LDA val1
    // Macro caller: src/battle/actions/diamondize.asm:45 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC289E6: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:943 ADC val2
    // Macro caller: src/battle/actions/diamondize.asm:45 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC289E8: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:944 STA dest
    // Macro caller: src/battle/actions/diamondize.asm:45 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC289EA: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:944 STA dest
    // Macro caller: src/battle/actions/diamondize.asm:45 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    // Overlapping static entry reached from 0xC28A64.
    case 0xC289EB: {
        Instruction step(cpu, 0x06, 0x0000A5u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/battle/actions/diamondize.asm:45 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC289EC: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/battle/actions/diamondize.asm:45 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    // Overlapping static entry reached from 0xC289EB.
    case 0xC289ED: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/battle/actions/diamondize.asm:45 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC289EE: {
        Instruction step(cpu, 0x65, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/battle/actions/diamondize.asm:45 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC289F0: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/diamondize.asm:46 MOVE_INT @VIRTUAL06, BATTLE_EXP_SCRATCH
    case 0xC289F2: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/diamondize.asm:46 MOVE_INT @VIRTUAL06, BATTLE_EXP_SCRATCH
    case 0xC289F4: {
        Instruction step(cpu, 0x8D, 0x00AB76u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/diamondize.asm:46 MOVE_INT @VIRTUAL06, BATTLE_EXP_SCRATCH
    case 0xC289F7: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/diamondize.asm:46 MOVE_INT @VIRTUAL06, BATTLE_EXP_SCRATCH
    case 0xC289F9: {
        Instruction step(cpu, 0x8D, 0x00AB78u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/diamondize.asm:47 LDX CURRENT_TARGET
    case 0xC289FC: {
        Instruction step(cpu, 0xAE, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/diamondize.asm:48 LDA a:battler::money,X
    case 0xC289FF: {
        Instruction step(cpu, 0xBD, 0x00003Du, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/diamondize.asm:49 CLC
    case 0xC28A02: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/actions/diamondize.asm:50 ADC BATTLE_MONEY_SCRATCH
    case 0xC28A03: {
        Instruction step(cpu, 0x6D, 0x00AB7Au, 3u, AddressMode::Absolute);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/actions/diamondize.asm:51 STA BATTLE_MONEY_SCRATCH
    case 0xC28A06: {
        Instruction step(cpu, 0x8D, 0x00AB7Au, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/diamondize.asm:52 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_DAIYA_ON
    case 0xC28A09: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Cu : 0x00300Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/diamondize.asm:52 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_DAIYA_ON
    // Overlapping static entry reached from 0xC28A09.
    case 0xC28A0B: {
        Instruction step(cpu, 0x30, 0x000085u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/diamondize.asm:52 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_DAIYA_ON
    case 0xC28A0C: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/diamondize.asm:52 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_DAIYA_ON
    // Overlapping static entry reached from 0xC28A0B.
    case 0xC28A0D: {
        Instruction step(cpu, 0x0E, 0x00C7A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/diamondize.asm:52 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_DAIYA_ON
    case 0xC28A0E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/diamondize.asm:52 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_DAIYA_ON
    // Overlapping static entry reached from 0xC28A0E.
    case 0xC28A10: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/diamondize.asm:52 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_DAIYA_ON
    case 0xC28A11: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/diamondize.asm:52 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_DAIYA_ON
    case 0xC28A13: {
        Instruction step(cpu, 0x22, 0xC1D9FFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/diamondize.asm:53 BRA @UNKNOWN4
    case 0xC28A17: {
        Instruction step(cpu, 0x80, 0x00000Eu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/diamondize.asm:55 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC28A19: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000CBu : 0x002DCBu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/diamondize.asm:55 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    // Overlapping static entry reached from 0xC28A19.
    case 0xC28A1B: {
        Instruction step(cpu, 0x2D, 0x000E85u, 3u, AddressMode::Absolute);
        step.and_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/diamondize.asm:55 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC28A1C: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/diamondize.asm:55 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC28A1E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/diamondize.asm:55 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    // Overlapping static entry reached from 0xC28A1E.
    case 0xC28A20: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/diamondize.asm:55 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC28A21: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/diamondize.asm:55 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC28A23: {
        Instruction step(cpu, 0x22, 0xC1D9FFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/actions/diamondize.asm:57 END_C_FUNCTION
    case 0xC28A27: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/diamondize.asm:57 END_C_FUNCTION
    case 0xC28A28: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
