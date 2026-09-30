// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/battle/actions/psi_flash_beta.asm
bool resume_battle_actions_psi_flash_beta(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/psi_flash_beta.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC299AE: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/actions/psi_flash_beta.asm:5 JSR FAIL_ATTACK_ON_NPCS
    case 0xC299B0: {
        Instruction step(cpu, 0x20, 0x007CFDu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/psi_flash_beta.asm:6 CMP #0
    case 0xC299B3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/psi_flash_beta.asm:6 CMP #0
    // Overlapping static entry reached from 0xC299B3.
    case 0xC299B5: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/psi_flash_beta.asm:7 BNE @UNKNOWN5
    case 0xC299B6: {
        Instruction step(cpu, 0xD0, 0x000036u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/actions/psi_flash_beta.asm:8 JSR FLASH_IMMUNITY_TEST
    case 0xC299B8: {
        Instruction step(cpu, 0x20, 0x0098A1u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/psi_flash_beta.asm:9 CMP #0
    case 0xC299BB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/psi_flash_beta.asm:9 CMP #0
    // Overlapping static entry reached from 0xC299BB.
    case 0xC299BD: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/psi_flash_beta.asm:10 BEQ @UNKNOWN4
    case 0xC299BE: {
        Instruction step(cpu, 0xF0, 0x00002Bu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/actions/psi_flash_beta.asm:11 JSL RAND
    case 0xC299C0: {
        Instruction step(cpu, 0x22, 0xC08E9Au, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/psi_flash_beta.asm:12 AND #$0007
    case 0xC299C4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000007u : 0x000007u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/actions/psi_flash_beta.asm:12 AND #$0007
    // Overlapping static entry reached from 0xC299C4.
    case 0xC299C6: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/psi_flash_beta.asm:13 BEQ @UNKNOWN0
    case 0xC299C7: {
        Instruction step(cpu, 0xF0, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/actions/psi_flash_beta.asm:14 CMP #1
    case 0xC299C9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/psi_flash_beta.asm:14 CMP #1
    // Overlapping static entry reached from 0xC299C9.
    case 0xC299CB: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/psi_flash_beta.asm:15 BEQ @UNKNOWN1
    case 0xC299CC: {
        Instruction step(cpu, 0xF0, 0x000010u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/actions/psi_flash_beta.asm:16 CMP #2
    case 0xC299CE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/psi_flash_beta.asm:16 CMP #2
    // Overlapping static entry reached from 0xC299CE.
    case 0xC299D0: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/psi_flash_beta.asm:17 BEQ @UNKNOWN2
    case 0xC299D1: {
        Instruction step(cpu, 0xF0, 0x000010u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/actions/psi_flash_beta.asm:18 BRA @UNKNOWN3
    case 0xC299D3: {
        Instruction step(cpu, 0x80, 0x000013u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/actions/psi_flash_beta.asm:20 LDA CURRENT_TARGET
    case 0xC299D5: {
        Instruction step(cpu, 0xAD, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/psi_flash_beta.asm:21 JSL KO_TARGET
    case 0xC299D8: {
        Instruction step(cpu, 0x22, 0xC27550u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/psi_flash_beta.asm:22 BRA @UNKNOWN4
    case 0xC299DC: {
        Instruction step(cpu, 0x80, 0x00000Du, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/actions/psi_flash_beta.asm:24 JSR FLASH_INFLICT_PARALYSIS
    case 0xC299DE: {
        Instruction step(cpu, 0x20, 0x009917u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/psi_flash_beta.asm:25 BRA @UNKNOWN4
    case 0xC299E1: {
        Instruction step(cpu, 0x80, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/actions/psi_flash_beta.asm:27 JSR FLASH_INFLICT_FEELING_STRANGE
    case 0xC299E3: {
        Instruction step(cpu, 0x20, 0x0098DEu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/psi_flash_beta.asm:28 BRA @UNKNOWN4
    case 0xC299E6: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/actions/psi_flash_beta.asm:30 JSR FLASH_INFLICT_CRYING
    case 0xC299E8: {
        Instruction step(cpu, 0x20, 0x009950u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/psi_flash_beta.asm:32 JSR WEAKEN_SHIELD
    case 0xC299EB: {
        Instruction step(cpu, 0x20, 0x0094CEu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/psi_flash_beta.asm:34 END_C_FUNCTION
    case 0xC299EE: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
