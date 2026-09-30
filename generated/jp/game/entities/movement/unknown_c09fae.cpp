// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/unknown/C0/C09FAE.asm
bool resume_unresolved_c0_c09fae(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C09FAE.asm:3 LDX $88
    case 0xC09FA7: {
        Instruction step(cpu, 0xA6, 0x000088u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C0/C09FAE.asm:5 LDA ENTITY_ABS_X_FRACTION_TABLE,X
    case 0xC09FA9: {
        Instruction step(cpu, 0xBD, 0x000C38u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C09FAE.asm:6 CLC
    case 0xC09FAC: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C0/C09FAE.asm:7 ADC ENTITY_DELTA_X_FRACTION_TABLE,X
    case 0xC09FAD: {
        Instruction step(cpu, 0x7D, 0x000DA0u, 3u, AddressMode::AbsoluteIndexedX);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C0/C09FAE.asm:8 STA ENTITY_ABS_X_FRACTION_TABLE,X
    case 0xC09FB0: {
        Instruction step(cpu, 0x9D, 0x000C38u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C09FAE.asm:9 LDA ENTITY_ABS_X_TABLE,X
    case 0xC09FB3: {
        Instruction step(cpu, 0xBD, 0x000B84u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C09FAE.asm:10 ADC ENTITY_DELTA_X_TABLE,X
    case 0xC09FB6: {
        Instruction step(cpu, 0x7D, 0x000CECu, 3u, AddressMode::AbsoluteIndexedX);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C0/C09FAE.asm:11 STA ENTITY_ABS_X_TABLE,X
    case 0xC09FB9: {
        Instruction step(cpu, 0x9D, 0x000B84u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C09FAE.asm:12 LDA ENTITY_ABS_Y_FRACTION_TABLE,X
    case 0xC09FBC: {
        Instruction step(cpu, 0xBD, 0x000C74u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C09FAE.asm:13 CLC
    case 0xC09FBF: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C0/C09FAE.asm:14 ADC ENTITY_DELTA_Y_FRACTION_TABLE,X
    case 0xC09FC0: {
        Instruction step(cpu, 0x7D, 0x000DDCu, 3u, AddressMode::AbsoluteIndexedX);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C0/C09FAE.asm:15 STA ENTITY_ABS_Y_FRACTION_TABLE,X
    case 0xC09FC3: {
        Instruction step(cpu, 0x9D, 0x000C74u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C09FAE.asm:16 LDA ENTITY_ABS_Y_TABLE,X
    case 0xC09FC6: {
        Instruction step(cpu, 0xBD, 0x000BC0u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C09FAE.asm:17 ADC ENTITY_DELTA_Y_TABLE,X
    case 0xC09FC9: {
        Instruction step(cpu, 0x7D, 0x000D28u, 3u, AddressMode::AbsoluteIndexedX);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C0/C09FAE.asm:18 STA ENTITY_ABS_Y_TABLE,X
    case 0xC09FCC: {
        Instruction step(cpu, 0x9D, 0x000BC0u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C09FAE.asm:20 RTS
    case 0xC09FCF: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
