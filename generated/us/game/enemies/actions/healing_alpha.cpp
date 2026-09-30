// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/battle/actions/healing_alpha.asm
bool resume_battle_actions_healing_alpha(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/healing_alpha.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC29AEA: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/actions/healing_alpha.asm:6 END_STACK_VARS
    case 0xC29AEC: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/actions/healing_alpha.asm:6 END_STACK_VARS
    case 0xC29AED: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/healing_alpha.asm:6 END_STACK_VARS
    case 0xC29AEE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EEu : 0x00FFEEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/healing_alpha.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC29AEE.
    case 0xC29AF0: {
        Instruction step(cpu, 0xFF, 0x72AD5Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/actions/healing_alpha.asm:6 END_STACK_VARS
    case 0xC29AF1: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/battle/actions/healing_alpha.asm:7 LDA CURRENT_TARGET
    case 0xC29AF2: {
        Instruction step(cpu, 0xAD, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/healing_alpha.asm:7 LDA CURRENT_TARGET
    // Overlapping static entry reached from 0xC29AF0.
    case 0xC29AF4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000018u : 0x006918u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/healing_alpha.asm:8 CLC
    case 0xC29AF5: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/actions/healing_alpha.asm:9 ADC #battler::afflictions + STATUS_GROUP::PERSISTENT_EASYHEAL
    case 0xC29AF6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00001Du : 0x00001Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/actions/healing_alpha.asm:9 ADC #battler::afflictions + STATUS_GROUP::PERSISTENT_EASYHEAL
    // Overlapping static entry reached from 0xC29AF4.
    case 0xC29AF7: {
        Instruction step(cpu, 0x1D, 0x00AA00u, 3u, AddressMode::AbsoluteIndexedX);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/actions/healing_alpha.asm:9 ADC #battler::afflictions + STATUS_GROUP::PERSISTENT_EASYHEAL
    // Overlapping static entry reached from 0xC29AF6.
    case 0xC29AF8: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/healing_alpha.asm:10 TAX
    case 0xC29AF9: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/actions/healing_alpha.asm:11 LDA __BSS_START__,X
    case 0xC29AFA: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/healing_alpha.asm:12 AND #$00FF
    case 0xC29AFD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/actions/healing_alpha.asm:12 AND #$00FF
    // Overlapping static entry reached from 0xC29AFD.
    case 0xC29AFF: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/healing_alpha.asm:13 CMP #STATUS_0::COLD
    case 0xC29B00: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000007u : 0x000007u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/healing_alpha.asm:13 CMP #STATUS_0::COLD
    // Overlapping static entry reached from 0xC29B00.
    case 0xC29B02: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/healing_alpha.asm:14 BEQ @UNKNOWN0
    case 0xC29B03: {
        Instruction step(cpu, 0xF0, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/actions/healing_alpha.asm:15 CMP #STATUS_0::SUNSTROKE
    case 0xC29B05: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/healing_alpha.asm:15 CMP #STATUS_0::SUNSTROKE
    // Overlapping static entry reached from 0xC29B05.
    case 0xC29B07: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/healing_alpha.asm:16 BEQ @UNKNOWN1
    case 0xC29B08: {
        Instruction step(cpu, 0xF0, 0x00001Bu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/actions/healing_alpha.asm:17 BRA @UNKNOWN2
    case 0xC29B0A: {
        Instruction step(cpu, 0x80, 0x000032u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/actions/healing_alpha.asm:19 SEP #PROC_FLAGS::ACCUM8
    case 0xC29B0C: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/actions/healing_alpha.asm:20 LDA #0
    case 0xC29B0E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x009D00u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/healing_alpha.asm:21 STA __BSS_START__,X
    case 0xC29B10: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/healing_alpha.asm:21 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC29B0E.
    case 0xC29B11: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/healing_alpha.asm:22 REP #PROC_FLAGS::ACCUM8
    case 0xC29B13: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/healing_alpha.asm:23 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KAZE_OFF
    case 0xC29B15: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000BCu : 0x006EBCu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/healing_alpha.asm:23 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KAZE_OFF
    // Overlapping static entry reached from 0xC29B15.
    case 0xC29B17: {
        Instruction step(cpu, 0x6E, 0x000E85u, 3u, AddressMode::Absolute);
        step.rotate_right();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/healing_alpha.asm:23 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KAZE_OFF
    case 0xC29B18: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/healing_alpha.asm:23 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KAZE_OFF
    case 0xC29B1A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000EFu : 0x0000EFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/healing_alpha.asm:23 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KAZE_OFF
    // Overlapping static entry reached from 0xC29B1A.
    case 0xC29B1C: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/healing_alpha.asm:23 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KAZE_OFF
    case 0xC29B1D: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/healing_alpha.asm:23 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KAZE_OFF
    case 0xC29B1F: {
        Instruction step(cpu, 0x22, 0xC1DC1Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/healing_alpha.asm:24 BRA @UNKNOWN4
    case 0xC29B23: {
        Instruction step(cpu, 0x80, 0x000053u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/actions/healing_alpha.asm:26 SEP #PROC_FLAGS::ACCUM8
    case 0xC29B25: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/actions/healing_alpha.asm:27 LDA #0
    case 0xC29B27: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x009D00u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/healing_alpha.asm:28 STA __BSS_START__,X
    case 0xC29B29: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/healing_alpha.asm:28 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC29B27.
    case 0xC29B2A: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/healing_alpha.asm:29 REP #PROC_FLAGS::ACCUM8
    case 0xC29B2C: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/healing_alpha.asm:30 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NISSYA_OFF
    case 0xC29B2E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000038u : 0x006F38u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/healing_alpha.asm:30 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NISSYA_OFF
    // Overlapping static entry reached from 0xC29B2E.
    case 0xC29B30: {
        Instruction step(cpu, 0x6F, 0xA90E85u, 4u, AddressMode::Long);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/healing_alpha.asm:30 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NISSYA_OFF
    case 0xC29B31: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/healing_alpha.asm:30 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NISSYA_OFF
    case 0xC29B33: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000EFu : 0x0000EFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/healing_alpha.asm:30 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NISSYA_OFF
    // Overlapping static entry reached from 0xC29B30.
    case 0xC29B34: {
        Instruction step(cpu, 0xEF, 0x108500u, 4u, AddressMode::Long);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/healing_alpha.asm:30 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NISSYA_OFF
    // Overlapping static entry reached from 0xC29B33.
    case 0xC29B35: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/healing_alpha.asm:30 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NISSYA_OFF
    case 0xC29B36: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/healing_alpha.asm:30 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NISSYA_OFF
    case 0xC29B38: {
        Instruction step(cpu, 0x22, 0xC1DC1Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/healing_alpha.asm:31 BRA @UNKNOWN4
    case 0xC29B3C: {
        Instruction step(cpu, 0x80, 0x00003Au, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/actions/healing_alpha.asm:33 LDA CURRENT_TARGET
    case 0xC29B3E: {
        Instruction step(cpu, 0xAD, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/healing_alpha.asm:34 CLC
    case 0xC29B41: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/actions/healing_alpha.asm:35 ADC #battler::afflictions + STATUS_GROUP::TEMPORARY
    case 0xC29B42: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00001Fu : 0x00001Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/actions/healing_alpha.asm:35 ADC #battler::afflictions + STATUS_GROUP::TEMPORARY
    // Overlapping static entry reached from 0xC29B42.
    case 0xC29B44: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/healing_alpha.asm:36 TAX
    case 0xC29B45: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/actions/healing_alpha.asm:37 LDA __BSS_START__,X
    case 0xC29B46: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/healing_alpha.asm:38 AND #$00FF
    case 0xC29B49: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/actions/healing_alpha.asm:38 AND #$00FF
    // Overlapping static entry reached from 0xC29B49.
    case 0xC29B4B: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/healing_alpha.asm:39 CMP #STATUS_2::ASLEEP
    case 0xC29B4C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/healing_alpha.asm:39 CMP #STATUS_2::ASLEEP
    // Overlapping static entry reached from 0xC29B4C.
    case 0xC29B4E: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/healing_alpha.asm:40 BNE @UNKNOWN3
    case 0xC29B4F: {
        Instruction step(cpu, 0xD0, 0x000019u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/actions/healing_alpha.asm:41 SEP #PROC_FLAGS::ACCUM8
    case 0xC29B51: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/actions/healing_alpha.asm:42 LDA #0
    case 0xC29B53: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x009D00u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/healing_alpha.asm:43 STA __BSS_START__,X
    case 0xC29B55: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/healing_alpha.asm:43 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC29B53.
    case 0xC29B56: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/healing_alpha.asm:44 REP #PROC_FLAGS::ACCUM8
    case 0xC29B58: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/healing_alpha.asm:45 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NEMURI_OFF
    case 0xC29B5A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000054u : 0x006F54u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/healing_alpha.asm:45 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NEMURI_OFF
    // Overlapping static entry reached from 0xC29B5A.
    case 0xC29B5C: {
        Instruction step(cpu, 0x6F, 0xA90E85u, 4u, AddressMode::Long);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/healing_alpha.asm:45 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NEMURI_OFF
    case 0xC29B5D: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/healing_alpha.asm:45 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NEMURI_OFF
    case 0xC29B5F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000EFu : 0x0000EFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/healing_alpha.asm:45 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NEMURI_OFF
    // Overlapping static entry reached from 0xC29B5C.
    case 0xC29B60: {
        Instruction step(cpu, 0xEF, 0x108500u, 4u, AddressMode::Long);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/healing_alpha.asm:45 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NEMURI_OFF
    // Overlapping static entry reached from 0xC29B5F.
    case 0xC29B61: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/healing_alpha.asm:45 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NEMURI_OFF
    case 0xC29B62: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/healing_alpha.asm:45 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NEMURI_OFF
    case 0xC29B64: {
        Instruction step(cpu, 0x22, 0xC1DC1Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/healing_alpha.asm:46 BRA @UNKNOWN4
    case 0xC29B68: {
        Instruction step(cpu, 0x80, 0x00000Eu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/healing_alpha.asm:48 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_HEAL_NG
    case 0xC29B6A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000096u : 0x007696u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/healing_alpha.asm:48 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_HEAL_NG
    // Overlapping static entry reached from 0xC29B6A.
    case 0xC29B6C: {
        Instruction step(cpu, 0x76, 0x000085u, 2u, AddressMode::DirectPageIndexedX);
        step.rotate_right();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/healing_alpha.asm:48 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_HEAL_NG
    case 0xC29B6D: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/healing_alpha.asm:48 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_HEAL_NG
    // Overlapping static entry reached from 0xC29B6C.
    case 0xC29B6E: {
        Instruction step(cpu, 0x0E, 0x00EFA9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/healing_alpha.asm:48 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_HEAL_NG
    case 0xC29B6F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000EFu : 0x0000EFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/healing_alpha.asm:48 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_HEAL_NG
    // Overlapping static entry reached from 0xC29B6F.
    case 0xC29B71: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/healing_alpha.asm:48 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_HEAL_NG
    case 0xC29B72: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/healing_alpha.asm:48 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_HEAL_NG
    case 0xC29B74: {
        Instruction step(cpu, 0x22, 0xC1DC1Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/actions/healing_alpha.asm:50 END_C_FUNCTION
    case 0xC29B78: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/healing_alpha.asm:50 END_C_FUNCTION
    case 0xC29B79: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
