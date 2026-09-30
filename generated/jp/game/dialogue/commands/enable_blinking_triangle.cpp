// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/text/ccs/enable_blinking_triangle.asm
bool resume_text_ccs_enable_blinking_triangle(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/text/ccs/enable_blinking_triangle.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC16C76: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/enable_blinking_triangle.asm:4 TXA
    case 0xC16C78: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/enable_blinking_triangle.asm:5 JSR ENABLE_BLINKING_TRIANGLE
    case 0xC16C79: {
        Instruction step(cpu, 0x20, 0x000032u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/enable_blinking_triangle.asm:6 LDA #NULL
    case 0xC16C7C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/enable_blinking_triangle.asm:6 LDA #NULL
    // Overlapping static entry reached from 0xC16C7C.
    case 0xC16C7E: {
        Instruction step(cpu, 0x00, 0x000060u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/enable_blinking_triangle.asm:7 RTS
    case 0xC16C7F: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
