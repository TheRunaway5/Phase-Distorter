// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/overworld/initialize_item_transformation.asm
bool resume_overworld_initialize_item_transformation(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/initialize_item_transformation.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC48EEB: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/initialize_item_transformation.asm:8 END_STACK_VARS
    case 0xC48EED: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/initialize_item_transformation.asm:8 END_STACK_VARS
    case 0xC48EEE: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/initialize_item_transformation.asm:8 END_STACK_VARS
    case 0xC48EEF: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/initialize_item_transformation.asm:8 END_STACK_VARS
    case 0xC48EF0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EEu : 0x00FFEEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/initialize_item_transformation.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC48EF0.
    case 0xC48EF2: {
        Instruction step(cpu, 0xFF, 0xAA685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/initialize_item_transformation.asm:8 END_STACK_VARS
    case 0xC48EF3: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/initialize_item_transformation.asm:8 END_STACK_VARS
    case 0xC48EF4: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:9 TAX
    case 0xC48EF5: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:10 STX @LOCAL01
    case 0xC48EF6: {
        Instruction step(cpu, 0x86, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:11 TXA
    case 0xC48EF8: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:12 JSL IS_VALID_ITEM_TRANSFORMATION
    case 0xC48EF9: {
        Instruction step(cpu, 0x22, 0xC48ECEu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:13 CMP #0
    case 0xC48EFD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:13 CMP #0
    // Overlapping static entry reached from 0xC48EFD.
    case 0xC48EFF: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:14 BNE @UNKNOWN0
    case 0xC48F00: {
        Instruction step(cpu, 0xD0, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:15 SEP #PROC_FLAGS::ACCUM8
    case 0xC48F02: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:16 LDA #60
    case 0xC48F04: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00003Cu : 0x008D3Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:17 STA TIME_UNTIL_NEXT_ITEM_TRANSFORMATION_CHECK
    case 0xC48F06: {
        Instruction step(cpu, 0x8D, 0x009F2Cu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:17 STA TIME_UNTIL_NEXT_ITEM_TRANSFORMATION_CHECK
    // Overlapping static entry reached from 0xC48F04.
    case 0xC48F07: {
        Instruction step(cpu, 0x2C, 0x00C29Fu, 3u, AddressMode::Absolute);
        step.test_bits();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:18 REP #PROC_FLAGS::ACCUM8
    case 0xC48F09: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:18 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC48F07.
    case 0xC48F0A: {
        Instruction step(cpu, 0x20, 0x002AEEu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:19 INC ITEM_TRANSFORMATIONS_LOADED
    case 0xC48F0B: {
        Instruction step(cpu, 0xEE, 0x009F2Au, 3u, AddressMode::Absolute);
        step.increment();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:19 INC ITEM_TRANSFORMATIONS_LOADED
    // Overlapping static entry reached from 0xC48F0A.
    case 0xC48F0D: {
        Instruction step(cpu, 0x9F, 0x8A10A6u, 4u, AddressMode::LongIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:21 LDX @LOCAL01
    case 0xC48F0E: {
        Instruction step(cpu, 0xA6, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:22 TXA
    case 0xC48F10: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:526 ASL
    // Macro caller: src/overworld/initialize_item_transformation.asm:23 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(loaded_timed_item_transformation)
    case 0xC48F11: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:527 ASL
    // Macro caller: src/overworld/initialize_item_transformation.asm:23 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(loaded_timed_item_transformation)
    case 0xC48F12: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:24 CLC
    case 0xC48F13: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:25 ADC #.LOWORD(LOADED_TIMED_ITEM_TRANSFORMATIONS)
    case 0xC48F14: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00001Au : 0x009F1Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:25 ADC #.LOWORD(LOADED_TIMED_ITEM_TRANSFORMATIONS)
    // Overlapping static entry reached from 0xC48F14.
    case 0xC48F16: {
        Instruction step(cpu, 0x9F, 0x0E84A8u, 4u, AddressMode::LongIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:26 TAY
    case 0xC48F17: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:27 STY @LOCAL00
    case 0xC48F18: {
        Instruction step(cpu, 0x84, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/initialize_item_transformation.asm:28 LOADPTR TIMED_ITEM_TRANSFORMATION_TABLE, @VIRTUAL06
    case 0xC48F1A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000BBu : 0x00F4BBu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/initialize_item_transformation.asm:28 LOADPTR TIMED_ITEM_TRANSFORMATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC48F1A.
    case 0xC48F1C: {
        Instruction step(cpu, 0xF4, 0x000685u, 3u, AddressMode::Immediate);
        step.push_effective_absolute();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/initialize_item_transformation.asm:28 LOADPTR TIMED_ITEM_TRANSFORMATION_TABLE, @VIRTUAL06
    case 0xC48F1D: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/initialize_item_transformation.asm:28 LOADPTR TIMED_ITEM_TRANSFORMATION_TABLE, @VIRTUAL06
    case 0xC48F1F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D5u : 0x0000D5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/initialize_item_transformation.asm:28 LOADPTR TIMED_ITEM_TRANSFORMATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC48F1F.
    case 0xC48F21: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/initialize_item_transformation.asm:28 LOADPTR TIMED_ITEM_TRANSFORMATION_TABLE, @VIRTUAL06
    case 0xC48F22: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:29 TXA
    case 0xC48F24: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:529 STA scratch
    // Macro caller: src/overworld/initialize_item_transformation.asm:30 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(timed_item_transformation)
    case 0xC48F25: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:530 ASL
    // Macro caller: src/overworld/initialize_item_transformation.asm:30 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(timed_item_transformation)
    case 0xC48F27: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:531 ASL
    // Macro caller: src/overworld/initialize_item_transformation.asm:30 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(timed_item_transformation)
    case 0xC48F28: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:532 ADC scratch
    // Macro caller: src/overworld/initialize_item_transformation.asm:30 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(timed_item_transformation)
    case 0xC48F29: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:31 TAX
    case 0xC48F2B: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:32 STX @LOCAL01
    case 0xC48F2C: {
        Instruction step(cpu, 0x86, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:33 TXA
    case 0xC48F2E: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:34 INC
    case 0xC48F2F: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:35 PHA
    case 0xC48F30: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/initialize_item_transformation.asm:36 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC48F31: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/initialize_item_transformation.asm:36 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC48F33: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/initialize_item_transformation.asm:36 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC48F35: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/initialize_item_transformation.asm:36 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC48F37: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:37 PLA
    case 0xC48F39: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:38 CLC
    case 0xC48F3A: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:39 ADC @VIRTUAL0A
    case 0xC48F3B: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:40 STA @VIRTUAL0A
    case 0xC48F3D: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:41 SEP #PROC_FLAGS::ACCUM8
    case 0xC48F3F: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:42 LDA [@VIRTUAL0A]
    case 0xC48F41: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:43 STA a:loaded_timed_item_transformation::sfx,Y
    case 0xC48F43: {
        Instruction step(cpu, 0x99, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:44 REP #PROC_FLAGS::ACCUM8
    case 0xC48F46: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:45 TXA
    case 0xC48F48: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:46 INC
    case 0xC48F49: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:47 INC
    case 0xC48F4A: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/overworld/initialize_item_transformation.asm:48 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC48F4B: {
        Instruction step(cpu, 0xA6, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/overworld/initialize_item_transformation.asm:48 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC48F4D: {
        Instruction step(cpu, 0x86, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/overworld/initialize_item_transformation.asm:48 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC48F4F: {
        Instruction step(cpu, 0xA6, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/overworld/initialize_item_transformation.asm:48 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC48F51: {
        Instruction step(cpu, 0x86, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:49 CLC
    case 0xC48F53: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:50 ADC @VIRTUAL0A
    case 0xC48F54: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:51 STA @VIRTUAL0A
    case 0xC48F56: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:52 SEP #PROC_FLAGS::ACCUM8
    case 0xC48F58: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:53 LDA [@VIRTUAL0A]
    case 0xC48F5A: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:54 STA @VIRTUAL00
    case 0xC48F5C: {
        Instruction step(cpu, 0x85, 0x000000u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:55 STA a:loaded_timed_item_transformation::sfx_frequency,Y
    case 0xC48F5E: {
        Instruction step(cpu, 0x99, 0x000001u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:56 REP #PROC_FLAGS::ACCUM8
    case 0xC48F61: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:57 LDA #2
    case 0xC48F63: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:57 LDA #2
    // Overlapping static entry reached from 0xC48F63.
    case 0xC48F65: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:58 JSL RAND_MOD
    case 0xC48F66: {
        Instruction step(cpu, 0x22, 0xC45F7Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:59 SEP #PROC_FLAGS::ACCUM8
    case 0xC48F6A: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:60 PHA
    case 0xC48F6C: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:61 LDA @VIRTUAL00
    case 0xC48F6D: {
        Instruction step(cpu, 0xA5, 0x000000u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:62 SEP #PROC_FLAGS::INDEX8
    case 0xC48F6F: {
        Instruction step(cpu, 0xE2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:63 PLX
    case 0xC48F71: {
        Instruction step(cpu, 0xFA, 0x000000u, 1u, AddressMode::Implied);
        step.pull_x();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:64 STX @VIRTUAL00
    case 0xC48F72: {
        Instruction step(cpu, 0x86, 0x000000u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:65 CLC
    case 0xC48F74: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:66 ADC @VIRTUAL00
    case 0xC48F75: {
        Instruction step(cpu, 0x65, 0x000000u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:67 DEC
    case 0xC48F77: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:68 REP #PROC_FLAGS::INDEX8
    case 0xC48F78: {
        Instruction step(cpu, 0xC2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:69 LDY @LOCAL00
    case 0xC48F7A: {
        Instruction step(cpu, 0xA4, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:70 STA a:loaded_timed_item_transformation::sfx_countdown,Y
    case 0xC48F7C: {
        Instruction step(cpu, 0x99, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:71 LDX @LOCAL01
    case 0xC48F7F: {
        Instruction step(cpu, 0xA6, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:72 REP #PROC_FLAGS::ACCUM8
    case 0xC48F81: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:73 TXA
    case 0xC48F83: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:74 INC
    case 0xC48F84: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:75 INC
    case 0xC48F85: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:76 INC
    case 0xC48F86: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:77 INC
    case 0xC48F87: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:78 CLC
    case 0xC48F88: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:79 ADC @VIRTUAL06
    case 0xC48F89: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:80 STA @VIRTUAL06
    case 0xC48F8B: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:81 SEP #PROC_FLAGS::ACCUM8
    case 0xC48F8D: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:82 LDA [@VIRTUAL06]
    case 0xC48F8F: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:83 STA a:loaded_timed_item_transformation::transformation_countdown,Y
    case 0xC48F91: {
        Instruction step(cpu, 0x99, 0x000003u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:84 REP #PROC_FLAGS::ACCUM8
    case 0xC48F94: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/initialize_item_transformation.asm:85 END_C_FUNCTION
    case 0xC48F96: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/initialize_item_transformation.asm:85 END_C_FUNCTION
    case 0xC48F97: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
