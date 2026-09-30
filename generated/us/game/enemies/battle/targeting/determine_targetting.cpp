// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/battle/determine_targetting.asm
bool resume_battle_determine_targetting(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/determine_targetting.asm:3 BEGIN_C_FUNCTION
    case 0xC1ADB4: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/determine_targetting.asm:11 END_STACK_VARS
    case 0xC1ADB6: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/determine_targetting.asm:11 END_STACK_VARS
    case 0xC1ADB7: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/determine_targetting.asm:11 END_STACK_VARS
    case 0xC1ADB8: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/determine_targetting.asm:11 END_STACK_VARS
    case 0xC1ADB9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000E7u : 0x00FFE7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/determine_targetting.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC1ADB9.
    case 0xC1ADBB: {
        Instruction step(cpu, 0xFF, 0x9B685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/determine_targetting.asm:11 END_STACK_VARS
    case 0xC1ADBC: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/determine_targetting.asm:11 END_STACK_VARS
    case 0xC1ADBD: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:12 TXY
    case 0xC1ADBE: {
        Instruction step(cpu, 0x9B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_y();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:13 TAX
    case 0xC1ADBF: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:14 SEP #PROC_FLAGS::ACCUM8
    case 0xC1ADC0: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:15 LDA #$00FF
    case 0xC1ADC2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x0085FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:16 STA @VIRTUAL01
    case 0xC1ADC4: {
        Instruction step(cpu, 0x85, 0x000001u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:16 STA @VIRTUAL01
    // Overlapping static entry reached from 0xC1ADC2.
    case 0xC1ADC5: {
        Instruction step(cpu, 0x01, 0x0000C2u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:17 REP #PROC_FLAGS::ACCUM8
    case 0xC1ADC6: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:17 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC1ADC5.
    case 0xC1ADC7: {
        Instruction step(cpu, 0x20, 0x0068A9u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/determine_targetting.asm:18 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL06
    case 0xC1ADC8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000068u : 0x007B68u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/determine_targetting.asm:18 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1ADC8.
    case 0xC1ADCA: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/determine_targetting.asm:18 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL06
    case 0xC1ADCB: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/determine_targetting.asm:18 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL06
    case 0xC1ADCD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D5u : 0x0000D5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/determine_targetting.asm:18 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1ADCD.
    case 0xC1ADCF: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/determine_targetting.asm:18 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL06
    case 0xC1ADD0: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:19 TXA
    case 0xC1ADD2: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:568 STA scratch
    // Macro caller: src/battle/determine_targetting.asm:20 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC1ADD3: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:569 ASL
    // Macro caller: src/battle/determine_targetting.asm:20 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC1ADD5: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/battle/determine_targetting.asm:20 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC1ADD6: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:571 ASL
    // Macro caller: src/battle/determine_targetting.asm:20 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC1ADD8: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:572 ASL
    // Macro caller: src/battle/determine_targetting.asm:20 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC1ADD9: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:21 STA @LOCAL03
    case 0xC1ADDA: {
        Instruction step(cpu, 0x85, 0x000017u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:22 PHA
    case 0xC1ADDC: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/determine_targetting.asm:23 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC1ADDD: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/determine_targetting.asm:23 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC1ADDF: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/determine_targetting.asm:23 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC1ADE1: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/determine_targetting.asm:23 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC1ADE3: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:24 PLA
    case 0xC1ADE5: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:25 CLC
    case 0xC1ADE6: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:26 ADC @VIRTUAL0A
    case 0xC1ADE7: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:27 STA @VIRTUAL0A
    case 0xC1ADE9: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:28 LDA [@VIRTUAL0A]
    case 0xC1ADEB: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:29 AND #$00FF
    case 0xC1ADED: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:29 AND #$00FF
    // Overlapping static entry reached from 0xC1ADED.
    case 0xC1ADEF: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:30 BEQ @ENEMY_TARGETTING_PSI
    case 0xC1ADF0: {
        Instruction step(cpu, 0xF0, 0x00000Bu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:31 CMP #ACTION_DIRECTION::ENEMY
    case 0xC1ADF2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:31 CMP #ACTION_DIRECTION::ENEMY
    // Overlapping static entry reached from 0xC1ADF2.
    case 0xC1ADF4: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/determine_targetting.asm:32 BEQL @ALLY_TARGETTING_PSI
    case 0xC1ADF5: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/determine_targetting.asm:32 BEQL @ALLY_TARGETTING_PSI
    case 0xC1ADF7: {
        Instruction step(cpu, 0x4C, 0x00AE99u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:33 JMP @RETURN
    case 0xC1ADFA: {
        Instruction step(cpu, 0x4C, 0x00AF50u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:35 SEP #PROC_FLAGS::ACCUM8
    case 0xC1ADFD: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:36 LDA #TARGETTED::ENEMIES
    case 0xC1ADFF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000010u : 0x008510u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:37 STA @VIRTUAL00
    case 0xC1AE01: {
        Instruction step(cpu, 0x85, 0x000000u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:37 STA @VIRTUAL00
    // Overlapping static entry reached from 0xC1ADFF.
    case 0xC1AE02: {
        Instruction step(cpu, 0x00, 0x0000C2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:38 REP #PROC_FLAGS::ACCUM8
    case 0xC1AE03: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:39 LDA @LOCAL03
    case 0xC1AE05: {
        Instruction step(cpu, 0xA5, 0x000017u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:40 INC
    case 0xC1AE07: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:41 CLC
    case 0xC1AE08: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:42 ADC @VIRTUAL06
    case 0xC1AE09: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:43 STA @VIRTUAL06
    case 0xC1AE0B: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:44 LDA [@VIRTUAL06]
    case 0xC1AE0D: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:45 AND #$00FF
    case 0xC1AE0F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:45 AND #$00FF
    // Overlapping static entry reached from 0xC1AE0F.
    case 0xC1AE11: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:46 BEQ @ENEMY_NONE
    case 0xC1AE12: {
        Instruction step(cpu, 0xF0, 0x000016u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:47 CMP #ACTION_TARGET::ONE
    case 0xC1AE14: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:47 CMP #ACTION_TARGET::ONE
    // Overlapping static entry reached from 0xC1AE14.
    case 0xC1AE16: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:48 BEQ @ENEMY_SINGLE
    case 0xC1AE17: {
        Instruction step(cpu, 0xF0, 0x000020u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:49 CMP #ACTION_TARGET::RANDOM
    case 0xC1AE19: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:49 CMP #ACTION_TARGET::RANDOM
    // Overlapping static entry reached from 0xC1AE19.
    case 0xC1AE1B: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:50 BEQ @ENEMY_SINGLE_RANDOM
    case 0xC1AE1C: {
        Instruction step(cpu, 0xF0, 0x000036u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:51 CMP #ACTION_TARGET::ROW
    case 0xC1AE1E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:51 CMP #ACTION_TARGET::ROW
    // Overlapping static entry reached from 0xC1AE1E.
    case 0xC1AE20: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:52 BEQ @ENEMY_ROW
    case 0xC1AE21: {
        Instruction step(cpu, 0xF0, 0x000050u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:53 CMP #ACTION_TARGET::ALL
    case 0xC1AE23: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:53 CMP #ACTION_TARGET::ALL
    // Overlapping static entry reached from 0xC1AE23.
    case 0xC1AE25: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:54 BEQ @ENEMY_ALL
    case 0xC1AE26: {
        Instruction step(cpu, 0xF0, 0x000064u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:55 BRA @ENEMY_ALL
    case 0xC1AE28: {
        Instruction step(cpu, 0x80, 0x000062u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:57 SEP #PROC_FLAGS::ACCUM8
    case 0xC1AE2A: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:58 LDA #TARGETTED::ENEMIES | TARGETTED::SINGLE
    case 0xC1AE2C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000011u : 0x008511u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:59 STA @VIRTUAL00
    case 0xC1AE2E: {
        Instruction step(cpu, 0x85, 0x000000u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:59 STA @VIRTUAL00
    // Overlapping static entry reached from 0xC1AE2C.
    case 0xC1AE2F: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:60 STA @LOCAL02
    case 0xC1AE30: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:61 SEP #PROC_FLAGS::INDEX8
    case 0xC1AE32: {
        Instruction step(cpu, 0xE2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:62 STY @VIRTUAL01
    case 0xC1AE34: {
        Instruction step(cpu, 0x84, 0x000001u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:63 JMP @RETURN
    case 0xC1AE36: {
        Instruction step(cpu, 0x4C, 0x00AF50u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:66 SEP #PROC_FLAGS::ACCUM8
    case 0xC1AE39: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:67 LDA #TARGETTED::ENEMIES | TARGETTED::SINGLE
    case 0xC1AE3B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000011u : 0x008511u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:68 STA @VIRTUAL00
    case 0xC1AE3D: {
        Instruction step(cpu, 0x85, 0x000000u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:68 STA @VIRTUAL00
    // Overlapping static entry reached from 0xC1AE3B.
    case 0xC1AE3E: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:69 STA @LOCAL02
    case 0xC1AE3F: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:70 TXY
    case 0xC1AE41: {
        Instruction step(cpu, 0x9B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_y();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:71 LDX #1
    case 0xC1AE42: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:71 LDX #1
    // Overlapping static entry reached from 0xC1AE42.
    case 0xC1AE44: {
        Instruction step(cpu, 0x00, 0x0000C2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:72 REP #PROC_FLAGS::ACCUM8
    case 0xC1AE45: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:73 LDA #0
    case 0xC1AE47: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:73 LDA #0
    // Overlapping static entry reached from 0xC1AE47.
    case 0xC1AE49: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:74 JSR UNKNOWN_C1242E
    case 0xC1AE4A: {
        Instruction step(cpu, 0x20, 0x00242Eu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:75 SEP #PROC_FLAGS::ACCUM8
    case 0xC1AE4D: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:76 STA @VIRTUAL01
    case 0xC1AE4F: {
        Instruction step(cpu, 0x85, 0x000001u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:77 JMP @RETURN
    case 0xC1AE51: {
        Instruction step(cpu, 0x4C, 0x00AF50u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:79 SEP #PROC_FLAGS::ACCUM8
    case 0xC1AE54: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:80 LDA #TARGETTED::ENEMIES | TARGETTED::SINGLE
    case 0xC1AE56: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000011u : 0x008511u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:81 STA @VIRTUAL00
    case 0xC1AE58: {
        Instruction step(cpu, 0x85, 0x000000u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:81 STA @VIRTUAL00
    // Overlapping static entry reached from 0xC1AE56.
    case 0xC1AE59: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:82 STA @LOCAL02
    case 0xC1AE5A: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:83 REP #PROC_FLAGS::ACCUM8
    case 0xC1AE5C: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:84 LDA #1
    case 0xC1AE5E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:84 LDA #1
    // Overlapping static entry reached from 0xC1AE5E.
    case 0xC1AE60: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:85 JSL COUNT_CHARS
    case 0xC1AE61: {
        Instruction step(cpu, 0x22, 0xC2BAC5u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:86 DEC
    case 0xC1AE65: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:87 JSL RAND_MOD
    case 0xC1AE66: {
        Instruction step(cpu, 0x22, 0xC45F7Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:88 SEP #PROC_FLAGS::ACCUM8
    case 0xC1AE6A: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:89 STA @VIRTUAL01
    case 0xC1AE6C: {
        Instruction step(cpu, 0x85, 0x000001u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:90 INC @VIRTUAL01
    case 0xC1AE6E: {
        Instruction step(cpu, 0xE6, 0x000001u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:91 JMP @RETURN
    case 0xC1AE70: {
        Instruction step(cpu, 0x4C, 0x00AF50u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:93 SEP #PROC_FLAGS::ACCUM8
    case 0xC1AE73: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:94 LDA #TARGETTED::ENEMIES | TARGETTED::ROW
    case 0xC1AE75: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000012u : 0x008512u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:95 STA @VIRTUAL00
    case 0xC1AE77: {
        Instruction step(cpu, 0x85, 0x000000u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:95 STA @VIRTUAL00
    // Overlapping static entry reached from 0xC1AE75.
    case 0xC1AE78: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:96 STA @LOCAL02
    case 0xC1AE79: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:97 TXY
    case 0xC1AE7B: {
        Instruction step(cpu, 0x9B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_y();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:98 LDX #1
    case 0xC1AE7C: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:98 LDX #1
    // Overlapping static entry reached from 0xC1AE7C.
    case 0xC1AE7E: {
        Instruction step(cpu, 0x00, 0x0000C2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:99 REP #PROC_FLAGS::ACCUM8
    case 0xC1AE7F: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:100 TXA
    case 0xC1AE81: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:101 JSR UNKNOWN_C1242E
    case 0xC1AE82: {
        Instruction step(cpu, 0x20, 0x00242Eu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:102 SEP #PROC_FLAGS::ACCUM8
    case 0xC1AE85: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:103 STA @VIRTUAL01
    case 0xC1AE87: {
        Instruction step(cpu, 0x85, 0x000001u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:104 JMP @RETURN
    case 0xC1AE89: {
        Instruction step(cpu, 0x4C, 0x00AF50u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:106 SEP #PROC_FLAGS::ACCUM8
    case 0xC1AE8C: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:107 LDA @VIRTUAL00
    case 0xC1AE8E: {
        Instruction step(cpu, 0xA5, 0x000000u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:108 ORA #TARGETTED::ALL
    case 0xC1AE90: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x09, narrow ? 0x000004u : 0x008504u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:109 STA @VIRTUAL00
    case 0xC1AE92: {
        Instruction step(cpu, 0x85, 0x000000u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:109 STA @VIRTUAL00
    // Overlapping static entry reached from 0xC1AE90.
    case 0xC1AE93: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:110 STA @LOCAL02
    case 0xC1AE94: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:111 JMP @RETURN
    case 0xC1AE96: {
        Instruction step(cpu, 0x4C, 0x00AF50u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:113 SEP #PROC_FLAGS::ACCUM8
    case 0xC1AE99: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:114 LDA #TARGETTED::ALLIES
    case 0xC1AE9B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x008500u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:115 STA @VIRTUAL00
    case 0xC1AE9D: {
        Instruction step(cpu, 0x85, 0x000000u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:115 STA @VIRTUAL00
    // Overlapping static entry reached from 0xC1AE9B.
    case 0xC1AE9E: {
        Instruction step(cpu, 0x00, 0x0000C2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:116 REP #PROC_FLAGS::ACCUM8
    case 0xC1AE9F: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:117 LDA @LOCAL03
    case 0xC1AEA1: {
        Instruction step(cpu, 0xA5, 0x000017u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:118 INC
    case 0xC1AEA3: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:119 CLC
    case 0xC1AEA4: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:120 ADC @VIRTUAL06
    case 0xC1AEA5: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:121 STA @VIRTUAL06
    case 0xC1AEA7: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:122 LDA [@VIRTUAL06]
    case 0xC1AEA9: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:123 AND #$00FF
    case 0xC1AEAB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:123 AND #$00FF
    // Overlapping static entry reached from 0xC1AEAB.
    case 0xC1AEAD: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:124 BEQ @ALLY_NONE
    case 0xC1AEAE: {
        Instruction step(cpu, 0xF0, 0x00001Du, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:125 CMP #ACTION_TARGET::ONE
    case 0xC1AEB0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:125 CMP #ACTION_TARGET::ONE
    // Overlapping static entry reached from 0xC1AEB0.
    case 0xC1AEB2: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:126 BEQ @ALLY_SINGLE
    case 0xC1AEB3: {
        Instruction step(cpu, 0xF0, 0x000026u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:127 CMP #ACTION_TARGET::RANDOM
    case 0xC1AEB5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:127 CMP #ACTION_TARGET::RANDOM
    // Overlapping static entry reached from 0xC1AEB5.
    case 0xC1AEB7: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:128 BEQ @ALLY_SINGLE_RANDOM
    case 0xC1AEB8: {
        Instruction step(cpu, 0xF0, 0x00006Cu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:129 CMP #ACTION_TARGET::ROW
    case 0xC1AEBA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:129 CMP #ACTION_TARGET::ROW
    // Overlapping static entry reached from 0xC1AEBA.
    case 0xC1AEBC: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/determine_targetting.asm:130 BEQL @ALLY_ALL
    case 0xC1AEBD: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/determine_targetting.asm:130 BEQL @ALLY_ALL
    case 0xC1AEBF: {
        Instruction step(cpu, 0x4C, 0x00AF46u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:131 CMP #ACTION_TARGET::ALL
    case 0xC1AEC2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:131 CMP #ACTION_TARGET::ALL
    // Overlapping static entry reached from 0xC1AEC2.
    case 0xC1AEC4: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/determine_targetting.asm:132 BEQL @ALLY_ALL
    case 0xC1AEC5: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/determine_targetting.asm:132 BEQL @ALLY_ALL
    case 0xC1AEC7: {
        Instruction step(cpu, 0x4C, 0x00AF46u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:133 JMP @ALLY_ALL
    case 0xC1AECA: {
        Instruction step(cpu, 0x4C, 0x00AF46u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:135 SEP #PROC_FLAGS::ACCUM8
    case 0xC1AECD: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:136 LDA #TARGETTED::SINGLE | TARGETTED::ALLIES
    case 0xC1AECF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x008501u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:137 STA @VIRTUAL00
    case 0xC1AED1: {
        Instruction step(cpu, 0x85, 0x000000u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:137 STA @VIRTUAL00
    // Overlapping static entry reached from 0xC1AECF.
    case 0xC1AED2: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:138 STA @LOCAL02
    case 0xC1AED3: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:139 SEP #PROC_FLAGS::INDEX8
    case 0xC1AED5: {
        Instruction step(cpu, 0xE2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:140 STY @VIRTUAL01
    case 0xC1AED7: {
        Instruction step(cpu, 0x84, 0x000001u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:144 BRA @RETURN
    case 0xC1AED9: {
        Instruction step(cpu, 0x80, 0x000075u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:147 SEP #PROC_FLAGS::ACCUM8
    case 0xC1AEDB: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:148 LDA #TARGETTED::SINGLE | TARGETTED::ALLIES
    case 0xC1AEDD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x008501u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:149 STA @VIRTUAL00
    case 0xC1AEDF: {
        Instruction step(cpu, 0x85, 0x000000u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:149 STA @VIRTUAL00
    // Overlapping static entry reached from 0xC1AEDD.
    case 0xC1AEE0: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:150 STA @LOCAL02
    case 0xC1AEE1: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:151 REP #PROC_FLAGS::ACCUM8
    case 0xC1AEE3: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:152 LDA GAME_STATE+game_state::player_controlled_party_count
    case 0xC1AEE5: {
        Instruction step(cpu, 0xAD, 0x0098A4u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:153 AND #$00FF
    case 0xC1AEE8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:153 AND #$00FF
    // Overlapping static entry reached from 0xC1AEE8.
    case 0xC1AEEA: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:154 CMP #1
    case 0xC1AEEB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:154 CMP #1
    // Overlapping static entry reached from 0xC1AEEB.
    case 0xC1AEED: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:155 BEQ @ONLY_ONE_ALLY
    case 0xC1AEEE: {
        Instruction step(cpu, 0xF0, 0x000030u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:156 LDA #3
    case 0xC1AEF0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:156 LDA #3
    // Overlapping static entry reached from 0xC1AEF0.
    case 0xC1AEF2: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:157 JSR UNKNOWN_C193E7
    case 0xC1AEF3: {
        Instruction step(cpu, 0x20, 0x0093E7u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/determine_targetting.asm:158 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC1AEF6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/determine_targetting.asm:158 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC1AEF6.
    case 0xC1AEF8: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/battle/determine_targetting.asm:158 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC1AEF9: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/determine_targetting.asm:158 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC1AEFB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/determine_targetting.asm:158 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC1AEFB.
    case 0xC1AEFD: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/battle/determine_targetting.asm:158 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC1AEFE: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/determine_targetting.asm:159 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1AF00: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/determine_targetting.asm:159 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1AF02: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/determine_targetting.asm:159 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1AF04: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/determine_targetting.asm:159 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1AF06: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/determine_targetting.asm:160 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1AF08: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/determine_targetting.asm:160 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1AF0A: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/determine_targetting.asm:160 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1AF0C: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/determine_targetting.asm:160 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1AF0E: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:162 LDX #1
    case 0xC1AF10: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:162 LDX #1
    // Overlapping static entry reached from 0xC1AF10.
    case 0xC1AF12: {
        Instruction step(cpu, 0x00, 0x00008Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:163 TXA
    case 0xC1AF13: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:164 JSR CHAR_SELECT_PROMPT
    case 0xC1AF14: {
        Instruction step(cpu, 0x20, 0x0027EFu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:165 SEP #PROC_FLAGS::ACCUM8
    case 0xC1AF17: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:166 STA @VIRTUAL01
    case 0xC1AF19: {
        Instruction step(cpu, 0x85, 0x000001u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:167 JSR UNKNOWN_C19437
    case 0xC1AF1B: {
        Instruction step(cpu, 0x20, 0x009437u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:168 BRA @RETURN
    case 0xC1AF1E: {
        Instruction step(cpu, 0x80, 0x000030u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:170 SEP #PROC_FLAGS::INDEX8
    case 0xC1AF20: {
        Instruction step(cpu, 0xE2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:171 STY @VIRTUAL01
    case 0xC1AF22: {
        Instruction step(cpu, 0x84, 0x000001u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:172 BRA @RETURN
    case 0xC1AF24: {
        Instruction step(cpu, 0x80, 0x00002Au, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:174 SEP #PROC_FLAGS::ACCUM8
    case 0xC1AF26: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:175 LDA #TARGETTED::ALLIES | TARGETTED::SINGLE
    case 0xC1AF28: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x008501u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:176 STA @VIRTUAL00
    case 0xC1AF2A: {
        Instruction step(cpu, 0x85, 0x000000u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:176 STA @VIRTUAL00
    // Overlapping static entry reached from 0xC1AF28.
    case 0xC1AF2B: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:177 STA @LOCAL02
    case 0xC1AF2C: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:178 REP #PROC_FLAGS::ACCUM8
    case 0xC1AF2E: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:179 LDA #0
    case 0xC1AF30: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:179 LDA #0
    // Overlapping static entry reached from 0xC1AF30.
    case 0xC1AF32: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:180 JSL COUNT_CHARS
    case 0xC1AF33: {
        Instruction step(cpu, 0x22, 0xC2BAC5u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:181 DEC
    case 0xC1AF37: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:182 JSL RAND_MOD
    case 0xC1AF38: {
        Instruction step(cpu, 0x22, 0xC45F7Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:182 JSL RAND_MOD
    // Overlapping static entry reached from 0xC1AFB4.
    case 0xC1AF3B: {
        Instruction step(cpu, 0xC4, 0x0000AAu, 2u, AddressMode::DirectPage);
        step.compare_y();
        return step.finish();
    }
    // include/macros.asm:1308 TAX
    // Macro caller: src/battle/determine_targetting.asm:183 LDA8_STRUCT_MEMBER GAME_STATE, game_state::unknown96
    case 0xC1AF3C: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // include/macros.asm:1309 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/battle/determine_targetting.asm:183 LDA8_STRUCT_MEMBER GAME_STATE, game_state::unknown96
    case 0xC1AF3D: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:1310 LDA struct + field,X
    // Macro caller: src/battle/determine_targetting.asm:183 LDA8_STRUCT_MEMBER GAME_STATE, game_state::unknown96
    case 0xC1AF3F: {
        Instruction step(cpu, 0xBD, 0x00988Bu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:184 STA @VIRTUAL01
    case 0xC1AF42: {
        Instruction step(cpu, 0x85, 0x000001u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:185 BRA @RETURN
    case 0xC1AF44: {
        Instruction step(cpu, 0x80, 0x00000Au, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:187 SEP #PROC_FLAGS::ACCUM8
    case 0xC1AF46: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:188 LDA @VIRTUAL00
    case 0xC1AF48: {
        Instruction step(cpu, 0xA5, 0x000000u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:189 ORA #TARGETTED::ALL
    case 0xC1AF4A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x09, narrow ? 0x000004u : 0x008504u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:190 STA @VIRTUAL00
    case 0xC1AF4C: {
        Instruction step(cpu, 0x85, 0x000000u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:190 STA @VIRTUAL00
    // Overlapping static entry reached from 0xC1AF4A.
    case 0xC1AF4D: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:191 STA @LOCAL02
    case 0xC1AF4E: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:193 REP #PROC_FLAGS::ACCUM8
    case 0xC1AF50: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:194 LDA @VIRTUAL01
    case 0xC1AF52: {
        Instruction step(cpu, 0xA5, 0x000001u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:195 AND #$00FF
    case 0xC1AF54: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:195 AND #$00FF
    // Overlapping static entry reached from 0xC1AF54.
    case 0xC1AF56: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:196 STA @VIRTUAL02
    case 0xC1AF57: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:197 SEP #PROC_FLAGS::INDEX8
    case 0xC1AF59: {
        Instruction step(cpu, 0xE2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:198 LDY #8
    case 0xC1AF5B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000008u : 0x00E208u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:199 SEP #PROC_FLAGS::ACCUM8
    case 0xC1AF5D: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:199 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC1AF5B.
    case 0xC1AF5E: {
        Instruction step(cpu, 0x20, 0x0016A5u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:200 LDA @LOCAL02
    case 0xC1AF5F: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:201 STA @VIRTUAL00
    case 0xC1AF61: {
        Instruction step(cpu, 0x85, 0x000000u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:202 REP #PROC_FLAGS::ACCUM8
    case 0xC1AF63: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:203 LDA @VIRTUAL00
    case 0xC1AF65: {
        Instruction step(cpu, 0xA5, 0x000000u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:204 AND #$00FF
    case 0xC1AF67: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:204 AND #$00FF
    // Overlapping static entry reached from 0xC1AF67.
    case 0xC1AF69: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:205 JSL ASL16_ENTRY2
    case 0xC1AF6A: {
        Instruction step(cpu, 0x22, 0xC0923Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:206 ORA @VIRTUAL02
    case 0xC1AF6E: {
        Instruction step(cpu, 0x05, 0x000002u, 2u, AddressMode::DirectPage);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/determine_targetting.asm:207 REP #PROC_FLAGS::INDEX8
    case 0xC1AF70: {
        Instruction step(cpu, 0xC2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/determine_targetting.asm:208 END_C_FUNCTION
    case 0xC1AF72: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/determine_targetting.asm:208 END_C_FUNCTION
    case 0xC1AF73: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
