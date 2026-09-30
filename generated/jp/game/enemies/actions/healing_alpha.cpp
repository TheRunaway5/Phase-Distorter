// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/battle/actions/healing_alpha.asm
bool resume_battle_actions_healing_alpha(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/healing_alpha.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC29A93: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/actions/healing_alpha.asm:6 END_STACK_VARS
    case 0xC29A95: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/actions/healing_alpha.asm:6 END_STACK_VARS
    case 0xC29A96: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/healing_alpha.asm:6 END_STACK_VARS
    case 0xC29A97: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EEu : 0x00FFEEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/healing_alpha.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC29A97.
    case 0xC29A99: {
        Instruction step(cpu, 0xFF, 0x74AD5Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/actions/healing_alpha.asm:6 END_STACK_VARS
    case 0xC29A9A: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/battle/actions/healing_alpha.asm:7 LDA CURRENT_TARGET
    case 0xC29A9B: {
        Instruction step(cpu, 0xAD, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/healing_alpha.asm:7 LDA CURRENT_TARGET
    // Overlapping static entry reached from 0xC29A99.
    case 0xC29A9D: {
        Instruction step(cpu, 0xAB, 0x000000u, 1u, AddressMode::Implied);
        step.pull_data_bank();
        return step.finish();
    }
    // src/battle/actions/healing_alpha.asm:8 CLC
    case 0xC29A9E: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/actions/healing_alpha.asm:9 ADC #battler::afflictions + STATUS_GROUP::PERSISTENT_EASYHEAL
    case 0xC29A9F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00001Du : 0x00001Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/actions/healing_alpha.asm:9 ADC #battler::afflictions + STATUS_GROUP::PERSISTENT_EASYHEAL
    // Overlapping static entry reached from 0xC29A9F.
    case 0xC29AA1: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/healing_alpha.asm:10 TAX
    case 0xC29AA2: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/actions/healing_alpha.asm:11 LDA __BSS_START__,X
    case 0xC29AA3: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/healing_alpha.asm:12 AND #$00FF
    case 0xC29AA6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/actions/healing_alpha.asm:12 AND #$00FF
    // Overlapping static entry reached from 0xC29AA6.
    case 0xC29AA8: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/healing_alpha.asm:13 CMP #STATUS_0::COLD
    case 0xC29AA9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000007u : 0x000007u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/healing_alpha.asm:13 CMP #STATUS_0::COLD
    // Overlapping static entry reached from 0xC29AA9.
    case 0xC29AAB: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/healing_alpha.asm:14 BEQ @UNKNOWN0
    case 0xC29AAC: {
        Instruction step(cpu, 0xF0, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/actions/healing_alpha.asm:15 CMP #STATUS_0::SUNSTROKE
    case 0xC29AAE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/healing_alpha.asm:15 CMP #STATUS_0::SUNSTROKE
    // Overlapping static entry reached from 0xC29AAE.
    case 0xC29AB0: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/healing_alpha.asm:16 BEQ @UNKNOWN1
    case 0xC29AB1: {
        Instruction step(cpu, 0xF0, 0x00001Bu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/actions/healing_alpha.asm:17 BRA @UNKNOWN2
    case 0xC29AB3: {
        Instruction step(cpu, 0x80, 0x000032u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/actions/healing_alpha.asm:19 SEP #PROC_FLAGS::ACCUM8
    case 0xC29AB5: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/actions/healing_alpha.asm:20 LDA #0
    case 0xC29AB7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x009D00u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/healing_alpha.asm:21 STA __BSS_START__,X
    case 0xC29AB9: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/healing_alpha.asm:21 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC29AB7.
    case 0xC29ABA: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/healing_alpha.asm:22 REP #PROC_FLAGS::ACCUM8
    case 0xC29ABC: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/healing_alpha.asm:23 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KAZE_OFF
    case 0xC29ABE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00009Fu : 0x00339Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/healing_alpha.asm:23 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KAZE_OFF
    // Overlapping static entry reached from 0xC29ABE.
    case 0xC29AC0: {
        Instruction step(cpu, 0x33, 0x000085u, 2u, AddressMode::StackRelativeIndirectIndexedY);
        step.and_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/healing_alpha.asm:23 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KAZE_OFF
    case 0xC29AC1: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/healing_alpha.asm:23 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KAZE_OFF
    // Overlapping static entry reached from 0xC29AC0.
    case 0xC29AC2: {
        Instruction step(cpu, 0x0E, 0x00C7A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/healing_alpha.asm:23 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KAZE_OFF
    case 0xC29AC3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/healing_alpha.asm:23 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KAZE_OFF
    // Overlapping static entry reached from 0xC29AC3.
    case 0xC29AC5: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/healing_alpha.asm:23 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KAZE_OFF
    case 0xC29AC6: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/healing_alpha.asm:23 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KAZE_OFF
    case 0xC29AC8: {
        Instruction step(cpu, 0x22, 0xC1D9FFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/healing_alpha.asm:24 BRA @UNKNOWN4
    case 0xC29ACC: {
        Instruction step(cpu, 0x80, 0x000053u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/actions/healing_alpha.asm:26 SEP #PROC_FLAGS::ACCUM8
    case 0xC29ACE: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/actions/healing_alpha.asm:27 LDA #0
    case 0xC29AD0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x009D00u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/healing_alpha.asm:28 STA __BSS_START__,X
    case 0xC29AD2: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/healing_alpha.asm:28 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC29AD0.
    case 0xC29AD3: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/healing_alpha.asm:29 REP #PROC_FLAGS::ACCUM8
    case 0xC29AD5: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/healing_alpha.asm:30 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NISSYA_OFF
    case 0xC29AD7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000014u : 0x003414u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/healing_alpha.asm:30 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NISSYA_OFF
    // Overlapping static entry reached from 0xC29AD7.
    case 0xC29AD9: {
        Instruction step(cpu, 0x34, 0x000085u, 2u, AddressMode::DirectPageIndexedX);
        step.test_bits();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/healing_alpha.asm:30 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NISSYA_OFF
    case 0xC29ADA: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/healing_alpha.asm:30 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NISSYA_OFF
    // Overlapping static entry reached from 0xC29AD9.
    case 0xC29ADB: {
        Instruction step(cpu, 0x0E, 0x00C7A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/healing_alpha.asm:30 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NISSYA_OFF
    case 0xC29ADC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/healing_alpha.asm:30 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NISSYA_OFF
    // Overlapping static entry reached from 0xC29ADC.
    case 0xC29ADE: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/healing_alpha.asm:30 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NISSYA_OFF
    case 0xC29ADF: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/healing_alpha.asm:30 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NISSYA_OFF
    case 0xC29AE1: {
        Instruction step(cpu, 0x22, 0xC1D9FFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/healing_alpha.asm:31 BRA @UNKNOWN4
    case 0xC29AE5: {
        Instruction step(cpu, 0x80, 0x00003Au, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/actions/healing_alpha.asm:33 LDA CURRENT_TARGET
    case 0xC29AE7: {
        Instruction step(cpu, 0xAD, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/healing_alpha.asm:34 CLC
    case 0xC29AEA: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/actions/healing_alpha.asm:35 ADC #battler::afflictions + STATUS_GROUP::TEMPORARY
    case 0xC29AEB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00001Fu : 0x00001Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/actions/healing_alpha.asm:35 ADC #battler::afflictions + STATUS_GROUP::TEMPORARY
    // Overlapping static entry reached from 0xC29AEB.
    case 0xC29AED: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/healing_alpha.asm:36 TAX
    case 0xC29AEE: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/actions/healing_alpha.asm:37 LDA __BSS_START__,X
    case 0xC29AEF: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/healing_alpha.asm:38 AND #$00FF
    case 0xC29AF2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/actions/healing_alpha.asm:38 AND #$00FF
    // Overlapping static entry reached from 0xC29AF2.
    case 0xC29AF4: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/healing_alpha.asm:39 CMP #STATUS_2::ASLEEP
    case 0xC29AF5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/healing_alpha.asm:39 CMP #STATUS_2::ASLEEP
    // Overlapping static entry reached from 0xC29AF5.
    case 0xC29AF7: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/healing_alpha.asm:40 BNE @UNKNOWN3
    case 0xC29AF8: {
        Instruction step(cpu, 0xD0, 0x000019u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/actions/healing_alpha.asm:41 SEP #PROC_FLAGS::ACCUM8
    case 0xC29AFA: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/actions/healing_alpha.asm:42 LDA #0
    case 0xC29AFC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x009D00u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/healing_alpha.asm:43 STA __BSS_START__,X
    case 0xC29AFE: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/healing_alpha.asm:43 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC29AFC.
    case 0xC29AFF: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/healing_alpha.asm:44 REP #PROC_FLAGS::ACCUM8
    case 0xC29B01: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/healing_alpha.asm:45 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NEMURI_OFF
    case 0xC29B03: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00002Eu : 0x00342Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/healing_alpha.asm:45 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NEMURI_OFF
    // Overlapping static entry reached from 0xC29B03.
    case 0xC29B05: {
        Instruction step(cpu, 0x34, 0x000085u, 2u, AddressMode::DirectPageIndexedX);
        step.test_bits();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/healing_alpha.asm:45 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NEMURI_OFF
    case 0xC29B06: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/healing_alpha.asm:45 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NEMURI_OFF
    // Overlapping static entry reached from 0xC29B05.
    case 0xC29B07: {
        Instruction step(cpu, 0x0E, 0x00C7A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/healing_alpha.asm:45 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NEMURI_OFF
    case 0xC29B08: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/healing_alpha.asm:45 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NEMURI_OFF
    // Overlapping static entry reached from 0xC29B08.
    case 0xC29B0A: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/healing_alpha.asm:45 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NEMURI_OFF
    case 0xC29B0B: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/healing_alpha.asm:45 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NEMURI_OFF
    case 0xC29B0D: {
        Instruction step(cpu, 0x22, 0xC1D9FFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/healing_alpha.asm:46 BRA @UNKNOWN4
    case 0xC29B11: {
        Instruction step(cpu, 0x80, 0x00000Eu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/healing_alpha.asm:48 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_HEAL_NG
    case 0xC29B13: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000F3u : 0x002DF3u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/healing_alpha.asm:48 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_HEAL_NG
    // Overlapping static entry reached from 0xC29B13.
    case 0xC29B15: {
        Instruction step(cpu, 0x2D, 0x000E85u, 3u, AddressMode::Absolute);
        step.and_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/healing_alpha.asm:48 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_HEAL_NG
    case 0xC29B16: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/healing_alpha.asm:48 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_HEAL_NG
    case 0xC29B18: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/healing_alpha.asm:48 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_HEAL_NG
    // Overlapping static entry reached from 0xC29B18.
    case 0xC29B1A: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/healing_alpha.asm:48 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_HEAL_NG
    case 0xC29B1B: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/healing_alpha.asm:48 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_HEAL_NG
    case 0xC29B1D: {
        Instruction step(cpu, 0x22, 0xC1D9FFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/actions/healing_alpha.asm:50 END_C_FUNCTION
    case 0xC29B21: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/healing_alpha.asm:50 END_C_FUNCTION
    case 0xC29B22: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
