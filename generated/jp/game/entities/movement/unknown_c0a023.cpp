// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/unknown/C0/C0A023.asm
bool resume_unresolved_c0_c0a023(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0A023.asm:3 LDX $88
    case 0xC0A002: {
        Instruction step(cpu, 0xA6, 0x000088u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C0/C0A023.asm:4 LDA ENTITY_ABS_X_TABLE,X
    case 0xC0A004: {
        Instruction step(cpu, 0xBD, 0x000B84u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0A023.asm:5 SEC
    case 0xC0A007: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/unknown/C0/C0A023.asm:6 SBC BG1_X_POS
    case 0xC0A008: {
        Instruction step(cpu, 0xED, 0x000031u, 3u, AddressMode::Absolute);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/unknown/C0/C0A023.asm:7 STA ENTITY_SCREEN_X_TABLE,X
    case 0xC0A00B: {
        Instruction step(cpu, 0x9D, 0x000B0Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0A023.asm:8 LDA ENTITY_ABS_Y_TABLE,X
    case 0xC0A00E: {
        Instruction step(cpu, 0xBD, 0x000BC0u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0A023.asm:9 SEC
    case 0xC0A011: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/unknown/C0/C0A023.asm:10 SBC BG1_Y_POS
    case 0xC0A012: {
        Instruction step(cpu, 0xED, 0x000033u, 3u, AddressMode::Absolute);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/unknown/C0/C0A023.asm:11 STA ENTITY_SCREEN_Y_TABLE,X
    case 0xC0A015: {
        Instruction step(cpu, 0x9D, 0x000B48u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0A023.asm:13 RTS
    case 0xC0A018: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
