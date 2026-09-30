// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/overworld/initialize_item_transformation.asm
bool resume_overworld_initialize_item_transformation(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/initialize_item_transformation.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC46535: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/initialize_item_transformation.asm:8 END_STACK_VARS
    case 0xC46537: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/initialize_item_transformation.asm:8 END_STACK_VARS
    case 0xC46538: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/initialize_item_transformation.asm:8 END_STACK_VARS
    case 0xC46539: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/initialize_item_transformation.asm:8 END_STACK_VARS
    case 0xC4653A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EEu : 0x00FFEEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/initialize_item_transformation.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC4653A.
    case 0xC4653C: {
        Instruction step(cpu, 0xFF, 0xAA685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/initialize_item_transformation.asm:8 END_STACK_VARS
    case 0xC4653D: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/initialize_item_transformation.asm:8 END_STACK_VARS
    case 0xC4653E: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:9 TAX
    case 0xC4653F: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:10 STX @LOCAL01
    case 0xC46540: {
        Instruction step(cpu, 0x86, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:11 TXA
    case 0xC46542: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:12 JSL IS_VALID_ITEM_TRANSFORMATION
    case 0xC46543: {
        Instruction step(cpu, 0x22, 0xC46518u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:13 CMP #0
    case 0xC46547: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:13 CMP #0
    // Overlapping static entry reached from 0xC46547.
    case 0xC46549: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:14 BNE @UNKNOWN0
    case 0xC4654A: {
        Instruction step(cpu, 0xD0, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:15 SEP #PROC_FLAGS::ACCUM8
    case 0xC4654C: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:16 LDA #60
    case 0xC4654E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00003Cu : 0x008D3Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:17 STA TIME_UNTIL_NEXT_ITEM_TRANSFORMATION_CHECK
    case 0xC46550: {
        Instruction step(cpu, 0x8D, 0x00A132u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:17 STA TIME_UNTIL_NEXT_ITEM_TRANSFORMATION_CHECK
    // Overlapping static entry reached from 0xC4654E.
    case 0xC46551: {
        Instruction step(cpu, 0x32, 0x0000A1u, 2u, AddressMode::DirectPageIndirect);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:18 REP #PROC_FLAGS::ACCUM8
    case 0xC46553: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:19 INC ITEM_TRANSFORMATIONS_LOADED
    case 0xC46555: {
        Instruction step(cpu, 0xEE, 0x00A130u, 3u, AddressMode::Absolute);
        step.increment();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:21 LDX @LOCAL01
    case 0xC46558: {
        Instruction step(cpu, 0xA6, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:22 TXA
    case 0xC4655A: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:526 ASL
    // Macro caller: src/overworld/initialize_item_transformation.asm:23 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(loaded_timed_item_transformation)
    case 0xC4655B: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:527 ASL
    // Macro caller: src/overworld/initialize_item_transformation.asm:23 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(loaded_timed_item_transformation)
    case 0xC4655C: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:24 CLC
    case 0xC4655D: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:25 ADC #.LOWORD(LOADED_TIMED_ITEM_TRANSFORMATIONS)
    case 0xC4655E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000020u : 0x00A120u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:25 ADC #.LOWORD(LOADED_TIMED_ITEM_TRANSFORMATIONS)
    // Overlapping static entry reached from 0xC4655E.
    case 0xC46560: {
        Instruction step(cpu, 0xA1, 0x0000A8u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:26 TAY
    case 0xC46561: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:27 STY @LOCAL00
    case 0xC46562: {
        Instruction step(cpu, 0x84, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/initialize_item_transformation.asm:28 LOADPTR TIMED_ITEM_TRANSFORMATION_TABLE, @VIRTUAL06
    case 0xC46564: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00001Bu : 0x00F41Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/initialize_item_transformation.asm:28 LOADPTR TIMED_ITEM_TRANSFORMATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC46564.
    case 0xC46566: {
        Instruction step(cpu, 0xF4, 0x000685u, 3u, AddressMode::Immediate);
        step.push_effective_absolute();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/initialize_item_transformation.asm:28 LOADPTR TIMED_ITEM_TRANSFORMATION_TABLE, @VIRTUAL06
    case 0xC46567: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/initialize_item_transformation.asm:28 LOADPTR TIMED_ITEM_TRANSFORMATION_TABLE, @VIRTUAL06
    case 0xC46569: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D5u : 0x0000D5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/initialize_item_transformation.asm:28 LOADPTR TIMED_ITEM_TRANSFORMATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC46569.
    case 0xC4656B: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/initialize_item_transformation.asm:28 LOADPTR TIMED_ITEM_TRANSFORMATION_TABLE, @VIRTUAL06
    case 0xC4656C: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:29 TXA
    case 0xC4656E: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:529 STA scratch
    // Macro caller: src/overworld/initialize_item_transformation.asm:30 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(timed_item_transformation)
    case 0xC4656F: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:530 ASL
    // Macro caller: src/overworld/initialize_item_transformation.asm:30 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(timed_item_transformation)
    case 0xC46571: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:531 ASL
    // Macro caller: src/overworld/initialize_item_transformation.asm:30 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(timed_item_transformation)
    case 0xC46572: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:532 ADC scratch
    // Macro caller: src/overworld/initialize_item_transformation.asm:30 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(timed_item_transformation)
    case 0xC46573: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:31 TAX
    case 0xC46575: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:32 STX @LOCAL01
    case 0xC46576: {
        Instruction step(cpu, 0x86, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:33 TXA
    case 0xC46578: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:34 INC
    case 0xC46579: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:35 PHA
    case 0xC4657A: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/initialize_item_transformation.asm:36 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC4657B: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/initialize_item_transformation.asm:36 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC4657D: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/initialize_item_transformation.asm:36 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC4657F: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/initialize_item_transformation.asm:36 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC46581: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:37 PLA
    case 0xC46583: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:38 CLC
    case 0xC46584: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:39 ADC @VIRTUAL0A
    case 0xC46585: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:40 STA @VIRTUAL0A
    case 0xC46587: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:41 SEP #PROC_FLAGS::ACCUM8
    case 0xC46589: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:42 LDA [@VIRTUAL0A]
    case 0xC4658B: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:43 STA a:loaded_timed_item_transformation::sfx,Y
    case 0xC4658D: {
        Instruction step(cpu, 0x99, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:44 REP #PROC_FLAGS::ACCUM8
    case 0xC46590: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:45 TXA
    case 0xC46592: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:46 INC
    case 0xC46593: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:47 INC
    case 0xC46594: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/overworld/initialize_item_transformation.asm:48 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC46595: {
        Instruction step(cpu, 0xA6, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/overworld/initialize_item_transformation.asm:48 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC46597: {
        Instruction step(cpu, 0x86, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/overworld/initialize_item_transformation.asm:48 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC46599: {
        Instruction step(cpu, 0xA6, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/overworld/initialize_item_transformation.asm:48 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4659B: {
        Instruction step(cpu, 0x86, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:49 CLC
    case 0xC4659D: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:50 ADC @VIRTUAL0A
    case 0xC4659E: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:51 STA @VIRTUAL0A
    case 0xC465A0: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:52 SEP #PROC_FLAGS::ACCUM8
    case 0xC465A2: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:53 LDA [@VIRTUAL0A]
    case 0xC465A4: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:54 STA @VIRTUAL00
    case 0xC465A6: {
        Instruction step(cpu, 0x85, 0x000000u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:55 STA a:loaded_timed_item_transformation::sfx_frequency,Y
    case 0xC465A8: {
        Instruction step(cpu, 0x99, 0x000001u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:56 REP #PROC_FLAGS::ACCUM8
    case 0xC465AB: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:57 LDA #2
    case 0xC465AD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:57 LDA #2
    // Overlapping static entry reached from 0xC465AD.
    case 0xC465AF: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:58 JSL RAND_MOD
    case 0xC465B0: {
        Instruction step(cpu, 0x22, 0xC43CC9u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:59 SEP #PROC_FLAGS::ACCUM8
    case 0xC465B4: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:60 PHA
    case 0xC465B6: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:61 LDA @VIRTUAL00
    case 0xC465B7: {
        Instruction step(cpu, 0xA5, 0x000000u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:62 SEP #PROC_FLAGS::INDEX8
    case 0xC465B9: {
        Instruction step(cpu, 0xE2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:63 PLX
    case 0xC465BB: {
        Instruction step(cpu, 0xFA, 0x000000u, 1u, AddressMode::Implied);
        step.pull_x();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:64 STX @VIRTUAL00
    case 0xC465BC: {
        Instruction step(cpu, 0x86, 0x000000u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:65 CLC
    case 0xC465BE: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:66 ADC @VIRTUAL00
    case 0xC465BF: {
        Instruction step(cpu, 0x65, 0x000000u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:67 DEC
    case 0xC465C1: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:68 REP #PROC_FLAGS::INDEX8
    case 0xC465C2: {
        Instruction step(cpu, 0xC2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:69 LDY @LOCAL00
    case 0xC465C4: {
        Instruction step(cpu, 0xA4, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:70 STA a:loaded_timed_item_transformation::sfx_countdown,Y
    case 0xC465C6: {
        Instruction step(cpu, 0x99, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:71 LDX @LOCAL01
    case 0xC465C9: {
        Instruction step(cpu, 0xA6, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:72 REP #PROC_FLAGS::ACCUM8
    case 0xC465CB: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:73 TXA
    case 0xC465CD: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:74 INC
    case 0xC465CE: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:75 INC
    case 0xC465CF: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:76 INC
    case 0xC465D0: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:77 INC
    case 0xC465D1: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:78 CLC
    case 0xC465D2: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:79 ADC @VIRTUAL06
    case 0xC465D3: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:80 STA @VIRTUAL06
    case 0xC465D5: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:81 SEP #PROC_FLAGS::ACCUM8
    case 0xC465D7: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:82 LDA [@VIRTUAL06]
    case 0xC465D9: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:83 STA a:loaded_timed_item_transformation::transformation_countdown,Y
    case 0xC465DB: {
        Instruction step(cpu, 0x99, 0x000003u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_item_transformation.asm:84 REP #PROC_FLAGS::ACCUM8
    case 0xC465DE: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/initialize_item_transformation.asm:85 END_C_FUNCTION
    case 0xC465E0: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/initialize_item_transformation.asm:85 END_C_FUNCTION
    case 0xC465E1: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
