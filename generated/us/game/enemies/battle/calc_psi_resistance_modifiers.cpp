// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/battle/calc_psi_resistance_modifiers.asm
bool resume_battle_calc_psi_resistance_modifiers(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/calc_psi_resistance_modifiers.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2B639: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/calc_psi_resistance_modifiers.asm:3 BEGIN_C_FUNCTION_FAR
    // Overlapping static entry reached from 0xC2B637.
    case 0xC2B63A: {
        Instruction step(cpu, 0x31, 0x000029u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/calc_psi_resistance_modifiers.asm:6 AND #$00FF
    case 0xC2B63B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/calc_psi_resistance_modifiers.asm:6 AND #$00FF
    // Overlapping static entry reached from 0xC2B63A.
    case 0xC2B63C: {
        Instruction step(cpu, 0xFF, 0x11F000u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/calc_psi_resistance_modifiers.asm:6 AND #$00FF
    // Overlapping static entry reached from 0xC2B63B.
    case 0xC2B63D: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_psi_resistance_modifiers.asm:7 BEQ @UNKNOWN0
    case 0xC2B63E: {
        Instruction step(cpu, 0xF0, 0x000011u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/calc_psi_resistance_modifiers.asm:8 CMP #1
    case 0xC2B640: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/calc_psi_resistance_modifiers.asm:8 CMP #1
    // Overlapping static entry reached from 0xC2B640.
    case 0xC2B642: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_psi_resistance_modifiers.asm:9 BEQ @UNKNOWN1
    case 0xC2B643: {
        Instruction step(cpu, 0xF0, 0x000012u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/calc_psi_resistance_modifiers.asm:10 CMP #2
    case 0xC2B645: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/calc_psi_resistance_modifiers.asm:10 CMP #2
    // Overlapping static entry reached from 0xC2B645.
    case 0xC2B647: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_psi_resistance_modifiers.asm:11 BEQ @UNKNOWN2
    case 0xC2B648: {
        Instruction step(cpu, 0xF0, 0x000013u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/calc_psi_resistance_modifiers.asm:12 CMP #3
    case 0xC2B64A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/calc_psi_resistance_modifiers.asm:12 CMP #3
    // Overlapping static entry reached from 0xC2B64A.
    case 0xC2B64C: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_psi_resistance_modifiers.asm:13 BEQ @UNKNOWN3
    case 0xC2B64D: {
        Instruction step(cpu, 0xF0, 0x000014u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/calc_psi_resistance_modifiers.asm:14 BRA @UNKNOWN4
    case 0xC2B64F: {
        Instruction step(cpu, 0x80, 0x000016u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/calc_psi_resistance_modifiers.asm:16 SEP #PROC_FLAGS::ACCUM8
    case 0xC2B651: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/calc_psi_resistance_modifiers.asm:17 LDA #255
    case 0xC2B653: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x0080FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_psi_resistance_modifiers.asm:18 BRA @UNKNOWN4
    case 0xC2B655: {
        Instruction step(cpu, 0x80, 0x000010u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/calc_psi_resistance_modifiers.asm:18 BRA @UNKNOWN4
    // Overlapping static entry reached from 0xC2B653.
    case 0xC2B656: {
        Instruction step(cpu, 0x10, 0x0000E2u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // src/battle/calc_psi_resistance_modifiers.asm:20 SEP #PROC_FLAGS::ACCUM8
    case 0xC2B657: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/calc_psi_resistance_modifiers.asm:20 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC2B656.
    case 0xC2B658: {
        Instruction step(cpu, 0x20, 0x0080A9u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/calc_psi_resistance_modifiers.asm:21 LDA #128
    case 0xC2B659: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000080u : 0x008080u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_psi_resistance_modifiers.asm:22 BRA @UNKNOWN4
    case 0xC2B65B: {
        Instruction step(cpu, 0x80, 0x00000Au, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/calc_psi_resistance_modifiers.asm:22 BRA @UNKNOWN4
    // Overlapping static entry reached from 0xC2B659.
    case 0xC2B65C: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/calc_psi_resistance_modifiers.asm:24 SEP #PROC_FLAGS::ACCUM8
    case 0xC2B65D: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/calc_psi_resistance_modifiers.asm:25 LDA #26
    case 0xC2B65F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00001Au : 0x00801Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_psi_resistance_modifiers.asm:26 BRA @UNKNOWN4
    case 0xC2B661: {
        Instruction step(cpu, 0x80, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/calc_psi_resistance_modifiers.asm:26 BRA @UNKNOWN4
    // Overlapping static entry reached from 0xC2B65F.
    case 0xC2B662: {
        Instruction step(cpu, 0x04, 0x0000E2u, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/battle/calc_psi_resistance_modifiers.asm:28 SEP #PROC_FLAGS::ACCUM8
    case 0xC2B663: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/calc_psi_resistance_modifiers.asm:28 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC2B662.
    case 0xC2B664: {
        Instruction step(cpu, 0x20, 0x0000A9u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/calc_psi_resistance_modifiers.asm:29 LDA #0
    case 0xC2B665: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x00E200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_psi_resistance_modifiers.asm:31 SEP #PROC_FLAGS::ACCUM8
    case 0xC2B667: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/calc_psi_resistance_modifiers.asm:31 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC2B665.
    case 0xC2B668: {
        Instruction step(cpu, 0x20, 0x00C26Bu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/calc_psi_resistance_modifiers.asm:32 END_C_FUNCTION
    case 0xC2B669: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
