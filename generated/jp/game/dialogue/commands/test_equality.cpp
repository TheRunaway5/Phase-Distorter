// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/text/ccs/test_equality.asm
bool resume_text_ccs_test_equality(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/test_equality.asm:3 BEGIN_C_FUNCTION
    case 0xC15547: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/test_equality.asm:10 END_STACK_VARS
    case 0xC15549: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/test_equality.asm:10 END_STACK_VARS
    case 0xC1554A: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/test_equality.asm:10 END_STACK_VARS
    case 0xC1554B: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/test_equality.asm:10 END_STACK_VARS
    case 0xC1554C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000ECu : 0x00FFECu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/test_equality.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC1554C.
    case 0xC1554E: {
        Instruction step(cpu, 0xFF, 0x86685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/test_equality.asm:10 END_STACK_VARS
    case 0xC1554F: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/test_equality.asm:10 END_STACK_VARS
    case 0xC15550: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/ccs/test_equality.asm:11 STX @LOCAL01
    case 0xC15551: {
        Instruction step(cpu, 0x86, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/ccs/test_equality.asm:11 STX @LOCAL01
    // Overlapping static entry reached from 0xC1554E.
    case 0xC15552: {
        Instruction step(cpu, 0x12, 0x0000ADu, 2u, AddressMode::DirectPageIndirect);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/ccs/test_equality.asm:12 LDA CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC15553: {
        Instruction step(cpu, 0xAD, 0x009A7Eu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/test_equality.asm:12 LDA CC_ARGUMENT_GATHERING_LOOP_COUNTER
    // Overlapping static entry reached from 0xC15552.
    case 0xC15554: {
        Instruction step(cpu, 0x7E, 0x00C99Au, 3u, AddressMode::AbsoluteIndexedX);
        step.rotate_right();
        return step.finish();
    }
    // src/text/ccs/test_equality.asm:13 CMP #4
    case 0xC15556: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/test_equality.asm:13 CMP #4
    // Overlapping static entry reached from 0xC15554.
    case 0xC15557: {
        Instruction step(cpu, 0x04, 0x000000u, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/text/ccs/test_equality.asm:13 CMP #4
    // Overlapping static entry reached from 0xC15556.
    case 0xC15558: {
        Instruction step(cpu, 0x00, 0x0000B0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/test_equality.asm:14 BCS @UNKNOWN0
    case 0xC15559: {
        Instruction step(cpu, 0xB0, 0x000014u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/text/ccs/test_equality.asm:15 TXA
    case 0xC1555B: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/test_equality.asm:16 SEP #PROC_FLAGS::ACCUM8
    case 0xC1555C: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/test_equality.asm:17 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC1555E: {
        Instruction step(cpu, 0xAE, 0x009A7Eu, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/test_equality.asm:18 STA CC_ARGUMENT_STORAGE,X
    case 0xC15561: {
        Instruction step(cpu, 0x9D, 0x009A6Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/test_equality.asm:19 REP #PROC_FLAGS::ACCUM8
    case 0xC15564: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/test_equality.asm:20 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC15566: {
        Instruction step(cpu, 0xEE, 0x009A7Eu, 3u, AddressMode::Absolute);
        step.increment();
        return step.finish();
    }
    // src/text/ccs/test_equality.asm:21 LDA #.LOWORD(CC_18_07)
    case 0xC15569: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000047u : 0x005547u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/test_equality.asm:21 LDA #.LOWORD(CC_18_07)
    // Overlapping static entry reached from 0xC15569.
    case 0xC1556B: {
        Instruction step(cpu, 0x55, 0x00004Cu, 2u, AddressMode::DirectPageIndexedX);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/ccs/test_equality.asm:22 JMP @UNKNOWN10
    case 0xC1556C: {
        Instruction step(cpu, 0x4C, 0x00563Cu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/test_equality.asm:22 JMP @UNKNOWN10
    // Overlapping static entry reached from 0xC1556B.
    case 0xC1556D: {
        Instruction step(cpu, 0x3C, 0x00E256u, 3u, AddressMode::AbsoluteIndexedX);
        step.test_bits();
        return step.finish();
    }
    // src/text/ccs/test_equality.asm:24 SEP #PROC_FLAGS::ACCUM8
    case 0xC1556F: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/test_equality.asm:24 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC1556D.
    case 0xC15570: {
        Instruction step(cpu, 0x20, 0x0008A9u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/test_equality.asm:25 LDA #8
    case 0xC15571: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000008u : 0x00E208u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/test_equality.asm:26 SEP #PROC_FLAGS::INDEX8
    case 0xC15573: {
        Instruction step(cpu, 0xE2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/test_equality.asm:26 SEP #PROC_FLAGS::INDEX8
    // Overlapping static entry reached from 0xC15571.
    case 0xC15574: {
        Instruction step(cpu, 0x10, 0x0000A8u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // src/text/ccs/test_equality.asm:27 TAY
    case 0xC15575: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/test_equality.asm:28 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC15576: {
        Instruction step(cpu, 0xAD, 0x009A6Fu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/test_equality.asm:28 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC15579: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/test_equality.asm:28 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC1557B: {
        Instruction step(cpu, 0x64, 0x000007u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/test_equality.asm:28 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC1557D: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/test_equality.asm:28 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC1557F: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/text/ccs/test_equality.asm:29 REP #PROC_FLAGS::ACCUM8
    case 0xC15581: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/test_equality.asm:30 JSL ASL32_ENTRY2
    case 0xC15583: {
        Instruction step(cpu, 0x22, 0xC09228u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/test_equality.asm:31 SEP #PROC_FLAGS::ACCUM8
    case 0xC15587: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/test_equality.asm:32 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL0A
    case 0xC15589: {
        Instruction step(cpu, 0xAD, 0x009A6Eu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/test_equality.asm:32 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL0A
    case 0xC1558C: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/test_equality.asm:32 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL0A
    case 0xC1558E: {
        Instruction step(cpu, 0x64, 0x00000Bu, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/test_equality.asm:32 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL0A
    case 0xC15590: {
        Instruction step(cpu, 0x64, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/test_equality.asm:32 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL0A
    case 0xC15592: {
        Instruction step(cpu, 0x64, 0x00000Du, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/text/ccs/test_equality.asm:33 REP #PROC_FLAGS::ACCUM8
    case 0xC15594: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:955 LDA val1
    // Macro caller: src/text/ccs/test_equality.asm:34 OR_INT_ASSIGN @VIRTUAL0A, @VIRTUAL06
    case 0xC15596: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:956 ORA val2
    // Macro caller: src/text/ccs/test_equality.asm:34 OR_INT_ASSIGN @VIRTUAL0A, @VIRTUAL06
    case 0xC15598: {
        Instruction step(cpu, 0x05, 0x000006u, 2u, AddressMode::DirectPage);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:957 STA dest
    // Macro caller: src/text/ccs/test_equality.asm:34 OR_INT_ASSIGN @VIRTUAL0A, @VIRTUAL06
    case 0xC1559A: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:958 LDA val1 + 2
    // Macro caller: src/text/ccs/test_equality.asm:34 OR_INT_ASSIGN @VIRTUAL0A, @VIRTUAL06
    case 0xC1559C: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:959 ORA val2 + 2
    // Macro caller: src/text/ccs/test_equality.asm:34 OR_INT_ASSIGN @VIRTUAL0A, @VIRTUAL06
    case 0xC1559E: {
        Instruction step(cpu, 0x05, 0x000008u, 2u, AddressMode::DirectPage);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:960 STA dest + 2
    // Macro caller: src/text/ccs/test_equality.asm:34 OR_INT_ASSIGN @VIRTUAL0A, @VIRTUAL06
    case 0xC155A0: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/test_equality.asm:35 SEP #PROC_FLAGS::ACCUM8
    case 0xC155A2: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/test_equality.asm:36 LDA #16
    case 0xC155A4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000010u : 0x00A810u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/test_equality.asm:37 TAY
    case 0xC155A6: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/test_equality.asm:38 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC155A7: {
        Instruction step(cpu, 0xAD, 0x009A70u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/test_equality.asm:38 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC155AA: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/test_equality.asm:38 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC155AC: {
        Instruction step(cpu, 0x64, 0x000007u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/test_equality.asm:38 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC155AE: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/test_equality.asm:38 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC155B0: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/text/ccs/test_equality.asm:39 REP #PROC_FLAGS::ACCUM8
    case 0xC155B2: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/test_equality.asm:40 JSL ASL32_ENTRY2
    case 0xC155B4: {
        Instruction step(cpu, 0x22, 0xC09228u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:955 LDA val1
    // Macro caller: src/text/ccs/test_equality.asm:41 OR_INT_ASSIGN @VIRTUAL0A, @VIRTUAL06
    case 0xC155B8: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:956 ORA val2
    // Macro caller: src/text/ccs/test_equality.asm:41 OR_INT_ASSIGN @VIRTUAL0A, @VIRTUAL06
    case 0xC155BA: {
        Instruction step(cpu, 0x05, 0x000006u, 2u, AddressMode::DirectPage);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:957 STA dest
    // Macro caller: src/text/ccs/test_equality.asm:41 OR_INT_ASSIGN @VIRTUAL0A, @VIRTUAL06
    case 0xC155BC: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:958 LDA val1 + 2
    // Macro caller: src/text/ccs/test_equality.asm:41 OR_INT_ASSIGN @VIRTUAL0A, @VIRTUAL06
    case 0xC155BE: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:959 ORA val2 + 2
    // Macro caller: src/text/ccs/test_equality.asm:41 OR_INT_ASSIGN @VIRTUAL0A, @VIRTUAL06
    case 0xC155C0: {
        Instruction step(cpu, 0x05, 0x000008u, 2u, AddressMode::DirectPage);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:960 STA dest + 2
    // Macro caller: src/text/ccs/test_equality.asm:41 OR_INT_ASSIGN @VIRTUAL0A, @VIRTUAL06
    case 0xC155C2: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/test_equality.asm:42 SEP #PROC_FLAGS::ACCUM8
    case 0xC155C4: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/test_equality.asm:43 LDA #24
    case 0xC155C6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000018u : 0x00A818u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/test_equality.asm:44 TAY
    case 0xC155C8: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/test_equality.asm:45 MOVE_INT832 CC_ARGUMENT_STORAGE+3, @VIRTUAL06
    case 0xC155C9: {
        Instruction step(cpu, 0xAD, 0x009A71u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/test_equality.asm:45 MOVE_INT832 CC_ARGUMENT_STORAGE+3, @VIRTUAL06
    case 0xC155CC: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/test_equality.asm:45 MOVE_INT832 CC_ARGUMENT_STORAGE+3, @VIRTUAL06
    case 0xC155CE: {
        Instruction step(cpu, 0x64, 0x000007u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/test_equality.asm:45 MOVE_INT832 CC_ARGUMENT_STORAGE+3, @VIRTUAL06
    case 0xC155D0: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/test_equality.asm:45 MOVE_INT832 CC_ARGUMENT_STORAGE+3, @VIRTUAL06
    case 0xC155D2: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/text/ccs/test_equality.asm:46 REP #PROC_FLAGS::ACCUM8
    case 0xC155D4: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/test_equality.asm:47 JSL ASL32_ENTRY2
    case 0xC155D6: {
        Instruction step(cpu, 0x22, 0xC09228u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:955 LDA val1
    // Macro caller: src/text/ccs/test_equality.asm:48 OR_INT_ASSIGN @VIRTUAL0A, @VIRTUAL06
    case 0xC155DA: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:956 ORA val2
    // Macro caller: src/text/ccs/test_equality.asm:48 OR_INT_ASSIGN @VIRTUAL0A, @VIRTUAL06
    case 0xC155DC: {
        Instruction step(cpu, 0x05, 0x000006u, 2u, AddressMode::DirectPage);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:957 STA dest
    // Macro caller: src/text/ccs/test_equality.asm:48 OR_INT_ASSIGN @VIRTUAL0A, @VIRTUAL06
    case 0xC155DE: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:958 LDA val1 + 2
    // Macro caller: src/text/ccs/test_equality.asm:48 OR_INT_ASSIGN @VIRTUAL0A, @VIRTUAL06
    case 0xC155E0: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:959 ORA val2 + 2
    // Macro caller: src/text/ccs/test_equality.asm:48 OR_INT_ASSIGN @VIRTUAL0A, @VIRTUAL06
    case 0xC155E2: {
        Instruction step(cpu, 0x05, 0x000008u, 2u, AddressMode::DirectPage);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:960 STA dest + 2
    // Macro caller: src/text/ccs/test_equality.asm:48 OR_INT_ASSIGN @VIRTUAL0A, @VIRTUAL06
    case 0xC155E4: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/test_equality.asm:49 REP #PROC_FLAGS::INDEX8
    case 0xC155E6: {
        Instruction step(cpu, 0xC2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/test_equality.asm:50 LDX @LOCAL01
    case 0xC155E8: {
        Instruction step(cpu, 0xA6, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/test_equality.asm:51 BNE @UNKNOWN1
    case 0xC155EA: {
        Instruction step(cpu, 0xD0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/ccs/test_equality.asm:52 JSR GET_WORKING_MEMORY
    case 0xC155EC: {
        Instruction step(cpu, 0x20, 0x00060Du, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/test_equality.asm:53 BRA @UNKNOWN3
    case 0xC155EF: {
        Instruction step(cpu, 0x80, 0x000011u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/test_equality.asm:55 CPX #1
    case 0xC155F1: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/text/ccs/test_equality.asm:55 CPX #1
    // Overlapping static entry reached from 0xC155F1.
    case 0xC155F3: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/test_equality.asm:56 BNE @UNKNOWN2
    case 0xC155F4: {
        Instruction step(cpu, 0xD0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/ccs/test_equality.asm:57 JSR GET_ARGUMENT_MEMORY
    case 0xC155F6: {
        Instruction step(cpu, 0x20, 0x0005DFu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/test_equality.asm:58 BRA @UNKNOWN3
    case 0xC155F9: {
        Instruction step(cpu, 0x80, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/test_equality.asm:60 JSR GET_SECONDARY_MEMORY
    case 0xC155FB: {
        Instruction step(cpu, 0x20, 0x000603u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/test_equality.asm:61 STORE_INT1632 @VIRTUAL06
    case 0xC155FE: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/test_equality.asm:61 STORE_INT1632 @VIRTUAL06
    case 0xC15600: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/text/ccs/test_equality.asm:63 LDA @VIRTUAL06
    case 0xC15602: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/test_equality.asm:64 CMP @VIRTUAL0A
    case 0xC15604: {
        Instruction step(cpu, 0xC5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/test_equality.asm:65 LDA @VIRTUAL06+2
    case 0xC15606: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/test_equality.asm:66 SBC @VIRTUAL0A+2
    case 0xC15608: {
        Instruction step(cpu, 0xE5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/ccs/test_equality.asm:67 BCS @UNKNOWN4
    case 0xC1560A: {
        Instruction step(cpu, 0xB0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/text/ccs/test_equality.asm:68 LDA #0
    case 0xC1560C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/test_equality.asm:68 LDA #0
    // Overlapping static entry reached from 0xC1560C.
    case 0xC1560E: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/test_equality.asm:69 BRA @UNKNOWN8
    case 0xC1560F: {
        Instruction step(cpu, 0x80, 0x000015u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:745 LDA src + 2
    // Macro caller: src/text/ccs/test_equality.asm:71 CMP32 @VIRTUAL0A, @VIRTUAL06
    case 0xC15611: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:746 CMP dest + 2
    // Macro caller: src/text/ccs/test_equality.asm:71 CMP32 @VIRTUAL0A, @VIRTUAL06
    case 0xC15613: {
        Instruction step(cpu, 0xC5, 0x000008u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:747 BNE :+
    // Macro caller: src/text/ccs/test_equality.asm:71 CMP32 @VIRTUAL0A, @VIRTUAL06
    case 0xC15615: {
        Instruction step(cpu, 0xD0, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:748 LDA src
    // Macro caller: src/text/ccs/test_equality.asm:71 CMP32 @VIRTUAL0A, @VIRTUAL06
    case 0xC15617: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:749 CMP dest
    // Macro caller: src/text/ccs/test_equality.asm:71 CMP32 @VIRTUAL0A, @VIRTUAL06
    case 0xC15619: {
        Instruction step(cpu, 0xC5, 0x000006u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/test_equality.asm:72 BNE @UNKNOWN6
    case 0xC1561B: {
        Instruction step(cpu, 0xD0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/ccs/test_equality.asm:73 LDX #1
    case 0xC1561D: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/test_equality.asm:73 LDX #1
    // Overlapping static entry reached from 0xC1561D.
    case 0xC1561F: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/test_equality.asm:74 BRA @UNKNOWN7
    case 0xC15620: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/test_equality.asm:76 LDX #2
    case 0xC15622: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/test_equality.asm:76 LDX #2
    // Overlapping static entry reached from 0xC15622.
    case 0xC15624: {
        Instruction step(cpu, 0x00, 0x00008Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/test_equality.asm:78 TXA
    case 0xC15625: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/test_equality.asm:80 STORE_INT1632S @VIRTUAL06
    case 0xC15626: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/test_equality.asm:80 STORE_INT1632S @VIRTUAL06
    case 0xC15628: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:883 BPL :+
    // Macro caller: src/text/ccs/test_equality.asm:80 STORE_INT1632S @VIRTUAL06
    case 0xC1562A: {
        Instruction step(cpu, 0x10, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:884 DEC dest+2
    // Macro caller: src/text/ccs/test_equality.asm:80 STORE_INT1632S @VIRTUAL06
    case 0xC1562C: {
        Instruction step(cpu, 0xC6, 0x000008u, 2u, AddressMode::DirectPage);
        step.decrement();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/test_equality.asm:81 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1562E: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/test_equality.asm:81 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15630: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/test_equality.asm:81 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15632: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/test_equality.asm:81 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15634: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/test_equality.asm:82 JSR SET_WORKING_MEMORY
    case 0xC15636: {
        Instruction step(cpu, 0x20, 0x000660u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/test_equality.asm:83 LDA #NULL
    case 0xC15639: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/test_equality.asm:83 LDA #NULL
    // Overlapping static entry reached from 0xC15639.
    case 0xC1563B: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/test_equality.asm:85 END_C_FUNCTION
    case 0xC1563C: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/test_equality.asm:85 END_C_FUNCTION
    case 0xC1563D: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
