// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/text/hide_hppp_windows.asm
bool resume_text_hide_hppp_windows(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/hide_hppp_windows.asm:3 BEGIN_C_FUNCTION
    case 0xC10E72: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/hide_hppp_windows.asm:6 END_STACK_VARS
    case 0xC10E74: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/hide_hppp_windows.asm:6 END_STACK_VARS
    case 0xC10E75: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/hide_hppp_windows.asm:6 END_STACK_VARS
    case 0xC10E76: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000F0u : 0x00FFF0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/hide_hppp_windows.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC10E76.
    case 0xC10E78: {
        Instruction step(cpu, 0xFF, 0xDB205Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/hide_hppp_windows.asm:6 END_STACK_VARS
    case 0xC10E79: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/text/hide_hppp_windows.asm:7 JSR UNKNOWN_C3E6F8
    case 0xC10E7A: {
        Instruction step(cpu, 0x20, 0x000BDBu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/hide_hppp_windows.asm:7 JSR UNKNOWN_C3E6F8
    // Overlapping static entry reached from 0xC10E78.
    case 0xC10E7C: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // src/text/hide_hppp_windows.asm:8 SEP #PROC_FLAGS::ACCUM8
    case 0xC10E7D: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/hide_hppp_windows.asm:9 STZ RENDER_HPPP_WINDOWS
    case 0xC10E7F: {
        Instruction step(cpu, 0x9C, 0x008D07u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/text/hide_hppp_windows.asm:10 REP #PROC_FLAGS::ACCUM8
    case 0xC10E82: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/hide_hppp_windows.asm:11 LDA BATTLE_MODE_FLAG
    case 0xC10E84: {
        Instruction step(cpu, 0xAD, 0x00993Bu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hide_hppp_windows.asm:12 BNE @UNKNOWN2
    case 0xC10E87: {
        Instruction step(cpu, 0xD0, 0x00004Bu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/hide_hppp_windows.asm:13 LDY #0
    case 0xC10E89: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/hide_hppp_windows.asm:13 LDY #0
    // Overlapping static entry reached from 0xC10E89.
    case 0xC10E8B: {
        Instruction step(cpu, 0x00, 0x000084u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/hide_hppp_windows.asm:14 STY @LOCAL00
    case 0xC10E8C: {
        Instruction step(cpu, 0x84, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/hide_hppp_windows.asm:15 BRA @UNKNOWN1
    case 0xC10E8E: {
        Instruction step(cpu, 0x80, 0x000037u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/hide_hppp_windows.asm:17 TYA
    case 0xC10E90: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/text/hide_hppp_windows.asm:18 JSL UNDRAW_HP_PP_WINDOW
    case 0xC10E91: {
        Instruction step(cpu, 0x22, 0xC20782u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/hide_hppp_windows.asm:19 LDY @LOCAL00
    case 0xC10E95: {
        Instruction step(cpu, 0xA4, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/hide_hppp_windows.asm:21 TYA
    case 0xC10E97: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/text/hide_hppp_windows.asm:22 CLC
    case 0xC10E98: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/hide_hppp_windows.asm:23 ADC #.LOWORD(GAME_STATE)
    case 0xC10E99: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000A9u : 0x009AA9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/hide_hppp_windows.asm:23 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC10E99.
    case 0xC10E9B: {
        Instruction step(cpu, 0x9A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_stack();
        return step.finish();
    }
    // src/text/hide_hppp_windows.asm:24 TAX
    case 0xC10E9C: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/hide_hppp_windows.asm:25 LDA a:game_state::party_members,X
    case 0xC10E9D: {
        Instruction step(cpu, 0xBD, 0x000077u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hide_hppp_windows.asm:29 AND #$00FF
    case 0xC10EA0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/hide_hppp_windows.asm:29 AND #$00FF
    // Overlapping static entry reached from 0xC10EA0.
    case 0xC10EA2: {
        Instruction step(cpu, 0x00, 0x00003Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/hide_hppp_windows.asm:30 DEC
    case 0xC10EA3: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/text/hide_hppp_windows.asm:31 LDY #.SIZEOF(char_struct)
    case 0xC10EA4: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Eu : 0x00005Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/hide_hppp_windows.asm:31 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC10EA4.
    case 0xC10EA6: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/hide_hppp_windows.asm:32 JSL MULT168
    case 0xC10EA7: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/hide_hppp_windows.asm:33 CLC
    case 0xC10EAB: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/hide_hppp_windows.asm:34 ADC #.LOWORD(PARTY_CHARACTERS)
    case 0xC10EAC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00007Fu : 0x009C7Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/hide_hppp_windows.asm:34 ADC #.LOWORD(PARTY_CHARACTERS)
    // Overlapping static entry reached from 0xC10EAC.
    case 0xC10EAE: {
        Instruction step(cpu, 0x9C, 0x00BDAAu, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/text/hide_hppp_windows.asm:35 TAX
    case 0xC10EAF: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/hide_hppp_windows.asm:36 LDA __BSS_START__ + char_struct::current_hp_target,X
    case 0xC10EB0: {
        Instruction step(cpu, 0xBD, 0x000046u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hide_hppp_windows.asm:36 LDA __BSS_START__ + char_struct::current_hp_target,X
    // Overlapping static entry reached from 0xC10EAE.
    case 0xC10EB1: {
        Instruction step(cpu, 0x46, 0x000000u, 2u, AddressMode::DirectPage);
        step.shift_right();
        return step.finish();
    }
    // src/text/hide_hppp_windows.asm:37 STA __BSS_START__ + char_struct::current_hp,X
    case 0xC10EB3: {
        Instruction step(cpu, 0x9D, 0x000044u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hide_hppp_windows.asm:38 LDA __BSS_START__ + char_struct::current_pp_target,X
    case 0xC10EB6: {
        Instruction step(cpu, 0xBD, 0x00004Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hide_hppp_windows.asm:39 STA __BSS_START__ + char_struct::current_pp,X
    case 0xC10EB9: {
        Instruction step(cpu, 0x9D, 0x00004Au, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hide_hppp_windows.asm:40 STZ __BSS_START__ + char_struct::current_pp_fraction,X
    case 0xC10EBC: {
        Instruction step(cpu, 0x9E, 0x000048u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/text/hide_hppp_windows.asm:41 STZ __BSS_START__ + char_struct::current_hp_fraction,X
    case 0xC10EBF: {
        Instruction step(cpu, 0x9E, 0x000042u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/text/hide_hppp_windows.asm:42 LDY @LOCAL00
    case 0xC10EC2: {
        Instruction step(cpu, 0xA4, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/hide_hppp_windows.asm:43 INY
    case 0xC10EC4: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/text/hide_hppp_windows.asm:44 STY @LOCAL00
    case 0xC10EC5: {
        Instruction step(cpu, 0x84, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/hide_hppp_windows.asm:46 LDA GAME_STATE+game_state::player_controlled_party_count
    case 0xC10EC7: {
        Instruction step(cpu, 0xAD, 0x009B55u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hide_hppp_windows.asm:47 AND #$00FF
    case 0xC10ECA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/hide_hppp_windows.asm:47 AND #$00FF
    // Overlapping static entry reached from 0xC10ECA.
    case 0xC10ECC: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/hide_hppp_windows.asm:48 STA @VIRTUAL02
    case 0xC10ECD: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hide_hppp_windows.asm:49 TYA
    case 0xC10ECF: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/text/hide_hppp_windows.asm:50 CMP @VIRTUAL02
    case 0xC10ED0: {
        Instruction step(cpu, 0xC5, 0x000002u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/hide_hppp_windows.asm:51 BNE @UNKNOWN0
    case 0xC10ED2: {
        Instruction step(cpu, 0xD0, 0x0000BCu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/hide_hppp_windows.asm:53 SEP #PROC_FLAGS::ACCUM8
    case 0xC10ED4: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/hide_hppp_windows.asm:54 LDA #1
    case 0xC10ED6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x008D01u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hide_hppp_windows.asm:55 STA REDRAW_ALL_WINDOWS
    case 0xC10ED8: {
        Instruction step(cpu, 0x8D, 0x00991Bu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hide_hppp_windows.asm:55 STA REDRAW_ALL_WINDOWS
    // Overlapping static entry reached from 0xC10ED6.
    case 0xC10ED9: {
        Instruction step(cpu, 0x1B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_stack();
        return step.finish();
    }
    // src/text/hide_hppp_windows.asm:55 STA REDRAW_ALL_WINDOWS
    // Overlapping static entry reached from 0xC10ED9.
    case 0xC10EDA: {
        Instruction step(cpu, 0x99, 0x0020C2u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hide_hppp_windows.asm:56 REP #PROC_FLAGS::ACCUM8
    case 0xC10EDB: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/hide_hppp_windows.asm:57 END_C_FUNCTION
    case 0xC10EDD: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/text/hide_hppp_windows.asm:57 END_C_FUNCTION
    case 0xC10EDE: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
