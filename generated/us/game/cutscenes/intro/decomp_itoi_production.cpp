// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/intro/decomp_itoi_production.asm
bool resume_introduction_decomp_itoi_production(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/intro/decomp_itoi_production.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4DD28: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/intro/decomp_itoi_production.asm:7 END_STACK_VARS
    case 0xC4DD2A: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/intro/decomp_itoi_production.asm:7 END_STACK_VARS
    case 0xC4DD2B: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/intro/decomp_itoi_production.asm:7 END_STACK_VARS
    case 0xC4DD2C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EAu : 0x00FFEAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/intro/decomp_itoi_production.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC4DD2C.
    case 0xC4DD2E: {
        Instruction step(cpu, 0xFF, 0x00A95Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/intro/decomp_itoi_production.asm:7 END_STACK_VARS
    case 0xC4DD2F: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/decomp_itoi_production.asm:8 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4DD30: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/decomp_itoi_production.asm:8 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC4DD30.
    case 0xC4DD32: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/decomp_itoi_production.asm:8 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4DD33: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/decomp_itoi_production.asm:8 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4DD35: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Fu : 0x00007Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/decomp_itoi_production.asm:8 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC4DD35.
    case 0xC4DD37: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/decomp_itoi_production.asm:8 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4DD38: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/decomp_itoi_production.asm:9 LOADPTR PRODUCED_ITOI_ARRANGEMENT, @LOCAL00
    case 0xC4DD3A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000DFu : 0x00AADFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/decomp_itoi_production.asm:9 LOADPTR PRODUCED_ITOI_ARRANGEMENT, @LOCAL00
    // Overlapping static entry reached from 0xC4DD3A.
    case 0xC4DD3C: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/decomp_itoi_production.asm:9 LOADPTR PRODUCED_ITOI_ARRANGEMENT, @LOCAL00
    case 0xC4DD3D: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/decomp_itoi_production.asm:9 LOADPTR PRODUCED_ITOI_ARRANGEMENT, @LOCAL00
    case 0xC4DD3F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E1u : 0x0000E1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/decomp_itoi_production.asm:9 LOADPTR PRODUCED_ITOI_ARRANGEMENT, @LOCAL00
    // Overlapping static entry reached from 0xC4DD3F.
    case 0xC4DD41: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/decomp_itoi_production.asm:9 LOADPTR PRODUCED_ITOI_ARRANGEMENT, @LOCAL00
    case 0xC4DD42: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/decomp_itoi_production.asm:10 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4DD44: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/decomp_itoi_production.asm:10 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4DD46: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/decomp_itoi_production.asm:10 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4DD48: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/decomp_itoi_production.asm:10 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4DD4A: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/decomp_itoi_production.asm:11 JSL DECOMP
    case 0xC4DD4C: {
        Instruction step(cpu, 0x22, 0xC41A9Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/decomp_itoi_production.asm:12 JSR UNKNOWN_C4DCF6
    case 0xC4DD50: {
        Instruction step(cpu, 0x20, 0x00DCF6u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/decomp_itoi_production.asm:13 COPY_TO_VRAM1P @VIRTUAL06, $7C00, $800, 0
    case 0xC4DD53: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/decomp_itoi_production.asm:13 COPY_TO_VRAM1P @VIRTUAL06, $7C00, $800, 0
    case 0xC4DD55: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/decomp_itoi_production.asm:13 COPY_TO_VRAM1P @VIRTUAL06, $7C00, $800, 0
    case 0xC4DD57: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/decomp_itoi_production.asm:13 COPY_TO_VRAM1P @VIRTUAL06, $7C00, $800, 0
    case 0xC4DD59: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/intro/decomp_itoi_production.asm:13 COPY_TO_VRAM1P @VIRTUAL06, $7C00, $800, 0
    case 0xC4DD5B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x007C00u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/intro/decomp_itoi_production.asm:13 COPY_TO_VRAM1P @VIRTUAL06, $7C00, $800, 0
    // Overlapping static entry reached from 0xC4DD5B.
    case 0xC4DD5D: {
        Instruction step(cpu, 0x7C, 0x0000A2u, 3u, AddressMode::AbsoluteIndexedIndirectX);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/intro/decomp_itoi_production.asm:13 COPY_TO_VRAM1P @VIRTUAL06, $7C00, $800, 0
    case 0xC4DD5E: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000800u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/intro/decomp_itoi_production.asm:13 COPY_TO_VRAM1P @VIRTUAL06, $7C00, $800, 0
    // Overlapping static entry reached from 0xC4DD5E.
    case 0xC4DD60: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/intro/decomp_itoi_production.asm:13 COPY_TO_VRAM1P @VIRTUAL06, $7C00, $800, 0
    case 0xC4DD61: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/intro/decomp_itoi_production.asm:13 COPY_TO_VRAM1P @VIRTUAL06, $7C00, $800, 0
    case 0xC4DD63: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x002200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/intro/decomp_itoi_production.asm:13 COPY_TO_VRAM1P @VIRTUAL06, $7C00, $800, 0
    case 0xC4DD65: {
        Instruction step(cpu, 0x22, 0xC08616u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/intro/decomp_itoi_production.asm:13 COPY_TO_VRAM1P @VIRTUAL06, $7C00, $800, 0
    // Overlapping static entry reached from 0xC4DD63.
    case 0xC4DD66: {
        Instruction step(cpu, 0x16, 0x000086u, 2u, AddressMode::DirectPageIndexedX);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/intro/decomp_itoi_production.asm:13 COPY_TO_VRAM1P @VIRTUAL06, $7C00, $800, 0
    // Overlapping static entry reached from 0xC4DD66.
    case 0xC4DD68: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000A9u : 0x0000A9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/decomp_itoi_production.asm:15 LOADPTR BUFFER + $800, @VIRTUAL06
    case 0xC4DD69: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000800u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/decomp_itoi_production.asm:15 LOADPTR BUFFER + $800, @VIRTUAL06
    // Overlapping static entry reached from 0xC4DD68.
    case 0xC4DD6A: {
        Instruction step(cpu, 0x00, 0x000008u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/decomp_itoi_production.asm:15 LOADPTR BUFFER + $800, @VIRTUAL06
    // Overlapping static entry reached from 0xC4DD69.
    case 0xC4DD6B: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/decomp_itoi_production.asm:15 LOADPTR BUFFER + $800, @VIRTUAL06
    case 0xC4DD6C: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/decomp_itoi_production.asm:15 LOADPTR BUFFER + $800, @VIRTUAL06
    case 0xC4DD6E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Fu : 0x00007Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/decomp_itoi_production.asm:15 LOADPTR BUFFER + $800, @VIRTUAL06
    // Overlapping static entry reached from 0xC4DD6E.
    case 0xC4DD70: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/decomp_itoi_production.asm:15 LOADPTR BUFFER + $800, @VIRTUAL06
    case 0xC4DD71: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/decomp_itoi_production.asm:16 LOADPTR PRODUCED_ITOI_GRAPHICS, @LOCAL00
    case 0xC4DD73: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00004Bu : 0x00AB4Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/decomp_itoi_production.asm:16 LOADPTR PRODUCED_ITOI_GRAPHICS, @LOCAL00
    // Overlapping static entry reached from 0xC4DD73.
    case 0xC4DD75: {
        Instruction step(cpu, 0xAB, 0x000000u, 1u, AddressMode::Implied);
        step.pull_data_bank();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/decomp_itoi_production.asm:16 LOADPTR PRODUCED_ITOI_GRAPHICS, @LOCAL00
    case 0xC4DD76: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/decomp_itoi_production.asm:16 LOADPTR PRODUCED_ITOI_GRAPHICS, @LOCAL00
    case 0xC4DD78: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E1u : 0x0000E1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/decomp_itoi_production.asm:16 LOADPTR PRODUCED_ITOI_GRAPHICS, @LOCAL00
    // Overlapping static entry reached from 0xC4DD78.
    case 0xC4DD7A: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/decomp_itoi_production.asm:16 LOADPTR PRODUCED_ITOI_GRAPHICS, @LOCAL00
    case 0xC4DD7B: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/decomp_itoi_production.asm:17 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4DD7D: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/decomp_itoi_production.asm:17 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4DD7F: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/decomp_itoi_production.asm:17 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4DD81: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/decomp_itoi_production.asm:17 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4DD83: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/decomp_itoi_production.asm:18 JSL DECOMP
    case 0xC4DD85: {
        Instruction step(cpu, 0x22, 0xC41A9Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/decomp_itoi_production.asm:19 COPY_TO_VRAM1P @VIRTUAL06, $6000, $400, 0
    case 0xC4DD89: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/decomp_itoi_production.asm:19 COPY_TO_VRAM1P @VIRTUAL06, $6000, $400, 0
    case 0xC4DD8B: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/decomp_itoi_production.asm:19 COPY_TO_VRAM1P @VIRTUAL06, $6000, $400, 0
    case 0xC4DD8D: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/decomp_itoi_production.asm:19 COPY_TO_VRAM1P @VIRTUAL06, $6000, $400, 0
    case 0xC4DD8F: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/intro/decomp_itoi_production.asm:19 COPY_TO_VRAM1P @VIRTUAL06, $6000, $400, 0
    case 0xC4DD91: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x006000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/intro/decomp_itoi_production.asm:19 COPY_TO_VRAM1P @VIRTUAL06, $6000, $400, 0
    // Overlapping static entry reached from 0xC4DD91.
    case 0xC4DD93: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/intro/decomp_itoi_production.asm:19 COPY_TO_VRAM1P @VIRTUAL06, $6000, $400, 0
    case 0xC4DD94: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000400u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/intro/decomp_itoi_production.asm:19 COPY_TO_VRAM1P @VIRTUAL06, $6000, $400, 0
    // Overlapping static entry reached from 0xC4DD94.
    case 0xC4DD96: {
        Instruction step(cpu, 0x04, 0x0000E2u, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/intro/decomp_itoi_production.asm:19 COPY_TO_VRAM1P @VIRTUAL06, $6000, $400, 0
    case 0xC4DD97: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/intro/decomp_itoi_production.asm:19 COPY_TO_VRAM1P @VIRTUAL06, $6000, $400, 0
    // Overlapping static entry reached from 0xC4DD96.
    case 0xC4DD98: {
        Instruction step(cpu, 0x20, 0x0000A9u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/intro/decomp_itoi_production.asm:19 COPY_TO_VRAM1P @VIRTUAL06, $6000, $400, 0
    case 0xC4DD99: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x002200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/intro/decomp_itoi_production.asm:19 COPY_TO_VRAM1P @VIRTUAL06, $6000, $400, 0
    case 0xC4DD9B: {
        Instruction step(cpu, 0x22, 0xC08616u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/intro/decomp_itoi_production.asm:19 COPY_TO_VRAM1P @VIRTUAL06, $6000, $400, 0
    // Overlapping static entry reached from 0xC4DD99.
    case 0xC4DD9C: {
        Instruction step(cpu, 0x16, 0x000086u, 2u, AddressMode::DirectPageIndexedX);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/intro/decomp_itoi_production.asm:19 COPY_TO_VRAM1P @VIRTUAL06, $6000, $400, 0
    // Overlapping static entry reached from 0xC4DD9C.
    case 0xC4DD9E: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000A9u : 0x006FA9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/decomp_itoi_production.asm:21 LOADPTR NINTENDO_ITOI_PALETTE, @LOCAL00
    case 0xC4DD9F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00006Fu : 0x00AE6Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/decomp_itoi_production.asm:21 LOADPTR NINTENDO_ITOI_PALETTE, @LOCAL00
    // Overlapping static entry reached from 0xC4DD9E.
    case 0xC4DDA0: {
        Instruction step(cpu, 0x6F, 0x0E85AEu, 4u, AddressMode::Long);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/decomp_itoi_production.asm:21 LOADPTR NINTENDO_ITOI_PALETTE, @LOCAL00
    // Overlapping static entry reached from 0xC4DD9F.
    case 0xC4DDA1: {
        Instruction step(cpu, 0xAE, 0x000E85u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/decomp_itoi_production.asm:21 LOADPTR NINTENDO_ITOI_PALETTE, @LOCAL00
    case 0xC4DDA2: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/decomp_itoi_production.asm:21 LOADPTR NINTENDO_ITOI_PALETTE, @LOCAL00
    case 0xC4DDA4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E1u : 0x0000E1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/decomp_itoi_production.asm:21 LOADPTR NINTENDO_ITOI_PALETTE, @LOCAL00
    // Overlapping static entry reached from 0xC4DDA4.
    case 0xC4DDA6: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/decomp_itoi_production.asm:21 LOADPTR NINTENDO_ITOI_PALETTE, @LOCAL00
    case 0xC4DDA7: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/intro/decomp_itoi_production.asm:22 PROMOTENEARPTR .LOWORD(PALETTES), @VIRTUAL06
    case 0xC4DDA9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/intro/decomp_itoi_production.asm:22 PROMOTENEARPTR .LOWORD(PALETTES), @VIRTUAL06
    // Overlapping static entry reached from 0xC4DDA9.
    case 0xC4DDAB: {
        Instruction step(cpu, 0x02, 0x000085u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/intro/decomp_itoi_production.asm:22 PROMOTENEARPTR .LOWORD(PALETTES), @VIRTUAL06
    case 0xC4DDAC: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:909 PHB
    // Macro caller: src/intro/decomp_itoi_production.asm:22 PROMOTENEARPTR .LOWORD(PALETTES), @VIRTUAL06
    case 0xC4DDAE: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/intro/decomp_itoi_production.asm:22 PROMOTENEARPTR .LOWORD(PALETTES), @VIRTUAL06
    case 0xC4DDAF: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:911 PLA
    // Macro caller: src/intro/decomp_itoi_production.asm:22 PROMOTENEARPTR .LOWORD(PALETTES), @VIRTUAL06
    case 0xC4DDB1: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/intro/decomp_itoi_production.asm:22 PROMOTENEARPTR .LOWORD(PALETTES), @VIRTUAL06
    case 0xC4DDB2: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/intro/decomp_itoi_production.asm:22 PROMOTENEARPTR .LOWORD(PALETTES), @VIRTUAL06
    case 0xC4DDB4: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/intro/decomp_itoi_production.asm:23 REP #PROC_FLAGS::ACCUM8
    case 0xC4DDB6: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/decomp_itoi_production.asm:24 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4DDB8: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/decomp_itoi_production.asm:24 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4DDBA: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/decomp_itoi_production.asm:24 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4DDBC: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/decomp_itoi_production.asm:24 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4DDBE: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/decomp_itoi_production.asm:25 JSL DECOMP
    case 0xC4DDC0: {
        Instruction step(cpu, 0x22, 0xC41A9Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/decomp_itoi_production.asm:26 STZ PALETTES
    case 0xC4DDC4: {
        Instruction step(cpu, 0x9C, 0x000200u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/intro/decomp_itoi_production.asm:27 LDA #24
    case 0xC4DDC7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000018u : 0x000018u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/decomp_itoi_production.asm:27 LDA #24
    // Overlapping static entry reached from 0xC4DDC7.
    case 0xC4DDC9: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/decomp_itoi_production.asm:28 JSL UNKNOWN_C0856B
    case 0xC4DDCA: {
        Instruction step(cpu, 0x22, 0xC0856Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/intro/decomp_itoi_production.asm:29 END_C_FUNCTION
    case 0xC4DDCE: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/intro/decomp_itoi_production.asm:29 END_C_FUNCTION
    case 0xC4DDCF: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
