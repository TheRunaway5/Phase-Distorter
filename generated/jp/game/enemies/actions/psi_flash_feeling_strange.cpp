// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/battle/actions/psi_flash_feeling_strange.asm
bool resume_battle_actions_psi_flash_feeling_strange(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/psi_flash_feeling_strange.asm:3 BEGIN_C_FUNCTION
    case 0xC29887: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/actions/psi_flash_feeling_strange.asm:6 END_STACK_VARS
    case 0xC29889: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/actions/psi_flash_feeling_strange.asm:6 END_STACK_VARS
    case 0xC2988A: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/psi_flash_feeling_strange.asm:6 END_STACK_VARS
    case 0xC2988B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EEu : 0x00FFEEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/psi_flash_feeling_strange.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC2988B.
    case 0xC2988D: {
        Instruction step(cpu, 0xFF, 0x01A05Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/actions/psi_flash_feeling_strange.asm:6 END_STACK_VARS
    case 0xC2988E: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/battle/actions/psi_flash_feeling_strange.asm:7 LDY #STATUS_3::STRANGE
    case 0xC2988F: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/actions/psi_flash_feeling_strange.asm:7 LDY #STATUS_3::STRANGE
    // Overlapping static entry reached from 0xC2988F.
    case 0xC29891: {
        Instruction step(cpu, 0x00, 0x0000A2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/psi_flash_feeling_strange.asm:8 LDX #STATUS_GROUP::STRANGENESS
    case 0xC29892: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/psi_flash_feeling_strange.asm:8 LDX #STATUS_GROUP::STRANGENESS
    // Overlapping static entry reached from 0xC29892.
    case 0xC29894: {
        Instruction step(cpu, 0x00, 0x0000ADu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/psi_flash_feeling_strange.asm:9 LDA CURRENT_TARGET
    case 0xC29895: {
        Instruction step(cpu, 0xAD, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/psi_flash_feeling_strange.asm:10 JSR INFLICT_STATUS_BATTLE
    case 0xC29898: {
        Instruction step(cpu, 0x20, 0x00718Du, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/psi_flash_feeling_strange.asm:10 JSR INFLICT_STATUS_BATTLE
    // Overlapping static entry reached from 0xC29912.
    case 0xC29899: {
        Instruction step(cpu, 0x8D, 0x00C971u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/psi_flash_feeling_strange.asm:11 CMP #0
    case 0xC2989B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/psi_flash_feeling_strange.asm:11 CMP #0
    // Overlapping static entry reached from 0xC29899.
    case 0xC2989C: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/psi_flash_feeling_strange.asm:11 CMP #0
    // Overlapping static entry reached from 0xC2989B.
    case 0xC2989D: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/psi_flash_feeling_strange.asm:12 BEQ @UNKNOWN0
    case 0xC2989E: {
        Instruction step(cpu, 0xF0, 0x000010u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/psi_flash_feeling_strange.asm:13 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_HEN_ON
    case 0xC298A0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00004Fu : 0x00314Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/psi_flash_feeling_strange.asm:13 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_HEN_ON
    // Overlapping static entry reached from 0xC298A0.
    case 0xC298A2: {
        Instruction step(cpu, 0x31, 0x000085u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.and_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/psi_flash_feeling_strange.asm:13 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_HEN_ON
    case 0xC298A3: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/psi_flash_feeling_strange.asm:13 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_HEN_ON
    // Overlapping static entry reached from 0xC298A2.
    case 0xC298A4: {
        Instruction step(cpu, 0x0E, 0x00C7A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/psi_flash_feeling_strange.asm:13 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_HEN_ON
    case 0xC298A5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/psi_flash_feeling_strange.asm:13 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_HEN_ON
    // Overlapping static entry reached from 0xC298A5.
    case 0xC298A7: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/psi_flash_feeling_strange.asm:13 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_HEN_ON
    case 0xC298A8: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/psi_flash_feeling_strange.asm:13 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_HEN_ON
    case 0xC298AA: {
        Instruction step(cpu, 0x22, 0xC1D9FFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/psi_flash_feeling_strange.asm:14 BRA @UNKNOWN1
    case 0xC298AE: {
        Instruction step(cpu, 0x80, 0x00000Eu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/psi_flash_feeling_strange.asm:16 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC298B0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000CBu : 0x002DCBu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/psi_flash_feeling_strange.asm:16 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    // Overlapping static entry reached from 0xC298B0.
    case 0xC298B2: {
        Instruction step(cpu, 0x2D, 0x000E85u, 3u, AddressMode::Absolute);
        step.and_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/psi_flash_feeling_strange.asm:16 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC298B3: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/psi_flash_feeling_strange.asm:16 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC298B5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/psi_flash_feeling_strange.asm:16 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    // Overlapping static entry reached from 0xC298B5.
    case 0xC298B7: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/psi_flash_feeling_strange.asm:16 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC298B8: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/psi_flash_feeling_strange.asm:16 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC298BA: {
        Instruction step(cpu, 0x22, 0xC1D9FFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/actions/psi_flash_feeling_strange.asm:18 END_C_FUNCTION
    case 0xC298BE: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/actions/psi_flash_feeling_strange.asm:18 END_C_FUNCTION
    case 0xC298BF: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
