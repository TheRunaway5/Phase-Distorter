// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/battle/actions/psi_thunder_common.asm
bool resume_battle_actions_psi_thunder_common(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/psi_thunder_common.asm:3 BEGIN_C_FUNCTION
    case 0xC29614: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/actions/psi_thunder_common.asm:12 END_STACK_VARS
    case 0xC29616: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/actions/psi_thunder_common.asm:12 END_STACK_VARS
    case 0xC29617: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/actions/psi_thunder_common.asm:12 END_STACK_VARS
    case 0xC29618: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/psi_thunder_common.asm:12 END_STACK_VARS
    case 0xC29619: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000E4u : 0x00FFE4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/psi_thunder_common.asm:12 END_STACK_VARS
    // Overlapping static entry reached from 0xC29619.
    case 0xC2961B: {
        Instruction step(cpu, 0xFF, 0x86685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/actions/psi_thunder_common.asm:12 END_STACK_VARS
    case 0xC2961C: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/actions/psi_thunder_common.asm:12 END_STACK_VARS
    case 0xC2961D: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:13 STX @LOCAL04
    case 0xC2961E: {
        Instruction step(cpu, 0x86, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:13 STX @LOCAL04
    // Overlapping static entry reached from 0xC2961B.
    case 0xC2961F: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:14 STA @VIRTUAL04
    case 0xC29620: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:15 LDY #0
    case 0xC29622: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:15 LDY #0
    // Overlapping static entry reached from 0xC29622.
    case 0xC29624: {
        Instruction step(cpu, 0x00, 0x000084u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:16 STY @LOCAL03
    case 0xC29625: {
        Instruction step(cpu, 0x84, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:17 TYX
    case 0xC29627: {
        Instruction step(cpu, 0xBB, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_x();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:18 STX @LOCAL02
    case 0xC29628: {
        Instruction step(cpu, 0x86, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:19 BRA @UNKNOWN2
    case 0xC2962A: {
        Instruction step(cpu, 0x80, 0x000014u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:21 TXA
    case 0xC2962C: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:22 JSL IS_CHAR_TARGETTED
    case 0xC2962D: {
        Instruction step(cpu, 0x22, 0xC26F68u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:23 CMP #0
    case 0xC29631: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:23 CMP #0
    // Overlapping static entry reached from 0xC29631.
    case 0xC29633: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:24 BEQ @UNKNOWN1
    case 0xC29634: {
        Instruction step(cpu, 0xF0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:25 LDY @LOCAL03
    case 0xC29636: {
        Instruction step(cpu, 0xA4, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:26 INY
    case 0xC29638: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:27 STY @LOCAL03
    case 0xC29639: {
        Instruction step(cpu, 0x84, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:29 LDX @LOCAL02
    case 0xC2963B: {
        Instruction step(cpu, 0xA6, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:30 INX
    case 0xC2963D: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:31 STX @LOCAL02
    case 0xC2963E: {
        Instruction step(cpu, 0x86, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:33 CPX #BATTLER_COUNT
    case 0xC29640: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:33 CPX #BATTLER_COUNT
    // Overlapping static entry reached from 0xC29640.
    case 0xC29642: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:34 BCC @UNKNOWN0
    case 0xC29643: {
        Instruction step(cpu, 0x90, 0x0000E7u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:35 LDY @LOCAL03
    case 0xC29645: {
        Instruction step(cpu, 0xA4, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:36 TYA
    case 0xC29647: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:696 ASL
    // Macro caller: src/battle/actions/psi_thunder_common.asm:37 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC29648: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:697 ASL
    // Macro caller: src/battle/actions/psi_thunder_common.asm:37 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC29649: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:698 ASL
    // Macro caller: src/battle/actions/psi_thunder_common.asm:37 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC2964A: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:699 ASL
    // Macro caller: src/battle/actions/psi_thunder_common.asm:37 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC2964B: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:700 ASL
    // Macro caller: src/battle/actions/psi_thunder_common.asm:37 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC2964C: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:701 ASL
    // Macro caller: src/battle/actions/psi_thunder_common.asm:37 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC2964D: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:38 STA @VIRTUAL02
    case 0xC2964E: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:39 CMP #256
    case 0xC29650: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000100u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:39 CMP #256
    // Overlapping static entry reached from 0xC29650.
    case 0xC29652: {
        Instruction step(cpu, 0x01, 0x000090u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:40 BCC @UNKNOWN3
    case 0xC29653: {
        Instruction step(cpu, 0x90, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:40 BCC @UNKNOWN3
    // Overlapping static entry reached from 0xC29652.
    case 0xC29654: {
        Instruction step(cpu, 0x05, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:41 LDA #255
    case 0xC29655: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:41 LDA #255
    // Overlapping static entry reached from 0xC29654.
    case 0xC29656: {
        Instruction step(cpu, 0xFF, 0x028500u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:41 LDA #255
    // Overlapping static entry reached from 0xC29655.
    case 0xC29657: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:42 STA @VIRTUAL02
    case 0xC29658: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/psi_thunder_common.asm:44 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC2965A: {
        Instruction step(cpu, 0xAD, 0x00AB6Eu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/psi_thunder_common.asm:44 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC2965D: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/psi_thunder_common.asm:44 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC2965F: {
        Instruction step(cpu, 0xAD, 0x00AB70u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/psi_thunder_common.asm:44 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC29662: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/psi_thunder_common.asm:45 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC29664: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/psi_thunder_common.asm:45 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC29666: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/psi_thunder_common.asm:45 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC29668: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/psi_thunder_common.asm:45 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2966A: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:46 LDY #0
    case 0xC2966C: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:46 LDY #0
    // Overlapping static entry reached from 0xC2966C.
    case 0xC2966E: {
        Instruction step(cpu, 0x00, 0x000084u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:47 STY @LOCAL03
    case 0xC2966F: {
        Instruction step(cpu, 0x84, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:48 JMP @UNKNOWN20
    case 0xC29671: {
        Instruction step(cpu, 0x4C, 0x009803u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/psi_thunder_common.asm:50 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC29674: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/psi_thunder_common.asm:50 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC29676: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/psi_thunder_common.asm:50 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC29678: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/psi_thunder_common.asm:50 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC2967A: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/psi_thunder_common.asm:51 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC2967C: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/psi_thunder_common.asm:51 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC2967E: {
        Instruction step(cpu, 0x8D, 0x00AB6Eu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/psi_thunder_common.asm:51 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC29681: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/psi_thunder_common.asm:51 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC29683: {
        Instruction step(cpu, 0x8D, 0x00AB70u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:52 JSL REMOVE_STATUS_UNTARGETTABLE_TARGETS
    case 0xC29686: {
        Instruction step(cpu, 0x22, 0xC24023u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:53 LDA #0
    case 0xC2968A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:53 LDA #0
    // Overlapping static entry reached from 0xC2968A.
    case 0xC2968C: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:54 STA @VIRTUAL06
    case 0xC2968D: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:55 LDA #0
    case 0xC2968F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:55 LDA #0
    // Overlapping static entry reached from 0xC2968F.
    case 0xC29691: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:56 STA @VIRTUAL06+2
    case 0xC29692: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/psi_thunder_common.asm:57 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL0A
    case 0xC29694: {
        Instruction step(cpu, 0xAD, 0x00AB6Eu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/psi_thunder_common.asm:57 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL0A
    case 0xC29697: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/psi_thunder_common.asm:57 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL0A
    case 0xC29699: {
        Instruction step(cpu, 0xAD, 0x00AB70u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/psi_thunder_common.asm:57 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL0A
    case 0xC2969C: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:58 CMP @VIRTUAL06+2
    case 0xC2969E: {
        Instruction step(cpu, 0xC5, 0x000008u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:59 BNE @UNKNOWN5
    case 0xC296A0: {
        Instruction step(cpu, 0xD0, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:60 LDA @VIRTUAL0A
    case 0xC296A2: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:61 CMP @VIRTUAL06
    case 0xC296A4: {
        Instruction step(cpu, 0xC5, 0x000006u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/actions/psi_thunder_common.asm:63 BEQL @UNKNOWN21
    case 0xC296A6: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/actions/psi_thunder_common.asm:63 BEQL @UNKNOWN21
    case 0xC296A8: {
        Instruction step(cpu, 0x4C, 0x00980Cu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/psi_thunder_common.asm:65 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL0A
    case 0xC296AB: {
        Instruction step(cpu, 0xAD, 0x00AB6Eu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/psi_thunder_common.asm:65 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL0A
    case 0xC296AE: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/psi_thunder_common.asm:65 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL0A
    case 0xC296B0: {
        Instruction step(cpu, 0xAD, 0x00AB70u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/psi_thunder_common.asm:65 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL0A
    case 0xC296B3: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/psi_thunder_common.asm:66 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC296B5: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/psi_thunder_common.asm:66 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC296B7: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/psi_thunder_common.asm:66 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC296B9: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/psi_thunder_common.asm:66 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC296BB: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:71 JSL RANDOM_TARGETTING
    case 0xC296BD: {
        Instruction step(cpu, 0x22, 0xC26E37u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/psi_thunder_common.asm:72 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC296C1: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/psi_thunder_common.asm:72 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC296C3: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/psi_thunder_common.asm:72 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC296C5: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/psi_thunder_common.asm:72 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC296C7: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/psi_thunder_common.asm:73 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC296C9: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/psi_thunder_common.asm:73 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC296CB: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/psi_thunder_common.asm:73 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC296CD: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/psi_thunder_common.asm:73 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC296CF: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/psi_thunder_common.asm:74 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC296D1: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/psi_thunder_common.asm:74 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC296D3: {
        Instruction step(cpu, 0x8D, 0x00AB6Eu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/psi_thunder_common.asm:74 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC296D6: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/psi_thunder_common.asm:74 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC296D8: {
        Instruction step(cpu, 0x8D, 0x00AB70u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:75 LDX #0
    case 0xC296DB: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:75 LDX #0
    // Overlapping static entry reached from 0xC296DB.
    case 0xC296DD: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:76 STX @LOCAL02
    case 0xC296DE: {
        Instruction step(cpu, 0x86, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:77 BRA @UNKNOWN8
    case 0xC296E0: {
        Instruction step(cpu, 0x80, 0x00000Fu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:79 TXA
    case 0xC296E2: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:80 JSL IS_CHAR_TARGETTED
    case 0xC296E3: {
        Instruction step(cpu, 0x22, 0xC26F68u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:81 CMP #0
    case 0xC296E7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:81 CMP #0
    // Overlapping static entry reached from 0xC296E7.
    case 0xC296E9: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:82 BNE @UNKNOWN9
    case 0xC296EA: {
        Instruction step(cpu, 0xD0, 0x00000Au, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:83 LDX @LOCAL02
    case 0xC296EC: {
        Instruction step(cpu, 0xA6, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:84 INX
    case 0xC296EE: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:85 STX @LOCAL02
    case 0xC296EF: {
        Instruction step(cpu, 0x86, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:87 CPX #BATTLER_COUNT
    case 0xC296F1: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:87 CPX #BATTLER_COUNT
    // Overlapping static entry reached from 0xC296F1.
    case 0xC296F3: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:88 BCC @UNKNOWN7
    case 0xC296F4: {
        Instruction step(cpu, 0x90, 0x0000ECu, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:90 LDX @LOCAL02
    case 0xC296F6: {
        Instruction step(cpu, 0xA6, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:91 TXA
    case 0xC296F8: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:92 LDY #.SIZEOF(battler)
    case 0xC296F9: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:92 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC296F9.
    case 0xC296FB: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:93 JSL MULT168
    case 0xC296FC: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:94 CLC
    case 0xC29700: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:95 ADC #.LOWORD(BATTLERS_TABLE)
    case 0xC29701: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000AEu : 0x00A1AEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:95 ADC #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC29701.
    case 0xC29703: {
        Instruction step(cpu, 0xA1, 0x00008Du, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:96 STA CURRENT_TARGET
    case 0xC29704: {
        Instruction step(cpu, 0x8D, 0x00AB74u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:96 STA CURRENT_TARGET
    // Overlapping static entry reached from 0xC29703.
    case 0xC29705: {
        Instruction step(cpu, 0x74, 0x0000ABu, 2u, AddressMode::DirectPageIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:97 JSL FIX_TARGET_NAME
    case 0xC29707: {
        Instruction step(cpu, 0x22, 0xC23BF4u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:98 LDA @VIRTUAL02
    case 0xC2970B: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:99 SEP #PROC_FLAGS::ACCUM8
    case 0xC2970D: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:100 JSR SUCCESS_255
    case 0xC2970F: {
        Instruction step(cpu, 0x20, 0x006AF7u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:102 CMP #0
    case 0xC29712: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:102 CMP #0
    // Overlapping static entry reached from 0xC29712.
    case 0xC29714: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/actions/psi_thunder_common.asm:103 BEQL @UNKNOWN18
    case 0xC29715: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/actions/psi_thunder_common.asm:103 BEQL @UNKNOWN18
    case 0xC29717: {
        Instruction step(cpu, 0x4C, 0x0097CAu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:105 LDA @VIRTUAL04
    case 0xC2971A: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:106 CMP #120
    case 0xC2971C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000078u : 0x000078u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:106 CMP #120
    // Overlapping static entry reached from 0xC2971C.
    case 0xC2971E: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:107 BNE @UNKNOWN11
    case 0xC2971F: {
        Instruction step(cpu, 0xD0, 0x000010u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/psi_thunder_common.asm:108 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_THUNDER_SMALL
    case 0xC29721: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E1u : 0x0003E1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/psi_thunder_common.asm:108 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_THUNDER_SMALL
    // Overlapping static entry reached from 0xC29721.
    case 0xC29723: {
        Instruction step(cpu, 0x03, 0x000085u, 2u, AddressMode::StackRelative);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/psi_thunder_common.asm:108 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_THUNDER_SMALL
    case 0xC29724: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/psi_thunder_common.asm:108 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_THUNDER_SMALL
    // Overlapping static entry reached from 0xC29723.
    case 0xC29725: {
        Instruction step(cpu, 0x0E, 0x00C7A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/psi_thunder_common.asm:108 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_THUNDER_SMALL
    case 0xC29726: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/psi_thunder_common.asm:108 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_THUNDER_SMALL
    // Overlapping static entry reached from 0xC29726.
    case 0xC29728: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/psi_thunder_common.asm:108 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_THUNDER_SMALL
    case 0xC29729: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/psi_thunder_common.asm:108 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_THUNDER_SMALL
    case 0xC2972B: {
        Instruction step(cpu, 0x22, 0xC1D9FFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:109 BRA @UNKNOWN13
    case 0xC2972F: {
        Instruction step(cpu, 0x80, 0x000014u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/psi_thunder_common.asm:111 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_THUNDER_LARGE
    case 0xC29731: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000F0u : 0x0003F0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/psi_thunder_common.asm:111 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_THUNDER_LARGE
    // Overlapping static entry reached from 0xC29731.
    case 0xC29733: {
        Instruction step(cpu, 0x03, 0x000085u, 2u, AddressMode::StackRelative);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/psi_thunder_common.asm:111 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_THUNDER_LARGE
    case 0xC29734: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/psi_thunder_common.asm:111 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_THUNDER_LARGE
    // Overlapping static entry reached from 0xC29733.
    case 0xC29735: {
        Instruction step(cpu, 0x0E, 0x00C7A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/psi_thunder_common.asm:111 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_THUNDER_LARGE
    case 0xC29736: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/psi_thunder_common.asm:111 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_THUNDER_LARGE
    // Overlapping static entry reached from 0xC29736.
    case 0xC29738: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/psi_thunder_common.asm:111 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_THUNDER_LARGE
    case 0xC29739: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/psi_thunder_common.asm:111 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_THUNDER_LARGE
    case 0xC2973B: {
        Instruction step(cpu, 0x22, 0xC1D9FFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:112 BRA @UNKNOWN13
    case 0xC2973F: {
        Instruction step(cpu, 0x80, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:114 JSL WINDOW_TICK
    case 0xC29741: {
        Instruction step(cpu, 0x22, 0xC13502u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:116 JSL UNKNOWN_C2EACF
    case 0xC29745: {
        Instruction step(cpu, 0x22, 0xC2E9E8u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:117 CMP #0
    case 0xC29749: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:117 CMP #0
    // Overlapping static entry reached from 0xC29749.
    case 0xC2974B: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:118 BNE @UNKNOWN12
    case 0xC2974C: {
        Instruction step(cpu, 0xD0, 0x0000F3u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:119 LDX CURRENT_TARGET
    case 0xC2974E: {
        Instruction step(cpu, 0xAE, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:120 SEP #PROC_FLAGS::ACCUM8
    case 0xC29751: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:121 STZ a:battler::use_alt_spritemap,X
    case 0xC29753: {
        Instruction step(cpu, 0x9E, 0x00004Bu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:122 LDX CURRENT_TARGET
    case 0xC29756: {
        Instruction step(cpu, 0xAE, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:123 REP #PROC_FLAGS::ACCUM8
    case 0xC29759: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:124 LDA a:battler::ally_or_enemy,X
    case 0xC2975B: {
        Instruction step(cpu, 0xBD, 0x00000Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:125 AND #$00FF
    case 0xC2975E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:125 AND #$00FF
    // Overlapping static entry reached from 0xC2975E.
    case 0xC29760: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:126 BNE @UNKNOWN14
    case 0xC29761: {
        Instruction step(cpu, 0xD0, 0x000031u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:127 LDX #1
    case 0xC29763: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:127 LDX #1
    // Overlapping static entry reached from 0xC29763.
    case 0xC29765: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:128 STX @LOCAL02
    case 0xC29766: {
        Instruction step(cpu, 0x86, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:129 LDX CURRENT_TARGET
    case 0xC29768: {
        Instruction step(cpu, 0xAE, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:130 LDA a:battler::row,X
    case 0xC2976B: {
        Instruction step(cpu, 0xBD, 0x000010u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:131 AND #$00FF
    case 0xC2976E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:131 AND #$00FF
    // Overlapping static entry reached from 0xC2976E.
    case 0xC29770: {
        Instruction step(cpu, 0x00, 0x00001Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:132 INC
    case 0xC29771: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:133 LDX @LOCAL02
    case 0xC29772: {
        Instruction step(cpu, 0xA6, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:134 JSL FIND_ITEM_IN_INVENTORY2
    case 0xC29774: {
        Instruction step(cpu, 0x22, 0xC43479u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:135 CMP #0
    case 0xC29778: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:135 CMP #0
    // Overlapping static entry reached from 0xC29778.
    case 0xC2977A: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:136 BEQ @UNKNOWN14
    case 0xC2977B: {
        Instruction step(cpu, 0xF0, 0x000017u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/psi_thunder_common.asm:137 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_FRANKLIN_TURN
    case 0xC2977D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000028u : 0x003628u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/psi_thunder_common.asm:137 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_FRANKLIN_TURN
    // Overlapping static entry reached from 0xC2977D.
    case 0xC2977F: {
        Instruction step(cpu, 0x36, 0x000085u, 2u, AddressMode::DirectPageIndexedX);
        step.rotate_left();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/psi_thunder_common.asm:137 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_FRANKLIN_TURN
    case 0xC29780: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/psi_thunder_common.asm:137 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_FRANKLIN_TURN
    // Overlapping static entry reached from 0xC2977F.
    case 0xC29781: {
        Instruction step(cpu, 0x0E, 0x00C7A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/psi_thunder_common.asm:137 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_FRANKLIN_TURN
    case 0xC29782: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/psi_thunder_common.asm:137 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_FRANKLIN_TURN
    // Overlapping static entry reached from 0xC29782.
    case 0xC29784: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/psi_thunder_common.asm:137 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_FRANKLIN_TURN
    case 0xC29785: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/psi_thunder_common.asm:137 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_FRANKLIN_TURN
    case 0xC29787: {
        Instruction step(cpu, 0x22, 0xC1D9FFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:138 LDA #1
    case 0xC2978B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:138 LDA #1
    // Overlapping static entry reached from 0xC2978B.
    case 0xC2978D: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:139 STA DAMAGE_IS_REFLECTED
    case 0xC2978E: {
        Instruction step(cpu, 0x8D, 0x00AC6Bu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:140 JSR SWAP_ATTACKER_WITH_TARGET
    case 0xC29791: {
        Instruction step(cpu, 0x20, 0x007E21u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:142 LDX CURRENT_TARGET
    case 0xC29794: {
        Instruction step(cpu, 0xAE, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:143 LDA a:battler::afflictions + STATUS_GROUP::SHIELD,X
    case 0xC29797: {
        Instruction step(cpu, 0xBD, 0x000023u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:144 AND #$00FF
    case 0xC2979A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:144 AND #$00FF
    // Overlapping static entry reached from 0xC2979A.
    case 0xC2979C: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:145 TAX
    case 0xC2979D: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:146 CPX #1
    case 0xC2979E: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:146 CPX #1
    // Overlapping static entry reached from 0xC2979E.
    case 0xC297A0: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:147 BEQ @UNKNOWN15
    case 0xC297A1: {
        Instruction step(cpu, 0xF0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:148 CPX #2
    case 0xC297A3: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:148 CPX #2
    // Overlapping static entry reached from 0xC297A3.
    case 0xC297A5: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:149 BNE @UNKNOWN16
    case 0xC297A6: {
        Instruction step(cpu, 0xD0, 0x00000Au, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:151 SEP #PROC_FLAGS::ACCUM8
    case 0xC297A8: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:152 LDA #1
    case 0xC297AA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x00AE01u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:153 LDX CURRENT_TARGET
    case 0xC297AC: {
        Instruction step(cpu, 0xAE, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:153 LDX CURRENT_TARGET
    // Overlapping static entry reached from 0xC297AA.
    case 0xC297AD: {
        Instruction step(cpu, 0x74, 0x0000ABu, 2u, AddressMode::DirectPageIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:154 STA a:battler::shield_hp,X
    case 0xC297AF: {
        Instruction step(cpu, 0x9D, 0x000025u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:156 JSR PSI_SHIELD_NULLIFY
    case 0xC297B2: {
        Instruction step(cpu, 0x20, 0x0093C6u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:158 CMP #0
    case 0xC297B5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:158 CMP #0
    // Overlapping static entry reached from 0xC297B5.
    case 0xC297B7: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:159 BNE @UNKNOWN17
    case 0xC297B8: {
        Instruction step(cpu, 0xD0, 0x00000Bu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:160 LDA @VIRTUAL04
    case 0xC297BA: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:161 JSR FIFTY_PERCENT_VARIANCE
    case 0xC297BC: {
        Instruction step(cpu, 0x20, 0x006983u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:162 LDX #$00FF
    case 0xC297BF: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:162 LDX #$00FF
    // Overlapping static entry reached from 0xC297BF.
    case 0xC297C1: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:163 JSR CALC_RESIST_DAMAGE
    case 0xC297C2: {
        Instruction step(cpu, 0x20, 0x0080CBu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:165 JSR WEAKEN_SHIELD
    case 0xC297C5: {
        Instruction step(cpu, 0x20, 0x009477u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:166 BRA @UNKNOWN19
    case 0xC297C8: {
        Instruction step(cpu, 0x80, 0x00001Cu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/psi_thunder_common.asm:169 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_THUNDER_MISS_SE
    case 0xC297CA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000004u : 0x000404u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/psi_thunder_common.asm:169 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_THUNDER_MISS_SE
    // Overlapping static entry reached from 0xC297CA.
    case 0xC297CC: {
        Instruction step(cpu, 0x04, 0x000085u, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/psi_thunder_common.asm:169 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_THUNDER_MISS_SE
    case 0xC297CD: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/psi_thunder_common.asm:169 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_THUNDER_MISS_SE
    // Overlapping static entry reached from 0xC297CC.
    case 0xC297CE: {
        Instruction step(cpu, 0x0E, 0x00C7A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/psi_thunder_common.asm:169 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_THUNDER_MISS_SE
    case 0xC297CF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/psi_thunder_common.asm:169 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_THUNDER_MISS_SE
    // Overlapping static entry reached from 0xC297CF.
    case 0xC297D1: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/psi_thunder_common.asm:169 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_THUNDER_MISS_SE
    case 0xC297D2: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/psi_thunder_common.asm:169 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_THUNDER_MISS_SE
    case 0xC297D4: {
        Instruction step(cpu, 0x22, 0xC1D9FFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/psi_thunder_common.asm:170 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KAMINARI_HAZURE
    case 0xC297D8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00002Eu : 0x00392Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/psi_thunder_common.asm:170 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KAMINARI_HAZURE
    // Overlapping static entry reached from 0xC297D8.
    case 0xC297DA: {
        Instruction step(cpu, 0x39, 0x000E85u, 3u, AddressMode::AbsoluteIndexedY);
        step.and_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/psi_thunder_common.asm:170 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KAMINARI_HAZURE
    case 0xC297DB: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/psi_thunder_common.asm:170 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KAMINARI_HAZURE
    case 0xC297DD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/psi_thunder_common.asm:170 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KAMINARI_HAZURE
    // Overlapping static entry reached from 0xC297DD.
    case 0xC297DF: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/psi_thunder_common.asm:170 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KAMINARI_HAZURE
    case 0xC297E0: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/psi_thunder_common.asm:170 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KAMINARI_HAZURE
    case 0xC297E2: {
        Instruction step(cpu, 0x22, 0xC1D9FFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:172 LDA #0
    case 0xC297E6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:172 LDA #0
    // Overlapping static entry reached from 0xC297E6.
    case 0xC297E8: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:173 JSL COUNT_CHARS
    case 0xC297E9: {
        Instruction step(cpu, 0x22, 0xC2BA70u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:174 CMP #0
    case 0xC297ED: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:174 CMP #0
    // Overlapping static entry reached from 0xC297ED.
    case 0xC297EF: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:175 BEQ @UNKNOWN21
    case 0xC297F0: {
        Instruction step(cpu, 0xF0, 0x00001Au, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:176 LDA #1
    case 0xC297F2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:176 LDA #1
    // Overlapping static entry reached from 0xC297F2.
    case 0xC297F4: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:177 JSL COUNT_CHARS
    case 0xC297F5: {
        Instruction step(cpu, 0x22, 0xC2BA70u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:178 CMP #0
    case 0xC297F9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:178 CMP #0
    // Overlapping static entry reached from 0xC297F9.
    case 0xC297FB: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:179 BEQ @UNKNOWN21
    case 0xC297FC: {
        Instruction step(cpu, 0xF0, 0x00000Eu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:180 LDY @LOCAL03
    case 0xC297FE: {
        Instruction step(cpu, 0xA4, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:181 INY
    case 0xC29800: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:182 STY @LOCAL03
    case 0xC29801: {
        Instruction step(cpu, 0x84, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_common.asm:184 CPY @LOCAL04
    case 0xC29803: {
        Instruction step(cpu, 0xC4, 0x00001Au, 2u, AddressMode::DirectPage);
        step.compare_y();
        return step.finish();
    }
    // include/macros.asm:784 BCS :+
    // Macro caller: src/battle/actions/psi_thunder_common.asm:185 BCCL @UNKNOWN4
    case 0xC29805: {
        Instruction step(cpu, 0xB0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/battle/actions/psi_thunder_common.asm:185 BCCL @UNKNOWN4
    case 0xC29807: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:786 JMP dest
    // Macro caller: src/battle/actions/psi_thunder_common.asm:185 BCCL @UNKNOWN4
    case 0xC29809: {
        Instruction step(cpu, 0x4C, 0x009674u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/actions/psi_thunder_common.asm:187 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    case 0xC2980C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/actions/psi_thunder_common.asm:187 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    // Overlapping static entry reached from 0xC2980C.
    case 0xC2980E: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/battle/actions/psi_thunder_common.asm:187 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    case 0xC2980F: {
        Instruction step(cpu, 0x8D, 0x00AB6Eu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/actions/psi_thunder_common.asm:187 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    case 0xC29812: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/actions/psi_thunder_common.asm:187 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    // Overlapping static entry reached from 0xC29812.
    case 0xC29814: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/battle/actions/psi_thunder_common.asm:187 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    case 0xC29815: {
        Instruction step(cpu, 0x8D, 0x00AB70u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/actions/psi_thunder_common.asm:188 END_C_FUNCTION
    case 0xC29818: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/actions/psi_thunder_common.asm:188 END_C_FUNCTION
    case 0xC29819: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
