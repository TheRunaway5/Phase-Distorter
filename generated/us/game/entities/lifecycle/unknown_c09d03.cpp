// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/unknown/C0/C09D03.asm
bool resume_unresolved_c0_c09d03(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C09D03.asm:3 LDY LAST_ALLOCATED_SCRIPT
    case 0xC09D03: {
        Instruction step(cpu, 0xAC, 0x000A54u, 3u, AddressMode::Absolute);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C0/C09D03.asm:4 BPL @UNKNOWN0
    case 0xC09D06: {
        Instruction step(cpu, 0x10, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // src/unknown/C0/C09D03.asm:5 SEC
    case 0xC09D08: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/unknown/C0/C09D03.asm:6 RTS
    case 0xC09D09: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    // src/unknown/C0/C09D03.asm:8 LDA ENTITY_SCRIPT_NEXT_SCRIPTS,Y
    case 0xC09D0A: {
        Instruction step(cpu, 0xB9, 0x00125Au, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C09D03.asm:9 STA LAST_ALLOCATED_SCRIPT
    case 0xC09D0D: {
        Instruction step(cpu, 0x8D, 0x000A54u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C09D03.asm:10 CLC
    case 0xC09D10: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C0/C09D03.asm:11 RTS
    case 0xC09D11: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
