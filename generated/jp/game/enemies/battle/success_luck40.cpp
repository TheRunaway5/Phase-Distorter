// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/battle/success_luck40.asm
bool resume_battle_success_luck40(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/success_luck40.asm:3 BEGIN_C_FUNCTION
    case 0xC28CD8: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/success_luck40.asm:6 LDA #40
    case 0xC28CDA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000028u : 0x000028u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/success_luck40.asm:6 LDA #40
    // Overlapping static entry reached from 0xC28CDA.
    case 0xC28CDC: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/success_luck40.asm:7 JSR RAND_LIMIT
    case 0xC28CDD: {
        Instruction step(cpu, 0x20, 0x00696Cu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/success_luck40.asm:8 LDX CURRENT_TARGET
    case 0xC28CE0: {
        Instruction step(cpu, 0xAE, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/success_luck40.asm:9 CMP a:battler::luck,X
    case 0xC28CE3: {
        Instruction step(cpu, 0xDD, 0x00002Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/success_luck40.asm:10 BCS @SUCCESS
    case 0xC28CE6: {
        Instruction step(cpu, 0xB0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/battle/success_luck40.asm:11 LDA #0
    case 0xC28CE8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/success_luck40.asm:11 LDA #0
    // Overlapping static entry reached from 0xC28CE8.
    case 0xC28CEA: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/success_luck40.asm:12 BRA @RETURN
    case 0xC28CEB: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/success_luck40.asm:14 LDA #1
    case 0xC28CED: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/success_luck40.asm:14 LDA #1
    // Overlapping static entry reached from 0xC28CED.
    case 0xC28CEF: {
        Instruction step(cpu, 0x00, 0x000060u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/success_luck40.asm:16 END_C_FUNCTION
    case 0xC28CF0: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
