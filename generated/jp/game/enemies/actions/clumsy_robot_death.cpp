// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/battle/actions/clumsy_robot_death.asm
bool resume_battle_actions_clumsy_robot_death(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/clumsy_robot_death.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2922F: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/actions/clumsy_robot_death.asm:6 END_STACK_VARS
    case 0xC29231: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/actions/clumsy_robot_death.asm:6 END_STACK_VARS
    case 0xC29232: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/clumsy_robot_death.asm:6 END_STACK_VARS
    case 0xC29233: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EEu : 0x00FFEEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/clumsy_robot_death.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC29233.
    case 0xC29235: {
        Instruction step(cpu, 0xFF, 0x78AF5Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/actions/clumsy_robot_death.asm:6 END_STACK_VARS
    case 0xC29236: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/battle/actions/clumsy_robot_death.asm:7 LDA f:PSI_TELEPORT_DEST_TABLE+.SIZEOF(psi_teleport_destination) * 13 + psi_teleport_destination::event_flag
    case 0xC29237: {
        Instruction step(cpu, 0xAF, 0xD58A78u, 4u, AddressMode::Long);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/clumsy_robot_death.asm:7 LDA f:PSI_TELEPORT_DEST_TABLE+.SIZEOF(psi_teleport_destination) * 13 + psi_teleport_destination::event_flag
    // Overlapping static entry reached from 0xC29235.
    case 0xC29239: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/actions/clumsy_robot_death.asm:7 LDA f:PSI_TELEPORT_DEST_TABLE+.SIZEOF(psi_teleport_destination) * 13 + psi_teleport_destination::event_flag
    // Overlapping static entry reached from 0xC29239.
    case 0xC2923A: {
        Instruction step(cpu, 0xD5, 0x000022u, 2u, AddressMode::DirectPageIndexedX);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/clumsy_robot_death.asm:8 JSL GET_EVENT_FLAG
    case 0xC2923B: {
        Instruction step(cpu, 0x22, 0xC214D0u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/clumsy_robot_death.asm:8 JSL GET_EVENT_FLAG
    // Overlapping static entry reached from 0xC2923A.
    case 0xC2923C: {
        Instruction step(cpu, 0xD0, 0x000014u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/actions/clumsy_robot_death.asm:8 JSL GET_EVENT_FLAG
    // Overlapping static entry reached from 0xC2923C.
    case 0xC2923E: {
        Instruction step(cpu, 0xC2, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/actions/clumsy_robot_death.asm:9 CMP #0
    case 0xC2923F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/clumsy_robot_death.asm:9 CMP #0
    // Overlapping static entry reached from 0xC2923E.
    case 0xC29240: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/clumsy_robot_death.asm:9 CMP #0
    // Overlapping static entry reached from 0xC2923F.
    case 0xC29241: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/clumsy_robot_death.asm:10 BEQ @UNKNOWN0
    case 0xC29242: {
        Instruction step(cpu, 0xF0, 0x00001Cu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/clumsy_robot_death.asm:11 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TONZURA_BREAK_IN_OK
    case 0xC29244: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000006u : 0x002B06u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/clumsy_robot_death.asm:11 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TONZURA_BREAK_IN_OK
    // Overlapping static entry reached from 0xC29244.
    case 0xC29246: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/clumsy_robot_death.asm:11 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TONZURA_BREAK_IN_OK
    case 0xC29247: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/clumsy_robot_death.asm:11 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TONZURA_BREAK_IN_OK
    case 0xC29249: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/clumsy_robot_death.asm:11 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TONZURA_BREAK_IN_OK
    // Overlapping static entry reached from 0xC29249.
    case 0xC2924B: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/clumsy_robot_death.asm:11 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TONZURA_BREAK_IN_OK
    case 0xC2924C: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/clumsy_robot_death.asm:11 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TONZURA_BREAK_IN_OK
    case 0xC2924E: {
        Instruction step(cpu, 0x22, 0xC1D9FFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/clumsy_robot_death.asm:12 SEP #PROC_FLAGS::ACCUM8
    case 0xC29252: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/actions/clumsy_robot_death.asm:13 LDA #TELEPORT_STYLE::INSTANT
    case 0xC29254: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000003u : 0x008503u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/clumsy_robot_death.asm:14 STA @LOCAL00
    case 0xC29256: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/clumsy_robot_death.asm:14 STA @LOCAL00
    // Overlapping static entry reached from 0xC29254.
    case 0xC29257: {
        Instruction step(cpu, 0x0E, 0x000FA9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // src/battle/actions/clumsy_robot_death.asm:15 LDA #15
    case 0xC29258: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Fu : 0x00220Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/clumsy_robot_death.asm:16 JSL SET_TELEPORT_STATE
    case 0xC2925A: {
        Instruction step(cpu, 0x22, 0xC0DD1Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/clumsy_robot_death.asm:16 JSL SET_TELEPORT_STATE
    // Overlapping static entry reached from 0xC29258.
    case 0xC2925B: {
        Instruction step(cpu, 0x1B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_stack();
        return step.finish();
    }
    // src/battle/actions/clumsy_robot_death.asm:16 JSL SET_TELEPORT_STATE
    // Overlapping static entry reached from 0xC2925B.
    case 0xC2925C: {
        Instruction step(cpu, 0xDD, 0x0080C0u, 3u, AddressMode::AbsoluteIndexedX);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/clumsy_robot_death.asm:18 BRA @UNKNOWN1
    case 0xC2925E: {
        Instruction step(cpu, 0x80, 0x000020u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/actions/clumsy_robot_death.asm:18 BRA @UNKNOWN1
    // Overlapping static entry reached from 0xC2925C.
    case 0xC2925F: {
        Instruction step(cpu, 0x20, 0x00B9A9u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/clumsy_robot_death.asm:20 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TONZURA_BREAK_IN_NG
    case 0xC29260: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000B9u : 0x002AB9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/clumsy_robot_death.asm:20 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TONZURA_BREAK_IN_NG
    // Overlapping static entry reached from 0xC29260.
    case 0xC29262: {
        Instruction step(cpu, 0x2A, 0x000000u, 1u, AddressMode::Accumulator);
        step.rotate_left();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/clumsy_robot_death.asm:20 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TONZURA_BREAK_IN_NG
    case 0xC29263: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/clumsy_robot_death.asm:20 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TONZURA_BREAK_IN_NG
    case 0xC29265: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/clumsy_robot_death.asm:20 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TONZURA_BREAK_IN_NG
    // Overlapping static entry reached from 0xC29265.
    case 0xC29267: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/clumsy_robot_death.asm:20 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TONZURA_BREAK_IN_NG
    case 0xC29268: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/clumsy_robot_death.asm:20 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TONZURA_BREAK_IN_NG
    case 0xC2926A: {
        Instruction step(cpu, 0x22, 0xC1D9FFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/clumsy_robot_death.asm:21 SEP #PROC_FLAGS::ACCUM8
    case 0xC2926E: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/actions/clumsy_robot_death.asm:22 LDA #TELEPORT_STYLE::INSTANT
    case 0xC29270: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000003u : 0x008503u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/clumsy_robot_death.asm:23 STA @LOCAL00
    case 0xC29272: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/clumsy_robot_death.asm:23 STA @LOCAL00
    // Overlapping static entry reached from 0xC29270.
    case 0xC29273: {
        Instruction step(cpu, 0x0E, 0x000DA9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // src/battle/actions/clumsy_robot_death.asm:24 LDA #13
    case 0xC29274: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Du : 0x00220Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/clumsy_robot_death.asm:25 JSL SET_TELEPORT_STATE
    case 0xC29276: {
        Instruction step(cpu, 0x22, 0xC0DD1Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/clumsy_robot_death.asm:25 JSL SET_TELEPORT_STATE
    // Overlapping static entry reached from 0xC29274.
    case 0xC29277: {
        Instruction step(cpu, 0x1B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_stack();
        return step.finish();
    }
    // src/battle/actions/clumsy_robot_death.asm:25 JSL SET_TELEPORT_STATE
    // Overlapping static entry reached from 0xC29277.
    case 0xC29278: {
        Instruction step(cpu, 0xDD, 0x00A9C0u, 3u, AddressMode::AbsoluteIndexedX);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/clumsy_robot_death.asm:27 LDA #1
    case 0xC2927A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/clumsy_robot_death.asm:27 LDA #1
    // Overlapping static entry reached from 0xC29278.
    case 0xC2927B: {
        Instruction step(cpu, 0x01, 0x000000u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/actions/clumsy_robot_death.asm:27 LDA #1
    // Overlapping static entry reached from 0xC2927A.
    case 0xC2927C: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/clumsy_robot_death.asm:28 STA SPECIAL_DEFEAT
    case 0xC2927D: {
        Instruction step(cpu, 0x8D, 0x00ABE3u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/actions/clumsy_robot_death.asm:30 END_C_FUNCTION
    case 0xC29280: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/clumsy_robot_death.asm:30 END_C_FUNCTION
    case 0xC29281: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
