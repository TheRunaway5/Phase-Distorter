// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/overworld/show_hp_alert.asm
bool resume_overworld_show_hp_alert(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/show_hp_alert.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC1DBBB: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/show_hp_alert.asm:11 END_STACK_VARS
    case 0xC1DBBD: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/show_hp_alert.asm:11 END_STACK_VARS
    case 0xC1DBBE: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/show_hp_alert.asm:11 END_STACK_VARS
    case 0xC1DBBF: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/show_hp_alert.asm:11 END_STACK_VARS
    case 0xC1DBC0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00009Eu : 0x00FF9Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/show_hp_alert.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC1DBC0.
    case 0xC1DBC2: {
        Instruction step(cpu, 0xFF, 0xA8685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/show_hp_alert.asm:11 END_STACK_VARS
    case 0xC1DBC3: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/show_hp_alert.asm:11 END_STACK_VARS
    case 0xC1DBC4: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/overworld/show_hp_alert.asm:12 TAY
    case 0xC1DBC5: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/overworld/show_hp_alert.asm:13 STY @CHARID
    case 0xC1DBC6: {
        Instruction step(cpu, 0x84, 0x000060u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/show_hp_alert.asm:15 LDA CURRENT_ATTACKER
    case 0xC1DBC8: {
        Instruction step(cpu, 0xAD, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/show_hp_alert.asm:16 STA $02
    case 0xC1DBCB: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/show_hp_alert.asm:17 SEP #PROC_FLAGS::ACCUM8
    case 0xC1DBCD: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/show_hp_alert.asm:18 STZ $20
    case 0xC1DBCF: {
        Instruction step(cpu, 0x64, 0x000020u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/show_hp_alert.asm:19 STY $12
    case 0xC1DBD1: {
        Instruction step(cpu, 0x84, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/show_hp_alert.asm:20 REP #PROC_FLAGS::ACCUM8
    case 0xC1DBD3: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/show_hp_alert.asm:21 TDC
    case 0xC1DBD5: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // src/overworld/show_hp_alert.asm:22 CLC
    case 0xC1DBD6: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/show_hp_alert.asm:23 ADC #$0012
    case 0xC1DBD7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000012u : 0x000012u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/show_hp_alert.asm:23 ADC #$0012
    // Overlapping static entry reached from 0xC1DBD7.
    case 0xC1DBD9: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/show_hp_alert.asm:24 STA CURRENT_ATTACKER
    case 0xC1DBDA: {
        Instruction step(cpu, 0x8D, 0x00A970u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/show_hp_alert.asm:26 JSL UNKNOWN_C0943C
    case 0xC1DBDD: {
        Instruction step(cpu, 0x22, 0xC0943Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:735 LDA arg
    // Macro caller: src/overworld/show_hp_alert.asm:27 CREATE_WINDOW_NEAR #WINDOW::TEXT_STANDARD
    case 0xC1DBE1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:735 LDA arg
    // Macro caller: src/overworld/show_hp_alert.asm:27 CREATE_WINDOW_NEAR #WINDOW::TEXT_STANDARD
    // Overlapping static entry reached from 0xC1DBE1.
    case 0xC1DBE3: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/overworld/show_hp_alert.asm:27 CREATE_WINDOW_NEAR #WINDOW::TEXT_STANDARD
    case 0xC1DBE4: {
        Instruction step(cpu, 0x20, 0x0004EEu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/show_hp_alert.asm:28 LDX #.SIZEOF(char_struct::name)
    case 0xC1DBE7: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000005u : 0x000005u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/show_hp_alert.asm:28 LDX #.SIZEOF(char_struct::name)
    // Overlapping static entry reached from 0xC1DBE7.
    case 0xC1DBE9: {
        Instruction step(cpu, 0x00, 0x0000A4u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/show_hp_alert.asm:29 LDY @CHARID
    case 0xC1DBEA: {
        Instruction step(cpu, 0xA4, 0x000060u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/show_hp_alert.asm:30 TYA
    case 0xC1DBEC: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/show_hp_alert.asm:31 DEC
    case 0xC1DBED: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/overworld/show_hp_alert.asm:32 LDY #.SIZEOF(char_struct)
    case 0xC1DBEE: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Fu : 0x00005Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/show_hp_alert.asm:32 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1DBEE.
    case 0xC1DBF0: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/show_hp_alert.asm:33 JSL MULT168
    case 0xC1DBF1: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/show_hp_alert.asm:34 CLC
    case 0xC1DBF5: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/show_hp_alert.asm:35 ADC #.LOWORD(PARTY_CHARACTERS)
    case 0xC1DBF6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000CEu : 0x0099CEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/show_hp_alert.asm:35 ADC #.LOWORD(PARTY_CHARACTERS)
    // Overlapping static entry reached from 0xC1DBF6.
    case 0xC1DBF8: {
        Instruction step(cpu, 0x99, 0x004A20u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/show_hp_alert.asm:36 JSR UNKNOWN_C1AC4A
    case 0xC1DBF9: {
        Instruction step(cpu, 0x20, 0x00AC4Au, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/show_hp_alert.asm:36 JSR UNKNOWN_C1AC4A
    // Overlapping static entry reached from 0xC1DBF8.
    case 0xC1DBFB: {
        Instruction step(cpu, 0xAC, 0x00AFA9u, 3u, AddressMode::Absolute);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/show_hp_alert.asm:37 DISPLAY_TEXT_PTR MSG_SYS_MAP_CRITICAL_SITUATION
    case 0xC1DBFC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000AFu : 0x00C7AFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/show_hp_alert.asm:37 DISPLAY_TEXT_PTR MSG_SYS_MAP_CRITICAL_SITUATION
    // Overlapping static entry reached from 0xC1DBFC.
    case 0xC1DBFE: {
        Instruction step(cpu, 0xC7, 0x000085u, 2u, AddressMode::DirectPageIndirectLong);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/show_hp_alert.asm:37 DISPLAY_TEXT_PTR MSG_SYS_MAP_CRITICAL_SITUATION
    case 0xC1DBFF: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/show_hp_alert.asm:37 DISPLAY_TEXT_PTR MSG_SYS_MAP_CRITICAL_SITUATION
    // Overlapping static entry reached from 0xC1DBFE.
    case 0xC1DC00: {
        Instruction step(cpu, 0x0E, 0x00C7A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/show_hp_alert.asm:37 DISPLAY_TEXT_PTR MSG_SYS_MAP_CRITICAL_SITUATION
    case 0xC1DC01: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/show_hp_alert.asm:37 DISPLAY_TEXT_PTR MSG_SYS_MAP_CRITICAL_SITUATION
    // Overlapping static entry reached from 0xC1DC01.
    case 0xC1DC03: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/show_hp_alert.asm:37 DISPLAY_TEXT_PTR MSG_SYS_MAP_CRITICAL_SITUATION
    case 0xC1DC04: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:210 JSL DISPLAY_TEXT
    // Macro caller: src/overworld/show_hp_alert.asm:37 DISPLAY_TEXT_PTR MSG_SYS_MAP_CRITICAL_SITUATION
    case 0xC1DC06: {
        Instruction step(cpu, 0x22, 0xC186B1u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/show_hp_alert.asm:38 JSR CLOSE_FOCUS_WINDOW
    case 0xC1DC0A: {
        Instruction step(cpu, 0x20, 0x000084u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/show_hp_alert.asm:39 JSL WINDOW_TICK
    case 0xC1DC0D: {
        Instruction step(cpu, 0x22, 0xC12DD5u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/show_hp_alert.asm:40 JSL UNKNOWN_C09451
    case 0xC1DC11: {
        Instruction step(cpu, 0x22, 0xC09451u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/show_hp_alert.asm:42 LDA $02
    case 0xC1DC15: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/show_hp_alert.asm:43 STA CURRENT_ATTACKER
    case 0xC1DC17: {
        Instruction step(cpu, 0x8D, 0x00A970u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/show_hp_alert.asm:45 PLD
    case 0xC1DC1A: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // src/overworld/show_hp_alert.asm:46 RTL
    case 0xC1DC1B: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
