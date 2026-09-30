// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/battle/determine_targetting.asm
bool resume_battle_determine_targetting(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/determine_targetting.asm:3 BEGIN_C_FUNCTION
    case 0xC1AC70: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/determine_targetting.asm:11 END_STACK_VARS
    case 0xC1AC72: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/determine_targetting.asm:11 END_STACK_VARS
    case 0xC1AC73: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/determine_targetting.asm:11 END_STACK_VARS
    case 0xC1AC74: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/determine_targetting.asm:11 END_STACK_VARS
    case 0xC1AC75: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000E7u : 0x00FFE7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/determine_targetting.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC1AC75.
    case 0xC1AC77: {
        Instruction step(cpu, 0xFF, 0x9B685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/determine_targetting.asm:11 END_STACK_VARS
    case 0xC1AC78: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/determine_targetting.asm:11 END_STACK_VARS
    case 0xC1AC79: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:12 TXY
    case 0xC1AC7A: {
        Instruction step(cpu, 0x9B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_y();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:13 TAX
    case 0xC1AC7B: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:14 SEP #PROC_FLAGS::ACCUM8
    case 0xC1AC7C: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:15 LDA #$00FF
    case 0xC1AC7E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x0085FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:16 STA @VIRTUAL01
    case 0xC1AC80: {
        Instruction step(cpu, 0x85, 0x000001u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:16 STA @VIRTUAL01
    // Overlapping static entry reached from 0xC1AC7E.
    case 0xC1AC81: {
        Instruction step(cpu, 0x01, 0x0000C2u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:17 REP #PROC_FLAGS::ACCUM8
    case 0xC1AC82: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:17 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC1AC81.
    case 0xC1AC83: {
        Instruction step(cpu, 0x20, 0x001EA9u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/determine_targetting.asm:18 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL06
    case 0xC1AC84: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00001Eu : 0x008B1Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/determine_targetting.asm:18 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1AC84.
    case 0xC1AC86: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/determine_targetting.asm:18 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL06
    case 0xC1AC87: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/determine_targetting.asm:18 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL06
    case 0xC1AC89: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D5u : 0x0000D5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/determine_targetting.asm:18 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1AC89.
    case 0xC1AC8B: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/determine_targetting.asm:18 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL06
    case 0xC1AC8C: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:19 TXA
    case 0xC1AC8E: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:568 STA scratch
    // Macro caller: src/battle/determine_targetting.asm:20 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC1AC8F: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:569 ASL
    // Macro caller: src/battle/determine_targetting.asm:20 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC1AC91: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/battle/determine_targetting.asm:20 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC1AC92: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:571 ASL
    // Macro caller: src/battle/determine_targetting.asm:20 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC1AC94: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:572 ASL
    // Macro caller: src/battle/determine_targetting.asm:20 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC1AC95: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:21 STA @LOCAL03
    case 0xC1AC96: {
        Instruction step(cpu, 0x85, 0x000017u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:22 PHA
    case 0xC1AC98: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/determine_targetting.asm:23 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC1AC99: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/determine_targetting.asm:23 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC1AC9B: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/determine_targetting.asm:23 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC1AC9D: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/determine_targetting.asm:23 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC1AC9F: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:24 PLA
    case 0xC1ACA1: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:25 CLC
    case 0xC1ACA2: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:26 ADC @VIRTUAL0A
    case 0xC1ACA3: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:27 STA @VIRTUAL0A
    case 0xC1ACA5: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:28 LDA [@VIRTUAL0A]
    case 0xC1ACA7: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:29 AND #$00FF
    case 0xC1ACA9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:29 AND #$00FF
    // Overlapping static entry reached from 0xC1ACA9.
    case 0xC1ACAB: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:30 BEQ @ENEMY_TARGETTING_PSI
    case 0xC1ACAC: {
        Instruction step(cpu, 0xF0, 0x00000Bu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:31 CMP #ACTION_DIRECTION::ENEMY
    case 0xC1ACAE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:31 CMP #ACTION_DIRECTION::ENEMY
    // Overlapping static entry reached from 0xC1ACAE.
    case 0xC1ACB0: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/determine_targetting.asm:32 BEQL @ALLY_TARGETTING_PSI
    case 0xC1ACB1: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/determine_targetting.asm:32 BEQL @ALLY_TARGETTING_PSI
    case 0xC1ACB3: {
        Instruction step(cpu, 0x4C, 0x00AD55u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:33 JMP @RETURN
    case 0xC1ACB6: {
        Instruction step(cpu, 0x4C, 0x00AE11u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:35 SEP #PROC_FLAGS::ACCUM8
    case 0xC1ACB9: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:36 LDA #TARGETTED::ENEMIES
    case 0xC1ACBB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000010u : 0x008510u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:37 STA @VIRTUAL00
    case 0xC1ACBD: {
        Instruction step(cpu, 0x85, 0x000000u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:37 STA @VIRTUAL00
    // Overlapping static entry reached from 0xC1ACBB.
    case 0xC1ACBE: {
        Instruction step(cpu, 0x00, 0x0000C2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:38 REP #PROC_FLAGS::ACCUM8
    case 0xC1ACBF: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:39 LDA @LOCAL03
    case 0xC1ACC1: {
        Instruction step(cpu, 0xA5, 0x000017u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:40 INC
    case 0xC1ACC3: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:41 CLC
    case 0xC1ACC4: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:42 ADC @VIRTUAL06
    case 0xC1ACC5: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:43 STA @VIRTUAL06
    case 0xC1ACC7: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:44 LDA [@VIRTUAL06]
    case 0xC1ACC9: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:45 AND #$00FF
    case 0xC1ACCB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:45 AND #$00FF
    // Overlapping static entry reached from 0xC1ACCB.
    case 0xC1ACCD: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:46 BEQ @ENEMY_NONE
    case 0xC1ACCE: {
        Instruction step(cpu, 0xF0, 0x000016u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:47 CMP #ACTION_TARGET::ONE
    case 0xC1ACD0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:47 CMP #ACTION_TARGET::ONE
    // Overlapping static entry reached from 0xC1ACD0.
    case 0xC1ACD2: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:48 BEQ @ENEMY_SINGLE
    case 0xC1ACD3: {
        Instruction step(cpu, 0xF0, 0x000020u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:49 CMP #ACTION_TARGET::RANDOM
    case 0xC1ACD5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:49 CMP #ACTION_TARGET::RANDOM
    // Overlapping static entry reached from 0xC1ACD5.
    case 0xC1ACD7: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:50 BEQ @ENEMY_SINGLE_RANDOM
    case 0xC1ACD8: {
        Instruction step(cpu, 0xF0, 0x000036u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:51 CMP #ACTION_TARGET::ROW
    case 0xC1ACDA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:51 CMP #ACTION_TARGET::ROW
    // Overlapping static entry reached from 0xC1ACDA.
    case 0xC1ACDC: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:52 BEQ @ENEMY_ROW
    case 0xC1ACDD: {
        Instruction step(cpu, 0xF0, 0x000050u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:53 CMP #ACTION_TARGET::ALL
    case 0xC1ACDF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:53 CMP #ACTION_TARGET::ALL
    // Overlapping static entry reached from 0xC1ACDF.
    case 0xC1ACE1: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:54 BEQ @ENEMY_ALL
    case 0xC1ACE2: {
        Instruction step(cpu, 0xF0, 0x000064u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:55 BRA @ENEMY_ALL
    case 0xC1ACE4: {
        Instruction step(cpu, 0x80, 0x000062u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:57 SEP #PROC_FLAGS::ACCUM8
    case 0xC1ACE6: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:58 LDA #TARGETTED::ENEMIES | TARGETTED::SINGLE
    case 0xC1ACE8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000011u : 0x008511u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:59 STA @VIRTUAL00
    case 0xC1ACEA: {
        Instruction step(cpu, 0x85, 0x000000u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:59 STA @VIRTUAL00
    // Overlapping static entry reached from 0xC1ACE8.
    case 0xC1ACEB: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:60 STA @LOCAL02
    case 0xC1ACEC: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:61 SEP #PROC_FLAGS::INDEX8
    case 0xC1ACEE: {
        Instruction step(cpu, 0xE2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:62 STY @VIRTUAL01
    case 0xC1ACF0: {
        Instruction step(cpu, 0x84, 0x000001u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:63 JMP @RETURN
    case 0xC1ACF2: {
        Instruction step(cpu, 0x4C, 0x00AE11u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:66 SEP #PROC_FLAGS::ACCUM8
    case 0xC1ACF5: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:67 LDA #TARGETTED::ENEMIES | TARGETTED::SINGLE
    case 0xC1ACF7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000011u : 0x008511u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:68 STA @VIRTUAL00
    case 0xC1ACF9: {
        Instruction step(cpu, 0x85, 0x000000u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:68 STA @VIRTUAL00
    // Overlapping static entry reached from 0xC1ACF7.
    case 0xC1ACFA: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:69 STA @LOCAL02
    case 0xC1ACFB: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:70 TXY
    case 0xC1ACFD: {
        Instruction step(cpu, 0x9B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_y();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:71 LDX #1
    case 0xC1ACFE: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:71 LDX #1
    // Overlapping static entry reached from 0xC1ACFE.
    case 0xC1AD00: {
        Instruction step(cpu, 0x00, 0x0000C2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:72 REP #PROC_FLAGS::ACCUM8
    case 0xC1AD01: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:73 LDA #0
    case 0xC1AD03: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:73 LDA #0
    // Overlapping static entry reached from 0xC1AD03.
    case 0xC1AD05: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:74 JSR UNKNOWN_C1242E
    case 0xC1AD06: {
        Instruction step(cpu, 0x20, 0x002B0Fu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:75 SEP #PROC_FLAGS::ACCUM8
    case 0xC1AD09: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:76 STA @VIRTUAL01
    case 0xC1AD0B: {
        Instruction step(cpu, 0x85, 0x000001u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:77 JMP @RETURN
    case 0xC1AD0D: {
        Instruction step(cpu, 0x4C, 0x00AE11u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:79 SEP #PROC_FLAGS::ACCUM8
    case 0xC1AD10: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:80 LDA #TARGETTED::ENEMIES | TARGETTED::SINGLE
    case 0xC1AD12: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000011u : 0x008511u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:81 STA @VIRTUAL00
    case 0xC1AD14: {
        Instruction step(cpu, 0x85, 0x000000u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:81 STA @VIRTUAL00
    // Overlapping static entry reached from 0xC1AD12.
    case 0xC1AD15: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:82 STA @LOCAL02
    case 0xC1AD16: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:83 REP #PROC_FLAGS::ACCUM8
    case 0xC1AD18: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:84 LDA #1
    case 0xC1AD1A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:84 LDA #1
    // Overlapping static entry reached from 0xC1AD1A.
    case 0xC1AD1C: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:85 JSL COUNT_CHARS
    case 0xC1AD1D: {
        Instruction step(cpu, 0x22, 0xC2BA70u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:86 DEC
    case 0xC1AD21: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:87 JSL RAND_MOD
    case 0xC1AD22: {
        Instruction step(cpu, 0x22, 0xC43CC9u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:88 SEP #PROC_FLAGS::ACCUM8
    case 0xC1AD26: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:89 STA @VIRTUAL01
    case 0xC1AD28: {
        Instruction step(cpu, 0x85, 0x000001u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:90 INC @VIRTUAL01
    case 0xC1AD2A: {
        Instruction step(cpu, 0xE6, 0x000001u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:91 JMP @RETURN
    case 0xC1AD2C: {
        Instruction step(cpu, 0x4C, 0x00AE11u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:93 SEP #PROC_FLAGS::ACCUM8
    case 0xC1AD2F: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:94 LDA #TARGETTED::ENEMIES | TARGETTED::ROW
    case 0xC1AD31: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000012u : 0x008512u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:95 STA @VIRTUAL00
    case 0xC1AD33: {
        Instruction step(cpu, 0x85, 0x000000u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:95 STA @VIRTUAL00
    // Overlapping static entry reached from 0xC1AD31.
    case 0xC1AD34: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:96 STA @LOCAL02
    case 0xC1AD35: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:97 TXY
    case 0xC1AD37: {
        Instruction step(cpu, 0x9B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_y();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:98 LDX #1
    case 0xC1AD38: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:98 LDX #1
    // Overlapping static entry reached from 0xC1AD38.
    case 0xC1AD3A: {
        Instruction step(cpu, 0x00, 0x0000C2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:99 REP #PROC_FLAGS::ACCUM8
    case 0xC1AD3B: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:100 TXA
    case 0xC1AD3D: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:101 JSR UNKNOWN_C1242E
    case 0xC1AD3E: {
        Instruction step(cpu, 0x20, 0x002B0Fu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:102 SEP #PROC_FLAGS::ACCUM8
    case 0xC1AD41: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:103 STA @VIRTUAL01
    case 0xC1AD43: {
        Instruction step(cpu, 0x85, 0x000001u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:104 JMP @RETURN
    case 0xC1AD45: {
        Instruction step(cpu, 0x4C, 0x00AE11u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:106 SEP #PROC_FLAGS::ACCUM8
    case 0xC1AD48: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:107 LDA @VIRTUAL00
    case 0xC1AD4A: {
        Instruction step(cpu, 0xA5, 0x000000u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:108 ORA #TARGETTED::ALL
    case 0xC1AD4C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x09, narrow ? 0x000004u : 0x008504u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:109 STA @VIRTUAL00
    case 0xC1AD4E: {
        Instruction step(cpu, 0x85, 0x000000u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:109 STA @VIRTUAL00
    // Overlapping static entry reached from 0xC1AD4C.
    case 0xC1AD4F: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:110 STA @LOCAL02
    case 0xC1AD50: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:111 JMP @RETURN
    case 0xC1AD52: {
        Instruction step(cpu, 0x4C, 0x00AE11u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:113 SEP #PROC_FLAGS::ACCUM8
    case 0xC1AD55: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:114 LDA #TARGETTED::ALLIES
    case 0xC1AD57: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x008500u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:115 STA @VIRTUAL00
    case 0xC1AD59: {
        Instruction step(cpu, 0x85, 0x000000u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:115 STA @VIRTUAL00
    // Overlapping static entry reached from 0xC1AD57.
    case 0xC1AD5A: {
        Instruction step(cpu, 0x00, 0x0000C2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:116 REP #PROC_FLAGS::ACCUM8
    case 0xC1AD5B: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:117 LDA @LOCAL03
    case 0xC1AD5D: {
        Instruction step(cpu, 0xA5, 0x000017u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:118 INC
    case 0xC1AD5F: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:119 CLC
    case 0xC1AD60: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:120 ADC @VIRTUAL06
    case 0xC1AD61: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:121 STA @VIRTUAL06
    case 0xC1AD63: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:122 LDA [@VIRTUAL06]
    case 0xC1AD65: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:123 AND #$00FF
    case 0xC1AD67: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:123 AND #$00FF
    // Overlapping static entry reached from 0xC1AD67.
    case 0xC1AD69: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:124 BEQ @ALLY_NONE
    case 0xC1AD6A: {
        Instruction step(cpu, 0xF0, 0x00001Du, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:125 CMP #ACTION_TARGET::ONE
    case 0xC1AD6C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:125 CMP #ACTION_TARGET::ONE
    // Overlapping static entry reached from 0xC1AD6C.
    case 0xC1AD6E: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:126 BEQ @ALLY_SINGLE
    case 0xC1AD6F: {
        Instruction step(cpu, 0xF0, 0x000027u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:127 CMP #ACTION_TARGET::RANDOM
    case 0xC1AD71: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:127 CMP #ACTION_TARGET::RANDOM
    // Overlapping static entry reached from 0xC1AD71.
    case 0xC1AD73: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:128 BEQ @ALLY_SINGLE_RANDOM
    case 0xC1AD74: {
        Instruction step(cpu, 0xF0, 0x00006Du, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:129 CMP #ACTION_TARGET::ROW
    case 0xC1AD76: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:129 CMP #ACTION_TARGET::ROW
    // Overlapping static entry reached from 0xC1AD76.
    case 0xC1AD78: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/determine_targetting.asm:130 BEQL @ALLY_ALL
    case 0xC1AD79: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/determine_targetting.asm:130 BEQL @ALLY_ALL
    case 0xC1AD7B: {
        Instruction step(cpu, 0x4C, 0x00AE07u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:131 CMP #ACTION_TARGET::ALL
    case 0xC1AD7E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:131 CMP #ACTION_TARGET::ALL
    // Overlapping static entry reached from 0xC1AD7E.
    case 0xC1AD80: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/determine_targetting.asm:132 BEQL @ALLY_ALL
    case 0xC1AD81: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/determine_targetting.asm:132 BEQL @ALLY_ALL
    case 0xC1AD83: {
        Instruction step(cpu, 0x4C, 0x00AE07u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:133 JMP @ALLY_ALL
    case 0xC1AD86: {
        Instruction step(cpu, 0x4C, 0x00AE07u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:135 SEP #PROC_FLAGS::ACCUM8
    case 0xC1AD89: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:136 LDA #TARGETTED::SINGLE | TARGETTED::ALLIES
    case 0xC1AD8B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x008501u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:137 STA @VIRTUAL00
    case 0xC1AD8D: {
        Instruction step(cpu, 0x85, 0x000000u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:137 STA @VIRTUAL00
    // Overlapping static entry reached from 0xC1AD8B.
    case 0xC1AD8E: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:138 STA @LOCAL02
    case 0xC1AD8F: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:139 SEP #PROC_FLAGS::INDEX8
    case 0xC1AD91: {
        Instruction step(cpu, 0xE2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:140 STY @VIRTUAL01
    case 0xC1AD93: {
        Instruction step(cpu, 0x84, 0x000001u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:142 JMP @RETURN
    case 0xC1AD95: {
        Instruction step(cpu, 0x4C, 0x00AE11u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:147 SEP #PROC_FLAGS::ACCUM8
    case 0xC1AD98: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:148 LDA #TARGETTED::SINGLE | TARGETTED::ALLIES
    case 0xC1AD9A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x008501u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:149 STA @VIRTUAL00
    case 0xC1AD9C: {
        Instruction step(cpu, 0x85, 0x000000u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:149 STA @VIRTUAL00
    // Overlapping static entry reached from 0xC1AD9A.
    case 0xC1AD9D: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:150 STA @LOCAL02
    case 0xC1AD9E: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:151 REP #PROC_FLAGS::ACCUM8
    case 0xC1ADA0: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:152 LDA GAME_STATE+game_state::player_controlled_party_count
    case 0xC1ADA2: {
        Instruction step(cpu, 0xAD, 0x009B55u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:153 AND #$00FF
    case 0xC1ADA5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:153 AND #$00FF
    // Overlapping static entry reached from 0xC1ADA5.
    case 0xC1ADA7: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:154 CMP #1
    case 0xC1ADA8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:154 CMP #1
    // Overlapping static entry reached from 0xC1ADA8.
    case 0xC1ADAA: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:155 BEQ @ONLY_ONE_ALLY
    case 0xC1ADAB: {
        Instruction step(cpu, 0xF0, 0x000030u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:156 LDA #3
    case 0xC1ADAD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:156 LDA #3
    // Overlapping static entry reached from 0xC1ADAD.
    case 0xC1ADAF: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:157 JSR UNKNOWN_C193E7
    case 0xC1ADB0: {
        Instruction step(cpu, 0x20, 0x00949Cu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/determine_targetting.asm:158 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC1ADB3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/determine_targetting.asm:158 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC1ADB3.
    case 0xC1ADB5: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/battle/determine_targetting.asm:158 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC1ADB6: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/determine_targetting.asm:158 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC1ADB8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/determine_targetting.asm:158 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC1ADB8.
    case 0xC1ADBA: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/battle/determine_targetting.asm:158 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC1ADBB: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/determine_targetting.asm:159 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1ADBD: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/determine_targetting.asm:159 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1ADBF: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/determine_targetting.asm:159 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1ADC1: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/determine_targetting.asm:159 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1ADC3: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/determine_targetting.asm:160 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1ADC5: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/determine_targetting.asm:160 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1ADC7: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/determine_targetting.asm:160 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1ADC9: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/determine_targetting.asm:160 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1ADCB: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:162 LDX #1
    case 0xC1ADCD: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:162 LDX #1
    // Overlapping static entry reached from 0xC1ADCD.
    case 0xC1ADCF: {
        Instruction step(cpu, 0x00, 0x00008Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:163 TXA
    case 0xC1ADD0: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:164 JSR CHAR_SELECT_PROMPT
    case 0xC1ADD1: {
        Instruction step(cpu, 0x20, 0x002EE7u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:165 SEP #PROC_FLAGS::ACCUM8
    case 0xC1ADD4: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:166 STA @VIRTUAL01
    case 0xC1ADD6: {
        Instruction step(cpu, 0x85, 0x000001u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:167 JSR UNKNOWN_C19437
    case 0xC1ADD8: {
        Instruction step(cpu, 0x20, 0x0094E5u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:168 BRA @RETURN
    case 0xC1ADDB: {
        Instruction step(cpu, 0x80, 0x000034u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:170 SEP #PROC_FLAGS::INDEX8
    case 0xC1ADDD: {
        Instruction step(cpu, 0xE2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:171 STY @VIRTUAL01
    case 0xC1ADDF: {
        Instruction step(cpu, 0x84, 0x000001u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:172 BRA @RETURN
    case 0xC1ADE1: {
        Instruction step(cpu, 0x80, 0x00002Eu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:174 SEP #PROC_FLAGS::ACCUM8
    case 0xC1ADE3: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:175 LDA #TARGETTED::ALLIES | TARGETTED::SINGLE
    case 0xC1ADE5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x008501u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:176 STA @VIRTUAL00
    case 0xC1ADE7: {
        Instruction step(cpu, 0x85, 0x000000u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:176 STA @VIRTUAL00
    // Overlapping static entry reached from 0xC1ADE5.
    case 0xC1ADE8: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:177 STA @LOCAL02
    case 0xC1ADE9: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:178 REP #PROC_FLAGS::ACCUM8
    case 0xC1ADEB: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:179 LDA #0
    case 0xC1ADED: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:179 LDA #0
    // Overlapping static entry reached from 0xC1ADED.
    case 0xC1ADEF: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:180 JSL COUNT_CHARS
    case 0xC1ADF0: {
        Instruction step(cpu, 0x22, 0xC2BA70u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:181 DEC
    case 0xC1ADF4: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:182 JSL RAND_MOD
    case 0xC1ADF5: {
        Instruction step(cpu, 0x22, 0xC43CC9u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:1302 CLC
    // Macro caller: src/battle/determine_targetting.asm:183 LDA8_STRUCT_MEMBER GAME_STATE, game_state::unknown96
    case 0xC1ADF9: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // include/macros.asm:1303 ADC #.LOWORD(struct)
    // Macro caller: src/battle/determine_targetting.asm:183 LDA8_STRUCT_MEMBER GAME_STATE, game_state::unknown96
    case 0xC1ADFA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000A9u : 0x009AA9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:1303 ADC #.LOWORD(struct)
    // Macro caller: src/battle/determine_targetting.asm:183 LDA8_STRUCT_MEMBER GAME_STATE, game_state::unknown96
    // Overlapping static entry reached from 0xC1ADFA.
    case 0xC1ADFC: {
        Instruction step(cpu, 0x9A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_stack();
        return step.finish();
    }
    // include/macros.asm:1304 TAX
    // Macro caller: src/battle/determine_targetting.asm:183 LDA8_STRUCT_MEMBER GAME_STATE, game_state::unknown96
    case 0xC1ADFD: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // include/macros.asm:1305 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/battle/determine_targetting.asm:183 LDA8_STRUCT_MEMBER GAME_STATE, game_state::unknown96
    case 0xC1ADFE: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:1306 LDA a:field,X
    // Macro caller: src/battle/determine_targetting.asm:183 LDA8_STRUCT_MEMBER GAME_STATE, game_state::unknown96
    case 0xC1AE00: {
        Instruction step(cpu, 0xBD, 0x000093u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:184 STA @VIRTUAL01
    case 0xC1AE03: {
        Instruction step(cpu, 0x85, 0x000001u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:185 BRA @RETURN
    case 0xC1AE05: {
        Instruction step(cpu, 0x80, 0x00000Au, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:187 SEP #PROC_FLAGS::ACCUM8
    case 0xC1AE07: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:188 LDA @VIRTUAL00
    case 0xC1AE09: {
        Instruction step(cpu, 0xA5, 0x000000u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:189 ORA #TARGETTED::ALL
    case 0xC1AE0B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x09, narrow ? 0x000004u : 0x008504u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:190 STA @VIRTUAL00
    case 0xC1AE0D: {
        Instruction step(cpu, 0x85, 0x000000u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:190 STA @VIRTUAL00
    // Overlapping static entry reached from 0xC1AE0B.
    case 0xC1AE0E: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:191 STA @LOCAL02
    case 0xC1AE0F: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:193 REP #PROC_FLAGS::ACCUM8
    case 0xC1AE11: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:194 LDA @VIRTUAL01
    case 0xC1AE13: {
        Instruction step(cpu, 0xA5, 0x000001u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:195 AND #$00FF
    case 0xC1AE15: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:195 AND #$00FF
    // Overlapping static entry reached from 0xC1AE15.
    case 0xC1AE17: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:196 STA @VIRTUAL02
    case 0xC1AE18: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:197 SEP #PROC_FLAGS::INDEX8
    case 0xC1AE1A: {
        Instruction step(cpu, 0xE2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:198 LDY #8
    case 0xC1AE1C: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000008u : 0x00E208u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:199 SEP #PROC_FLAGS::ACCUM8
    case 0xC1AE1E: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:199 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC1AE1C.
    case 0xC1AE1F: {
        Instruction step(cpu, 0x20, 0x0016A5u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:200 LDA @LOCAL02
    case 0xC1AE20: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:201 STA @VIRTUAL00
    case 0xC1AE22: {
        Instruction step(cpu, 0x85, 0x000000u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:202 REP #PROC_FLAGS::ACCUM8
    case 0xC1AE24: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:203 LDA @VIRTUAL00
    case 0xC1AE26: {
        Instruction step(cpu, 0xA5, 0x000000u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:204 AND #$00FF
    case 0xC1AE28: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:204 AND #$00FF
    // Overlapping static entry reached from 0xC1AE28.
    case 0xC1AE2A: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:205 JSL ASL16_ENTRY2
    case 0xC1AE2B: {
        Instruction step(cpu, 0x22, 0xC09220u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:206 ORA @VIRTUAL02
    case 0xC1AE2F: {
        Instruction step(cpu, 0x05, 0x000002u, 2u, AddressMode::DirectPage);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:207 REP #PROC_FLAGS::INDEX8
    case 0xC1AE31: {
        Instruction step(cpu, 0xC2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/determine_targetting.asm:208 END_C_FUNCTION
    case 0xC1AE33: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/determine_targetting.asm:208 END_C_FUNCTION
    case 0xC1AE34: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
