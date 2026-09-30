// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/overworld/actionscript/get_direction_turned_randomly_left_or_right.asm
bool resume_overworld_actionscript_get_direction_turned_randomly_left_or_right(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/get_direction_turned_randomly_left_or_right.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC0C69E: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/actionscript/get_direction_turned_randomly_left_or_right.asm:4 JSL RAND
    case 0xC0C6A0: {
        Instruction step(cpu, 0x22, 0xC08E9Au, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/actionscript/get_direction_turned_randomly_left_or_right.asm:5 AND #$0001
    case 0xC0C6A4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/get_direction_turned_randomly_left_or_right.asm:5 AND #$0001
    // Overlapping static entry reached from 0xC0C6A4.
    case 0xC0C6A6: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/actionscript/get_direction_turned_randomly_left_or_right.asm:6 BEQ @UNKNOWN0
    case 0xC0C6A7: {
        Instruction step(cpu, 0xF0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/actionscript/get_direction_turned_randomly_left_or_right.asm:7 LDA #$0001
    case 0xC0C6A9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/get_direction_turned_randomly_left_or_right.asm:7 LDA #$0001
    // Overlapping static entry reached from 0xC0C6A9.
    case 0xC0C6AB: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/actionscript/get_direction_turned_randomly_left_or_right.asm:8 BRA @UNKNOWN1
    case 0xC0C6AC: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/actionscript/get_direction_turned_randomly_left_or_right.asm:10 LDA #$FFFF
    case 0xC0C6AE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/get_direction_turned_randomly_left_or_right.asm:10 LDA #$FFFF
    // Overlapping static entry reached from 0xC0C6AE.
    case 0xC0C6B0: {
        Instruction step(cpu, 0xFF, 0xC68222u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/actionscript/get_direction_turned_randomly_left_or_right.asm:12 JSL GET_DIRECTION_ROTATED_CLOCKWISE
    case 0xC0C6B1: {
        Instruction step(cpu, 0x22, 0xC0C682u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/actionscript/get_direction_turned_randomly_left_or_right.asm:12 JSL GET_DIRECTION_ROTATED_CLOCKWISE
    // Overlapping static entry reached from 0xC0C6B0.
    case 0xC0C6B4: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x00006Bu : 0x00C26Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/overworld/actionscript/get_direction_turned_randomly_left_or_right.asm:13 RTL
    case 0xC0C6B5: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
