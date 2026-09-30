// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/text/ccs/atm_increase.asm
bool resume_text_ccs_atm_increase(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/atm_increase.asm:3 BEGIN_C_FUNCTION
    case 0xC15F04: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/atm_increase.asm:10 END_STACK_VARS
    case 0xC15F06: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/atm_increase.asm:10 END_STACK_VARS
    case 0xC15F07: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/atm_increase.asm:10 END_STACK_VARS
    case 0xC15F08: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/atm_increase.asm:10 END_STACK_VARS
    case 0xC15F09: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000ECu : 0x00FFECu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/atm_increase.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC15F09.
    case 0xC15F0B: {
        Instruction step(cpu, 0xFF, 0x8A685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/atm_increase.asm:10 END_STACK_VARS
    case 0xC15F0C: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/atm_increase.asm:10 END_STACK_VARS
    case 0xC15F0D: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/ccs/atm_increase.asm:11 TXA
    case 0xC15F0E: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/atm_increase.asm:12 STA @LOCAL01
    case 0xC15F0F: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/atm_increase.asm:13 LDA #3
    case 0xC15F11: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/atm_increase.asm:13 LDA #3
    // Overlapping static entry reached from 0xC15F11.
    case 0xC15F13: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/atm_increase.asm:14 CLC
    case 0xC15F14: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/ccs/atm_increase.asm:15 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC15F15: {
        Instruction step(cpu, 0xED, 0x009A7Eu, 3u, AddressMode::Absolute);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/atm_increase.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC15F18: {
        Instruction step(cpu, 0x50, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_clear();
        return step.finish();
    }
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/atm_increase.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC15F1A: {
        Instruction step(cpu, 0x10, 0x000019u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/atm_increase.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC15F1C: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/atm_increase.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC15F1E: {
        Instruction step(cpu, 0x30, 0x000015u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/text/ccs/atm_increase.asm:17 LDA @LOCAL01
    case 0xC15F20: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/atm_increase.asm:18 SEP #PROC_FLAGS::ACCUM8
    case 0xC15F22: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/atm_increase.asm:19 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC15F24: {
        Instruction step(cpu, 0xAE, 0x009A7Eu, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/atm_increase.asm:20 STA CC_ARGUMENT_STORAGE,X
    case 0xC15F27: {
        Instruction step(cpu, 0x9D, 0x009A6Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/atm_increase.asm:21 REP #PROC_FLAGS::ACCUM8
    case 0xC15F2A: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/atm_increase.asm:22 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC15F2C: {
        Instruction step(cpu, 0xEE, 0x009A7Eu, 3u, AddressMode::Absolute);
        step.increment();
        return step.finish();
    }
    // src/text/ccs/atm_increase.asm:23 LDA #.LOWORD(CC_1D_06)
    case 0xC15F2F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000004u : 0x005F04u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/atm_increase.asm:23 LDA #.LOWORD(CC_1D_06)
    // Overlapping static entry reached from 0xC15F2F.
    case 0xC15F31: {
        Instruction step(cpu, 0x5F, 0x5FE84Cu, 4u, AddressMode::LongIndexedX);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/ccs/atm_increase.asm:24 JMP @UNKNOWN5
    case 0xC15F32: {
        Instruction step(cpu, 0x4C, 0x005FE8u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/atm_increase.asm:26 SEP #PROC_FLAGS::INDEX8
    case 0xC15F35: {
        Instruction step(cpu, 0xE2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/atm_increase.asm:27 LDY #24
    case 0xC15F37: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000018u : 0x00A518u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:865 LDA src
    // Macro caller: src/text/ccs/atm_increase.asm:28 MOVE_INT1632 @LOCAL01, @VIRTUAL06
    case 0xC15F39: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:865 LDA src
    // Macro caller: src/text/ccs/atm_increase.asm:28 MOVE_INT1632 @LOCAL01, @VIRTUAL06
    // Overlapping static entry reached from 0xC15F37.
    case 0xC15F3A: {
        Instruction step(cpu, 0x12, 0x000085u, 2u, AddressMode::DirectPageIndirect);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/atm_increase.asm:28 MOVE_INT1632 @LOCAL01, @VIRTUAL06
    case 0xC15F3B: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/atm_increase.asm:28 MOVE_INT1632 @LOCAL01, @VIRTUAL06
    // Overlapping static entry reached from 0xC15F3A.
    case 0xC15F3C: {
        Instruction step(cpu, 0x06, 0x000064u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/atm_increase.asm:28 MOVE_INT1632 @LOCAL01, @VIRTUAL06
    case 0xC15F3D: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/atm_increase.asm:28 MOVE_INT1632 @LOCAL01, @VIRTUAL06
    // Overlapping static entry reached from 0xC15F3C.
    case 0xC15F3E: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // src/text/ccs/atm_increase.asm:29 JSL ASL32_ENTRY2
    case 0xC15F3F: {
        Instruction step(cpu, 0x22, 0xC09228u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:917 LDA val + 2
    // Macro caller: src/text/ccs/atm_increase.asm:30 PUSH32 @VIRTUAL06
    case 0xC15F43: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:918 PHA
    // Macro caller: src/text/ccs/atm_increase.asm:30 PUSH32 @VIRTUAL06
    case 0xC15F45: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:919 LDA val
    // Macro caller: src/text/ccs/atm_increase.asm:30 PUSH32 @VIRTUAL06
    case 0xC15F46: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:920 PHA
    // Macro caller: src/text/ccs/atm_increase.asm:30 PUSH32 @VIRTUAL06
    case 0xC15F48: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/text/ccs/atm_increase.asm:31 LDY #16
    case 0xC15F49: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000010u : 0x00E210u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/ccs/atm_increase.asm:32 SEP #PROC_FLAGS::ACCUM8
    case 0xC15F4B: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/atm_increase.asm:32 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC15F49.
    case 0xC15F4C: {
        Instruction step(cpu, 0x20, 0x0070ADu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/atm_increase.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC15F4D: {
        Instruction step(cpu, 0xAD, 0x009A70u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/atm_increase.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    // Overlapping static entry reached from 0xC15F4C.
    case 0xC15F4F: {
        Instruction step(cpu, 0x9A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_stack();
        return step.finish();
    }
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/atm_increase.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC15F50: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/atm_increase.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC15F52: {
        Instruction step(cpu, 0x64, 0x000007u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/atm_increase.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC15F54: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/atm_increase.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC15F56: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/text/ccs/atm_increase.asm:34 REP #PROC_FLAGS::ACCUM8
    case 0xC15F58: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/atm_increase.asm:35 JSL ASL32_ENTRY2
    case 0xC15F5A: {
        Instruction step(cpu, 0x22, 0xC09228u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:917 LDA val + 2
    // Macro caller: src/text/ccs/atm_increase.asm:36 PUSH32 @VIRTUAL06
    case 0xC15F5E: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:918 PHA
    // Macro caller: src/text/ccs/atm_increase.asm:36 PUSH32 @VIRTUAL06
    case 0xC15F60: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:919 LDA val
    // Macro caller: src/text/ccs/atm_increase.asm:36 PUSH32 @VIRTUAL06
    case 0xC15F61: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:920 PHA
    // Macro caller: src/text/ccs/atm_increase.asm:36 PUSH32 @VIRTUAL06
    case 0xC15F63: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/text/ccs/atm_increase.asm:37 LDY #8
    case 0xC15F64: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000008u : 0x00E208u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/ccs/atm_increase.asm:38 SEP #PROC_FLAGS::ACCUM8
    case 0xC15F66: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/atm_increase.asm:38 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC15F64.
    case 0xC15F67: {
        Instruction step(cpu, 0x20, 0x006FADu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/atm_increase.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC15F68: {
        Instruction step(cpu, 0xAD, 0x009A6Fu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/atm_increase.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    // Overlapping static entry reached from 0xC15F67.
    case 0xC15F6A: {
        Instruction step(cpu, 0x9A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_stack();
        return step.finish();
    }
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/atm_increase.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC15F6B: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/atm_increase.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC15F6D: {
        Instruction step(cpu, 0x64, 0x000007u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/atm_increase.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC15F6F: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/atm_increase.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC15F71: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/text/ccs/atm_increase.asm:40 REP #PROC_FLAGS::ACCUM8
    case 0xC15F73: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/atm_increase.asm:41 JSL ASL32_ENTRY2
    case 0xC15F75: {
        Instruction step(cpu, 0x22, 0xC09228u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/atm_increase.asm:42 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC15F79: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/atm_increase.asm:42 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC15F7B: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/atm_increase.asm:42 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC15F7D: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/atm_increase.asm:42 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC15F7F: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/atm_increase.asm:43 SEP #PROC_FLAGS::ACCUM8
    case 0xC15F81: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/atm_increase.asm:44 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC15F83: {
        Instruction step(cpu, 0xAD, 0x009A6Eu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/atm_increase.asm:44 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC15F86: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/atm_increase.asm:44 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC15F88: {
        Instruction step(cpu, 0x64, 0x000007u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/atm_increase.asm:44 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC15F8A: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/atm_increase.asm:44 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC15F8C: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/text/ccs/atm_increase.asm:45 REP #PROC_FLAGS::ACCUM8
    case 0xC15F8E: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:955 LDA val1
    // Macro caller: src/text/ccs/atm_increase.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15F90: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:956 ORA val2
    // Macro caller: src/text/ccs/atm_increase.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15F92: {
        Instruction step(cpu, 0x05, 0x00000Au, 2u, AddressMode::DirectPage);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:957 STA dest
    // Macro caller: src/text/ccs/atm_increase.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15F94: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:958 LDA val1 + 2
    // Macro caller: src/text/ccs/atm_increase.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15F96: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:959 ORA val2 + 2
    // Macro caller: src/text/ccs/atm_increase.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15F98: {
        Instruction step(cpu, 0x05, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:960 STA dest + 2
    // Macro caller: src/text/ccs/atm_increase.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15F9A: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:924 PLA
    // Macro caller: src/text/ccs/atm_increase.asm:47 PULL32 @VIRTUAL0A
    case 0xC15F9C: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:925 STA val
    // Macro caller: src/text/ccs/atm_increase.asm:47 PULL32 @VIRTUAL0A
    case 0xC15F9D: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:926 PLA
    // Macro caller: src/text/ccs/atm_increase.asm:47 PULL32 @VIRTUAL0A
    case 0xC15F9F: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:927 STA val + 2
    // Macro caller: src/text/ccs/atm_increase.asm:47 PULL32 @VIRTUAL0A
    case 0xC15FA0: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:955 LDA val1
    // Macro caller: src/text/ccs/atm_increase.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15FA2: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:956 ORA val2
    // Macro caller: src/text/ccs/atm_increase.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15FA4: {
        Instruction step(cpu, 0x05, 0x00000Au, 2u, AddressMode::DirectPage);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:957 STA dest
    // Macro caller: src/text/ccs/atm_increase.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15FA6: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:958 LDA val1 + 2
    // Macro caller: src/text/ccs/atm_increase.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15FA8: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:959 ORA val2 + 2
    // Macro caller: src/text/ccs/atm_increase.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15FAA: {
        Instruction step(cpu, 0x05, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:960 STA dest + 2
    // Macro caller: src/text/ccs/atm_increase.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15FAC: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:924 PLA
    // Macro caller: src/text/ccs/atm_increase.asm:49 PULL32 @VIRTUAL0A
    case 0xC15FAE: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:925 STA val
    // Macro caller: src/text/ccs/atm_increase.asm:49 PULL32 @VIRTUAL0A
    case 0xC15FAF: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:926 PLA
    // Macro caller: src/text/ccs/atm_increase.asm:49 PULL32 @VIRTUAL0A
    case 0xC15FB1: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:927 STA val + 2
    // Macro caller: src/text/ccs/atm_increase.asm:49 PULL32 @VIRTUAL0A
    case 0xC15FB2: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:955 LDA val1
    // Macro caller: src/text/ccs/atm_increase.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15FB4: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:956 ORA val2
    // Macro caller: src/text/ccs/atm_increase.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15FB6: {
        Instruction step(cpu, 0x05, 0x00000Au, 2u, AddressMode::DirectPage);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:957 STA dest
    // Macro caller: src/text/ccs/atm_increase.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15FB8: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:958 LDA val1 + 2
    // Macro caller: src/text/ccs/atm_increase.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15FBA: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:959 ORA val2 + 2
    // Macro caller: src/text/ccs/atm_increase.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15FBC: {
        Instruction step(cpu, 0x05, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:960 STA dest + 2
    // Macro caller: src/text/ccs/atm_increase.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15FBE: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/ccs/atm_increase.asm:51 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC15FC0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/ccs/atm_increase.asm:51 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC15FC0.
    case 0xC15FC2: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/text/ccs/atm_increase.asm:51 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC15FC3: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/ccs/atm_increase.asm:51 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC15FC5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/ccs/atm_increase.asm:51 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC15FC5.
    case 0xC15FC7: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/text/ccs/atm_increase.asm:51 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC15FC8: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:745 LDA src + 2
    // Macro caller: src/text/ccs/atm_increase.asm:52 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC15FCA: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:746 CMP dest + 2
    // Macro caller: src/text/ccs/atm_increase.asm:52 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC15FCC: {
        Instruction step(cpu, 0xC5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:747 BNE :+
    // Macro caller: src/text/ccs/atm_increase.asm:52 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC15FCE: {
        Instruction step(cpu, 0xD0, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:748 LDA src
    // Macro caller: src/text/ccs/atm_increase.asm:52 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC15FD0: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:749 CMP dest
    // Macro caller: src/text/ccs/atm_increase.asm:52 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC15FD2: {
        Instruction step(cpu, 0xC5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/atm_increase.asm:53 BNE @ARG_IS_NONZERO
    case 0xC15FD4: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/ccs/atm_increase.asm:54 JSR GET_ARGUMENT_MEMORY
    case 0xC15FD6: {
        Instruction step(cpu, 0x20, 0x0005DFu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/atm_increase.asm:56 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15FD9: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/atm_increase.asm:56 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15FDB: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/atm_increase.asm:56 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15FDD: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/atm_increase.asm:56 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15FDF: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/atm_increase.asm:57 JSL DEPOSIT_INTO_ATM
    case 0xC15FE1: {
        Instruction step(cpu, 0x22, 0xC226E9u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/atm_increase.asm:58 LDA #NULL
    case 0xC15FE5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/atm_increase.asm:58 LDA #NULL
    // Overlapping static entry reached from 0xC15FE5.
    case 0xC15FE7: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/atm_increase.asm:60 END_C_FUNCTION
    case 0xC15FE8: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/atm_increase.asm:60 END_C_FUNCTION
    case 0xC15FE9: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
