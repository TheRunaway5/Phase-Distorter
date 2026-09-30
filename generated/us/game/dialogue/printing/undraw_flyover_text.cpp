// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/text/undraw_flyover_text.asm
bool resume_text_undraw_flyover_text(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/text/undraw_flyover_text.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC4800B: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/undraw_flyover_text.asm:9 LDY #$6000
    case 0xC4800D: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x006000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/undraw_flyover_text.asm:9 LDY #$6000
    // Overlapping static entry reached from 0xC4800D.
    case 0xC4800F: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    // src/text/undraw_flyover_text.asm:10 LDX #$7C00
    case 0xC48010: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x007C00u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/undraw_flyover_text.asm:10 LDX #$7C00
    // Overlapping static entry reached from 0xC48010.
    case 0xC48012: {
        Instruction step(cpu, 0x7C, 0x0000A9u, 3u, AddressMode::AbsoluteIndexedIndirectX);
        step.jump();
        return step.finish();
    }
    // src/text/undraw_flyover_text.asm:11 LDA #BG_TILEMAP_SIZE::NORMAL
    case 0xC48013: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/undraw_flyover_text.asm:11 LDA #BG_TILEMAP_SIZE::NORMAL
    // Overlapping static entry reached from 0xC48013.
    case 0xC48015: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/undraw_flyover_text.asm:12 JSL SET_BG3_VRAM_LOCATION
    case 0xC48016: {
        Instruction step(cpu, 0x22, 0xC08E1Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/undraw_flyover_text.asm:13 JSL UNKNOWN_C2038B
    case 0xC4801A: {
        Instruction step(cpu, 0x22, 0xC2038Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/undraw_flyover_text.asm:14 JSL LOAD_WINDOW_GFX
    case 0xC4801E: {
        Instruction step(cpu, 0x22, 0xC47C3Fu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/undraw_flyover_text.asm:18 LDA #$0002
    case 0xC48022: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/undraw_flyover_text.asm:18 LDA #$0002
    // Overlapping static entry reached from 0xC48022.
    case 0xC48024: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/undraw_flyover_text.asm:19 JSL UNKNOWN_C44963
    case 0xC48025: {
        Instruction step(cpu, 0x22, 0xC44963u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/undraw_flyover_text.asm:21 JSL UNKNOWN_C47F87
    case 0xC48029: {
        Instruction step(cpu, 0x22, 0xC47F87u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/undraw_flyover_text.asm:22 SEP #PROC_FLAGS::ACCUM8
    case 0xC4802D: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/undraw_flyover_text.asm:23 LDA #PALETTE_UPLOAD::FULL
    case 0xC4802F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000018u : 0x008D18u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/undraw_flyover_text.asm:24 STA PALETTE_UPLOAD_MODE
    case 0xC48031: {
        Instruction step(cpu, 0x8D, 0x000030u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/undraw_flyover_text.asm:24 STA PALETTE_UPLOAD_MODE
    // Overlapping static entry reached from 0xC4802F.
    case 0xC48032: {
        Instruction step(cpu, 0x30, 0x000000u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/text/undraw_flyover_text.asm:25 REP #PROC_FLAGS::ACCUM8
    case 0xC48034: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/undraw_flyover_text.asm:29 RTL
    case 0xC48036: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
