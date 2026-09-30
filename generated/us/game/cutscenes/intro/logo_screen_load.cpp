// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/intro/logo_screen_load.asm
bool resume_introduction_logo_screen_load(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/intro/logo_screen_load.asm:3 BEGIN_C_FUNCTION
    case 0xC0EE68: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/intro/logo_screen_load.asm:8 END_STACK_VARS
    case 0xC0EE6A: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/intro/logo_screen_load.asm:8 END_STACK_VARS
    case 0xC0EE6B: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/intro/logo_screen_load.asm:8 END_STACK_VARS
    case 0xC0EE6C: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/intro/logo_screen_load.asm:8 END_STACK_VARS
    case 0xC0EE6D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EAu : 0x00FFEAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/intro/logo_screen_load.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC0EE6D.
    case 0xC0EE6F: {
        Instruction step(cpu, 0xFF, 0x85685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/intro/logo_screen_load.asm:8 END_STACK_VARS
    case 0xC0EE70: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/intro/logo_screen_load.asm:8 END_STACK_VARS
    case 0xC0EE71: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/intro/logo_screen_load.asm:9 STA @VIRTUAL02
    case 0xC0EE72: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/logo_screen_load.asm:9 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC0EE6F.
    case 0xC0EE73: {
        Instruction step(cpu, 0x02, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/intro/logo_screen_load.asm:10 LDA #1
    case 0xC0EE74: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/logo_screen_load.asm:10 LDA #1
    // Overlapping static entry reached from 0xC0EE74.
    case 0xC0EE76: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/logo_screen_load.asm:11 JSL UNKNOWN_C08D79
    case 0xC0EE77: {
        Instruction step(cpu, 0x22, 0xC08D79u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/logo_screen_load.asm:12 LDY #$0000
    case 0xC0EE7B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/intro/logo_screen_load.asm:12 LDY #$0000
    // Overlapping static entry reached from 0xC0EE7B.
    case 0xC0EE7D: {
        Instruction step(cpu, 0x00, 0x0000A2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/logo_screen_load.asm:13 LDX #$4000
    case 0xC0EE7E: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x004000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/intro/logo_screen_load.asm:13 LDX #$4000
    // Overlapping static entry reached from 0xC0EE7E.
    case 0xC0EE80: {
        Instruction step(cpu, 0x40, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_interrupt();
        return step.finish();
    }
    // src/intro/logo_screen_load.asm:14 TYA ;BG_TILEMAP_SIZE::NORMAL
    case 0xC0EE81: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/intro/logo_screen_load.asm:15 JSL SET_BG3_VRAM_LOCATION
    case 0xC0EE82: {
        Instruction step(cpu, 0x22, 0xC08E1Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/logo_screen_load.asm:16 SEP #PROC_FLAGS::ACCUM8
    case 0xC0EE86: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/intro/logo_screen_load.asm:17 LDA #4
    case 0xC0EE88: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000004u : 0x008D04u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/logo_screen_load.asm:18 STA TM_MIRROR
    case 0xC0EE8A: {
        Instruction step(cpu, 0x8D, 0x00001Au, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/logo_screen_load.asm:18 STA TM_MIRROR
    // Overlapping static entry reached from 0xC0EE88.
    case 0xC0EE8B: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/intro/logo_screen_load.asm:18 STA TM_MIRROR
    // Overlapping static entry reached from 0xC0EE8B.
    case 0xC0EE8C: {
        Instruction step(cpu, 0x00, 0x0000C2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/logo_screen_load.asm:19 REP #PROC_FLAGS::ACCUM8
    case 0xC0EE8D: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/intro/logo_screen_load.asm:20 LDA @VIRTUAL02
    case 0xC0EE8F: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/logo_screen_load.asm:21 BEQ @UNKNOWN1
    case 0xC0EE91: {
        Instruction step(cpu, 0xF0, 0x000010u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/intro/logo_screen_load.asm:22 CMP #1
    case 0xC0EE93: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/intro/logo_screen_load.asm:22 CMP #1
    // Overlapping static entry reached from 0xC0EE93.
    case 0xC0EE95: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/logo_screen_load.asm:23 BEQ @UNKNOWN2
    case 0xC0EE96: {
        Instruction step(cpu, 0xF0, 0x000063u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/intro/logo_screen_load.asm:24 CMP #2
    case 0xC0EE98: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/intro/logo_screen_load.asm:24 CMP #2
    // Overlapping static entry reached from 0xC0EE98.
    case 0xC0EE9A: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/intro/logo_screen_load.asm:25 BEQL @UNKNOWN4
    case 0xC0EE9B: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/intro/logo_screen_load.asm:25 BEQL @UNKNOWN4
    case 0xC0EE9D: {
        Instruction step(cpu, 0x4C, 0x00EF52u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/intro/logo_screen_load.asm:26 JMP @UNKNOWN5
    case 0xC0EEA0: {
        Instruction step(cpu, 0x4C, 0x00EFA7u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:28 LOADPTR NINTENDO_GRAPHICS, @LOCAL00
    case 0xC0EEA3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00009Eu : 0x00549Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:28 LOADPTR NINTENDO_GRAPHICS, @LOCAL00
    // Overlapping static entry reached from 0xC0EEA3.
    case 0xC0EEA5: {
        Instruction step(cpu, 0x54, 0x000E85u, 3u, AddressMode::BlockMove);
        step.move_byte_forward();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/logo_screen_load.asm:28 LOADPTR NINTENDO_GRAPHICS, @LOCAL00
    case 0xC0EEA6: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:28 LOADPTR NINTENDO_GRAPHICS, @LOCAL00
    case 0xC0EEA8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E1u : 0x0000E1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:28 LOADPTR NINTENDO_GRAPHICS, @LOCAL00
    // Overlapping static entry reached from 0xC0EEA8.
    case 0xC0EEAA: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/logo_screen_load.asm:28 LOADPTR NINTENDO_GRAPHICS, @LOCAL00
    case 0xC0EEAB: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:29 LOADPTR BUFFER, @LOCAL01
    case 0xC0EEAD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:29 LOADPTR BUFFER, @LOCAL01
    // Overlapping static entry reached from 0xC0EEAD.
    case 0xC0EEAF: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/logo_screen_load.asm:29 LOADPTR BUFFER, @LOCAL01
    case 0xC0EEB0: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:29 LOADPTR BUFFER, @LOCAL01
    case 0xC0EEB2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Fu : 0x00007Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:29 LOADPTR BUFFER, @LOCAL01
    // Overlapping static entry reached from 0xC0EEB2.
    case 0xC0EEB4: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/logo_screen_load.asm:29 LOADPTR BUFFER, @LOCAL01
    case 0xC0EEB5: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/logo_screen_load.asm:30 JSL DECOMP
    case 0xC0EEB7: {
        Instruction step(cpu, 0x22, 0xC41A9Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:31 LOADPTR NINTENDO_ARRANGEMENT, @LOCAL00
    case 0xC0EEBB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000055u : 0x005455u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:31 LOADPTR NINTENDO_ARRANGEMENT, @LOCAL00
    // Overlapping static entry reached from 0xC0EEBB.
    case 0xC0EEBD: {
        Instruction step(cpu, 0x54, 0x000E85u, 3u, AddressMode::BlockMove);
        step.move_byte_forward();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/logo_screen_load.asm:31 LOADPTR NINTENDO_ARRANGEMENT, @LOCAL00
    case 0xC0EEBE: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:31 LOADPTR NINTENDO_ARRANGEMENT, @LOCAL00
    case 0xC0EEC0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E1u : 0x0000E1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:31 LOADPTR NINTENDO_ARRANGEMENT, @LOCAL00
    // Overlapping static entry reached from 0xC0EEC0.
    case 0xC0EEC2: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/logo_screen_load.asm:31 LOADPTR NINTENDO_ARRANGEMENT, @LOCAL00
    case 0xC0EEC3: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:32 LOADPTR INTRO_BG2_BUFFER, @LOCAL01
    case 0xC0EEC5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x008000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:32 LOADPTR INTRO_BG2_BUFFER, @LOCAL01
    // Overlapping static entry reached from 0xC0EEC5.
    case 0xC0EEC7: {
        Instruction step(cpu, 0x80, 0x000085u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/logo_screen_load.asm:32 LOADPTR INTRO_BG2_BUFFER, @LOCAL01
    case 0xC0EEC8: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:32 LOADPTR INTRO_BG2_BUFFER, @LOCAL01
    case 0xC0EECA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Eu : 0x00007Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:32 LOADPTR INTRO_BG2_BUFFER, @LOCAL01
    // Overlapping static entry reached from 0xC0EECA.
    case 0xC0EECC: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/logo_screen_load.asm:32 LOADPTR INTRO_BG2_BUFFER, @LOCAL01
    case 0xC0EECD: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/logo_screen_load.asm:33 JSL DECOMP
    case 0xC0EECF: {
        Instruction step(cpu, 0x22, 0xC41A9Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:34 LOADPTR NINTENDO_PALETTE, @LOCAL00
    case 0xC0EED3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00008Fu : 0x00558Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:34 LOADPTR NINTENDO_PALETTE, @LOCAL00
    // Overlapping static entry reached from 0xC0EED3.
    case 0xC0EED5: {
        Instruction step(cpu, 0x55, 0x000085u, 2u, AddressMode::DirectPageIndexedX);
        step.xor_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/logo_screen_load.asm:34 LOADPTR NINTENDO_PALETTE, @LOCAL00
    case 0xC0EED6: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/logo_screen_load.asm:34 LOADPTR NINTENDO_PALETTE, @LOCAL00
    // Overlapping static entry reached from 0xC0EED5.
    case 0xC0EED7: {
        Instruction step(cpu, 0x0E, 0x00E1A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:34 LOADPTR NINTENDO_PALETTE, @LOCAL00
    case 0xC0EED8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E1u : 0x0000E1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:34 LOADPTR NINTENDO_PALETTE, @LOCAL00
    // Overlapping static entry reached from 0xC0EED8.
    case 0xC0EEDA: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/logo_screen_load.asm:34 LOADPTR NINTENDO_PALETTE, @LOCAL00
    case 0xC0EEDB: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/intro/logo_screen_load.asm:35 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0EEDD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/intro/logo_screen_load.asm:35 PROMOTENEARPTR PALETTES, @VIRTUAL06
    // Overlapping static entry reached from 0xC0EEDD.
    case 0xC0EEDF: {
        Instruction step(cpu, 0x02, 0x000085u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/intro/logo_screen_load.asm:35 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0EEE0: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:909 PHB
    // Macro caller: src/intro/logo_screen_load.asm:35 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0EEE2: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/intro/logo_screen_load.asm:35 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0EEE3: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:911 PLA
    // Macro caller: src/intro/logo_screen_load.asm:35 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0EEE5: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/intro/logo_screen_load.asm:35 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0EEE6: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/intro/logo_screen_load.asm:35 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0EEE8: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/intro/logo_screen_load.asm:36 REP #PROC_FLAGS::ACCUM8
    case 0xC0EEEA: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/logo_screen_load.asm:37 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0EEEC: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/logo_screen_load.asm:37 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0EEEE: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/logo_screen_load.asm:37 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0EEF0: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/logo_screen_load.asm:37 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0EEF2: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/logo_screen_load.asm:38 JSL DECOMP
    case 0xC0EEF4: {
        Instruction step(cpu, 0x22, 0xC41A9Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/logo_screen_load.asm:39 JMP @UNKNOWN5
    case 0xC0EEF8: {
        Instruction step(cpu, 0x4C, 0x00EFA7u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:41 LOADPTR APE_GRAPHICS, @LOCAL00
    case 0xC0EEFB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00002Au : 0x004F2Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:41 LOADPTR APE_GRAPHICS, @LOCAL00
    // Overlapping static entry reached from 0xC0EEFB.
    case 0xC0EEFD: {
        Instruction step(cpu, 0x4F, 0xA90E85u, 4u, AddressMode::Long);
        step.xor_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/logo_screen_load.asm:41 LOADPTR APE_GRAPHICS, @LOCAL00
    case 0xC0EEFE: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:41 LOADPTR APE_GRAPHICS, @LOCAL00
    case 0xC0EF00: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E1u : 0x0000E1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:41 LOADPTR APE_GRAPHICS, @LOCAL00
    // Overlapping static entry reached from 0xC0EEFD.
    case 0xC0EF01: {
        Instruction step(cpu, 0xE1, 0x000000u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:41 LOADPTR APE_GRAPHICS, @LOCAL00
    // Overlapping static entry reached from 0xC0EF00.
    case 0xC0EF02: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/logo_screen_load.asm:41 LOADPTR APE_GRAPHICS, @LOCAL00
    case 0xC0EF03: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:42 LOADPTR BUFFER, @LOCAL01
    case 0xC0EF05: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:42 LOADPTR BUFFER, @LOCAL01
    // Overlapping static entry reached from 0xC0EF05.
    case 0xC0EF07: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/logo_screen_load.asm:42 LOADPTR BUFFER, @LOCAL01
    case 0xC0EF08: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:42 LOADPTR BUFFER, @LOCAL01
    case 0xC0EF0A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Fu : 0x00007Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:42 LOADPTR BUFFER, @LOCAL01
    // Overlapping static entry reached from 0xC0EF0A.
    case 0xC0EF0C: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/logo_screen_load.asm:42 LOADPTR BUFFER, @LOCAL01
    case 0xC0EF0D: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/logo_screen_load.asm:43 JSL DECOMP
    case 0xC0EF0F: {
        Instruction step(cpu, 0x22, 0xC41A9Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:44 LOADPTR APE_ARRANGEMENT, @LOCAL00
    case 0xC0EF13: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C1u : 0x004EC1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:44 LOADPTR APE_ARRANGEMENT, @LOCAL00
    // Overlapping static entry reached from 0xC0EF13.
    case 0xC0EF15: {
        Instruction step(cpu, 0x4E, 0x000E85u, 3u, AddressMode::Absolute);
        step.shift_right();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/logo_screen_load.asm:44 LOADPTR APE_ARRANGEMENT, @LOCAL00
    case 0xC0EF16: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:44 LOADPTR APE_ARRANGEMENT, @LOCAL00
    case 0xC0EF18: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E1u : 0x0000E1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:44 LOADPTR APE_ARRANGEMENT, @LOCAL00
    // Overlapping static entry reached from 0xC0EF18.
    case 0xC0EF1A: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/logo_screen_load.asm:44 LOADPTR APE_ARRANGEMENT, @LOCAL00
    case 0xC0EF1B: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:45 LOADPTR INTRO_BG2_BUFFER, @LOCAL01
    case 0xC0EF1D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x008000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:45 LOADPTR INTRO_BG2_BUFFER, @LOCAL01
    // Overlapping static entry reached from 0xC0EF1D.
    case 0xC0EF1F: {
        Instruction step(cpu, 0x80, 0x000085u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/logo_screen_load.asm:45 LOADPTR INTRO_BG2_BUFFER, @LOCAL01
    case 0xC0EF20: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:45 LOADPTR INTRO_BG2_BUFFER, @LOCAL01
    case 0xC0EF22: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Eu : 0x00007Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:45 LOADPTR INTRO_BG2_BUFFER, @LOCAL01
    // Overlapping static entry reached from 0xC0EF22.
    case 0xC0EF24: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/logo_screen_load.asm:45 LOADPTR INTRO_BG2_BUFFER, @LOCAL01
    case 0xC0EF25: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/logo_screen_load.asm:46 JSL DECOMP
    case 0xC0EF27: {
        Instruction step(cpu, 0x22, 0xC41A9Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:47 LOADPTR APE_PALETTE, @LOCAL00
    case 0xC0EF2B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000030u : 0x005130u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:47 LOADPTR APE_PALETTE, @LOCAL00
    // Overlapping static entry reached from 0xC0EF2B.
    case 0xC0EF2D: {
        Instruction step(cpu, 0x51, 0x000085u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.xor_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/logo_screen_load.asm:47 LOADPTR APE_PALETTE, @LOCAL00
    case 0xC0EF2E: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/logo_screen_load.asm:47 LOADPTR APE_PALETTE, @LOCAL00
    // Overlapping static entry reached from 0xC0EF2D.
    case 0xC0EF2F: {
        Instruction step(cpu, 0x0E, 0x00E1A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:47 LOADPTR APE_PALETTE, @LOCAL00
    case 0xC0EF30: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E1u : 0x0000E1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:47 LOADPTR APE_PALETTE, @LOCAL00
    // Overlapping static entry reached from 0xC0EF30.
    case 0xC0EF32: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/logo_screen_load.asm:47 LOADPTR APE_PALETTE, @LOCAL00
    case 0xC0EF33: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/intro/logo_screen_load.asm:48 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0EF35: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/intro/logo_screen_load.asm:48 PROMOTENEARPTR PALETTES, @VIRTUAL06
    // Overlapping static entry reached from 0xC0EF35.
    case 0xC0EF37: {
        Instruction step(cpu, 0x02, 0x000085u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/intro/logo_screen_load.asm:48 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0EF38: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:909 PHB
    // Macro caller: src/intro/logo_screen_load.asm:48 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0EF3A: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/intro/logo_screen_load.asm:48 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0EF3B: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:911 PLA
    // Macro caller: src/intro/logo_screen_load.asm:48 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0EF3D: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/intro/logo_screen_load.asm:48 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0EF3E: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/intro/logo_screen_load.asm:48 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0EF40: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/intro/logo_screen_load.asm:49 REP #PROC_FLAGS::ACCUM8
    case 0xC0EF42: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/logo_screen_load.asm:50 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0EF44: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/logo_screen_load.asm:50 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0EF46: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/logo_screen_load.asm:50 MOVE_INT @VIRTUAL06, @LOCAL01
    // Overlapping static entry reached from 0xC0EFC0.
    case 0xC0EF47: {
        Instruction step(cpu, 0x12, 0x0000A5u, 2u, AddressMode::DirectPageIndirect);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/logo_screen_load.asm:50 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0EF48: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/logo_screen_load.asm:50 MOVE_INT @VIRTUAL06, @LOCAL01
    // Overlapping static entry reached from 0xC0EF47.
    case 0xC0EF49: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/logo_screen_load.asm:50 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0EF4A: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/logo_screen_load.asm:51 JSL DECOMP
    case 0xC0EF4C: {
        Instruction step(cpu, 0x22, 0xC41A9Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/logo_screen_load.asm:52 BRA @UNKNOWN5
    case 0xC0EF50: {
        Instruction step(cpu, 0x80, 0x000055u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:54 LOADPTR HALKEN_GRAPHICS, @LOCAL00
    case 0xC0EF52: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E8u : 0x0051E8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:54 LOADPTR HALKEN_GRAPHICS, @LOCAL00
    // Overlapping static entry reached from 0xC0EF52.
    case 0xC0EF54: {
        Instruction step(cpu, 0x51, 0x000085u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.xor_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/logo_screen_load.asm:54 LOADPTR HALKEN_GRAPHICS, @LOCAL00
    case 0xC0EF55: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/logo_screen_load.asm:54 LOADPTR HALKEN_GRAPHICS, @LOCAL00
    // Overlapping static entry reached from 0xC0EF54.
    case 0xC0EF56: {
        Instruction step(cpu, 0x0E, 0x00E1A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:54 LOADPTR HALKEN_GRAPHICS, @LOCAL00
    case 0xC0EF57: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E1u : 0x0000E1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:54 LOADPTR HALKEN_GRAPHICS, @LOCAL00
    // Overlapping static entry reached from 0xC0EF57.
    case 0xC0EF59: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/logo_screen_load.asm:54 LOADPTR HALKEN_GRAPHICS, @LOCAL00
    case 0xC0EF5A: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:55 LOADPTR BUFFER, @LOCAL01
    case 0xC0EF5C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:55 LOADPTR BUFFER, @LOCAL01
    // Overlapping static entry reached from 0xC0EF5C.
    case 0xC0EF5E: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/logo_screen_load.asm:55 LOADPTR BUFFER, @LOCAL01
    case 0xC0EF5F: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:55 LOADPTR BUFFER, @LOCAL01
    case 0xC0EF61: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Fu : 0x00007Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:55 LOADPTR BUFFER, @LOCAL01
    // Overlapping static entry reached from 0xC0EF61.
    case 0xC0EF63: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/logo_screen_load.asm:55 LOADPTR BUFFER, @LOCAL01
    case 0xC0EF64: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/logo_screen_load.asm:56 JSL DECOMP
    case 0xC0EF66: {
        Instruction step(cpu, 0x22, 0xC41A9Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:57 LOADPTR HALKEN_ARRANGEMENT, @LOCAL00
    case 0xC0EF6A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000074u : 0x005174u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:57 LOADPTR HALKEN_ARRANGEMENT, @LOCAL00
    // Overlapping static entry reached from 0xC0EF6A.
    case 0xC0EF6C: {
        Instruction step(cpu, 0x51, 0x000085u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.xor_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/logo_screen_load.asm:57 LOADPTR HALKEN_ARRANGEMENT, @LOCAL00
    case 0xC0EF6D: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/logo_screen_load.asm:57 LOADPTR HALKEN_ARRANGEMENT, @LOCAL00
    // Overlapping static entry reached from 0xC0EF6C.
    case 0xC0EF6E: {
        Instruction step(cpu, 0x0E, 0x00E1A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:57 LOADPTR HALKEN_ARRANGEMENT, @LOCAL00
    case 0xC0EF6F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E1u : 0x0000E1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:57 LOADPTR HALKEN_ARRANGEMENT, @LOCAL00
    // Overlapping static entry reached from 0xC0EF6F.
    case 0xC0EF71: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/logo_screen_load.asm:57 LOADPTR HALKEN_ARRANGEMENT, @LOCAL00
    case 0xC0EF72: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:58 LOADPTR INTRO_BG2_BUFFER, @LOCAL01
    case 0xC0EF74: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x008000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:58 LOADPTR INTRO_BG2_BUFFER, @LOCAL01
    // Overlapping static entry reached from 0xC0EF74.
    case 0xC0EF76: {
        Instruction step(cpu, 0x80, 0x000085u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/logo_screen_load.asm:58 LOADPTR INTRO_BG2_BUFFER, @LOCAL01
    case 0xC0EF77: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:58 LOADPTR INTRO_BG2_BUFFER, @LOCAL01
    case 0xC0EF79: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Eu : 0x00007Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:58 LOADPTR INTRO_BG2_BUFFER, @LOCAL01
    // Overlapping static entry reached from 0xC0EF79.
    case 0xC0EF7B: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/logo_screen_load.asm:58 LOADPTR INTRO_BG2_BUFFER, @LOCAL01
    case 0xC0EF7C: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/logo_screen_load.asm:59 JSL DECOMP
    case 0xC0EF7E: {
        Instruction step(cpu, 0x22, 0xC41A9Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:60 LOADPTR HALKEN_PALETTE, @LOCAL00
    case 0xC0EF82: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000B8u : 0x0053B8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:60 LOADPTR HALKEN_PALETTE, @LOCAL00
    // Overlapping static entry reached from 0xC0EF82.
    case 0xC0EF84: {
        Instruction step(cpu, 0x53, 0x000085u, 2u, AddressMode::StackRelativeIndirectIndexedY);
        step.xor_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/logo_screen_load.asm:60 LOADPTR HALKEN_PALETTE, @LOCAL00
    case 0xC0EF85: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/logo_screen_load.asm:60 LOADPTR HALKEN_PALETTE, @LOCAL00
    // Overlapping static entry reached from 0xC0EF84.
    case 0xC0EF86: {
        Instruction step(cpu, 0x0E, 0x00E1A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:60 LOADPTR HALKEN_PALETTE, @LOCAL00
    case 0xC0EF87: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E1u : 0x0000E1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:60 LOADPTR HALKEN_PALETTE, @LOCAL00
    // Overlapping static entry reached from 0xC0EF87.
    case 0xC0EF89: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/logo_screen_load.asm:60 LOADPTR HALKEN_PALETTE, @LOCAL00
    case 0xC0EF8A: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/intro/logo_screen_load.asm:61 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0EF8C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/intro/logo_screen_load.asm:61 PROMOTENEARPTR PALETTES, @VIRTUAL06
    // Overlapping static entry reached from 0xC0EF8C.
    case 0xC0EF8E: {
        Instruction step(cpu, 0x02, 0x000085u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/intro/logo_screen_load.asm:61 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0EF8F: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:909 PHB
    // Macro caller: src/intro/logo_screen_load.asm:61 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0EF91: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/intro/logo_screen_load.asm:61 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0EF92: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:911 PLA
    // Macro caller: src/intro/logo_screen_load.asm:61 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0EF94: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/intro/logo_screen_load.asm:61 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0EF95: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/intro/logo_screen_load.asm:61 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0EF97: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/intro/logo_screen_load.asm:62 REP #PROC_FLAGS::ACCUM8
    case 0xC0EF99: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/intro/logo_screen_load.asm:62 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC0EFB6.
    case 0xC0EF9A: {
        Instruction step(cpu, 0x20, 0x0006A5u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/logo_screen_load.asm:63 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0EF9B: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/logo_screen_load.asm:63 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0EF9D: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/logo_screen_load.asm:63 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0EF9F: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/logo_screen_load.asm:63 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0EFA1: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/logo_screen_load.asm:64 JSL DECOMP
    case 0xC0EFA3: {
        Instruction step(cpu, 0x22, 0xC41A9Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:66 COPY_TO_VRAM1 BUFFER, $0000, $8000, 0
    case 0xC0EFA7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:66 COPY_TO_VRAM1 BUFFER, $0000, $8000, 0
    // Overlapping static entry reached from 0xC0EFA7.
    case 0xC0EFA9: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/logo_screen_load.asm:66 COPY_TO_VRAM1 BUFFER, $0000, $8000, 0
    case 0xC0EFAA: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:66 COPY_TO_VRAM1 BUFFER, $0000, $8000, 0
    case 0xC0EFAC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Fu : 0x00007Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:66 COPY_TO_VRAM1 BUFFER, $0000, $8000, 0
    // Overlapping static entry reached from 0xC0EFAC.
    case 0xC0EFAE: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/logo_screen_load.asm:66 COPY_TO_VRAM1 BUFFER, $0000, $8000, 0
    case 0xC0EFAF: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/intro/logo_screen_load.asm:66 COPY_TO_VRAM1 BUFFER, $0000, $8000, 0
    case 0xC0EFB1: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/intro/logo_screen_load.asm:66 COPY_TO_VRAM1 BUFFER, $0000, $8000, 0
    // Overlapping static entry reached from 0xC0EFB1.
    case 0xC0EFB3: {
        Instruction step(cpu, 0x00, 0x0000A2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/intro/logo_screen_load.asm:66 COPY_TO_VRAM1 BUFFER, $0000, $8000, 0
    case 0xC0EFB4: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x008000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/intro/logo_screen_load.asm:66 COPY_TO_VRAM1 BUFFER, $0000, $8000, 0
    // Overlapping static entry reached from 0xC0EFB4.
    case 0xC0EFB6: {
        Instruction step(cpu, 0x80, 0x0000E2u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/intro/logo_screen_load.asm:66 COPY_TO_VRAM1 BUFFER, $0000, $8000, 0
    case 0xC0EFB7: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:1161 TYA
    // Macro caller: src/intro/logo_screen_load.asm:66 COPY_TO_VRAM1 BUFFER, $0000, $8000, 0
    case 0xC0EFB9: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/intro/logo_screen_load.asm:66 COPY_TO_VRAM1 BUFFER, $0000, $8000, 0
    case 0xC0EFBA: {
        Instruction step(cpu, 0x22, 0xC08616u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:68 COPY_TO_VRAM1 INTRO_BG2_BUFFER, $4000, $800, 0
    case 0xC0EFBE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x008000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:68 COPY_TO_VRAM1 INTRO_BG2_BUFFER, $4000, $800, 0
    // Overlapping static entry reached from 0xC0EFBE.
    case 0xC0EFC0: {
        Instruction step(cpu, 0x80, 0x000085u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/logo_screen_load.asm:68 COPY_TO_VRAM1 INTRO_BG2_BUFFER, $4000, $800, 0
    case 0xC0EFC1: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:68 COPY_TO_VRAM1 INTRO_BG2_BUFFER, $4000, $800, 0
    case 0xC0EFC3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Eu : 0x00007Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:68 COPY_TO_VRAM1 INTRO_BG2_BUFFER, $4000, $800, 0
    // Overlapping static entry reached from 0xC0EFC3.
    case 0xC0EFC5: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/logo_screen_load.asm:68 COPY_TO_VRAM1 INTRO_BG2_BUFFER, $4000, $800, 0
    case 0xC0EFC6: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/intro/logo_screen_load.asm:68 COPY_TO_VRAM1 INTRO_BG2_BUFFER, $4000, $800, 0
    case 0xC0EFC8: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x004000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/intro/logo_screen_load.asm:68 COPY_TO_VRAM1 INTRO_BG2_BUFFER, $4000, $800, 0
    // Overlapping static entry reached from 0xC0EFC8.
    case 0xC0EFCA: {
        Instruction step(cpu, 0x40, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_interrupt();
        return step.finish();
    }
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/intro/logo_screen_load.asm:68 COPY_TO_VRAM1 INTRO_BG2_BUFFER, $4000, $800, 0
    case 0xC0EFCB: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000800u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/intro/logo_screen_load.asm:68 COPY_TO_VRAM1 INTRO_BG2_BUFFER, $4000, $800, 0
    // Overlapping static entry reached from 0xC0EFCB.
    case 0xC0EFCD: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/intro/logo_screen_load.asm:68 COPY_TO_VRAM1 INTRO_BG2_BUFFER, $4000, $800, 0
    case 0xC0EFCE: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/intro/logo_screen_load.asm:68 COPY_TO_VRAM1 INTRO_BG2_BUFFER, $4000, $800, 0
    case 0xC0EFD0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x002200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/intro/logo_screen_load.asm:68 COPY_TO_VRAM1 INTRO_BG2_BUFFER, $4000, $800, 0
    case 0xC0EFD2: {
        Instruction step(cpu, 0x22, 0xC08616u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/intro/logo_screen_load.asm:68 COPY_TO_VRAM1 INTRO_BG2_BUFFER, $4000, $800, 0
    // Overlapping static entry reached from 0xC0EFD0.
    case 0xC0EFD3: {
        Instruction step(cpu, 0x16, 0x000086u, 2u, AddressMode::DirectPageIndexedX);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/intro/logo_screen_load.asm:68 COPY_TO_VRAM1 INTRO_BG2_BUFFER, $4000, $800, 0
    // Overlapping static entry reached from 0xC0EFD3.
    case 0xC0EFD5: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000E2u : 0x0020E2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/intro/logo_screen_load.asm:70 SEP #PROC_FLAGS::ACCUM8
    case 0xC0EFD6: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/intro/logo_screen_load.asm:70 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC0EFD5.
    case 0xC0EFD7: {
        Instruction step(cpu, 0x20, 0x0018A9u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/logo_screen_load.asm:71 LDA #PALETTE_UPLOAD::FULL
    case 0xC0EFD8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000018u : 0x008D18u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/logo_screen_load.asm:72 STA PALETTE_UPLOAD_MODE
    case 0xC0EFDA: {
        Instruction step(cpu, 0x8D, 0x000030u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/logo_screen_load.asm:72 STA PALETTE_UPLOAD_MODE
    // Overlapping static entry reached from 0xC0EFD8.
    case 0xC0EFDB: {
        Instruction step(cpu, 0x30, 0x000000u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/intro/logo_screen_load.asm:73 REP #PROC_FLAGS::ACCUM8
    case 0xC0EFDD: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/intro/logo_screen_load.asm:74 END_C_FUNCTION
    case 0xC0EFDF: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/intro/logo_screen_load.asm:74 END_C_FUNCTION
    case 0xC0EFE0: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
