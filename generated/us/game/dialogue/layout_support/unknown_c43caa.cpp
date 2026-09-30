// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/unknown/C4/C43CAA.asm
bool resume_unresolved_c4_c43caa(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C43CAA.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC43CAA: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/unknown/C4/C43CAA.asm:5 LDA VWF_TILE
    case 0xC43CAC: {
        Instruction step(cpu, 0xAD, 0x009E25u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C43CAA.asm:6 INC
    case 0xC43CAF: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/unknown/C4/C43CAA.asm:7 STA VWF_TILE
    case 0xC43CB0: {
        Instruction step(cpu, 0x8D, 0x009E25u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C43CAA.asm:8 CMP #$0033
    case 0xC43CB3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000033u : 0x000033u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C43CAA.asm:8 CMP #$0033
    // Overlapping static entry reached from 0xC43CB3.
    case 0xC43CB5: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C4/C43CAA.asm:9 BLTEQ @UNKNOWN0
    case 0xC43CB6: {
        Instruction step(cpu, 0x90, 0x00000Au, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C4/C43CAA.asm:9 BLTEQ @UNKNOWN0
    case 0xC43CB8: {
        Instruction step(cpu, 0xF0, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/unknown/C4/C43CAA.asm:10 STZ VWF_TILE
    case 0xC43CBA: {
        Instruction step(cpu, 0x9C, 0x009E25u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/unknown/C4/C43CAA.asm:11 STZ VWF_X
    case 0xC43CBD: {
        Instruction step(cpu, 0x9C, 0x009E23u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/unknown/C4/C43CAA.asm:12 BRA @UNKNOWN1
    case 0xC43CC0: {
        Instruction step(cpu, 0x80, 0x000006u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/unknown/C4/C43CAA.asm:14 ASL
    case 0xC43CC2: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C4/C43CAA.asm:15 ASL
    case 0xC43CC3: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C4/C43CAA.asm:16 ASL
    case 0xC43CC4: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C4/C43CAA.asm:17 STA VWF_X
    case 0xC43CC5: {
        Instruction step(cpu, 0x8D, 0x009E23u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C43CAA.asm:19 STZ TEXT_RENDER_STATE + 2
    case 0xC43CC8: {
        Instruction step(cpu, 0x9C, 0x009654u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/unknown/C4/C43CAA.asm:20 LDA VWF_X
    case 0xC43CCB: {
        Instruction step(cpu, 0xAD, 0x009E23u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C43CAA.asm:21 STA TEXT_RENDER_STATE
    case 0xC43CCE: {
        Instruction step(cpu, 0x8D, 0x009652u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C43CAA.asm:22 END_C_FUNCTION
    case 0xC43CD1: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
