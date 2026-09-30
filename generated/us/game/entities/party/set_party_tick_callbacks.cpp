// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/overworld/set_party_tick_callbacks.asm
bool resume_overworld_set_party_tick_callbacks(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/set_party_tick_callbacks.asm:3 ASL
    case 0xC42F45: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/set_party_tick_callbacks.asm:4 TAX
    case 0xC42F46: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/set_party_tick_callbacks.asm:5 LDA $0E
    case 0xC42F47: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/set_party_tick_callbacks.asm:6 STA ENTITY_TICK_CALLBACK_LOW,X
    case 0xC42F49: {
        Instruction step(cpu, 0x9D, 0x00107Au, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/set_party_tick_callbacks.asm:7 LDA $10
    case 0xC42F4C: {
        Instruction step(cpu, 0xA5, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/set_party_tick_callbacks.asm:8 STA ENTITY_TICK_CALLBACK_HIGH,X
    case 0xC42F4E: {
        Instruction step(cpu, 0x9D, 0x0010B6u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/set_party_tick_callbacks.asm:9 LDY #$0006
    case 0xC42F51: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/set_party_tick_callbacks.asm:9 LDY #$0006
    // Overlapping static entry reached from 0xC42F51.
    case 0xC42F53: {
        Instruction step(cpu, 0x00, 0x0000E8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/set_party_tick_callbacks.asm:11 INX
    case 0xC42F54: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/overworld/set_party_tick_callbacks.asm:12 INX
    case 0xC42F55: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/overworld/set_party_tick_callbacks.asm:13 LDA $12
    case 0xC42F56: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/set_party_tick_callbacks.asm:14 STA ENTITY_TICK_CALLBACK_LOW,X
    case 0xC42F58: {
        Instruction step(cpu, 0x9D, 0x00107Au, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/set_party_tick_callbacks.asm:15 LDA $14
    case 0xC42F5B: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/set_party_tick_callbacks.asm:16 STA ENTITY_TICK_CALLBACK_HIGH,X
    case 0xC42F5D: {
        Instruction step(cpu, 0x9D, 0x0010B6u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/set_party_tick_callbacks.asm:17 DEY
    case 0xC42F60: {
        Instruction step(cpu, 0x88, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_y();
        return step.finish();
    }
    // src/overworld/set_party_tick_callbacks.asm:18 BNE @UNKNOWN0
    case 0xC42F61: {
        Instruction step(cpu, 0xD0, 0x0000F1u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/set_party_tick_callbacks.asm:19 RTL
    case 0xC42F63: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
