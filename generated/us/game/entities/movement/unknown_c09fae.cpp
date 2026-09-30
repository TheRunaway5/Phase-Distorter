// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/unknown/C0/C09FAE.asm
bool resume_unresolved_c0_c09fae(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C09FAE.asm:3 LDX $88
    case 0xC09FC8: {
        Instruction step(cpu, 0xA6, 0x000088u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C0/C09FAE.asm:5 LDA ENTITY_ABS_X_FRACTION_TABLE,X
    case 0xC09FCA: {
        Instruction step(cpu, 0xBD, 0x000C42u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C09FAE.asm:6 CLC
    case 0xC09FCD: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C0/C09FAE.asm:7 ADC ENTITY_DELTA_X_FRACTION_TABLE,X
    case 0xC09FCE: {
        Instruction step(cpu, 0x7D, 0x000DAAu, 3u, AddressMode::AbsoluteIndexedX);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C0/C09FAE.asm:8 STA ENTITY_ABS_X_FRACTION_TABLE,X
    case 0xC09FD1: {
        Instruction step(cpu, 0x9D, 0x000C42u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C09FAE.asm:9 LDA ENTITY_ABS_X_TABLE,X
    case 0xC09FD4: {
        Instruction step(cpu, 0xBD, 0x000B8Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C09FAE.asm:10 ADC ENTITY_DELTA_X_TABLE,X
    case 0xC09FD7: {
        Instruction step(cpu, 0x7D, 0x000CF6u, 3u, AddressMode::AbsoluteIndexedX);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C0/C09FAE.asm:11 STA ENTITY_ABS_X_TABLE,X
    case 0xC09FDA: {
        Instruction step(cpu, 0x9D, 0x000B8Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C09FAE.asm:12 LDA ENTITY_ABS_Y_FRACTION_TABLE,X
    case 0xC09FDD: {
        Instruction step(cpu, 0xBD, 0x000C7Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C09FAE.asm:13 CLC
    case 0xC09FE0: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C0/C09FAE.asm:14 ADC ENTITY_DELTA_Y_FRACTION_TABLE,X
    case 0xC09FE1: {
        Instruction step(cpu, 0x7D, 0x000DE6u, 3u, AddressMode::AbsoluteIndexedX);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C0/C09FAE.asm:15 STA ENTITY_ABS_Y_FRACTION_TABLE,X
    case 0xC09FE4: {
        Instruction step(cpu, 0x9D, 0x000C7Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C09FAE.asm:16 LDA ENTITY_ABS_Y_TABLE,X
    case 0xC09FE7: {
        Instruction step(cpu, 0xBD, 0x000BCAu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C09FAE.asm:17 ADC ENTITY_DELTA_Y_TABLE,X
    case 0xC09FEA: {
        Instruction step(cpu, 0x7D, 0x000D32u, 3u, AddressMode::AbsoluteIndexedX);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C0/C09FAE.asm:18 STA ENTITY_ABS_Y_TABLE,X
    case 0xC09FED: {
        Instruction step(cpu, 0x9D, 0x000BCAu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C09FAE.asm:20 RTS
    case 0xC09FF0: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
