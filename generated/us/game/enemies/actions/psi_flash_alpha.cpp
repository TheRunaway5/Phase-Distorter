// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/battle/actions/psi_flash_alpha.asm
bool resume_battle_actions_psi_flash_alpha(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/psi_flash_alpha.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC29987: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/actions/psi_flash_alpha.asm:5 JSR FAIL_ATTACK_ON_NPCS
    case 0xC29989: {
        Instruction step(cpu, 0x20, 0x007CFDu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/psi_flash_alpha.asm:6 CMP #0
    case 0xC2998C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/psi_flash_alpha.asm:6 CMP #0
    // Overlapping static entry reached from 0xC2998C.
    case 0xC2998E: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/psi_flash_alpha.asm:7 BNE @UNKNOWN2
    case 0xC2998F: {
        Instruction step(cpu, 0xD0, 0x00001Cu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/actions/psi_flash_alpha.asm:8 JSR FLASH_IMMUNITY_TEST
    case 0xC29991: {
        Instruction step(cpu, 0x20, 0x0098A1u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/psi_flash_alpha.asm:9 CMP #0
    case 0xC29994: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/psi_flash_alpha.asm:9 CMP #0
    // Overlapping static entry reached from 0xC29994.
    case 0xC29996: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/psi_flash_alpha.asm:10 BEQ @UNKNOWN1
    case 0xC29997: {
        Instruction step(cpu, 0xF0, 0x000011u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/actions/psi_flash_alpha.asm:11 JSL RAND
    case 0xC29999: {
        Instruction step(cpu, 0x22, 0xC08E9Au, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/psi_flash_alpha.asm:12 AND #$0007
    case 0xC2999D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000007u : 0x000007u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/actions/psi_flash_alpha.asm:12 AND #$0007
    // Overlapping static entry reached from 0xC2999D.
    case 0xC2999F: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/psi_flash_alpha.asm:13 BNE @UNKNOWN0
    case 0xC299A0: {
        Instruction step(cpu, 0xD0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/actions/psi_flash_alpha.asm:14 JSR FLASH_INFLICT_FEELING_STRANGE
    case 0xC299A2: {
        Instruction step(cpu, 0x20, 0x0098DEu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/psi_flash_alpha.asm:15 BRA @UNKNOWN1
    case 0xC299A5: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/actions/psi_flash_alpha.asm:17 JSR FLASH_INFLICT_CRYING
    case 0xC299A7: {
        Instruction step(cpu, 0x20, 0x009950u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/psi_flash_alpha.asm:19 JSR WEAKEN_SHIELD
    case 0xC299AA: {
        Instruction step(cpu, 0x20, 0x0094CEu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/psi_flash_alpha.asm:21 END_C_FUNCTION
    case 0xC299AD: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
