// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/unknown/C0/C094D0.asm
bool resume_unresolved_c0_c094d0(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C094D0.asm:3 BIT ENTITY_TICK_CALLBACK_HIGH,X
    case 0xC094AF: {
        Instruction step(cpu, 0x3C, 0x0010ACu, 3u, AddressMode::AbsoluteIndexedX);
        step.test_bits();
        return step.finish();
    }
    // src/unknown/C0/C094D0.asm:4 BVS @UNKNOWN1
    case 0xC094B2: {
        Instruction step(cpu, 0x70, 0x00001Eu, 2u, AddressMode::Relative8);
        step.branch_if_overflow_set();
        return step.finish();
    }
    // src/unknown/C0/C094D0.asm:5 LDY ENTITY_SCRIPT_INDEX_TABLE,X
    case 0xC094B4: {
        Instruction step(cpu, 0xBC, 0x000AD0u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C0/C094D0.asm:7 STY $8A
    case 0xC094B7: {
        Instruction step(cpu, 0x84, 0x00008Au, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/unknown/C0/C094D0.asm:8 STY CURRENT_SCRIPT_OFFSET
    case 0xC094B9: {
        Instruction step(cpu, 0x8C, 0x001A3Eu, 3u, AddressMode::Absolute);
        step.store_y();
        return step.finish();
    }
    // src/unknown/C0/C094D0.asm:9 STY CURRENT_SCRIPT_SLOT
    case 0xC094BC: {
        Instruction step(cpu, 0x8C, 0x001A3Cu, 3u, AddressMode::Absolute);
        step.store_y();
        return step.finish();
    }
    // src/unknown/C0/C094D0.asm:10 LSR CURRENT_SCRIPT_SLOT
    case 0xC094BF: {
        Instruction step(cpu, 0x4E, 0x001A3Cu, 3u, AddressMode::Absolute);
        step.shift_right();
        return step.finish();
    }
    // src/unknown/C0/C094D0.asm:11 LDA ENTITY_SCRIPT_NEXT_SCRIPTS,Y
    case 0xC094C2: {
        Instruction step(cpu, 0xB9, 0x001250u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C094D0.asm:12 STA ACTIONSCRIPT_CURRENT_SCRIPT
    case 0xC094C5: {
        Instruction step(cpu, 0x8D, 0x000A4Eu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C094D0.asm:13 JSR UNKNOWN_C09506
    case 0xC094C8: {
        Instruction step(cpu, 0x20, 0x0094E5u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/unknown/C0/C094D0.asm:14 LDY ACTIONSCRIPT_CURRENT_SCRIPT
    case 0xC094CB: {
        Instruction step(cpu, 0xAC, 0x000A4Eu, 3u, AddressMode::Absolute);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C0/C094D0.asm:15 BPL @UNKNOWN0
    case 0xC094CE: {
        Instruction step(cpu, 0x10, 0x0000E7u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // src/unknown/C0/C094D0.asm:16 LDX $88
    case 0xC094D0: {
        Instruction step(cpu, 0xA6, 0x000088u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C0/C094D0.asm:18 LDA ENTITY_TICK_CALLBACK_HIGH,X
    case 0xC094D2: {
        Instruction step(cpu, 0xBD, 0x0010ACu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C094D0.asm:19 BMI @UNKNOWN2
    case 0xC094D5: {
        Instruction step(cpu, 0x30, 0x00000Du, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/unknown/C0/C094D0.asm:20 STA CURRENT_ENTITY_TICK_CALLBACK+2
    case 0xC094D7: {
        Instruction step(cpu, 0x8D, 0x000A52u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C094D0.asm:21 LDA ENTITY_TICK_CALLBACK_LOW,X
    case 0xC094DA: {
        Instruction step(cpu, 0xBD, 0x001070u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C094D0.asm:22 STA CURRENT_ENTITY_TICK_CALLBACK
    case 0xC094DD: {
        Instruction step(cpu, 0x8D, 0x000A50u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C094D0.asm:23 JSL JUMP_TO_LOADED_MOVEMENT_PTR
    case 0xC094E0: {
        Instruction step(cpu, 0x22, 0xC09D7Du, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C0/C094D0.asm:25 RTS
    case 0xC094E4: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
