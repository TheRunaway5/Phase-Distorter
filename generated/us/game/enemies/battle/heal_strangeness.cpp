// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/battle/heal_strangeness.asm
bool resume_battle_heal_strangeness(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/heal_strangeness.asm:3 BEGIN_C_FUNCTION
    case 0xC2856B: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/heal_strangeness.asm:6 END_STACK_VARS
    case 0xC2856D: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/heal_strangeness.asm:6 END_STACK_VARS
    case 0xC2856E: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/heal_strangeness.asm:6 END_STACK_VARS
    case 0xC2856F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EEu : 0x00FFEEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/heal_strangeness.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC2856F.
    case 0xC28571: {
        Instruction step(cpu, 0xFF, 0x72AD5Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/heal_strangeness.asm:6 END_STACK_VARS
    case 0xC28572: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/battle/heal_strangeness.asm:7 LDA CURRENT_TARGET
    case 0xC28573: {
        Instruction step(cpu, 0xAD, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/heal_strangeness.asm:7 LDA CURRENT_TARGET
    // Overlapping static entry reached from 0xC28571.
    case 0xC28575: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000018u : 0x006918u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/heal_strangeness.asm:8 CLC
    case 0xC28576: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/heal_strangeness.asm:9 ADC #battler::afflictions + STATUS_GROUP::STRANGENESS
    case 0xC28577: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/heal_strangeness.asm:9 ADC #battler::afflictions + STATUS_GROUP::STRANGENESS
    // Overlapping static entry reached from 0xC28575.
    case 0xC28578: {
        Instruction step(cpu, 0x20, 0x00AA00u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/heal_strangeness.asm:9 ADC #battler::afflictions + STATUS_GROUP::STRANGENESS
    // Overlapping static entry reached from 0xC28577.
    case 0xC28579: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/heal_strangeness.asm:10 TAX
    case 0xC2857A: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/heal_strangeness.asm:11 LDA __BSS_START__,X
    case 0xC2857B: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/heal_strangeness.asm:12 AND #$00FF
    case 0xC2857E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/heal_strangeness.asm:12 AND #$00FF
    // Overlapping static entry reached from 0xC2857E.
    case 0xC28580: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/heal_strangeness.asm:13 CMP #1
    case 0xC28581: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/heal_strangeness.asm:13 CMP #1
    // Overlapping static entry reached from 0xC28581.
    case 0xC28583: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/heal_strangeness.asm:14 BNE @RETURN
    case 0xC28584: {
        Instruction step(cpu, 0xD0, 0x000017u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/heal_strangeness.asm:15 SEP #PROC_FLAGS::ACCUM8
    case 0xC28586: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/heal_strangeness.asm:16 LDA #0
    case 0xC28588: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x009D00u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/heal_strangeness.asm:17 STA __BSS_START__,X
    case 0xC2858A: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/heal_strangeness.asm:17 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC28588.
    case 0xC2858B: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/heal_strangeness.asm:18 REP #PROC_FLAGS::ACCUM8
    case 0xC2858D: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/heal_strangeness.asm:19 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_HEN_OFF
    case 0xC2858F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00001Eu : 0x006F1Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/heal_strangeness.asm:19 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_HEN_OFF
    // Overlapping static entry reached from 0xC2858F.
    case 0xC28591: {
        Instruction step(cpu, 0x6F, 0xA90E85u, 4u, AddressMode::Long);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/heal_strangeness.asm:19 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_HEN_OFF
    case 0xC28592: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/heal_strangeness.asm:19 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_HEN_OFF
    case 0xC28594: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000EFu : 0x0000EFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/heal_strangeness.asm:19 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_HEN_OFF
    // Overlapping static entry reached from 0xC28591.
    case 0xC28595: {
        Instruction step(cpu, 0xEF, 0x108500u, 4u, AddressMode::Long);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/heal_strangeness.asm:19 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_HEN_OFF
    // Overlapping static entry reached from 0xC28594.
    case 0xC28596: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/heal_strangeness.asm:19 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_HEN_OFF
    case 0xC28597: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/heal_strangeness.asm:19 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_HEN_OFF
    case 0xC28599: {
        Instruction step(cpu, 0x22, 0xC1DC1Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/heal_strangeness.asm:21 END_C_FUNCTION
    case 0xC2859D: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/heal_strangeness.asm:21 END_C_FUNCTION
    case 0xC2859E: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
