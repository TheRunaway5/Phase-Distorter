// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/battle/actions/healing_beta.asm
bool resume_battle_actions_healing_beta(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/healing_beta.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC29B23: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/actions/healing_beta.asm:6 END_STACK_VARS
    case 0xC29B25: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/actions/healing_beta.asm:6 END_STACK_VARS
    case 0xC29B26: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/healing_beta.asm:6 END_STACK_VARS
    case 0xC29B27: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EEu : 0x00FFEEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/healing_beta.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC29B27.
    case 0xC29B29: {
        Instruction step(cpu, 0xFF, 0x74AD5Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/actions/healing_beta.asm:6 END_STACK_VARS
    case 0xC29B2A: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/battle/actions/healing_beta.asm:7 LDA CURRENT_TARGET
    case 0xC29B2B: {
        Instruction step(cpu, 0xAD, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/healing_beta.asm:7 LDA CURRENT_TARGET
    // Overlapping static entry reached from 0xC29B29.
    case 0xC29B2D: {
        Instruction step(cpu, 0xAB, 0x000000u, 1u, AddressMode::Implied);
        step.pull_data_bank();
        return step.finish();
    }
    // src/battle/actions/healing_beta.asm:8 CLC
    case 0xC29B2E: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/actions/healing_beta.asm:9 ADC #battler::afflictions + STATUS_GROUP::PERSISTENT_EASYHEAL
    case 0xC29B2F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00001Du : 0x00001Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/actions/healing_beta.asm:9 ADC #battler::afflictions + STATUS_GROUP::PERSISTENT_EASYHEAL
    // Overlapping static entry reached from 0xC29B2F.
    case 0xC29B31: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/healing_beta.asm:10 TAX
    case 0xC29B32: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/actions/healing_beta.asm:11 LDA __BSS_START__,X
    case 0xC29B33: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/healing_beta.asm:12 AND #$00FF
    case 0xC29B36: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/actions/healing_beta.asm:12 AND #$00FF
    // Overlapping static entry reached from 0xC29B36.
    case 0xC29B38: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/healing_beta.asm:13 CMP #STATUS_0::POISONED
    case 0xC29B39: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000005u : 0x000005u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/healing_beta.asm:13 CMP #STATUS_0::POISONED
    // Overlapping static entry reached from 0xC29B39.
    case 0xC29B3B: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/healing_beta.asm:14 BEQ @UNKNOWN0
    case 0xC29B3C: {
        Instruction step(cpu, 0xF0, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/actions/healing_beta.asm:15 CMP #STATUS_0::NAUSEOUS
    case 0xC29B3E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/healing_beta.asm:15 CMP #STATUS_0::NAUSEOUS
    // Overlapping static entry reached from 0xC29B3E.
    case 0xC29B40: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/healing_beta.asm:16 BEQ @UNKNOWN1
    case 0xC29B41: {
        Instruction step(cpu, 0xF0, 0x00001Bu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/actions/healing_beta.asm:17 BRA @UNKNOWN2
    case 0xC29B43: {
        Instruction step(cpu, 0x80, 0x000032u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/actions/healing_beta.asm:19 SEP #PROC_FLAGS::ACCUM8
    case 0xC29B45: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/actions/healing_beta.asm:20 LDA #0
    case 0xC29B47: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x009D00u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/healing_beta.asm:21 STA __BSS_START__,X
    case 0xC29B49: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/healing_beta.asm:21 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC29B47.
    case 0xC29B4A: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/healing_beta.asm:22 REP #PROC_FLAGS::ACCUM8
    case 0xC29B4C: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/healing_beta.asm:23 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_MODOKU_OFF
    case 0xC29B4E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000086u : 0x003386u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/healing_beta.asm:23 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_MODOKU_OFF
    // Overlapping static entry reached from 0xC29B4E.
    case 0xC29B50: {
        Instruction step(cpu, 0x33, 0x000085u, 2u, AddressMode::StackRelativeIndirectIndexedY);
        step.and_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/healing_beta.asm:23 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_MODOKU_OFF
    case 0xC29B51: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/healing_beta.asm:23 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_MODOKU_OFF
    // Overlapping static entry reached from 0xC29B50.
    case 0xC29B52: {
        Instruction step(cpu, 0x0E, 0x00C7A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/healing_beta.asm:23 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_MODOKU_OFF
    case 0xC29B53: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/healing_beta.asm:23 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_MODOKU_OFF
    // Overlapping static entry reached from 0xC29B53.
    case 0xC29B55: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/healing_beta.asm:23 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_MODOKU_OFF
    case 0xC29B56: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/healing_beta.asm:23 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_MODOKU_OFF
    case 0xC29B58: {
        Instruction step(cpu, 0x22, 0xC1D9FFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/healing_beta.asm:24 BRA @UNKNOWN5
    case 0xC29B5C: {
        Instruction step(cpu, 0x80, 0x000075u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/actions/healing_beta.asm:26 SEP #PROC_FLAGS::ACCUM8
    case 0xC29B5E: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/actions/healing_beta.asm:27 LDA #0
    case 0xC29B60: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x009D00u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/healing_beta.asm:28 STA __BSS_START__,X
    case 0xC29B62: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/healing_beta.asm:28 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC29B60.
    case 0xC29B63: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/healing_beta.asm:29 REP #PROC_FLAGS::ACCUM8
    case 0xC29B65: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/healing_beta.asm:30 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIMOCHI_OFF
    case 0xC29B67: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00006Fu : 0x00336Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/healing_beta.asm:30 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIMOCHI_OFF
    // Overlapping static entry reached from 0xC29B67.
    case 0xC29B69: {
        Instruction step(cpu, 0x33, 0x000085u, 2u, AddressMode::StackRelativeIndirectIndexedY);
        step.and_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/healing_beta.asm:30 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIMOCHI_OFF
    case 0xC29B6A: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/healing_beta.asm:30 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIMOCHI_OFF
    // Overlapping static entry reached from 0xC29B69.
    case 0xC29B6B: {
        Instruction step(cpu, 0x0E, 0x00C7A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/healing_beta.asm:30 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIMOCHI_OFF
    case 0xC29B6C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/healing_beta.asm:30 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIMOCHI_OFF
    // Overlapping static entry reached from 0xC29B6C.
    case 0xC29B6E: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/healing_beta.asm:30 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIMOCHI_OFF
    case 0xC29B6F: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/healing_beta.asm:30 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIMOCHI_OFF
    case 0xC29B71: {
        Instruction step(cpu, 0x22, 0xC1D9FFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/healing_beta.asm:31 BRA @UNKNOWN5
    case 0xC29B75: {
        Instruction step(cpu, 0x80, 0x00005Cu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/actions/healing_beta.asm:33 LDA CURRENT_TARGET
    case 0xC29B77: {
        Instruction step(cpu, 0xAD, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/healing_beta.asm:34 CLC
    case 0xC29B7A: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/actions/healing_beta.asm:35 ADC #battler::afflictions + STATUS_GROUP::TEMPORARY
    case 0xC29B7B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00001Fu : 0x00001Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/actions/healing_beta.asm:35 ADC #battler::afflictions + STATUS_GROUP::TEMPORARY
    // Overlapping static entry reached from 0xC29B7B.
    case 0xC29B7D: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/healing_beta.asm:36 TAX
    case 0xC29B7E: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/actions/healing_beta.asm:37 LDA __BSS_START__,X
    case 0xC29B7F: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/healing_beta.asm:38 AND #$00FF
    case 0xC29B82: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/actions/healing_beta.asm:38 AND #$00FF
    // Overlapping static entry reached from 0xC29B82.
    case 0xC29B84: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/healing_beta.asm:39 CMP #STATUS_2::CRYING
    case 0xC29B85: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/healing_beta.asm:39 CMP #STATUS_2::CRYING
    // Overlapping static entry reached from 0xC29B85.
    case 0xC29B87: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/healing_beta.asm:40 BNE @UNKNOWN3
    case 0xC29B88: {
        Instruction step(cpu, 0xD0, 0x000019u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/actions/healing_beta.asm:41 SEP #PROC_FLAGS::ACCUM8
    case 0xC29B8A: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/actions/healing_beta.asm:42 LDA #0
    case 0xC29B8C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x009D00u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/healing_beta.asm:43 STA __BSS_START__,X
    case 0xC29B8E: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/healing_beta.asm:43 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC29B8C.
    case 0xC29B8F: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/healing_beta.asm:44 REP #PROC_FLAGS::ACCUM8
    case 0xC29B91: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/healing_beta.asm:45 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NAMIDA_OFF
    case 0xC29B93: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000B4u : 0x0033B4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/healing_beta.asm:45 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NAMIDA_OFF
    // Overlapping static entry reached from 0xC29B93.
    case 0xC29B95: {
        Instruction step(cpu, 0x33, 0x000085u, 2u, AddressMode::StackRelativeIndirectIndexedY);
        step.and_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/healing_beta.asm:45 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NAMIDA_OFF
    case 0xC29B96: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/healing_beta.asm:45 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NAMIDA_OFF
    // Overlapping static entry reached from 0xC29B95.
    case 0xC29B97: {
        Instruction step(cpu, 0x0E, 0x00C7A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/healing_beta.asm:45 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NAMIDA_OFF
    case 0xC29B98: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/healing_beta.asm:45 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NAMIDA_OFF
    // Overlapping static entry reached from 0xC29B98.
    case 0xC29B9A: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/healing_beta.asm:45 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NAMIDA_OFF
    case 0xC29B9B: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/healing_beta.asm:45 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NAMIDA_OFF
    case 0xC29B9D: {
        Instruction step(cpu, 0x22, 0xC1D9FFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/healing_beta.asm:46 BRA @UNKNOWN5
    case 0xC29BA1: {
        Instruction step(cpu, 0x80, 0x000030u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/actions/healing_beta.asm:48 LDA CURRENT_TARGET
    case 0xC29BA3: {
        Instruction step(cpu, 0xAD, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/healing_beta.asm:49 CLC
    case 0xC29BA6: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/actions/healing_beta.asm:50 ADC #battler::afflictions + STATUS_GROUP::STRANGENESS
    case 0xC29BA7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/actions/healing_beta.asm:50 ADC #battler::afflictions + STATUS_GROUP::STRANGENESS
    // Overlapping static entry reached from 0xC29BA7.
    case 0xC29BA9: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/healing_beta.asm:51 TAX
    case 0xC29BAA: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/actions/healing_beta.asm:52 LDA __BSS_START__,X
    case 0xC29BAB: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/healing_beta.asm:53 AND #$00FF
    case 0xC29BAE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/actions/healing_beta.asm:53 AND #$00FF
    // Overlapping static entry reached from 0xC29BAE.
    case 0xC29BB0: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/healing_beta.asm:54 CMP #STATUS_3::STRANGE
    case 0xC29BB1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/healing_beta.asm:54 CMP #STATUS_3::STRANGE
    // Overlapping static entry reached from 0xC29BB1.
    case 0xC29BB3: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/healing_beta.asm:55 BNE @UNKNOWN4
    case 0xC29BB4: {
        Instruction step(cpu, 0xD0, 0x000019u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/actions/healing_beta.asm:56 SEP #PROC_FLAGS::ACCUM8
    case 0xC29BB6: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/actions/healing_beta.asm:57 LDA #0
    case 0xC29BB8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x009D00u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/healing_beta.asm:58 STA __BSS_START__,X
    case 0xC29BBA: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/healing_beta.asm:58 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC29BB8.
    case 0xC29BBB: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/healing_beta.asm:59 REP #PROC_FLAGS::ACCUM8
    case 0xC29BBD: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/healing_beta.asm:60 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_HEN_OFF
    case 0xC29BBF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x003400u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/healing_beta.asm:60 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_HEN_OFF
    // Overlapping static entry reached from 0xC29BBF.
    case 0xC29BC1: {
        Instruction step(cpu, 0x34, 0x000085u, 2u, AddressMode::DirectPageIndexedX);
        step.test_bits();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/healing_beta.asm:60 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_HEN_OFF
    case 0xC29BC2: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/healing_beta.asm:60 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_HEN_OFF
    // Overlapping static entry reached from 0xC29BC1.
    case 0xC29BC3: {
        Instruction step(cpu, 0x0E, 0x00C7A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/healing_beta.asm:60 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_HEN_OFF
    case 0xC29BC4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/healing_beta.asm:60 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_HEN_OFF
    // Overlapping static entry reached from 0xC29BC4.
    case 0xC29BC6: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/healing_beta.asm:60 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_HEN_OFF
    case 0xC29BC7: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/healing_beta.asm:60 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_HEN_OFF
    case 0xC29BC9: {
        Instruction step(cpu, 0x22, 0xC1D9FFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/healing_beta.asm:61 BRA @UNKNOWN5
    case 0xC29BCD: {
        Instruction step(cpu, 0x80, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/actions/healing_beta.asm:63 JSL BTLACT_HEALING_A
    case 0xC29BCF: {
        Instruction step(cpu, 0x22, 0xC29A93u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/actions/healing_beta.asm:65 END_C_FUNCTION
    case 0xC29BD3: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/healing_beta.asm:65 END_C_FUNCTION
    case 0xC29BD4: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
