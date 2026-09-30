// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/text/ccs/screen_reload_pointer.asm
bool resume_text_ccs_screen_reload_pointer(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:3 BEGIN_C_FUNCTION
    case 0xC17067: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:10 END_STACK_VARS
    case 0xC17069: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:10 END_STACK_VARS
    case 0xC1706A: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:10 END_STACK_VARS
    case 0xC1706B: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:10 END_STACK_VARS
    case 0xC1706C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000ECu : 0x00FFECu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC1706C.
    case 0xC1706E: {
        Instruction step(cpu, 0xFF, 0x8A685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:10 END_STACK_VARS
    case 0xC1706F: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:10 END_STACK_VARS
    case 0xC17070: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/ccs/screen_reload_pointer.asm:11 TXA
    case 0xC17071: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/screen_reload_pointer.asm:12 STA @LOCAL01
    case 0xC17072: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/screen_reload_pointer.asm:13 LDA #3
    case 0xC17074: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/screen_reload_pointer.asm:13 LDA #3
    // Overlapping static entry reached from 0xC17074.
    case 0xC17076: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/screen_reload_pointer.asm:14 CLC
    case 0xC17077: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/ccs/screen_reload_pointer.asm:15 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC17078: {
        Instruction step(cpu, 0xED, 0x009A7Eu, 3u, AddressMode::Absolute);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC1707B: {
        Instruction step(cpu, 0x50, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_clear();
        return step.finish();
    }
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC1707D: {
        Instruction step(cpu, 0x10, 0x000019u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC1707F: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC17081: {
        Instruction step(cpu, 0x30, 0x000015u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/text/ccs/screen_reload_pointer.asm:17 LDA @LOCAL01
    case 0xC17083: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/screen_reload_pointer.asm:18 SEP #PROC_FLAGS::ACCUM8
    case 0xC17085: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/screen_reload_pointer.asm:19 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC17087: {
        Instruction step(cpu, 0xAE, 0x009A7Eu, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/screen_reload_pointer.asm:20 STA CC_ARGUMENT_STORAGE,X
    case 0xC1708A: {
        Instruction step(cpu, 0x9D, 0x009A6Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/screen_reload_pointer.asm:21 REP #PROC_FLAGS::ACCUM8
    case 0xC1708D: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/screen_reload_pointer.asm:22 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC1708F: {
        Instruction step(cpu, 0xEE, 0x009A7Eu, 3u, AddressMode::Absolute);
        step.increment();
        return step.finish();
    }
    // src/text/ccs/screen_reload_pointer.asm:22 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    // Overlapping static entry reached from 0xC170AD.
    case 0xC17091: {
        Instruction step(cpu, 0x9A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_stack();
        return step.finish();
    }
    // src/text/ccs/screen_reload_pointer.asm:23 LDA #.LOWORD(CC_1F_63)
    case 0xC17092: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000067u : 0x007067u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/screen_reload_pointer.asm:23 LDA #.LOWORD(CC_1F_63)
    // Overlapping static entry reached from 0xC17092.
    case 0xC17094: {
        Instruction step(cpu, 0x70, 0x00004Cu, 2u, AddressMode::Relative8);
        step.branch_if_overflow_set();
        return step.finish();
    }
    // src/text/ccs/screen_reload_pointer.asm:24 JMP @UNKNOWN3
    case 0xC17095: {
        Instruction step(cpu, 0x4C, 0x00713Cu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/screen_reload_pointer.asm:24 JMP @UNKNOWN3
    // Overlapping static entry reached from 0xC17094.
    case 0xC17096: {
        Instruction step(cpu, 0x3C, 0x00E271u, 3u, AddressMode::AbsoluteIndexedX);
        step.test_bits();
        return step.finish();
    }
    // src/text/ccs/screen_reload_pointer.asm:26 SEP #PROC_FLAGS::INDEX8
    case 0xC17098: {
        Instruction step(cpu, 0xE2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/screen_reload_pointer.asm:26 SEP #PROC_FLAGS::INDEX8
    // Overlapping static entry reached from 0xC17096.
    case 0xC17099: {
        Instruction step(cpu, 0x10, 0x0000A0u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // src/text/ccs/screen_reload_pointer.asm:27 LDY #24
    case 0xC1709A: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000018u : 0x00A518u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/ccs/screen_reload_pointer.asm:27 LDY #24
    // Overlapping static entry reached from 0xC17099.
    case 0xC1709B: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // include/macros.asm:865 LDA src
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:28 MOVE_INT1632 @LOCAL01, @VIRTUAL06
    case 0xC1709C: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:865 LDA src
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:28 MOVE_INT1632 @LOCAL01, @VIRTUAL06
    // Overlapping static entry reached from 0xC1709A.
    case 0xC1709D: {
        Instruction step(cpu, 0x12, 0x000085u, 2u, AddressMode::DirectPageIndirect);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:28 MOVE_INT1632 @LOCAL01, @VIRTUAL06
    case 0xC1709E: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:28 MOVE_INT1632 @LOCAL01, @VIRTUAL06
    // Overlapping static entry reached from 0xC1709D.
    case 0xC1709F: {
        Instruction step(cpu, 0x06, 0x000064u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:28 MOVE_INT1632 @LOCAL01, @VIRTUAL06
    case 0xC170A0: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:28 MOVE_INT1632 @LOCAL01, @VIRTUAL06
    // Overlapping static entry reached from 0xC1709F.
    case 0xC170A1: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // src/text/ccs/screen_reload_pointer.asm:29 JSL ASL32_ENTRY2
    case 0xC170A2: {
        Instruction step(cpu, 0x22, 0xC09228u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:917 LDA val + 2
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:30 PUSH32 @VIRTUAL06
    case 0xC170A6: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:918 PHA
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:30 PUSH32 @VIRTUAL06
    case 0xC170A8: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:919 LDA val
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:30 PUSH32 @VIRTUAL06
    case 0xC170A9: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:920 PHA
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:30 PUSH32 @VIRTUAL06
    case 0xC170AB: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/text/ccs/screen_reload_pointer.asm:31 LDY #16
    case 0xC170AC: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000010u : 0x00E210u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/ccs/screen_reload_pointer.asm:31 LDY #16
    // Overlapping static entry reached from 0xC1456B.
    case 0xC170AD: {
        Instruction step(cpu, 0x10, 0x0000E2u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // src/text/ccs/screen_reload_pointer.asm:32 SEP #PROC_FLAGS::ACCUM8
    case 0xC170AE: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/screen_reload_pointer.asm:32 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC170AC.
    case 0xC170AF: {
        Instruction step(cpu, 0x20, 0x0070ADu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC170B0: {
        Instruction step(cpu, 0xAD, 0x009A70u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    // Overlapping static entry reached from 0xC170AF.
    case 0xC170B2: {
        Instruction step(cpu, 0x9A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_stack();
        return step.finish();
    }
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC170B3: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC170B5: {
        Instruction step(cpu, 0x64, 0x000007u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC170B7: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC170B9: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/text/ccs/screen_reload_pointer.asm:34 REP #PROC_FLAGS::ACCUM8
    case 0xC170BB: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/screen_reload_pointer.asm:35 JSL ASL32_ENTRY2
    case 0xC170BD: {
        Instruction step(cpu, 0x22, 0xC09228u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:917 LDA val + 2
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:36 PUSH32 @VIRTUAL06
    case 0xC170C1: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:918 PHA
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:36 PUSH32 @VIRTUAL06
    case 0xC170C3: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:919 LDA val
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:36 PUSH32 @VIRTUAL06
    case 0xC170C4: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:920 PHA
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:36 PUSH32 @VIRTUAL06
    case 0xC170C6: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/text/ccs/screen_reload_pointer.asm:37 LDY #8
    case 0xC170C7: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000008u : 0x00E208u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/ccs/screen_reload_pointer.asm:38 SEP #PROC_FLAGS::ACCUM8
    case 0xC170C9: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/screen_reload_pointer.asm:38 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC170C7.
    case 0xC170CA: {
        Instruction step(cpu, 0x20, 0x006FADu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC170CB: {
        Instruction step(cpu, 0xAD, 0x009A6Fu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    // Overlapping static entry reached from 0xC170CA.
    case 0xC170CD: {
        Instruction step(cpu, 0x9A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_stack();
        return step.finish();
    }
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC170CE: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC170D0: {
        Instruction step(cpu, 0x64, 0x000007u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC170D2: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC170D4: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/text/ccs/screen_reload_pointer.asm:40 REP #PROC_FLAGS::ACCUM8
    case 0xC170D6: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/screen_reload_pointer.asm:41 JSL ASL32_ENTRY2
    case 0xC170D8: {
        Instruction step(cpu, 0x22, 0xC09228u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:42 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC170DC: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:42 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC170DE: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:42 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC170E0: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:42 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC170E2: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/screen_reload_pointer.asm:43 SEP #PROC_FLAGS::ACCUM8
    case 0xC170E4: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:44 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC170E6: {
        Instruction step(cpu, 0xAD, 0x009A6Eu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:44 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC170E9: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:44 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC170EB: {
        Instruction step(cpu, 0x64, 0x000007u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:44 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC170ED: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:44 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC170EF: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/text/ccs/screen_reload_pointer.asm:45 REP #PROC_FLAGS::ACCUM8
    case 0xC170F1: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:955 LDA val1
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC170F3: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:956 ORA val2
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC170F5: {
        Instruction step(cpu, 0x05, 0x00000Au, 2u, AddressMode::DirectPage);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:957 STA dest
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC170F7: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:958 LDA val1 + 2
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC170F9: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:959 ORA val2 + 2
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC170FB: {
        Instruction step(cpu, 0x05, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:960 STA dest + 2
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC170FD: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:924 PLA
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:47 PULL32 @VIRTUAL0A
    case 0xC170FF: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:925 STA val
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:47 PULL32 @VIRTUAL0A
    case 0xC17100: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:926 PLA
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:47 PULL32 @VIRTUAL0A
    case 0xC17102: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:927 STA val + 2
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:47 PULL32 @VIRTUAL0A
    case 0xC17103: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:955 LDA val1
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC17105: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:956 ORA val2
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC17107: {
        Instruction step(cpu, 0x05, 0x00000Au, 2u, AddressMode::DirectPage);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:957 STA dest
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC17109: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:958 LDA val1 + 2
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC1710B: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:959 ORA val2 + 2
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC1710D: {
        Instruction step(cpu, 0x05, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:960 STA dest + 2
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC1710F: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:924 PLA
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:49 PULL32 @VIRTUAL0A
    case 0xC17111: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:925 STA val
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:49 PULL32 @VIRTUAL0A
    case 0xC17112: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:926 PLA
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:49 PULL32 @VIRTUAL0A
    case 0xC17114: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:927 STA val + 2
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:49 PULL32 @VIRTUAL0A
    case 0xC17115: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:955 LDA val1
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC17117: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:956 ORA val2
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC17119: {
        Instruction step(cpu, 0x05, 0x00000Au, 2u, AddressMode::DirectPage);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:957 STA dest
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC1711B: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:958 LDA val1 + 2
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC1711D: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:959 ORA val2 + 2
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC1711F: {
        Instruction step(cpu, 0x05, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:960 STA dest + 2
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC17121: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/screen_reload_pointer.asm:51 LDA #$00FF
    case 0xC17123: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/screen_reload_pointer.asm:51 LDA #$00FF
    // Overlapping static entry reached from 0xC17123.
    case 0xC17125: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/screen_reload_pointer.asm:52 JSL UNKNOWN_C46594
    case 0xC17126: {
        Instruction step(cpu, 0x22, 0xC44302u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:53 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1712A: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:53 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1712C: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:53 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1712E: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:53 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17130: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/screen_reload_pointer.asm:54 LDA #10
    case 0xC17132: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/screen_reload_pointer.asm:54 LDA #10
    // Overlapping static entry reached from 0xC17132.
    case 0xC17134: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/screen_reload_pointer.asm:55 JSL UNKNOWN_C064E3
    case 0xC17135: {
        Instruction step(cpu, 0x22, 0xC06711u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/screen_reload_pointer.asm:56 LDA #NULL
    case 0xC17139: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/screen_reload_pointer.asm:56 LDA #NULL
    // Overlapping static entry reached from 0xC17139.
    case 0xC1713B: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:58 END_C_FUNCTION
    case 0xC1713C: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:58 END_C_FUNCTION
    case 0xC1713D: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
