// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/overworld/reload_hotspots.asm
bool resume_overworld_reload_hotspots(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/reload_hotspots.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC07213: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/reload_hotspots.asm:6 END_STACK_VARS
    case 0xC07215: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/reload_hotspots.asm:6 END_STACK_VARS
    case 0xC07216: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/reload_hotspots.asm:6 END_STACK_VARS
    case 0xC07217: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000F1u : 0x00FFF1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/reload_hotspots.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC07217.
    case 0xC07219: {
        Instruction step(cpu, 0xFF, 0x00A95Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/reload_hotspots.asm:6 END_STACK_VARS
    case 0xC0721A: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/overworld/reload_hotspots.asm:7 LDA #0
    case 0xC0721B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/reload_hotspots.asm:7 LDA #0
    // Overlapping static entry reached from 0xC0721B.
    case 0xC0721D: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/reload_hotspots.asm:8 STA @VIRTUAL02
    case 0xC0721E: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/reload_hotspots.asm:9 JMP @UNKNOWN3
    case 0xC07220: {
        Instruction step(cpu, 0x4C, 0x0072C1u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/reload_hotspots.asm:11 LDA @VIRTUAL02
    case 0xC07223: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/reload_hotspots.asm:12 CLC
    case 0xC07225: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/reload_hotspots.asm:13 ADC #.LOWORD(GAME_STATE)
    case 0xC07226: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000F5u : 0x0097F5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/reload_hotspots.asm:13 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC07226.
    case 0xC07228: {
        Instruction step(cpu, 0x97, 0x0000A8u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/reload_hotspots.asm:14 TAY
    case 0xC07229: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/overworld/reload_hotspots.asm:15 SEP #PROC_FLAGS::ACCUM8
    case 0xC0722A: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/reload_hotspots.asm:16 LDA __BSS_START__ + game_state::active_hotspot_modes,Y
    case 0xC0722C: {
        Instruction step(cpu, 0xB9, 0x0000C8u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/reload_hotspots.asm:17 STA @LOCAL00
    case 0xC0722F: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/reload_hotspots.asm:18 REP #PROC_FLAGS::ACCUM8
    case 0xC07231: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/reload_hotspots.asm:19 AND #$00FF
    case 0xC07233: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/reload_hotspots.asm:19 AND #$00FF
    // Overlapping static entry reached from 0xC07233.
    case 0xC07235: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/reload_hotspots.asm:20 BEQL @UNKNOWN2
    case 0xC07236: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/reload_hotspots.asm:20 BEQL @UNKNOWN2
    case 0xC07238: {
        Instruction step(cpu, 0x4C, 0x0072BFu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/reload_hotspots.asm:21 LDA @VIRTUAL02
    case 0xC0723B: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:574 STA scratch
    // Macro caller: src/overworld/reload_hotspots.asm:22 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(active_hotspot)
    case 0xC0723D: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:575 ASL
    // Macro caller: src/overworld/reload_hotspots.asm:22 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(active_hotspot)
    case 0xC0723F: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:576 ADC scratch
    // Macro caller: src/overworld/reload_hotspots.asm:22 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(active_hotspot)
    case 0xC07240: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:577 ASL
    // Macro caller: src/overworld/reload_hotspots.asm:22 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(active_hotspot)
    case 0xC07242: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:578 ADC scratch
    // Macro caller: src/overworld/reload_hotspots.asm:22 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(active_hotspot)
    case 0xC07243: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:579 ASL
    // Macro caller: src/overworld/reload_hotspots.asm:22 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(active_hotspot)
    case 0xC07245: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/reload_hotspots.asm:23 CLC
    case 0xC07246: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/reload_hotspots.asm:24 ADC #.LOWORD(ACTIVE_HOTSPOTS)
    case 0xC07247: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00003Cu : 0x005E3Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/reload_hotspots.asm:24 ADC #.LOWORD(ACTIVE_HOTSPOTS)
    // Overlapping static entry reached from 0xC07247.
    case 0xC07249: {
        Instruction step(cpu, 0x5E, 0x00A9AAu, 3u, AddressMode::AbsoluteIndexedX);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/reload_hotspots.asm:25 TAX
    case 0xC0724A: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/reload_hotspots.asm:26 LOADPTR MAP_HOTSPOTS, @VIRTUAL06
    case 0xC0724B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FBu : 0x00F2FBu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/reload_hotspots.asm:26 LOADPTR MAP_HOTSPOTS, @VIRTUAL06
    // Overlapping static entry reached from 0xC07249.
    case 0xC0724C: {
        Instruction step(cpu, 0xFB, 0x000000u, 1u, AddressMode::Implied);
        step.exchange_carry_emulation();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/reload_hotspots.asm:26 LOADPTR MAP_HOTSPOTS, @VIRTUAL06
    // Overlapping static entry reached from 0xC0724B.
    case 0xC0724D: {
        Instruction step(cpu, 0xF2, 0x000085u, 2u, AddressMode::DirectPageIndirect);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/reload_hotspots.asm:26 LOADPTR MAP_HOTSPOTS, @VIRTUAL06
    case 0xC0724E: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/reload_hotspots.asm:26 LOADPTR MAP_HOTSPOTS, @VIRTUAL06
    // Overlapping static entry reached from 0xC0724D.
    case 0xC0724F: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/reload_hotspots.asm:26 LOADPTR MAP_HOTSPOTS, @VIRTUAL06
    case 0xC07250: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D5u : 0x0000D5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/reload_hotspots.asm:26 LOADPTR MAP_HOTSPOTS, @VIRTUAL06
    // Overlapping static entry reached from 0xC0724F.
    case 0xC07251: {
        Instruction step(cpu, 0xD5, 0x000000u, 2u, AddressMode::DirectPageIndexedX);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/reload_hotspots.asm:26 LOADPTR MAP_HOTSPOTS, @VIRTUAL06
    // Overlapping static entry reached from 0xC07250.
    case 0xC07252: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/reload_hotspots.asm:26 LOADPTR MAP_HOTSPOTS, @VIRTUAL06
    case 0xC07253: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/reload_hotspots.asm:27 LDA __BSS_START__+game_state::active_hotspot_ids,Y
    case 0xC07255: {
        Instruction step(cpu, 0xB9, 0x0000CAu, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/reload_hotspots.asm:28 AND #$00FF
    case 0xC07258: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/reload_hotspots.asm:28 AND #$00FF
    // Overlapping static entry reached from 0xC07258.
    case 0xC0725A: {
        Instruction step(cpu, 0x00, 0x00000Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:545 ASL
    // Macro caller: src/overworld/reload_hotspots.asm:29 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC0725B: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:546 ASL
    // Macro caller: src/overworld/reload_hotspots.asm:29 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC0725C: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:547 ASL
    // Macro caller: src/overworld/reload_hotspots.asm:29 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC0725D: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/reload_hotspots.asm:30 CLC
    case 0xC0725E: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/reload_hotspots.asm:31 ADC @VIRTUAL06
    case 0xC0725F: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/reload_hotspots.asm:32 STA @VIRTUAL06
    case 0xC07261: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/reload_hotspots.asm:33 LDA @LOCAL00
    case 0xC07263: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/reload_hotspots.asm:34 AND #$00FF
    case 0xC07265: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/reload_hotspots.asm:34 AND #$00FF
    // Overlapping static entry reached from 0xC07265.
    case 0xC07267: {
        Instruction step(cpu, 0x00, 0x00009Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/reload_hotspots.asm:35 STA __BSS_START__,X
    case 0xC07268: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/reload_hotspots.asm:36 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC0726B: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/reload_hotspots.asm:36 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC0726D: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/reload_hotspots.asm:36 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC0726F: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/reload_hotspots.asm:36 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC07271: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/reload_hotspots.asm:37 LDA [@VIRTUAL0A]
    case 0xC07273: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:545 ASL
    // Macro caller: src/overworld/reload_hotspots.asm:38 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC07275: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:546 ASL
    // Macro caller: src/overworld/reload_hotspots.asm:38 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC07276: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:547 ASL
    // Macro caller: src/overworld/reload_hotspots.asm:38 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC07277: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/reload_hotspots.asm:39 STA a:active_hotspot::x1,X
    case 0xC07278: {
        Instruction step(cpu, 0x9D, 0x000002u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/reload_hotspots.asm:40 LDY #predefined_hotspot::x2
    case 0xC0727B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/reload_hotspots.asm:40 LDY #predefined_hotspot::x2
    // Overlapping static entry reached from 0xC0727B.
    case 0xC0727D: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/reload_hotspots.asm:41 LDA [@VIRTUAL06],Y
    case 0xC0727E: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:545 ASL
    // Macro caller: src/overworld/reload_hotspots.asm:42 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC07280: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:546 ASL
    // Macro caller: src/overworld/reload_hotspots.asm:42 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC07281: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:547 ASL
    // Macro caller: src/overworld/reload_hotspots.asm:42 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC07282: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/reload_hotspots.asm:43 STA a:active_hotspot::x2,X
    case 0xC07283: {
        Instruction step(cpu, 0x9D, 0x000006u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/reload_hotspots.asm:44 LDY #predefined_hotspot::y1
    case 0xC07286: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/reload_hotspots.asm:44 LDY #predefined_hotspot::y1
    // Overlapping static entry reached from 0xC07286.
    case 0xC07288: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/reload_hotspots.asm:45 LDA [@VIRTUAL06],Y
    case 0xC07289: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:545 ASL
    // Macro caller: src/overworld/reload_hotspots.asm:46 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC0728B: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:546 ASL
    // Macro caller: src/overworld/reload_hotspots.asm:46 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC0728C: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:547 ASL
    // Macro caller: src/overworld/reload_hotspots.asm:46 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC0728D: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/reload_hotspots.asm:47 STA a:active_hotspot::y1,X
    case 0xC0728E: {
        Instruction step(cpu, 0x9D, 0x000004u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/reload_hotspots.asm:48 LDY #predefined_hotspot::y2
    case 0xC07291: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/reload_hotspots.asm:48 LDY #predefined_hotspot::y2
    // Overlapping static entry reached from 0xC07291.
    case 0xC07293: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/reload_hotspots.asm:49 LDA [@VIRTUAL06],Y
    case 0xC07294: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:545 ASL
    // Macro caller: src/overworld/reload_hotspots.asm:50 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC07296: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:546 ASL
    // Macro caller: src/overworld/reload_hotspots.asm:50 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC07297: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:547 ASL
    // Macro caller: src/overworld/reload_hotspots.asm:50 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC07298: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/reload_hotspots.asm:51 STA a:active_hotspot::y2,X
    case 0xC07299: {
        Instruction step(cpu, 0x9D, 0x000008u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/reload_hotspots.asm:52 LDA @VIRTUAL02
    case 0xC0729C: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:526 ASL
    // Macro caller: src/overworld/reload_hotspots.asm:53 OPTIMIZED_MULT @VIRTUAL04, 4
    case 0xC0729E: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:527 ASL
    // Macro caller: src/overworld/reload_hotspots.asm:53 OPTIMIZED_MULT @VIRTUAL04, 4
    case 0xC0729F: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/reload_hotspots.asm:54 CLC
    case 0xC072A0: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/reload_hotspots.asm:60 ADC #.LOWORD(GAME_STATE) + game_state::active_hotspot_pointers
    case 0xC072A1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000C1u : 0x0098C1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/reload_hotspots.asm:60 ADC #.LOWORD(GAME_STATE) + game_state::active_hotspot_pointers
    // Overlapping static entry reached from 0xC072A1.
    case 0xC072A3: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/reload_hotspots.asm:62 TAY
    case 0xC072A4: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/overworld/reload_hotspots.asm:63 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC072A5: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1114 STA dest
    // Macro caller: src/overworld/reload_hotspots.asm:63 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC072A8: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/overworld/reload_hotspots.asm:63 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC072AA: {
        Instruction step(cpu, 0xB9, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/overworld/reload_hotspots.asm:63 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC072AD: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/reload_hotspots.asm:64 TXA
    case 0xC072AF: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/overworld/reload_hotspots.asm:65 CLC
    case 0xC072B0: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/reload_hotspots.asm:66 ADC #active_hotspot::pointer
    case 0xC072B1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/reload_hotspots.asm:66 ADC #active_hotspot::pointer
    // Overlapping static entry reached from 0xC072B1.
    case 0xC072B3: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/reload_hotspots.asm:67 TAY
    case 0xC072B4: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1075 LDA src
    // Macro caller: src/overworld/reload_hotspots.asm:68 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC072B5: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/overworld/reload_hotspots.asm:68 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC072B7: {
        Instruction step(cpu, 0x99, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/overworld/reload_hotspots.asm:68 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC072BA: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/overworld/reload_hotspots.asm:68 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC072BC: {
        Instruction step(cpu, 0x99, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/reload_hotspots.asm:70 INC @VIRTUAL02
    case 0xC072BF: {
        Instruction step(cpu, 0xE6, 0x000002u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/overworld/reload_hotspots.asm:72 LDA @VIRTUAL02
    case 0xC072C1: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/reload_hotspots.asm:73 CMP #2
    case 0xC072C3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/reload_hotspots.asm:73 CMP #2
    // Overlapping static entry reached from 0xC072C3.
    case 0xC072C5: {
        Instruction step(cpu, 0x00, 0x0000B0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:784 BCS :+
    // Macro caller: src/overworld/reload_hotspots.asm:74 BCCL @UNKNOWN0
    case 0xC072C6: {
        Instruction step(cpu, 0xB0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/overworld/reload_hotspots.asm:74 BCCL @UNKNOWN0
    case 0xC072C8: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:786 JMP dest
    // Macro caller: src/overworld/reload_hotspots.asm:74 BCCL @UNKNOWN0
    case 0xC072CA: {
        Instruction step(cpu, 0x4C, 0x007223u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/reload_hotspots.asm:75 END_C_FUNCTION
    case 0xC072CD: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/reload_hotspots.asm:75 END_C_FUNCTION
    case 0xC072CE: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
