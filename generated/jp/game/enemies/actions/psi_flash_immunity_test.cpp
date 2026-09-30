// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/battle/actions/psi_flash_immunity_test.asm
bool resume_battle_actions_psi_flash_immunity_test(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/psi_flash_immunity_test.asm:3 BEGIN_C_FUNCTION
    case 0xC2984A: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/actions/psi_flash_immunity_test.asm:7 END_STACK_VARS
    case 0xC2984C: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/actions/psi_flash_immunity_test.asm:7 END_STACK_VARS
    case 0xC2984D: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/psi_flash_immunity_test.asm:7 END_STACK_VARS
    case 0xC2984E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EEu : 0x00FFEEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/psi_flash_immunity_test.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC2984E.
    case 0xC29850: {
        Instruction step(cpu, 0xFF, 0xC6205Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/actions/psi_flash_immunity_test.asm:7 END_STACK_VARS
    case 0xC29851: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/battle/actions/psi_flash_immunity_test.asm:8 JSR PSI_SHIELD_NULLIFY
    case 0xC29852: {
        Instruction step(cpu, 0x20, 0x0093C6u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/psi_flash_immunity_test.asm:8 JSR PSI_SHIELD_NULLIFY
    // Overlapping static entry reached from 0xC29850.
    case 0xC29854: {
        Instruction step(cpu, 0x93, 0x0000C9u, 2u, AddressMode::StackRelativeIndirectIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/psi_flash_immunity_test.asm:9 CMP #0
    case 0xC29855: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/psi_flash_immunity_test.asm:9 CMP #0
    // Overlapping static entry reached from 0xC29854.
    case 0xC29856: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/psi_flash_immunity_test.asm:9 CMP #0
    // Overlapping static entry reached from 0xC29855.
    case 0xC29857: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/psi_flash_immunity_test.asm:10 BEQ @UNKNOWN0
    case 0xC29858: {
        Instruction step(cpu, 0xF0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/actions/psi_flash_immunity_test.asm:11 LDA #0
    case 0xC2985A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/psi_flash_immunity_test.asm:11 LDA #0
    // Overlapping static entry reached from 0xC2985A.
    case 0xC2985C: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/psi_flash_immunity_test.asm:12 BRA @UNKNOWN2
    case 0xC2985D: {
        Instruction step(cpu, 0x80, 0x000026u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/actions/psi_flash_immunity_test.asm:14 LDX CURRENT_TARGET
    case 0xC2985F: {
        Instruction step(cpu, 0xAE, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/psi_flash_immunity_test.asm:15 SEP #PROC_FLAGS::ACCUM8
    case 0xC29862: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/actions/psi_flash_immunity_test.asm:16 LDA a:battler::flash_resist,X
    case 0xC29864: {
        Instruction step(cpu, 0xBD, 0x000039u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/psi_flash_immunity_test.asm:17 JSR SUCCESS_255
    case 0xC29867: {
        Instruction step(cpu, 0x20, 0x006AF7u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/psi_flash_immunity_test.asm:19 CMP #0
    case 0xC2986A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/psi_flash_immunity_test.asm:19 CMP #0
    // Overlapping static entry reached from 0xC2986A.
    case 0xC2986C: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/psi_flash_immunity_test.asm:20 BEQ @UNKNOWN1
    case 0xC2986D: {
        Instruction step(cpu, 0xF0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/actions/psi_flash_immunity_test.asm:21 LDA #1
    case 0xC2986F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/psi_flash_immunity_test.asm:21 LDA #1
    // Overlapping static entry reached from 0xC2986F.
    case 0xC29871: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/psi_flash_immunity_test.asm:22 BRA @UNKNOWN2
    case 0xC29872: {
        Instruction step(cpu, 0x80, 0x000011u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/psi_flash_immunity_test.asm:25 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC29874: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000CBu : 0x002DCBu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/psi_flash_immunity_test.asm:25 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    // Overlapping static entry reached from 0xC29874.
    case 0xC29876: {
        Instruction step(cpu, 0x2D, 0x000E85u, 3u, AddressMode::Absolute);
        step.and_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/psi_flash_immunity_test.asm:25 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC29877: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/psi_flash_immunity_test.asm:25 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC29879: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/psi_flash_immunity_test.asm:25 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    // Overlapping static entry reached from 0xC29879.
    case 0xC2987B: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/psi_flash_immunity_test.asm:25 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC2987C: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/psi_flash_immunity_test.asm:25 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC2987E: {
        Instruction step(cpu, 0x22, 0xC1D9FFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/psi_flash_immunity_test.asm:26 LDA #0
    case 0xC29882: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/psi_flash_immunity_test.asm:26 LDA #0
    // Overlapping static entry reached from 0xC29882.
    case 0xC29884: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/actions/psi_flash_immunity_test.asm:28 END_C_FUNCTION
    case 0xC29885: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/actions/psi_flash_immunity_test.asm:28 END_C_FUNCTION
    case 0xC29886: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
