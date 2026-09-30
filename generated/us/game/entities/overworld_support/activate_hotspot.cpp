// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/overworld/activate_hotspot.asm
bool resume_overworld_activate_hotspot(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/activate_hotspot.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC072CF: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/activate_hotspot.asm:15 END_STACK_VARS
    case 0xC072D1: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/activate_hotspot.asm:15 END_STACK_VARS
    case 0xC072D2: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/activate_hotspot.asm:15 END_STACK_VARS
    case 0xC072D3: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/activate_hotspot.asm:15 END_STACK_VARS
    case 0xC072D4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000E2u : 0x00FFE2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/activate_hotspot.asm:15 END_STACK_VARS
    // Overlapping static entry reached from 0xC072D4.
    case 0xC072D6: {
        Instruction step(cpu, 0xFF, 0x86685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/activate_hotspot.asm:15 END_STACK_VARS
    case 0xC072D7: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/activate_hotspot.asm:15 END_STACK_VARS
    case 0xC072D8: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:16 STX @LOCAL06
    case 0xC072D9: {
        Instruction step(cpu, 0x86, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:16 STX @LOCAL06
    // Overlapping static entry reached from 0xC072D6.
    case 0xC072DA: {
        Instruction step(cpu, 0x1C, 0x001A85u, 3u, AddressMode::Absolute);
        step.reset_tested_bits();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:17 STA @LOCAL05
    case 0xC072DB: {
        Instruction step(cpu, 0x85, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/activate_hotspot.asm:18 MOVE_INT @PARAM02, @VIRTUAL0A
    case 0xC072DD: {
        Instruction step(cpu, 0xA5, 0x00002Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/activate_hotspot.asm:18 MOVE_INT @PARAM02, @VIRTUAL0A
    case 0xC072DF: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/activate_hotspot.asm:18 MOVE_INT @PARAM02, @VIRTUAL0A
    case 0xC072E1: {
        Instruction step(cpu, 0xA5, 0x00002Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/activate_hotspot.asm:18 MOVE_INT @PARAM02, @VIRTUAL0A
    case 0xC072E3: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/activate_hotspot.asm:19 LOADPTR MAP_HOTSPOTS, @VIRTUAL06
    case 0xC072E5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FBu : 0x00F2FBu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/activate_hotspot.asm:19 LOADPTR MAP_HOTSPOTS, @VIRTUAL06
    // Overlapping static entry reached from 0xC072E5.
    case 0xC072E7: {
        Instruction step(cpu, 0xF2, 0x000085u, 2u, AddressMode::DirectPageIndirect);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/activate_hotspot.asm:19 LOADPTR MAP_HOTSPOTS, @VIRTUAL06
    case 0xC072E8: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/activate_hotspot.asm:19 LOADPTR MAP_HOTSPOTS, @VIRTUAL06
    // Overlapping static entry reached from 0xC072E7.
    case 0xC072E9: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/activate_hotspot.asm:19 LOADPTR MAP_HOTSPOTS, @VIRTUAL06
    case 0xC072EA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D5u : 0x0000D5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/activate_hotspot.asm:19 LOADPTR MAP_HOTSPOTS, @VIRTUAL06
    // Overlapping static entry reached from 0xC072E9.
    case 0xC072EB: {
        Instruction step(cpu, 0xD5, 0x000000u, 2u, AddressMode::DirectPageIndexedX);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/activate_hotspot.asm:19 LOADPTR MAP_HOTSPOTS, @VIRTUAL06
    // Overlapping static entry reached from 0xC072EA.
    case 0xC072EC: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/activate_hotspot.asm:19 LOADPTR MAP_HOTSPOTS, @VIRTUAL06
    case 0xC072ED: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:20 LDA @LOCAL06
    case 0xC072EF: {
        Instruction step(cpu, 0xA5, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:21 ASL
    case 0xC072F1: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:22 ASL
    case 0xC072F2: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:23 ASL
    case 0xC072F3: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:24 CLC
    case 0xC072F4: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:25 ADC @VIRTUAL06
    case 0xC072F5: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:26 STA @VIRTUAL06
    case 0xC072F7: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:27 STA @LOCAL04
    case 0xC072F9: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:28 LDA @VIRTUAL06+2
    case 0xC072FB: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:29 STA @LOCAL04+2
    case 0xC072FD: {
        Instruction step(cpu, 0x85, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:30 LDA @LOCAL05
    case 0xC072FF: {
        Instruction step(cpu, 0xA5, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:31 DEC
    case 0xC07301: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // include/macros.asm:574 STA scratch
    // Macro caller: src/overworld/activate_hotspot.asm:32 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(active_hotspot)
    case 0xC07302: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:575 ASL
    // Macro caller: src/overworld/activate_hotspot.asm:32 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(active_hotspot)
    case 0xC07304: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:576 ADC scratch
    // Macro caller: src/overworld/activate_hotspot.asm:32 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(active_hotspot)
    case 0xC07305: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:577 ASL
    // Macro caller: src/overworld/activate_hotspot.asm:32 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(active_hotspot)
    case 0xC07307: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:578 ADC scratch
    // Macro caller: src/overworld/activate_hotspot.asm:32 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(active_hotspot)
    case 0xC07308: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:579 ASL
    // Macro caller: src/overworld/activate_hotspot.asm:32 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(active_hotspot)
    case 0xC0730A: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:33 CLC
    case 0xC0730B: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:34 ADC #.LOWORD(ACTIVE_HOTSPOTS)
    case 0xC0730C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00003Cu : 0x005E3Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:34 ADC #.LOWORD(ACTIVE_HOTSPOTS)
    // Overlapping static entry reached from 0xC0730C.
    case 0xC0730E: {
        Instruction step(cpu, 0x5E, 0x0084A8u, 3u, AddressMode::AbsoluteIndexedX);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:35 TAY
    case 0xC0730F: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:36 STY @LOCAL03
    case 0xC07310: {
        Instruction step(cpu, 0x84, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:36 STY @LOCAL03
    // Overlapping static entry reached from 0xC0730E.
    case 0xC07311: {
        Instruction step(cpu, 0x14, 0x0000ADu, 2u, AddressMode::DirectPage);
        step.reset_tested_bits();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:37 LDA GAME_STATE+game_state::leader_x_coord
    case 0xC07312: {
        Instruction step(cpu, 0xAD, 0x009877u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:37 LDA GAME_STATE+game_state::leader_x_coord
    // Overlapping static entry reached from 0xC07311.
    case 0xC07313: {
        Instruction step(cpu, 0x77, 0x000098u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:38 STA @LOCAL02
    case 0xC07315: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:39 LDX GAME_STATE+game_state::leader_y_coord
    case 0xC07317: {
        Instruction step(cpu, 0xAE, 0x00987Bu, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:40 LDA [@VIRTUAL06]
    case 0xC0731A: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:41 ASL
    case 0xC0731C: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:42 ASL
    case 0xC0731D: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:43 ASL
    case 0xC0731E: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:44 STA @LOCAL01
    case 0xC0731F: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/activate_hotspot.asm:45 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC07321: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/activate_hotspot.asm:45 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC07323: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/activate_hotspot.asm:45 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC07325: {
        Instruction step(cpu, 0xA5, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/activate_hotspot.asm:45 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC07327: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:46 LDY #2
    case 0xC07329: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:46 LDY #2
    // Overlapping static entry reached from 0xC07329.
    case 0xC0732B: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:47 LDA [@VIRTUAL06],Y
    case 0xC0732C: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:48 ASL
    case 0xC0732E: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:49 ASL
    case 0xC0732F: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:50 ASL
    case 0xC07330: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:51 STA @LOCAL00
    case 0xC07331: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:52 LDY #4
    case 0xC07333: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:52 LDY #4
    // Overlapping static entry reached from 0xC07333.
    case 0xC07335: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:53 LDA [@VIRTUAL06],Y
    case 0xC07336: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:54 ASL
    case 0xC07338: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:55 ASL
    case 0xC07339: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:56 ASL
    case 0xC0733A: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:57 STA @VIRTUAL02
    case 0xC0733B: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:58 LDY #6
    case 0xC0733D: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:58 LDY #6
    // Overlapping static entry reached from 0xC0733D.
    case 0xC0733F: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:59 LDA [@VIRTUAL06],Y
    case 0xC07340: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:60 ASL
    case 0xC07342: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:61 ASL
    case 0xC07343: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:62 ASL
    case 0xC07344: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:63 STA @VIRTUAL04
    case 0xC07345: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:64 LDA @LOCAL02
    case 0xC07347: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:65 CMP @LOCAL01
    case 0xC07349: {
        Instruction step(cpu, 0xC5, 0x000010u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:761 BCC dest
    // Macro caller: src/overworld/activate_hotspot.asm:66 BLTEQ @UNKNOWN0
    case 0xC0734B: {
        Instruction step(cpu, 0x90, 0x000016u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/overworld/activate_hotspot.asm:66 BLTEQ @UNKNOWN0
    case 0xC0734D: {
        Instruction step(cpu, 0xF0, 0x000014u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:67 CMP @VIRTUAL02
    case 0xC0734F: {
        Instruction step(cpu, 0xC5, 0x000002u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:68 BCS @UNKNOWN0
    case 0xC07351: {
        Instruction step(cpu, 0xB0, 0x000010u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:69 CPX @LOCAL00
    case 0xC07353: {
        Instruction step(cpu, 0xE4, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.compare_x();
        return step.finish();
    }
    // include/macros.asm:761 BCC dest
    // Macro caller: src/overworld/activate_hotspot.asm:70 BLTEQ @UNKNOWN0
    case 0xC07355: {
        Instruction step(cpu, 0x90, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/overworld/activate_hotspot.asm:70 BLTEQ @UNKNOWN0
    case 0xC07357: {
        Instruction step(cpu, 0xF0, 0x00000Au, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:71 TXA
    case 0xC07359: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:72 CMP @VIRTUAL04
    case 0xC0735A: {
        Instruction step(cpu, 0xC5, 0x000004u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:73 BCS @UNKNOWN0
    case 0xC0735C: {
        Instruction step(cpu, 0xB0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:74 LDX #1
    case 0xC0735E: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:74 LDX #1
    // Overlapping static entry reached from 0xC0735E.
    case 0xC07360: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:75 BRA @UNKNOWN1
    case 0xC07361: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:77 LDX #2
    case 0xC07363: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:77 LDX #2
    // Overlapping static entry reached from 0xC07363.
    case 0xC07365: {
        Instruction step(cpu, 0x00, 0x00008Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:79 TXA
    case 0xC07366: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:80 LDY @LOCAL03
    case 0xC07367: {
        Instruction step(cpu, 0xA4, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:81 STA a:active_hotspot::mode,Y
    case 0xC07369: {
        Instruction step(cpu, 0x99, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:82 LDA @LOCAL01
    case 0xC0736C: {
        Instruction step(cpu, 0xA5, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:83 STA a:active_hotspot::x1,Y
    case 0xC0736E: {
        Instruction step(cpu, 0x99, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:84 LDA @VIRTUAL02
    case 0xC07371: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:85 STA a:active_hotspot::x2,Y
    case 0xC07373: {
        Instruction step(cpu, 0x99, 0x000006u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:86 LDA @LOCAL00
    case 0xC07376: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:87 STA a:active_hotspot::y1,Y
    case 0xC07378: {
        Instruction step(cpu, 0x99, 0x000004u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:88 LDA @VIRTUAL04
    case 0xC0737B: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:89 STA a:active_hotspot::y2,Y
    case 0xC0737D: {
        Instruction step(cpu, 0x99, 0x000008u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:90 TYA
    case 0xC07380: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:91 CLC
    case 0xC07381: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:92 ADC #active_hotspot::pointer
    case 0xC07382: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:92 ADC #active_hotspot::pointer
    // Overlapping static entry reached from 0xC07382.
    case 0xC07384: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:93 TAY
    case 0xC07385: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1075 LDA src
    // Macro caller: src/overworld/activate_hotspot.asm:94 MOVE_INT_YPTRDEST @VIRTUAL0A, __BSS_START__
    case 0xC07386: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/overworld/activate_hotspot.asm:94 MOVE_INT_YPTRDEST @VIRTUAL0A, __BSS_START__
    case 0xC07388: {
        Instruction step(cpu, 0x99, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/overworld/activate_hotspot.asm:94 MOVE_INT_YPTRDEST @VIRTUAL0A, __BSS_START__
    case 0xC0738B: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/overworld/activate_hotspot.asm:94 MOVE_INT_YPTRDEST @VIRTUAL0A, __BSS_START__
    case 0xC0738D: {
        Instruction step(cpu, 0x99, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:95 LDA @LOCAL05
    case 0xC07390: {
        Instruction step(cpu, 0xA5, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:96 DEC
    case 0xC07392: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:97 STA @LOCAL02
    case 0xC07393: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:98 CLC
    case 0xC07395: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:99 ADC #.LOWORD(GAME_STATE)
    case 0xC07396: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000F5u : 0x0097F5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:99 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC07396.
    case 0xC07398: {
        Instruction step(cpu, 0x97, 0x0000A8u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:100 TAY
    case 0xC07399: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:101 TXA
    case 0xC0739A: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:102 SEP #PROC_FLAGS::ACCUM8
    case 0xC0739B: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:103 STA __BSS_START__ + game_state::active_hotspot_modes,Y
    case 0xC0739D: {
        Instruction step(cpu, 0x99, 0x0000C8u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:104 REP #PROC_FLAGS::ACCUM8
    case 0xC073A0: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:105 LDA @LOCAL06
    case 0xC073A2: {
        Instruction step(cpu, 0xA5, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:106 SEP #PROC_FLAGS::ACCUM8
    case 0xC073A4: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:107 STA __BSS_START__+game_state::active_hotspot_ids,Y
    case 0xC073A6: {
        Instruction step(cpu, 0x99, 0x0000CAu, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:108 REP #PROC_FLAGS::ACCUM8
    case 0xC073A9: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:109 LDA @LOCAL02
    case 0xC073AB: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:110 ASL
    case 0xC073AD: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:111 ASL
    case 0xC073AE: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:112 CLC
    case 0xC073AF: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:118 ADC #.LOWORD(GAME_STATE) + game_state::active_hotspot_pointers
    case 0xC073B0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000C1u : 0x0098C1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:118 ADC #.LOWORD(GAME_STATE) + game_state::active_hotspot_pointers
    // Overlapping static entry reached from 0xC073B0.
    case 0xC073B2: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:120 TAY
    case 0xC073B3: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1075 LDA src
    // Macro caller: src/overworld/activate_hotspot.asm:121 MOVE_INT_YPTRDEST @VIRTUAL0A, __BSS_START__
    case 0xC073B4: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/overworld/activate_hotspot.asm:121 MOVE_INT_YPTRDEST @VIRTUAL0A, __BSS_START__
    case 0xC073B6: {
        Instruction step(cpu, 0x99, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/overworld/activate_hotspot.asm:121 MOVE_INT_YPTRDEST @VIRTUAL0A, __BSS_START__
    case 0xC073B9: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/overworld/activate_hotspot.asm:121 MOVE_INT_YPTRDEST @VIRTUAL0A, __BSS_START__
    case 0xC073BB: {
        Instruction step(cpu, 0x99, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/activate_hotspot.asm:122 END_C_FUNCTION
    case 0xC073BE: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/activate_hotspot.asm:122 END_C_FUNCTION
    case 0xC073BF: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
