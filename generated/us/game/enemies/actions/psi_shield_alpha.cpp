// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/battle/actions/psi_shield_alpha.asm
bool resume_battle_actions_psi_shield_alpha(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/psi_shield_alpha.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC29DBE: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/actions/psi_shield_alpha.asm:6 END_STACK_VARS
    case 0xC29DC0: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/actions/psi_shield_alpha.asm:6 END_STACK_VARS
    case 0xC29DC1: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/psi_shield_alpha.asm:6 END_STACK_VARS
    case 0xC29DC2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EEu : 0x00FFEEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/psi_shield_alpha.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC29DC2.
    case 0xC29DC4: {
        Instruction step(cpu, 0xFF, 0x02A25Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/actions/psi_shield_alpha.asm:6 END_STACK_VARS
    case 0xC29DC5: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/battle/actions/psi_shield_alpha.asm:7 LDX #STATUS_6::PSI_SHIELD
    case 0xC29DC6: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/psi_shield_alpha.asm:7 LDX #STATUS_6::PSI_SHIELD
    // Overlapping static entry reached from 0xC29DC6.
    case 0xC29DC8: {
        Instruction step(cpu, 0x00, 0x0000ADu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/psi_shield_alpha.asm:8 LDA CURRENT_TARGET
    case 0xC29DC9: {
        Instruction step(cpu, 0xAD, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/psi_shield_alpha.asm:9 JSR SHIELDS_COMMON
    case 0xC29DCC: {
        Instruction step(cpu, 0x20, 0x009CDCu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/psi_shield_alpha.asm:10 CMP #0
    case 0xC29DCF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/psi_shield_alpha.asm:10 CMP #0
    // Overlapping static entry reached from 0xC29DCF.
    case 0xC29DD1: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/psi_shield_alpha.asm:11 BEQ @UNKNOWN0
    case 0xC29DD2: {
        Instruction step(cpu, 0xF0, 0x000010u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/psi_shield_alpha.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSYCO_ADD
    case 0xC29DD4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000032u : 0x007032u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/psi_shield_alpha.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSYCO_ADD
    // Overlapping static entry reached from 0xC29DD4.
    case 0xC29DD6: {
        Instruction step(cpu, 0x70, 0x000085u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_set();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/psi_shield_alpha.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSYCO_ADD
    case 0xC29DD7: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/psi_shield_alpha.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSYCO_ADD
    // Overlapping static entry reached from 0xC29DD6.
    case 0xC29DD8: {
        Instruction step(cpu, 0x0E, 0x00EFA9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/psi_shield_alpha.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSYCO_ADD
    case 0xC29DD9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000EFu : 0x0000EFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/psi_shield_alpha.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSYCO_ADD
    // Overlapping static entry reached from 0xC29DD9.
    case 0xC29DDB: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/psi_shield_alpha.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSYCO_ADD
    case 0xC29DDC: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/psi_shield_alpha.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSYCO_ADD
    case 0xC29DDE: {
        Instruction step(cpu, 0x22, 0xC1DC1Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/psi_shield_alpha.asm:13 BRA @UNKNOWN1
    case 0xC29DE2: {
        Instruction step(cpu, 0x80, 0x00000Eu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/psi_shield_alpha.asm:15 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSYCO_ON
    case 0xC29DE4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Cu : 0x00700Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/psi_shield_alpha.asm:15 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSYCO_ON
    // Overlapping static entry reached from 0xC29DE4.
    case 0xC29DE6: {
        Instruction step(cpu, 0x70, 0x000085u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_set();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/psi_shield_alpha.asm:15 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSYCO_ON
    case 0xC29DE7: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/psi_shield_alpha.asm:15 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSYCO_ON
    // Overlapping static entry reached from 0xC29DE6.
    case 0xC29DE8: {
        Instruction step(cpu, 0x0E, 0x00EFA9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/psi_shield_alpha.asm:15 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSYCO_ON
    case 0xC29DE9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000EFu : 0x0000EFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/psi_shield_alpha.asm:15 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSYCO_ON
    // Overlapping static entry reached from 0xC29DE9.
    case 0xC29DEB: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/psi_shield_alpha.asm:15 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSYCO_ON
    case 0xC29DEC: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/psi_shield_alpha.asm:15 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSYCO_ON
    case 0xC29DEE: {
        Instruction step(cpu, 0x22, 0xC1DC1Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/actions/psi_shield_alpha.asm:17 END_C_FUNCTION
    case 0xC29DF2: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/psi_shield_alpha.asm:17 END_C_FUNCTION
    case 0xC29DF3: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
