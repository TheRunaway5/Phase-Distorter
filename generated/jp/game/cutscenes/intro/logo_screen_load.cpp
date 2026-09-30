// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/intro/logo_screen_load.asm
bool resume_introduction_logo_screen_load(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/intro/logo_screen_load.asm:3 BEGIN_C_FUNCTION
    case 0xC0EF31: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/intro/logo_screen_load.asm:8 END_STACK_VARS
    case 0xC0EF33: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/intro/logo_screen_load.asm:8 END_STACK_VARS
    case 0xC0EF34: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/intro/logo_screen_load.asm:8 END_STACK_VARS
    case 0xC0EF35: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/intro/logo_screen_load.asm:8 END_STACK_VARS
    case 0xC0EF36: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EAu : 0x00FFEAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/intro/logo_screen_load.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC0EF36.
    case 0xC0EF38: {
        Instruction step(cpu, 0xFF, 0x85685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/intro/logo_screen_load.asm:8 END_STACK_VARS
    case 0xC0EF39: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/intro/logo_screen_load.asm:8 END_STACK_VARS
    case 0xC0EF3A: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/intro/logo_screen_load.asm:9 STA @VIRTUAL02
    case 0xC0EF3B: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/logo_screen_load.asm:9 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC0EF38.
    case 0xC0EF3C: {
        Instruction step(cpu, 0x02, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/intro/logo_screen_load.asm:10 LDA #1
    case 0xC0EF3D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/logo_screen_load.asm:10 LDA #1
    // Overlapping static entry reached from 0xC0EF3D.
    case 0xC0EF3F: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/logo_screen_load.asm:11 JSL UNKNOWN_C08D79
    case 0xC0EF40: {
        Instruction step(cpu, 0x22, 0xC08D6Au, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/logo_screen_load.asm:12 LDY #$0000
    case 0xC0EF44: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/intro/logo_screen_load.asm:12 LDY #$0000
    // Overlapping static entry reached from 0xC0EF44.
    case 0xC0EF46: {
        Instruction step(cpu, 0x00, 0x0000A2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/logo_screen_load.asm:13 LDX #$4000
    case 0xC0EF47: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x004000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/intro/logo_screen_load.asm:13 LDX #$4000
    // Overlapping static entry reached from 0xC0EF47.
    case 0xC0EF49: {
        Instruction step(cpu, 0x40, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_interrupt();
        return step.finish();
    }
    // src/intro/logo_screen_load.asm:14 TYA ;BG_TILEMAP_SIZE::NORMAL
    case 0xC0EF4A: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/intro/logo_screen_load.asm:15 JSL SET_BG3_VRAM_LOCATION
    case 0xC0EF4B: {
        Instruction step(cpu, 0x22, 0xC08E0Du, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/logo_screen_load.asm:16 SEP #PROC_FLAGS::ACCUM8
    case 0xC0EF4F: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/intro/logo_screen_load.asm:17 LDA #4
    case 0xC0EF51: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000004u : 0x008D04u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/logo_screen_load.asm:18 STA TM_MIRROR
    case 0xC0EF53: {
        Instruction step(cpu, 0x8D, 0x00001Au, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/logo_screen_load.asm:18 STA TM_MIRROR
    // Overlapping static entry reached from 0xC0EF51.
    case 0xC0EF54: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/intro/logo_screen_load.asm:18 STA TM_MIRROR
    // Overlapping static entry reached from 0xC0EF54.
    case 0xC0EF55: {
        Instruction step(cpu, 0x00, 0x0000C2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/logo_screen_load.asm:19 REP #PROC_FLAGS::ACCUM8
    case 0xC0EF56: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/intro/logo_screen_load.asm:20 LDA @VIRTUAL02
    case 0xC0EF58: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/logo_screen_load.asm:21 BEQ @UNKNOWN1
    case 0xC0EF5A: {
        Instruction step(cpu, 0xF0, 0x000010u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/intro/logo_screen_load.asm:22 CMP #1
    case 0xC0EF5C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/intro/logo_screen_load.asm:22 CMP #1
    // Overlapping static entry reached from 0xC0EF5C.
    case 0xC0EF5E: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/logo_screen_load.asm:23 BEQ @UNKNOWN2
    case 0xC0EF5F: {
        Instruction step(cpu, 0xF0, 0x000063u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/intro/logo_screen_load.asm:24 CMP #2
    case 0xC0EF61: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/intro/logo_screen_load.asm:24 CMP #2
    // Overlapping static entry reached from 0xC0EF61.
    case 0xC0EF63: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/intro/logo_screen_load.asm:25 BEQL @UNKNOWN4
    case 0xC0EF64: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/intro/logo_screen_load.asm:25 BEQL @UNKNOWN4
    case 0xC0EF66: {
        Instruction step(cpu, 0x4C, 0x00F01Bu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/intro/logo_screen_load.asm:26 JMP @UNKNOWN5
    case 0xC0EF69: {
        Instruction step(cpu, 0x4C, 0x00F070u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:28 LOADPTR NINTENDO_GRAPHICS, @LOCAL00
    case 0xC0EF6C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000EFu : 0x0048EFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:28 LOADPTR NINTENDO_GRAPHICS, @LOCAL00
    // Overlapping static entry reached from 0xC0EF6C.
    case 0xC0EF6E: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/logo_screen_load.asm:28 LOADPTR NINTENDO_GRAPHICS, @LOCAL00
    case 0xC0EF6F: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:28 LOADPTR NINTENDO_GRAPHICS, @LOCAL00
    case 0xC0EF71: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E1u : 0x0000E1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:28 LOADPTR NINTENDO_GRAPHICS, @LOCAL00
    // Overlapping static entry reached from 0xC0EF71.
    case 0xC0EF73: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/logo_screen_load.asm:28 LOADPTR NINTENDO_GRAPHICS, @LOCAL00
    case 0xC0EF74: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:29 LOADPTR BUFFER, @LOCAL01
    case 0xC0EF76: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:29 LOADPTR BUFFER, @LOCAL01
    // Overlapping static entry reached from 0xC0EF76.
    case 0xC0EF78: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/logo_screen_load.asm:29 LOADPTR BUFFER, @LOCAL01
    case 0xC0EF79: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:29 LOADPTR BUFFER, @LOCAL01
    case 0xC0EF7B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Fu : 0x00007Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:29 LOADPTR BUFFER, @LOCAL01
    // Overlapping static entry reached from 0xC0EF7B.
    case 0xC0EF7D: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/logo_screen_load.asm:29 LOADPTR BUFFER, @LOCAL01
    case 0xC0EF7E: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/logo_screen_load.asm:30 JSL DECOMP
    case 0xC0EF80: {
        Instruction step(cpu, 0x22, 0xC419EAu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:31 LOADPTR NINTENDO_ARRANGEMENT, @LOCAL00
    case 0xC0EF84: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000ABu : 0x0048ABu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:31 LOADPTR NINTENDO_ARRANGEMENT, @LOCAL00
    // Overlapping static entry reached from 0xC0EF84.
    case 0xC0EF86: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/logo_screen_load.asm:31 LOADPTR NINTENDO_ARRANGEMENT, @LOCAL00
    case 0xC0EF87: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:31 LOADPTR NINTENDO_ARRANGEMENT, @LOCAL00
    case 0xC0EF89: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E1u : 0x0000E1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:31 LOADPTR NINTENDO_ARRANGEMENT, @LOCAL00
    // Overlapping static entry reached from 0xC0EF89.
    case 0xC0EF8B: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/logo_screen_load.asm:31 LOADPTR NINTENDO_ARRANGEMENT, @LOCAL00
    case 0xC0EF8C: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:32 LOADPTR INTRO_BG2_BUFFER, @LOCAL01
    case 0xC0EF8E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x008000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:32 LOADPTR INTRO_BG2_BUFFER, @LOCAL01
    // Overlapping static entry reached from 0xC0EF8E.
    case 0xC0EF90: {
        Instruction step(cpu, 0x80, 0x000085u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/logo_screen_load.asm:32 LOADPTR INTRO_BG2_BUFFER, @LOCAL01
    case 0xC0EF91: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:32 LOADPTR INTRO_BG2_BUFFER, @LOCAL01
    case 0xC0EF93: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Eu : 0x00007Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:32 LOADPTR INTRO_BG2_BUFFER, @LOCAL01
    // Overlapping static entry reached from 0xC0EF93.
    case 0xC0EF95: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/logo_screen_load.asm:32 LOADPTR INTRO_BG2_BUFFER, @LOCAL01
    case 0xC0EF96: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/logo_screen_load.asm:33 JSL DECOMP
    case 0xC0EF98: {
        Instruction step(cpu, 0x22, 0xC419EAu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:34 LOADPTR NINTENDO_PALETTE, @LOCAL00
    case 0xC0EF9C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000B8u : 0x0049B8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:34 LOADPTR NINTENDO_PALETTE, @LOCAL00
    // Overlapping static entry reached from 0xC0EF9C.
    case 0xC0EF9E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x49, narrow ? 0x000085u : 0x000E85u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.xor_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/logo_screen_load.asm:34 LOADPTR NINTENDO_PALETTE, @LOCAL00
    case 0xC0EF9F: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/logo_screen_load.asm:34 LOADPTR NINTENDO_PALETTE, @LOCAL00
    // Overlapping static entry reached from 0xC0EF9E.
    case 0xC0EFA0: {
        Instruction step(cpu, 0x0E, 0x00E1A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:34 LOADPTR NINTENDO_PALETTE, @LOCAL00
    case 0xC0EFA1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E1u : 0x0000E1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:34 LOADPTR NINTENDO_PALETTE, @LOCAL00
    // Overlapping static entry reached from 0xC0EFA1.
    case 0xC0EFA3: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/logo_screen_load.asm:34 LOADPTR NINTENDO_PALETTE, @LOCAL00
    case 0xC0EFA4: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/intro/logo_screen_load.asm:35 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0EFA6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/intro/logo_screen_load.asm:35 PROMOTENEARPTR PALETTES, @VIRTUAL06
    // Overlapping static entry reached from 0xC0EFA6.
    case 0xC0EFA8: {
        Instruction step(cpu, 0x02, 0x000085u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/intro/logo_screen_load.asm:35 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0EFA9: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:909 PHB
    // Macro caller: src/intro/logo_screen_load.asm:35 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0EFAB: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/intro/logo_screen_load.asm:35 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0EFAC: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:911 PLA
    // Macro caller: src/intro/logo_screen_load.asm:35 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0EFAE: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/intro/logo_screen_load.asm:35 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0EFAF: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/intro/logo_screen_load.asm:35 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0EFB1: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/intro/logo_screen_load.asm:36 REP #PROC_FLAGS::ACCUM8
    case 0xC0EFB3: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/logo_screen_load.asm:37 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0EFB5: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/logo_screen_load.asm:37 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0EFB7: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/logo_screen_load.asm:37 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0EFB9: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/logo_screen_load.asm:37 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0EFBB: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/logo_screen_load.asm:38 JSL DECOMP
    case 0xC0EFBD: {
        Instruction step(cpu, 0x22, 0xC419EAu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/logo_screen_load.asm:39 JMP @UNKNOWN5
    case 0xC0EFC1: {
        Instruction step(cpu, 0x4C, 0x00F070u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:41 LOADPTR APE_GRAPHICS, @LOCAL00
    case 0xC0EFC4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000080u : 0x004380u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:41 LOADPTR APE_GRAPHICS, @LOCAL00
    // Overlapping static entry reached from 0xC0EFC4.
    case 0xC0EFC6: {
        Instruction step(cpu, 0x43, 0x000085u, 2u, AddressMode::StackRelative);
        step.xor_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/logo_screen_load.asm:41 LOADPTR APE_GRAPHICS, @LOCAL00
    case 0xC0EFC7: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/logo_screen_load.asm:41 LOADPTR APE_GRAPHICS, @LOCAL00
    // Overlapping static entry reached from 0xC0EFC6.
    case 0xC0EFC8: {
        Instruction step(cpu, 0x0E, 0x00E1A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:41 LOADPTR APE_GRAPHICS, @LOCAL00
    case 0xC0EFC9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E1u : 0x0000E1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:41 LOADPTR APE_GRAPHICS, @LOCAL00
    // Overlapping static entry reached from 0xC0EFC9.
    case 0xC0EFCB: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/logo_screen_load.asm:41 LOADPTR APE_GRAPHICS, @LOCAL00
    case 0xC0EFCC: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:42 LOADPTR BUFFER, @LOCAL01
    case 0xC0EFCE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:42 LOADPTR BUFFER, @LOCAL01
    // Overlapping static entry reached from 0xC0EFCE.
    case 0xC0EFD0: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/logo_screen_load.asm:42 LOADPTR BUFFER, @LOCAL01
    case 0xC0EFD1: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:42 LOADPTR BUFFER, @LOCAL01
    case 0xC0EFD3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Fu : 0x00007Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:42 LOADPTR BUFFER, @LOCAL01
    // Overlapping static entry reached from 0xC0EFD3.
    case 0xC0EFD5: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/logo_screen_load.asm:42 LOADPTR BUFFER, @LOCAL01
    case 0xC0EFD6: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/logo_screen_load.asm:43 JSL DECOMP
    case 0xC0EFD8: {
        Instruction step(cpu, 0x22, 0xC419EAu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:44 LOADPTR APE_ARRANGEMENT, @LOCAL00
    case 0xC0EFDC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000017u : 0x004317u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:44 LOADPTR APE_ARRANGEMENT, @LOCAL00
    // Overlapping static entry reached from 0xC0EFDC.
    case 0xC0EFDE: {
        Instruction step(cpu, 0x43, 0x000085u, 2u, AddressMode::StackRelative);
        step.xor_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/logo_screen_load.asm:44 LOADPTR APE_ARRANGEMENT, @LOCAL00
    case 0xC0EFDF: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/logo_screen_load.asm:44 LOADPTR APE_ARRANGEMENT, @LOCAL00
    // Overlapping static entry reached from 0xC0EFDE.
    case 0xC0EFE0: {
        Instruction step(cpu, 0x0E, 0x00E1A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:44 LOADPTR APE_ARRANGEMENT, @LOCAL00
    case 0xC0EFE1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E1u : 0x0000E1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:44 LOADPTR APE_ARRANGEMENT, @LOCAL00
    // Overlapping static entry reached from 0xC0EFE1.
    case 0xC0EFE3: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/logo_screen_load.asm:44 LOADPTR APE_ARRANGEMENT, @LOCAL00
    case 0xC0EFE4: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:45 LOADPTR INTRO_BG2_BUFFER, @LOCAL01
    case 0xC0EFE6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x008000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:45 LOADPTR INTRO_BG2_BUFFER, @LOCAL01
    // Overlapping static entry reached from 0xC0EFE6.
    case 0xC0EFE8: {
        Instruction step(cpu, 0x80, 0x000085u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/logo_screen_load.asm:45 LOADPTR INTRO_BG2_BUFFER, @LOCAL01
    case 0xC0EFE9: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:45 LOADPTR INTRO_BG2_BUFFER, @LOCAL01
    case 0xC0EFEB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Eu : 0x00007Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:45 LOADPTR INTRO_BG2_BUFFER, @LOCAL01
    // Overlapping static entry reached from 0xC0EFEB.
    case 0xC0EFED: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/logo_screen_load.asm:45 LOADPTR INTRO_BG2_BUFFER, @LOCAL01
    case 0xC0EFEE: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/logo_screen_load.asm:46 JSL DECOMP
    case 0xC0EFF0: {
        Instruction step(cpu, 0x22, 0xC419EAu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:47 LOADPTR APE_PALETTE, @LOCAL00
    case 0xC0EFF4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000086u : 0x004586u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:47 LOADPTR APE_PALETTE, @LOCAL00
    // Overlapping static entry reached from 0xC0EFF4.
    case 0xC0EFF6: {
        Instruction step(cpu, 0x45, 0x000085u, 2u, AddressMode::DirectPage);
        step.xor_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/logo_screen_load.asm:47 LOADPTR APE_PALETTE, @LOCAL00
    case 0xC0EFF7: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/logo_screen_load.asm:47 LOADPTR APE_PALETTE, @LOCAL00
    // Overlapping static entry reached from 0xC0EFF6.
    case 0xC0EFF8: {
        Instruction step(cpu, 0x0E, 0x00E1A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:47 LOADPTR APE_PALETTE, @LOCAL00
    case 0xC0EFF9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E1u : 0x0000E1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:47 LOADPTR APE_PALETTE, @LOCAL00
    // Overlapping static entry reached from 0xC0EFF9.
    case 0xC0EFFB: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/logo_screen_load.asm:47 LOADPTR APE_PALETTE, @LOCAL00
    case 0xC0EFFC: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/intro/logo_screen_load.asm:48 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0EFFE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/intro/logo_screen_load.asm:48 PROMOTENEARPTR PALETTES, @VIRTUAL06
    // Overlapping static entry reached from 0xC0EFFE.
    case 0xC0F000: {
        Instruction step(cpu, 0x02, 0x000085u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/intro/logo_screen_load.asm:48 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0F001: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:909 PHB
    // Macro caller: src/intro/logo_screen_load.asm:48 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0F003: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/intro/logo_screen_load.asm:48 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0F004: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:911 PLA
    // Macro caller: src/intro/logo_screen_load.asm:48 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0F006: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/intro/logo_screen_load.asm:48 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0F007: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/intro/logo_screen_load.asm:48 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0F009: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/intro/logo_screen_load.asm:49 REP #PROC_FLAGS::ACCUM8
    case 0xC0F00B: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/logo_screen_load.asm:50 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0F00D: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/logo_screen_load.asm:50 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0F00F: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/logo_screen_load.asm:50 MOVE_INT @VIRTUAL06, @LOCAL01
    // Overlapping static entry reached from 0xC0F089.
    case 0xC0F010: {
        Instruction step(cpu, 0x12, 0x0000A5u, 2u, AddressMode::DirectPageIndirect);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/logo_screen_load.asm:50 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0F011: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/logo_screen_load.asm:50 MOVE_INT @VIRTUAL06, @LOCAL01
    // Overlapping static entry reached from 0xC0F010.
    case 0xC0F012: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/logo_screen_load.asm:50 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0F013: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/logo_screen_load.asm:51 JSL DECOMP
    case 0xC0F015: {
        Instruction step(cpu, 0x22, 0xC419EAu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/logo_screen_load.asm:52 BRA @UNKNOWN5
    case 0xC0F019: {
        Instruction step(cpu, 0x80, 0x000055u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:54 LOADPTR HALKEN_GRAPHICS, @LOCAL00
    case 0xC0F01B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00003Eu : 0x00463Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:54 LOADPTR HALKEN_GRAPHICS, @LOCAL00
    // Overlapping static entry reached from 0xC0F01B.
    case 0xC0F01D: {
        Instruction step(cpu, 0x46, 0x000085u, 2u, AddressMode::DirectPage);
        step.shift_right();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/logo_screen_load.asm:54 LOADPTR HALKEN_GRAPHICS, @LOCAL00
    case 0xC0F01E: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/logo_screen_load.asm:54 LOADPTR HALKEN_GRAPHICS, @LOCAL00
    // Overlapping static entry reached from 0xC0F01D.
    case 0xC0F01F: {
        Instruction step(cpu, 0x0E, 0x00E1A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:54 LOADPTR HALKEN_GRAPHICS, @LOCAL00
    case 0xC0F020: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E1u : 0x0000E1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:54 LOADPTR HALKEN_GRAPHICS, @LOCAL00
    // Overlapping static entry reached from 0xC0F020.
    case 0xC0F022: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/logo_screen_load.asm:54 LOADPTR HALKEN_GRAPHICS, @LOCAL00
    case 0xC0F023: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:55 LOADPTR BUFFER, @LOCAL01
    case 0xC0F025: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:55 LOADPTR BUFFER, @LOCAL01
    // Overlapping static entry reached from 0xC0F025.
    case 0xC0F027: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/logo_screen_load.asm:55 LOADPTR BUFFER, @LOCAL01
    case 0xC0F028: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:55 LOADPTR BUFFER, @LOCAL01
    case 0xC0F02A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Fu : 0x00007Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:55 LOADPTR BUFFER, @LOCAL01
    // Overlapping static entry reached from 0xC0F02A.
    case 0xC0F02C: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/logo_screen_load.asm:55 LOADPTR BUFFER, @LOCAL01
    case 0xC0F02D: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/logo_screen_load.asm:56 JSL DECOMP
    case 0xC0F02F: {
        Instruction step(cpu, 0x22, 0xC419EAu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:57 LOADPTR HALKEN_ARRANGEMENT, @LOCAL00
    case 0xC0F033: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000CAu : 0x0045CAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:57 LOADPTR HALKEN_ARRANGEMENT, @LOCAL00
    // Overlapping static entry reached from 0xC0F033.
    case 0xC0F035: {
        Instruction step(cpu, 0x45, 0x000085u, 2u, AddressMode::DirectPage);
        step.xor_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/logo_screen_load.asm:57 LOADPTR HALKEN_ARRANGEMENT, @LOCAL00
    case 0xC0F036: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/logo_screen_load.asm:57 LOADPTR HALKEN_ARRANGEMENT, @LOCAL00
    // Overlapping static entry reached from 0xC0F035.
    case 0xC0F037: {
        Instruction step(cpu, 0x0E, 0x00E1A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:57 LOADPTR HALKEN_ARRANGEMENT, @LOCAL00
    case 0xC0F038: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E1u : 0x0000E1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:57 LOADPTR HALKEN_ARRANGEMENT, @LOCAL00
    // Overlapping static entry reached from 0xC0F038.
    case 0xC0F03A: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/logo_screen_load.asm:57 LOADPTR HALKEN_ARRANGEMENT, @LOCAL00
    case 0xC0F03B: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:58 LOADPTR INTRO_BG2_BUFFER, @LOCAL01
    case 0xC0F03D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x008000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:58 LOADPTR INTRO_BG2_BUFFER, @LOCAL01
    // Overlapping static entry reached from 0xC0F03D.
    case 0xC0F03F: {
        Instruction step(cpu, 0x80, 0x000085u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/logo_screen_load.asm:58 LOADPTR INTRO_BG2_BUFFER, @LOCAL01
    case 0xC0F040: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:58 LOADPTR INTRO_BG2_BUFFER, @LOCAL01
    case 0xC0F042: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Eu : 0x00007Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:58 LOADPTR INTRO_BG2_BUFFER, @LOCAL01
    // Overlapping static entry reached from 0xC0F042.
    case 0xC0F044: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/logo_screen_load.asm:58 LOADPTR INTRO_BG2_BUFFER, @LOCAL01
    case 0xC0F045: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/logo_screen_load.asm:59 JSL DECOMP
    case 0xC0F047: {
        Instruction step(cpu, 0x22, 0xC419EAu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:60 LOADPTR HALKEN_PALETTE, @LOCAL00
    case 0xC0F04B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Eu : 0x00480Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:60 LOADPTR HALKEN_PALETTE, @LOCAL00
    // Overlapping static entry reached from 0xC0F04B.
    case 0xC0F04D: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/logo_screen_load.asm:60 LOADPTR HALKEN_PALETTE, @LOCAL00
    case 0xC0F04E: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:60 LOADPTR HALKEN_PALETTE, @LOCAL00
    case 0xC0F050: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E1u : 0x0000E1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:60 LOADPTR HALKEN_PALETTE, @LOCAL00
    // Overlapping static entry reached from 0xC0F050.
    case 0xC0F052: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/logo_screen_load.asm:60 LOADPTR HALKEN_PALETTE, @LOCAL00
    case 0xC0F053: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/intro/logo_screen_load.asm:61 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0F055: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/intro/logo_screen_load.asm:61 PROMOTENEARPTR PALETTES, @VIRTUAL06
    // Overlapping static entry reached from 0xC0F055.
    case 0xC0F057: {
        Instruction step(cpu, 0x02, 0x000085u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/intro/logo_screen_load.asm:61 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0F058: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:909 PHB
    // Macro caller: src/intro/logo_screen_load.asm:61 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0F05A: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/intro/logo_screen_load.asm:61 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0F05B: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:911 PLA
    // Macro caller: src/intro/logo_screen_load.asm:61 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0F05D: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/intro/logo_screen_load.asm:61 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0F05E: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/intro/logo_screen_load.asm:61 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0F060: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/intro/logo_screen_load.asm:61 PROMOTENEARPTR PALETTES, @VIRTUAL06
    // Overlapping static entry reached from 0xC042E8.
    case 0xC0F061: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x09, narrow ? 0x0000C2u : 0x0020C2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.or_accumulator();
        return step.finish();
    }
    // src/intro/logo_screen_load.asm:62 REP #PROC_FLAGS::ACCUM8
    case 0xC0F062: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/intro/logo_screen_load.asm:62 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC0F07F.
    case 0xC0F063: {
        Instruction step(cpu, 0x20, 0x0006A5u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/logo_screen_load.asm:63 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0F064: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/logo_screen_load.asm:63 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0F066: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/logo_screen_load.asm:63 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0F068: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/logo_screen_load.asm:63 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0F06A: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/logo_screen_load.asm:64 JSL DECOMP
    case 0xC0F06C: {
        Instruction step(cpu, 0x22, 0xC419EAu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:66 COPY_TO_VRAM1 BUFFER, $0000, $8000, 0
    case 0xC0F070: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:66 COPY_TO_VRAM1 BUFFER, $0000, $8000, 0
    // Overlapping static entry reached from 0xC0F070.
    case 0xC0F072: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/logo_screen_load.asm:66 COPY_TO_VRAM1 BUFFER, $0000, $8000, 0
    case 0xC0F073: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:66 COPY_TO_VRAM1 BUFFER, $0000, $8000, 0
    case 0xC0F075: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Fu : 0x00007Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:66 COPY_TO_VRAM1 BUFFER, $0000, $8000, 0
    // Overlapping static entry reached from 0xC0F075.
    case 0xC0F077: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/logo_screen_load.asm:66 COPY_TO_VRAM1 BUFFER, $0000, $8000, 0
    case 0xC0F078: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/intro/logo_screen_load.asm:66 COPY_TO_VRAM1 BUFFER, $0000, $8000, 0
    case 0xC0F07A: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/intro/logo_screen_load.asm:66 COPY_TO_VRAM1 BUFFER, $0000, $8000, 0
    // Overlapping static entry reached from 0xC0F07A.
    case 0xC0F07C: {
        Instruction step(cpu, 0x00, 0x0000A2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/intro/logo_screen_load.asm:66 COPY_TO_VRAM1 BUFFER, $0000, $8000, 0
    case 0xC0F07D: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x008000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/intro/logo_screen_load.asm:66 COPY_TO_VRAM1 BUFFER, $0000, $8000, 0
    // Overlapping static entry reached from 0xC0F07D.
    case 0xC0F07F: {
        Instruction step(cpu, 0x80, 0x0000E2u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/intro/logo_screen_load.asm:66 COPY_TO_VRAM1 BUFFER, $0000, $8000, 0
    case 0xC0F080: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:1161 TYA
    // Macro caller: src/intro/logo_screen_load.asm:66 COPY_TO_VRAM1 BUFFER, $0000, $8000, 0
    case 0xC0F082: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/intro/logo_screen_load.asm:66 COPY_TO_VRAM1 BUFFER, $0000, $8000, 0
    case 0xC0F083: {
        Instruction step(cpu, 0x22, 0xC08616u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:68 COPY_TO_VRAM1 INTRO_BG2_BUFFER, $4000, $800, 0
    case 0xC0F087: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x008000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:68 COPY_TO_VRAM1 INTRO_BG2_BUFFER, $4000, $800, 0
    // Overlapping static entry reached from 0xC0F087.
    case 0xC0F089: {
        Instruction step(cpu, 0x80, 0x000085u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/logo_screen_load.asm:68 COPY_TO_VRAM1 INTRO_BG2_BUFFER, $4000, $800, 0
    case 0xC0F08A: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:68 COPY_TO_VRAM1 INTRO_BG2_BUFFER, $4000, $800, 0
    case 0xC0F08C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Eu : 0x00007Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:68 COPY_TO_VRAM1 INTRO_BG2_BUFFER, $4000, $800, 0
    // Overlapping static entry reached from 0xC0F08C.
    case 0xC0F08E: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/logo_screen_load.asm:68 COPY_TO_VRAM1 INTRO_BG2_BUFFER, $4000, $800, 0
    case 0xC0F08F: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/intro/logo_screen_load.asm:68 COPY_TO_VRAM1 INTRO_BG2_BUFFER, $4000, $800, 0
    case 0xC0F091: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x004000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/intro/logo_screen_load.asm:68 COPY_TO_VRAM1 INTRO_BG2_BUFFER, $4000, $800, 0
    // Overlapping static entry reached from 0xC0F091.
    case 0xC0F093: {
        Instruction step(cpu, 0x40, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_interrupt();
        return step.finish();
    }
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/intro/logo_screen_load.asm:68 COPY_TO_VRAM1 INTRO_BG2_BUFFER, $4000, $800, 0
    case 0xC0F094: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000800u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/intro/logo_screen_load.asm:68 COPY_TO_VRAM1 INTRO_BG2_BUFFER, $4000, $800, 0
    // Overlapping static entry reached from 0xC0F094.
    case 0xC0F096: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/intro/logo_screen_load.asm:68 COPY_TO_VRAM1 INTRO_BG2_BUFFER, $4000, $800, 0
    case 0xC0F097: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/intro/logo_screen_load.asm:68 COPY_TO_VRAM1 INTRO_BG2_BUFFER, $4000, $800, 0
    case 0xC0F099: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x002200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/intro/logo_screen_load.asm:68 COPY_TO_VRAM1 INTRO_BG2_BUFFER, $4000, $800, 0
    case 0xC0F09B: {
        Instruction step(cpu, 0x22, 0xC08616u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/intro/logo_screen_load.asm:68 COPY_TO_VRAM1 INTRO_BG2_BUFFER, $4000, $800, 0
    // Overlapping static entry reached from 0xC0F099.
    case 0xC0F09C: {
        Instruction step(cpu, 0x16, 0x000086u, 2u, AddressMode::DirectPageIndexedX);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/intro/logo_screen_load.asm:68 COPY_TO_VRAM1 INTRO_BG2_BUFFER, $4000, $800, 0
    // Overlapping static entry reached from 0xC0F09C.
    case 0xC0F09E: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000E2u : 0x0020E2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/intro/logo_screen_load.asm:70 SEP #PROC_FLAGS::ACCUM8
    case 0xC0F09F: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/intro/logo_screen_load.asm:70 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC0F09E.
    case 0xC0F0A0: {
        Instruction step(cpu, 0x20, 0x0018A9u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/logo_screen_load.asm:71 LDA #PALETTE_UPLOAD::FULL
    case 0xC0F0A1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000018u : 0x008D18u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/logo_screen_load.asm:72 STA PALETTE_UPLOAD_MODE
    case 0xC0F0A3: {
        Instruction step(cpu, 0x8D, 0x000030u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/logo_screen_load.asm:72 STA PALETTE_UPLOAD_MODE
    // Overlapping static entry reached from 0xC0F0A1.
    case 0xC0F0A4: {
        Instruction step(cpu, 0x30, 0x000000u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/intro/logo_screen_load.asm:73 REP #PROC_FLAGS::ACCUM8
    case 0xC0F0A6: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/intro/logo_screen_load.asm:74 END_C_FUNCTION
    case 0xC0F0A8: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/intro/logo_screen_load.asm:74 END_C_FUNCTION
    case 0xC0F0A9: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
