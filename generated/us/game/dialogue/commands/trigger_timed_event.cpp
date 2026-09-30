// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/text/ccs/trigger_timed_event.asm
bool resume_text_ccs_trigger_timed_event(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/text/ccs/trigger_timed_event.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC17440: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/trigger_timed_event.asm:4 TXA
    case 0xC17442: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/trigger_timed_event.asm:5 JSL GET_DELIVERY_SPRITE_AND_PLACEHOLDER
    case 0xC17443: {
        Instruction step(cpu, 0x22, 0xEF0EADu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/trigger_timed_event.asm:6 LDA #NULL
    case 0xC17447: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/trigger_timed_event.asm:6 LDA #NULL
    // Overlapping static entry reached from 0xC17447.
    case 0xC17449: {
        Instruction step(cpu, 0x00, 0x000060u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/trigger_timed_event.asm:7 RTS
    case 0xC1744A: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
