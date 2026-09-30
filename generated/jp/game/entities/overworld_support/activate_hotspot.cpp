// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/overworld/activate_hotspot.asm
bool resume_overworld_activate_hotspot(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/activate_hotspot.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC07507: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/activate_hotspot.asm:15 END_STACK_VARS
    case 0xC07509: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/activate_hotspot.asm:15 END_STACK_VARS
    case 0xC0750A: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/activate_hotspot.asm:15 END_STACK_VARS
    case 0xC0750B: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/activate_hotspot.asm:15 END_STACK_VARS
    case 0xC0750C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000E2u : 0x00FFE2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/activate_hotspot.asm:15 END_STACK_VARS
    // Overlapping static entry reached from 0xC0750C.
    case 0xC0750E: {
        Instruction step(cpu, 0xFF, 0x86685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/activate_hotspot.asm:15 END_STACK_VARS
    case 0xC0750F: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/activate_hotspot.asm:15 END_STACK_VARS
    case 0xC07510: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:16 STX @LOCAL06
    case 0xC07511: {
        Instruction step(cpu, 0x86, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:16 STX @LOCAL06
    // Overlapping static entry reached from 0xC0750E.
    case 0xC07512: {
        Instruction step(cpu, 0x1C, 0x001A85u, 3u, AddressMode::Absolute);
        step.reset_tested_bits();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:17 STA @LOCAL05
    case 0xC07513: {
        Instruction step(cpu, 0x85, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/activate_hotspot.asm:18 MOVE_INT @PARAM02, @VIRTUAL0A
    case 0xC07515: {
        Instruction step(cpu, 0xA5, 0x00002Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/activate_hotspot.asm:18 MOVE_INT @PARAM02, @VIRTUAL0A
    case 0xC07517: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/activate_hotspot.asm:18 MOVE_INT @PARAM02, @VIRTUAL0A
    case 0xC07519: {
        Instruction step(cpu, 0xA5, 0x00002Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/activate_hotspot.asm:18 MOVE_INT @PARAM02, @VIRTUAL0A
    case 0xC0751B: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/activate_hotspot.asm:19 LOADPTR MAP_HOTSPOTS, @VIRTUAL06
    case 0xC0751D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00005Bu : 0x00F25Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/activate_hotspot.asm:19 LOADPTR MAP_HOTSPOTS, @VIRTUAL06
    // Overlapping static entry reached from 0xC0751D.
    case 0xC0751F: {
        Instruction step(cpu, 0xF2, 0x000085u, 2u, AddressMode::DirectPageIndirect);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/activate_hotspot.asm:19 LOADPTR MAP_HOTSPOTS, @VIRTUAL06
    case 0xC07520: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/activate_hotspot.asm:19 LOADPTR MAP_HOTSPOTS, @VIRTUAL06
    // Overlapping static entry reached from 0xC0751F.
    case 0xC07521: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/activate_hotspot.asm:19 LOADPTR MAP_HOTSPOTS, @VIRTUAL06
    case 0xC07522: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D5u : 0x0000D5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/activate_hotspot.asm:19 LOADPTR MAP_HOTSPOTS, @VIRTUAL06
    // Overlapping static entry reached from 0xC07521.
    case 0xC07523: {
        Instruction step(cpu, 0xD5, 0x000000u, 2u, AddressMode::DirectPageIndexedX);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/activate_hotspot.asm:19 LOADPTR MAP_HOTSPOTS, @VIRTUAL06
    // Overlapping static entry reached from 0xC07522.
    case 0xC07524: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/activate_hotspot.asm:19 LOADPTR MAP_HOTSPOTS, @VIRTUAL06
    case 0xC07525: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:20 LDA @LOCAL06
    case 0xC07527: {
        Instruction step(cpu, 0xA5, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:21 ASL
    case 0xC07529: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:22 ASL
    case 0xC0752A: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:23 ASL
    case 0xC0752B: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:24 CLC
    case 0xC0752C: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:25 ADC @VIRTUAL06
    case 0xC0752D: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:26 STA @VIRTUAL06
    case 0xC0752F: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:27 STA @LOCAL04
    case 0xC07531: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:28 LDA @VIRTUAL06+2
    case 0xC07533: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:29 STA @LOCAL04+2
    case 0xC07535: {
        Instruction step(cpu, 0x85, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:30 LDA @LOCAL05
    case 0xC07537: {
        Instruction step(cpu, 0xA5, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:31 DEC
    case 0xC07539: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // include/macros.asm:574 STA scratch
    // Macro caller: src/overworld/activate_hotspot.asm:32 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(active_hotspot)
    case 0xC0753A: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:575 ASL
    // Macro caller: src/overworld/activate_hotspot.asm:32 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(active_hotspot)
    case 0xC0753C: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:576 ADC scratch
    // Macro caller: src/overworld/activate_hotspot.asm:32 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(active_hotspot)
    case 0xC0753D: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:577 ASL
    // Macro caller: src/overworld/activate_hotspot.asm:32 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(active_hotspot)
    case 0xC0753F: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:578 ADC scratch
    // Macro caller: src/overworld/activate_hotspot.asm:32 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(active_hotspot)
    case 0xC07540: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:579 ASL
    // Macro caller: src/overworld/activate_hotspot.asm:32 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(active_hotspot)
    case 0xC07542: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:33 CLC
    case 0xC07543: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:34 ADC #.LOWORD(ACTIVE_HOTSPOTS)
    case 0xC07544: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000C2u : 0x0061C2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:34 ADC #.LOWORD(ACTIVE_HOTSPOTS)
    // Overlapping static entry reached from 0xC07544.
    case 0xC07546: {
        Instruction step(cpu, 0x61, 0x0000A8u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:35 TAY
    case 0xC07547: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:36 STY @LOCAL03
    case 0xC07548: {
        Instruction step(cpu, 0x84, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:37 LDA GAME_STATE+game_state::leader_x_coord
    case 0xC0754A: {
        Instruction step(cpu, 0xAD, 0x009B28u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:38 STA @LOCAL02
    case 0xC0754D: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:39 LDX GAME_STATE+game_state::leader_y_coord
    case 0xC0754F: {
        Instruction step(cpu, 0xAE, 0x009B2Cu, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:40 LDA [@VIRTUAL06]
    case 0xC07552: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:41 ASL
    case 0xC07554: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:42 ASL
    case 0xC07555: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:43 ASL
    case 0xC07556: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:44 STA @LOCAL01
    case 0xC07557: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/activate_hotspot.asm:45 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC07559: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/activate_hotspot.asm:45 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC0755B: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/activate_hotspot.asm:45 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC0755D: {
        Instruction step(cpu, 0xA5, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/activate_hotspot.asm:45 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC0755F: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:46 LDY #2
    case 0xC07561: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:46 LDY #2
    // Overlapping static entry reached from 0xC07561.
    case 0xC07563: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:47 LDA [@VIRTUAL06],Y
    case 0xC07564: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:48 ASL
    case 0xC07566: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:49 ASL
    case 0xC07567: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:50 ASL
    case 0xC07568: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:51 STA @LOCAL00
    case 0xC07569: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:52 LDY #4
    case 0xC0756B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:52 LDY #4
    // Overlapping static entry reached from 0xC0756B.
    case 0xC0756D: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:53 LDA [@VIRTUAL06],Y
    case 0xC0756E: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:54 ASL
    case 0xC07570: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:55 ASL
    case 0xC07571: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:56 ASL
    case 0xC07572: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:57 STA @VIRTUAL02
    case 0xC07573: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:58 LDY #6
    case 0xC07575: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:58 LDY #6
    // Overlapping static entry reached from 0xC07575.
    case 0xC07577: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:59 LDA [@VIRTUAL06],Y
    case 0xC07578: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:60 ASL
    case 0xC0757A: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:61 ASL
    case 0xC0757B: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:62 ASL
    case 0xC0757C: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:63 STA @VIRTUAL04
    case 0xC0757D: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:64 LDA @LOCAL02
    case 0xC0757F: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:65 CMP @LOCAL01
    case 0xC07581: {
        Instruction step(cpu, 0xC5, 0x000010u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:761 BCC dest
    // Macro caller: src/overworld/activate_hotspot.asm:66 BLTEQ @UNKNOWN0
    case 0xC07583: {
        Instruction step(cpu, 0x90, 0x000016u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/overworld/activate_hotspot.asm:66 BLTEQ @UNKNOWN0
    case 0xC07585: {
        Instruction step(cpu, 0xF0, 0x000014u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:67 CMP @VIRTUAL02
    case 0xC07587: {
        Instruction step(cpu, 0xC5, 0x000002u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:68 BCS @UNKNOWN0
    case 0xC07589: {
        Instruction step(cpu, 0xB0, 0x000010u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:69 CPX @LOCAL00
    case 0xC0758B: {
        Instruction step(cpu, 0xE4, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.compare_x();
        return step.finish();
    }
    // include/macros.asm:761 BCC dest
    // Macro caller: src/overworld/activate_hotspot.asm:70 BLTEQ @UNKNOWN0
    case 0xC0758D: {
        Instruction step(cpu, 0x90, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/overworld/activate_hotspot.asm:70 BLTEQ @UNKNOWN0
    case 0xC0758F: {
        Instruction step(cpu, 0xF0, 0x00000Au, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:71 TXA
    case 0xC07591: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:72 CMP @VIRTUAL04
    case 0xC07592: {
        Instruction step(cpu, 0xC5, 0x000004u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:73 BCS @UNKNOWN0
    case 0xC07594: {
        Instruction step(cpu, 0xB0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:74 LDX #1
    case 0xC07596: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:74 LDX #1
    // Overlapping static entry reached from 0xC07596.
    case 0xC07598: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:75 BRA @UNKNOWN1
    case 0xC07599: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:77 LDX #2
    case 0xC0759B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:77 LDX #2
    // Overlapping static entry reached from 0xC0759B.
    case 0xC0759D: {
        Instruction step(cpu, 0x00, 0x00008Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:79 TXA
    case 0xC0759E: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:80 LDY @LOCAL03
    case 0xC0759F: {
        Instruction step(cpu, 0xA4, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:81 STA a:active_hotspot::mode,Y
    case 0xC075A1: {
        Instruction step(cpu, 0x99, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:82 LDA @LOCAL01
    case 0xC075A4: {
        Instruction step(cpu, 0xA5, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:83 STA a:active_hotspot::x1,Y
    case 0xC075A6: {
        Instruction step(cpu, 0x99, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:84 LDA @VIRTUAL02
    case 0xC075A9: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:85 STA a:active_hotspot::x2,Y
    case 0xC075AB: {
        Instruction step(cpu, 0x99, 0x000006u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:86 LDA @LOCAL00
    case 0xC075AE: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:87 STA a:active_hotspot::y1,Y
    case 0xC075B0: {
        Instruction step(cpu, 0x99, 0x000004u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:88 LDA @VIRTUAL04
    case 0xC075B3: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:89 STA a:active_hotspot::y2,Y
    case 0xC075B5: {
        Instruction step(cpu, 0x99, 0x000008u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:90 TYA
    case 0xC075B8: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:91 CLC
    case 0xC075B9: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:92 ADC #active_hotspot::pointer
    case 0xC075BA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:92 ADC #active_hotspot::pointer
    // Overlapping static entry reached from 0xC075BA.
    case 0xC075BC: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:93 TAY
    case 0xC075BD: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1075 LDA src
    // Macro caller: src/overworld/activate_hotspot.asm:94 MOVE_INT_YPTRDEST @VIRTUAL0A, __BSS_START__
    case 0xC075BE: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/overworld/activate_hotspot.asm:94 MOVE_INT_YPTRDEST @VIRTUAL0A, __BSS_START__
    case 0xC075C0: {
        Instruction step(cpu, 0x99, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/overworld/activate_hotspot.asm:94 MOVE_INT_YPTRDEST @VIRTUAL0A, __BSS_START__
    case 0xC075C3: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/overworld/activate_hotspot.asm:94 MOVE_INT_YPTRDEST @VIRTUAL0A, __BSS_START__
    case 0xC075C5: {
        Instruction step(cpu, 0x99, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:95 LDA @LOCAL05
    case 0xC075C8: {
        Instruction step(cpu, 0xA5, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:96 DEC
    case 0xC075CA: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:97 STA @LOCAL02
    case 0xC075CB: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:98 CLC
    case 0xC075CD: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:99 ADC #.LOWORD(GAME_STATE)
    case 0xC075CE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000A9u : 0x009AA9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:99 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC075CE.
    case 0xC075D0: {
        Instruction step(cpu, 0x9A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_stack();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:100 TAY
    case 0xC075D1: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:101 TXA
    case 0xC075D2: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:102 SEP #PROC_FLAGS::ACCUM8
    case 0xC075D3: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:103 STA __BSS_START__ + game_state::active_hotspot_modes,Y
    case 0xC075D5: {
        Instruction step(cpu, 0x99, 0x0000C5u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:104 REP #PROC_FLAGS::ACCUM8
    case 0xC075D8: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:105 LDA @LOCAL06
    case 0xC075DA: {
        Instruction step(cpu, 0xA5, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:106 SEP #PROC_FLAGS::ACCUM8
    case 0xC075DC: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:107 STA __BSS_START__+game_state::active_hotspot_ids,Y
    case 0xC075DE: {
        Instruction step(cpu, 0x99, 0x0000C7u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:108 REP #PROC_FLAGS::ACCUM8
    case 0xC075E1: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:109 LDA @LOCAL02
    case 0xC075E3: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:110 ASL
    case 0xC075E5: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:111 ASL
    case 0xC075E6: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:112 CLC
    case 0xC075E7: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:114 ADC #.LOWORD(GAME_STATE)
    case 0xC075E8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000A9u : 0x009AA9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:114 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC075E8.
    case 0xC075EA: {
        Instruction step(cpu, 0x9A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_stack();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:115 CLC
    case 0xC075EB: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:116 ADC #game_state::active_hotspot_pointers
    case 0xC075EC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000C9u : 0x0000C9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:116 ADC #game_state::active_hotspot_pointers
    // Overlapping static entry reached from 0xC075EC.
    case 0xC075EE: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/activate_hotspot.asm:120 TAY
    case 0xC075EF: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1075 LDA src
    // Macro caller: src/overworld/activate_hotspot.asm:121 MOVE_INT_YPTRDEST @VIRTUAL0A, __BSS_START__
    case 0xC075F0: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/overworld/activate_hotspot.asm:121 MOVE_INT_YPTRDEST @VIRTUAL0A, __BSS_START__
    case 0xC075F2: {
        Instruction step(cpu, 0x99, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/overworld/activate_hotspot.asm:121 MOVE_INT_YPTRDEST @VIRTUAL0A, __BSS_START__
    case 0xC075F5: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/overworld/activate_hotspot.asm:121 MOVE_INT_YPTRDEST @VIRTUAL0A, __BSS_START__
    case 0xC075F7: {
        Instruction step(cpu, 0x99, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/activate_hotspot.asm:122 END_C_FUNCTION
    case 0xC075FA: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/activate_hotspot.asm:122 END_C_FUNCTION
    case 0xC075FB: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
