// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/battle/actions/healing_gamma.asm
bool resume_battle_actions_healing_gamma(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/healing_gamma.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC29BD5: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/actions/healing_gamma.asm:6 END_STACK_VARS
    case 0xC29BD7: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/actions/healing_gamma.asm:6 END_STACK_VARS
    case 0xC29BD8: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/healing_gamma.asm:6 END_STACK_VARS
    case 0xC29BD9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EEu : 0x00FFEEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/healing_gamma.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC29BD9.
    case 0xC29BDB: {
        Instruction step(cpu, 0xFF, 0x74AD5Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/actions/healing_gamma.asm:6 END_STACK_VARS
    case 0xC29BDC: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/battle/actions/healing_gamma.asm:7 LDA CURRENT_TARGET
    case 0xC29BDD: {
        Instruction step(cpu, 0xAD, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/healing_gamma.asm:7 LDA CURRENT_TARGET
    // Overlapping static entry reached from 0xC29BDB.
    case 0xC29BDF: {
        Instruction step(cpu, 0xAB, 0x000000u, 1u, AddressMode::Implied);
        step.pull_data_bank();
        return step.finish();
    }
    // src/battle/actions/healing_gamma.asm:8 CLC
    case 0xC29BE0: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/actions/healing_gamma.asm:9 ADC #battler::afflictions + STATUS_GROUP::PERSISTENT_EASYHEAL
    case 0xC29BE1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00001Du : 0x00001Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/actions/healing_gamma.asm:9 ADC #battler::afflictions + STATUS_GROUP::PERSISTENT_EASYHEAL
    // Overlapping static entry reached from 0xC29BE1.
    case 0xC29BE3: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/healing_gamma.asm:10 TAX
    case 0xC29BE4: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/actions/healing_gamma.asm:11 LDA __BSS_START__,X
    case 0xC29BE5: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/healing_gamma.asm:12 AND #$00FF
    case 0xC29BE8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/actions/healing_gamma.asm:12 AND #$00FF
    // Overlapping static entry reached from 0xC29BE8.
    case 0xC29BEA: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/healing_gamma.asm:13 CMP #STATUS_0::PARALYZED
    case 0xC29BEB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/healing_gamma.asm:13 CMP #STATUS_0::PARALYZED
    // Overlapping static entry reached from 0xC29BEB.
    case 0xC29BED: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/healing_gamma.asm:14 BEQ @UNKNOWN0
    case 0xC29BEE: {
        Instruction step(cpu, 0xF0, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/actions/healing_gamma.asm:15 CMP #STATUS_0::DIAMONDIZED
    case 0xC29BF0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/healing_gamma.asm:15 CMP #STATUS_0::DIAMONDIZED
    // Overlapping static entry reached from 0xC29BF0.
    case 0xC29BF2: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/healing_gamma.asm:16 BEQ @UNKNOWN1
    case 0xC29BF3: {
        Instruction step(cpu, 0xF0, 0x000020u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/actions/healing_gamma.asm:17 CMP #STATUS_0::UNCONSCIOUS
    case 0xC29BF5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/healing_gamma.asm:17 CMP #STATUS_0::UNCONSCIOUS
    // Overlapping static entry reached from 0xC29BF5.
    case 0xC29BF7: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/healing_gamma.asm:18 BEQ @UNKNOWN2
    case 0xC29BF8: {
        Instruction step(cpu, 0xF0, 0x000034u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/actions/healing_gamma.asm:19 BRA @UNKNOWN4
    case 0xC29BFA: {
        Instruction step(cpu, 0x80, 0x00005Fu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/actions/healing_gamma.asm:21 SEP #PROC_FLAGS::ACCUM8
    case 0xC29BFC: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/actions/healing_gamma.asm:22 LDA #0
    case 0xC29BFE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x009D00u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/healing_gamma.asm:23 STA __BSS_START__,X
    case 0xC29C00: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/healing_gamma.asm:23 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC29BFE.
    case 0xC29C01: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/healing_gamma.asm:24 REP #PROC_FLAGS::ACCUM8
    case 0xC29C03: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/healing_gamma.asm:25 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIBIRE_OFF
    case 0xC29C05: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000056u : 0x003356u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/healing_gamma.asm:25 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIBIRE_OFF
    // Overlapping static entry reached from 0xC29C05.
    case 0xC29C07: {
        Instruction step(cpu, 0x33, 0x000085u, 2u, AddressMode::StackRelativeIndirectIndexedY);
        step.and_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/healing_gamma.asm:25 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIBIRE_OFF
    case 0xC29C08: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/healing_gamma.asm:25 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIBIRE_OFF
    // Overlapping static entry reached from 0xC29C07.
    case 0xC29C09: {
        Instruction step(cpu, 0x0E, 0x00C7A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/healing_gamma.asm:25 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIBIRE_OFF
    case 0xC29C0A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/healing_gamma.asm:25 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIBIRE_OFF
    // Overlapping static entry reached from 0xC29C0A.
    case 0xC29C0C: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/healing_gamma.asm:25 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIBIRE_OFF
    case 0xC29C0D: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/healing_gamma.asm:25 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIBIRE_OFF
    case 0xC29C0F: {
        Instruction step(cpu, 0x22, 0xC1D9FFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/healing_gamma.asm:26 BRA @UNKNOWN5
    case 0xC29C13: {
        Instruction step(cpu, 0x80, 0x00004Au, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/actions/healing_gamma.asm:28 SEP #PROC_FLAGS::ACCUM8
    case 0xC29C15: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/actions/healing_gamma.asm:29 LDA #0
    case 0xC29C17: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x009D00u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/healing_gamma.asm:30 STA __BSS_START__,X
    case 0xC29C19: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/healing_gamma.asm:30 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC29C17.
    case 0xC29C1A: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/healing_gamma.asm:31 REP #PROC_FLAGS::ACCUM8
    case 0xC29C1C: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/healing_gamma.asm:32 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_DAIYA_OFF
    case 0xC29C1E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000039u : 0x003339u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/healing_gamma.asm:32 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_DAIYA_OFF
    // Overlapping static entry reached from 0xC29C1E.
    case 0xC29C20: {
        Instruction step(cpu, 0x33, 0x000085u, 2u, AddressMode::StackRelativeIndirectIndexedY);
        step.and_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/healing_gamma.asm:32 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_DAIYA_OFF
    case 0xC29C21: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/healing_gamma.asm:32 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_DAIYA_OFF
    // Overlapping static entry reached from 0xC29C20.
    case 0xC29C22: {
        Instruction step(cpu, 0x0E, 0x00C7A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/healing_gamma.asm:32 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_DAIYA_OFF
    case 0xC29C23: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/healing_gamma.asm:32 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_DAIYA_OFF
    // Overlapping static entry reached from 0xC29C23.
    case 0xC29C25: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/healing_gamma.asm:32 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_DAIYA_OFF
    case 0xC29C26: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/healing_gamma.asm:32 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_DAIYA_OFF
    case 0xC29C28: {
        Instruction step(cpu, 0x22, 0xC1D9FFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/healing_gamma.asm:33 BRA @UNKNOWN5
    case 0xC29C2C: {
        Instruction step(cpu, 0x80, 0x000031u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/actions/healing_gamma.asm:35 SEP #PROC_FLAGS::ACCUM8
    case 0xC29C2E: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/actions/healing_gamma.asm:36 LDA #192
    case 0xC29C30: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C0u : 0x0020C0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/healing_gamma.asm:37 JSR SUCCESS_255
    case 0xC29C32: {
        Instruction step(cpu, 0x20, 0x006AF7u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/healing_gamma.asm:37 JSR SUCCESS_255
    // Overlapping static entry reached from 0xC29C30.
    case 0xC29C33: {
        Instruction step(cpu, 0xF7, 0x00006Au, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/actions/healing_gamma.asm:39 CMP #0
    case 0xC29C35: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/healing_gamma.asm:39 CMP #0
    // Overlapping static entry reached from 0xC29C35.
    case 0xC29C37: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/healing_gamma.asm:40 BEQ @UNKNOWN3
    case 0xC29C38: {
        Instruction step(cpu, 0xF0, 0x000011u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/actions/healing_gamma.asm:41 LDX CURRENT_TARGET
    case 0xC29C3A: {
        Instruction step(cpu, 0xAE, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/healing_gamma.asm:42 LDA a:battler::hp_max,X
    case 0xC29C3D: {
        Instruction step(cpu, 0xBD, 0x000015u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/healing_gamma.asm:43 LSR
    case 0xC29C40: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/battle/actions/healing_gamma.asm:44 LSR
    case 0xC29C41: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/battle/actions/healing_gamma.asm:45 TAX
    case 0xC29C42: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/actions/healing_gamma.asm:46 LDA CURRENT_TARGET
    case 0xC29C43: {
        Instruction step(cpu, 0xAD, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/healing_gamma.asm:47 JSR REVIVE_TARGET
    case 0xC29C46: {
        Instruction step(cpu, 0x20, 0x0072DAu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/healing_gamma.asm:48 BRA @UNKNOWN5
    case 0xC29C49: {
        Instruction step(cpu, 0x80, 0x000014u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/healing_gamma.asm:51 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_IKIKAERI_F
    case 0xC29C4B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000075u : 0x003475u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/healing_gamma.asm:51 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_IKIKAERI_F
    // Overlapping static entry reached from 0xC29C4B.
    case 0xC29C4D: {
        Instruction step(cpu, 0x34, 0x000085u, 2u, AddressMode::DirectPageIndexedX);
        step.test_bits();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/healing_gamma.asm:51 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_IKIKAERI_F
    case 0xC29C4E: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/healing_gamma.asm:51 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_IKIKAERI_F
    // Overlapping static entry reached from 0xC29C4D.
    case 0xC29C4F: {
        Instruction step(cpu, 0x0E, 0x00C7A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/healing_gamma.asm:51 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_IKIKAERI_F
    case 0xC29C50: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/healing_gamma.asm:51 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_IKIKAERI_F
    // Overlapping static entry reached from 0xC29C50.
    case 0xC29C52: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/healing_gamma.asm:51 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_IKIKAERI_F
    case 0xC29C53: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/healing_gamma.asm:51 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_IKIKAERI_F
    case 0xC29C55: {
        Instruction step(cpu, 0x22, 0xC1D9FFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/healing_gamma.asm:52 BRA @UNKNOWN5
    case 0xC29C59: {
        Instruction step(cpu, 0x80, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/actions/healing_gamma.asm:54 JSL BTLACT_HEALING_B
    case 0xC29C5B: {
        Instruction step(cpu, 0x22, 0xC29B23u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/actions/healing_gamma.asm:56 END_C_FUNCTION
    case 0xC29C5F: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/healing_gamma.asm:56 END_C_FUNCTION
    case 0xC29C60: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
