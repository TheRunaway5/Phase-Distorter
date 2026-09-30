// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/text/ccs/test_has_enough_money.asm
bool resume_text_ccs_test_has_enough_money(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/test_has_enough_money.asm:3 BEGIN_C_FUNCTION
    case 0xC159F9: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/test_has_enough_money.asm:10 END_STACK_VARS
    case 0xC159FB: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/test_has_enough_money.asm:10 END_STACK_VARS
    case 0xC159FC: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/test_has_enough_money.asm:10 END_STACK_VARS
    case 0xC159FD: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/test_has_enough_money.asm:10 END_STACK_VARS
    case 0xC159FE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000ECu : 0x00FFECu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/test_has_enough_money.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC159FE.
    case 0xC15A00: {
        Instruction step(cpu, 0xFF, 0x8A685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/test_has_enough_money.asm:10 END_STACK_VARS
    case 0xC15A01: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/test_has_enough_money.asm:10 END_STACK_VARS
    case 0xC15A02: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/ccs/test_has_enough_money.asm:11 TXA
    case 0xC15A03: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/test_has_enough_money.asm:12 STA @LOCAL01
    case 0xC15A04: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/test_has_enough_money.asm:13 LDA #3
    case 0xC15A06: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/test_has_enough_money.asm:13 LDA #3
    // Overlapping static entry reached from 0xC15A06.
    case 0xC15A08: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/test_has_enough_money.asm:14 CLC
    case 0xC15A09: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/ccs/test_has_enough_money.asm:15 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC15A0A: {
        Instruction step(cpu, 0xED, 0x0097CAu, 3u, AddressMode::Absolute);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/test_has_enough_money.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC15A0D: {
        Instruction step(cpu, 0x50, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_clear();
        return step.finish();
    }
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/test_has_enough_money.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC15A0F: {
        Instruction step(cpu, 0x10, 0x000019u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/test_has_enough_money.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC15A11: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/test_has_enough_money.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC15A13: {
        Instruction step(cpu, 0x30, 0x000015u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/text/ccs/test_has_enough_money.asm:17 LDA @LOCAL01
    case 0xC15A15: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/test_has_enough_money.asm:18 SEP #PROC_FLAGS::ACCUM8
    case 0xC15A17: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/test_has_enough_money.asm:19 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC15A19: {
        Instruction step(cpu, 0xAE, 0x0097CAu, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/test_has_enough_money.asm:20 STA CC_ARGUMENT_STORAGE,X
    case 0xC15A1C: {
        Instruction step(cpu, 0x9D, 0x0097BAu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/test_has_enough_money.asm:21 REP #PROC_FLAGS::ACCUM8
    case 0xC15A1F: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/test_has_enough_money.asm:22 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC15A21: {
        Instruction step(cpu, 0xEE, 0x0097CAu, 3u, AddressMode::Absolute);
        step.increment();
        return step.finish();
    }
    // src/text/ccs/test_has_enough_money.asm:23 LDA #.LOWORD(CC_1D_14)
    case 0xC15A24: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000F9u : 0x0059F9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/test_has_enough_money.asm:23 LDA #.LOWORD(CC_1D_14)
    // Overlapping static entry reached from 0xC15A24.
    case 0xC15A26: {
        Instruction step(cpu, 0x59, 0x000C4Cu, 3u, AddressMode::AbsoluteIndexedY);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/ccs/test_has_enough_money.asm:24 JMP @UNKNOWN7
    case 0xC15A27: {
        Instruction step(cpu, 0x4C, 0x005B0Cu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/test_has_enough_money.asm:24 JMP @UNKNOWN7
    // Overlapping static entry reached from 0xC15A26.
    case 0xC15A29: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/text/ccs/test_has_enough_money.asm:26 SEP #PROC_FLAGS::INDEX8
    case 0xC15A2A: {
        Instruction step(cpu, 0xE2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/test_has_enough_money.asm:27 LDY #24
    case 0xC15A2C: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000018u : 0x00A518u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:865 LDA src
    // Macro caller: src/text/ccs/test_has_enough_money.asm:28 MOVE_INT1632 @LOCAL01, @VIRTUAL06
    case 0xC15A2E: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:865 LDA src
    // Macro caller: src/text/ccs/test_has_enough_money.asm:28 MOVE_INT1632 @LOCAL01, @VIRTUAL06
    // Overlapping static entry reached from 0xC15A2C.
    case 0xC15A2F: {
        Instruction step(cpu, 0x12, 0x000085u, 2u, AddressMode::DirectPageIndirect);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/test_has_enough_money.asm:28 MOVE_INT1632 @LOCAL01, @VIRTUAL06
    case 0xC15A30: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/test_has_enough_money.asm:28 MOVE_INT1632 @LOCAL01, @VIRTUAL06
    // Overlapping static entry reached from 0xC15A2F.
    case 0xC15A31: {
        Instruction step(cpu, 0x06, 0x000064u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/test_has_enough_money.asm:28 MOVE_INT1632 @LOCAL01, @VIRTUAL06
    case 0xC15A32: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/test_has_enough_money.asm:28 MOVE_INT1632 @LOCAL01, @VIRTUAL06
    // Overlapping static entry reached from 0xC15A31.
    case 0xC15A33: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // src/text/ccs/test_has_enough_money.asm:29 JSL ASL32_ENTRY2
    case 0xC15A34: {
        Instruction step(cpu, 0x22, 0xC09246u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:917 LDA val + 2
    // Macro caller: src/text/ccs/test_has_enough_money.asm:30 PUSH32 @VIRTUAL06
    case 0xC15A38: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:918 PHA
    // Macro caller: src/text/ccs/test_has_enough_money.asm:30 PUSH32 @VIRTUAL06
    case 0xC15A3A: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:919 LDA val
    // Macro caller: src/text/ccs/test_has_enough_money.asm:30 PUSH32 @VIRTUAL06
    case 0xC15A3B: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:920 PHA
    // Macro caller: src/text/ccs/test_has_enough_money.asm:30 PUSH32 @VIRTUAL06
    case 0xC15A3D: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/text/ccs/test_has_enough_money.asm:31 LDY #16
    case 0xC15A3E: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000010u : 0x00E210u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/ccs/test_has_enough_money.asm:32 SEP #PROC_FLAGS::ACCUM8
    case 0xC15A40: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/test_has_enough_money.asm:32 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC15A3E.
    case 0xC15A41: {
        Instruction step(cpu, 0x20, 0x00BCADu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/test_has_enough_money.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC15A42: {
        Instruction step(cpu, 0xAD, 0x0097BCu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/test_has_enough_money.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    // Overlapping static entry reached from 0xC15A41.
    case 0xC15A44: {
        Instruction step(cpu, 0x97, 0x000085u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/test_has_enough_money.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC15A45: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/test_has_enough_money.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    // Overlapping static entry reached from 0xC15A44.
    case 0xC15A46: {
        Instruction step(cpu, 0x06, 0x000064u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/test_has_enough_money.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC15A47: {
        Instruction step(cpu, 0x64, 0x000007u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/test_has_enough_money.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    // Overlapping static entry reached from 0xC15A46.
    case 0xC15A48: {
        Instruction step(cpu, 0x07, 0x000064u, 2u, AddressMode::DirectPageIndirectLong);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/test_has_enough_money.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC15A49: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/test_has_enough_money.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    // Overlapping static entry reached from 0xC15A48.
    case 0xC15A4A: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/test_has_enough_money.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC15A4B: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/text/ccs/test_has_enough_money.asm:34 REP #PROC_FLAGS::ACCUM8
    case 0xC15A4D: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/test_has_enough_money.asm:35 JSL ASL32_ENTRY2
    case 0xC15A4F: {
        Instruction step(cpu, 0x22, 0xC09246u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:917 LDA val + 2
    // Macro caller: src/text/ccs/test_has_enough_money.asm:36 PUSH32 @VIRTUAL06
    case 0xC15A53: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:918 PHA
    // Macro caller: src/text/ccs/test_has_enough_money.asm:36 PUSH32 @VIRTUAL06
    case 0xC15A55: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:919 LDA val
    // Macro caller: src/text/ccs/test_has_enough_money.asm:36 PUSH32 @VIRTUAL06
    case 0xC15A56: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:920 PHA
    // Macro caller: src/text/ccs/test_has_enough_money.asm:36 PUSH32 @VIRTUAL06
    case 0xC15A58: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/text/ccs/test_has_enough_money.asm:37 LDY #8
    case 0xC15A59: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000008u : 0x00E208u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/ccs/test_has_enough_money.asm:38 SEP #PROC_FLAGS::ACCUM8
    case 0xC15A5B: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/test_has_enough_money.asm:38 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC15A59.
    case 0xC15A5C: {
        Instruction step(cpu, 0x20, 0x00BBADu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/test_has_enough_money.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC15A5D: {
        Instruction step(cpu, 0xAD, 0x0097BBu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/test_has_enough_money.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    // Overlapping static entry reached from 0xC15A5C.
    case 0xC15A5F: {
        Instruction step(cpu, 0x97, 0x000085u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/test_has_enough_money.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC15A60: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/test_has_enough_money.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    // Overlapping static entry reached from 0xC15A5F.
    case 0xC15A61: {
        Instruction step(cpu, 0x06, 0x000064u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/test_has_enough_money.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC15A62: {
        Instruction step(cpu, 0x64, 0x000007u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/test_has_enough_money.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    // Overlapping static entry reached from 0xC15A61.
    case 0xC15A63: {
        Instruction step(cpu, 0x07, 0x000064u, 2u, AddressMode::DirectPageIndirectLong);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/test_has_enough_money.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC15A64: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/test_has_enough_money.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    // Overlapping static entry reached from 0xC15A63.
    case 0xC15A65: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/test_has_enough_money.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC15A66: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/text/ccs/test_has_enough_money.asm:40 REP #PROC_FLAGS::ACCUM8
    case 0xC15A68: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/test_has_enough_money.asm:41 JSL ASL32_ENTRY2
    case 0xC15A6A: {
        Instruction step(cpu, 0x22, 0xC09246u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/test_has_enough_money.asm:42 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC15A6E: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/test_has_enough_money.asm:42 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC15A70: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/test_has_enough_money.asm:42 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC15A72: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/test_has_enough_money.asm:42 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC15A74: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/test_has_enough_money.asm:43 SEP #PROC_FLAGS::ACCUM8
    case 0xC15A76: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/test_has_enough_money.asm:44 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC15A78: {
        Instruction step(cpu, 0xAD, 0x0097BAu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/test_has_enough_money.asm:44 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC15A7B: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/test_has_enough_money.asm:44 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC15A7D: {
        Instruction step(cpu, 0x64, 0x000007u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/test_has_enough_money.asm:44 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC15A7F: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/test_has_enough_money.asm:44 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC15A81: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/text/ccs/test_has_enough_money.asm:45 REP #PROC_FLAGS::ACCUM8
    case 0xC15A83: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:955 LDA val1
    // Macro caller: src/text/ccs/test_has_enough_money.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15A85: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:956 ORA val2
    // Macro caller: src/text/ccs/test_has_enough_money.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15A87: {
        Instruction step(cpu, 0x05, 0x00000Au, 2u, AddressMode::DirectPage);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:957 STA dest
    // Macro caller: src/text/ccs/test_has_enough_money.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15A89: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:958 LDA val1 + 2
    // Macro caller: src/text/ccs/test_has_enough_money.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15A8B: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:959 ORA val2 + 2
    // Macro caller: src/text/ccs/test_has_enough_money.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15A8D: {
        Instruction step(cpu, 0x05, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:960 STA dest + 2
    // Macro caller: src/text/ccs/test_has_enough_money.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15A8F: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:924 PLA
    // Macro caller: src/text/ccs/test_has_enough_money.asm:47 PULL32 @VIRTUAL0A
    case 0xC15A91: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:925 STA val
    // Macro caller: src/text/ccs/test_has_enough_money.asm:47 PULL32 @VIRTUAL0A
    case 0xC15A92: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:926 PLA
    // Macro caller: src/text/ccs/test_has_enough_money.asm:47 PULL32 @VIRTUAL0A
    case 0xC15A94: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:927 STA val + 2
    // Macro caller: src/text/ccs/test_has_enough_money.asm:47 PULL32 @VIRTUAL0A
    case 0xC15A95: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:955 LDA val1
    // Macro caller: src/text/ccs/test_has_enough_money.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15A97: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:956 ORA val2
    // Macro caller: src/text/ccs/test_has_enough_money.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15A99: {
        Instruction step(cpu, 0x05, 0x00000Au, 2u, AddressMode::DirectPage);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:957 STA dest
    // Macro caller: src/text/ccs/test_has_enough_money.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15A9B: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:958 LDA val1 + 2
    // Macro caller: src/text/ccs/test_has_enough_money.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15A9D: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:959 ORA val2 + 2
    // Macro caller: src/text/ccs/test_has_enough_money.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15A9F: {
        Instruction step(cpu, 0x05, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:960 STA dest + 2
    // Macro caller: src/text/ccs/test_has_enough_money.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15AA1: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:924 PLA
    // Macro caller: src/text/ccs/test_has_enough_money.asm:49 PULL32 @VIRTUAL0A
    case 0xC15AA3: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:925 STA val
    // Macro caller: src/text/ccs/test_has_enough_money.asm:49 PULL32 @VIRTUAL0A
    case 0xC15AA4: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:926 PLA
    // Macro caller: src/text/ccs/test_has_enough_money.asm:49 PULL32 @VIRTUAL0A
    case 0xC15AA6: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:927 STA val + 2
    // Macro caller: src/text/ccs/test_has_enough_money.asm:49 PULL32 @VIRTUAL0A
    case 0xC15AA7: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:955 LDA val1
    // Macro caller: src/text/ccs/test_has_enough_money.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15AA9: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:956 ORA val2
    // Macro caller: src/text/ccs/test_has_enough_money.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15AAB: {
        Instruction step(cpu, 0x05, 0x00000Au, 2u, AddressMode::DirectPage);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:957 STA dest
    // Macro caller: src/text/ccs/test_has_enough_money.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15AAD: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:958 LDA val1 + 2
    // Macro caller: src/text/ccs/test_has_enough_money.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15AAF: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:959 ORA val2 + 2
    // Macro caller: src/text/ccs/test_has_enough_money.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15AB1: {
        Instruction step(cpu, 0x05, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:960 STA dest + 2
    // Macro caller: src/text/ccs/test_has_enough_money.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15AB3: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/test_has_enough_money.asm:51 LDA #0
    case 0xC15AB5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/test_has_enough_money.asm:51 LDA #0
    // Overlapping static entry reached from 0xC15AB5.
    case 0xC15AB7: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/test_has_enough_money.asm:52 STA @LOCAL01
    case 0xC15AB8: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/ccs/test_has_enough_money.asm:53 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC15ABA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/ccs/test_has_enough_money.asm:53 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC15ABA.
    case 0xC15ABC: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/text/ccs/test_has_enough_money.asm:53 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC15ABD: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/ccs/test_has_enough_money.asm:53 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC15ABF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/ccs/test_has_enough_money.asm:53 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC15ABF.
    case 0xC15AC1: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/text/ccs/test_has_enough_money.asm:53 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC15AC2: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:745 LDA src + 2
    // Macro caller: src/text/ccs/test_has_enough_money.asm:54 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC15AC4: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:746 CMP dest + 2
    // Macro caller: src/text/ccs/test_has_enough_money.asm:54 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC15AC6: {
        Instruction step(cpu, 0xC5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:747 BNE :+
    // Macro caller: src/text/ccs/test_has_enough_money.asm:54 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC15AC8: {
        Instruction step(cpu, 0xD0, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:748 LDA src
    // Macro caller: src/text/ccs/test_has_enough_money.asm:54 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC15ACA: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:749 CMP dest
    // Macro caller: src/text/ccs/test_has_enough_money.asm:54 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC15ACC: {
        Instruction step(cpu, 0xC5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/test_has_enough_money.asm:55 BNE @ARG_IS_NONZERO
    case 0xC15ACE: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/ccs/test_has_enough_money.asm:56 JSR GET_ARGUMENT_MEMORY
    case 0xC15AD0: {
        Instruction step(cpu, 0x20, 0x0003DCu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/test_has_enough_money.asm:58 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC15AD3: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/test_has_enough_money.asm:58 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC15AD5: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/test_has_enough_money.asm:58 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC15AD7: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/test_has_enough_money.asm:58 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC15AD9: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/test_has_enough_money.asm:59 MOVE_INT GAME_STATE+game_state::money_carried, @VIRTUAL06
    case 0xC15ADB: {
        Instruction step(cpu, 0xAD, 0x009831u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/test_has_enough_money.asm:59 MOVE_INT GAME_STATE+game_state::money_carried, @VIRTUAL06
    case 0xC15ADE: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/test_has_enough_money.asm:59 MOVE_INT GAME_STATE+game_state::money_carried, @VIRTUAL06
    case 0xC15AE0: {
        Instruction step(cpu, 0xAD, 0x009833u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/test_has_enough_money.asm:59 MOVE_INT GAME_STATE+game_state::money_carried, @VIRTUAL06
    case 0xC15AE3: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/test_has_enough_money.asm:60 LDA @VIRTUAL06
    case 0xC15AE5: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/test_has_enough_money.asm:61 CMP @VIRTUAL0A
    case 0xC15AE7: {
        Instruction step(cpu, 0xC5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/test_has_enough_money.asm:62 LDA @VIRTUAL06+2
    case 0xC15AE9: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/test_has_enough_money.asm:63 SBC @VIRTUAL0A+2
    case 0xC15AEB: {
        Instruction step(cpu, 0xE5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/ccs/test_has_enough_money.asm:64 BCS @UNKNOWN5
    case 0xC15AED: {
        Instruction step(cpu, 0xB0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/text/ccs/test_has_enough_money.asm:65 LDA #1
    case 0xC15AEF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/test_has_enough_money.asm:65 LDA #1
    // Overlapping static entry reached from 0xC15AEF.
    case 0xC15AF1: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/test_has_enough_money.asm:66 STA @LOCAL01
    case 0xC15AF2: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:865 LDA src
    // Macro caller: src/text/ccs/test_has_enough_money.asm:68 MOVE_INT1632S @LOCAL01, @VIRTUAL06
    case 0xC15AF4: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/test_has_enough_money.asm:68 MOVE_INT1632S @LOCAL01, @VIRTUAL06
    case 0xC15AF6: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/test_has_enough_money.asm:68 MOVE_INT1632S @LOCAL01, @VIRTUAL06
    case 0xC15AF8: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:876 BPL :+
    // Macro caller: src/text/ccs/test_has_enough_money.asm:68 MOVE_INT1632S @LOCAL01, @VIRTUAL06
    case 0xC15AFA: {
        Instruction step(cpu, 0x10, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:877 DEC dest+2
    // Macro caller: src/text/ccs/test_has_enough_money.asm:68 MOVE_INT1632S @LOCAL01, @VIRTUAL06
    case 0xC15AFC: {
        Instruction step(cpu, 0xC6, 0x000008u, 2u, AddressMode::DirectPage);
        step.decrement();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/test_has_enough_money.asm:69 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15AFE: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/test_has_enough_money.asm:69 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15B00: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/test_has_enough_money.asm:69 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15B02: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/test_has_enough_money.asm:69 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15B04: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/test_has_enough_money.asm:70 JSR SET_WORKING_MEMORY
    case 0xC15B06: {
        Instruction step(cpu, 0x20, 0x00045Du, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/test_has_enough_money.asm:71 LDA #NULL
    case 0xC15B09: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/test_has_enough_money.asm:71 LDA #NULL
    // Overlapping static entry reached from 0xC15B09.
    case 0xC15B0B: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/test_has_enough_money.asm:73 END_C_FUNCTION
    case 0xC15B0C: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/test_has_enough_money.asm:73 END_C_FUNCTION
    case 0xC15B0D: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
