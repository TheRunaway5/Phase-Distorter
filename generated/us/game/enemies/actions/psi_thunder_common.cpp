// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/battle/actions/psi_thunder_common.asm
bool resume_battle_actions_psi_thunder_common(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/psi_thunder_common.asm:3 BEGIN_C_FUNCTION
    case 0xC2966B: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/actions/psi_thunder_common.asm:12 END_STACK_VARS
    case 0xC2966D: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/actions/psi_thunder_common.asm:12 END_STACK_VARS
    case 0xC2966E: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/actions/psi_thunder_common.asm:12 END_STACK_VARS
    case 0xC2966F: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/psi_thunder_common.asm:12 END_STACK_VARS
    case 0xC29670: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000E4u : 0x00FFE4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/psi_thunder_common.asm:12 END_STACK_VARS
    // Overlapping static entry reached from 0xC29670.
    case 0xC29672: {
        Instruction step(cpu, 0xFF, 0x86685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/actions/psi_thunder_common.asm:12 END_STACK_VARS
    case 0xC29673: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/actions/psi_thunder_common.asm:12 END_STACK_VARS
    case 0xC29674: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:13 STX @LOCAL04
    case 0xC29675: {
        Instruction step(cpu, 0x86, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:13 STX @LOCAL04
    // Overlapping static entry reached from 0xC29672.
    case 0xC29676: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:14 STA @VIRTUAL04
    case 0xC29677: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:15 LDY #0
    case 0xC29679: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:15 LDY #0
    // Overlapping static entry reached from 0xC29679.
    case 0xC2967B: {
        Instruction step(cpu, 0x00, 0x000084u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:16 STY @LOCAL03
    case 0xC2967C: {
        Instruction step(cpu, 0x84, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:17 TYX
    case 0xC2967E: {
        Instruction step(cpu, 0xBB, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_x();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:18 STX @LOCAL02
    case 0xC2967F: {
        Instruction step(cpu, 0x86, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:19 BRA @UNKNOWN2
    case 0xC29681: {
        Instruction step(cpu, 0x80, 0x000014u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:21 TXA
    case 0xC29683: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:22 JSL IS_CHAR_TARGETTED
    case 0xC29684: {
        Instruction step(cpu, 0x22, 0xC27029u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:23 CMP #0
    case 0xC29688: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:23 CMP #0
    // Overlapping static entry reached from 0xC29688.
    case 0xC2968A: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:24 BEQ @UNKNOWN1
    case 0xC2968B: {
        Instruction step(cpu, 0xF0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:25 LDY @LOCAL03
    case 0xC2968D: {
        Instruction step(cpu, 0xA4, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:26 INY
    case 0xC2968F: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:27 STY @LOCAL03
    case 0xC29690: {
        Instruction step(cpu, 0x84, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:29 LDX @LOCAL02
    case 0xC29692: {
        Instruction step(cpu, 0xA6, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:30 INX
    case 0xC29694: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:31 STX @LOCAL02
    case 0xC29695: {
        Instruction step(cpu, 0x86, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:33 CPX #BATTLER_COUNT
    case 0xC29697: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:33 CPX #BATTLER_COUNT
    // Overlapping static entry reached from 0xC29697.
    case 0xC29699: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:34 BCC @UNKNOWN0
    case 0xC2969A: {
        Instruction step(cpu, 0x90, 0x0000E7u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:35 LDY @LOCAL03
    case 0xC2969C: {
        Instruction step(cpu, 0xA4, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:36 TYA
    case 0xC2969E: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:696 ASL
    // Macro caller: src/battle/actions/psi_thunder_common.asm:37 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC2969F: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:697 ASL
    // Macro caller: src/battle/actions/psi_thunder_common.asm:37 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC296A0: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:698 ASL
    // Macro caller: src/battle/actions/psi_thunder_common.asm:37 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC296A1: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:699 ASL
    // Macro caller: src/battle/actions/psi_thunder_common.asm:37 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC296A2: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:700 ASL
    // Macro caller: src/battle/actions/psi_thunder_common.asm:37 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC296A3: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:701 ASL
    // Macro caller: src/battle/actions/psi_thunder_common.asm:37 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC296A4: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:38 STA @VIRTUAL02
    case 0xC296A5: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:39 CMP #256
    case 0xC296A7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000100u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:39 CMP #256
    // Overlapping static entry reached from 0xC296A7.
    case 0xC296A9: {
        Instruction step(cpu, 0x01, 0x000090u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:40 BCC @UNKNOWN3
    case 0xC296AA: {
        Instruction step(cpu, 0x90, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:40 BCC @UNKNOWN3
    // Overlapping static entry reached from 0xC296A9.
    case 0xC296AB: {
        Instruction step(cpu, 0x05, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:41 LDA #255
    case 0xC296AC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:41 LDA #255
    // Overlapping static entry reached from 0xC296AB.
    case 0xC296AD: {
        Instruction step(cpu, 0xFF, 0x028500u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:41 LDA #255
    // Overlapping static entry reached from 0xC296AC.
    case 0xC296AE: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:42 STA @VIRTUAL02
    case 0xC296AF: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/psi_thunder_common.asm:44 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC296B1: {
        Instruction step(cpu, 0xAD, 0x00A96Cu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/psi_thunder_common.asm:44 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC296B4: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/psi_thunder_common.asm:44 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC296B6: {
        Instruction step(cpu, 0xAD, 0x00A96Eu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/psi_thunder_common.asm:44 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC296B9: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/psi_thunder_common.asm:45 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC296BB: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/psi_thunder_common.asm:45 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC296BD: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/psi_thunder_common.asm:45 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC296BF: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/psi_thunder_common.asm:45 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC296C1: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:46 LDY #0
    case 0xC296C3: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:46 LDY #0
    // Overlapping static entry reached from 0xC296C3.
    case 0xC296C5: {
        Instruction step(cpu, 0x00, 0x000084u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:47 STY @LOCAL03
    case 0xC296C6: {
        Instruction step(cpu, 0x84, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:48 JMP @UNKNOWN20
    case 0xC296C8: {
        Instruction step(cpu, 0x4C, 0x00985Au, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/psi_thunder_common.asm:50 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC296CB: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/psi_thunder_common.asm:50 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC296CD: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/psi_thunder_common.asm:50 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC296CF: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/psi_thunder_common.asm:50 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC296D1: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/psi_thunder_common.asm:51 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC296D3: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/psi_thunder_common.asm:51 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC296D5: {
        Instruction step(cpu, 0x8D, 0x00A96Cu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/psi_thunder_common.asm:51 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC296D8: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/psi_thunder_common.asm:51 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC296DA: {
        Instruction step(cpu, 0x8D, 0x00A96Eu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:52 JSL REMOVE_STATUS_UNTARGETTABLE_TARGETS
    case 0xC296DD: {
        Instruction step(cpu, 0x22, 0xC2416Fu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:53 LDA #0
    case 0xC296E1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:53 LDA #0
    // Overlapping static entry reached from 0xC296E1.
    case 0xC296E3: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:54 STA @VIRTUAL06
    case 0xC296E4: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:55 LDA #0
    case 0xC296E6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:55 LDA #0
    // Overlapping static entry reached from 0xC296E6.
    case 0xC296E8: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:56 STA @VIRTUAL06+2
    case 0xC296E9: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/psi_thunder_common.asm:57 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL0A
    case 0xC296EB: {
        Instruction step(cpu, 0xAD, 0x00A96Cu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/psi_thunder_common.asm:57 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL0A
    case 0xC296EE: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/psi_thunder_common.asm:57 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL0A
    case 0xC296F0: {
        Instruction step(cpu, 0xAD, 0x00A96Eu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/psi_thunder_common.asm:57 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL0A
    case 0xC296F3: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:58 CMP @VIRTUAL06+2
    case 0xC296F5: {
        Instruction step(cpu, 0xC5, 0x000008u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:59 BNE @UNKNOWN5
    case 0xC296F7: {
        Instruction step(cpu, 0xD0, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:60 LDA @VIRTUAL0A
    case 0xC296F9: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:61 CMP @VIRTUAL06
    case 0xC296FB: {
        Instruction step(cpu, 0xC5, 0x000006u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/actions/psi_thunder_common.asm:63 BEQL @UNKNOWN21
    case 0xC296FD: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/actions/psi_thunder_common.asm:63 BEQL @UNKNOWN21
    case 0xC296FF: {
        Instruction step(cpu, 0x4C, 0x009863u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/psi_thunder_common.asm:68 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC29702: {
        Instruction step(cpu, 0xAD, 0x00A96Cu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/psi_thunder_common.asm:68 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC29705: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/psi_thunder_common.asm:68 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC29707: {
        Instruction step(cpu, 0xAD, 0x00A96Eu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/psi_thunder_common.asm:68 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC2970A: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/psi_thunder_common.asm:69 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2970C: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/psi_thunder_common.asm:69 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2970E: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/psi_thunder_common.asm:69 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC29710: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/psi_thunder_common.asm:69 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC29712: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:71 JSL RANDOM_TARGETTING
    case 0xC29714: {
        Instruction step(cpu, 0x22, 0xC26EF8u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/psi_thunder_common.asm:72 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC29718: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/psi_thunder_common.asm:72 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC2971A: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/psi_thunder_common.asm:72 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC2971C: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/psi_thunder_common.asm:72 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC2971E: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/psi_thunder_common.asm:73 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC29720: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/psi_thunder_common.asm:73 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC29722: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/psi_thunder_common.asm:73 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC29724: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/psi_thunder_common.asm:73 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC29726: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/psi_thunder_common.asm:74 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC29728: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/psi_thunder_common.asm:74 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC2972A: {
        Instruction step(cpu, 0x8D, 0x00A96Cu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/psi_thunder_common.asm:74 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC2972D: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/psi_thunder_common.asm:74 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC2972F: {
        Instruction step(cpu, 0x8D, 0x00A96Eu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:75 LDX #0
    case 0xC29732: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:75 LDX #0
    // Overlapping static entry reached from 0xC29732.
    case 0xC29734: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:76 STX @LOCAL02
    case 0xC29735: {
        Instruction step(cpu, 0x86, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:77 BRA @UNKNOWN8
    case 0xC29737: {
        Instruction step(cpu, 0x80, 0x00000Fu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:79 TXA
    case 0xC29739: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:80 JSL IS_CHAR_TARGETTED
    case 0xC2973A: {
        Instruction step(cpu, 0x22, 0xC27029u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:81 CMP #0
    case 0xC2973E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:81 CMP #0
    // Overlapping static entry reached from 0xC2973E.
    case 0xC29740: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:82 BNE @UNKNOWN9
    case 0xC29741: {
        Instruction step(cpu, 0xD0, 0x00000Au, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:83 LDX @LOCAL02
    case 0xC29743: {
        Instruction step(cpu, 0xA6, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:84 INX
    case 0xC29745: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:85 STX @LOCAL02
    case 0xC29746: {
        Instruction step(cpu, 0x86, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:87 CPX #BATTLER_COUNT
    case 0xC29748: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:87 CPX #BATTLER_COUNT
    // Overlapping static entry reached from 0xC29748.
    case 0xC2974A: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:88 BCC @UNKNOWN7
    case 0xC2974B: {
        Instruction step(cpu, 0x90, 0x0000ECu, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:90 LDX @LOCAL02
    case 0xC2974D: {
        Instruction step(cpu, 0xA6, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:91 TXA
    case 0xC2974F: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:92 LDY #.SIZEOF(battler)
    case 0xC29750: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:92 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC29750.
    case 0xC29752: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:93 JSL MULT168
    case 0xC29753: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:94 CLC
    case 0xC29757: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:95 ADC #.LOWORD(BATTLERS_TABLE)
    case 0xC29758: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000ACu : 0x009FACu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:95 ADC #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC29758.
    case 0xC2975A: {
        Instruction step(cpu, 0x9F, 0xA9728Du, 4u, AddressMode::LongIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:96 STA CURRENT_TARGET
    case 0xC2975B: {
        Instruction step(cpu, 0x8D, 0x00A972u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:97 JSL FIX_TARGET_NAME
    case 0xC2975E: {
        Instruction step(cpu, 0x22, 0xC23D05u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:98 LDA @VIRTUAL02
    case 0xC29762: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:99 SEP #PROC_FLAGS::ACCUM8
    case 0xC29764: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:100 JSR SUCCESS_255
    case 0xC29766: {
        Instruction step(cpu, 0x20, 0x006BB8u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:102 CMP #0
    case 0xC29769: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:102 CMP #0
    // Overlapping static entry reached from 0xC29769.
    case 0xC2976B: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/actions/psi_thunder_common.asm:103 BEQL @UNKNOWN18
    case 0xC2976C: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/actions/psi_thunder_common.asm:103 BEQL @UNKNOWN18
    case 0xC2976E: {
        Instruction step(cpu, 0x4C, 0x009821u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:105 LDA @VIRTUAL04
    case 0xC29771: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:106 CMP #120
    case 0xC29773: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000078u : 0x000078u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:106 CMP #120
    // Overlapping static entry reached from 0xC29773.
    case 0xC29775: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:107 BNE @UNKNOWN11
    case 0xC29776: {
        Instruction step(cpu, 0xD0, 0x000010u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/psi_thunder_common.asm:108 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_THUNDER_SMALL
    case 0xC29778: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000014u : 0x008814u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/psi_thunder_common.asm:108 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_THUNDER_SMALL
    // Overlapping static entry reached from 0xC29778.
    case 0xC2977A: {
        Instruction step(cpu, 0x88, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_y();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/psi_thunder_common.asm:108 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_THUNDER_SMALL
    case 0xC2977B: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/psi_thunder_common.asm:108 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_THUNDER_SMALL
    case 0xC2977D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000EFu : 0x0000EFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/psi_thunder_common.asm:108 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_THUNDER_SMALL
    // Overlapping static entry reached from 0xC2977D.
    case 0xC2977F: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/psi_thunder_common.asm:108 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_THUNDER_SMALL
    case 0xC29780: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/psi_thunder_common.asm:108 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_THUNDER_SMALL
    case 0xC29782: {
        Instruction step(cpu, 0x22, 0xC1DC1Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:109 BRA @UNKNOWN13
    case 0xC29786: {
        Instruction step(cpu, 0x80, 0x000014u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/psi_thunder_common.asm:111 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_THUNDER_LARGE
    case 0xC29788: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000023u : 0x008823u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/psi_thunder_common.asm:111 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_THUNDER_LARGE
    // Overlapping static entry reached from 0xC29788.
    case 0xC2978A: {
        Instruction step(cpu, 0x88, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_y();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/psi_thunder_common.asm:111 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_THUNDER_LARGE
    case 0xC2978B: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/psi_thunder_common.asm:111 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_THUNDER_LARGE
    case 0xC2978D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000EFu : 0x0000EFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/psi_thunder_common.asm:111 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_THUNDER_LARGE
    // Overlapping static entry reached from 0xC2978D.
    case 0xC2978F: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/psi_thunder_common.asm:111 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_THUNDER_LARGE
    case 0xC29790: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/psi_thunder_common.asm:111 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_THUNDER_LARGE
    case 0xC29792: {
        Instruction step(cpu, 0x22, 0xC1DC1Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:112 BRA @UNKNOWN13
    case 0xC29796: {
        Instruction step(cpu, 0x80, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:114 JSL WINDOW_TICK
    case 0xC29798: {
        Instruction step(cpu, 0x22, 0xC12DD5u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:116 JSL UNKNOWN_C2EACF
    case 0xC2979C: {
        Instruction step(cpu, 0x22, 0xC2EACFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:117 CMP #0
    case 0xC297A0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:117 CMP #0
    // Overlapping static entry reached from 0xC297A0.
    case 0xC297A2: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:118 BNE @UNKNOWN12
    case 0xC297A3: {
        Instruction step(cpu, 0xD0, 0x0000F3u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:119 LDX CURRENT_TARGET
    case 0xC297A5: {
        Instruction step(cpu, 0xAE, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:120 SEP #PROC_FLAGS::ACCUM8
    case 0xC297A8: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:121 STZ a:battler::use_alt_spritemap,X
    case 0xC297AA: {
        Instruction step(cpu, 0x9E, 0x00004Bu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:122 LDX CURRENT_TARGET
    case 0xC297AD: {
        Instruction step(cpu, 0xAE, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:123 REP #PROC_FLAGS::ACCUM8
    case 0xC297B0: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:124 LDA a:battler::ally_or_enemy,X
    case 0xC297B2: {
        Instruction step(cpu, 0xBD, 0x00000Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:125 AND #$00FF
    case 0xC297B5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:125 AND #$00FF
    // Overlapping static entry reached from 0xC297B5.
    case 0xC297B7: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:126 BNE @UNKNOWN14
    case 0xC297B8: {
        Instruction step(cpu, 0xD0, 0x000031u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:127 LDX #1
    case 0xC297BA: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:127 LDX #1
    // Overlapping static entry reached from 0xC297BA.
    case 0xC297BC: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:128 STX @LOCAL02
    case 0xC297BD: {
        Instruction step(cpu, 0x86, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:129 LDX CURRENT_TARGET
    case 0xC297BF: {
        Instruction step(cpu, 0xAE, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:130 LDA a:battler::row,X
    case 0xC297C2: {
        Instruction step(cpu, 0xBD, 0x000010u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:131 AND #$00FF
    case 0xC297C5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:131 AND #$00FF
    // Overlapping static entry reached from 0xC297C5.
    case 0xC297C7: {
        Instruction step(cpu, 0x00, 0x00001Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:132 INC
    case 0xC297C8: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:133 LDX @LOCAL02
    case 0xC297C9: {
        Instruction step(cpu, 0xA6, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:134 JSL FIND_ITEM_IN_INVENTORY2
    case 0xC297CB: {
        Instruction step(cpu, 0x22, 0xC45683u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:135 CMP #0
    case 0xC297CF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:135 CMP #0
    // Overlapping static entry reached from 0xC297CF.
    case 0xC297D1: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:136 BEQ @UNKNOWN14
    case 0xC297D2: {
        Instruction step(cpu, 0xF0, 0x000017u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/psi_thunder_common.asm:137 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_FRANKLIN_TURN
    case 0xC297D4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000060u : 0x007160u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/psi_thunder_common.asm:137 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_FRANKLIN_TURN
    // Overlapping static entry reached from 0xC297D4.
    case 0xC297D6: {
        Instruction step(cpu, 0x71, 0x000085u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/psi_thunder_common.asm:137 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_FRANKLIN_TURN
    case 0xC297D7: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/psi_thunder_common.asm:137 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_FRANKLIN_TURN
    // Overlapping static entry reached from 0xC297D6.
    case 0xC297D8: {
        Instruction step(cpu, 0x0E, 0x00EFA9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/psi_thunder_common.asm:137 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_FRANKLIN_TURN
    case 0xC297D9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000EFu : 0x0000EFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/psi_thunder_common.asm:137 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_FRANKLIN_TURN
    // Overlapping static entry reached from 0xC297D9.
    case 0xC297DB: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/psi_thunder_common.asm:137 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_FRANKLIN_TURN
    case 0xC297DC: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/psi_thunder_common.asm:137 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_FRANKLIN_TURN
    case 0xC297DE: {
        Instruction step(cpu, 0x22, 0xC1DC1Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:138 LDA #1
    case 0xC297E2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:138 LDA #1
    // Overlapping static entry reached from 0xC297E2.
    case 0xC297E4: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:139 STA DAMAGE_IS_REFLECTED
    case 0xC297E5: {
        Instruction step(cpu, 0x8D, 0x00AA96u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:140 JSR SWAP_ATTACKER_WITH_TARGET
    case 0xC297E8: {
        Instruction step(cpu, 0x20, 0x007E8Au, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:142 LDX CURRENT_TARGET
    case 0xC297EB: {
        Instruction step(cpu, 0xAE, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:143 LDA a:battler::afflictions + STATUS_GROUP::SHIELD,X
    case 0xC297EE: {
        Instruction step(cpu, 0xBD, 0x000023u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:144 AND #$00FF
    case 0xC297F1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:144 AND #$00FF
    // Overlapping static entry reached from 0xC297F1.
    case 0xC297F3: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:145 TAX
    case 0xC297F4: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:146 CPX #1
    case 0xC297F5: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:146 CPX #1
    // Overlapping static entry reached from 0xC297F5.
    case 0xC297F7: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:147 BEQ @UNKNOWN15
    case 0xC297F8: {
        Instruction step(cpu, 0xF0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:148 CPX #2
    case 0xC297FA: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:148 CPX #2
    // Overlapping static entry reached from 0xC297FA.
    case 0xC297FC: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:149 BNE @UNKNOWN16
    case 0xC297FD: {
        Instruction step(cpu, 0xD0, 0x00000Au, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:151 SEP #PROC_FLAGS::ACCUM8
    case 0xC297FF: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:152 LDA #1
    case 0xC29801: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x00AE01u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:153 LDX CURRENT_TARGET
    case 0xC29803: {
        Instruction step(cpu, 0xAE, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:153 LDX CURRENT_TARGET
    // Overlapping static entry reached from 0xC29801.
    case 0xC29804: {
        Instruction step(cpu, 0x72, 0x0000A9u, 2u, AddressMode::DirectPageIndirect);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:154 STA a:battler::shield_hp,X
    case 0xC29806: {
        Instruction step(cpu, 0x9D, 0x000025u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:156 JSR PSI_SHIELD_NULLIFY
    case 0xC29809: {
        Instruction step(cpu, 0x20, 0x00941Du, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:158 CMP #0
    case 0xC2980C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:158 CMP #0
    // Overlapping static entry reached from 0xC2980C.
    case 0xC2980E: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:159 BNE @UNKNOWN17
    case 0xC2980F: {
        Instruction step(cpu, 0xD0, 0x00000Bu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:160 LDA @VIRTUAL04
    case 0xC29811: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:161 JSR FIFTY_PERCENT_VARIANCE
    case 0xC29813: {
        Instruction step(cpu, 0x20, 0x006A44u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:162 LDX #$00FF
    case 0xC29816: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:162 LDX #$00FF
    // Overlapping static entry reached from 0xC29816.
    case 0xC29818: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:163 JSR CALC_RESIST_DAMAGE
    case 0xC29819: {
        Instruction step(cpu, 0x20, 0x008125u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:165 JSR WEAKEN_SHIELD
    case 0xC2981C: {
        Instruction step(cpu, 0x20, 0x0094CEu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:166 BRA @UNKNOWN19
    case 0xC2981F: {
        Instruction step(cpu, 0x80, 0x00001Cu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/psi_thunder_common.asm:169 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_THUNDER_MISS_SE
    case 0xC29821: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000037u : 0x008837u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/psi_thunder_common.asm:169 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_THUNDER_MISS_SE
    // Overlapping static entry reached from 0xC29821.
    case 0xC29823: {
        Instruction step(cpu, 0x88, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_y();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/psi_thunder_common.asm:169 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_THUNDER_MISS_SE
    case 0xC29824: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/psi_thunder_common.asm:169 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_THUNDER_MISS_SE
    case 0xC29826: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000EFu : 0x0000EFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/psi_thunder_common.asm:169 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_THUNDER_MISS_SE
    // Overlapping static entry reached from 0xC29826.
    case 0xC29828: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/psi_thunder_common.asm:169 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_THUNDER_MISS_SE
    case 0xC29829: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/psi_thunder_common.asm:169 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_THUNDER_MISS_SE
    case 0xC2982B: {
        Instruction step(cpu, 0x22, 0xC1DC1Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/psi_thunder_common.asm:170 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KAMINARI_HAZURE
    case 0xC2982F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000F6u : 0x00FAF6u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/psi_thunder_common.asm:170 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KAMINARI_HAZURE
    // Overlapping static entry reached from 0xC2982F.
    case 0xC29831: {
        Instruction step(cpu, 0xFA, 0x000000u, 1u, AddressMode::Implied);
        step.pull_x();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/psi_thunder_common.asm:170 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KAMINARI_HAZURE
    case 0xC29832: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/psi_thunder_common.asm:170 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KAMINARI_HAZURE
    case 0xC29834: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C8u : 0x0000C8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/psi_thunder_common.asm:170 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KAMINARI_HAZURE
    // Overlapping static entry reached from 0xC29834.
    case 0xC29836: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/psi_thunder_common.asm:170 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KAMINARI_HAZURE
    case 0xC29837: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/psi_thunder_common.asm:170 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KAMINARI_HAZURE
    case 0xC29839: {
        Instruction step(cpu, 0x22, 0xC1DC1Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:172 LDA #0
    case 0xC2983D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:172 LDA #0
    // Overlapping static entry reached from 0xC2983D.
    case 0xC2983F: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:173 JSL COUNT_CHARS
    case 0xC29840: {
        Instruction step(cpu, 0x22, 0xC2BAC5u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:174 CMP #0
    case 0xC29844: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:174 CMP #0
    // Overlapping static entry reached from 0xC29844.
    case 0xC29846: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:175 BEQ @UNKNOWN21
    case 0xC29847: {
        Instruction step(cpu, 0xF0, 0x00001Au, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:176 LDA #1
    case 0xC29849: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:176 LDA #1
    // Overlapping static entry reached from 0xC29849.
    case 0xC2984B: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:177 JSL COUNT_CHARS
    case 0xC2984C: {
        Instruction step(cpu, 0x22, 0xC2BAC5u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:178 CMP #0
    case 0xC29850: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:178 CMP #0
    // Overlapping static entry reached from 0xC29850.
    case 0xC29852: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:179 BEQ @UNKNOWN21
    case 0xC29853: {
        Instruction step(cpu, 0xF0, 0x00000Eu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:180 LDY @LOCAL03
    case 0xC29855: {
        Instruction step(cpu, 0xA4, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:181 INY
    case 0xC29857: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:182 STY @LOCAL03
    case 0xC29858: {
        Instruction step(cpu, 0x84, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:184 CPY @LOCAL04
    case 0xC2985A: {
        Instruction step(cpu, 0xC4, 0x00001Au, 2u, AddressMode::DirectPage);
        step.compare_y();
        return step.finish();
    }
    // include/macros.asm:784 BCS :+
    // Macro caller: src/battle/actions/psi_thunder_common.asm:185 BCCL @UNKNOWN4
    case 0xC2985C: {
        Instruction step(cpu, 0xB0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/battle/actions/psi_thunder_common.asm:185 BCCL @UNKNOWN4
    case 0xC2985E: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:786 JMP dest
    // Macro caller: src/battle/actions/psi_thunder_common.asm:185 BCCL @UNKNOWN4
    case 0xC29860: {
        Instruction step(cpu, 0x4C, 0x0096CBu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/actions/psi_thunder_common.asm:187 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    case 0xC29863: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/actions/psi_thunder_common.asm:187 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    // Overlapping static entry reached from 0xC29863.
    case 0xC29865: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/battle/actions/psi_thunder_common.asm:187 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    case 0xC29866: {
        Instruction step(cpu, 0x8D, 0x00A96Cu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/actions/psi_thunder_common.asm:187 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    case 0xC29869: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/actions/psi_thunder_common.asm:187 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    // Overlapping static entry reached from 0xC29869.
    case 0xC2986B: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/battle/actions/psi_thunder_common.asm:187 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    case 0xC2986C: {
        Instruction step(cpu, 0x8D, 0x00A96Eu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/actions/psi_thunder_common.asm:188 END_C_FUNCTION
    case 0xC2986F: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/actions/psi_thunder_common.asm:188 END_C_FUNCTION
    case 0xC29870: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
