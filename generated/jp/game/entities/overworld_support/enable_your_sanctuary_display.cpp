// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/overworld/enable_your_sanctuary_display.asm
bool resume_overworld_enable_your_sanctuary_display(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/enable_your_sanctuary_display.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4B0E1: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/enable_your_sanctuary_display.asm:5 LDY #$6000
    case 0xC4B0E3: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x006000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/enable_your_sanctuary_display.asm:5 LDY #$6000
    // Overlapping static entry reached from 0xC4B0E3.
    case 0xC4B0E5: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    // src/overworld/enable_your_sanctuary_display.asm:6 LDX #$3800
    case 0xC4B0E6: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x003800u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/enable_your_sanctuary_display.asm:6 LDX #$3800
    // Overlapping static entry reached from 0xC4B0E6.
    case 0xC4B0E8: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/overworld/enable_your_sanctuary_display.asm:7 LDA #BG_TILEMAP_SIZE::HORIZONTAL
    case 0xC4B0E9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/enable_your_sanctuary_display.asm:7 LDA #BG_TILEMAP_SIZE::HORIZONTAL
    // Overlapping static entry reached from 0xC4B0E9.
    case 0xC4B0EB: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/enable_your_sanctuary_display.asm:8 JSL SET_BG1_VRAM_LOCATION
    case 0xC4B0EC: {
        Instruction step(cpu, 0x22, 0xC08D8Fu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/enable_your_sanctuary_display.asm:9 SEP #PROC_FLAGS::ACCUM8
    case 0xC4B0F0: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/enable_your_sanctuary_display.asm:10 LDA #$11
    case 0xC4B0F2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000011u : 0x008D11u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/enable_your_sanctuary_display.asm:11 STA TM_MIRROR
    case 0xC4B0F4: {
        Instruction step(cpu, 0x8D, 0x00001Au, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/enable_your_sanctuary_display.asm:11 STA TM_MIRROR
    // Overlapping static entry reached from 0xC4B0F2.
    case 0xC4B0F5: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/overworld/enable_your_sanctuary_display.asm:11 STA TM_MIRROR
    // Overlapping static entry reached from 0xC4B0F5.
    case 0xC4B0F6: {
        Instruction step(cpu, 0x00, 0x0000C2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/enable_your_sanctuary_display.asm:12 REP #PROC_FLAGS::ACCUM8
    case 0xC4B0F7: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/enable_your_sanctuary_display.asm:13 END_C_FUNCTION
    case 0xC4B0F9: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
