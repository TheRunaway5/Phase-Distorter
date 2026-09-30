// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/overworld/adjust_position_horizontal.asm
bool resume_overworld_adjust_position_horizontal(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/adjust_position_horizontal.asm:3 BEGIN_C_FUNCTION
    case 0xC02D8F: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/adjust_position_horizontal.asm:11 END_STACK_VARS
    case 0xC02D91: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/adjust_position_horizontal.asm:11 END_STACK_VARS
    case 0xC02D92: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/adjust_position_horizontal.asm:11 END_STACK_VARS
    case 0xC02D93: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/adjust_position_horizontal.asm:11 END_STACK_VARS
    case 0xC02D94: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000ECu : 0x00FFECu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/adjust_position_horizontal.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC02D94.
    case 0xC02D96: {
        Instruction step(cpu, 0xFF, 0xA8685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/adjust_position_horizontal.asm:11 END_STACK_VARS
    case 0xC02D97: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/adjust_position_horizontal.asm:11 END_STACK_VARS
    case 0xC02D98: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:12 TAY
    case 0xC02D99: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_horizontal.asm:13 MOVE_INT @PARAM02, @VIRTUAL06
    case 0xC02D9A: {
        Instruction step(cpu, 0xA5, 0x000022u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:13 MOVE_INT @PARAM02, @VIRTUAL06
    case 0xC02D9C: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:13 MOVE_INT @PARAM02, @VIRTUAL06
    case 0xC02D9E: {
        Instruction step(cpu, 0xA5, 0x000024u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:13 MOVE_INT @PARAM02, @VIRTUAL06
    case 0xC02DA0: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_horizontal.asm:14 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC02DA2: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:14 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC02DA4: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:14 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC02DA6: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:14 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC02DA8: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:15 TXA
    case 0xC02DAA: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:16 AND #SURFACE_FLAGS::DEEP_WATER
    case 0xC02DAB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x00000Cu : 0x00000Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:16 AND #SURFACE_FLAGS::DEEP_WATER
    // Overlapping static entry reached from 0xC02DAB.
    case 0xC02DAD: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:17 CMP #SURFACE_FLAGS::SHALLOW_WATER
    case 0xC02DAE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:17 CMP #SURFACE_FLAGS::SHALLOW_WATER
    // Overlapping static entry reached from 0xC02DAE.
    case 0xC02DB0: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:18 BEQ @IN_SHALLOW_WATER
    case 0xC02DB1: {
        Instruction step(cpu, 0xF0, 0x00000Bu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:19 CMP #SURFACE_FLAGS::DEEP_WATER
    case 0xC02DB3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00000Cu : 0x00000Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:19 CMP #SURFACE_FLAGS::DEEP_WATER
    // Overlapping static entry reached from 0xC02DB3.
    case 0xC02DB5: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/adjust_position_horizontal.asm:20 BEQL @IN_DEEP_WATER
    case 0xC02DB6: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:20 BEQL @IN_DEEP_WATER
    case 0xC02DB8: {
        Instruction step(cpu, 0x4C, 0x002E59u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:21 JMP @NOT_IN_WATER
    case 0xC02DBB: {
        Instruction step(cpu, 0x4C, 0x002EF4u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:23 TYA
    case 0xC02DBE: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:24 ASL
    case 0xC02DBF: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:25 ASL
    case 0xC02DC0: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:26 STA @VIRTUAL02
    case 0xC02DC1: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:27 LDA GAME_STATE+game_state::walking_style
    case 0xC02DC3: {
        Instruction step(cpu, 0xAD, 0x009883u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:28 ASL
    case 0xC02DC6: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:29 ASL
    case 0xC02DC7: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:30 ASL
    case 0xC02DC8: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:31 ASL
    case 0xC02DC9: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:32 ASL
    case 0xC02DCA: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:33 CLC
    case 0xC02DCB: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:34 ADC @VIRTUAL02
    case 0xC02DCC: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:35 CLC
    case 0xC02DCE: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:36 ADC #.LOWORD(HORIZONTAL_MOVEMENT_SPEEDS)
    case 0xC02DCF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000D6u : 0x004DD6u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:36 ADC #.LOWORD(HORIZONTAL_MOVEMENT_SPEEDS)
    // Overlapping static entry reached from 0xC02DCF.
    case 0xC02DD1: {
        Instruction step(cpu, 0x4D, 0x00B9A8u, 3u, AddressMode::Absolute);
        step.xor_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:37 TAY
    case 0xC02DD2: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/overworld/adjust_position_horizontal.asm:38 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC02DD3: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/overworld/adjust_position_horizontal.asm:38 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    // Overlapping static entry reached from 0xC02DD1.
    case 0xC02DD4: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1114 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:38 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC02DD6: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/overworld/adjust_position_horizontal.asm:38 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC02DD8: {
        Instruction step(cpu, 0xB9, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:38 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC02DDB: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:931 LDA addr+1
    // Macro caller: src/overworld/adjust_position_horizontal.asm:39 ASR8_INT @VIRTUAL06
    case 0xC02DDD: {
        Instruction step(cpu, 0xA5, 0x000007u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:932 STA addr
    // Macro caller: src/overworld/adjust_position_horizontal.asm:39 ASR8_INT @VIRTUAL06
    case 0xC02DDF: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:933 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/overworld/adjust_position_horizontal.asm:39 ASR8_INT @VIRTUAL06
    case 0xC02DE1: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:843 LDA src
    // Macro caller: src/overworld/adjust_position_horizontal.asm:39 ASR8_INT @VIRTUAL06
    case 0xC02DE3: {
        Instruction step(cpu, 0xA5, 0x000009u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:39 ASR8_INT @VIRTUAL06
    case 0xC02DE5: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/overworld/adjust_position_horizontal.asm:39 ASR8_INT @VIRTUAL06
    case 0xC02DE7: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:935 BPL :+
    // Macro caller: src/overworld/adjust_position_horizontal.asm:39 ASR8_INT @VIRTUAL06
    case 0xC02DE9: {
        Instruction step(cpu, 0x10, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:936 DEC addr + 3
    // Macro caller: src/overworld/adjust_position_horizontal.asm:39 ASR8_INT @VIRTUAL06
    case 0xC02DEB: {
        Instruction step(cpu, 0xC6, 0x000009u, 2u, AddressMode::DirectPage);
        step.decrement();
        return step.finish();
    }
    // include/macros.asm:938 REP #PROC_FLAGS::ACCUM8
    // Macro caller: src/overworld/adjust_position_horizontal.asm:39 ASR8_INT @VIRTUAL06
    case 0xC02DED: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_horizontal.asm:40 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC02DEF: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:40 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC02DF1: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:40 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC02DF3: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:40 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC02DF5: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_horizontal.asm:41 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC02DF7: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:41 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC02DF9: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:41 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC02DFB: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:41 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC02DFD: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/adjust_position_horizontal.asm:42 MOVE_INT_CONSTANT SHALLOW_WATER_SPEED, @VIRTUAL0A
    case 0xC02DFF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x008000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/adjust_position_horizontal.asm:42 MOVE_INT_CONSTANT SHALLOW_WATER_SPEED, @VIRTUAL0A
    // Overlapping static entry reached from 0xC02DFF.
    case 0xC02E01: {
        Instruction step(cpu, 0x80, 0x000085u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:42 MOVE_INT_CONSTANT SHALLOW_WATER_SPEED, @VIRTUAL0A
    case 0xC02E02: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/adjust_position_horizontal.asm:42 MOVE_INT_CONSTANT SHALLOW_WATER_SPEED, @VIRTUAL0A
    case 0xC02E04: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/adjust_position_horizontal.asm:42 MOVE_INT_CONSTANT SHALLOW_WATER_SPEED, @VIRTUAL0A
    // Overlapping static entry reached from 0xC02E04.
    case 0xC02E06: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:42 MOVE_INT_CONSTANT SHALLOW_WATER_SPEED, @VIRTUAL0A
    case 0xC02E07: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:43 JSL MULT32
    case 0xC02E09: {
        Instruction step(cpu, 0x22, 0xC09086u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_horizontal.asm:44 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC02E0D: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:44 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC02E0F: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:44 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC02E11: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:44 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC02E13: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_horizontal.asm:45 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC02E15: {
        Instruction step(cpu, 0xA5, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:45 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC02E17: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:45 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC02E19: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:45 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC02E1B: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:46 PHA
    case 0xC02E1D: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:47 LDA @VIRTUAL06
    case 0xC02E1E: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:48 PHA
    case 0xC02E20: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_horizontal.asm:49 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC02E21: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:49 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC02E23: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:49 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC02E25: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:49 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC02E27: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:931 LDA addr+1
    // Macro caller: src/overworld/adjust_position_horizontal.asm:50 ASR8_INT @VIRTUAL06
    case 0xC02E29: {
        Instruction step(cpu, 0xA5, 0x000007u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:932 STA addr
    // Macro caller: src/overworld/adjust_position_horizontal.asm:50 ASR8_INT @VIRTUAL06
    case 0xC02E2B: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:933 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/overworld/adjust_position_horizontal.asm:50 ASR8_INT @VIRTUAL06
    case 0xC02E2D: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:843 LDA src
    // Macro caller: src/overworld/adjust_position_horizontal.asm:50 ASR8_INT @VIRTUAL06
    case 0xC02E2F: {
        Instruction step(cpu, 0xA5, 0x000009u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:50 ASR8_INT @VIRTUAL06
    case 0xC02E31: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/overworld/adjust_position_horizontal.asm:50 ASR8_INT @VIRTUAL06
    case 0xC02E33: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:935 BPL :+
    // Macro caller: src/overworld/adjust_position_horizontal.asm:50 ASR8_INT @VIRTUAL06
    case 0xC02E35: {
        Instruction step(cpu, 0x10, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:936 DEC addr + 3
    // Macro caller: src/overworld/adjust_position_horizontal.asm:50 ASR8_INT @VIRTUAL06
    case 0xC02E37: {
        Instruction step(cpu, 0xC6, 0x000009u, 2u, AddressMode::DirectPage);
        step.decrement();
        return step.finish();
    }
    // include/macros.asm:938 REP #PROC_FLAGS::ACCUM8
    // Macro caller: src/overworld/adjust_position_horizontal.asm:50 ASR8_INT @VIRTUAL06
    case 0xC02E39: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:924 PLA
    // Macro caller: src/overworld/adjust_position_horizontal.asm:51 PULL32 @VIRTUAL0A
    case 0xC02E3B: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:925 STA val
    // Macro caller: src/overworld/adjust_position_horizontal.asm:51 PULL32 @VIRTUAL0A
    case 0xC02E3C: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:926 PLA
    // Macro caller: src/overworld/adjust_position_horizontal.asm:51 PULL32 @VIRTUAL0A
    case 0xC02E3E: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:927 STA val + 2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:51 PULL32 @VIRTUAL0A
    case 0xC02E3F: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:52 CLC
    case 0xC02E41: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // include/macros.asm:942 LDA val1
    // Macro caller: src/overworld/adjust_position_horizontal.asm:53 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC02E42: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:943 ADC val2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:53 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC02E44: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:944 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:53 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC02E46: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:53 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC02E48: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:53 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC02E4A: {
        Instruction step(cpu, 0x65, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:53 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC02E4C: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_horizontal.asm:54 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC02E4E: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:54 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC02E50: {
        Instruction step(cpu, 0x85, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:54 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC02E52: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:54 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC02E54: {
        Instruction step(cpu, 0x85, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:55 JMP @UNKNOWN14
    case 0xC02E56: {
        Instruction step(cpu, 0x4C, 0x003015u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:57 TYA
    case 0xC02E59: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:58 ASL
    case 0xC02E5A: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:59 ASL
    case 0xC02E5B: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:60 STA @VIRTUAL02
    case 0xC02E5C: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:61 LDA GAME_STATE+game_state::walking_style
    case 0xC02E5E: {
        Instruction step(cpu, 0xAD, 0x009883u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:62 ASL
    case 0xC02E61: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:63 ASL
    case 0xC02E62: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:64 ASL
    case 0xC02E63: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:65 ASL
    case 0xC02E64: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:66 ASL
    case 0xC02E65: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:67 CLC
    case 0xC02E66: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:68 ADC @VIRTUAL02
    case 0xC02E67: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:69 CLC
    case 0xC02E69: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:70 ADC #.LOWORD(HORIZONTAL_MOVEMENT_SPEEDS)
    case 0xC02E6A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000D6u : 0x004DD6u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:70 ADC #.LOWORD(HORIZONTAL_MOVEMENT_SPEEDS)
    // Overlapping static entry reached from 0xC02E6A.
    case 0xC02E6C: {
        Instruction step(cpu, 0x4D, 0x00B9A8u, 3u, AddressMode::Absolute);
        step.xor_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:71 TAY
    case 0xC02E6D: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/overworld/adjust_position_horizontal.asm:72 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC02E6E: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/overworld/adjust_position_horizontal.asm:72 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    // Overlapping static entry reached from 0xC02E6C.
    case 0xC02E6F: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1114 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:72 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC02E71: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/overworld/adjust_position_horizontal.asm:72 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC02E73: {
        Instruction step(cpu, 0xB9, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:72 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC02E76: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:931 LDA addr+1
    // Macro caller: src/overworld/adjust_position_horizontal.asm:73 ASR8_INT @VIRTUAL06
    case 0xC02E78: {
        Instruction step(cpu, 0xA5, 0x000007u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:932 STA addr
    // Macro caller: src/overworld/adjust_position_horizontal.asm:73 ASR8_INT @VIRTUAL06
    case 0xC02E7A: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:933 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/overworld/adjust_position_horizontal.asm:73 ASR8_INT @VIRTUAL06
    case 0xC02E7C: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:843 LDA src
    // Macro caller: src/overworld/adjust_position_horizontal.asm:73 ASR8_INT @VIRTUAL06
    case 0xC02E7E: {
        Instruction step(cpu, 0xA5, 0x000009u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:73 ASR8_INT @VIRTUAL06
    case 0xC02E80: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/overworld/adjust_position_horizontal.asm:73 ASR8_INT @VIRTUAL06
    case 0xC02E82: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:935 BPL :+
    // Macro caller: src/overworld/adjust_position_horizontal.asm:73 ASR8_INT @VIRTUAL06
    case 0xC02E84: {
        Instruction step(cpu, 0x10, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:936 DEC addr + 3
    // Macro caller: src/overworld/adjust_position_horizontal.asm:73 ASR8_INT @VIRTUAL06
    case 0xC02E86: {
        Instruction step(cpu, 0xC6, 0x000009u, 2u, AddressMode::DirectPage);
        step.decrement();
        return step.finish();
    }
    // include/macros.asm:938 REP #PROC_FLAGS::ACCUM8
    // Macro caller: src/overworld/adjust_position_horizontal.asm:73 ASR8_INT @VIRTUAL06
    case 0xC02E88: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_horizontal.asm:74 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC02E8A: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:74 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC02E8C: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:74 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC02E8E: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:74 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC02E90: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_horizontal.asm:75 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC02E92: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:75 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC02E94: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:75 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC02E96: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:75 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC02E98: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/adjust_position_horizontal.asm:76 MOVE_INT_CONSTANT DEEP_WATER_SPEED, @VIRTUAL0A
    case 0xC02E9A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Au : 0x00547Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/adjust_position_horizontal.asm:76 MOVE_INT_CONSTANT DEEP_WATER_SPEED, @VIRTUAL0A
    // Overlapping static entry reached from 0xC02E9A.
    case 0xC02E9C: {
        Instruction step(cpu, 0x54, 0x000A85u, 3u, AddressMode::BlockMove);
        step.move_byte_forward();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:76 MOVE_INT_CONSTANT DEEP_WATER_SPEED, @VIRTUAL0A
    case 0xC02E9D: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/adjust_position_horizontal.asm:76 MOVE_INT_CONSTANT DEEP_WATER_SPEED, @VIRTUAL0A
    case 0xC02E9F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/adjust_position_horizontal.asm:76 MOVE_INT_CONSTANT DEEP_WATER_SPEED, @VIRTUAL0A
    // Overlapping static entry reached from 0xC02E9F.
    case 0xC02EA1: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:76 MOVE_INT_CONSTANT DEEP_WATER_SPEED, @VIRTUAL0A
    case 0xC02EA2: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:77 JSL MULT32
    case 0xC02EA4: {
        Instruction step(cpu, 0x22, 0xC09086u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_horizontal.asm:78 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC02EA8: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:78 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC02EAA: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:78 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC02EAC: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:78 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC02EAE: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_horizontal.asm:79 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC02EB0: {
        Instruction step(cpu, 0xA5, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:79 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC02EB2: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:79 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC02EB4: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:79 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC02EB6: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:80 PHA
    case 0xC02EB8: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:81 LDA @VIRTUAL06
    case 0xC02EB9: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:82 PHA
    case 0xC02EBB: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_horizontal.asm:83 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC02EBC: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:83 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC02EBE: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:83 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC02EC0: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:83 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC02EC2: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:931 LDA addr+1
    // Macro caller: src/overworld/adjust_position_horizontal.asm:84 ASR8_INT @VIRTUAL06
    case 0xC02EC4: {
        Instruction step(cpu, 0xA5, 0x000007u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:932 STA addr
    // Macro caller: src/overworld/adjust_position_horizontal.asm:84 ASR8_INT @VIRTUAL06
    case 0xC02EC6: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:933 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/overworld/adjust_position_horizontal.asm:84 ASR8_INT @VIRTUAL06
    case 0xC02EC8: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:843 LDA src
    // Macro caller: src/overworld/adjust_position_horizontal.asm:84 ASR8_INT @VIRTUAL06
    case 0xC02ECA: {
        Instruction step(cpu, 0xA5, 0x000009u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:84 ASR8_INT @VIRTUAL06
    case 0xC02ECC: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/overworld/adjust_position_horizontal.asm:84 ASR8_INT @VIRTUAL06
    case 0xC02ECE: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:935 BPL :+
    // Macro caller: src/overworld/adjust_position_horizontal.asm:84 ASR8_INT @VIRTUAL06
    case 0xC02ED0: {
        Instruction step(cpu, 0x10, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:936 DEC addr + 3
    // Macro caller: src/overworld/adjust_position_horizontal.asm:84 ASR8_INT @VIRTUAL06
    case 0xC02ED2: {
        Instruction step(cpu, 0xC6, 0x000009u, 2u, AddressMode::DirectPage);
        step.decrement();
        return step.finish();
    }
    // include/macros.asm:938 REP #PROC_FLAGS::ACCUM8
    // Macro caller: src/overworld/adjust_position_horizontal.asm:84 ASR8_INT @VIRTUAL06
    case 0xC02ED4: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:924 PLA
    // Macro caller: src/overworld/adjust_position_horizontal.asm:85 PULL32 @VIRTUAL0A
    case 0xC02ED6: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:925 STA val
    // Macro caller: src/overworld/adjust_position_horizontal.asm:85 PULL32 @VIRTUAL0A
    case 0xC02ED7: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:926 PLA
    // Macro caller: src/overworld/adjust_position_horizontal.asm:85 PULL32 @VIRTUAL0A
    case 0xC02ED9: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:927 STA val + 2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:85 PULL32 @VIRTUAL0A
    case 0xC02EDA: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:86 CLC
    case 0xC02EDC: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // include/macros.asm:942 LDA val1
    // Macro caller: src/overworld/adjust_position_horizontal.asm:87 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC02EDD: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:943 ADC val2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:87 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC02EDF: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:944 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:87 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC02EE1: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:87 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC02EE3: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:87 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC02EE5: {
        Instruction step(cpu, 0x65, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:87 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC02EE7: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_horizontal.asm:88 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC02EE9: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:88 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC02EEB: {
        Instruction step(cpu, 0x85, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:88 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC02EED: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:88 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC02EEF: {
        Instruction step(cpu, 0x85, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:89 JMP @UNKNOWN14
    case 0xC02EF1: {
        Instruction step(cpu, 0x4C, 0x003015u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:91 LDA DEMO_FRAMES_LEFT
    case 0xC02EF4: {
        Instruction step(cpu, 0xAD, 0x000081u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:92 BEQ @UNKNOWN8
    case 0xC02EF7: {
        Instruction step(cpu, 0xF0, 0x000037u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:93 TYA
    case 0xC02EF9: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:94 ASL
    case 0xC02EFA: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:95 ASL
    case 0xC02EFB: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:96 STA @VIRTUAL02
    case 0xC02EFC: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:97 LDA GAME_STATE+game_state::walking_style
    case 0xC02EFE: {
        Instruction step(cpu, 0xAD, 0x009883u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:98 ASL
    case 0xC02F01: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:99 ASL
    case 0xC02F02: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:100 ASL
    case 0xC02F03: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:101 ASL
    case 0xC02F04: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:102 ASL
    case 0xC02F05: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:103 CLC
    case 0xC02F06: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:104 ADC @VIRTUAL02
    case 0xC02F07: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:105 CLC
    case 0xC02F09: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:106 ADC #.LOWORD(HORIZONTAL_MOVEMENT_SPEEDS)
    case 0xC02F0A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000D6u : 0x004DD6u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:106 ADC #.LOWORD(HORIZONTAL_MOVEMENT_SPEEDS)
    // Overlapping static entry reached from 0xC02F0A.
    case 0xC02F0C: {
        Instruction step(cpu, 0x4D, 0x00B9A8u, 3u, AddressMode::Absolute);
        step.xor_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:107 TAY
    case 0xC02F0D: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/overworld/adjust_position_horizontal.asm:108 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC02F0E: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/overworld/adjust_position_horizontal.asm:108 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    // Overlapping static entry reached from 0xC02F0C.
    case 0xC02F0F: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1114 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:108 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC02F11: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/overworld/adjust_position_horizontal.asm:108 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC02F13: {
        Instruction step(cpu, 0xB9, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:108 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC02F16: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:109 CLC
    case 0xC02F18: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // include/macros.asm:942 LDA val1
    // Macro caller: src/overworld/adjust_position_horizontal.asm:110 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC02F19: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:943 ADC val2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:110 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC02F1B: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:944 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:110 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC02F1D: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:110 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC02F1F: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:110 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC02F21: {
        Instruction step(cpu, 0x65, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:110 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC02F23: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_horizontal.asm:111 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC02F25: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:111 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC02F27: {
        Instruction step(cpu, 0x85, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:111 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC02F29: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:111 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC02F2B: {
        Instruction step(cpu, 0x85, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:112 JMP @UNKNOWN14
    case 0xC02F2D: {
        Instruction step(cpu, 0x4C, 0x003015u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:114 LDA GAME_STATE + game_state::party_status
    case 0xC02F30: {
        Instruction step(cpu, 0xAD, 0x009840u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:115 AND #$00FF
    case 0xC02F33: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:115 AND #$00FF
    // Overlapping static entry reached from 0xC02F33.
    case 0xC02F35: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:116 CMP #3
    case 0xC02F36: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:116 CMP #3
    // Overlapping static entry reached from 0xC02F36.
    case 0xC02F38: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/overworld/adjust_position_horizontal.asm:117 BNEL @UNKNOWN13
    case 0xC02F39: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:117 BNEL @UNKNOWN13
    case 0xC02F3B: {
        Instruction step(cpu, 0x4C, 0x002FE1u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:118 LDA GAME_STATE+game_state::walking_style
    case 0xC02F3E: {
        Instruction step(cpu, 0xAD, 0x009883u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:119 STA @LOCAL00
    case 0xC02F41: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/overworld/adjust_position_horizontal.asm:120 BNEL @UNKNOWN13
    case 0xC02F43: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:120 BNEL @UNKNOWN13
    case 0xC02F45: {
        Instruction step(cpu, 0x4C, 0x002FE1u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:121 TYA
    case 0xC02F48: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:122 ASL
    case 0xC02F49: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:123 ASL
    case 0xC02F4A: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:124 STA @VIRTUAL02
    case 0xC02F4B: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:125 LDA @LOCAL00
    case 0xC02F4D: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:126 ASL
    case 0xC02F4F: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:127 ASL
    case 0xC02F50: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:128 ASL
    case 0xC02F51: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:129 ASL
    case 0xC02F52: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:130 ASL
    case 0xC02F53: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:131 CLC
    case 0xC02F54: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:132 ADC @VIRTUAL02
    case 0xC02F55: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:133 CLC
    case 0xC02F57: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:134 ADC #.LOWORD(HORIZONTAL_MOVEMENT_SPEEDS)
    case 0xC02F58: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000D6u : 0x004DD6u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:134 ADC #.LOWORD(HORIZONTAL_MOVEMENT_SPEEDS)
    // Overlapping static entry reached from 0xC02F58.
    case 0xC02F5A: {
        Instruction step(cpu, 0x4D, 0x00B9A8u, 3u, AddressMode::Absolute);
        step.xor_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:135 TAY
    case 0xC02F5B: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/overworld/adjust_position_horizontal.asm:136 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC02F5C: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/overworld/adjust_position_horizontal.asm:136 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    // Overlapping static entry reached from 0xC02F5A.
    case 0xC02F5D: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1114 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:136 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC02F5F: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/overworld/adjust_position_horizontal.asm:136 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC02F61: {
        Instruction step(cpu, 0xB9, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:136 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC02F64: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:931 LDA addr+1
    // Macro caller: src/overworld/adjust_position_horizontal.asm:137 ASR8_INT @VIRTUAL06
    case 0xC02F66: {
        Instruction step(cpu, 0xA5, 0x000007u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:932 STA addr
    // Macro caller: src/overworld/adjust_position_horizontal.asm:137 ASR8_INT @VIRTUAL06
    case 0xC02F68: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:933 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/overworld/adjust_position_horizontal.asm:137 ASR8_INT @VIRTUAL06
    case 0xC02F6A: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:843 LDA src
    // Macro caller: src/overworld/adjust_position_horizontal.asm:137 ASR8_INT @VIRTUAL06
    case 0xC02F6C: {
        Instruction step(cpu, 0xA5, 0x000009u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:137 ASR8_INT @VIRTUAL06
    case 0xC02F6E: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/overworld/adjust_position_horizontal.asm:137 ASR8_INT @VIRTUAL06
    case 0xC02F70: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:935 BPL :+
    // Macro caller: src/overworld/adjust_position_horizontal.asm:137 ASR8_INT @VIRTUAL06
    case 0xC02F72: {
        Instruction step(cpu, 0x10, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:936 DEC addr + 3
    // Macro caller: src/overworld/adjust_position_horizontal.asm:137 ASR8_INT @VIRTUAL06
    case 0xC02F74: {
        Instruction step(cpu, 0xC6, 0x000009u, 2u, AddressMode::DirectPage);
        step.decrement();
        return step.finish();
    }
    // include/macros.asm:938 REP #PROC_FLAGS::ACCUM8
    // Macro caller: src/overworld/adjust_position_horizontal.asm:137 ASR8_INT @VIRTUAL06
    case 0xC02F76: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_horizontal.asm:138 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC02F78: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:138 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC02F7A: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:138 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC02F7C: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:138 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC02F7E: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_horizontal.asm:139 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC02F80: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:139 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC02F82: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:139 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC02F84: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:139 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC02F86: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/adjust_position_horizontal.asm:140 MOVE_INT_CONSTANT SKIP_SANDWICH_SPEED, @VIRTUAL0A
    case 0xC02F88: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x008000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/adjust_position_horizontal.asm:140 MOVE_INT_CONSTANT SKIP_SANDWICH_SPEED, @VIRTUAL0A
    // Overlapping static entry reached from 0xC02F88.
    case 0xC02F8A: {
        Instruction step(cpu, 0x80, 0x000085u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:140 MOVE_INT_CONSTANT SKIP_SANDWICH_SPEED, @VIRTUAL0A
    case 0xC02F8B: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/adjust_position_horizontal.asm:140 MOVE_INT_CONSTANT SKIP_SANDWICH_SPEED, @VIRTUAL0A
    case 0xC02F8D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/adjust_position_horizontal.asm:140 MOVE_INT_CONSTANT SKIP_SANDWICH_SPEED, @VIRTUAL0A
    // Overlapping static entry reached from 0xC02F8D.
    case 0xC02F8F: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:140 MOVE_INT_CONSTANT SKIP_SANDWICH_SPEED, @VIRTUAL0A
    case 0xC02F90: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:141 JSL MULT32
    case 0xC02F92: {
        Instruction step(cpu, 0x22, 0xC09086u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_horizontal.asm:142 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC02F96: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:142 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC02F98: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:142 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC02F9A: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:142 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC02F9C: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_horizontal.asm:143 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC02F9E: {
        Instruction step(cpu, 0xA5, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:143 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC02FA0: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:143 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC02FA2: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:143 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC02FA4: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:144 PHA
    case 0xC02FA6: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:145 LDA @VIRTUAL06
    case 0xC02FA7: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:146 PHA
    case 0xC02FA9: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_horizontal.asm:147 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC02FAA: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:147 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC02FAC: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:147 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC02FAE: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:147 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC02FB0: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:931 LDA addr+1
    // Macro caller: src/overworld/adjust_position_horizontal.asm:148 ASR8_INT @VIRTUAL06
    case 0xC02FB2: {
        Instruction step(cpu, 0xA5, 0x000007u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:932 STA addr
    // Macro caller: src/overworld/adjust_position_horizontal.asm:148 ASR8_INT @VIRTUAL06
    case 0xC02FB4: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:933 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/overworld/adjust_position_horizontal.asm:148 ASR8_INT @VIRTUAL06
    case 0xC02FB6: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:843 LDA src
    // Macro caller: src/overworld/adjust_position_horizontal.asm:148 ASR8_INT @VIRTUAL06
    case 0xC02FB8: {
        Instruction step(cpu, 0xA5, 0x000009u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:148 ASR8_INT @VIRTUAL06
    case 0xC02FBA: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/overworld/adjust_position_horizontal.asm:148 ASR8_INT @VIRTUAL06
    case 0xC02FBC: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:935 BPL :+
    // Macro caller: src/overworld/adjust_position_horizontal.asm:148 ASR8_INT @VIRTUAL06
    case 0xC02FBE: {
        Instruction step(cpu, 0x10, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:936 DEC addr + 3
    // Macro caller: src/overworld/adjust_position_horizontal.asm:148 ASR8_INT @VIRTUAL06
    case 0xC02FC0: {
        Instruction step(cpu, 0xC6, 0x000009u, 2u, AddressMode::DirectPage);
        step.decrement();
        return step.finish();
    }
    // include/macros.asm:938 REP #PROC_FLAGS::ACCUM8
    // Macro caller: src/overworld/adjust_position_horizontal.asm:148 ASR8_INT @VIRTUAL06
    case 0xC02FC2: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:924 PLA
    // Macro caller: src/overworld/adjust_position_horizontal.asm:149 PULL32 @VIRTUAL0A
    case 0xC02FC4: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:925 STA val
    // Macro caller: src/overworld/adjust_position_horizontal.asm:149 PULL32 @VIRTUAL0A
    case 0xC02FC5: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:926 PLA
    // Macro caller: src/overworld/adjust_position_horizontal.asm:149 PULL32 @VIRTUAL0A
    case 0xC02FC7: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:927 STA val + 2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:149 PULL32 @VIRTUAL0A
    case 0xC02FC8: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:150 CLC
    case 0xC02FCA: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // include/macros.asm:942 LDA val1
    // Macro caller: src/overworld/adjust_position_horizontal.asm:151 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC02FCB: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:943 ADC val2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:151 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC02FCD: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:944 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:151 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC02FCF: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:151 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC02FD1: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:151 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC02FD3: {
        Instruction step(cpu, 0x65, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:151 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC02FD5: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_horizontal.asm:152 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC02FD7: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:152 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC02FD9: {
        Instruction step(cpu, 0x85, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:152 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC02FDB: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:152 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC02FDD: {
        Instruction step(cpu, 0x85, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:153 BRA @UNKNOWN14
    case 0xC02FDF: {
        Instruction step(cpu, 0x80, 0x000034u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:155 TYA
    case 0xC02FE1: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:156 ASL
    case 0xC02FE2: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:157 ASL
    case 0xC02FE3: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:158 STA @VIRTUAL02
    case 0xC02FE4: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:159 LDA GAME_STATE+game_state::walking_style
    case 0xC02FE6: {
        Instruction step(cpu, 0xAD, 0x009883u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:160 ASL
    case 0xC02FE9: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:161 ASL
    case 0xC02FEA: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:162 ASL
    case 0xC02FEB: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:163 ASL
    case 0xC02FEC: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:164 ASL
    case 0xC02FED: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:165 CLC
    case 0xC02FEE: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:166 ADC @VIRTUAL02
    case 0xC02FEF: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:167 CLC
    case 0xC02FF1: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:168 ADC #.LOWORD(HORIZONTAL_MOVEMENT_SPEEDS)
    case 0xC02FF2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000D6u : 0x004DD6u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:168 ADC #.LOWORD(HORIZONTAL_MOVEMENT_SPEEDS)
    // Overlapping static entry reached from 0xC02FF2.
    case 0xC02FF4: {
        Instruction step(cpu, 0x4D, 0x00B9A8u, 3u, AddressMode::Absolute);
        step.xor_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:169 TAY
    case 0xC02FF5: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/overworld/adjust_position_horizontal.asm:170 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC02FF6: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/overworld/adjust_position_horizontal.asm:170 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    // Overlapping static entry reached from 0xC02FF4.
    case 0xC02FF7: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1114 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:170 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC02FF9: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/overworld/adjust_position_horizontal.asm:170 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC02FFB: {
        Instruction step(cpu, 0xB9, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:170 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC02FFE: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:171 CLC
    case 0xC03000: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // include/macros.asm:942 LDA val1
    // Macro caller: src/overworld/adjust_position_horizontal.asm:172 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC03001: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:943 ADC val2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:172 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC03003: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:944 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:172 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC03005: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:172 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC03007: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:172 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC03009: {
        Instruction step(cpu, 0x65, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:172 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0300B: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_horizontal.asm:173 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC0300D: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:173 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC0300F: {
        Instruction step(cpu, 0x85, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:173 MOVE_INT @VIRTUAL06, @RETURNVAL
    // Overlapping static entry reached from 0xC03089.
    case 0xC03010: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:173 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC03011: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:173 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC03013: {
        Instruction step(cpu, 0x85, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/adjust_position_horizontal.asm:175 END_C_FUNCTION
    case 0xC03015: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/overworld/adjust_position_horizontal.asm:175 END_C_FUNCTION
    case 0xC03016: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
