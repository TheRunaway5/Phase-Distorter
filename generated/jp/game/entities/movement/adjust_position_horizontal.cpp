// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/overworld/adjust_position_horizontal.asm
bool resume_overworld_adjust_position_horizontal(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/adjust_position_horizontal.asm:3 BEGIN_C_FUNCTION
    case 0xC02F6A: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/adjust_position_horizontal.asm:11 END_STACK_VARS
    case 0xC02F6C: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/adjust_position_horizontal.asm:11 END_STACK_VARS
    case 0xC02F6D: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/adjust_position_horizontal.asm:11 END_STACK_VARS
    case 0xC02F6E: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/adjust_position_horizontal.asm:11 END_STACK_VARS
    case 0xC02F6F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000ECu : 0x00FFECu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/adjust_position_horizontal.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC02F6F.
    case 0xC02F71: {
        Instruction step(cpu, 0xFF, 0xA8685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/adjust_position_horizontal.asm:11 END_STACK_VARS
    case 0xC02F72: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/adjust_position_horizontal.asm:11 END_STACK_VARS
    case 0xC02F73: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:12 TAY
    case 0xC02F74: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_horizontal.asm:13 MOVE_INT @PARAM02, @VIRTUAL06
    case 0xC02F75: {
        Instruction step(cpu, 0xA5, 0x000022u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:13 MOVE_INT @PARAM02, @VIRTUAL06
    case 0xC02F77: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:13 MOVE_INT @PARAM02, @VIRTUAL06
    case 0xC02F79: {
        Instruction step(cpu, 0xA5, 0x000024u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:13 MOVE_INT @PARAM02, @VIRTUAL06
    case 0xC02F7B: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_horizontal.asm:14 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC02F7D: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:14 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC02F7F: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:14 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC02F81: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:14 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC02F83: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:15 TXA
    case 0xC02F85: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:16 AND #SURFACE_FLAGS::DEEP_WATER
    case 0xC02F86: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x00000Cu : 0x00000Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:16 AND #SURFACE_FLAGS::DEEP_WATER
    // Overlapping static entry reached from 0xC02F86.
    case 0xC02F88: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:17 CMP #SURFACE_FLAGS::SHALLOW_WATER
    case 0xC02F89: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:17 CMP #SURFACE_FLAGS::SHALLOW_WATER
    // Overlapping static entry reached from 0xC02F89.
    case 0xC02F8B: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:18 BEQ @IN_SHALLOW_WATER
    case 0xC02F8C: {
        Instruction step(cpu, 0xF0, 0x00000Bu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:19 CMP #SURFACE_FLAGS::DEEP_WATER
    case 0xC02F8E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00000Cu : 0x00000Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:19 CMP #SURFACE_FLAGS::DEEP_WATER
    // Overlapping static entry reached from 0xC02F8E.
    case 0xC02F90: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/adjust_position_horizontal.asm:20 BEQL @IN_DEEP_WATER
    case 0xC02F91: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:20 BEQL @IN_DEEP_WATER
    case 0xC02F93: {
        Instruction step(cpu, 0x4C, 0x003034u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:21 JMP @NOT_IN_WATER
    case 0xC02F96: {
        Instruction step(cpu, 0x4C, 0x0030CFu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:23 TYA
    case 0xC02F99: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:24 ASL
    case 0xC02F9A: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:25 ASL
    case 0xC02F9B: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:26 STA @VIRTUAL02
    case 0xC02F9C: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:27 LDA GAME_STATE+game_state::walking_style
    case 0xC02F9E: {
        Instruction step(cpu, 0xAD, 0x009B34u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:28 ASL
    case 0xC02FA1: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:29 ASL
    case 0xC02FA2: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:30 ASL
    case 0xC02FA3: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:31 ASL
    case 0xC02FA4: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:32 ASL
    case 0xC02FA5: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:33 CLC
    case 0xC02FA6: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:34 ADC @VIRTUAL02
    case 0xC02FA7: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:35 CLC
    case 0xC02FA9: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:36 ADC #.LOWORD(HORIZONTAL_MOVEMENT_SPEEDS)
    case 0xC02FAA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00005Cu : 0x00515Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:36 ADC #.LOWORD(HORIZONTAL_MOVEMENT_SPEEDS)
    // Overlapping static entry reached from 0xC02FAA.
    case 0xC02FAC: {
        Instruction step(cpu, 0x51, 0x0000A8u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.xor_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:37 TAY
    case 0xC02FAD: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/overworld/adjust_position_horizontal.asm:38 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC02FAE: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1114 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:38 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC02FB1: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/overworld/adjust_position_horizontal.asm:38 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC02FB3: {
        Instruction step(cpu, 0xB9, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:38 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC02FB6: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:931 LDA addr+1
    // Macro caller: src/overworld/adjust_position_horizontal.asm:39 ASR8_INT @VIRTUAL06
    case 0xC02FB8: {
        Instruction step(cpu, 0xA5, 0x000007u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:932 STA addr
    // Macro caller: src/overworld/adjust_position_horizontal.asm:39 ASR8_INT @VIRTUAL06
    case 0xC02FBA: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:933 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/overworld/adjust_position_horizontal.asm:39 ASR8_INT @VIRTUAL06
    case 0xC02FBC: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:843 LDA src
    // Macro caller: src/overworld/adjust_position_horizontal.asm:39 ASR8_INT @VIRTUAL06
    case 0xC02FBE: {
        Instruction step(cpu, 0xA5, 0x000009u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:39 ASR8_INT @VIRTUAL06
    case 0xC02FC0: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/overworld/adjust_position_horizontal.asm:39 ASR8_INT @VIRTUAL06
    case 0xC02FC2: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:935 BPL :+
    // Macro caller: src/overworld/adjust_position_horizontal.asm:39 ASR8_INT @VIRTUAL06
    case 0xC02FC4: {
        Instruction step(cpu, 0x10, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:936 DEC addr + 3
    // Macro caller: src/overworld/adjust_position_horizontal.asm:39 ASR8_INT @VIRTUAL06
    case 0xC02FC6: {
        Instruction step(cpu, 0xC6, 0x000009u, 2u, AddressMode::DirectPage);
        step.decrement();
        return step.finish();
    }
    // include/macros.asm:938 REP #PROC_FLAGS::ACCUM8
    // Macro caller: src/overworld/adjust_position_horizontal.asm:39 ASR8_INT @VIRTUAL06
    case 0xC02FC8: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_horizontal.asm:40 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC02FCA: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:40 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC02FCC: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:40 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC02FCE: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:40 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC02FD0: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_horizontal.asm:41 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC02FD2: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:41 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC02FD4: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:41 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC02FD6: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:41 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC02FD8: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/adjust_position_horizontal.asm:42 MOVE_INT_CONSTANT SHALLOW_WATER_SPEED, @VIRTUAL0A
    case 0xC02FDA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x008000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/adjust_position_horizontal.asm:42 MOVE_INT_CONSTANT SHALLOW_WATER_SPEED, @VIRTUAL0A
    // Overlapping static entry reached from 0xC02FDA.
    case 0xC02FDC: {
        Instruction step(cpu, 0x80, 0x000085u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:42 MOVE_INT_CONSTANT SHALLOW_WATER_SPEED, @VIRTUAL0A
    case 0xC02FDD: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/adjust_position_horizontal.asm:42 MOVE_INT_CONSTANT SHALLOW_WATER_SPEED, @VIRTUAL0A
    case 0xC02FDF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/adjust_position_horizontal.asm:42 MOVE_INT_CONSTANT SHALLOW_WATER_SPEED, @VIRTUAL0A
    // Overlapping static entry reached from 0xC02FDF.
    case 0xC02FE1: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:42 MOVE_INT_CONSTANT SHALLOW_WATER_SPEED, @VIRTUAL0A
    case 0xC02FE2: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:43 JSL MULT32
    case 0xC02FE4: {
        Instruction step(cpu, 0x22, 0xC09068u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_horizontal.asm:44 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC02FE8: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:44 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC02FEA: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:44 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC02FEC: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:44 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC02FEE: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_horizontal.asm:45 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC02FF0: {
        Instruction step(cpu, 0xA5, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:45 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC02FF2: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:45 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC02FF4: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:45 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC02FF6: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:46 PHA
    case 0xC02FF8: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:47 LDA @VIRTUAL06
    case 0xC02FF9: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:48 PHA
    case 0xC02FFB: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_horizontal.asm:49 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC02FFC: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:49 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC02FFE: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:49 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC03000: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:49 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC03002: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:931 LDA addr+1
    // Macro caller: src/overworld/adjust_position_horizontal.asm:50 ASR8_INT @VIRTUAL06
    case 0xC03004: {
        Instruction step(cpu, 0xA5, 0x000007u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:932 STA addr
    // Macro caller: src/overworld/adjust_position_horizontal.asm:50 ASR8_INT @VIRTUAL06
    case 0xC03006: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:933 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/overworld/adjust_position_horizontal.asm:50 ASR8_INT @VIRTUAL06
    case 0xC03008: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:843 LDA src
    // Macro caller: src/overworld/adjust_position_horizontal.asm:50 ASR8_INT @VIRTUAL06
    case 0xC0300A: {
        Instruction step(cpu, 0xA5, 0x000009u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:50 ASR8_INT @VIRTUAL06
    case 0xC0300C: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/overworld/adjust_position_horizontal.asm:50 ASR8_INT @VIRTUAL06
    case 0xC0300E: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:935 BPL :+
    // Macro caller: src/overworld/adjust_position_horizontal.asm:50 ASR8_INT @VIRTUAL06
    case 0xC03010: {
        Instruction step(cpu, 0x10, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:936 DEC addr + 3
    // Macro caller: src/overworld/adjust_position_horizontal.asm:50 ASR8_INT @VIRTUAL06
    case 0xC03012: {
        Instruction step(cpu, 0xC6, 0x000009u, 2u, AddressMode::DirectPage);
        step.decrement();
        return step.finish();
    }
    // include/macros.asm:938 REP #PROC_FLAGS::ACCUM8
    // Macro caller: src/overworld/adjust_position_horizontal.asm:50 ASR8_INT @VIRTUAL06
    case 0xC03014: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:924 PLA
    // Macro caller: src/overworld/adjust_position_horizontal.asm:51 PULL32 @VIRTUAL0A
    case 0xC03016: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:925 STA val
    // Macro caller: src/overworld/adjust_position_horizontal.asm:51 PULL32 @VIRTUAL0A
    case 0xC03017: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:926 PLA
    // Macro caller: src/overworld/adjust_position_horizontal.asm:51 PULL32 @VIRTUAL0A
    case 0xC03019: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:927 STA val + 2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:51 PULL32 @VIRTUAL0A
    case 0xC0301A: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:52 CLC
    case 0xC0301C: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // include/macros.asm:942 LDA val1
    // Macro caller: src/overworld/adjust_position_horizontal.asm:53 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0301D: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:943 ADC val2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:53 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0301F: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:944 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:53 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC03021: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:53 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC03023: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:53 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC03025: {
        Instruction step(cpu, 0x65, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:53 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC03027: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_horizontal.asm:54 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC03029: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:54 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC0302B: {
        Instruction step(cpu, 0x85, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:54 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC0302D: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:54 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC0302F: {
        Instruction step(cpu, 0x85, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:55 JMP @UNKNOWN14
    case 0xC03031: {
        Instruction step(cpu, 0x4C, 0x0031F0u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:57 TYA
    case 0xC03034: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:58 ASL
    case 0xC03035: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:59 ASL
    case 0xC03036: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:60 STA @VIRTUAL02
    case 0xC03037: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:61 LDA GAME_STATE+game_state::walking_style
    case 0xC03039: {
        Instruction step(cpu, 0xAD, 0x009B34u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:62 ASL
    case 0xC0303C: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:63 ASL
    case 0xC0303D: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:64 ASL
    case 0xC0303E: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:65 ASL
    case 0xC0303F: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:66 ASL
    case 0xC03040: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:67 CLC
    case 0xC03041: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:68 ADC @VIRTUAL02
    case 0xC03042: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:69 CLC
    case 0xC03044: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:70 ADC #.LOWORD(HORIZONTAL_MOVEMENT_SPEEDS)
    case 0xC03045: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00005Cu : 0x00515Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:70 ADC #.LOWORD(HORIZONTAL_MOVEMENT_SPEEDS)
    // Overlapping static entry reached from 0xC03045.
    case 0xC03047: {
        Instruction step(cpu, 0x51, 0x0000A8u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.xor_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:71 TAY
    case 0xC03048: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/overworld/adjust_position_horizontal.asm:72 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC03049: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1114 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:72 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC0304C: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/overworld/adjust_position_horizontal.asm:72 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC0304E: {
        Instruction step(cpu, 0xB9, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:72 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC03051: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:931 LDA addr+1
    // Macro caller: src/overworld/adjust_position_horizontal.asm:73 ASR8_INT @VIRTUAL06
    case 0xC03053: {
        Instruction step(cpu, 0xA5, 0x000007u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:932 STA addr
    // Macro caller: src/overworld/adjust_position_horizontal.asm:73 ASR8_INT @VIRTUAL06
    case 0xC03055: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:933 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/overworld/adjust_position_horizontal.asm:73 ASR8_INT @VIRTUAL06
    case 0xC03057: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:843 LDA src
    // Macro caller: src/overworld/adjust_position_horizontal.asm:73 ASR8_INT @VIRTUAL06
    case 0xC03059: {
        Instruction step(cpu, 0xA5, 0x000009u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:73 ASR8_INT @VIRTUAL06
    case 0xC0305B: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/overworld/adjust_position_horizontal.asm:73 ASR8_INT @VIRTUAL06
    case 0xC0305D: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:935 BPL :+
    // Macro caller: src/overworld/adjust_position_horizontal.asm:73 ASR8_INT @VIRTUAL06
    case 0xC0305F: {
        Instruction step(cpu, 0x10, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:936 DEC addr + 3
    // Macro caller: src/overworld/adjust_position_horizontal.asm:73 ASR8_INT @VIRTUAL06
    case 0xC03061: {
        Instruction step(cpu, 0xC6, 0x000009u, 2u, AddressMode::DirectPage);
        step.decrement();
        return step.finish();
    }
    // include/macros.asm:938 REP #PROC_FLAGS::ACCUM8
    // Macro caller: src/overworld/adjust_position_horizontal.asm:73 ASR8_INT @VIRTUAL06
    case 0xC03063: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_horizontal.asm:74 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC03065: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:74 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC03067: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:74 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC03069: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:74 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC0306B: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_horizontal.asm:75 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC0306D: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:75 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC0306F: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:75 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC03071: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:75 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC03073: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/adjust_position_horizontal.asm:76 MOVE_INT_CONSTANT DEEP_WATER_SPEED, @VIRTUAL0A
    case 0xC03075: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Au : 0x00547Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/adjust_position_horizontal.asm:76 MOVE_INT_CONSTANT DEEP_WATER_SPEED, @VIRTUAL0A
    // Overlapping static entry reached from 0xC03075.
    case 0xC03077: {
        Instruction step(cpu, 0x54, 0x000A85u, 3u, AddressMode::BlockMove);
        step.move_byte_forward();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:76 MOVE_INT_CONSTANT DEEP_WATER_SPEED, @VIRTUAL0A
    case 0xC03078: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/adjust_position_horizontal.asm:76 MOVE_INT_CONSTANT DEEP_WATER_SPEED, @VIRTUAL0A
    case 0xC0307A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/adjust_position_horizontal.asm:76 MOVE_INT_CONSTANT DEEP_WATER_SPEED, @VIRTUAL0A
    // Overlapping static entry reached from 0xC0307A.
    case 0xC0307C: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:76 MOVE_INT_CONSTANT DEEP_WATER_SPEED, @VIRTUAL0A
    case 0xC0307D: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:77 JSL MULT32
    case 0xC0307F: {
        Instruction step(cpu, 0x22, 0xC09068u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_horizontal.asm:78 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC03083: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:78 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC03085: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:78 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC03087: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:78 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC03089: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_horizontal.asm:79 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC0308B: {
        Instruction step(cpu, 0xA5, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:79 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC0308D: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:79 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC0308F: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:79 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC03091: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:80 PHA
    case 0xC03093: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:81 LDA @VIRTUAL06
    case 0xC03094: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:82 PHA
    case 0xC03096: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_horizontal.asm:83 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC03097: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:83 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC03099: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:83 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC0309B: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:83 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC0309D: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:931 LDA addr+1
    // Macro caller: src/overworld/adjust_position_horizontal.asm:84 ASR8_INT @VIRTUAL06
    case 0xC0309F: {
        Instruction step(cpu, 0xA5, 0x000007u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:932 STA addr
    // Macro caller: src/overworld/adjust_position_horizontal.asm:84 ASR8_INT @VIRTUAL06
    case 0xC030A1: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:933 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/overworld/adjust_position_horizontal.asm:84 ASR8_INT @VIRTUAL06
    case 0xC030A3: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:843 LDA src
    // Macro caller: src/overworld/adjust_position_horizontal.asm:84 ASR8_INT @VIRTUAL06
    case 0xC030A5: {
        Instruction step(cpu, 0xA5, 0x000009u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:84 ASR8_INT @VIRTUAL06
    case 0xC030A7: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/overworld/adjust_position_horizontal.asm:84 ASR8_INT @VIRTUAL06
    case 0xC030A9: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:935 BPL :+
    // Macro caller: src/overworld/adjust_position_horizontal.asm:84 ASR8_INT @VIRTUAL06
    case 0xC030AB: {
        Instruction step(cpu, 0x10, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:936 DEC addr + 3
    // Macro caller: src/overworld/adjust_position_horizontal.asm:84 ASR8_INT @VIRTUAL06
    case 0xC030AD: {
        Instruction step(cpu, 0xC6, 0x000009u, 2u, AddressMode::DirectPage);
        step.decrement();
        return step.finish();
    }
    // include/macros.asm:938 REP #PROC_FLAGS::ACCUM8
    // Macro caller: src/overworld/adjust_position_horizontal.asm:84 ASR8_INT @VIRTUAL06
    case 0xC030AF: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:924 PLA
    // Macro caller: src/overworld/adjust_position_horizontal.asm:85 PULL32 @VIRTUAL0A
    case 0xC030B1: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:925 STA val
    // Macro caller: src/overworld/adjust_position_horizontal.asm:85 PULL32 @VIRTUAL0A
    case 0xC030B2: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:926 PLA
    // Macro caller: src/overworld/adjust_position_horizontal.asm:85 PULL32 @VIRTUAL0A
    case 0xC030B4: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:927 STA val + 2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:85 PULL32 @VIRTUAL0A
    case 0xC030B5: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:86 CLC
    case 0xC030B7: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // include/macros.asm:942 LDA val1
    // Macro caller: src/overworld/adjust_position_horizontal.asm:87 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC030B8: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:943 ADC val2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:87 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC030BA: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:944 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:87 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC030BC: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:87 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC030BE: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:87 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC030C0: {
        Instruction step(cpu, 0x65, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:87 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC030C2: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_horizontal.asm:88 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC030C4: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:88 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC030C6: {
        Instruction step(cpu, 0x85, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:88 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC030C8: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:88 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC030CA: {
        Instruction step(cpu, 0x85, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:89 JMP @UNKNOWN14
    case 0xC030CC: {
        Instruction step(cpu, 0x4C, 0x0031F0u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:91 LDA DEMO_FRAMES_LEFT
    case 0xC030CF: {
        Instruction step(cpu, 0xAD, 0x000081u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:92 BEQ @UNKNOWN8
    case 0xC030D2: {
        Instruction step(cpu, 0xF0, 0x000037u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:93 TYA
    case 0xC030D4: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:94 ASL
    case 0xC030D5: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:95 ASL
    case 0xC030D6: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:96 STA @VIRTUAL02
    case 0xC030D7: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:97 LDA GAME_STATE+game_state::walking_style
    case 0xC030D9: {
        Instruction step(cpu, 0xAD, 0x009B34u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:98 ASL
    case 0xC030DC: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:99 ASL
    case 0xC030DD: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:100 ASL
    case 0xC030DE: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:101 ASL
    case 0xC030DF: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:102 ASL
    case 0xC030E0: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:103 CLC
    case 0xC030E1: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:104 ADC @VIRTUAL02
    case 0xC030E2: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:105 CLC
    case 0xC030E4: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:106 ADC #.LOWORD(HORIZONTAL_MOVEMENT_SPEEDS)
    case 0xC030E5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00005Cu : 0x00515Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:106 ADC #.LOWORD(HORIZONTAL_MOVEMENT_SPEEDS)
    // Overlapping static entry reached from 0xC030E5.
    case 0xC030E7: {
        Instruction step(cpu, 0x51, 0x0000A8u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.xor_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:107 TAY
    case 0xC030E8: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/overworld/adjust_position_horizontal.asm:108 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC030E9: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1114 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:108 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC030EC: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/overworld/adjust_position_horizontal.asm:108 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC030EE: {
        Instruction step(cpu, 0xB9, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:108 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC030F1: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:109 CLC
    case 0xC030F3: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // include/macros.asm:942 LDA val1
    // Macro caller: src/overworld/adjust_position_horizontal.asm:110 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC030F4: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:943 ADC val2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:110 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC030F6: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:944 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:110 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC030F8: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:110 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC030FA: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:110 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC030FC: {
        Instruction step(cpu, 0x65, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:110 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC030FE: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_horizontal.asm:111 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC03100: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:111 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC03102: {
        Instruction step(cpu, 0x85, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:111 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC03104: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:111 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC03106: {
        Instruction step(cpu, 0x85, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:112 JMP @UNKNOWN14
    case 0xC03108: {
        Instruction step(cpu, 0x4C, 0x0031F0u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:114 LDA GAME_STATE + game_state::party_status
    case 0xC0310B: {
        Instruction step(cpu, 0xAD, 0x009AF1u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:115 AND #$00FF
    case 0xC0310E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:115 AND #$00FF
    // Overlapping static entry reached from 0xC0310E.
    case 0xC03110: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:116 CMP #3
    case 0xC03111: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:116 CMP #3
    // Overlapping static entry reached from 0xC03111.
    case 0xC03113: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/overworld/adjust_position_horizontal.asm:117 BNEL @UNKNOWN13
    case 0xC03114: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:117 BNEL @UNKNOWN13
    case 0xC03116: {
        Instruction step(cpu, 0x4C, 0x0031BCu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:118 LDA GAME_STATE+game_state::walking_style
    case 0xC03119: {
        Instruction step(cpu, 0xAD, 0x009B34u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:119 STA @LOCAL00
    case 0xC0311C: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/overworld/adjust_position_horizontal.asm:120 BNEL @UNKNOWN13
    case 0xC0311E: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:120 BNEL @UNKNOWN13
    case 0xC03120: {
        Instruction step(cpu, 0x4C, 0x0031BCu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:121 TYA
    case 0xC03123: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:122 ASL
    case 0xC03124: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:123 ASL
    case 0xC03125: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:124 STA @VIRTUAL02
    case 0xC03126: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:125 LDA @LOCAL00
    case 0xC03128: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:126 ASL
    case 0xC0312A: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:127 ASL
    case 0xC0312B: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:128 ASL
    case 0xC0312C: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:129 ASL
    case 0xC0312D: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:130 ASL
    case 0xC0312E: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:131 CLC
    case 0xC0312F: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:132 ADC @VIRTUAL02
    case 0xC03130: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:133 CLC
    case 0xC03132: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:134 ADC #.LOWORD(HORIZONTAL_MOVEMENT_SPEEDS)
    case 0xC03133: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00005Cu : 0x00515Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:134 ADC #.LOWORD(HORIZONTAL_MOVEMENT_SPEEDS)
    // Overlapping static entry reached from 0xC03133.
    case 0xC03135: {
        Instruction step(cpu, 0x51, 0x0000A8u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.xor_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:135 TAY
    case 0xC03136: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/overworld/adjust_position_horizontal.asm:136 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC03137: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1114 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:136 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC0313A: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/overworld/adjust_position_horizontal.asm:136 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC0313C: {
        Instruction step(cpu, 0xB9, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:136 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC0313F: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:931 LDA addr+1
    // Macro caller: src/overworld/adjust_position_horizontal.asm:137 ASR8_INT @VIRTUAL06
    case 0xC03141: {
        Instruction step(cpu, 0xA5, 0x000007u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:932 STA addr
    // Macro caller: src/overworld/adjust_position_horizontal.asm:137 ASR8_INT @VIRTUAL06
    case 0xC03143: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:933 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/overworld/adjust_position_horizontal.asm:137 ASR8_INT @VIRTUAL06
    case 0xC03145: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:843 LDA src
    // Macro caller: src/overworld/adjust_position_horizontal.asm:137 ASR8_INT @VIRTUAL06
    case 0xC03147: {
        Instruction step(cpu, 0xA5, 0x000009u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:137 ASR8_INT @VIRTUAL06
    case 0xC03149: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/overworld/adjust_position_horizontal.asm:137 ASR8_INT @VIRTUAL06
    case 0xC0314B: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:935 BPL :+
    // Macro caller: src/overworld/adjust_position_horizontal.asm:137 ASR8_INT @VIRTUAL06
    case 0xC0314D: {
        Instruction step(cpu, 0x10, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:936 DEC addr + 3
    // Macro caller: src/overworld/adjust_position_horizontal.asm:137 ASR8_INT @VIRTUAL06
    case 0xC0314F: {
        Instruction step(cpu, 0xC6, 0x000009u, 2u, AddressMode::DirectPage);
        step.decrement();
        return step.finish();
    }
    // include/macros.asm:938 REP #PROC_FLAGS::ACCUM8
    // Macro caller: src/overworld/adjust_position_horizontal.asm:137 ASR8_INT @VIRTUAL06
    case 0xC03151: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_horizontal.asm:138 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC03153: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:138 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC03155: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:138 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC03157: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:138 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC03159: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_horizontal.asm:139 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC0315B: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:139 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC0315D: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:139 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC0315F: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:139 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC03161: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/adjust_position_horizontal.asm:140 MOVE_INT_CONSTANT SKIP_SANDWICH_SPEED, @VIRTUAL0A
    case 0xC03163: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x008000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/adjust_position_horizontal.asm:140 MOVE_INT_CONSTANT SKIP_SANDWICH_SPEED, @VIRTUAL0A
    // Overlapping static entry reached from 0xC03163.
    case 0xC03165: {
        Instruction step(cpu, 0x80, 0x000085u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:140 MOVE_INT_CONSTANT SKIP_SANDWICH_SPEED, @VIRTUAL0A
    case 0xC03166: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/adjust_position_horizontal.asm:140 MOVE_INT_CONSTANT SKIP_SANDWICH_SPEED, @VIRTUAL0A
    case 0xC03168: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/adjust_position_horizontal.asm:140 MOVE_INT_CONSTANT SKIP_SANDWICH_SPEED, @VIRTUAL0A
    // Overlapping static entry reached from 0xC03168.
    case 0xC0316A: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:140 MOVE_INT_CONSTANT SKIP_SANDWICH_SPEED, @VIRTUAL0A
    case 0xC0316B: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:141 JSL MULT32
    case 0xC0316D: {
        Instruction step(cpu, 0x22, 0xC09068u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_horizontal.asm:142 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC03171: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:142 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC03173: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:142 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC03175: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:142 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC03177: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_horizontal.asm:143 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC03179: {
        Instruction step(cpu, 0xA5, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:143 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC0317B: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:143 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC0317D: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:143 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC0317F: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:144 PHA
    case 0xC03181: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:145 LDA @VIRTUAL06
    case 0xC03182: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:146 PHA
    case 0xC03184: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_horizontal.asm:147 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC03185: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:147 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC03187: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:147 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC03189: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:147 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC0318B: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:931 LDA addr+1
    // Macro caller: src/overworld/adjust_position_horizontal.asm:148 ASR8_INT @VIRTUAL06
    case 0xC0318D: {
        Instruction step(cpu, 0xA5, 0x000007u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:932 STA addr
    // Macro caller: src/overworld/adjust_position_horizontal.asm:148 ASR8_INT @VIRTUAL06
    case 0xC0318F: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:933 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/overworld/adjust_position_horizontal.asm:148 ASR8_INT @VIRTUAL06
    case 0xC03191: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:843 LDA src
    // Macro caller: src/overworld/adjust_position_horizontal.asm:148 ASR8_INT @VIRTUAL06
    case 0xC03193: {
        Instruction step(cpu, 0xA5, 0x000009u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:148 ASR8_INT @VIRTUAL06
    case 0xC03195: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/overworld/adjust_position_horizontal.asm:148 ASR8_INT @VIRTUAL06
    case 0xC03197: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:935 BPL :+
    // Macro caller: src/overworld/adjust_position_horizontal.asm:148 ASR8_INT @VIRTUAL06
    case 0xC03199: {
        Instruction step(cpu, 0x10, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:936 DEC addr + 3
    // Macro caller: src/overworld/adjust_position_horizontal.asm:148 ASR8_INT @VIRTUAL06
    case 0xC0319B: {
        Instruction step(cpu, 0xC6, 0x000009u, 2u, AddressMode::DirectPage);
        step.decrement();
        return step.finish();
    }
    // include/macros.asm:938 REP #PROC_FLAGS::ACCUM8
    // Macro caller: src/overworld/adjust_position_horizontal.asm:148 ASR8_INT @VIRTUAL06
    case 0xC0319D: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:924 PLA
    // Macro caller: src/overworld/adjust_position_horizontal.asm:149 PULL32 @VIRTUAL0A
    case 0xC0319F: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:925 STA val
    // Macro caller: src/overworld/adjust_position_horizontal.asm:149 PULL32 @VIRTUAL0A
    case 0xC031A0: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:926 PLA
    // Macro caller: src/overworld/adjust_position_horizontal.asm:149 PULL32 @VIRTUAL0A
    case 0xC031A2: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:927 STA val + 2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:149 PULL32 @VIRTUAL0A
    case 0xC031A3: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:150 CLC
    case 0xC031A5: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // include/macros.asm:942 LDA val1
    // Macro caller: src/overworld/adjust_position_horizontal.asm:151 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC031A6: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:943 ADC val2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:151 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC031A8: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:944 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:151 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC031AA: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:151 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC031AC: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:151 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC031AE: {
        Instruction step(cpu, 0x65, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:151 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC031B0: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_horizontal.asm:152 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC031B2: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:152 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC031B4: {
        Instruction step(cpu, 0x85, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:152 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC031B6: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:152 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC031B8: {
        Instruction step(cpu, 0x85, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:153 BRA @UNKNOWN14
    case 0xC031BA: {
        Instruction step(cpu, 0x80, 0x000034u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:155 TYA
    case 0xC031BC: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:156 ASL
    case 0xC031BD: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:157 ASL
    case 0xC031BE: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:158 STA @VIRTUAL02
    case 0xC031BF: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:159 LDA GAME_STATE+game_state::walking_style
    case 0xC031C1: {
        Instruction step(cpu, 0xAD, 0x009B34u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:160 ASL
    case 0xC031C4: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:161 ASL
    case 0xC031C5: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:162 ASL
    case 0xC031C6: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:163 ASL
    case 0xC031C7: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:164 ASL
    case 0xC031C8: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:165 CLC
    case 0xC031C9: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:166 ADC @VIRTUAL02
    case 0xC031CA: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:167 CLC
    case 0xC031CC: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:168 ADC #.LOWORD(HORIZONTAL_MOVEMENT_SPEEDS)
    case 0xC031CD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00005Cu : 0x00515Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:168 ADC #.LOWORD(HORIZONTAL_MOVEMENT_SPEEDS)
    // Overlapping static entry reached from 0xC031CD.
    case 0xC031CF: {
        Instruction step(cpu, 0x51, 0x0000A8u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.xor_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:169 TAY
    case 0xC031D0: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/overworld/adjust_position_horizontal.asm:170 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC031D1: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1114 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:170 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC031D4: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/overworld/adjust_position_horizontal.asm:170 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC031D6: {
        Instruction step(cpu, 0xB9, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:170 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC031D9: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_horizontal.asm:171 CLC
    case 0xC031DB: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // include/macros.asm:942 LDA val1
    // Macro caller: src/overworld/adjust_position_horizontal.asm:172 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC031DC: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:943 ADC val2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:172 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC031DE: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:944 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:172 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC031E0: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:172 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC031E2: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:172 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC031E4: {
        Instruction step(cpu, 0x65, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:172 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC031E6: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_horizontal.asm:173 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC031E8: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:173 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC031EA: {
        Instruction step(cpu, 0x85, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_horizontal.asm:173 MOVE_INT @VIRTUAL06, @RETURNVAL
    // Overlapping static entry reached from 0xC03264.
    case 0xC031EB: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:173 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC031EC: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_horizontal.asm:173 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC031EE: {
        Instruction step(cpu, 0x85, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/adjust_position_horizontal.asm:175 END_C_FUNCTION
    case 0xC031F0: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/overworld/adjust_position_horizontal.asm:175 END_C_FUNCTION
    case 0xC031F1: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
