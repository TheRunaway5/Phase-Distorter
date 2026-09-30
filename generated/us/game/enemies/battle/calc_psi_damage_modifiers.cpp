// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/battle/calc_psi_damage_modifiers.asm
bool resume_battle_calc_psi_damage_modifiers(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/calc_psi_damage_modifiers.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2B608: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/calc_psi_damage_modifiers.asm:3 BEGIN_C_FUNCTION_FAR
    // Overlapping static entry reached from 0xC2B625.
    case 0xC2B609: {
        Instruction step(cpu, 0x31, 0x000029u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/calc_psi_damage_modifiers.asm:6 AND #$00FF
    case 0xC2B60A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/calc_psi_damage_modifiers.asm:6 AND #$00FF
    // Overlapping static entry reached from 0xC2B609.
    case 0xC2B60B: {
        Instruction step(cpu, 0xFF, 0x11F000u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/calc_psi_damage_modifiers.asm:6 AND #$00FF
    // Overlapping static entry reached from 0xC2B60A.
    case 0xC2B60C: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_psi_damage_modifiers.asm:7 BEQ @UNKNOWN0
    case 0xC2B60D: {
        Instruction step(cpu, 0xF0, 0x000011u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/calc_psi_damage_modifiers.asm:8 CMP #1
    case 0xC2B60F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/calc_psi_damage_modifiers.asm:8 CMP #1
    // Overlapping static entry reached from 0xC2B60F.
    case 0xC2B611: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_psi_damage_modifiers.asm:9 BEQ @UNKNOWN1
    case 0xC2B612: {
        Instruction step(cpu, 0xF0, 0x000012u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/calc_psi_damage_modifiers.asm:10 CMP #2
    case 0xC2B614: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/calc_psi_damage_modifiers.asm:10 CMP #2
    // Overlapping static entry reached from 0xC2B614.
    case 0xC2B616: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_psi_damage_modifiers.asm:11 BEQ @UNKNOWN2
    case 0xC2B617: {
        Instruction step(cpu, 0xF0, 0x000013u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/calc_psi_damage_modifiers.asm:12 CMP #3
    case 0xC2B619: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/calc_psi_damage_modifiers.asm:12 CMP #3
    // Overlapping static entry reached from 0xC2B619.
    case 0xC2B61B: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_psi_damage_modifiers.asm:13 BEQ @UNKNOWN3
    case 0xC2B61C: {
        Instruction step(cpu, 0xF0, 0x000014u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/calc_psi_damage_modifiers.asm:14 BRA @UNKNOWN4
    case 0xC2B61E: {
        Instruction step(cpu, 0x80, 0x000016u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/calc_psi_damage_modifiers.asm:16 SEP #PROC_FLAGS::ACCUM8
    case 0xC2B620: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/calc_psi_damage_modifiers.asm:17 LDA #255
    case 0xC2B622: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x0080FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_psi_damage_modifiers.asm:18 BRA @UNKNOWN4
    case 0xC2B624: {
        Instruction step(cpu, 0x80, 0x000010u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/calc_psi_damage_modifiers.asm:18 BRA @UNKNOWN4
    // Overlapping static entry reached from 0xC2B622.
    case 0xC2B625: {
        Instruction step(cpu, 0x10, 0x0000E2u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // src/battle/calc_psi_damage_modifiers.asm:20 SEP #PROC_FLAGS::ACCUM8
    case 0xC2B626: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/calc_psi_damage_modifiers.asm:20 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC2B625.
    case 0xC2B627: {
        Instruction step(cpu, 0x20, 0x00B3A9u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/calc_psi_damage_modifiers.asm:21 LDA #179
    case 0xC2B628: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000B3u : 0x0080B3u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_psi_damage_modifiers.asm:22 BRA @UNKNOWN4
    case 0xC2B62A: {
        Instruction step(cpu, 0x80, 0x00000Au, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/calc_psi_damage_modifiers.asm:22 BRA @UNKNOWN4
    // Overlapping static entry reached from 0xC2B628.
    case 0xC2B62B: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/calc_psi_damage_modifiers.asm:24 SEP #PROC_FLAGS::ACCUM8
    case 0xC2B62C: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/calc_psi_damage_modifiers.asm:25 LDA #102
    case 0xC2B62E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000066u : 0x008066u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_psi_damage_modifiers.asm:26 BRA @UNKNOWN4
    case 0xC2B630: {
        Instruction step(cpu, 0x80, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/calc_psi_damage_modifiers.asm:26 BRA @UNKNOWN4
    // Overlapping static entry reached from 0xC2B62E.
    case 0xC2B631: {
        Instruction step(cpu, 0x04, 0x0000E2u, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/battle/calc_psi_damage_modifiers.asm:28 SEP #PROC_FLAGS::ACCUM8
    case 0xC2B632: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/calc_psi_damage_modifiers.asm:28 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC2B631.
    case 0xC2B633: {
        Instruction step(cpu, 0x20, 0x000DA9u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/calc_psi_damage_modifiers.asm:29 LDA #13
    case 0xC2B634: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Du : 0x00E20Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_psi_damage_modifiers.asm:31 SEP #PROC_FLAGS::ACCUM8
    case 0xC2B636: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/calc_psi_damage_modifiers.asm:31 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC2B634.
    case 0xC2B637: {
        Instruction step(cpu, 0x20, 0x00C26Bu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/calc_psi_damage_modifiers.asm:32 END_C_FUNCTION
    case 0xC2B638: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
