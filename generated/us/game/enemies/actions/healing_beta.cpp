// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/battle/actions/healing_beta.asm
bool resume_battle_actions_healing_beta(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/healing_beta.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC29B7A: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/actions/healing_beta.asm:6 END_STACK_VARS
    case 0xC29B7C: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/actions/healing_beta.asm:6 END_STACK_VARS
    case 0xC29B7D: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/healing_beta.asm:6 END_STACK_VARS
    case 0xC29B7E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EEu : 0x00FFEEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/healing_beta.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC29B7E.
    case 0xC29B80: {
        Instruction step(cpu, 0xFF, 0x72AD5Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/actions/healing_beta.asm:6 END_STACK_VARS
    case 0xC29B81: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/battle/actions/healing_beta.asm:7 LDA CURRENT_TARGET
    case 0xC29B82: {
        Instruction step(cpu, 0xAD, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/healing_beta.asm:7 LDA CURRENT_TARGET
    // Overlapping static entry reached from 0xC29B80.
    case 0xC29B84: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000018u : 0x006918u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/healing_beta.asm:8 CLC
    case 0xC29B85: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/actions/healing_beta.asm:9 ADC #battler::afflictions + STATUS_GROUP::PERSISTENT_EASYHEAL
    case 0xC29B86: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00001Du : 0x00001Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/actions/healing_beta.asm:9 ADC #battler::afflictions + STATUS_GROUP::PERSISTENT_EASYHEAL
    // Overlapping static entry reached from 0xC29B84.
    case 0xC29B87: {
        Instruction step(cpu, 0x1D, 0x00AA00u, 3u, AddressMode::AbsoluteIndexedX);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/actions/healing_beta.asm:9 ADC #battler::afflictions + STATUS_GROUP::PERSISTENT_EASYHEAL
    // Overlapping static entry reached from 0xC29B86.
    case 0xC29B88: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/healing_beta.asm:10 TAX
    case 0xC29B89: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/actions/healing_beta.asm:11 LDA __BSS_START__,X
    case 0xC29B8A: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/healing_beta.asm:12 AND #$00FF
    case 0xC29B8D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/actions/healing_beta.asm:12 AND #$00FF
    // Overlapping static entry reached from 0xC29B8D.
    case 0xC29B8F: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/healing_beta.asm:13 CMP #STATUS_0::POISONED
    case 0xC29B90: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000005u : 0x000005u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/healing_beta.asm:13 CMP #STATUS_0::POISONED
    // Overlapping static entry reached from 0xC29B90.
    case 0xC29B92: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/healing_beta.asm:14 BEQ @UNKNOWN0
    case 0xC29B93: {
        Instruction step(cpu, 0xF0, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/actions/healing_beta.asm:15 CMP #STATUS_0::NAUSEOUS
    case 0xC29B95: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/healing_beta.asm:15 CMP #STATUS_0::NAUSEOUS
    // Overlapping static entry reached from 0xC29B95.
    case 0xC29B97: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/healing_beta.asm:16 BEQ @UNKNOWN1
    case 0xC29B98: {
        Instruction step(cpu, 0xF0, 0x00001Bu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/actions/healing_beta.asm:17 BRA @UNKNOWN2
    case 0xC29B9A: {
        Instruction step(cpu, 0x80, 0x000032u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/actions/healing_beta.asm:19 SEP #PROC_FLAGS::ACCUM8
    case 0xC29B9C: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/actions/healing_beta.asm:20 LDA #0
    case 0xC29B9E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x009D00u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/healing_beta.asm:21 STA __BSS_START__,X
    case 0xC29BA0: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/healing_beta.asm:21 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC29B9E.
    case 0xC29BA1: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/healing_beta.asm:22 REP #PROC_FLAGS::ACCUM8
    case 0xC29BA3: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/healing_beta.asm:23 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_MODOKU_OFF
    case 0xC29BA5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000097u : 0x006E97u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/healing_beta.asm:23 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_MODOKU_OFF
    // Overlapping static entry reached from 0xC29BA5.
    case 0xC29BA7: {
        Instruction step(cpu, 0x6E, 0x000E85u, 3u, AddressMode::Absolute);
        step.rotate_right();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/healing_beta.asm:23 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_MODOKU_OFF
    case 0xC29BA8: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/healing_beta.asm:23 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_MODOKU_OFF
    case 0xC29BAA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000EFu : 0x0000EFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/healing_beta.asm:23 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_MODOKU_OFF
    // Overlapping static entry reached from 0xC29BAA.
    case 0xC29BAC: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/healing_beta.asm:23 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_MODOKU_OFF
    case 0xC29BAD: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/healing_beta.asm:23 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_MODOKU_OFF
    case 0xC29BAF: {
        Instruction step(cpu, 0x22, 0xC1DC1Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/healing_beta.asm:24 BRA @UNKNOWN5
    case 0xC29BB3: {
        Instruction step(cpu, 0x80, 0x000075u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/actions/healing_beta.asm:26 SEP #PROC_FLAGS::ACCUM8
    case 0xC29BB5: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/actions/healing_beta.asm:27 LDA #0
    case 0xC29BB7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x009D00u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/healing_beta.asm:28 STA __BSS_START__,X
    case 0xC29BB9: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/healing_beta.asm:28 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC29BB7.
    case 0xC29BBA: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/healing_beta.asm:29 REP #PROC_FLAGS::ACCUM8
    case 0xC29BBC: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/healing_beta.asm:30 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIMOCHI_OFF
    case 0xC29BBE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000081u : 0x006E81u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/healing_beta.asm:30 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIMOCHI_OFF
    // Overlapping static entry reached from 0xC29BBE.
    case 0xC29BC0: {
        Instruction step(cpu, 0x6E, 0x000E85u, 3u, AddressMode::Absolute);
        step.rotate_right();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/healing_beta.asm:30 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIMOCHI_OFF
    case 0xC29BC1: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/healing_beta.asm:30 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIMOCHI_OFF
    case 0xC29BC3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000EFu : 0x0000EFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/healing_beta.asm:30 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIMOCHI_OFF
    // Overlapping static entry reached from 0xC29BC3.
    case 0xC29BC5: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/healing_beta.asm:30 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIMOCHI_OFF
    case 0xC29BC6: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/healing_beta.asm:30 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIMOCHI_OFF
    case 0xC29BC8: {
        Instruction step(cpu, 0x22, 0xC1DC1Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/healing_beta.asm:31 BRA @UNKNOWN5
    case 0xC29BCC: {
        Instruction step(cpu, 0x80, 0x00005Cu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/actions/healing_beta.asm:33 LDA CURRENT_TARGET
    case 0xC29BCE: {
        Instruction step(cpu, 0xAD, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/healing_beta.asm:34 CLC
    case 0xC29BD1: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/actions/healing_beta.asm:35 ADC #battler::afflictions + STATUS_GROUP::TEMPORARY
    case 0xC29BD2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00001Fu : 0x00001Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/actions/healing_beta.asm:35 ADC #battler::afflictions + STATUS_GROUP::TEMPORARY
    // Overlapping static entry reached from 0xC29BD2.
    case 0xC29BD4: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/healing_beta.asm:36 TAX
    case 0xC29BD5: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/actions/healing_beta.asm:37 LDA __BSS_START__,X
    case 0xC29BD6: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/healing_beta.asm:38 AND #$00FF
    case 0xC29BD9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/actions/healing_beta.asm:38 AND #$00FF
    // Overlapping static entry reached from 0xC29BD9.
    case 0xC29BDB: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/healing_beta.asm:39 CMP #STATUS_2::CRYING
    case 0xC29BDC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/healing_beta.asm:39 CMP #STATUS_2::CRYING
    // Overlapping static entry reached from 0xC29BDC.
    case 0xC29BDE: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/healing_beta.asm:40 BNE @UNKNOWN3
    case 0xC29BDF: {
        Instruction step(cpu, 0xD0, 0x000019u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/actions/healing_beta.asm:41 SEP #PROC_FLAGS::ACCUM8
    case 0xC29BE1: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/actions/healing_beta.asm:42 LDA #0
    case 0xC29BE3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x009D00u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/healing_beta.asm:43 STA __BSS_START__,X
    case 0xC29BE5: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/healing_beta.asm:43 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC29BE3.
    case 0xC29BE6: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/healing_beta.asm:44 REP #PROC_FLAGS::ACCUM8
    case 0xC29BE8: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/healing_beta.asm:45 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NAMIDA_OFF
    case 0xC29BEA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D1u : 0x006ED1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/healing_beta.asm:45 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NAMIDA_OFF
    // Overlapping static entry reached from 0xC29BEA.
    case 0xC29BEC: {
        Instruction step(cpu, 0x6E, 0x000E85u, 3u, AddressMode::Absolute);
        step.rotate_right();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/healing_beta.asm:45 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NAMIDA_OFF
    case 0xC29BED: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/healing_beta.asm:45 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NAMIDA_OFF
    case 0xC29BEF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000EFu : 0x0000EFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/healing_beta.asm:45 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NAMIDA_OFF
    // Overlapping static entry reached from 0xC29BEF.
    case 0xC29BF1: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/healing_beta.asm:45 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NAMIDA_OFF
    case 0xC29BF2: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/healing_beta.asm:45 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NAMIDA_OFF
    case 0xC29BF4: {
        Instruction step(cpu, 0x22, 0xC1DC1Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/healing_beta.asm:46 BRA @UNKNOWN5
    case 0xC29BF8: {
        Instruction step(cpu, 0x80, 0x000030u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/actions/healing_beta.asm:48 LDA CURRENT_TARGET
    case 0xC29BFA: {
        Instruction step(cpu, 0xAD, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/healing_beta.asm:49 CLC
    case 0xC29BFD: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/actions/healing_beta.asm:50 ADC #battler::afflictions + STATUS_GROUP::STRANGENESS
    case 0xC29BFE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/actions/healing_beta.asm:50 ADC #battler::afflictions + STATUS_GROUP::STRANGENESS
    // Overlapping static entry reached from 0xC29BFE.
    case 0xC29C00: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/healing_beta.asm:51 TAX
    case 0xC29C01: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/actions/healing_beta.asm:52 LDA __BSS_START__,X
    case 0xC29C02: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/healing_beta.asm:53 AND #$00FF
    case 0xC29C05: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/actions/healing_beta.asm:53 AND #$00FF
    // Overlapping static entry reached from 0xC29C05.
    case 0xC29C07: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/healing_beta.asm:54 CMP #STATUS_3::STRANGE
    case 0xC29C08: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/healing_beta.asm:54 CMP #STATUS_3::STRANGE
    // Overlapping static entry reached from 0xC29C08.
    case 0xC29C0A: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/healing_beta.asm:55 BNE @UNKNOWN4
    case 0xC29C0B: {
        Instruction step(cpu, 0xD0, 0x000019u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/actions/healing_beta.asm:56 SEP #PROC_FLAGS::ACCUM8
    case 0xC29C0D: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/actions/healing_beta.asm:57 LDA #0
    case 0xC29C0F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x009D00u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/healing_beta.asm:58 STA __BSS_START__,X
    case 0xC29C11: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/healing_beta.asm:58 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC29C0F.
    case 0xC29C12: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/healing_beta.asm:59 REP #PROC_FLAGS::ACCUM8
    case 0xC29C14: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/healing_beta.asm:60 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_HEN_OFF
    case 0xC29C16: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00001Eu : 0x006F1Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/healing_beta.asm:60 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_HEN_OFF
    // Overlapping static entry reached from 0xC29C16.
    case 0xC29C18: {
        Instruction step(cpu, 0x6F, 0xA90E85u, 4u, AddressMode::Long);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/healing_beta.asm:60 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_HEN_OFF
    case 0xC29C19: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/healing_beta.asm:60 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_HEN_OFF
    case 0xC29C1B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000EFu : 0x0000EFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/healing_beta.asm:60 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_HEN_OFF
    // Overlapping static entry reached from 0xC29C18.
    case 0xC29C1C: {
        Instruction step(cpu, 0xEF, 0x108500u, 4u, AddressMode::Long);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/healing_beta.asm:60 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_HEN_OFF
    // Overlapping static entry reached from 0xC29C1B.
    case 0xC29C1D: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/healing_beta.asm:60 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_HEN_OFF
    case 0xC29C1E: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/healing_beta.asm:60 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_HEN_OFF
    case 0xC29C20: {
        Instruction step(cpu, 0x22, 0xC1DC1Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/healing_beta.asm:61 BRA @UNKNOWN5
    case 0xC29C24: {
        Instruction step(cpu, 0x80, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/actions/healing_beta.asm:63 JSL BTLACT_HEALING_A
    case 0xC29C26: {
        Instruction step(cpu, 0x22, 0xC29AEAu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/actions/healing_beta.asm:65 END_C_FUNCTION
    case 0xC29C2A: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/healing_beta.asm:65 END_C_FUNCTION
    case 0xC29C2B: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
