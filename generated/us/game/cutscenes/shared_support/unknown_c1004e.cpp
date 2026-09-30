// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/unknown/C1/C1004E.asm
bool resume_unresolved_c1_c1004e(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C1004E.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC1004E: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/unknown/C1/C1004E.asm:5 LDA RENDER_HPPP_WINDOWS
    case 0xC10050: {
        Instruction step(cpu, 0xAD, 0x0089C9u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C1004E.asm:6 AND #$00FF
    case 0xC10053: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C1004E.asm:6 AND #$00FF
    // Overlapping static entry reached from 0xC10053.
    case 0xC10055: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C1/C1004E.asm:7 BEQ @UNKNOWN0
    case 0xC10056: {
        Instruction step(cpu, 0xF0, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/unknown/C1/C1004E.asm:8 JSR UNKNOWN_C3E450
    case 0xC10058: {
        Instruction step(cpu, 0x22, 0xC3E450u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C1/C1004E.asm:10 LDA BATTLE_MODE_FLAG
    case 0xC1005C: {
        Instruction step(cpu, 0xAD, 0x009643u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C1004E.asm:11 BEQ @UNKNOWN1
    case 0xC1005F: {
        Instruction step(cpu, 0xF0, 0x000006u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/unknown/C1/C1004E.asm:12 JSL UNKNOWN_C43568
    case 0xC10061: {
        Instruction step(cpu, 0x22, 0xC43568u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C1/C1004E.asm:13 BRA @UNKNOWN2
    case 0xC10065: {
        Instruction step(cpu, 0x80, 0x000010u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/unknown/C1/C1004E.asm:15 JSL OAM_CLEAR
    case 0xC10067: {
        Instruction step(cpu, 0x22, 0xC088B1u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C1/C1004E.asm:16 JSL RUN_ACTIONSCRIPT_FRAME
    case 0xC1006B: {
        Instruction step(cpu, 0x22, 0xC09466u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C1/C1004E.asm:17 JSL UPDATE_SCREEN
    case 0xC1006F: {
        Instruction step(cpu, 0x22, 0xC08B26u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C1/C1004E.asm:18 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC10073: {
        Instruction step(cpu, 0x22, 0xC08756u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C1/C1004E.asm:20 END_C_FUNCTION
    case 0xC10077: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
