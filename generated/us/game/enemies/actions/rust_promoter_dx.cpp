// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/battle/actions/rust_promoter_dx.asm
bool resume_battle_actions_rust_promoter_dx(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/rust_promoter_dx.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2AA76: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/actions/rust_promoter_dx.asm:5 LDA #400
    case 0xC2AA78: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000090u : 0x000190u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/rust_promoter_dx.asm:5 LDA #400
    // Overlapping static entry reached from 0xC2AA78.
    case 0xC2AA7A: {
        Instruction step(cpu, 0x01, 0x000020u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/actions/rust_promoter_dx.asm:6 JSR RUST_SPRAY_COMMON
    case 0xC2AA7B: {
        Instruction step(cpu, 0x20, 0x00AA1Eu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/rust_promoter_dx.asm:6 JSR RUST_SPRAY_COMMON
    // Overlapping static entry reached from 0xC2AA7A.
    case 0xC2AA7C: {
        Instruction step(cpu, 0x1E, 0x006BAAu, 3u, AddressMode::AbsoluteIndexedX);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/rust_promoter_dx.asm:7 END_C_FUNCTION
    case 0xC2AA7E: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
