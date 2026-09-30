// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/battle/feeling_strange_retargetting.asm
bool resume_battle_feeling_strange_retargetting(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/feeling_strange_retargetting.asm:3 BEGIN_C_FUNCTION
    case 0xC23EBD: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/feeling_strange_retargetting.asm:6 END_STACK_VARS
    case 0xC23EBF: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/feeling_strange_retargetting.asm:6 END_STACK_VARS
    case 0xC23EC0: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/feeling_strange_retargetting.asm:6 END_STACK_VARS
    case 0xC23EC1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EEu : 0x00FFEEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/feeling_strange_retargetting.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC23EC1.
    case 0xC23EC3: {
        Instruction step(cpu, 0xFF, 0x00A95Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/feeling_strange_retargetting.asm:6 END_STACK_VARS
    case 0xC23EC4: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/feeling_strange_retargetting.asm:7 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    case 0xC23EC5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/feeling_strange_retargetting.asm:7 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    // Overlapping static entry reached from 0xC23EC5.
    case 0xC23EC7: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/battle/feeling_strange_retargetting.asm:7 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    case 0xC23EC8: {
        Instruction step(cpu, 0x8D, 0x00AB6Eu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/feeling_strange_retargetting.asm:7 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    case 0xC23ECB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/feeling_strange_retargetting.asm:7 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    // Overlapping static entry reached from 0xC23ECB.
    case 0xC23ECD: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/battle/feeling_strange_retargetting.asm:7 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    case 0xC23ECE: {
        Instruction step(cpu, 0x8D, 0x00AB70u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/feeling_strange_retargetting.asm:8 LDX CURRENT_ATTACKER
    case 0xC23ED1: {
        Instruction step(cpu, 0xAE, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/feeling_strange_retargetting.asm:9 LDA a:battler::action_targetting,X
    case 0xC23ED4: {
        Instruction step(cpu, 0xBD, 0x000009u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/feeling_strange_retargetting.asm:10 AND #$00FF
    case 0xC23ED7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/feeling_strange_retargetting.asm:10 AND #$00FF
    // Overlapping static entry reached from 0xC23ED7.
    case 0xC23ED9: {
        Instruction step(cpu, 0x00, 0x000029u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/feeling_strange_retargetting.asm:11 AND #$0007
    case 0xC23EDA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000007u : 0x000007u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/feeling_strange_retargetting.asm:11 AND #$0007
    // Overlapping static entry reached from 0xC23EDA.
    case 0xC23EDC: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/feeling_strange_retargetting.asm:12 CMP #ACTION_TARGET::ONE
    case 0xC23EDD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/feeling_strange_retargetting.asm:12 CMP #ACTION_TARGET::ONE
    // Overlapping static entry reached from 0xC23EDD.
    case 0xC23EDF: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/feeling_strange_retargetting.asm:13 BEQ @UNKNOWN0
    case 0xC23EE0: {
        Instruction step(cpu, 0xF0, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/feeling_strange_retargetting.asm:14 CMP #ACTION_TARGET::RANDOM
    case 0xC23EE2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/feeling_strange_retargetting.asm:14 CMP #ACTION_TARGET::RANDOM
    // Overlapping static entry reached from 0xC23EE2.
    case 0xC23EE4: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/feeling_strange_retargetting.asm:15 BEQ @UNKNOWN1
    case 0xC23EE5: {
        Instruction step(cpu, 0xF0, 0x00002Du, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/feeling_strange_retargetting.asm:16 CMP #ACTION_TARGET::ALL
    case 0xC23EE7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/feeling_strange_retargetting.asm:16 CMP #ACTION_TARGET::ALL
    // Overlapping static entry reached from 0xC23EE7.
    case 0xC23EE9: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/feeling_strange_retargetting.asm:17 BEQ @UNKNOWN2
    case 0xC23EEA: {
        Instruction step(cpu, 0xF0, 0x000039u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/feeling_strange_retargetting.asm:18 BRA @UNKNOWN5
    case 0xC23EEC: {
        Instruction step(cpu, 0x80, 0x000068u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/feeling_strange_retargetting.asm:20 JSL TARGET_ALL
    case 0xC23EEE: {
        Instruction step(cpu, 0x22, 0xC26D3Fu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/feeling_strange_retargetting.asm:21 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC23EF2: {
        Instruction step(cpu, 0xAD, 0x00AB6Eu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/feeling_strange_retargetting.asm:21 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC23EF5: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/feeling_strange_retargetting.asm:21 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC23EF7: {
        Instruction step(cpu, 0xAD, 0x00AB70u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/feeling_strange_retargetting.asm:21 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC23EFA: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/feeling_strange_retargetting.asm:22 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC23EFC: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/feeling_strange_retargetting.asm:22 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC23EFE: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/feeling_strange_retargetting.asm:22 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC23F00: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/feeling_strange_retargetting.asm:22 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC23F02: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/feeling_strange_retargetting.asm:23 JSL RANDOM_TARGETTING
    case 0xC23F04: {
        Instruction step(cpu, 0x22, 0xC26E37u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/feeling_strange_retargetting.asm:24 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC23F08: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/feeling_strange_retargetting.asm:24 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC23F0A: {
        Instruction step(cpu, 0x8D, 0x00AB6Eu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/feeling_strange_retargetting.asm:24 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC23F0D: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/feeling_strange_retargetting.asm:24 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC23F0F: {
        Instruction step(cpu, 0x8D, 0x00AB70u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/feeling_strange_retargetting.asm:25 BRA @UNKNOWN5
    case 0xC23F12: {
        Instruction step(cpu, 0x80, 0x000042u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/feeling_strange_retargetting.asm:27 JSL RAND
    case 0xC23F14: {
        Instruction step(cpu, 0x22, 0xC08E8Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/feeling_strange_retargetting.asm:28 LDY #3
    case 0xC23F18: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/feeling_strange_retargetting.asm:28 LDY #3
    // Overlapping static entry reached from 0xC23F18.
    case 0xC23F1A: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/feeling_strange_retargetting.asm:29 JSL MODULUS16
    case 0xC23F1B: {
        Instruction step(cpu, 0x22, 0xC09213u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/feeling_strange_retargetting.asm:30 JSL TARGET_ROW
    case 0xC23F1F: {
        Instruction step(cpu, 0x22, 0xC26C43u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/feeling_strange_retargetting.asm:31 BRA @UNKNOWN5
    case 0xC23F23: {
        Instruction step(cpu, 0x80, 0x000031u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/feeling_strange_retargetting.asm:33 JSL RAND
    case 0xC23F25: {
        Instruction step(cpu, 0x22, 0xC08E8Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/feeling_strange_retargetting.asm:34 AND #$0001
    case 0xC23F29: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/feeling_strange_retargetting.asm:34 AND #$0001
    // Overlapping static entry reached from 0xC23F29.
    case 0xC23F2B: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/feeling_strange_retargetting.asm:35 BEQ @UNKNOWN3
    case 0xC23F2C: {
        Instruction step(cpu, 0xF0, 0x000006u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/feeling_strange_retargetting.asm:36 JSL TARGET_ALLIES
    case 0xC23F2E: {
        Instruction step(cpu, 0x22, 0xC26B3Au, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/feeling_strange_retargetting.asm:37 BRA @UNKNOWN4
    case 0xC23F32: {
        Instruction step(cpu, 0x80, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/feeling_strange_retargetting.asm:39 JSL TARGET_ALL_ENEMIES
    case 0xC23F34: {
        Instruction step(cpu, 0x22, 0xC26BC1u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/feeling_strange_retargetting.asm:41 LDX CURRENT_ATTACKER
    case 0xC23F38: {
        Instruction step(cpu, 0xAE, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/feeling_strange_retargetting.asm:42 LDA a:battler::current_action,X
    case 0xC23F3B: {
        Instruction step(cpu, 0xBD, 0x000004u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/feeling_strange_retargetting.asm:43 JSL GET_SHIELD_TARGETTING
    case 0xC23F3E: {
        Instruction step(cpu, 0x22, 0xC23E9Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/feeling_strange_retargetting.asm:44 CMP #0
    case 0xC23F42: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/feeling_strange_retargetting.asm:44 CMP #0
    // Overlapping static entry reached from 0xC23F42.
    case 0xC23F44: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/feeling_strange_retargetting.asm:45 BNE @UNKNOWN5
    case 0xC23F45: {
        Instruction step(cpu, 0xD0, 0x00000Fu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/feeling_strange_retargetting.asm:46 LDX CURRENT_ATTACKER
    case 0xC23F47: {
        Instruction step(cpu, 0xAE, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/feeling_strange_retargetting.asm:47 LDA a:battler::ally_or_enemy,X
    case 0xC23F4A: {
        Instruction step(cpu, 0xBD, 0x00000Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/feeling_strange_retargetting.asm:48 AND #$00FF
    case 0xC23F4D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/feeling_strange_retargetting.asm:48 AND #$00FF
    // Overlapping static entry reached from 0xC23F4D.
    case 0xC23F4F: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/feeling_strange_retargetting.asm:49 BNE @UNKNOWN5
    case 0xC23F50: {
        Instruction step(cpu, 0xD0, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/feeling_strange_retargetting.asm:50 JSL REMOVE_NPC_TARGETTING
    case 0xC23F52: {
        Instruction step(cpu, 0x22, 0xC26DB6u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/feeling_strange_retargetting.asm:52 END_C_FUNCTION
    case 0xC23F56: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/feeling_strange_retargetting.asm:52 END_C_FUNCTION
    case 0xC23F57: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
