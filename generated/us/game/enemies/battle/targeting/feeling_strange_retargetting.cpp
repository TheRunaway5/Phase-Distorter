// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/battle/feeling_strange_retargetting.asm
bool resume_battle_feeling_strange_retargetting(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/feeling_strange_retargetting.asm:3 BEGIN_C_FUNCTION
    case 0xC24009: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/feeling_strange_retargetting.asm:6 END_STACK_VARS
    case 0xC2400B: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/feeling_strange_retargetting.asm:6 END_STACK_VARS
    case 0xC2400C: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/feeling_strange_retargetting.asm:6 END_STACK_VARS
    case 0xC2400D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EEu : 0x00FFEEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/feeling_strange_retargetting.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC2400D.
    case 0xC2400F: {
        Instruction step(cpu, 0xFF, 0x00A95Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/feeling_strange_retargetting.asm:6 END_STACK_VARS
    case 0xC24010: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/feeling_strange_retargetting.asm:7 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    case 0xC24011: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/feeling_strange_retargetting.asm:7 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    // Overlapping static entry reached from 0xC24011.
    case 0xC24013: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/battle/feeling_strange_retargetting.asm:7 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    case 0xC24014: {
        Instruction step(cpu, 0x8D, 0x00A96Cu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/feeling_strange_retargetting.asm:7 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    case 0xC24017: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/feeling_strange_retargetting.asm:7 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    // Overlapping static entry reached from 0xC24017.
    case 0xC24019: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/battle/feeling_strange_retargetting.asm:7 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    case 0xC2401A: {
        Instruction step(cpu, 0x8D, 0x00A96Eu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/feeling_strange_retargetting.asm:8 LDX CURRENT_ATTACKER
    case 0xC2401D: {
        Instruction step(cpu, 0xAE, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/feeling_strange_retargetting.asm:9 LDA a:battler::action_targetting,X
    case 0xC24020: {
        Instruction step(cpu, 0xBD, 0x000009u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/feeling_strange_retargetting.asm:10 AND #$00FF
    case 0xC24023: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/feeling_strange_retargetting.asm:10 AND #$00FF
    // Overlapping static entry reached from 0xC24023.
    case 0xC24025: {
        Instruction step(cpu, 0x00, 0x000029u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/feeling_strange_retargetting.asm:11 AND #$0007
    case 0xC24026: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000007u : 0x000007u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/feeling_strange_retargetting.asm:11 AND #$0007
    // Overlapping static entry reached from 0xC24026.
    case 0xC24028: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/feeling_strange_retargetting.asm:12 CMP #ACTION_TARGET::ONE
    case 0xC24029: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/feeling_strange_retargetting.asm:12 CMP #ACTION_TARGET::ONE
    // Overlapping static entry reached from 0xC24029.
    case 0xC2402B: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/feeling_strange_retargetting.asm:13 BEQ @UNKNOWN0
    case 0xC2402C: {
        Instruction step(cpu, 0xF0, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/feeling_strange_retargetting.asm:14 CMP #ACTION_TARGET::RANDOM
    case 0xC2402E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/feeling_strange_retargetting.asm:14 CMP #ACTION_TARGET::RANDOM
    // Overlapping static entry reached from 0xC2402E.
    case 0xC24030: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/feeling_strange_retargetting.asm:15 BEQ @UNKNOWN1
    case 0xC24031: {
        Instruction step(cpu, 0xF0, 0x00002Du, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/feeling_strange_retargetting.asm:16 CMP #ACTION_TARGET::ALL
    case 0xC24033: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/feeling_strange_retargetting.asm:16 CMP #ACTION_TARGET::ALL
    // Overlapping static entry reached from 0xC24033.
    case 0xC24035: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/feeling_strange_retargetting.asm:17 BEQ @UNKNOWN2
    case 0xC24036: {
        Instruction step(cpu, 0xF0, 0x000039u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/feeling_strange_retargetting.asm:18 BRA @UNKNOWN5
    case 0xC24038: {
        Instruction step(cpu, 0x80, 0x000068u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/feeling_strange_retargetting.asm:20 JSL TARGET_ALL
    case 0xC2403A: {
        Instruction step(cpu, 0x22, 0xC26E00u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/feeling_strange_retargetting.asm:21 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC2403E: {
        Instruction step(cpu, 0xAD, 0x00A96Cu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/feeling_strange_retargetting.asm:21 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC24041: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/feeling_strange_retargetting.asm:21 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC24043: {
        Instruction step(cpu, 0xAD, 0x00A96Eu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/feeling_strange_retargetting.asm:21 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC24046: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/feeling_strange_retargetting.asm:22 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC24048: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/feeling_strange_retargetting.asm:22 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2404A: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/feeling_strange_retargetting.asm:22 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2404C: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/feeling_strange_retargetting.asm:22 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2404E: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/feeling_strange_retargetting.asm:23 JSL RANDOM_TARGETTING
    case 0xC24050: {
        Instruction step(cpu, 0x22, 0xC26EF8u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/feeling_strange_retargetting.asm:24 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC24054: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/feeling_strange_retargetting.asm:24 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC24056: {
        Instruction step(cpu, 0x8D, 0x00A96Cu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/feeling_strange_retargetting.asm:24 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC24059: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/feeling_strange_retargetting.asm:24 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC2405B: {
        Instruction step(cpu, 0x8D, 0x00A96Eu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/feeling_strange_retargetting.asm:25 BRA @UNKNOWN5
    case 0xC2405E: {
        Instruction step(cpu, 0x80, 0x000042u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/feeling_strange_retargetting.asm:27 JSL RAND
    case 0xC24060: {
        Instruction step(cpu, 0x22, 0xC08E9Au, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/feeling_strange_retargetting.asm:28 LDY #3
    case 0xC24064: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/feeling_strange_retargetting.asm:28 LDY #3
    // Overlapping static entry reached from 0xC24064.
    case 0xC24066: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/feeling_strange_retargetting.asm:29 JSL MODULUS16
    case 0xC24067: {
        Instruction step(cpu, 0x22, 0xC09231u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/feeling_strange_retargetting.asm:30 JSL TARGET_ROW
    case 0xC2406B: {
        Instruction step(cpu, 0x22, 0xC26D04u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/feeling_strange_retargetting.asm:31 BRA @UNKNOWN5
    case 0xC2406F: {
        Instruction step(cpu, 0x80, 0x000031u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/feeling_strange_retargetting.asm:33 JSL RAND
    case 0xC24071: {
        Instruction step(cpu, 0x22, 0xC08E9Au, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/feeling_strange_retargetting.asm:34 AND #$0001
    case 0xC24075: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/feeling_strange_retargetting.asm:34 AND #$0001
    // Overlapping static entry reached from 0xC24075.
    case 0xC24077: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/feeling_strange_retargetting.asm:35 BEQ @UNKNOWN3
    case 0xC24078: {
        Instruction step(cpu, 0xF0, 0x000006u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/feeling_strange_retargetting.asm:36 JSL TARGET_ALLIES
    case 0xC2407A: {
        Instruction step(cpu, 0x22, 0xC26BFBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/feeling_strange_retargetting.asm:37 BRA @UNKNOWN4
    case 0xC2407E: {
        Instruction step(cpu, 0x80, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/feeling_strange_retargetting.asm:39 JSL TARGET_ALL_ENEMIES
    case 0xC24080: {
        Instruction step(cpu, 0x22, 0xC26C82u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/feeling_strange_retargetting.asm:41 LDX CURRENT_ATTACKER
    case 0xC24084: {
        Instruction step(cpu, 0xAE, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/feeling_strange_retargetting.asm:42 LDA a:battler::current_action,X
    case 0xC24087: {
        Instruction step(cpu, 0xBD, 0x000004u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/feeling_strange_retargetting.asm:43 JSL GET_SHIELD_TARGETTING
    case 0xC2408A: {
        Instruction step(cpu, 0x22, 0xC23FEAu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/feeling_strange_retargetting.asm:44 CMP #0
    case 0xC2408E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/feeling_strange_retargetting.asm:44 CMP #0
    // Overlapping static entry reached from 0xC2408E.
    case 0xC24090: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/feeling_strange_retargetting.asm:45 BNE @UNKNOWN5
    case 0xC24091: {
        Instruction step(cpu, 0xD0, 0x00000Fu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/feeling_strange_retargetting.asm:46 LDX CURRENT_ATTACKER
    case 0xC24093: {
        Instruction step(cpu, 0xAE, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/feeling_strange_retargetting.asm:47 LDA a:battler::ally_or_enemy,X
    case 0xC24096: {
        Instruction step(cpu, 0xBD, 0x00000Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/feeling_strange_retargetting.asm:48 AND #$00FF
    case 0xC24099: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/feeling_strange_retargetting.asm:48 AND #$00FF
    // Overlapping static entry reached from 0xC24099.
    case 0xC2409B: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/feeling_strange_retargetting.asm:49 BNE @UNKNOWN5
    case 0xC2409C: {
        Instruction step(cpu, 0xD0, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/feeling_strange_retargetting.asm:50 JSL REMOVE_NPC_TARGETTING
    case 0xC2409E: {
        Instruction step(cpu, 0x22, 0xC26E77u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/feeling_strange_retargetting.asm:52 END_C_FUNCTION
    case 0xC240A2: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/feeling_strange_retargetting.asm:52 END_C_FUNCTION
    case 0xC240A3: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
