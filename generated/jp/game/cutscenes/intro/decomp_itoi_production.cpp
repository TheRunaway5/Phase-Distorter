// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/intro/decomp_itoi_production.asm
bool resume_introduction_decomp_itoi_production(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/intro/decomp_itoi_production.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4AF39: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/intro/decomp_itoi_production.asm:7 END_STACK_VARS
    case 0xC4AF3B: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/intro/decomp_itoi_production.asm:7 END_STACK_VARS
    case 0xC4AF3C: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/intro/decomp_itoi_production.asm:7 END_STACK_VARS
    case 0xC4AF3D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EAu : 0x00FFEAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/intro/decomp_itoi_production.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC4AF3D.
    case 0xC4AF3F: {
        Instruction step(cpu, 0xFF, 0x00A95Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/intro/decomp_itoi_production.asm:7 END_STACK_VARS
    case 0xC4AF40: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/decomp_itoi_production.asm:8 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4AF41: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/decomp_itoi_production.asm:8 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC4AF41.
    case 0xC4AF43: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/decomp_itoi_production.asm:8 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4AF44: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/decomp_itoi_production.asm:8 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4AF46: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Fu : 0x00007Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/decomp_itoi_production.asm:8 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC4AF46.
    case 0xC4AF48: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/decomp_itoi_production.asm:8 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4AF49: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/decomp_itoi_production.asm:9 LOADPTR PRODUCED_ITOI_ARRANGEMENT, @LOCAL00
    case 0xC4AF4B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000070u : 0x00C470u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/decomp_itoi_production.asm:9 LOADPTR PRODUCED_ITOI_ARRANGEMENT, @LOCAL00
    // Overlapping static entry reached from 0xC4AF4B.
    case 0xC4AF4D: {
        Instruction step(cpu, 0xC4, 0x000085u, 2u, AddressMode::DirectPage);
        step.compare_y();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/decomp_itoi_production.asm:9 LOADPTR PRODUCED_ITOI_ARRANGEMENT, @LOCAL00
    case 0xC4AF4E: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/decomp_itoi_production.asm:9 LOADPTR PRODUCED_ITOI_ARRANGEMENT, @LOCAL00
    // Overlapping static entry reached from 0xC4AF4D.
    case 0xC4AF4F: {
        Instruction step(cpu, 0x0E, 0x00E1A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/decomp_itoi_production.asm:9 LOADPTR PRODUCED_ITOI_ARRANGEMENT, @LOCAL00
    case 0xC4AF50: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E1u : 0x0000E1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/decomp_itoi_production.asm:9 LOADPTR PRODUCED_ITOI_ARRANGEMENT, @LOCAL00
    // Overlapping static entry reached from 0xC4AF50.
    case 0xC4AF52: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/decomp_itoi_production.asm:9 LOADPTR PRODUCED_ITOI_ARRANGEMENT, @LOCAL00
    case 0xC4AF53: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/decomp_itoi_production.asm:10 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4AF55: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/decomp_itoi_production.asm:10 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4AF57: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/decomp_itoi_production.asm:10 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4AF59: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/decomp_itoi_production.asm:10 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4AF5B: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/decomp_itoi_production.asm:11 JSL DECOMP
    case 0xC4AF5D: {
        Instruction step(cpu, 0x22, 0xC419EAu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/decomp_itoi_production.asm:12 JSR UNKNOWN_C4DCF6
    case 0xC4AF61: {
        Instruction step(cpu, 0x20, 0x00AF07u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/decomp_itoi_production.asm:13 COPY_TO_VRAM1P @VIRTUAL06, $7C00, $800, 0
    case 0xC4AF64: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/decomp_itoi_production.asm:13 COPY_TO_VRAM1P @VIRTUAL06, $7C00, $800, 0
    case 0xC4AF66: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/decomp_itoi_production.asm:13 COPY_TO_VRAM1P @VIRTUAL06, $7C00, $800, 0
    case 0xC4AF68: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/decomp_itoi_production.asm:13 COPY_TO_VRAM1P @VIRTUAL06, $7C00, $800, 0
    case 0xC4AF6A: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/intro/decomp_itoi_production.asm:13 COPY_TO_VRAM1P @VIRTUAL06, $7C00, $800, 0
    case 0xC4AF6C: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x007C00u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/intro/decomp_itoi_production.asm:13 COPY_TO_VRAM1P @VIRTUAL06, $7C00, $800, 0
    // Overlapping static entry reached from 0xC4AF6C.
    case 0xC4AF6E: {
        Instruction step(cpu, 0x7C, 0x0000A2u, 3u, AddressMode::AbsoluteIndexedIndirectX);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/intro/decomp_itoi_production.asm:13 COPY_TO_VRAM1P @VIRTUAL06, $7C00, $800, 0
    case 0xC4AF6F: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000800u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/intro/decomp_itoi_production.asm:13 COPY_TO_VRAM1P @VIRTUAL06, $7C00, $800, 0
    // Overlapping static entry reached from 0xC4AF6F.
    case 0xC4AF71: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/intro/decomp_itoi_production.asm:13 COPY_TO_VRAM1P @VIRTUAL06, $7C00, $800, 0
    case 0xC4AF72: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/intro/decomp_itoi_production.asm:13 COPY_TO_VRAM1P @VIRTUAL06, $7C00, $800, 0
    case 0xC4AF74: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x002200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/intro/decomp_itoi_production.asm:13 COPY_TO_VRAM1P @VIRTUAL06, $7C00, $800, 0
    case 0xC4AF76: {
        Instruction step(cpu, 0x22, 0xC08616u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/intro/decomp_itoi_production.asm:13 COPY_TO_VRAM1P @VIRTUAL06, $7C00, $800, 0
    // Overlapping static entry reached from 0xC4AF74.
    case 0xC4AF77: {
        Instruction step(cpu, 0x16, 0x000086u, 2u, AddressMode::DirectPageIndexedX);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/intro/decomp_itoi_production.asm:13 COPY_TO_VRAM1P @VIRTUAL06, $7C00, $800, 0
    // Overlapping static entry reached from 0xC4AF77.
    case 0xC4AF79: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000A9u : 0x0000A9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/decomp_itoi_production.asm:15 LOADPTR BUFFER + $800, @VIRTUAL06
    case 0xC4AF7A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000800u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/decomp_itoi_production.asm:15 LOADPTR BUFFER + $800, @VIRTUAL06
    // Overlapping static entry reached from 0xC4AF79.
    case 0xC4AF7B: {
        Instruction step(cpu, 0x00, 0x000008u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/decomp_itoi_production.asm:15 LOADPTR BUFFER + $800, @VIRTUAL06
    // Overlapping static entry reached from 0xC4AF7A.
    case 0xC4AF7C: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/decomp_itoi_production.asm:15 LOADPTR BUFFER + $800, @VIRTUAL06
    case 0xC4AF7D: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/decomp_itoi_production.asm:15 LOADPTR BUFFER + $800, @VIRTUAL06
    case 0xC4AF7F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Fu : 0x00007Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/decomp_itoi_production.asm:15 LOADPTR BUFFER + $800, @VIRTUAL06
    // Overlapping static entry reached from 0xC4AF7F.
    case 0xC4AF81: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/decomp_itoi_production.asm:15 LOADPTR BUFFER + $800, @VIRTUAL06
    case 0xC4AF82: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/decomp_itoi_production.asm:16 LOADPTR PRODUCED_ITOI_GRAPHICS, @LOCAL00
    case 0xC4AF84: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000DCu : 0x00C4DCu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/decomp_itoi_production.asm:16 LOADPTR PRODUCED_ITOI_GRAPHICS, @LOCAL00
    // Overlapping static entry reached from 0xC4AF84.
    case 0xC4AF86: {
        Instruction step(cpu, 0xC4, 0x000085u, 2u, AddressMode::DirectPage);
        step.compare_y();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/decomp_itoi_production.asm:16 LOADPTR PRODUCED_ITOI_GRAPHICS, @LOCAL00
    case 0xC4AF87: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/decomp_itoi_production.asm:16 LOADPTR PRODUCED_ITOI_GRAPHICS, @LOCAL00
    // Overlapping static entry reached from 0xC4AF86.
    case 0xC4AF88: {
        Instruction step(cpu, 0x0E, 0x00E1A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/decomp_itoi_production.asm:16 LOADPTR PRODUCED_ITOI_GRAPHICS, @LOCAL00
    case 0xC4AF89: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E1u : 0x0000E1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/decomp_itoi_production.asm:16 LOADPTR PRODUCED_ITOI_GRAPHICS, @LOCAL00
    // Overlapping static entry reached from 0xC4AF89.
    case 0xC4AF8B: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/decomp_itoi_production.asm:16 LOADPTR PRODUCED_ITOI_GRAPHICS, @LOCAL00
    case 0xC4AF8C: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/decomp_itoi_production.asm:17 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4AF8E: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/decomp_itoi_production.asm:17 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4AF90: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/decomp_itoi_production.asm:17 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4AF92: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/decomp_itoi_production.asm:17 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4AF94: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/decomp_itoi_production.asm:18 JSL DECOMP
    case 0xC4AF96: {
        Instruction step(cpu, 0x22, 0xC419EAu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/decomp_itoi_production.asm:19 COPY_TO_VRAM1P @VIRTUAL06, $6000, $400, 0
    case 0xC4AF9A: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/decomp_itoi_production.asm:19 COPY_TO_VRAM1P @VIRTUAL06, $6000, $400, 0
    case 0xC4AF9C: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/decomp_itoi_production.asm:19 COPY_TO_VRAM1P @VIRTUAL06, $6000, $400, 0
    case 0xC4AF9E: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/decomp_itoi_production.asm:19 COPY_TO_VRAM1P @VIRTUAL06, $6000, $400, 0
    case 0xC4AFA0: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/intro/decomp_itoi_production.asm:19 COPY_TO_VRAM1P @VIRTUAL06, $6000, $400, 0
    case 0xC4AFA2: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x006000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/intro/decomp_itoi_production.asm:19 COPY_TO_VRAM1P @VIRTUAL06, $6000, $400, 0
    // Overlapping static entry reached from 0xC4AFA2.
    case 0xC4AFA4: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/intro/decomp_itoi_production.asm:19 COPY_TO_VRAM1P @VIRTUAL06, $6000, $400, 0
    case 0xC4AFA5: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000400u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/intro/decomp_itoi_production.asm:19 COPY_TO_VRAM1P @VIRTUAL06, $6000, $400, 0
    // Overlapping static entry reached from 0xC4AFA5.
    case 0xC4AFA7: {
        Instruction step(cpu, 0x04, 0x0000E2u, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/intro/decomp_itoi_production.asm:19 COPY_TO_VRAM1P @VIRTUAL06, $6000, $400, 0
    case 0xC4AFA8: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/intro/decomp_itoi_production.asm:19 COPY_TO_VRAM1P @VIRTUAL06, $6000, $400, 0
    // Overlapping static entry reached from 0xC4AFA7.
    case 0xC4AFA9: {
        Instruction step(cpu, 0x20, 0x0000A9u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/intro/decomp_itoi_production.asm:19 COPY_TO_VRAM1P @VIRTUAL06, $6000, $400, 0
    case 0xC4AFAA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x002200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/intro/decomp_itoi_production.asm:19 COPY_TO_VRAM1P @VIRTUAL06, $6000, $400, 0
    case 0xC4AFAC: {
        Instruction step(cpu, 0x22, 0xC08616u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/intro/decomp_itoi_production.asm:19 COPY_TO_VRAM1P @VIRTUAL06, $6000, $400, 0
    // Overlapping static entry reached from 0xC4AFAA.
    case 0xC4AFAD: {
        Instruction step(cpu, 0x16, 0x000086u, 2u, AddressMode::DirectPageIndexedX);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/intro/decomp_itoi_production.asm:19 COPY_TO_VRAM1P @VIRTUAL06, $6000, $400, 0
    // Overlapping static entry reached from 0xC4AFAD.
    case 0xC4AFAF: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000A9u : 0x0000A9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/decomp_itoi_production.asm:21 LOADPTR NINTENDO_ITOI_PALETTE, @LOCAL00
    case 0xC4AFB0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x00C800u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/decomp_itoi_production.asm:21 LOADPTR NINTENDO_ITOI_PALETTE, @LOCAL00
    // Overlapping static entry reached from 0xC4AFAF.
    case 0xC4AFB1: {
        Instruction step(cpu, 0x00, 0x0000C8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/decomp_itoi_production.asm:21 LOADPTR NINTENDO_ITOI_PALETTE, @LOCAL00
    // Overlapping static entry reached from 0xC4AFB0.
    case 0xC4AFB2: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/decomp_itoi_production.asm:21 LOADPTR NINTENDO_ITOI_PALETTE, @LOCAL00
    case 0xC4AFB3: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/decomp_itoi_production.asm:21 LOADPTR NINTENDO_ITOI_PALETTE, @LOCAL00
    case 0xC4AFB5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E1u : 0x0000E1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/decomp_itoi_production.asm:21 LOADPTR NINTENDO_ITOI_PALETTE, @LOCAL00
    // Overlapping static entry reached from 0xC4AFB5.
    case 0xC4AFB7: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/decomp_itoi_production.asm:21 LOADPTR NINTENDO_ITOI_PALETTE, @LOCAL00
    case 0xC4AFB8: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/intro/decomp_itoi_production.asm:22 PROMOTENEARPTR .LOWORD(PALETTES), @VIRTUAL06
    case 0xC4AFBA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/intro/decomp_itoi_production.asm:22 PROMOTENEARPTR .LOWORD(PALETTES), @VIRTUAL06
    // Overlapping static entry reached from 0xC4AFBA.
    case 0xC4AFBC: {
        Instruction step(cpu, 0x02, 0x000085u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/intro/decomp_itoi_production.asm:22 PROMOTENEARPTR .LOWORD(PALETTES), @VIRTUAL06
    case 0xC4AFBD: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:909 PHB
    // Macro caller: src/intro/decomp_itoi_production.asm:22 PROMOTENEARPTR .LOWORD(PALETTES), @VIRTUAL06
    case 0xC4AFBF: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/intro/decomp_itoi_production.asm:22 PROMOTENEARPTR .LOWORD(PALETTES), @VIRTUAL06
    case 0xC4AFC0: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:911 PLA
    // Macro caller: src/intro/decomp_itoi_production.asm:22 PROMOTENEARPTR .LOWORD(PALETTES), @VIRTUAL06
    case 0xC4AFC2: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/intro/decomp_itoi_production.asm:22 PROMOTENEARPTR .LOWORD(PALETTES), @VIRTUAL06
    case 0xC4AFC3: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/intro/decomp_itoi_production.asm:22 PROMOTENEARPTR .LOWORD(PALETTES), @VIRTUAL06
    case 0xC4AFC5: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/intro/decomp_itoi_production.asm:23 REP #PROC_FLAGS::ACCUM8
    case 0xC4AFC7: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/decomp_itoi_production.asm:24 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4AFC9: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/decomp_itoi_production.asm:24 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4AFCB: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/decomp_itoi_production.asm:24 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4AFCD: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/decomp_itoi_production.asm:24 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4AFCF: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/decomp_itoi_production.asm:25 JSL DECOMP
    case 0xC4AFD1: {
        Instruction step(cpu, 0x22, 0xC419EAu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/decomp_itoi_production.asm:26 STZ PALETTES
    case 0xC4AFD5: {
        Instruction step(cpu, 0x9C, 0x000200u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/intro/decomp_itoi_production.asm:27 LDA #24
    case 0xC4AFD8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000018u : 0x000018u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/decomp_itoi_production.asm:27 LDA #24
    // Overlapping static entry reached from 0xC4AFD8.
    case 0xC4AFDA: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/decomp_itoi_production.asm:28 JSL UNKNOWN_C0856B
    case 0xC4AFDB: {
        Instruction step(cpu, 0x22, 0xC0856Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/intro/decomp_itoi_production.asm:29 END_C_FUNCTION
    case 0xC4AFDF: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/intro/decomp_itoi_production.asm:29 END_C_FUNCTION
    case 0xC4AFE0: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
