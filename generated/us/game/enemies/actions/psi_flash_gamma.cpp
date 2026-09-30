// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/battle/actions/psi_flash_gamma.asm
bool resume_battle_actions_psi_flash_gamma(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/psi_flash_gamma.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC299EF: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/actions/psi_flash_gamma.asm:5 JSR FAIL_ATTACK_ON_NPCS
    case 0xC299F1: {
        Instruction step(cpu, 0x20, 0x007CFDu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/psi_flash_gamma.asm:6 CMP #0
    case 0xC299F4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/psi_flash_gamma.asm:6 CMP #0
    // Overlapping static entry reached from 0xC299F4.
    case 0xC299F6: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/psi_flash_gamma.asm:7 BNE @UNKNOWN5
    case 0xC299F7: {
        Instruction step(cpu, 0xD0, 0x00003Bu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/actions/psi_flash_gamma.asm:8 JSR FLASH_IMMUNITY_TEST
    case 0xC299F9: {
        Instruction step(cpu, 0x20, 0x0098A1u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/psi_flash_gamma.asm:9 CMP #0
    case 0xC299FC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/psi_flash_gamma.asm:9 CMP #0
    // Overlapping static entry reached from 0xC299FC.
    case 0xC299FE: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/psi_flash_gamma.asm:10 BEQ @UNKNOWN4
    case 0xC299FF: {
        Instruction step(cpu, 0xF0, 0x000030u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/actions/psi_flash_gamma.asm:11 JSL RAND
    case 0xC29A01: {
        Instruction step(cpu, 0x22, 0xC08E9Au, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/psi_flash_gamma.asm:12 AND #$0007
    case 0xC29A05: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000007u : 0x000007u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/actions/psi_flash_gamma.asm:12 AND #$0007
    // Overlapping static entry reached from 0xC29A05.
    case 0xC29A07: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/psi_flash_gamma.asm:13 BEQ @UNKNOWN0
    case 0xC29A08: {
        Instruction step(cpu, 0xF0, 0x000011u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/actions/psi_flash_gamma.asm:14 CMP #1
    case 0xC29A0A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/psi_flash_gamma.asm:14 CMP #1
    // Overlapping static entry reached from 0xC29A0A.
    case 0xC29A0C: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/psi_flash_gamma.asm:15 BEQ @UNKNOWN0
    case 0xC29A0D: {
        Instruction step(cpu, 0xF0, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/actions/psi_flash_gamma.asm:16 CMP #2
    case 0xC29A0F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/psi_flash_gamma.asm:16 CMP #2
    // Overlapping static entry reached from 0xC29A0F.
    case 0xC29A11: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/psi_flash_gamma.asm:17 BEQ @UNKNOWN1
    case 0xC29A12: {
        Instruction step(cpu, 0xF0, 0x000010u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/actions/psi_flash_gamma.asm:18 CMP #3
    case 0xC29A14: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/psi_flash_gamma.asm:18 CMP #3
    // Overlapping static entry reached from 0xC29A14.
    case 0xC29A16: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/psi_flash_gamma.asm:19 BEQ @UNKNOWN2
    case 0xC29A17: {
        Instruction step(cpu, 0xF0, 0x000010u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/actions/psi_flash_gamma.asm:20 BRA @UNKNOWN3
    case 0xC29A19: {
        Instruction step(cpu, 0x80, 0x000013u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/actions/psi_flash_gamma.asm:22 LDA CURRENT_TARGET
    case 0xC29A1B: {
        Instruction step(cpu, 0xAD, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/psi_flash_gamma.asm:23 JSL KO_TARGET
    case 0xC29A1E: {
        Instruction step(cpu, 0x22, 0xC27550u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/psi_flash_gamma.asm:24 BRA @UNKNOWN4
    case 0xC29A22: {
        Instruction step(cpu, 0x80, 0x00000Du, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/actions/psi_flash_gamma.asm:26 JSR FLASH_INFLICT_PARALYSIS
    case 0xC29A24: {
        Instruction step(cpu, 0x20, 0x009917u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/psi_flash_gamma.asm:27 BRA @UNKNOWN4
    case 0xC29A27: {
        Instruction step(cpu, 0x80, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/actions/psi_flash_gamma.asm:29 JSR FLASH_INFLICT_FEELING_STRANGE
    case 0xC29A29: {
        Instruction step(cpu, 0x20, 0x0098DEu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/psi_flash_gamma.asm:30 BRA @UNKNOWN4
    case 0xC29A2C: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/actions/psi_flash_gamma.asm:32 JSR FLASH_INFLICT_CRYING
    case 0xC29A2E: {
        Instruction step(cpu, 0x20, 0x009950u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/psi_flash_gamma.asm:34 JSR WEAKEN_SHIELD
    case 0xC29A31: {
        Instruction step(cpu, 0x20, 0x0094CEu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/psi_flash_gamma.asm:36 END_C_FUNCTION
    case 0xC29A34: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
