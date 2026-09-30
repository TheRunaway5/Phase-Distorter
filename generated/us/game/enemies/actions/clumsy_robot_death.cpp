// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/battle/actions/clumsy_robot_death.asm
bool resume_battle_actions_clumsy_robot_death(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/clumsy_robot_death.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC29298: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/actions/clumsy_robot_death.asm:6 END_STACK_VARS
    case 0xC2929A: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/actions/clumsy_robot_death.asm:6 END_STACK_VARS
    case 0xC2929B: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/clumsy_robot_death.asm:6 END_STACK_VARS
    case 0xC2929C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EEu : 0x00FFEEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/clumsy_robot_death.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC2929C.
    case 0xC2929E: {
        Instruction step(cpu, 0xFF, 0x2CAF5Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/actions/clumsy_robot_death.asm:6 END_STACK_VARS
    case 0xC2929F: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/battle/actions/clumsy_robot_death.asm:7 LDA f:PSI_TELEPORT_DEST_TABLE+.SIZEOF(psi_teleport_destination) * 13 + psi_teleport_destination::event_flag
    case 0xC292A0: {
        Instruction step(cpu, 0xAF, 0xD57A2Cu, 4u, AddressMode::Long);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/clumsy_robot_death.asm:7 LDA f:PSI_TELEPORT_DEST_TABLE+.SIZEOF(psi_teleport_destination) * 13 + psi_teleport_destination::event_flag
    // Overlapping static entry reached from 0xC2929E.
    case 0xC292A2: {
        Instruction step(cpu, 0x7A, 0x000000u, 1u, AddressMode::Implied);
        step.pull_y();
        return step.finish();
    }
    // src/battle/actions/clumsy_robot_death.asm:7 LDA f:PSI_TELEPORT_DEST_TABLE+.SIZEOF(psi_teleport_destination) * 13 + psi_teleport_destination::event_flag
    // Overlapping static entry reached from 0xC292A2.
    case 0xC292A3: {
        Instruction step(cpu, 0xD5, 0x000022u, 2u, AddressMode::DirectPageIndexedX);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/clumsy_robot_death.asm:8 JSL GET_EVENT_FLAG
    case 0xC292A4: {
        Instruction step(cpu, 0x22, 0xC21628u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/clumsy_robot_death.asm:8 JSL GET_EVENT_FLAG
    // Overlapping static entry reached from 0xC292A3.
    case 0xC292A5: {
        Instruction step(cpu, 0x28, 0x000000u, 1u, AddressMode::Implied);
        step.pull_status();
        return step.finish();
    }
    // src/battle/actions/clumsy_robot_death.asm:8 JSL GET_EVENT_FLAG
    // Overlapping static entry reached from 0xC292A5.
    case 0xC292A6: {
        Instruction step(cpu, 0x16, 0x0000C2u, 2u, AddressMode::DirectPageIndexedX);
        step.shift_left();
        return step.finish();
    }
    // src/battle/actions/clumsy_robot_death.asm:9 CMP #0
    case 0xC292A8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/clumsy_robot_death.asm:9 CMP #0
    // Overlapping static entry reached from 0xC292A8.
    case 0xC292AA: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/clumsy_robot_death.asm:10 BEQ @UNKNOWN0
    case 0xC292AB: {
        Instruction step(cpu, 0xF0, 0x00001Cu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/clumsy_robot_death.asm:11 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TONZURA_BREAK_IN_OK
    case 0xC292AD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00003Du : 0x00733Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/clumsy_robot_death.asm:11 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TONZURA_BREAK_IN_OK
    // Overlapping static entry reached from 0xC292AD.
    case 0xC292AF: {
        Instruction step(cpu, 0x73, 0x000085u, 2u, AddressMode::StackRelativeIndirectIndexedY);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/clumsy_robot_death.asm:11 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TONZURA_BREAK_IN_OK
    case 0xC292B0: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/clumsy_robot_death.asm:11 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TONZURA_BREAK_IN_OK
    // Overlapping static entry reached from 0xC292AF.
    case 0xC292B1: {
        Instruction step(cpu, 0x0E, 0x00EFA9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/clumsy_robot_death.asm:11 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TONZURA_BREAK_IN_OK
    case 0xC292B2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000EFu : 0x0000EFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/clumsy_robot_death.asm:11 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TONZURA_BREAK_IN_OK
    // Overlapping static entry reached from 0xC292B2.
    case 0xC292B4: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/clumsy_robot_death.asm:11 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TONZURA_BREAK_IN_OK
    case 0xC292B5: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/clumsy_robot_death.asm:11 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TONZURA_BREAK_IN_OK
    case 0xC292B7: {
        Instruction step(cpu, 0x22, 0xC1DC1Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/clumsy_robot_death.asm:12 SEP #PROC_FLAGS::ACCUM8
    case 0xC292BB: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/actions/clumsy_robot_death.asm:13 LDA #TELEPORT_STYLE::INSTANT
    case 0xC292BD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000003u : 0x008503u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/clumsy_robot_death.asm:14 STA @LOCAL00
    case 0xC292BF: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/clumsy_robot_death.asm:14 STA @LOCAL00
    // Overlapping static entry reached from 0xC292BD.
    case 0xC292C0: {
        Instruction step(cpu, 0x0E, 0x000FA9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // src/battle/actions/clumsy_robot_death.asm:15 LDA #15
    case 0xC292C1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Fu : 0x00220Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/clumsy_robot_death.asm:16 JSL SET_TELEPORT_STATE
    case 0xC292C3: {
        Instruction step(cpu, 0x22, 0xC0DD53u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/clumsy_robot_death.asm:16 JSL SET_TELEPORT_STATE
    // Overlapping static entry reached from 0xC292C1.
    case 0xC292C4: {
        Instruction step(cpu, 0x53, 0x0000DDu, 2u, AddressMode::StackRelativeIndirectIndexedY);
        step.xor_accumulator();
        return step.finish();
    }
    // src/battle/actions/clumsy_robot_death.asm:16 JSL SET_TELEPORT_STATE
    // Overlapping static entry reached from 0xC292C4.
    case 0xC292C6: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000080u : 0x002080u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/battle/actions/clumsy_robot_death.asm:18 BRA @UNKNOWN1
    case 0xC292C7: {
        Instruction step(cpu, 0x80, 0x000020u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/actions/clumsy_robot_death.asm:18 BRA @UNKNOWN1
    // Overlapping static entry reached from 0xC292C6.
    case 0xC292C8: {
        Instruction step(cpu, 0x20, 0x00F7A9u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/clumsy_robot_death.asm:20 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TONZURA_BREAK_IN_NG
    case 0xC292C9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000F7u : 0x0072F7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/clumsy_robot_death.asm:20 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TONZURA_BREAK_IN_NG
    // Overlapping static entry reached from 0xC292C9.
    case 0xC292CB: {
        Instruction step(cpu, 0x72, 0x000085u, 2u, AddressMode::DirectPageIndirect);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/clumsy_robot_death.asm:20 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TONZURA_BREAK_IN_NG
    case 0xC292CC: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/clumsy_robot_death.asm:20 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TONZURA_BREAK_IN_NG
    // Overlapping static entry reached from 0xC292CB.
    case 0xC292CD: {
        Instruction step(cpu, 0x0E, 0x00EFA9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/clumsy_robot_death.asm:20 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TONZURA_BREAK_IN_NG
    case 0xC292CE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000EFu : 0x0000EFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/clumsy_robot_death.asm:20 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TONZURA_BREAK_IN_NG
    // Overlapping static entry reached from 0xC292CE.
    case 0xC292D0: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/clumsy_robot_death.asm:20 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TONZURA_BREAK_IN_NG
    case 0xC292D1: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/clumsy_robot_death.asm:20 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TONZURA_BREAK_IN_NG
    case 0xC292D3: {
        Instruction step(cpu, 0x22, 0xC1DC1Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/clumsy_robot_death.asm:21 SEP #PROC_FLAGS::ACCUM8
    case 0xC292D7: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/actions/clumsy_robot_death.asm:22 LDA #TELEPORT_STYLE::INSTANT
    case 0xC292D9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000003u : 0x008503u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/clumsy_robot_death.asm:23 STA @LOCAL00
    case 0xC292DB: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/clumsy_robot_death.asm:23 STA @LOCAL00
    // Overlapping static entry reached from 0xC292D9.
    case 0xC292DC: {
        Instruction step(cpu, 0x0E, 0x000DA9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // src/battle/actions/clumsy_robot_death.asm:24 LDA #13
    case 0xC292DD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Du : 0x00220Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/clumsy_robot_death.asm:25 JSL SET_TELEPORT_STATE
    case 0xC292DF: {
        Instruction step(cpu, 0x22, 0xC0DD53u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/clumsy_robot_death.asm:25 JSL SET_TELEPORT_STATE
    // Overlapping static entry reached from 0xC292DD.
    case 0xC292E0: {
        Instruction step(cpu, 0x53, 0x0000DDu, 2u, AddressMode::StackRelativeIndirectIndexedY);
        step.xor_accumulator();
        return step.finish();
    }
    // src/battle/actions/clumsy_robot_death.asm:25 JSL SET_TELEPORT_STATE
    // Overlapping static entry reached from 0xC292E0.
    case 0xC292E2: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000A9u : 0x0001A9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/battle/actions/clumsy_robot_death.asm:27 LDA #1
    case 0xC292E3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/clumsy_robot_death.asm:27 LDA #1
    // Overlapping static entry reached from 0xC292E2.
    case 0xC292E4: {
        Instruction step(cpu, 0x01, 0x000000u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/actions/clumsy_robot_death.asm:27 LDA #1
    // Overlapping static entry reached from 0xC292E3.
    case 0xC292E5: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/clumsy_robot_death.asm:28 STA SPECIAL_DEFEAT
    case 0xC292E6: {
        Instruction step(cpu, 0x8D, 0x00AA0Eu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/actions/clumsy_robot_death.asm:30 END_C_FUNCTION
    case 0xC292E9: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/clumsy_robot_death.asm:30 END_C_FUNCTION
    case 0xC292EA: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
