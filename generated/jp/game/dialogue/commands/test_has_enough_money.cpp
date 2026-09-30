// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/text/ccs/test_has_enough_money.asm
bool resume_text_ccs_test_has_enough_money(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/test_has_enough_money.asm:3 BEGIN_C_FUNCTION
    case 0xC15C74: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/test_has_enough_money.asm:10 END_STACK_VARS
    case 0xC15C76: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/test_has_enough_money.asm:10 END_STACK_VARS
    case 0xC15C77: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/test_has_enough_money.asm:10 END_STACK_VARS
    case 0xC15C78: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/test_has_enough_money.asm:10 END_STACK_VARS
    case 0xC15C79: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000ECu : 0x00FFECu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/test_has_enough_money.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC15C79.
    case 0xC15C7B: {
        Instruction step(cpu, 0xFF, 0x8A685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/test_has_enough_money.asm:10 END_STACK_VARS
    case 0xC15C7C: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/test_has_enough_money.asm:10 END_STACK_VARS
    case 0xC15C7D: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/ccs/test_has_enough_money.asm:11 TXA
    case 0xC15C7E: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/test_has_enough_money.asm:12 STA @LOCAL01
    case 0xC15C7F: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/test_has_enough_money.asm:13 LDA #3
    case 0xC15C81: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/test_has_enough_money.asm:13 LDA #3
    // Overlapping static entry reached from 0xC15C81.
    case 0xC15C83: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/test_has_enough_money.asm:14 CLC
    case 0xC15C84: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/ccs/test_has_enough_money.asm:15 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC15C85: {
        Instruction step(cpu, 0xED, 0x009A7Eu, 3u, AddressMode::Absolute);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/test_has_enough_money.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC15C88: {
        Instruction step(cpu, 0x50, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_clear();
        return step.finish();
    }
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/test_has_enough_money.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC15C8A: {
        Instruction step(cpu, 0x10, 0x000019u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/test_has_enough_money.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC15C8C: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/test_has_enough_money.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC15C8E: {
        Instruction step(cpu, 0x30, 0x000015u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/text/ccs/test_has_enough_money.asm:17 LDA @LOCAL01
    case 0xC15C90: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/test_has_enough_money.asm:18 SEP #PROC_FLAGS::ACCUM8
    case 0xC15C92: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/test_has_enough_money.asm:19 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC15C94: {
        Instruction step(cpu, 0xAE, 0x009A7Eu, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/test_has_enough_money.asm:20 STA CC_ARGUMENT_STORAGE,X
    case 0xC15C97: {
        Instruction step(cpu, 0x9D, 0x009A6Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/test_has_enough_money.asm:21 REP #PROC_FLAGS::ACCUM8
    case 0xC15C9A: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/test_has_enough_money.asm:22 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC15C9C: {
        Instruction step(cpu, 0xEE, 0x009A7Eu, 3u, AddressMode::Absolute);
        step.increment();
        return step.finish();
    }
    // src/text/ccs/test_has_enough_money.asm:23 LDA #.LOWORD(CC_1D_14)
    case 0xC15C9F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000074u : 0x005C74u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/test_has_enough_money.asm:23 LDA #.LOWORD(CC_1D_14)
    // Overlapping static entry reached from 0xC15C9F.
    case 0xC15CA1: {
        Instruction step(cpu, 0x5C, 0x5D874Cu, 4u, AddressMode::Long);
        step.jump_long();
        return step.finish();
    }
    // src/text/ccs/test_has_enough_money.asm:24 JMP @UNKNOWN7
    case 0xC15CA2: {
        Instruction step(cpu, 0x4C, 0x005D87u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/test_has_enough_money.asm:26 SEP #PROC_FLAGS::INDEX8
    case 0xC15CA5: {
        Instruction step(cpu, 0xE2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/test_has_enough_money.asm:27 LDY #24
    case 0xC15CA7: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000018u : 0x00A518u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:865 LDA src
    // Macro caller: src/text/ccs/test_has_enough_money.asm:28 MOVE_INT1632 @LOCAL01, @VIRTUAL06
    case 0xC15CA9: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:865 LDA src
    // Macro caller: src/text/ccs/test_has_enough_money.asm:28 MOVE_INT1632 @LOCAL01, @VIRTUAL06
    // Overlapping static entry reached from 0xC15CA7.
    case 0xC15CAA: {
        Instruction step(cpu, 0x12, 0x000085u, 2u, AddressMode::DirectPageIndirect);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/test_has_enough_money.asm:28 MOVE_INT1632 @LOCAL01, @VIRTUAL06
    case 0xC15CAB: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/test_has_enough_money.asm:28 MOVE_INT1632 @LOCAL01, @VIRTUAL06
    // Overlapping static entry reached from 0xC15CAA.
    case 0xC15CAC: {
        Instruction step(cpu, 0x06, 0x000064u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/test_has_enough_money.asm:28 MOVE_INT1632 @LOCAL01, @VIRTUAL06
    case 0xC15CAD: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/test_has_enough_money.asm:28 MOVE_INT1632 @LOCAL01, @VIRTUAL06
    // Overlapping static entry reached from 0xC15CAC.
    case 0xC15CAE: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // src/text/ccs/test_has_enough_money.asm:29 JSL ASL32_ENTRY2
    case 0xC15CAF: {
        Instruction step(cpu, 0x22, 0xC09228u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:917 LDA val + 2
    // Macro caller: src/text/ccs/test_has_enough_money.asm:30 PUSH32 @VIRTUAL06
    case 0xC15CB3: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:918 PHA
    // Macro caller: src/text/ccs/test_has_enough_money.asm:30 PUSH32 @VIRTUAL06
    case 0xC15CB5: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:919 LDA val
    // Macro caller: src/text/ccs/test_has_enough_money.asm:30 PUSH32 @VIRTUAL06
    case 0xC15CB6: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:920 PHA
    // Macro caller: src/text/ccs/test_has_enough_money.asm:30 PUSH32 @VIRTUAL06
    case 0xC15CB8: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/text/ccs/test_has_enough_money.asm:31 LDY #16
    case 0xC15CB9: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000010u : 0x00E210u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/ccs/test_has_enough_money.asm:32 SEP #PROC_FLAGS::ACCUM8
    case 0xC15CBB: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/test_has_enough_money.asm:32 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC15CB9.
    case 0xC15CBC: {
        Instruction step(cpu, 0x20, 0x0070ADu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/test_has_enough_money.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC15CBD: {
        Instruction step(cpu, 0xAD, 0x009A70u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/test_has_enough_money.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    // Overlapping static entry reached from 0xC15CBC.
    case 0xC15CBF: {
        Instruction step(cpu, 0x9A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_stack();
        return step.finish();
    }
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/test_has_enough_money.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC15CC0: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/test_has_enough_money.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC15CC2: {
        Instruction step(cpu, 0x64, 0x000007u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/test_has_enough_money.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC15CC4: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/test_has_enough_money.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC15CC6: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/text/ccs/test_has_enough_money.asm:34 REP #PROC_FLAGS::ACCUM8
    case 0xC15CC8: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/test_has_enough_money.asm:35 JSL ASL32_ENTRY2
    case 0xC15CCA: {
        Instruction step(cpu, 0x22, 0xC09228u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:917 LDA val + 2
    // Macro caller: src/text/ccs/test_has_enough_money.asm:36 PUSH32 @VIRTUAL06
    case 0xC15CCE: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:918 PHA
    // Macro caller: src/text/ccs/test_has_enough_money.asm:36 PUSH32 @VIRTUAL06
    case 0xC15CD0: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:919 LDA val
    // Macro caller: src/text/ccs/test_has_enough_money.asm:36 PUSH32 @VIRTUAL06
    case 0xC15CD1: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:920 PHA
    // Macro caller: src/text/ccs/test_has_enough_money.asm:36 PUSH32 @VIRTUAL06
    case 0xC15CD3: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/text/ccs/test_has_enough_money.asm:37 LDY #8
    case 0xC15CD4: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000008u : 0x00E208u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/ccs/test_has_enough_money.asm:38 SEP #PROC_FLAGS::ACCUM8
    case 0xC15CD6: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/test_has_enough_money.asm:38 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC15CD4.
    case 0xC15CD7: {
        Instruction step(cpu, 0x20, 0x006FADu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/test_has_enough_money.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC15CD8: {
        Instruction step(cpu, 0xAD, 0x009A6Fu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/test_has_enough_money.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    // Overlapping static entry reached from 0xC15CD7.
    case 0xC15CDA: {
        Instruction step(cpu, 0x9A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_stack();
        return step.finish();
    }
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/test_has_enough_money.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC15CDB: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/test_has_enough_money.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC15CDD: {
        Instruction step(cpu, 0x64, 0x000007u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/test_has_enough_money.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC15CDF: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/test_has_enough_money.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC15CE1: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/text/ccs/test_has_enough_money.asm:40 REP #PROC_FLAGS::ACCUM8
    case 0xC15CE3: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/test_has_enough_money.asm:41 JSL ASL32_ENTRY2
    case 0xC15CE5: {
        Instruction step(cpu, 0x22, 0xC09228u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/test_has_enough_money.asm:42 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC15CE9: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/test_has_enough_money.asm:42 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC15CEB: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/test_has_enough_money.asm:42 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC15CED: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/test_has_enough_money.asm:42 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC15CEF: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/test_has_enough_money.asm:43 SEP #PROC_FLAGS::ACCUM8
    case 0xC15CF1: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/test_has_enough_money.asm:44 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC15CF3: {
        Instruction step(cpu, 0xAD, 0x009A6Eu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/test_has_enough_money.asm:44 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC15CF6: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/test_has_enough_money.asm:44 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC15CF8: {
        Instruction step(cpu, 0x64, 0x000007u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/test_has_enough_money.asm:44 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC15CFA: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/test_has_enough_money.asm:44 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC15CFC: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/text/ccs/test_has_enough_money.asm:45 REP #PROC_FLAGS::ACCUM8
    case 0xC15CFE: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:955 LDA val1
    // Macro caller: src/text/ccs/test_has_enough_money.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15D00: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:956 ORA val2
    // Macro caller: src/text/ccs/test_has_enough_money.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15D02: {
        Instruction step(cpu, 0x05, 0x00000Au, 2u, AddressMode::DirectPage);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:957 STA dest
    // Macro caller: src/text/ccs/test_has_enough_money.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15D04: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:958 LDA val1 + 2
    // Macro caller: src/text/ccs/test_has_enough_money.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15D06: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:959 ORA val2 + 2
    // Macro caller: src/text/ccs/test_has_enough_money.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15D08: {
        Instruction step(cpu, 0x05, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:960 STA dest + 2
    // Macro caller: src/text/ccs/test_has_enough_money.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15D0A: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:924 PLA
    // Macro caller: src/text/ccs/test_has_enough_money.asm:47 PULL32 @VIRTUAL0A
    case 0xC15D0C: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:925 STA val
    // Macro caller: src/text/ccs/test_has_enough_money.asm:47 PULL32 @VIRTUAL0A
    case 0xC15D0D: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:926 PLA
    // Macro caller: src/text/ccs/test_has_enough_money.asm:47 PULL32 @VIRTUAL0A
    case 0xC15D0F: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:927 STA val + 2
    // Macro caller: src/text/ccs/test_has_enough_money.asm:47 PULL32 @VIRTUAL0A
    case 0xC15D10: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:955 LDA val1
    // Macro caller: src/text/ccs/test_has_enough_money.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15D12: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:956 ORA val2
    // Macro caller: src/text/ccs/test_has_enough_money.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15D14: {
        Instruction step(cpu, 0x05, 0x00000Au, 2u, AddressMode::DirectPage);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:957 STA dest
    // Macro caller: src/text/ccs/test_has_enough_money.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15D16: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:958 LDA val1 + 2
    // Macro caller: src/text/ccs/test_has_enough_money.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15D18: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:959 ORA val2 + 2
    // Macro caller: src/text/ccs/test_has_enough_money.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15D1A: {
        Instruction step(cpu, 0x05, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:960 STA dest + 2
    // Macro caller: src/text/ccs/test_has_enough_money.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15D1C: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:924 PLA
    // Macro caller: src/text/ccs/test_has_enough_money.asm:49 PULL32 @VIRTUAL0A
    case 0xC15D1E: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:925 STA val
    // Macro caller: src/text/ccs/test_has_enough_money.asm:49 PULL32 @VIRTUAL0A
    case 0xC15D1F: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:926 PLA
    // Macro caller: src/text/ccs/test_has_enough_money.asm:49 PULL32 @VIRTUAL0A
    case 0xC15D21: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:927 STA val + 2
    // Macro caller: src/text/ccs/test_has_enough_money.asm:49 PULL32 @VIRTUAL0A
    case 0xC15D22: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:955 LDA val1
    // Macro caller: src/text/ccs/test_has_enough_money.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15D24: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:956 ORA val2
    // Macro caller: src/text/ccs/test_has_enough_money.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15D26: {
        Instruction step(cpu, 0x05, 0x00000Au, 2u, AddressMode::DirectPage);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:957 STA dest
    // Macro caller: src/text/ccs/test_has_enough_money.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15D28: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:958 LDA val1 + 2
    // Macro caller: src/text/ccs/test_has_enough_money.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15D2A: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:959 ORA val2 + 2
    // Macro caller: src/text/ccs/test_has_enough_money.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15D2C: {
        Instruction step(cpu, 0x05, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:960 STA dest + 2
    // Macro caller: src/text/ccs/test_has_enough_money.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15D2E: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/test_has_enough_money.asm:51 LDA #0
    case 0xC15D30: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/test_has_enough_money.asm:51 LDA #0
    // Overlapping static entry reached from 0xC15D30.
    case 0xC15D32: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/test_has_enough_money.asm:52 STA @LOCAL01
    case 0xC15D33: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/ccs/test_has_enough_money.asm:53 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC15D35: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/ccs/test_has_enough_money.asm:53 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC15D35.
    case 0xC15D37: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/text/ccs/test_has_enough_money.asm:53 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC15D38: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/ccs/test_has_enough_money.asm:53 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC15D3A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/ccs/test_has_enough_money.asm:53 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC15D3A.
    case 0xC15D3C: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/text/ccs/test_has_enough_money.asm:53 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC15D3D: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:745 LDA src + 2
    // Macro caller: src/text/ccs/test_has_enough_money.asm:54 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC15D3F: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:746 CMP dest + 2
    // Macro caller: src/text/ccs/test_has_enough_money.asm:54 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC15D41: {
        Instruction step(cpu, 0xC5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:747 BNE :+
    // Macro caller: src/text/ccs/test_has_enough_money.asm:54 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC15D43: {
        Instruction step(cpu, 0xD0, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:748 LDA src
    // Macro caller: src/text/ccs/test_has_enough_money.asm:54 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC15D45: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:749 CMP dest
    // Macro caller: src/text/ccs/test_has_enough_money.asm:54 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC15D47: {
        Instruction step(cpu, 0xC5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/test_has_enough_money.asm:55 BNE @ARG_IS_NONZERO
    case 0xC15D49: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/ccs/test_has_enough_money.asm:56 JSR GET_ARGUMENT_MEMORY
    case 0xC15D4B: {
        Instruction step(cpu, 0x20, 0x0005DFu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/test_has_enough_money.asm:58 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC15D4E: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/test_has_enough_money.asm:58 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC15D50: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/test_has_enough_money.asm:58 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC15D52: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/test_has_enough_money.asm:58 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC15D54: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/test_has_enough_money.asm:59 MOVE_INT GAME_STATE+game_state::money_carried, @VIRTUAL06
    case 0xC15D56: {
        Instruction step(cpu, 0xAD, 0x009AE2u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/test_has_enough_money.asm:59 MOVE_INT GAME_STATE+game_state::money_carried, @VIRTUAL06
    case 0xC15D59: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/test_has_enough_money.asm:59 MOVE_INT GAME_STATE+game_state::money_carried, @VIRTUAL06
    case 0xC15D5B: {
        Instruction step(cpu, 0xAD, 0x009AE4u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/test_has_enough_money.asm:59 MOVE_INT GAME_STATE+game_state::money_carried, @VIRTUAL06
    case 0xC15D5E: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/test_has_enough_money.asm:60 LDA @VIRTUAL06
    case 0xC15D60: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/test_has_enough_money.asm:61 CMP @VIRTUAL0A
    case 0xC15D62: {
        Instruction step(cpu, 0xC5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/test_has_enough_money.asm:62 LDA @VIRTUAL06+2
    case 0xC15D64: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/test_has_enough_money.asm:63 SBC @VIRTUAL0A+2
    case 0xC15D66: {
        Instruction step(cpu, 0xE5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/ccs/test_has_enough_money.asm:64 BCS @UNKNOWN5
    case 0xC15D68: {
        Instruction step(cpu, 0xB0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/text/ccs/test_has_enough_money.asm:65 LDA #1
    case 0xC15D6A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/test_has_enough_money.asm:65 LDA #1
    // Overlapping static entry reached from 0xC15D6A.
    case 0xC15D6C: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/test_has_enough_money.asm:66 STA @LOCAL01
    case 0xC15D6D: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:865 LDA src
    // Macro caller: src/text/ccs/test_has_enough_money.asm:68 MOVE_INT1632S @LOCAL01, @VIRTUAL06
    case 0xC15D6F: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/test_has_enough_money.asm:68 MOVE_INT1632S @LOCAL01, @VIRTUAL06
    case 0xC15D71: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/test_has_enough_money.asm:68 MOVE_INT1632S @LOCAL01, @VIRTUAL06
    case 0xC15D73: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:876 BPL :+
    // Macro caller: src/text/ccs/test_has_enough_money.asm:68 MOVE_INT1632S @LOCAL01, @VIRTUAL06
    case 0xC15D75: {
        Instruction step(cpu, 0x10, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:877 DEC dest+2
    // Macro caller: src/text/ccs/test_has_enough_money.asm:68 MOVE_INT1632S @LOCAL01, @VIRTUAL06
    case 0xC15D77: {
        Instruction step(cpu, 0xC6, 0x000008u, 2u, AddressMode::DirectPage);
        step.decrement();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/test_has_enough_money.asm:69 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15D79: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/test_has_enough_money.asm:69 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15D7B: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/test_has_enough_money.asm:69 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15D7D: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/test_has_enough_money.asm:69 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15D7F: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/test_has_enough_money.asm:70 JSR SET_WORKING_MEMORY
    case 0xC15D81: {
        Instruction step(cpu, 0x20, 0x000660u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/test_has_enough_money.asm:71 LDA #NULL
    case 0xC15D84: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/test_has_enough_money.asm:71 LDA #NULL
    // Overlapping static entry reached from 0xC15D84.
    case 0xC15D86: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/test_has_enough_money.asm:73 END_C_FUNCTION
    case 0xC15D87: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/test_has_enough_money.asm:73 END_C_FUNCTION
    case 0xC15D88: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
