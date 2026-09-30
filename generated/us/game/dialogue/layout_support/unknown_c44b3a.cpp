// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/unknown/C4/C44B3A.asm
bool resume_unresolved_c4_c44b3a(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C44B3A.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC44B3A: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C44B3A.asm:13 END_STACK_VARS
    case 0xC44B3C: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C44B3A.asm:13 END_STACK_VARS
    case 0xC44B3D: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C44B3A.asm:13 END_STACK_VARS
    case 0xC44B3E: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C44B3A.asm:13 END_STACK_VARS
    case 0xC44B3F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000E9u : 0x00FFE9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C44B3A.asm:13 END_STACK_VARS
    // Overlapping static entry reached from 0xC44B3F.
    case 0xC44B41: {
        Instruction step(cpu, 0xFF, 0x86685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C44B3A.asm:13 END_STACK_VARS
    case 0xC44B42: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C44B3A.asm:13 END_STACK_VARS
    case 0xC44B43: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:14 STX @VIRTUAL04
    case 0xC44B44: {
        Instruction step(cpu, 0x86, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:14 STX @VIRTUAL04
    // Overlapping static entry reached from 0xC44B41.
    case 0xC44B45: {
        Instruction step(cpu, 0x04, 0x000085u, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:15 STA @LOCAL04
    case 0xC44B46: {
        Instruction step(cpu, 0x85, 0x000015u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:15 STA @LOCAL04
    // Overlapping static entry reached from 0xC44B45.
    case 0xC44B47: {
        Instruction step(cpu, 0x15, 0x0000A5u, 2u, AddressMode::DirectPageIndexedX);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C44B3A.asm:16 MOVE_INT @PARAM02, @VIRTUAL0A
    case 0xC44B48: {
        Instruction step(cpu, 0xA5, 0x000025u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C44B3A.asm:16 MOVE_INT @PARAM02, @VIRTUAL0A
    // Overlapping static entry reached from 0xC44B47.
    case 0xC44B49: {
        Instruction step(cpu, 0x25, 0x000085u, 2u, AddressMode::DirectPage);
        step.and_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C44B3A.asm:16 MOVE_INT @PARAM02, @VIRTUAL0A
    case 0xC44B4A: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C44B3A.asm:16 MOVE_INT @PARAM02, @VIRTUAL0A
    // Overlapping static entry reached from 0xC44B49.
    case 0xC44B4B: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C44B3A.asm:16 MOVE_INT @PARAM02, @VIRTUAL0A
    case 0xC44B4C: {
        Instruction step(cpu, 0xA5, 0x000027u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C44B3A.asm:16 MOVE_INT @PARAM02, @VIRTUAL0A
    case 0xC44B4E: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:17 LDA VWF_X
    case 0xC44B50: {
        Instruction step(cpu, 0xAD, 0x009E23u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:18 AND #$0007
    case 0xC44B53: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000007u : 0x000007u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:18 AND #$0007
    // Overlapping static entry reached from 0xC44B53.
    case 0xC44B55: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:19 STA @VIRTUAL02
    case 0xC44B56: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:20 STA @LOCAL03
    case 0xC44B58: {
        Instruction step(cpu, 0x85, 0x000013u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:21 LDA VWF_TILE
    case 0xC44B5A: {
        Instruction step(cpu, 0xAD, 0x009E25u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:656 ASL
    // Macro caller: src/unknown/C4/C44B3A.asm:22 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC44B5D: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:657 ASL
    // Macro caller: src/unknown/C4/C44B3A.asm:22 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC44B5E: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:658 ASL
    // Macro caller: src/unknown/C4/C44B3A.asm:22 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC44B5F: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:659 ASL
    // Macro caller: src/unknown/C4/C44B3A.asm:22 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC44B60: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:660 ASL
    // Macro caller: src/unknown/C4/C44B3A.asm:22 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC44B61: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:23 CLC
    case 0xC44B62: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:24 ADC #.LOWORD(VWF_BUFFER)
    case 0xC44B63: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000092u : 0x003492u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:24 ADC #.LOWORD(VWF_BUFFER)
    // Overlapping static entry reached from 0xC44B63.
    case 0xC44B65: {
        Instruction step(cpu, 0x34, 0x0000A8u, 2u, AddressMode::DirectPageIndexedX);
        step.test_bits();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:25 TAY
    case 0xC44B66: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:26 STY @LOCAL02
    case 0xC44B67: {
        Instruction step(cpu, 0x84, 0x000011u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C44B3A.asm:27 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC44B69: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C44B3A.asm:27 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC44B6B: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C44B3A.asm:27 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC44B6D: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C44B3A.asm:27 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC44B6F: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:28 LDA @VIRTUAL02
    case 0xC44B71: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:29 BNE @UNKNOWN0
    case 0xC44B73: {
        Instruction step(cpu, 0xD0, 0x000011u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:30 SEP #PROC_FLAGS::ACCUM8
    case 0xC44B75: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:31 LDA #<-1
    case 0xC44B77: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x0085FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:32 STA @LOCAL00
    case 0xC44B79: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:32 STA @LOCAL00
    // Overlapping static entry reached from 0xC44B77.
    case 0xC44B7A: {
        Instruction step(cpu, 0x0E, 0x0020C2u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:33 REP #PROC_FLAGS::ACCUM8
    case 0xC44B7B: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:34 LDA @VIRTUAL04
    case 0xC44B7D: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:35 ASL
    case 0xC44B7F: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:36 TAX
    case 0xC44B80: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:37 TYA
    case 0xC44B81: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:38 JSL MEMSET16
    case 0xC44B82: {
        Instruction step(cpu, 0x22, 0xC08EFCu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:40 LDY @LOCAL02
    case 0xC44B86: {
        Instruction step(cpu, 0xA4, 0x000011u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:41 TYX
    case 0xC44B88: {
        Instruction step(cpu, 0xBB, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_x();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:42 INX
    case 0xC44B89: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:43 STX @LOCAL01
    case 0xC44B8A: {
        Instruction step(cpu, 0x86, 0x00000Fu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:44 LDA #0
    case 0xC44B8C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:44 LDA #0
    // Overlapping static entry reached from 0xC44B8C.
    case 0xC44B8E: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:45 STA @LOCAL02
    case 0xC44B8F: {
        Instruction step(cpu, 0x85, 0x000011u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:46 BRA @UNKNOWN2
    case 0xC44B91: {
        Instruction step(cpu, 0x80, 0x000031u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:48 LDA [@VIRTUAL06]
    case 0xC44B93: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:49 AND #$00FF
    case 0xC44B95: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:49 AND #$00FF
    // Overlapping static entry reached from 0xC44B95.
    case 0xC44B97: {
        Instruction step(cpu, 0x00, 0x000048u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:50 PHA
    case 0xC44B98: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:51 LDA @LOCAL03
    case 0xC44B99: {
        Instruction step(cpu, 0xA5, 0x000013u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:52 STA @VIRTUAL02
    case 0xC44B9B: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:52 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC4A589.
    case 0xC44B9C: {
        Instruction step(cpu, 0x02, 0x0000EBu, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:53 XBA
    case 0xC44B9D: {
        Instruction step(cpu, 0xEB, 0x000000u, 1u, AddressMode::Implied);
        step.exchange_accumulator_bytes();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:54 AND #$FF00
    case 0xC44B9E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x00FF00u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:54 AND #$FF00
    // Overlapping static entry reached from 0xC44B9E.
    case 0xC44BA0: {
        Instruction step(cpu, 0xFF, 0x02847Au, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:55 PLY
    case 0xC44BA1: {
        Instruction step(cpu, 0x7A, 0x000000u, 1u, AddressMode::Implied);
        step.pull_y();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:56 STY @VIRTUAL02
    case 0xC44BA2: {
        Instruction step(cpu, 0x84, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:57 CLC
    case 0xC44BA4: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:58 ADC @VIRTUAL02
    case 0xC44BA5: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:59 PHA
    case 0xC44BA7: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:60 SEP #PROC_FLAGS::ACCUM8
    case 0xC44BA8: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:61 LDA __BSS_START__,X
    case 0xC44BAA: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:62 PLX
    case 0xC44BAD: {
        Instruction step(cpu, 0xFA, 0x000000u, 1u, AddressMode::Implied);
        step.pull_x();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:63 AND f:UNKNOWN_EFC51B,X
    case 0xC44BAE: {
        Instruction step(cpu, 0x3F, 0xEFC51Bu, 4u, AddressMode::LongIndexedX);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:64 LDX @LOCAL01
    case 0xC44BB2: {
        Instruction step(cpu, 0xA6, 0x00000Fu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:65 STA __BSS_START__,X
    case 0xC44BB4: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:66 REP #PROC_FLAGS::ACCUM8
    case 0xC44BB7: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:67 INC @VIRTUAL06
    case 0xC44BB9: {
        Instruction step(cpu, 0xE6, 0x000006u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:68 INX
    case 0xC44BBB: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:69 INX
    case 0xC44BBC: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:70 STX @LOCAL01
    case 0xC44BBD: {
        Instruction step(cpu, 0x86, 0x00000Fu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:71 LDA @LOCAL02
    case 0xC44BBF: {
        Instruction step(cpu, 0xA5, 0x000011u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:72 INC
    case 0xC44BC1: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:73 STA @LOCAL02
    case 0xC44BC2: {
        Instruction step(cpu, 0x85, 0x000011u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:75 CMP @VIRTUAL04
    case 0xC44BC4: {
        Instruction step(cpu, 0xC5, 0x000004u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:76 BCC @UNKNOWN1
    case 0xC44BC6: {
        Instruction step(cpu, 0x90, 0x0000CBu, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:77 LDA VWF_X
    case 0xC44BC8: {
        Instruction step(cpu, 0xAD, 0x009E23u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:78 CLC
    case 0xC44BCB: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:79 ADC @LOCAL04
    case 0xC44BCC: {
        Instruction step(cpu, 0x65, 0x000015u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:80 STA VWF_X
    case 0xC44BCE: {
        Instruction step(cpu, 0x8D, 0x009E23u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:81 CMP #52 * 8
    case 0xC44BD1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000A0u : 0x0001A0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:81 CMP #52 * 8
    // Overlapping static entry reached from 0xC44BD1.
    case 0xC44BD3: {
        Instruction step(cpu, 0x01, 0x000090u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:82 BCC @UNKNOWN3
    case 0xC44BD4: {
        Instruction step(cpu, 0x90, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:82 BCC @UNKNOWN3
    // Overlapping static entry reached from 0xC44BD3.
    case 0xC44BD5: {
        Instruction step(cpu, 0x07, 0x000038u, 2u, AddressMode::DirectPageIndirectLong);
        step.or_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:83 SEC
    case 0xC44BD6: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:84 SBC #52 * 8
    case 0xC44BD7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x0000A0u : 0x0001A0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:84 SBC #52 * 8
    // Overlapping static entry reached from 0xC44BD7.
    case 0xC44BD9: {
        Instruction step(cpu, 0x01, 0x00008Du, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:85 STA VWF_X
    case 0xC44BDA: {
        Instruction step(cpu, 0x8D, 0x009E23u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:85 STA VWF_X
    // Overlapping static entry reached from 0xC44BD9.
    case 0xC44BDB: {
        Instruction step(cpu, 0x23, 0x00009Eu, 2u, AddressMode::StackRelative);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:87 LDA VWF_X
    case 0xC44BDD: {
        Instruction step(cpu, 0xAD, 0x009E23u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:88 LSR
    case 0xC44BE0: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:89 LSR
    case 0xC44BE1: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:90 LSR
    case 0xC44BE2: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:91 STA @LOCAL04
    case 0xC44BE3: {
        Instruction step(cpu, 0x85, 0x000015u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:92 CMP VWF_TILE
    case 0xC44BE5: {
        Instruction step(cpu, 0xCD, 0x009E25u, 3u, AddressMode::Absolute);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C4/C44B3A.asm:93 BEQL @UNKNOWN7
    case 0xC44BE8: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C4/C44B3A.asm:93 BEQL @UNKNOWN7
    case 0xC44BEA: {
        Instruction step(cpu, 0x4C, 0x004C6Au, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:94 STA VWF_TILE
    case 0xC44BED: {
        Instruction step(cpu, 0x8D, 0x009E25u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:95 LDA @LOCAL03
    case 0xC44BF0: {
        Instruction step(cpu, 0xA5, 0x000013u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:96 STA @VIRTUAL02
    case 0xC44BF2: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:97 LDA #8
    case 0xC44BF4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:97 LDA #8
    // Overlapping static entry reached from 0xC44BF4.
    case 0xC44BF6: {
        Instruction step(cpu, 0x00, 0x000038u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:98 SEC
    case 0xC44BF7: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:99 SBC @VIRTUAL02
    case 0xC44BF8: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:100 STA @VIRTUAL02
    case 0xC44BFA: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:101 STA @LOCAL03
    case 0xC44BFC: {
        Instruction step(cpu, 0x85, 0x000013u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:102 LDA @LOCAL04
    case 0xC44BFE: {
        Instruction step(cpu, 0xA5, 0x000015u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:656 ASL
    // Macro caller: src/unknown/C4/C44B3A.asm:103 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC44C00: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:657 ASL
    // Macro caller: src/unknown/C4/C44B3A.asm:103 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC44C01: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:658 ASL
    // Macro caller: src/unknown/C4/C44B3A.asm:103 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC44C02: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:659 ASL
    // Macro caller: src/unknown/C4/C44B3A.asm:103 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC44C03: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:660 ASL
    // Macro caller: src/unknown/C4/C44B3A.asm:103 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC44C04: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:104 CLC
    case 0xC44C05: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:105 ADC #.LOWORD(VWF_BUFFER)
    case 0xC44C06: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000092u : 0x003492u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:105 ADC #.LOWORD(VWF_BUFFER)
    // Overlapping static entry reached from 0xC44C06.
    case 0xC44C08: {
        Instruction step(cpu, 0x34, 0x0000A8u, 2u, AddressMode::DirectPageIndexedX);
        step.test_bits();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:106 TAY
    case 0xC44C09: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:107 STY @LOCAL02
    case 0xC44C0A: {
        Instruction step(cpu, 0x84, 0x000011u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C44B3A.asm:108 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC44C0C: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C44B3A.asm:108 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC44C0E: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C44B3A.asm:108 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC44C10: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C44B3A.asm:108 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC44C12: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:109 SEP #PROC_FLAGS::ACCUM8
    case 0xC44C14: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:110 LDA #<-1
    case 0xC44C16: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x0085FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:111 STA @LOCAL00
    case 0xC44C18: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:111 STA @LOCAL00
    // Overlapping static entry reached from 0xC44C16.
    case 0xC44C19: {
        Instruction step(cpu, 0x0E, 0x0020C2u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:112 REP #PROC_FLAGS::ACCUM8
    case 0xC44C1A: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:113 LDA @VIRTUAL04
    case 0xC44C1C: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:114 ASL
    case 0xC44C1E: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:115 TAX
    case 0xC44C1F: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:116 TYA
    case 0xC44C20: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:117 JSL MEMSET16
    case 0xC44C21: {
        Instruction step(cpu, 0x22, 0xC08EFCu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:118 LDA @VIRTUAL02
    case 0xC44C25: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:119 CMP #8
    case 0xC44C27: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:119 CMP #8
    // Overlapping static entry reached from 0xC44C27.
    case 0xC44C29: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:120 BEQ @UNKNOWN7
    case 0xC44C2A: {
        Instruction step(cpu, 0xF0, 0x00003Eu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:121 LDY @LOCAL02
    case 0xC44C2C: {
        Instruction step(cpu, 0xA4, 0x000011u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:122 TYX
    case 0xC44C2E: {
        Instruction step(cpu, 0xBB, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_x();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:123 INX
    case 0xC44C2F: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:124 STX @LOCAL01
    case 0xC44C30: {
        Instruction step(cpu, 0x86, 0x00000Fu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:125 LDA #0
    case 0xC44C32: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:125 LDA #0
    // Overlapping static entry reached from 0xC44C32.
    case 0xC44C34: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:126 STA @LOCAL02
    case 0xC44C35: {
        Instruction step(cpu, 0x85, 0x000011u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:127 BRA @UNKNOWN6
    case 0xC44C37: {
        Instruction step(cpu, 0x80, 0x00002Du, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:129 LDA [@VIRTUAL06]
    case 0xC44C39: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:130 AND #$00FF
    case 0xC44C3B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:130 AND #$00FF
    // Overlapping static entry reached from 0xC44C3B.
    case 0xC44C3D: {
        Instruction step(cpu, 0x00, 0x000048u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:131 PHA
    case 0xC44C3E: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:132 LDA @LOCAL03
    case 0xC44C3F: {
        Instruction step(cpu, 0xA5, 0x000013u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:133 STA @VIRTUAL02
    case 0xC44C41: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:134 XBA
    case 0xC44C43: {
        Instruction step(cpu, 0xEB, 0x000000u, 1u, AddressMode::Implied);
        step.exchange_accumulator_bytes();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:135 AND #$FF00
    case 0xC44C44: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x00FF00u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:135 AND #$FF00
    // Overlapping static entry reached from 0xC44C44.
    case 0xC44C46: {
        Instruction step(cpu, 0xFF, 0x02847Au, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:136 PLY
    case 0xC44C47: {
        Instruction step(cpu, 0x7A, 0x000000u, 1u, AddressMode::Implied);
        step.pull_y();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:137 STY @VIRTUAL02
    case 0xC44C48: {
        Instruction step(cpu, 0x84, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:138 CLC
    case 0xC44C4A: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:139 ADC @VIRTUAL02
    case 0xC44C4B: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:140 TAX
    case 0xC44C4D: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:141 SEP #PROC_FLAGS::ACCUM8
    case 0xC44C4E: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:142 LDA f:UNKNOWN_EFCD1B,X
    case 0xC44C50: {
        Instruction step(cpu, 0xBF, 0xEFCD1Bu, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:143 LDX @LOCAL01
    case 0xC44C54: {
        Instruction step(cpu, 0xA6, 0x00000Fu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:144 STA __BSS_START__,X
    case 0xC44C56: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:145 REP #PROC_FLAGS::ACCUM8
    case 0xC44C59: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:146 INC @VIRTUAL06
    case 0xC44C5B: {
        Instruction step(cpu, 0xE6, 0x000006u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:147 INX
    case 0xC44C5D: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:148 INX
    case 0xC44C5E: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:149 STX @LOCAL01
    case 0xC44C5F: {
        Instruction step(cpu, 0x86, 0x00000Fu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:150 LDA @LOCAL02
    case 0xC44C61: {
        Instruction step(cpu, 0xA5, 0x000011u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:151 INC
    case 0xC44C63: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:152 STA @LOCAL02
    case 0xC44C64: {
        Instruction step(cpu, 0x85, 0x000011u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:154 CMP @VIRTUAL04
    case 0xC44C66: {
        Instruction step(cpu, 0xC5, 0x000004u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C44B3A.asm:155 BCC @UNKNOWN5
    case 0xC44C68: {
        Instruction step(cpu, 0x90, 0x0000CFu, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C44B3A.asm:157 END_C_FUNCTION
    case 0xC44C6A: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C44B3A.asm:157 END_C_FUNCTION
    case 0xC44C6B: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
