// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/unknown/C0/C09506.asm
bool resume_unresolved_c0_c09506(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C09506.asm:3 LDX $8A
    case 0xC09506: {
        Instruction step(cpu, 0xA6, 0x00008Au, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C0/C09506.asm:4 LDA ENTITY_SCRIPT_SLEEP_FRAMES,X
    case 0xC09508: {
        Instruction step(cpu, 0xBD, 0x001372u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C09506.asm:5 BNE @RETURN
    case 0xC0950B: {
        Instruction step(cpu, 0xD0, 0x000047u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/unknown/C0/C09506.asm:6 LDY ENTITY_SCRIPT_PROGRAM_COUNTERS,X
    case 0xC0950D: {
        Instruction step(cpu, 0xBC, 0x0013FEu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C0/C09506.asm:7 LDA ENTITY_SCRIPT_PROGRAM_COUNTER_BANKS,X
    case 0xC09510: {
        Instruction step(cpu, 0xBD, 0x00148Au, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C09506.asm:8 STA $82
    case 0xC09513: {
        Instruction step(cpu, 0x85, 0x000082u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C09506.asm:9 TXA
    case 0xC09515: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C09506.asm:10 ASL
    case 0xC09516: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C0/C09506.asm:11 ASL
    case 0xC09517: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C0/C09506.asm:12 ASL
    case 0xC09518: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C0/C09506.asm:13 ADC #.LOWORD(ENTITY_SCRIPT_STACKS)
    case 0xC09519: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000A2u : 0x0015A2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C0/C09506.asm:13 ADC #.LOWORD(ENTITY_SCRIPT_STACKS)
    // Overlapping static entry reached from 0xC09519.
    case 0xC0951B: {
        Instruction step(cpu, 0x15, 0x000085u, 2u, AddressMode::DirectPageIndexedX);
        step.or_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C09506.asm:14 STA $84
    case 0xC0951C: {
        Instruction step(cpu, 0x85, 0x000084u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C09506.asm:14 STA $84
    // Overlapping static entry reached from 0xC0951B.
    case 0xC0951D: {
        Instruction step(cpu, 0x84, 0x0000B7u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/unknown/C0/C09506.asm:16 LDA [$80],Y
    case 0xC0951E: {
        Instruction step(cpu, 0xB7, 0x000080u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C09506.asm:16 LDA [$80],Y
    // Overlapping static entry reached from 0xC0951D.
    case 0xC0951F: {
        Instruction step(cpu, 0x80, 0x0000C8u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/unknown/C0/C09506.asm:17 INY
    case 0xC09520: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/unknown/C0/C09506.asm:18 AND #$00FF
    case 0xC09521: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C09506.asm:18 AND #$00FF
    // Overlapping static entry reached from 0xC09521.
    case 0xC09523: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C09506.asm:19 CMP #$0070
    case 0xC09524: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000070u : 0x000070u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C09506.asm:19 CMP #$0070
    // Overlapping static entry reached from 0xC09524.
    case 0xC09526: {
        Instruction step(cpu, 0x00, 0x0000B0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C09506.asm:20 BCS @UNKNOWN1
    case 0xC09527: {
        Instruction step(cpu, 0xB0, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/unknown/C0/C09506.asm:21 ASL
    case 0xC09529: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C0/C09506.asm:22 TAX
    case 0xC0952A: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C0/C09506.asm:23 JSR (.LOWORD(MOVEMENT_CTRL_CODES_PTR_TABLE),X)
    case 0xC0952B: {
        Instruction step(cpu, 0xFC, 0x009558u, 3u, AddressMode::AbsoluteIndexedIndirectX);
        step.call();
        return step.finish();
    }
    // src/unknown/C0/C09506.asm:24 BRA @UNKNOWN2
    case 0xC0952E: {
        Instruction step(cpu, 0x80, 0x000014u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/unknown/C0/C09506.asm:26 STA $90
    case 0xC09530: {
        Instruction step(cpu, 0x85, 0x000090u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C09506.asm:27 AND #$000F
    case 0xC09532: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x00000Fu : 0x00000Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C09506.asm:27 AND #$000F
    // Overlapping static entry reached from 0xC09532.
    case 0xC09534: {
        Instruction step(cpu, 0x00, 0x00009Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C09506.asm:28 STA ENTITY_SCRIPT_SLEEP_FRAMES,X
    case 0xC09535: {
        Instruction step(cpu, 0x9D, 0x001372u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C09506.asm:29 LDA $90
    case 0xC09538: {
        Instruction step(cpu, 0xA5, 0x000090u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C09506.asm:30 AND #$0070
    case 0xC0953A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000070u : 0x000070u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C09506.asm:30 AND #$0070
    // Overlapping static entry reached from 0xC0953A.
    case 0xC0953C: {
        Instruction step(cpu, 0x00, 0x00004Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C09506.asm:31 LSR
    case 0xC0953D: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/unknown/C0/C09506.asm:32 LSR
    case 0xC0953E: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/unknown/C0/C09506.asm:33 LSR
    case 0xC0953F: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/unknown/C0/C09506.asm:34 TAX
    case 0xC09540: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C0/C09506.asm:35 JSR (.LOWORD(MOVEMENT_CTRL_CODES_PTR_TABLE)+138,X)
    case 0xC09541: {
        Instruction step(cpu, 0xFC, 0x0095E2u, 3u, AddressMode::AbsoluteIndexedIndirectX);
        step.call();
        return step.finish();
    }
    // src/unknown/C0/C09506.asm:37 LDX $8A
    case 0xC09544: {
        Instruction step(cpu, 0xA6, 0x00008Au, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C0/C09506.asm:38 LDA ENTITY_SCRIPT_SLEEP_FRAMES,X
    case 0xC09546: {
        Instruction step(cpu, 0xBD, 0x001372u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C09506.asm:39 BEQ @UNKNOWN0
    case 0xC09549: {
        Instruction step(cpu, 0xF0, 0x0000D3u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/unknown/C0/C09506.asm:40 TYA
    case 0xC0954B: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C09506.asm:41 STA ENTITY_SCRIPT_PROGRAM_COUNTERS,X
    case 0xC0954C: {
        Instruction step(cpu, 0x9D, 0x0013FEu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C09506.asm:42 LDA $82
    case 0xC0954F: {
        Instruction step(cpu, 0xA5, 0x000082u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C09506.asm:43 STA ENTITY_SCRIPT_PROGRAM_COUNTER_BANKS,X
    case 0xC09551: {
        Instruction step(cpu, 0x9D, 0x00148Au, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C09506.asm:45 DEC ENTITY_SCRIPT_SLEEP_FRAMES,X
    case 0xC09554: {
        Instruction step(cpu, 0xDE, 0x001372u, 3u, AddressMode::AbsoluteIndexedX);
        step.decrement();
        return step.finish();
    }
    // src/unknown/C0/C09506.asm:46 RTS
    case 0xC09557: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
