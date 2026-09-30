// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/overworld/adjust_position_vertical.asm
bool resume_overworld_adjust_position_vertical(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/adjust_position_vertical.asm:3 BEGIN_C_FUNCTION
    case 0xC031F2: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/adjust_position_vertical.asm:11 END_STACK_VARS
    case 0xC031F4: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/adjust_position_vertical.asm:11 END_STACK_VARS
    case 0xC031F5: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/adjust_position_vertical.asm:11 END_STACK_VARS
    case 0xC031F6: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/adjust_position_vertical.asm:11 END_STACK_VARS
    case 0xC031F7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000ECu : 0x00FFECu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/adjust_position_vertical.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC031F7.
    case 0xC031F9: {
        Instruction step(cpu, 0xFF, 0xA8685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/adjust_position_vertical.asm:11 END_STACK_VARS
    case 0xC031FA: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/adjust_position_vertical.asm:11 END_STACK_VARS
    case 0xC031FB: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:12 TAY
    case 0xC031FC: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_vertical.asm:13 MOVE_INT @PARAM02, @VIRTUAL06
    case 0xC031FD: {
        Instruction step(cpu, 0xA5, 0x000022u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:13 MOVE_INT @PARAM02, @VIRTUAL06
    case 0xC031FF: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:13 MOVE_INT @PARAM02, @VIRTUAL06
    case 0xC03201: {
        Instruction step(cpu, 0xA5, 0x000024u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:13 MOVE_INT @PARAM02, @VIRTUAL06
    case 0xC03203: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_vertical.asm:14 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC03205: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:14 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC03207: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:14 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC03209: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:14 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0320B: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:15 TXA
    case 0xC0320D: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:16 AND #SURFACE_FLAGS::DEEP_WATER
    case 0xC0320E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x00000Cu : 0x00000Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:16 AND #SURFACE_FLAGS::DEEP_WATER
    // Overlapping static entry reached from 0xC0320E.
    case 0xC03210: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:17 CMP #SURFACE_FLAGS::SHALLOW_WATER
    case 0xC03211: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:17 CMP #SURFACE_FLAGS::SHALLOW_WATER
    // Overlapping static entry reached from 0xC03211.
    case 0xC03213: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:18 BEQ @IN_SHALLOW_WATER
    case 0xC03214: {
        Instruction step(cpu, 0xF0, 0x00000Bu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:19 CMP #SURFACE_FLAGS::DEEP_WATER
    case 0xC03216: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00000Cu : 0x00000Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:19 CMP #SURFACE_FLAGS::DEEP_WATER
    // Overlapping static entry reached from 0xC03216.
    case 0xC03218: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/adjust_position_vertical.asm:20 BEQL @IN_DEEP_WATER
    case 0xC03219: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:20 BEQL @IN_DEEP_WATER
    case 0xC0321B: {
        Instruction step(cpu, 0x4C, 0x0032BCu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:21 JMP @NOT_IN_WATER
    case 0xC0321E: {
        Instruction step(cpu, 0x4C, 0x003357u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:23 TYA
    case 0xC03221: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:24 ASL
    case 0xC03222: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:25 ASL
    case 0xC03223: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:26 STA @VIRTUAL02
    case 0xC03224: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:27 LDA GAME_STATE+game_state::walking_style
    case 0xC03226: {
        Instruction step(cpu, 0xAD, 0x009B34u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:28 ASL
    case 0xC03229: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:29 ASL
    case 0xC0322A: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:30 ASL
    case 0xC0322B: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:31 ASL
    case 0xC0322C: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:32 ASL
    case 0xC0322D: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:33 CLC
    case 0xC0322E: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:34 ADC @VIRTUAL02
    case 0xC0322F: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:35 CLC
    case 0xC03231: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:36 ADC #.LOWORD(VERTICAL_MOVEMENT_SPEEDS)
    case 0xC03232: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00001Cu : 0x00531Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:36 ADC #.LOWORD(VERTICAL_MOVEMENT_SPEEDS)
    // Overlapping static entry reached from 0xC03232.
    case 0xC03234: {
        Instruction step(cpu, 0x53, 0x0000A8u, 2u, AddressMode::StackRelativeIndirectIndexedY);
        step.xor_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:37 TAY
    case 0xC03235: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/overworld/adjust_position_vertical.asm:38 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC03236: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1114 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:38 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC03239: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/overworld/adjust_position_vertical.asm:38 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC0323B: {
        Instruction step(cpu, 0xB9, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:38 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC0323E: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:931 LDA addr+1
    // Macro caller: src/overworld/adjust_position_vertical.asm:39 ASR8_INT @VIRTUAL06
    case 0xC03240: {
        Instruction step(cpu, 0xA5, 0x000007u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:932 STA addr
    // Macro caller: src/overworld/adjust_position_vertical.asm:39 ASR8_INT @VIRTUAL06
    case 0xC03242: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:933 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/overworld/adjust_position_vertical.asm:39 ASR8_INT @VIRTUAL06
    case 0xC03244: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:843 LDA src
    // Macro caller: src/overworld/adjust_position_vertical.asm:39 ASR8_INT @VIRTUAL06
    case 0xC03246: {
        Instruction step(cpu, 0xA5, 0x000009u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:39 ASR8_INT @VIRTUAL06
    case 0xC03248: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/overworld/adjust_position_vertical.asm:39 ASR8_INT @VIRTUAL06
    case 0xC0324A: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:935 BPL :+
    // Macro caller: src/overworld/adjust_position_vertical.asm:39 ASR8_INT @VIRTUAL06
    case 0xC0324C: {
        Instruction step(cpu, 0x10, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:936 DEC addr + 3
    // Macro caller: src/overworld/adjust_position_vertical.asm:39 ASR8_INT @VIRTUAL06
    case 0xC0324E: {
        Instruction step(cpu, 0xC6, 0x000009u, 2u, AddressMode::DirectPage);
        step.decrement();
        return step.finish();
    }
    // include/macros.asm:938 REP #PROC_FLAGS::ACCUM8
    // Macro caller: src/overworld/adjust_position_vertical.asm:39 ASR8_INT @VIRTUAL06
    case 0xC03250: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_vertical.asm:40 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC03252: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:40 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC03254: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:40 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC03256: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:40 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC03258: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_vertical.asm:41 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC0325A: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:41 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC0325C: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:41 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC0325E: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:41 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC03260: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/adjust_position_vertical.asm:42 MOVE_INT_CONSTANT SHALLOW_WATER_SPEED, @VIRTUAL0A
    case 0xC03262: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x008000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/adjust_position_vertical.asm:42 MOVE_INT_CONSTANT SHALLOW_WATER_SPEED, @VIRTUAL0A
    // Overlapping static entry reached from 0xC03262.
    case 0xC03264: {
        Instruction step(cpu, 0x80, 0x000085u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:42 MOVE_INT_CONSTANT SHALLOW_WATER_SPEED, @VIRTUAL0A
    case 0xC03265: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/adjust_position_vertical.asm:42 MOVE_INT_CONSTANT SHALLOW_WATER_SPEED, @VIRTUAL0A
    case 0xC03267: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/adjust_position_vertical.asm:42 MOVE_INT_CONSTANT SHALLOW_WATER_SPEED, @VIRTUAL0A
    // Overlapping static entry reached from 0xC03267.
    case 0xC03269: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:42 MOVE_INT_CONSTANT SHALLOW_WATER_SPEED, @VIRTUAL0A
    case 0xC0326A: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:43 JSL MULT32
    case 0xC0326C: {
        Instruction step(cpu, 0x22, 0xC09068u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_vertical.asm:44 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC03270: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:44 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC03272: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:44 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC03274: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:44 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC03276: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_vertical.asm:45 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC03278: {
        Instruction step(cpu, 0xA5, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:45 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC0327A: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:45 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC0327C: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:45 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC0327E: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:46 PHA
    case 0xC03280: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:47 LDA @VIRTUAL06
    case 0xC03281: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:48 PHA
    case 0xC03283: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_vertical.asm:49 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC03284: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:49 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC03286: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:49 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC03288: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:49 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC0328A: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:931 LDA addr+1
    // Macro caller: src/overworld/adjust_position_vertical.asm:50 ASR8_INT @VIRTUAL06
    case 0xC0328C: {
        Instruction step(cpu, 0xA5, 0x000007u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:932 STA addr
    // Macro caller: src/overworld/adjust_position_vertical.asm:50 ASR8_INT @VIRTUAL06
    case 0xC0328E: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:932 STA addr
    // Macro caller: src/overworld/adjust_position_vertical.asm:50 ASR8_INT @VIRTUAL06
    // Overlapping static entry reached from 0xC0AFFE.
    case 0xC0328F: {
        Instruction step(cpu, 0x06, 0x0000E2u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:933 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/overworld/adjust_position_vertical.asm:50 ASR8_INT @VIRTUAL06
    case 0xC03290: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:933 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/overworld/adjust_position_vertical.asm:50 ASR8_INT @VIRTUAL06
    // Overlapping static entry reached from 0xC0328F.
    case 0xC03291: {
        Instruction step(cpu, 0x20, 0x0009A5u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:843 LDA src
    // Macro caller: src/overworld/adjust_position_vertical.asm:50 ASR8_INT @VIRTUAL06
    case 0xC03292: {
        Instruction step(cpu, 0xA5, 0x000009u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:50 ASR8_INT @VIRTUAL06
    case 0xC03294: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/overworld/adjust_position_vertical.asm:50 ASR8_INT @VIRTUAL06
    case 0xC03296: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:935 BPL :+
    // Macro caller: src/overworld/adjust_position_vertical.asm:50 ASR8_INT @VIRTUAL06
    case 0xC03298: {
        Instruction step(cpu, 0x10, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:936 DEC addr + 3
    // Macro caller: src/overworld/adjust_position_vertical.asm:50 ASR8_INT @VIRTUAL06
    case 0xC0329A: {
        Instruction step(cpu, 0xC6, 0x000009u, 2u, AddressMode::DirectPage);
        step.decrement();
        return step.finish();
    }
    // include/macros.asm:938 REP #PROC_FLAGS::ACCUM8
    // Macro caller: src/overworld/adjust_position_vertical.asm:50 ASR8_INT @VIRTUAL06
    case 0xC0329C: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:924 PLA
    // Macro caller: src/overworld/adjust_position_vertical.asm:51 PULL32 @VIRTUAL0A
    case 0xC0329E: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:925 STA val
    // Macro caller: src/overworld/adjust_position_vertical.asm:51 PULL32 @VIRTUAL0A
    case 0xC0329F: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:926 PLA
    // Macro caller: src/overworld/adjust_position_vertical.asm:51 PULL32 @VIRTUAL0A
    case 0xC032A1: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:927 STA val + 2
    // Macro caller: src/overworld/adjust_position_vertical.asm:51 PULL32 @VIRTUAL0A
    case 0xC032A2: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:52 CLC
    case 0xC032A4: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // include/macros.asm:942 LDA val1
    // Macro caller: src/overworld/adjust_position_vertical.asm:53 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC032A5: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:943 ADC val2
    // Macro caller: src/overworld/adjust_position_vertical.asm:53 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC032A7: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:944 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:53 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC032A9: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:53 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC032AB: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:53 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC032AD: {
        Instruction step(cpu, 0x65, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:53 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC032AF: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_vertical.asm:54 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC032B1: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:54 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC032B3: {
        Instruction step(cpu, 0x85, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:54 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC032B5: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:54 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC032B7: {
        Instruction step(cpu, 0x85, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:55 JMP @UNKNOWN14
    case 0xC032B9: {
        Instruction step(cpu, 0x4C, 0x003478u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:57 TYA
    case 0xC032BC: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:58 ASL
    case 0xC032BD: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:59 ASL
    case 0xC032BE: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:60 STA @VIRTUAL02
    case 0xC032BF: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:61 LDA GAME_STATE+game_state::walking_style
    case 0xC032C1: {
        Instruction step(cpu, 0xAD, 0x009B34u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:62 ASL
    case 0xC032C4: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:63 ASL
    case 0xC032C5: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:64 ASL
    case 0xC032C6: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:65 ASL
    case 0xC032C7: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:66 ASL
    case 0xC032C8: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:67 CLC
    case 0xC032C9: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:68 ADC @VIRTUAL02
    case 0xC032CA: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:69 CLC
    case 0xC032CC: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:70 ADC #.LOWORD(VERTICAL_MOVEMENT_SPEEDS)
    case 0xC032CD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00001Cu : 0x00531Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:70 ADC #.LOWORD(VERTICAL_MOVEMENT_SPEEDS)
    // Overlapping static entry reached from 0xC032CD.
    case 0xC032CF: {
        Instruction step(cpu, 0x53, 0x0000A8u, 2u, AddressMode::StackRelativeIndirectIndexedY);
        step.xor_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:71 TAY
    case 0xC032D0: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/overworld/adjust_position_vertical.asm:72 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC032D1: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1114 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:72 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC032D4: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/overworld/adjust_position_vertical.asm:72 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC032D6: {
        Instruction step(cpu, 0xB9, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:72 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC032D9: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:931 LDA addr+1
    // Macro caller: src/overworld/adjust_position_vertical.asm:73 ASR8_INT @VIRTUAL06
    case 0xC032DB: {
        Instruction step(cpu, 0xA5, 0x000007u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:932 STA addr
    // Macro caller: src/overworld/adjust_position_vertical.asm:73 ASR8_INT @VIRTUAL06
    case 0xC032DD: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:933 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/overworld/adjust_position_vertical.asm:73 ASR8_INT @VIRTUAL06
    case 0xC032DF: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:843 LDA src
    // Macro caller: src/overworld/adjust_position_vertical.asm:73 ASR8_INT @VIRTUAL06
    case 0xC032E1: {
        Instruction step(cpu, 0xA5, 0x000009u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:73 ASR8_INT @VIRTUAL06
    case 0xC032E3: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/overworld/adjust_position_vertical.asm:73 ASR8_INT @VIRTUAL06
    case 0xC032E5: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:935 BPL :+
    // Macro caller: src/overworld/adjust_position_vertical.asm:73 ASR8_INT @VIRTUAL06
    case 0xC032E7: {
        Instruction step(cpu, 0x10, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:936 DEC addr + 3
    // Macro caller: src/overworld/adjust_position_vertical.asm:73 ASR8_INT @VIRTUAL06
    case 0xC032E9: {
        Instruction step(cpu, 0xC6, 0x000009u, 2u, AddressMode::DirectPage);
        step.decrement();
        return step.finish();
    }
    // include/macros.asm:938 REP #PROC_FLAGS::ACCUM8
    // Macro caller: src/overworld/adjust_position_vertical.asm:73 ASR8_INT @VIRTUAL06
    case 0xC032EB: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_vertical.asm:74 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC032ED: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:74 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC032EF: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:74 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC032F1: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:74 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC032F3: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_vertical.asm:75 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC032F5: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:75 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC032F7: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:75 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC032F9: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:75 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC032FB: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/adjust_position_vertical.asm:76 MOVE_INT_CONSTANT DEEP_WATER_SPEED, @VIRTUAL0A
    case 0xC032FD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Au : 0x00547Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/adjust_position_vertical.asm:76 MOVE_INT_CONSTANT DEEP_WATER_SPEED, @VIRTUAL0A
    // Overlapping static entry reached from 0xC032FD.
    case 0xC032FF: {
        Instruction step(cpu, 0x54, 0x000A85u, 3u, AddressMode::BlockMove);
        step.move_byte_forward();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:76 MOVE_INT_CONSTANT DEEP_WATER_SPEED, @VIRTUAL0A
    case 0xC03300: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/adjust_position_vertical.asm:76 MOVE_INT_CONSTANT DEEP_WATER_SPEED, @VIRTUAL0A
    case 0xC03302: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/adjust_position_vertical.asm:76 MOVE_INT_CONSTANT DEEP_WATER_SPEED, @VIRTUAL0A
    // Overlapping static entry reached from 0xC03302.
    case 0xC03304: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:76 MOVE_INT_CONSTANT DEEP_WATER_SPEED, @VIRTUAL0A
    case 0xC03305: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:77 JSL MULT32
    case 0xC03307: {
        Instruction step(cpu, 0x22, 0xC09068u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_vertical.asm:78 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC0330B: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:78 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC0330D: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:78 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC0330F: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:78 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC03311: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_vertical.asm:79 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC03313: {
        Instruction step(cpu, 0xA5, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:79 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC03315: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:79 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC03317: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:79 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC03319: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:80 PHA
    case 0xC0331B: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:81 LDA @VIRTUAL06
    case 0xC0331C: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:82 PHA
    case 0xC0331E: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_vertical.asm:83 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC0331F: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:83 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC03321: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:83 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC03323: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:83 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC03325: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:931 LDA addr+1
    // Macro caller: src/overworld/adjust_position_vertical.asm:84 ASR8_INT @VIRTUAL06
    case 0xC03327: {
        Instruction step(cpu, 0xA5, 0x000007u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:932 STA addr
    // Macro caller: src/overworld/adjust_position_vertical.asm:84 ASR8_INT @VIRTUAL06
    case 0xC03329: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:933 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/overworld/adjust_position_vertical.asm:84 ASR8_INT @VIRTUAL06
    case 0xC0332B: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:843 LDA src
    // Macro caller: src/overworld/adjust_position_vertical.asm:84 ASR8_INT @VIRTUAL06
    case 0xC0332D: {
        Instruction step(cpu, 0xA5, 0x000009u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:84 ASR8_INT @VIRTUAL06
    case 0xC0332F: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/overworld/adjust_position_vertical.asm:84 ASR8_INT @VIRTUAL06
    case 0xC03331: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:935 BPL :+
    // Macro caller: src/overworld/adjust_position_vertical.asm:84 ASR8_INT @VIRTUAL06
    case 0xC03333: {
        Instruction step(cpu, 0x10, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:936 DEC addr + 3
    // Macro caller: src/overworld/adjust_position_vertical.asm:84 ASR8_INT @VIRTUAL06
    case 0xC03335: {
        Instruction step(cpu, 0xC6, 0x000009u, 2u, AddressMode::DirectPage);
        step.decrement();
        return step.finish();
    }
    // include/macros.asm:938 REP #PROC_FLAGS::ACCUM8
    // Macro caller: src/overworld/adjust_position_vertical.asm:84 ASR8_INT @VIRTUAL06
    case 0xC03337: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:924 PLA
    // Macro caller: src/overworld/adjust_position_vertical.asm:85 PULL32 @VIRTUAL0A
    case 0xC03339: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:925 STA val
    // Macro caller: src/overworld/adjust_position_vertical.asm:85 PULL32 @VIRTUAL0A
    case 0xC0333A: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:926 PLA
    // Macro caller: src/overworld/adjust_position_vertical.asm:85 PULL32 @VIRTUAL0A
    case 0xC0333C: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:927 STA val + 2
    // Macro caller: src/overworld/adjust_position_vertical.asm:85 PULL32 @VIRTUAL0A
    case 0xC0333D: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:86 CLC
    case 0xC0333F: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // include/macros.asm:942 LDA val1
    // Macro caller: src/overworld/adjust_position_vertical.asm:87 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC03340: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:943 ADC val2
    // Macro caller: src/overworld/adjust_position_vertical.asm:87 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC03342: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:944 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:87 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC03344: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:87 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC03346: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:87 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC03348: {
        Instruction step(cpu, 0x65, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:87 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0334A: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_vertical.asm:88 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC0334C: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:88 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC0334E: {
        Instruction step(cpu, 0x85, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:88 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC03350: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:88 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC03352: {
        Instruction step(cpu, 0x85, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:89 JMP @UNKNOWN14
    case 0xC03354: {
        Instruction step(cpu, 0x4C, 0x003478u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:91 LDA DEMO_FRAMES_LEFT
    case 0xC03357: {
        Instruction step(cpu, 0xAD, 0x000081u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:92 BEQ @UNKNOWN8
    case 0xC0335A: {
        Instruction step(cpu, 0xF0, 0x000037u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:93 TYA
    case 0xC0335C: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:94 ASL
    case 0xC0335D: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:95 ASL
    case 0xC0335E: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:96 STA @VIRTUAL02
    case 0xC0335F: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:97 LDA GAME_STATE+game_state::walking_style
    case 0xC03361: {
        Instruction step(cpu, 0xAD, 0x009B34u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:98 ASL
    case 0xC03364: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:99 ASL
    case 0xC03365: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:100 ASL
    case 0xC03366: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:101 ASL
    case 0xC03367: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:102 ASL
    case 0xC03368: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:103 CLC
    case 0xC03369: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:104 ADC @VIRTUAL02
    case 0xC0336A: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:105 CLC
    case 0xC0336C: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:106 ADC #.LOWORD(VERTICAL_MOVEMENT_SPEEDS)
    case 0xC0336D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00001Cu : 0x00531Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:106 ADC #.LOWORD(VERTICAL_MOVEMENT_SPEEDS)
    // Overlapping static entry reached from 0xC0336D.
    case 0xC0336F: {
        Instruction step(cpu, 0x53, 0x0000A8u, 2u, AddressMode::StackRelativeIndirectIndexedY);
        step.xor_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:107 TAY
    case 0xC03370: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/overworld/adjust_position_vertical.asm:108 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC03371: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1114 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:108 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC03374: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/overworld/adjust_position_vertical.asm:108 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC03376: {
        Instruction step(cpu, 0xB9, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:108 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC03379: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:109 CLC
    case 0xC0337B: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // include/macros.asm:942 LDA val1
    // Macro caller: src/overworld/adjust_position_vertical.asm:110 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0337C: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:943 ADC val2
    // Macro caller: src/overworld/adjust_position_vertical.asm:110 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0337E: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:944 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:110 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC03380: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:110 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC03382: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:110 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC03384: {
        Instruction step(cpu, 0x65, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:110 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC03386: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_vertical.asm:111 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC03388: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:111 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC0338A: {
        Instruction step(cpu, 0x85, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:111 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC0338C: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:111 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC0338E: {
        Instruction step(cpu, 0x85, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:112 JMP @UNKNOWN14
    case 0xC03390: {
        Instruction step(cpu, 0x4C, 0x003478u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:114 LDA GAME_STATE + game_state::party_status
    case 0xC03393: {
        Instruction step(cpu, 0xAD, 0x009AF1u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:115 AND #$00FF
    case 0xC03396: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:115 AND #$00FF
    // Overlapping static entry reached from 0xC03396.
    case 0xC03398: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:116 CMP #3
    case 0xC03399: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:116 CMP #3
    // Overlapping static entry reached from 0xC03399.
    case 0xC0339B: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/overworld/adjust_position_vertical.asm:117 BNEL @UNKNOWN13
    case 0xC0339C: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:117 BNEL @UNKNOWN13
    case 0xC0339E: {
        Instruction step(cpu, 0x4C, 0x003444u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:118 LDA GAME_STATE+game_state::walking_style
    case 0xC033A1: {
        Instruction step(cpu, 0xAD, 0x009B34u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:119 STA @LOCAL00
    case 0xC033A4: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/overworld/adjust_position_vertical.asm:120 BNEL @UNKNOWN13
    case 0xC033A6: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:120 BNEL @UNKNOWN13
    case 0xC033A8: {
        Instruction step(cpu, 0x4C, 0x003444u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:121 TYA
    case 0xC033AB: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:122 ASL
    case 0xC033AC: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:123 ASL
    case 0xC033AD: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:124 STA @VIRTUAL02
    case 0xC033AE: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:125 LDA @LOCAL00
    case 0xC033B0: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:126 ASL
    case 0xC033B2: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:127 ASL
    case 0xC033B3: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:128 ASL
    case 0xC033B4: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:129 ASL
    case 0xC033B5: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:130 ASL
    case 0xC033B6: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:131 CLC
    case 0xC033B7: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:132 ADC @VIRTUAL02
    case 0xC033B8: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:133 CLC
    case 0xC033BA: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:134 ADC #.LOWORD(VERTICAL_MOVEMENT_SPEEDS)
    case 0xC033BB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00001Cu : 0x00531Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:134 ADC #.LOWORD(VERTICAL_MOVEMENT_SPEEDS)
    // Overlapping static entry reached from 0xC033BB.
    case 0xC033BD: {
        Instruction step(cpu, 0x53, 0x0000A8u, 2u, AddressMode::StackRelativeIndirectIndexedY);
        step.xor_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:135 TAY
    case 0xC033BE: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/overworld/adjust_position_vertical.asm:136 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC033BF: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1114 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:136 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC033C2: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/overworld/adjust_position_vertical.asm:136 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC033C4: {
        Instruction step(cpu, 0xB9, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:136 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC033C7: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:931 LDA addr+1
    // Macro caller: src/overworld/adjust_position_vertical.asm:137 ASR8_INT @VIRTUAL06
    case 0xC033C9: {
        Instruction step(cpu, 0xA5, 0x000007u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:932 STA addr
    // Macro caller: src/overworld/adjust_position_vertical.asm:137 ASR8_INT @VIRTUAL06
    case 0xC033CB: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:933 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/overworld/adjust_position_vertical.asm:137 ASR8_INT @VIRTUAL06
    case 0xC033CD: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:843 LDA src
    // Macro caller: src/overworld/adjust_position_vertical.asm:137 ASR8_INT @VIRTUAL06
    case 0xC033CF: {
        Instruction step(cpu, 0xA5, 0x000009u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:137 ASR8_INT @VIRTUAL06
    case 0xC033D1: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/overworld/adjust_position_vertical.asm:137 ASR8_INT @VIRTUAL06
    case 0xC033D3: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:935 BPL :+
    // Macro caller: src/overworld/adjust_position_vertical.asm:137 ASR8_INT @VIRTUAL06
    case 0xC033D5: {
        Instruction step(cpu, 0x10, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:936 DEC addr + 3
    // Macro caller: src/overworld/adjust_position_vertical.asm:137 ASR8_INT @VIRTUAL06
    case 0xC033D7: {
        Instruction step(cpu, 0xC6, 0x000009u, 2u, AddressMode::DirectPage);
        step.decrement();
        return step.finish();
    }
    // include/macros.asm:938 REP #PROC_FLAGS::ACCUM8
    // Macro caller: src/overworld/adjust_position_vertical.asm:137 ASR8_INT @VIRTUAL06
    case 0xC033D9: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_vertical.asm:138 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC033DB: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:138 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC033DD: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:138 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC033DF: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:138 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC033E1: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_vertical.asm:139 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC033E3: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:139 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC033E5: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:139 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC033E7: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:139 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC033E9: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/adjust_position_vertical.asm:140 MOVE_INT_CONSTANT SKIP_SANDWICH_SPEED, @VIRTUAL0A
    case 0xC033EB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x008000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/adjust_position_vertical.asm:140 MOVE_INT_CONSTANT SKIP_SANDWICH_SPEED, @VIRTUAL0A
    // Overlapping static entry reached from 0xC033EB.
    case 0xC033ED: {
        Instruction step(cpu, 0x80, 0x000085u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:140 MOVE_INT_CONSTANT SKIP_SANDWICH_SPEED, @VIRTUAL0A
    case 0xC033EE: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/adjust_position_vertical.asm:140 MOVE_INT_CONSTANT SKIP_SANDWICH_SPEED, @VIRTUAL0A
    case 0xC033F0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/adjust_position_vertical.asm:140 MOVE_INT_CONSTANT SKIP_SANDWICH_SPEED, @VIRTUAL0A
    // Overlapping static entry reached from 0xC033F0.
    case 0xC033F2: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:140 MOVE_INT_CONSTANT SKIP_SANDWICH_SPEED, @VIRTUAL0A
    case 0xC033F3: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:141 JSL MULT32
    case 0xC033F5: {
        Instruction step(cpu, 0x22, 0xC09068u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_vertical.asm:142 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC033F9: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:142 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC033FB: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:142 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC033FD: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:142 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC033FF: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_vertical.asm:143 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC03401: {
        Instruction step(cpu, 0xA5, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:143 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC03403: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:143 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC03405: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:143 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC03407: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:144 PHA
    case 0xC03409: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:145 LDA @VIRTUAL06
    case 0xC0340A: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:146 PHA
    case 0xC0340C: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_vertical.asm:147 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC0340D: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:147 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC0340F: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:147 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC03411: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:147 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC03413: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:931 LDA addr+1
    // Macro caller: src/overworld/adjust_position_vertical.asm:148 ASR8_INT @VIRTUAL06
    case 0xC03415: {
        Instruction step(cpu, 0xA5, 0x000007u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:932 STA addr
    // Macro caller: src/overworld/adjust_position_vertical.asm:148 ASR8_INT @VIRTUAL06
    case 0xC03417: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:933 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/overworld/adjust_position_vertical.asm:148 ASR8_INT @VIRTUAL06
    case 0xC03419: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:843 LDA src
    // Macro caller: src/overworld/adjust_position_vertical.asm:148 ASR8_INT @VIRTUAL06
    case 0xC0341B: {
        Instruction step(cpu, 0xA5, 0x000009u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:148 ASR8_INT @VIRTUAL06
    case 0xC0341D: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/overworld/adjust_position_vertical.asm:148 ASR8_INT @VIRTUAL06
    case 0xC0341F: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:935 BPL :+
    // Macro caller: src/overworld/adjust_position_vertical.asm:148 ASR8_INT @VIRTUAL06
    case 0xC03421: {
        Instruction step(cpu, 0x10, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:936 DEC addr + 3
    // Macro caller: src/overworld/adjust_position_vertical.asm:148 ASR8_INT @VIRTUAL06
    case 0xC03423: {
        Instruction step(cpu, 0xC6, 0x000009u, 2u, AddressMode::DirectPage);
        step.decrement();
        return step.finish();
    }
    // include/macros.asm:938 REP #PROC_FLAGS::ACCUM8
    // Macro caller: src/overworld/adjust_position_vertical.asm:148 ASR8_INT @VIRTUAL06
    case 0xC03425: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:924 PLA
    // Macro caller: src/overworld/adjust_position_vertical.asm:149 PULL32 @VIRTUAL0A
    case 0xC03427: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:925 STA val
    // Macro caller: src/overworld/adjust_position_vertical.asm:149 PULL32 @VIRTUAL0A
    case 0xC03428: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:926 PLA
    // Macro caller: src/overworld/adjust_position_vertical.asm:149 PULL32 @VIRTUAL0A
    case 0xC0342A: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:927 STA val + 2
    // Macro caller: src/overworld/adjust_position_vertical.asm:149 PULL32 @VIRTUAL0A
    case 0xC0342B: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:150 CLC
    case 0xC0342D: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // include/macros.asm:942 LDA val1
    // Macro caller: src/overworld/adjust_position_vertical.asm:151 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0342E: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:943 ADC val2
    // Macro caller: src/overworld/adjust_position_vertical.asm:151 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC03430: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:944 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:151 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC03432: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:151 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC03434: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:151 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC03436: {
        Instruction step(cpu, 0x65, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:151 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC03438: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_vertical.asm:152 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC0343A: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:152 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC0343C: {
        Instruction step(cpu, 0x85, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:152 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC0343E: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:152 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC03440: {
        Instruction step(cpu, 0x85, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:153 BRA @UNKNOWN14
    case 0xC03442: {
        Instruction step(cpu, 0x80, 0x000034u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:155 TYA
    case 0xC03444: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:156 ASL
    case 0xC03445: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:157 ASL
    case 0xC03446: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:158 STA @VIRTUAL02
    case 0xC03447: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:159 LDA GAME_STATE+game_state::walking_style
    case 0xC03449: {
        Instruction step(cpu, 0xAD, 0x009B34u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:160 ASL
    case 0xC0344C: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:161 ASL
    case 0xC0344D: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:162 ASL
    case 0xC0344E: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:163 ASL
    case 0xC0344F: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:164 ASL
    case 0xC03450: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:165 CLC
    case 0xC03451: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:166 ADC @VIRTUAL02
    case 0xC03452: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:167 CLC
    case 0xC03454: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:168 ADC #.LOWORD(VERTICAL_MOVEMENT_SPEEDS)
    case 0xC03455: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00001Cu : 0x00531Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:168 ADC #.LOWORD(VERTICAL_MOVEMENT_SPEEDS)
    // Overlapping static entry reached from 0xC03455.
    case 0xC03457: {
        Instruction step(cpu, 0x53, 0x0000A8u, 2u, AddressMode::StackRelativeIndirectIndexedY);
        step.xor_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:169 TAY
    case 0xC03458: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/overworld/adjust_position_vertical.asm:170 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC03459: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1114 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:170 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC0345C: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/overworld/adjust_position_vertical.asm:170 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC0345E: {
        Instruction step(cpu, 0xB9, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:170 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC03461: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_position_vertical.asm:171 CLC
    case 0xC03463: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // include/macros.asm:942 LDA val1
    // Macro caller: src/overworld/adjust_position_vertical.asm:172 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC03464: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:943 ADC val2
    // Macro caller: src/overworld/adjust_position_vertical.asm:172 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC03466: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:944 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:172 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC03468: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:172 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0346A: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:172 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0346C: {
        Instruction step(cpu, 0x65, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:172 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0346E: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/adjust_position_vertical.asm:173 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC03470: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/adjust_position_vertical.asm:173 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC03472: {
        Instruction step(cpu, 0x85, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:173 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC03474: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/adjust_position_vertical.asm:173 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC03476: {
        Instruction step(cpu, 0x85, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/adjust_position_vertical.asm:175 END_C_FUNCTION
    case 0xC03478: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/overworld/adjust_position_vertical.asm:175 END_C_FUNCTION
    case 0xC03479: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
