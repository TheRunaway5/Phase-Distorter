// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/overworld/setup_vram.asm
bool resume_overworld_setup_vram(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/setup_vram.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC00013: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/setup_vram.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Overlapping static entry reached from 0xC00011.
    case 0xC00014: {
        Instruction step(cpu, 0x31, 0x0000A9u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/setup_vram.asm:5 LDA #$0009
    case 0xC00015: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000009u : 0x000009u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/setup_vram.asm:5 LDA #$0009
    // Overlapping static entry reached from 0xC00014.
    case 0xC00016: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x09, narrow ? 0x000000u : 0x002200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/setup_vram.asm:5 LDA #$0009
    // Overlapping static entry reached from 0xC00015.
    case 0xC00017: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/setup_vram.asm:6 JSL UNKNOWN_C08D79
    case 0xC00018: {
        Instruction step(cpu, 0x22, 0xC08D6Au, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/setup_vram.asm:6 JSL UNKNOWN_C08D79
    // Overlapping static entry reached from 0xC00016.
    case 0xC00019: {
        Instruction step(cpu, 0x6A, 0x000000u, 1u, AddressMode::Accumulator);
        step.rotate_right();
        return step.finish();
    }
    // src/overworld/setup_vram.asm:6 JSL UNKNOWN_C08D79
    // Overlapping static entry reached from 0xC00019.
    case 0xC0001A: {
        Instruction step(cpu, 0x8D, 0x00A0C0u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/setup_vram.asm:7 LDY #$0000
    case 0xC0001C: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/setup_vram.asm:7 LDY #$0000
    // Overlapping static entry reached from 0xC0001A.
    case 0xC0001D: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/setup_vram.asm:7 LDY #$0000
    // Overlapping static entry reached from 0xC0001C.
    case 0xC0001E: {
        Instruction step(cpu, 0x00, 0x0000A2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/setup_vram.asm:8 LDX #$3800
    case 0xC0001F: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x003800u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/setup_vram.asm:8 LDX #$3800
    // Overlapping static entry reached from 0xC0001F.
    case 0xC00021: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/overworld/setup_vram.asm:9 LDA #BG_TILEMAP_SIZE::HORIZONTAL
    case 0xC00022: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/setup_vram.asm:9 LDA #BG_TILEMAP_SIZE::HORIZONTAL
    // Overlapping static entry reached from 0xC00022.
    case 0xC00024: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/setup_vram.asm:10 JSL SET_BG1_VRAM_LOCATION
    case 0xC00025: {
        Instruction step(cpu, 0x22, 0xC08D8Fu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/setup_vram.asm:11 LDY #$2000
    case 0xC00029: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x002000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/setup_vram.asm:11 LDY #$2000
    // Overlapping static entry reached from 0xC00029.
    case 0xC0002B: {
        Instruction step(cpu, 0x20, 0x0000A2u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/setup_vram.asm:12 LDX #$5800
    case 0xC0002C: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x005800u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/setup_vram.asm:12 LDX #$5800
    // Overlapping static entry reached from 0xC0002C.
    case 0xC0002E: {
        Instruction step(cpu, 0x58, 0x000000u, 1u, AddressMode::Implied);
        step.enable_interrupts();
        return step.finish();
    }
    // src/overworld/setup_vram.asm:13 LDA #BG_TILEMAP_SIZE::HORIZONTAL
    case 0xC0002F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/setup_vram.asm:13 LDA #BG_TILEMAP_SIZE::HORIZONTAL
    // Overlapping static entry reached from 0xC0002F.
    case 0xC00031: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/setup_vram.asm:14 JSL SET_BG2_VRAM_LOCATION
    case 0xC00032: {
        Instruction step(cpu, 0x22, 0xC08DCFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/setup_vram.asm:15 LDY #$6000
    case 0xC00036: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x006000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/setup_vram.asm:15 LDY #$6000
    // Overlapping static entry reached from 0xC00036.
    case 0xC00038: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    // src/overworld/setup_vram.asm:16 LDX #$7C00
    case 0xC00039: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x007C00u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/setup_vram.asm:16 LDX #$7C00
    // Overlapping static entry reached from 0xC00039.
    case 0xC0003B: {
        Instruction step(cpu, 0x7C, 0x0000A9u, 3u, AddressMode::AbsoluteIndexedIndirectX);
        step.jump();
        return step.finish();
    }
    // src/overworld/setup_vram.asm:17 LDA #BG_TILEMAP_SIZE::NORMAL
    case 0xC0003C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/setup_vram.asm:17 LDA #BG_TILEMAP_SIZE::NORMAL
    // Overlapping static entry reached from 0xC0003C.
    case 0xC0003E: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/setup_vram.asm:18 JSL SET_BG3_VRAM_LOCATION
    case 0xC0003F: {
        Instruction step(cpu, 0x22, 0xC08E0Du, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/setup_vram.asm:19 LDA #$0062
    case 0xC00043: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000062u : 0x000062u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/setup_vram.asm:19 LDA #$0062
    // Overlapping static entry reached from 0xC00043.
    case 0xC00045: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/setup_vram.asm:20 JSL SET_OAM_SIZE
    case 0xC00046: {
        Instruction step(cpu, 0x22, 0xC08D83u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/setup_vram.asm:21 RTL
    case 0xC0004A: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
