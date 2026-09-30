// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/unknown/C0/C09C02.asm
bool resume_unresolved_c0_c09c02(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C09C02.asm:3 LDA LAST_ALLOCATED_SCRIPT
    case 0xC09C02: {
        Instruction step(cpu, 0xAD, 0x000A54u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C09C02.asm:4 BMI @UNKNOWN2
    case 0xC09C05: {
        Instruction step(cpu, 0x30, 0x000019u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/unknown/C0/C09C02.asm:5 LDY #.LOWORD(-1)
    case 0xC09C07: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C0/C09C02.asm:5 LDY #.LOWORD(-1)
    // Overlapping static entry reached from 0xC09C07.
    case 0xC09C09: {
        Instruction step(cpu, 0xFF, 0x0A52ADu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/unknown/C0/C09C02.asm:6 LDA LAST_ENTITY
    case 0xC09C0A: {
        Instruction step(cpu, 0xAD, 0x000A52u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C09C02.asm:7 BMI @UNKNOWN2
    case 0xC09C0D: {
        Instruction step(cpu, 0x30, 0x000011u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/unknown/C0/C09C02.asm:9 TAX
    case 0xC09C0F: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C0/C09C02.asm:10 CPX ENTITY_ALLOCATION_MIN_SLOT
    case 0xC09C10: {
        Instruction step(cpu, 0xEC, 0x000A4Cu, 3u, AddressMode::Absolute);
        step.compare_x();
        return step.finish();
    }
    // src/unknown/C0/C09C02.asm:11 BCC @UNKNOWN1
    case 0xC09C13: {
        Instruction step(cpu, 0x90, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/unknown/C0/C09C02.asm:12 CPX ENTITY_ALLOCATION_MAX_SLOT
    case 0xC09C15: {
        Instruction step(cpu, 0xEC, 0x000A4Eu, 3u, AddressMode::Absolute);
        step.compare_x();
        return step.finish();
    }
    // src/unknown/C0/C09C02.asm:13 BCC @UNKNOWN3
    case 0xC09C18: {
        Instruction step(cpu, 0x90, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/unknown/C0/C09C02.asm:15 TXY
    case 0xC09C1A: {
        Instruction step(cpu, 0x9B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_y();
        return step.finish();
    }
    // src/unknown/C0/C09C02.asm:16 LDA ENTITY_NEXT_ENTITY_TABLE,X
    case 0xC09C1B: {
        Instruction step(cpu, 0xBD, 0x000A9Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C09C02.asm:17 BPL @UNKNOWN0
    case 0xC09C1E: {
        Instruction step(cpu, 0x10, 0x0000EFu, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // src/unknown/C0/C09C02.asm:19 SEC
    case 0xC09C20: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/unknown/C0/C09C02.asm:20 RTS
    case 0xC09C21: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    // src/unknown/C0/C09C02.asm:22 TYA
    case 0xC09C22: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C09C02.asm:23 BPL @UNKNOWN4
    case 0xC09C23: {
        Instruction step(cpu, 0x10, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // src/unknown/C0/C09C02.asm:24 LDA ENTITY_NEXT_ENTITY_TABLE,X
    case 0xC09C25: {
        Instruction step(cpu, 0xBD, 0x000A9Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C09C02.asm:25 STA LAST_ENTITY
    case 0xC09C28: {
        Instruction step(cpu, 0x8D, 0x000A52u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C09C02.asm:26 CLC
    case 0xC09C2B: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C0/C09C02.asm:27 RTS
    case 0xC09C2C: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    // src/unknown/C0/C09C02.asm:29 LDA ENTITY_NEXT_ENTITY_TABLE,X
    case 0xC09C2D: {
        Instruction step(cpu, 0xBD, 0x000A9Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C09C02.asm:30 STA ENTITY_NEXT_ENTITY_TABLE,Y
    case 0xC09C30: {
        Instruction step(cpu, 0x99, 0x000A9Eu, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C09C02.asm:31 CLC
    case 0xC09C33: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C0/C09C02.asm:32 RTS
    case 0xC09C34: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
