// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/overworld/initialize.asm
bool resume_overworld_initialize(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/initialize.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0004B: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/initialize.asm:6 END_STACK_VARS
    case 0xC0004D: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/initialize.asm:6 END_STACK_VARS
    case 0xC0004E: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/initialize.asm:6 END_STACK_VARS
    case 0xC0004F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EEu : 0x00FFEEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/initialize.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC0004F.
    case 0xC00051: {
        Instruction step(cpu, 0xFF, 0x00A95Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/initialize.asm:6 END_STACK_VARS
    case 0xC00052: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/initialize.asm:7 LOADPTR BUFFER, @VIRTUAL06
    case 0xC00053: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/initialize.asm:7 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC00053.
    case 0xC00055: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/initialize.asm:7 LOADPTR BUFFER, @VIRTUAL06
    case 0xC00056: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/initialize.asm:7 LOADPTR BUFFER, @VIRTUAL06
    case 0xC00058: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Fu : 0x00007Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/initialize.asm:7 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC00058.
    case 0xC0005A: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/initialize.asm:7 LOADPTR BUFFER, @VIRTUAL06
    case 0xC0005B: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/initialize.asm:8 JSL OVERWORLD_SETUP_VRAM
    case 0xC0005D: {
        Instruction step(cpu, 0x22, 0xC00013u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/initialize.asm:9 LDA #0
    case 0xC00061: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/initialize.asm:9 LDA #0
    // Overlapping static entry reached from 0xC00061.
    case 0xC00063: {
        Instruction step(cpu, 0x00, 0x000087u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/initialize.asm:10 STA [@VIRTUAL06]
    case 0xC00064: {
        Instruction step(cpu, 0x87, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/initialize.asm:11 COPY_TO_VRAM1P @VIRTUAL06, $0000, $0000, 3
    case 0xC00066: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/initialize.asm:11 COPY_TO_VRAM1P @VIRTUAL06, $0000, $0000, 3
    case 0xC00068: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/initialize.asm:11 COPY_TO_VRAM1P @VIRTUAL06, $0000, $0000, 3
    case 0xC0006A: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/initialize.asm:11 COPY_TO_VRAM1P @VIRTUAL06, $0000, $0000, 3
    case 0xC0006C: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/overworld/initialize.asm:11 COPY_TO_VRAM1P @VIRTUAL06, $0000, $0000, 3
    case 0xC0006E: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/overworld/initialize.asm:11 COPY_TO_VRAM1P @VIRTUAL06, $0000, $0000, 3
    // Overlapping static entry reached from 0xC0006E.
    case 0xC00070: {
        Instruction step(cpu, 0x00, 0x0000BBu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1155 TYX
    // Macro caller: src/overworld/initialize.asm:11 COPY_TO_VRAM1P @VIRTUAL06, $0000, $0000, 3
    case 0xC00071: {
        Instruction step(cpu, 0xBB, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_x();
        return step.finish();
    }
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/overworld/initialize.asm:11 COPY_TO_VRAM1P @VIRTUAL06, $0000, $0000, 3
    case 0xC00072: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/overworld/initialize.asm:11 COPY_TO_VRAM1P @VIRTUAL06, $0000, $0000, 3
    case 0xC00074: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000003u : 0x002203u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/overworld/initialize.asm:11 COPY_TO_VRAM1P @VIRTUAL06, $0000, $0000, 3
    case 0xC00076: {
        Instruction step(cpu, 0x22, 0xC08616u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/overworld/initialize.asm:11 COPY_TO_VRAM1P @VIRTUAL06, $0000, $0000, 3
    // Overlapping static entry reached from 0xC00074.
    case 0xC00077: {
        Instruction step(cpu, 0x16, 0x000086u, 2u, AddressMode::DirectPageIndexedX);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/overworld/initialize.asm:11 COPY_TO_VRAM1P @VIRTUAL06, $0000, $0000, 3
    // Overlapping static entry reached from 0xC00077.
    case 0xC00079: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000A9u : 0x00FFA9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/overworld/initialize.asm:13 LDA #.LOWORD(-1)
    case 0xC0007A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/initialize.asm:13 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC00079.
    case 0xC0007B: {
        Instruction step(cpu, 0xFF, 0xF68DFFu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/initialize.asm:13 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC0007A.
    case 0xC0007C: {
        Instruction step(cpu, 0xFF, 0x46F68Du, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/initialize.asm:14 STA LOADED_MAP_PALETTE
    case 0xC0007D: {
        Instruction step(cpu, 0x8D, 0x0046F6u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/initialize.asm:14 STA LOADED_MAP_PALETTE
    // Overlapping static entry reached from 0xC0007B.
    case 0xC0007F: {
        Instruction step(cpu, 0x46, 0x00008Du, 2u, AddressMode::DirectPage);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/initialize.asm:15 STA LOADED_MAP_TILE_COMBO
    case 0xC00080: {
        Instruction step(cpu, 0x8D, 0x0046F4u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/initialize.asm:15 STA LOADED_MAP_TILE_COMBO
    // Overlapping static entry reached from 0xC0007F.
    case 0xC00081: {
        Instruction step(cpu, 0xF4, 0x002B46u, 3u, AddressMode::Immediate);
        step.push_effective_absolute();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/initialize.asm:16 END_C_FUNCTION
    case 0xC00083: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/initialize.asm:16 END_C_FUNCTION
    case 0xC00084: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
