// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/battle/actions/paralysis_alpha.asm
bool resume_battle_actions_paralysis_alpha(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/paralysis_alpha.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC29FA7: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/actions/paralysis_alpha.asm:6 END_STACK_VARS
    case 0xC29FA9: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/actions/paralysis_alpha.asm:6 END_STACK_VARS
    case 0xC29FAA: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/paralysis_alpha.asm:6 END_STACK_VARS
    case 0xC29FAB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EEu : 0x00FFEEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/paralysis_alpha.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC29FAB.
    case 0xC29FAD: {
        Instruction step(cpu, 0xFF, 0x94205Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/actions/paralysis_alpha.asm:6 END_STACK_VARS
    case 0xC29FAE: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/battle/actions/paralysis_alpha.asm:7 JSR FAIL_ATTACK_ON_NPCS
    case 0xC29FAF: {
        Instruction step(cpu, 0x20, 0x007C94u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/paralysis_alpha.asm:7 JSR FAIL_ATTACK_ON_NPCS
    // Overlapping static entry reached from 0xC29FAD.
    case 0xC29FB1: {
        Instruction step(cpu, 0x7C, 0x0000C9u, 3u, AddressMode::AbsoluteIndexedIndirectX);
        step.jump();
        return step.finish();
    }
    // src/battle/actions/paralysis_alpha.asm:8 CMP #0
    case 0xC29FB2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/paralysis_alpha.asm:8 CMP #0
    // Overlapping static entry reached from 0xC29FB2.
    case 0xC29FB4: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/paralysis_alpha.asm:9 BNE @UNKNOWN1
    case 0xC29FB5: {
        Instruction step(cpu, 0xD0, 0x00003Fu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/actions/paralysis_alpha.asm:10 LDX CURRENT_TARGET
    case 0xC29FB7: {
        Instruction step(cpu, 0xAE, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/paralysis_alpha.asm:11 SEP #PROC_FLAGS::ACCUM8
    case 0xC29FBA: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/actions/paralysis_alpha.asm:12 LDA a:battler::paralysis_resist,X
    case 0xC29FBC: {
        Instruction step(cpu, 0xBD, 0x000037u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/paralysis_alpha.asm:13 JSR SUCCESS_255
    case 0xC29FBF: {
        Instruction step(cpu, 0x20, 0x006AF7u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/paralysis_alpha.asm:15 CMP #0
    case 0xC29FC2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/paralysis_alpha.asm:15 CMP #0
    // Overlapping static entry reached from 0xC29FC2.
    case 0xC29FC4: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/paralysis_alpha.asm:16 BEQ @UNKNOWN0
    case 0xC29FC5: {
        Instruction step(cpu, 0xF0, 0x000021u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/actions/paralysis_alpha.asm:17 LDY #STATUS_0::PARALYZED
    case 0xC29FC7: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/actions/paralysis_alpha.asm:17 LDY #STATUS_0::PARALYZED
    // Overlapping static entry reached from 0xC29FC7.
    case 0xC29FC9: {
        Instruction step(cpu, 0x00, 0x0000A2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/paralysis_alpha.asm:18 LDX #STATUS_GROUP::PERSISTENT_EASYHEAL
    case 0xC29FCA: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/paralysis_alpha.asm:18 LDX #STATUS_GROUP::PERSISTENT_EASYHEAL
    // Overlapping static entry reached from 0xC29FCA.
    case 0xC29FCC: {
        Instruction step(cpu, 0x00, 0x0000ADu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/paralysis_alpha.asm:19 LDA CURRENT_TARGET
    case 0xC29FCD: {
        Instruction step(cpu, 0xAD, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/paralysis_alpha.asm:20 JSR INFLICT_STATUS_BATTLE
    case 0xC29FD0: {
        Instruction step(cpu, 0x20, 0x00718Du, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/paralysis_alpha.asm:22 CMP #0
    case 0xC29FD3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/paralysis_alpha.asm:22 CMP #0
    // Overlapping static entry reached from 0xC29FD3.
    case 0xC29FD5: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/paralysis_alpha.asm:23 BEQ @UNKNOWN0
    case 0xC29FD6: {
        Instruction step(cpu, 0xF0, 0x000010u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/paralysis_alpha.asm:24 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIBIRE_ON
    case 0xC29FD8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00002Du : 0x00302Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/paralysis_alpha.asm:24 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIBIRE_ON
    // Overlapping static entry reached from 0xC29FD8.
    case 0xC29FDA: {
        Instruction step(cpu, 0x30, 0x000085u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/paralysis_alpha.asm:24 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIBIRE_ON
    case 0xC29FDB: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/paralysis_alpha.asm:24 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIBIRE_ON
    // Overlapping static entry reached from 0xC29FDA.
    case 0xC29FDC: {
        Instruction step(cpu, 0x0E, 0x00C7A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/paralysis_alpha.asm:24 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIBIRE_ON
    case 0xC29FDD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/paralysis_alpha.asm:24 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIBIRE_ON
    // Overlapping static entry reached from 0xC29FDD.
    case 0xC29FDF: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/paralysis_alpha.asm:24 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIBIRE_ON
    case 0xC29FE0: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/paralysis_alpha.asm:24 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIBIRE_ON
    case 0xC29FE2: {
        Instruction step(cpu, 0x22, 0xC1D9FFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/paralysis_alpha.asm:25 BRA @UNKNOWN1
    case 0xC29FE6: {
        Instruction step(cpu, 0x80, 0x00000Eu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/paralysis_alpha.asm:27 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC29FE8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000CBu : 0x002DCBu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/paralysis_alpha.asm:27 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    // Overlapping static entry reached from 0xC29FE8.
    case 0xC29FEA: {
        Instruction step(cpu, 0x2D, 0x000E85u, 3u, AddressMode::Absolute);
        step.and_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/paralysis_alpha.asm:27 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC29FEB: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/paralysis_alpha.asm:27 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC29FED: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/paralysis_alpha.asm:27 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    // Overlapping static entry reached from 0xC29FED.
    case 0xC29FEF: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/paralysis_alpha.asm:27 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC29FF0: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/paralysis_alpha.asm:27 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC29FF2: {
        Instruction step(cpu, 0x22, 0xC1D9FFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/actions/paralysis_alpha.asm:29 END_C_FUNCTION
    case 0xC29FF6: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/paralysis_alpha.asm:29 END_C_FUNCTION
    case 0xC29FF7: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
