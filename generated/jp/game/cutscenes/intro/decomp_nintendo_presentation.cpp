// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/intro/decomp_nintendo_presentation.asm
bool resume_introduction_decomp_nintendo_presentation(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4AFE1: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:7 END_STACK_VARS
    case 0xC4AFE3: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:7 END_STACK_VARS
    case 0xC4AFE4: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:7 END_STACK_VARS
    case 0xC4AFE5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EAu : 0x00FFEAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC4AFE5.
    case 0xC4AFE7: {
        Instruction step(cpu, 0xFF, 0x00A95Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:7 END_STACK_VARS
    case 0xC4AFE8: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:8 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4AFE9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:8 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC4AFE9.
    case 0xC4AFEB: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:8 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4AFEC: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:8 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4AFEE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Fu : 0x00007Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:8 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC4AFEE.
    case 0xC4AFF0: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:8 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4AFF1: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:9 LOADPTR NINTENDO_PRESENTATION_ARRANGEMENT, @LOCAL00
    case 0xC4AFF3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000092u : 0x00C692u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:9 LOADPTR NINTENDO_PRESENTATION_ARRANGEMENT, @LOCAL00
    // Overlapping static entry reached from 0xC4AFF3.
    case 0xC4AFF5: {
        Instruction step(cpu, 0xC6, 0x000085u, 2u, AddressMode::DirectPage);
        step.decrement();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:9 LOADPTR NINTENDO_PRESENTATION_ARRANGEMENT, @LOCAL00
    case 0xC4AFF6: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:9 LOADPTR NINTENDO_PRESENTATION_ARRANGEMENT, @LOCAL00
    // Overlapping static entry reached from 0xC4AFF5.
    case 0xC4AFF7: {
        Instruction step(cpu, 0x0E, 0x00E1A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:9 LOADPTR NINTENDO_PRESENTATION_ARRANGEMENT, @LOCAL00
    case 0xC4AFF8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E1u : 0x0000E1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:9 LOADPTR NINTENDO_PRESENTATION_ARRANGEMENT, @LOCAL00
    // Overlapping static entry reached from 0xC4AFF8.
    case 0xC4AFFA: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:9 LOADPTR NINTENDO_PRESENTATION_ARRANGEMENT, @LOCAL00
    case 0xC4AFFB: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:10 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4AFFD: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:10 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4AFFF: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:10 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4B001: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:10 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4B003: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/decomp_nintendo_presentation.asm:11 JSL DECOMP
    case 0xC4B005: {
        Instruction step(cpu, 0x22, 0xC419EAu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/decomp_nintendo_presentation.asm:12 JSR UNKNOWN_C4DCF6
    case 0xC4B009: {
        Instruction step(cpu, 0x20, 0x00AF07u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:13 COPY_TO_VRAM1P @VIRTUAL06, $7C00, $800, 0
    case 0xC4B00C: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:13 COPY_TO_VRAM1P @VIRTUAL06, $7C00, $800, 0
    case 0xC4B00E: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:13 COPY_TO_VRAM1P @VIRTUAL06, $7C00, $800, 0
    case 0xC4B010: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:13 COPY_TO_VRAM1P @VIRTUAL06, $7C00, $800, 0
    case 0xC4B012: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:13 COPY_TO_VRAM1P @VIRTUAL06, $7C00, $800, 0
    case 0xC4B014: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x007C00u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:13 COPY_TO_VRAM1P @VIRTUAL06, $7C00, $800, 0
    // Overlapping static entry reached from 0xC4B014.
    case 0xC4B016: {
        Instruction step(cpu, 0x7C, 0x0000A2u, 3u, AddressMode::AbsoluteIndexedIndirectX);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:13 COPY_TO_VRAM1P @VIRTUAL06, $7C00, $800, 0
    case 0xC4B017: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000800u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:13 COPY_TO_VRAM1P @VIRTUAL06, $7C00, $800, 0
    // Overlapping static entry reached from 0xC4B017.
    case 0xC4B019: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:13 COPY_TO_VRAM1P @VIRTUAL06, $7C00, $800, 0
    case 0xC4B01A: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:13 COPY_TO_VRAM1P @VIRTUAL06, $7C00, $800, 0
    case 0xC4B01C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x002200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:13 COPY_TO_VRAM1P @VIRTUAL06, $7C00, $800, 0
    case 0xC4B01E: {
        Instruction step(cpu, 0x22, 0xC08616u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:13 COPY_TO_VRAM1P @VIRTUAL06, $7C00, $800, 0
    // Overlapping static entry reached from 0xC4B01C.
    case 0xC4B01F: {
        Instruction step(cpu, 0x16, 0x000086u, 2u, AddressMode::DirectPageIndexedX);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:13 COPY_TO_VRAM1P @VIRTUAL06, $7C00, $800, 0
    // Overlapping static entry reached from 0xC4B01F.
    case 0xC4B021: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000A9u : 0x0000A9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:15 LOADPTR BUFFER + $800, @VIRTUAL06
    case 0xC4B022: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000800u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:15 LOADPTR BUFFER + $800, @VIRTUAL06
    // Overlapping static entry reached from 0xC4B021.
    case 0xC4B023: {
        Instruction step(cpu, 0x00, 0x000008u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:15 LOADPTR BUFFER + $800, @VIRTUAL06
    // Overlapping static entry reached from 0xC4B022.
    case 0xC4B024: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:15 LOADPTR BUFFER + $800, @VIRTUAL06
    case 0xC4B025: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:15 LOADPTR BUFFER + $800, @VIRTUAL06
    case 0xC4B027: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Fu : 0x00007Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:15 LOADPTR BUFFER + $800, @VIRTUAL06
    // Overlapping static entry reached from 0xC4B027.
    case 0xC4B029: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:15 LOADPTR BUFFER + $800, @VIRTUAL06
    case 0xC4B02A: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:16 LOADPTR NINTENDO_PRESENTATION_GRAPHICS, @LOCAL00
    case 0xC4B02C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000DFu : 0x00C6DFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:16 LOADPTR NINTENDO_PRESENTATION_GRAPHICS, @LOCAL00
    // Overlapping static entry reached from 0xC4B02C.
    case 0xC4B02E: {
        Instruction step(cpu, 0xC6, 0x000085u, 2u, AddressMode::DirectPage);
        step.decrement();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:16 LOADPTR NINTENDO_PRESENTATION_GRAPHICS, @LOCAL00
    case 0xC4B02F: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:16 LOADPTR NINTENDO_PRESENTATION_GRAPHICS, @LOCAL00
    // Overlapping static entry reached from 0xC4B02E.
    case 0xC4B030: {
        Instruction step(cpu, 0x0E, 0x00E1A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:16 LOADPTR NINTENDO_PRESENTATION_GRAPHICS, @LOCAL00
    case 0xC4B031: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E1u : 0x0000E1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:16 LOADPTR NINTENDO_PRESENTATION_GRAPHICS, @LOCAL00
    // Overlapping static entry reached from 0xC4B031.
    case 0xC4B033: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:16 LOADPTR NINTENDO_PRESENTATION_GRAPHICS, @LOCAL00
    case 0xC4B034: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:17 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4B036: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:17 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4B038: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:17 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4B03A: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:17 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4B03C: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/decomp_nintendo_presentation.asm:18 JSL DECOMP
    case 0xC4B03E: {
        Instruction step(cpu, 0x22, 0xC419EAu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:19 COPY_TO_VRAM1P @VIRTUAL06, $6000, $400, 0
    case 0xC4B042: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:19 COPY_TO_VRAM1P @VIRTUAL06, $6000, $400, 0
    case 0xC4B044: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:19 COPY_TO_VRAM1P @VIRTUAL06, $6000, $400, 0
    case 0xC4B046: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:19 COPY_TO_VRAM1P @VIRTUAL06, $6000, $400, 0
    case 0xC4B048: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:19 COPY_TO_VRAM1P @VIRTUAL06, $6000, $400, 0
    case 0xC4B04A: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x006000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:19 COPY_TO_VRAM1P @VIRTUAL06, $6000, $400, 0
    // Overlapping static entry reached from 0xC4B04A.
    case 0xC4B04C: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:19 COPY_TO_VRAM1P @VIRTUAL06, $6000, $400, 0
    case 0xC4B04D: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000400u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:19 COPY_TO_VRAM1P @VIRTUAL06, $6000, $400, 0
    // Overlapping static entry reached from 0xC4B04D.
    case 0xC4B04F: {
        Instruction step(cpu, 0x04, 0x0000E2u, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:19 COPY_TO_VRAM1P @VIRTUAL06, $6000, $400, 0
    case 0xC4B050: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:19 COPY_TO_VRAM1P @VIRTUAL06, $6000, $400, 0
    // Overlapping static entry reached from 0xC4B04F.
    case 0xC4B051: {
        Instruction step(cpu, 0x20, 0x0000A9u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:19 COPY_TO_VRAM1P @VIRTUAL06, $6000, $400, 0
    case 0xC4B052: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x002200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:19 COPY_TO_VRAM1P @VIRTUAL06, $6000, $400, 0
    case 0xC4B054: {
        Instruction step(cpu, 0x22, 0xC08616u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:19 COPY_TO_VRAM1P @VIRTUAL06, $6000, $400, 0
    // Overlapping static entry reached from 0xC4B052.
    case 0xC4B055: {
        Instruction step(cpu, 0x16, 0x000086u, 2u, AddressMode::DirectPageIndexedX);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:19 COPY_TO_VRAM1P @VIRTUAL06, $6000, $400, 0
    // Overlapping static entry reached from 0xC4B055.
    case 0xC4B057: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000A9u : 0x0000A9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:21 LOADPTR NINTENDO_ITOI_PALETTE, @LOCAL00
    case 0xC4B058: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x00C800u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:21 LOADPTR NINTENDO_ITOI_PALETTE, @LOCAL00
    // Overlapping static entry reached from 0xC4B057.
    case 0xC4B059: {
        Instruction step(cpu, 0x00, 0x0000C8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:21 LOADPTR NINTENDO_ITOI_PALETTE, @LOCAL00
    // Overlapping static entry reached from 0xC4B058.
    case 0xC4B05A: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:21 LOADPTR NINTENDO_ITOI_PALETTE, @LOCAL00
    case 0xC4B05B: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:21 LOADPTR NINTENDO_ITOI_PALETTE, @LOCAL00
    case 0xC4B05D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E1u : 0x0000E1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:21 LOADPTR NINTENDO_ITOI_PALETTE, @LOCAL00
    // Overlapping static entry reached from 0xC4B05D.
    case 0xC4B05F: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:21 LOADPTR NINTENDO_ITOI_PALETTE, @LOCAL00
    case 0xC4B060: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:22 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC4B062: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:22 PROMOTENEARPTR PALETTES, @VIRTUAL06
    // Overlapping static entry reached from 0xC4B062.
    case 0xC4B064: {
        Instruction step(cpu, 0x02, 0x000085u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:22 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC4B065: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:909 PHB
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:22 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC4B067: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:22 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC4B068: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:911 PLA
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:22 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC4B06A: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:22 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC4B06B: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:22 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC4B06D: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/intro/decomp_nintendo_presentation.asm:23 REP #PROC_FLAGS::ACCUM8
    case 0xC4B06F: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/intro/decomp_nintendo_presentation.asm:23 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC4B0B8.
    case 0xC4B070: {
        Instruction step(cpu, 0x20, 0x0006A5u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:24 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4B071: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:24 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4B073: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:24 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4B075: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:24 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4B077: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/decomp_nintendo_presentation.asm:25 JSL DECOMP
    case 0xC4B079: {
        Instruction step(cpu, 0x22, 0xC419EAu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/decomp_nintendo_presentation.asm:26 STZ PALETTES
    case 0xC4B07D: {
        Instruction step(cpu, 0x9C, 0x000200u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/intro/decomp_nintendo_presentation.asm:27 LDA #24
    case 0xC4B080: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000018u : 0x000018u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/decomp_nintendo_presentation.asm:27 LDA #24
    // Overlapping static entry reached from 0xC4B080.
    case 0xC4B082: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/decomp_nintendo_presentation.asm:28 JSL UNKNOWN_C0856B
    case 0xC4B083: {
        Instruction step(cpu, 0x22, 0xC0856Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:29 END_C_FUNCTION
    case 0xC4B087: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:29 END_C_FUNCTION
    case 0xC4B088: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
