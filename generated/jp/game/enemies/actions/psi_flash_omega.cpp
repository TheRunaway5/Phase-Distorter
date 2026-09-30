// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/battle/actions/psi_flash_omega.asm
bool resume_battle_actions_psi_flash_omega(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/psi_flash_omega.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC299DE: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/actions/psi_flash_omega.asm:5 JSR FAIL_ATTACK_ON_NPCS
    case 0xC299E0: {
        Instruction step(cpu, 0x20, 0x007C94u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/psi_flash_omega.asm:6 CMP #0
    case 0xC299E3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/psi_flash_omega.asm:6 CMP #0
    // Overlapping static entry reached from 0xC299E3.
    case 0xC299E5: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/psi_flash_omega.asm:7 BNE @UNKNOWN5
    case 0xC299E6: {
        Instruction step(cpu, 0xD0, 0x000040u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/actions/psi_flash_omega.asm:8 JSR FLASH_IMMUNITY_TEST
    case 0xC299E8: {
        Instruction step(cpu, 0x20, 0x00984Au, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/psi_flash_omega.asm:9 CMP #0
    case 0xC299EB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/psi_flash_omega.asm:9 CMP #0
    // Overlapping static entry reached from 0xC299EB.
    case 0xC299ED: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/psi_flash_omega.asm:10 BEQ @UNKNOWN4
    case 0xC299EE: {
        Instruction step(cpu, 0xF0, 0x000035u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/actions/psi_flash_omega.asm:11 JSL RAND
    case 0xC299F0: {
        Instruction step(cpu, 0x22, 0xC08E8Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/psi_flash_omega.asm:12 AND #$0007
    case 0xC299F4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000007u : 0x000007u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/actions/psi_flash_omega.asm:12 AND #$0007
    // Overlapping static entry reached from 0xC299F4.
    case 0xC299F6: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/psi_flash_omega.asm:13 BEQ @UNKNOWN0
    case 0xC299F7: {
        Instruction step(cpu, 0xF0, 0x000016u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/actions/psi_flash_omega.asm:14 CMP #1
    case 0xC299F9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/psi_flash_omega.asm:14 CMP #1
    // Overlapping static entry reached from 0xC299F9.
    case 0xC299FB: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/psi_flash_omega.asm:15 BEQ @UNKNOWN0
    case 0xC299FC: {
        Instruction step(cpu, 0xF0, 0x000011u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/actions/psi_flash_omega.asm:16 CMP #2
    case 0xC299FE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/psi_flash_omega.asm:16 CMP #2
    // Overlapping static entry reached from 0xC299FE.
    case 0xC29A00: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/psi_flash_omega.asm:17 BEQ @UNKNOWN0
    case 0xC29A01: {
        Instruction step(cpu, 0xF0, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/actions/psi_flash_omega.asm:18 CMP #3
    case 0xC29A03: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/psi_flash_omega.asm:18 CMP #3
    // Overlapping static entry reached from 0xC29A03.
    case 0xC29A05: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/psi_flash_omega.asm:19 BEQ @UNKNOWN1
    case 0xC29A06: {
        Instruction step(cpu, 0xF0, 0x000010u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/actions/psi_flash_omega.asm:20 CMP #4
    case 0xC29A08: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/psi_flash_omega.asm:20 CMP #4
    // Overlapping static entry reached from 0xC29A08.
    case 0xC29A0A: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/psi_flash_omega.asm:21 BEQ @UNKNOWN2
    case 0xC29A0B: {
        Instruction step(cpu, 0xF0, 0x000010u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/actions/psi_flash_omega.asm:22 BRA @UNKNOWN3
    case 0xC29A0D: {
        Instruction step(cpu, 0x80, 0x000013u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/actions/psi_flash_omega.asm:24 LDA CURRENT_TARGET
    case 0xC29A0F: {
        Instruction step(cpu, 0xAD, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/psi_flash_omega.asm:25 JSL KO_TARGET
    case 0xC29A12: {
        Instruction step(cpu, 0x22, 0xC27491u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/psi_flash_omega.asm:26 BRA @UNKNOWN4
    case 0xC29A16: {
        Instruction step(cpu, 0x80, 0x00000Du, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/actions/psi_flash_omega.asm:28 JSR FLASH_INFLICT_PARALYSIS
    case 0xC29A18: {
        Instruction step(cpu, 0x20, 0x0098C0u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/psi_flash_omega.asm:29 BRA @UNKNOWN4
    case 0xC29A1B: {
        Instruction step(cpu, 0x80, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/actions/psi_flash_omega.asm:31 JSR FLASH_INFLICT_FEELING_STRANGE
    case 0xC29A1D: {
        Instruction step(cpu, 0x20, 0x009887u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/psi_flash_omega.asm:32 BRA @UNKNOWN4
    case 0xC29A20: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/actions/psi_flash_omega.asm:34 JSR FLASH_INFLICT_CRYING
    case 0xC29A22: {
        Instruction step(cpu, 0x20, 0x0098F9u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/psi_flash_omega.asm:36 JSR WEAKEN_SHIELD
    case 0xC29A25: {
        Instruction step(cpu, 0x20, 0x009477u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/psi_flash_omega.asm:38 END_C_FUNCTION
    case 0xC29A28: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
