// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/unknown/C0/C0A023.asm
bool resume_unresolved_c0_c0a023(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0A023.asm:3 LDX $88
    case 0xC0A023: {
        Instruction step(cpu, 0xA6, 0x000088u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C0/C0A023.asm:4 LDA ENTITY_ABS_X_TABLE,X
    case 0xC0A025: {
        Instruction step(cpu, 0xBD, 0x000B8Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0A023.asm:5 SEC
    case 0xC0A028: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/unknown/C0/C0A023.asm:6 SBC BG1_X_POS
    case 0xC0A029: {
        Instruction step(cpu, 0xED, 0x000031u, 3u, AddressMode::Absolute);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/unknown/C0/C0A023.asm:7 STA ENTITY_SCREEN_X_TABLE,X
    case 0xC0A02C: {
        Instruction step(cpu, 0x9D, 0x000B16u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0A023.asm:8 LDA ENTITY_ABS_Y_TABLE,X
    case 0xC0A02F: {
        Instruction step(cpu, 0xBD, 0x000BCAu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0A023.asm:9 SEC
    case 0xC0A032: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/unknown/C0/C0A023.asm:10 SBC BG1_Y_POS
    case 0xC0A033: {
        Instruction step(cpu, 0xED, 0x000033u, 3u, AddressMode::Absolute);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/unknown/C0/C0A023.asm:11 STA ENTITY_SCREEN_Y_TABLE,X
    case 0xC0A036: {
        Instruction step(cpu, 0x9D, 0x000B52u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0A023.asm:13 RTS
    case 0xC0A039: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
