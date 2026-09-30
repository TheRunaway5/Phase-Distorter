// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/overworld/adjust_position_vertical.asm
bool resume_overworld_adjust_position_vertical(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/adjust_position_vertical.asm:3 BEGIN_C_FUNCTION
    case 0xC03017: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/adjust_position_vertical.asm:11 END_STACK_VARS
    case 0xC03019: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/adjust_position_vertical.asm:11 END_STACK_VARS
    case 0xC0301A: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/adjust_position_vertical.asm:11 END_STACK_VARS
    case 0xC0301B: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/adjust_position_vertical.asm:11 END_STACK_VARS
    case 0xC0301C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000ECu : 0x00FFECu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/adjust_position_vertical.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC0301C.
    case 0xC0301E: {
        Instruction step(cpu, 0xFF, 0xA8685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/adjust_position_vertical.asm:11 END_STACK_VARS
    case 0xC0301F: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/adjust_position_vertical.asm:11 END_STACK_VARS
    case 0xC03020: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:12 TAY
    case 0xC03021: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_vertical.asm:13 MOVE_INT @PARAM02, @VIRTUAL06
    case 0xC03022: {
        Instruction step(cpu, 0xA5, 0x000022u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:13 MOVE_INT @PARAM02, @VIRTUAL06
    case 0xC03024: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:13 MOVE_INT @PARAM02, @VIRTUAL06
    case 0xC03026: {
        Instruction step(cpu, 0xA5, 0x000024u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:13 MOVE_INT @PARAM02, @VIRTUAL06
    case 0xC03028: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_vertical.asm:14 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0302A: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:14 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0302C: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:14 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0302E: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:14 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC03030: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:15 TXA
    case 0xC03032: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:16 AND #SURFACE_FLAGS::DEEP_WATER
    case 0xC03033: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x00000Cu : 0x00000Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:16 AND #SURFACE_FLAGS::DEEP_WATER
    // Overlapping static entry reached from 0xC03033.
    case 0xC03035: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:17 CMP #SURFACE_FLAGS::SHALLOW_WATER
    case 0xC03036: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:17 CMP #SURFACE_FLAGS::SHALLOW_WATER
    // Overlapping static entry reached from 0xC03036.
    case 0xC03038: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:18 BEQ @IN_SHALLOW_WATER
    case 0xC03039: {
        Instruction step(cpu, 0xF0, 0x00000Bu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:19 CMP #SURFACE_FLAGS::DEEP_WATER
    case 0xC0303B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00000Cu : 0x00000Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:19 CMP #SURFACE_FLAGS::DEEP_WATER
    // Overlapping static entry reached from 0xC0303B.
    case 0xC0303D: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/adjust_position_vertical.asm:20 BEQL @IN_DEEP_WATER
    case 0xC0303E: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:20 BEQL @IN_DEEP_WATER
    case 0xC03040: {
        Instruction step(cpu, 0x4C, 0x0030E1u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:21 JMP @NOT_IN_WATER
    case 0xC03043: {
        Instruction step(cpu, 0x4C, 0x00317Cu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:23 TYA
    case 0xC03046: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:24 ASL
    case 0xC03047: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:25 ASL
    case 0xC03048: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:26 STA @VIRTUAL02
    case 0xC03049: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:27 LDA GAME_STATE+game_state::walking_style
    case 0xC0304B: {
        Instruction step(cpu, 0xAD, 0x009883u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:28 ASL
    case 0xC0304E: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:29 ASL
    case 0xC0304F: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:30 ASL
    case 0xC03050: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:31 ASL
    case 0xC03051: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:32 ASL
    case 0xC03052: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:33 CLC
    case 0xC03053: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:34 ADC @VIRTUAL02
    case 0xC03054: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:35 CLC
    case 0xC03056: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:36 ADC #.LOWORD(VERTICAL_MOVEMENT_SPEEDS)
    case 0xC03057: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000096u : 0x004F96u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:36 ADC #.LOWORD(VERTICAL_MOVEMENT_SPEEDS)
    // Overlapping static entry reached from 0xC03057.
    case 0xC03059: {
        Instruction step(cpu, 0x4F, 0x00B9A8u, 4u, AddressMode::Long);
        step.xor_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:37 TAY
    case 0xC0305A: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/overworld/adjust_position_vertical.asm:38 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC0305B: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/overworld/adjust_position_vertical.asm:38 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    // Overlapping static entry reached from 0xC03059.
    case 0xC0305D: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1114 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:38 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC0305E: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/overworld/adjust_position_vertical.asm:38 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC03060: {
        Instruction step(cpu, 0xB9, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:38 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC03063: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:931 LDA addr+1
    // Macro caller: src/overworld/adjust_position_vertical.asm:39 ASR8_INT @VIRTUAL06
    case 0xC03065: {
        Instruction step(cpu, 0xA5, 0x000007u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:932 STA addr
    // Macro caller: src/overworld/adjust_position_vertical.asm:39 ASR8_INT @VIRTUAL06
    case 0xC03067: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:933 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/overworld/adjust_position_vertical.asm:39 ASR8_INT @VIRTUAL06
    case 0xC03069: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:843 LDA src
    // Macro caller: src/overworld/adjust_position_vertical.asm:39 ASR8_INT @VIRTUAL06
    case 0xC0306B: {
        Instruction step(cpu, 0xA5, 0x000009u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:39 ASR8_INT @VIRTUAL06
    case 0xC0306D: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/overworld/adjust_position_vertical.asm:39 ASR8_INT @VIRTUAL06
    case 0xC0306F: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:935 BPL :+
    // Macro caller: src/overworld/adjust_position_vertical.asm:39 ASR8_INT @VIRTUAL06
    case 0xC03071: {
        Instruction step(cpu, 0x10, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:936 DEC addr + 3
    // Macro caller: src/overworld/adjust_position_vertical.asm:39 ASR8_INT @VIRTUAL06
    case 0xC03073: {
        Instruction step(cpu, 0xC6, 0x000009u, 2u, AddressMode::DirectPage);
        step.decrement();
        return step.finish();
    }
    // include/macros.asm:938 REP #PROC_FLAGS::ACCUM8
    // Macro caller: src/overworld/adjust_position_vertical.asm:39 ASR8_INT @VIRTUAL06
    case 0xC03075: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_vertical.asm:40 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC03077: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:40 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC03079: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:40 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC0307B: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:40 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC0307D: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_vertical.asm:41 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC0307F: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:41 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC03081: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:41 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC03083: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:41 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC03085: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/adjust_position_vertical.asm:42 MOVE_INT_CONSTANT SHALLOW_WATER_SPEED, @VIRTUAL0A
    case 0xC03087: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x008000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/adjust_position_vertical.asm:42 MOVE_INT_CONSTANT SHALLOW_WATER_SPEED, @VIRTUAL0A
    // Overlapping static entry reached from 0xC03087.
    case 0xC03089: {
        Instruction step(cpu, 0x80, 0x000085u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:42 MOVE_INT_CONSTANT SHALLOW_WATER_SPEED, @VIRTUAL0A
    case 0xC0308A: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/adjust_position_vertical.asm:42 MOVE_INT_CONSTANT SHALLOW_WATER_SPEED, @VIRTUAL0A
    case 0xC0308C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/adjust_position_vertical.asm:42 MOVE_INT_CONSTANT SHALLOW_WATER_SPEED, @VIRTUAL0A
    // Overlapping static entry reached from 0xC0308C.
    case 0xC0308E: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:42 MOVE_INT_CONSTANT SHALLOW_WATER_SPEED, @VIRTUAL0A
    case 0xC0308F: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:43 JSL MULT32
    case 0xC03091: {
        Instruction step(cpu, 0x22, 0xC09086u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_vertical.asm:44 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC03095: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:44 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC03097: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:44 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC03099: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:44 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC0309B: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_vertical.asm:45 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC0309D: {
        Instruction step(cpu, 0xA5, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:45 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC0309F: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:45 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC030A1: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:45 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC030A3: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:46 PHA
    case 0xC030A5: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:47 LDA @VIRTUAL06
    case 0xC030A6: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:48 PHA
    case 0xC030A8: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_vertical.asm:49 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC030A9: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:49 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC030AB: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:49 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC030AD: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:49 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC030AF: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:931 LDA addr+1
    // Macro caller: src/overworld/adjust_position_vertical.asm:50 ASR8_INT @VIRTUAL06
    case 0xC030B1: {
        Instruction step(cpu, 0xA5, 0x000007u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:932 STA addr
    // Macro caller: src/overworld/adjust_position_vertical.asm:50 ASR8_INT @VIRTUAL06
    case 0xC030B3: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:933 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/overworld/adjust_position_vertical.asm:50 ASR8_INT @VIRTUAL06
    case 0xC030B5: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:843 LDA src
    // Macro caller: src/overworld/adjust_position_vertical.asm:50 ASR8_INT @VIRTUAL06
    case 0xC030B7: {
        Instruction step(cpu, 0xA5, 0x000009u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:50 ASR8_INT @VIRTUAL06
    case 0xC030B9: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/overworld/adjust_position_vertical.asm:50 ASR8_INT @VIRTUAL06
    case 0xC030BB: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:935 BPL :+
    // Macro caller: src/overworld/adjust_position_vertical.asm:50 ASR8_INT @VIRTUAL06
    case 0xC030BD: {
        Instruction step(cpu, 0x10, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:936 DEC addr + 3
    // Macro caller: src/overworld/adjust_position_vertical.asm:50 ASR8_INT @VIRTUAL06
    case 0xC030BF: {
        Instruction step(cpu, 0xC6, 0x000009u, 2u, AddressMode::DirectPage);
        step.decrement();
        return step.finish();
    }
    // include/macros.asm:938 REP #PROC_FLAGS::ACCUM8
    // Macro caller: src/overworld/adjust_position_vertical.asm:50 ASR8_INT @VIRTUAL06
    case 0xC030C1: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:924 PLA
    // Macro caller: src/overworld/adjust_position_vertical.asm:51 PULL32 @VIRTUAL0A
    case 0xC030C3: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:925 STA val
    // Macro caller: src/overworld/adjust_position_vertical.asm:51 PULL32 @VIRTUAL0A
    case 0xC030C4: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:926 PLA
    // Macro caller: src/overworld/adjust_position_vertical.asm:51 PULL32 @VIRTUAL0A
    case 0xC030C6: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:927 STA val + 2
    // Macro caller: src/overworld/adjust_position_vertical.asm:51 PULL32 @VIRTUAL0A
    case 0xC030C7: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:52 CLC
    case 0xC030C9: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // include/macros.asm:942 LDA val1
    // Macro caller: src/overworld/adjust_position_vertical.asm:53 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC030CA: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:943 ADC val2
    // Macro caller: src/overworld/adjust_position_vertical.asm:53 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC030CC: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:944 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:53 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC030CE: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:53 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC030D0: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:53 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC030D2: {
        Instruction step(cpu, 0x65, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:53 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC030D4: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_vertical.asm:54 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC030D6: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:54 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC030D8: {
        Instruction step(cpu, 0x85, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:54 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC030DA: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:54 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC030DC: {
        Instruction step(cpu, 0x85, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:55 JMP @UNKNOWN14
    case 0xC030DE: {
        Instruction step(cpu, 0x4C, 0x00329Du, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:57 TYA
    case 0xC030E1: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:58 ASL
    case 0xC030E2: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:59 ASL
    case 0xC030E3: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:60 STA @VIRTUAL02
    case 0xC030E4: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:61 LDA GAME_STATE+game_state::walking_style
    case 0xC030E6: {
        Instruction step(cpu, 0xAD, 0x009883u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:62 ASL
    case 0xC030E9: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:63 ASL
    case 0xC030EA: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:64 ASL
    case 0xC030EB: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:65 ASL
    case 0xC030EC: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:66 ASL
    case 0xC030ED: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:67 CLC
    case 0xC030EE: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:68 ADC @VIRTUAL02
    case 0xC030EF: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:69 CLC
    case 0xC030F1: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:70 ADC #.LOWORD(VERTICAL_MOVEMENT_SPEEDS)
    case 0xC030F2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000096u : 0x004F96u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:70 ADC #.LOWORD(VERTICAL_MOVEMENT_SPEEDS)
    // Overlapping static entry reached from 0xC030F2.
    case 0xC030F4: {
        Instruction step(cpu, 0x4F, 0x00B9A8u, 4u, AddressMode::Long);
        step.xor_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:71 TAY
    case 0xC030F5: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/overworld/adjust_position_vertical.asm:72 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC030F6: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/overworld/adjust_position_vertical.asm:72 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    // Overlapping static entry reached from 0xC030F4.
    case 0xC030F8: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1114 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:72 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC030F9: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/overworld/adjust_position_vertical.asm:72 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC030FB: {
        Instruction step(cpu, 0xB9, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:72 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC030FE: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:931 LDA addr+1
    // Macro caller: src/overworld/adjust_position_vertical.asm:73 ASR8_INT @VIRTUAL06
    case 0xC03100: {
        Instruction step(cpu, 0xA5, 0x000007u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:932 STA addr
    // Macro caller: src/overworld/adjust_position_vertical.asm:73 ASR8_INT @VIRTUAL06
    case 0xC03102: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:933 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/overworld/adjust_position_vertical.asm:73 ASR8_INT @VIRTUAL06
    case 0xC03104: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:843 LDA src
    // Macro caller: src/overworld/adjust_position_vertical.asm:73 ASR8_INT @VIRTUAL06
    case 0xC03106: {
        Instruction step(cpu, 0xA5, 0x000009u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:73 ASR8_INT @VIRTUAL06
    case 0xC03108: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/overworld/adjust_position_vertical.asm:73 ASR8_INT @VIRTUAL06
    case 0xC0310A: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:935 BPL :+
    // Macro caller: src/overworld/adjust_position_vertical.asm:73 ASR8_INT @VIRTUAL06
    case 0xC0310C: {
        Instruction step(cpu, 0x10, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:936 DEC addr + 3
    // Macro caller: src/overworld/adjust_position_vertical.asm:73 ASR8_INT @VIRTUAL06
    case 0xC0310E: {
        Instruction step(cpu, 0xC6, 0x000009u, 2u, AddressMode::DirectPage);
        step.decrement();
        return step.finish();
    }
    // include/macros.asm:938 REP #PROC_FLAGS::ACCUM8
    // Macro caller: src/overworld/adjust_position_vertical.asm:73 ASR8_INT @VIRTUAL06
    case 0xC03110: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_vertical.asm:74 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC03112: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:74 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC03114: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:74 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC03116: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:74 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC03118: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_vertical.asm:75 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC0311A: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:75 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC0311C: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:75 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC0311E: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:75 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC03120: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/adjust_position_vertical.asm:76 MOVE_INT_CONSTANT DEEP_WATER_SPEED, @VIRTUAL0A
    case 0xC03122: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Au : 0x00547Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/adjust_position_vertical.asm:76 MOVE_INT_CONSTANT DEEP_WATER_SPEED, @VIRTUAL0A
    // Overlapping static entry reached from 0xC03122.
    case 0xC03124: {
        Instruction step(cpu, 0x54, 0x000A85u, 3u, AddressMode::BlockMove);
        step.move_byte_forward();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:76 MOVE_INT_CONSTANT DEEP_WATER_SPEED, @VIRTUAL0A
    case 0xC03125: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/adjust_position_vertical.asm:76 MOVE_INT_CONSTANT DEEP_WATER_SPEED, @VIRTUAL0A
    case 0xC03127: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/adjust_position_vertical.asm:76 MOVE_INT_CONSTANT DEEP_WATER_SPEED, @VIRTUAL0A
    // Overlapping static entry reached from 0xC03127.
    case 0xC03129: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:76 MOVE_INT_CONSTANT DEEP_WATER_SPEED, @VIRTUAL0A
    case 0xC0312A: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:77 JSL MULT32
    case 0xC0312C: {
        Instruction step(cpu, 0x22, 0xC09086u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_vertical.asm:78 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC03130: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:78 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC03132: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:78 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC03134: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:78 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC03136: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_vertical.asm:79 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC03138: {
        Instruction step(cpu, 0xA5, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:79 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC0313A: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:79 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC0313C: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:79 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC0313E: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:80 PHA
    case 0xC03140: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:81 LDA @VIRTUAL06
    case 0xC03141: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:82 PHA
    case 0xC03143: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_vertical.asm:83 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC03144: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:83 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC03146: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:83 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC03148: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:83 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC0314A: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:931 LDA addr+1
    // Macro caller: src/overworld/adjust_position_vertical.asm:84 ASR8_INT @VIRTUAL06
    case 0xC0314C: {
        Instruction step(cpu, 0xA5, 0x000007u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:932 STA addr
    // Macro caller: src/overworld/adjust_position_vertical.asm:84 ASR8_INT @VIRTUAL06
    case 0xC0314E: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:933 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/overworld/adjust_position_vertical.asm:84 ASR8_INT @VIRTUAL06
    case 0xC03150: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:843 LDA src
    // Macro caller: src/overworld/adjust_position_vertical.asm:84 ASR8_INT @VIRTUAL06
    case 0xC03152: {
        Instruction step(cpu, 0xA5, 0x000009u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:84 ASR8_INT @VIRTUAL06
    case 0xC03154: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/overworld/adjust_position_vertical.asm:84 ASR8_INT @VIRTUAL06
    case 0xC03156: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:935 BPL :+
    // Macro caller: src/overworld/adjust_position_vertical.asm:84 ASR8_INT @VIRTUAL06
    case 0xC03158: {
        Instruction step(cpu, 0x10, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:936 DEC addr + 3
    // Macro caller: src/overworld/adjust_position_vertical.asm:84 ASR8_INT @VIRTUAL06
    case 0xC0315A: {
        Instruction step(cpu, 0xC6, 0x000009u, 2u, AddressMode::DirectPage);
        step.decrement();
        return step.finish();
    }
    // include/macros.asm:938 REP #PROC_FLAGS::ACCUM8
    // Macro caller: src/overworld/adjust_position_vertical.asm:84 ASR8_INT @VIRTUAL06
    case 0xC0315C: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:924 PLA
    // Macro caller: src/overworld/adjust_position_vertical.asm:85 PULL32 @VIRTUAL0A
    case 0xC0315E: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:925 STA val
    // Macro caller: src/overworld/adjust_position_vertical.asm:85 PULL32 @VIRTUAL0A
    case 0xC0315F: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:926 PLA
    // Macro caller: src/overworld/adjust_position_vertical.asm:85 PULL32 @VIRTUAL0A
    case 0xC03161: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:927 STA val + 2
    // Macro caller: src/overworld/adjust_position_vertical.asm:85 PULL32 @VIRTUAL0A
    case 0xC03162: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:86 CLC
    case 0xC03164: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // include/macros.asm:942 LDA val1
    // Macro caller: src/overworld/adjust_position_vertical.asm:87 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC03165: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:943 ADC val2
    // Macro caller: src/overworld/adjust_position_vertical.asm:87 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC03167: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:944 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:87 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC03169: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:87 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0316B: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:87 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0316D: {
        Instruction step(cpu, 0x65, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:87 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0316F: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_vertical.asm:88 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC03171: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:88 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC03173: {
        Instruction step(cpu, 0x85, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:88 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC03175: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:88 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC03177: {
        Instruction step(cpu, 0x85, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:89 JMP @UNKNOWN14
    case 0xC03179: {
        Instruction step(cpu, 0x4C, 0x00329Du, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:91 LDA DEMO_FRAMES_LEFT
    case 0xC0317C: {
        Instruction step(cpu, 0xAD, 0x000081u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:92 BEQ @UNKNOWN8
    case 0xC0317F: {
        Instruction step(cpu, 0xF0, 0x000037u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:93 TYA
    case 0xC03181: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:94 ASL
    case 0xC03182: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:95 ASL
    case 0xC03183: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:96 STA @VIRTUAL02
    case 0xC03184: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:97 LDA GAME_STATE+game_state::walking_style
    case 0xC03186: {
        Instruction step(cpu, 0xAD, 0x009883u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:98 ASL
    case 0xC03189: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:99 ASL
    case 0xC0318A: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:100 ASL
    case 0xC0318B: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:101 ASL
    case 0xC0318C: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:102 ASL
    case 0xC0318D: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:103 CLC
    case 0xC0318E: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:104 ADC @VIRTUAL02
    case 0xC0318F: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:105 CLC
    case 0xC03191: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:106 ADC #.LOWORD(VERTICAL_MOVEMENT_SPEEDS)
    case 0xC03192: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000096u : 0x004F96u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:106 ADC #.LOWORD(VERTICAL_MOVEMENT_SPEEDS)
    // Overlapping static entry reached from 0xC03192.
    case 0xC03194: {
        Instruction step(cpu, 0x4F, 0x00B9A8u, 4u, AddressMode::Long);
        step.xor_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:107 TAY
    case 0xC03195: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/overworld/adjust_position_vertical.asm:108 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC03196: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/overworld/adjust_position_vertical.asm:108 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    // Overlapping static entry reached from 0xC03194.
    case 0xC03198: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1114 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:108 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC03199: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/overworld/adjust_position_vertical.asm:108 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC0319B: {
        Instruction step(cpu, 0xB9, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:108 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC0319E: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:109 CLC
    case 0xC031A0: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // include/macros.asm:942 LDA val1
    // Macro caller: src/overworld/adjust_position_vertical.asm:110 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC031A1: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:943 ADC val2
    // Macro caller: src/overworld/adjust_position_vertical.asm:110 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC031A3: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:944 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:110 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC031A5: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:110 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC031A7: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:110 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC031A9: {
        Instruction step(cpu, 0x65, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:110 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC031AB: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_vertical.asm:111 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC031AD: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:111 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC031AF: {
        Instruction step(cpu, 0x85, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:111 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC031B1: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:111 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC031B3: {
        Instruction step(cpu, 0x85, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:112 JMP @UNKNOWN14
    case 0xC031B5: {
        Instruction step(cpu, 0x4C, 0x00329Du, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:114 LDA GAME_STATE + game_state::party_status
    case 0xC031B8: {
        Instruction step(cpu, 0xAD, 0x009840u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:115 AND #$00FF
    case 0xC031BB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:115 AND #$00FF
    // Overlapping static entry reached from 0xC031BB.
    case 0xC031BD: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:116 CMP #3
    case 0xC031BE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:116 CMP #3
    // Overlapping static entry reached from 0xC031BE.
    case 0xC031C0: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/overworld/adjust_position_vertical.asm:117 BNEL @UNKNOWN13
    case 0xC031C1: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:117 BNEL @UNKNOWN13
    case 0xC031C3: {
        Instruction step(cpu, 0x4C, 0x003269u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:118 LDA GAME_STATE+game_state::walking_style
    case 0xC031C6: {
        Instruction step(cpu, 0xAD, 0x009883u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:119 STA @LOCAL00
    case 0xC031C9: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/overworld/adjust_position_vertical.asm:120 BNEL @UNKNOWN13
    case 0xC031CB: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:120 BNEL @UNKNOWN13
    case 0xC031CD: {
        Instruction step(cpu, 0x4C, 0x003269u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:121 TYA
    case 0xC031D0: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:122 ASL
    case 0xC031D1: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:123 ASL
    case 0xC031D2: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:124 STA @VIRTUAL02
    case 0xC031D3: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:125 LDA @LOCAL00
    case 0xC031D5: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:126 ASL
    case 0xC031D7: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:127 ASL
    case 0xC031D8: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:128 ASL
    case 0xC031D9: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:129 ASL
    case 0xC031DA: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:130 ASL
    case 0xC031DB: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:131 CLC
    case 0xC031DC: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:132 ADC @VIRTUAL02
    case 0xC031DD: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:133 CLC
    case 0xC031DF: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:134 ADC #.LOWORD(VERTICAL_MOVEMENT_SPEEDS)
    case 0xC031E0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000096u : 0x004F96u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:134 ADC #.LOWORD(VERTICAL_MOVEMENT_SPEEDS)
    // Overlapping static entry reached from 0xC031E0.
    case 0xC031E2: {
        Instruction step(cpu, 0x4F, 0x00B9A8u, 4u, AddressMode::Long);
        step.xor_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:135 TAY
    case 0xC031E3: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/overworld/adjust_position_vertical.asm:136 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC031E4: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/overworld/adjust_position_vertical.asm:136 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    // Overlapping static entry reached from 0xC031E2.
    case 0xC031E6: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1114 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:136 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC031E7: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/overworld/adjust_position_vertical.asm:136 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC031E9: {
        Instruction step(cpu, 0xB9, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:136 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC031EC: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:931 LDA addr+1
    // Macro caller: src/overworld/adjust_position_vertical.asm:137 ASR8_INT @VIRTUAL06
    case 0xC031EE: {
        Instruction step(cpu, 0xA5, 0x000007u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:932 STA addr
    // Macro caller: src/overworld/adjust_position_vertical.asm:137 ASR8_INT @VIRTUAL06
    case 0xC031F0: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:933 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/overworld/adjust_position_vertical.asm:137 ASR8_INT @VIRTUAL06
    case 0xC031F2: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:843 LDA src
    // Macro caller: src/overworld/adjust_position_vertical.asm:137 ASR8_INT @VIRTUAL06
    case 0xC031F4: {
        Instruction step(cpu, 0xA5, 0x000009u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:137 ASR8_INT @VIRTUAL06
    case 0xC031F6: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/overworld/adjust_position_vertical.asm:137 ASR8_INT @VIRTUAL06
    case 0xC031F8: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:935 BPL :+
    // Macro caller: src/overworld/adjust_position_vertical.asm:137 ASR8_INT @VIRTUAL06
    case 0xC031FA: {
        Instruction step(cpu, 0x10, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:936 DEC addr + 3
    // Macro caller: src/overworld/adjust_position_vertical.asm:137 ASR8_INT @VIRTUAL06
    case 0xC031FC: {
        Instruction step(cpu, 0xC6, 0x000009u, 2u, AddressMode::DirectPage);
        step.decrement();
        return step.finish();
    }
    // include/macros.asm:938 REP #PROC_FLAGS::ACCUM8
    // Macro caller: src/overworld/adjust_position_vertical.asm:137 ASR8_INT @VIRTUAL06
    case 0xC031FE: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_vertical.asm:138 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC03200: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:138 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC03202: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:138 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC03204: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:138 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC03206: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_vertical.asm:139 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC03208: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:139 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC0320A: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:139 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC0320C: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:139 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC0320E: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/adjust_position_vertical.asm:140 MOVE_INT_CONSTANT SKIP_SANDWICH_SPEED, @VIRTUAL0A
    case 0xC03210: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x008000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/adjust_position_vertical.asm:140 MOVE_INT_CONSTANT SKIP_SANDWICH_SPEED, @VIRTUAL0A
    // Overlapping static entry reached from 0xC03210.
    case 0xC03212: {
        Instruction step(cpu, 0x80, 0x000085u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:140 MOVE_INT_CONSTANT SKIP_SANDWICH_SPEED, @VIRTUAL0A
    case 0xC03213: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/adjust_position_vertical.asm:140 MOVE_INT_CONSTANT SKIP_SANDWICH_SPEED, @VIRTUAL0A
    case 0xC03215: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/adjust_position_vertical.asm:140 MOVE_INT_CONSTANT SKIP_SANDWICH_SPEED, @VIRTUAL0A
    // Overlapping static entry reached from 0xC03215.
    case 0xC03217: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:140 MOVE_INT_CONSTANT SKIP_SANDWICH_SPEED, @VIRTUAL0A
    case 0xC03218: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:141 JSL MULT32
    case 0xC0321A: {
        Instruction step(cpu, 0x22, 0xC09086u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_vertical.asm:142 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC0321E: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:142 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC03220: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:142 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC03222: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:142 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC03224: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_vertical.asm:143 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC03226: {
        Instruction step(cpu, 0xA5, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:143 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC03228: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:143 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC0322A: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:143 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC0322C: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:144 PHA
    case 0xC0322E: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:145 LDA @VIRTUAL06
    case 0xC0322F: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:146 PHA
    case 0xC03231: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_vertical.asm:147 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC03232: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:147 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC03234: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:147 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC03236: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:147 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC03238: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:931 LDA addr+1
    // Macro caller: src/overworld/adjust_position_vertical.asm:148 ASR8_INT @VIRTUAL06
    case 0xC0323A: {
        Instruction step(cpu, 0xA5, 0x000007u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:932 STA addr
    // Macro caller: src/overworld/adjust_position_vertical.asm:148 ASR8_INT @VIRTUAL06
    case 0xC0323C: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:933 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/overworld/adjust_position_vertical.asm:148 ASR8_INT @VIRTUAL06
    case 0xC0323E: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:843 LDA src
    // Macro caller: src/overworld/adjust_position_vertical.asm:148 ASR8_INT @VIRTUAL06
    case 0xC03240: {
        Instruction step(cpu, 0xA5, 0x000009u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:148 ASR8_INT @VIRTUAL06
    case 0xC03242: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/overworld/adjust_position_vertical.asm:148 ASR8_INT @VIRTUAL06
    case 0xC03244: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:935 BPL :+
    // Macro caller: src/overworld/adjust_position_vertical.asm:148 ASR8_INT @VIRTUAL06
    case 0xC03246: {
        Instruction step(cpu, 0x10, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:936 DEC addr + 3
    // Macro caller: src/overworld/adjust_position_vertical.asm:148 ASR8_INT @VIRTUAL06
    case 0xC03248: {
        Instruction step(cpu, 0xC6, 0x000009u, 2u, AddressMode::DirectPage);
        step.decrement();
        return step.finish();
    }
    // include/macros.asm:938 REP #PROC_FLAGS::ACCUM8
    // Macro caller: src/overworld/adjust_position_vertical.asm:148 ASR8_INT @VIRTUAL06
    case 0xC0324A: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:924 PLA
    // Macro caller: src/overworld/adjust_position_vertical.asm:149 PULL32 @VIRTUAL0A
    case 0xC0324C: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:925 STA val
    // Macro caller: src/overworld/adjust_position_vertical.asm:149 PULL32 @VIRTUAL0A
    case 0xC0324D: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:926 PLA
    // Macro caller: src/overworld/adjust_position_vertical.asm:149 PULL32 @VIRTUAL0A
    case 0xC0324F: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:927 STA val + 2
    // Macro caller: src/overworld/adjust_position_vertical.asm:149 PULL32 @VIRTUAL0A
    case 0xC03250: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:150 CLC
    case 0xC03252: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // include/macros.asm:942 LDA val1
    // Macro caller: src/overworld/adjust_position_vertical.asm:151 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC03253: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:943 ADC val2
    // Macro caller: src/overworld/adjust_position_vertical.asm:151 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC03255: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:944 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:151 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC03257: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:151 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC03259: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:151 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0325B: {
        Instruction step(cpu, 0x65, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:151 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0325D: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_vertical.asm:152 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC0325F: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:152 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC03261: {
        Instruction step(cpu, 0x85, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:152 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC03263: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:152 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC03265: {
        Instruction step(cpu, 0x85, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:153 BRA @UNKNOWN14
    case 0xC03267: {
        Instruction step(cpu, 0x80, 0x000034u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:155 TYA
    case 0xC03269: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:156 ASL
    case 0xC0326A: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:157 ASL
    case 0xC0326B: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:158 STA @VIRTUAL02
    case 0xC0326C: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:159 LDA GAME_STATE+game_state::walking_style
    case 0xC0326E: {
        Instruction step(cpu, 0xAD, 0x009883u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:160 ASL
    case 0xC03271: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:161 ASL
    case 0xC03272: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:162 ASL
    case 0xC03273: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:163 ASL
    case 0xC03274: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:164 ASL
    case 0xC03275: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:165 CLC
    case 0xC03276: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:166 ADC @VIRTUAL02
    case 0xC03277: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:167 CLC
    case 0xC03279: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:168 ADC #.LOWORD(VERTICAL_MOVEMENT_SPEEDS)
    case 0xC0327A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000096u : 0x004F96u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:168 ADC #.LOWORD(VERTICAL_MOVEMENT_SPEEDS)
    // Overlapping static entry reached from 0xC0327A.
    case 0xC0327C: {
        Instruction step(cpu, 0x4F, 0x00B9A8u, 4u, AddressMode::Long);
        step.xor_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:169 TAY
    case 0xC0327D: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/overworld/adjust_position_vertical.asm:170 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC0327E: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/overworld/adjust_position_vertical.asm:170 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    // Overlapping static entry reached from 0xC0327C.
    case 0xC03280: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1114 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:170 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC03281: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/overworld/adjust_position_vertical.asm:170 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC03283: {
        Instruction step(cpu, 0xB9, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:170 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC03286: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:171 CLC
    case 0xC03288: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // include/macros.asm:942 LDA val1
    // Macro caller: src/overworld/adjust_position_vertical.asm:172 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC03289: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:943 ADC val2
    // Macro caller: src/overworld/adjust_position_vertical.asm:172 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0328B: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:944 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:172 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0328D: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:172 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0328F: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:172 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC03291: {
        Instruction step(cpu, 0x65, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:172 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC03293: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_vertical.asm:173 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC03295: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:173 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC03297: {
        Instruction step(cpu, 0x85, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:173 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC03299: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:173 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC0329B: {
        Instruction step(cpu, 0x85, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/adjust_position_vertical.asm:175 END_C_FUNCTION
    case 0xC0329D: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/overworld/adjust_position_vertical.asm:175 END_C_FUNCTION
    case 0xC0329E: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
