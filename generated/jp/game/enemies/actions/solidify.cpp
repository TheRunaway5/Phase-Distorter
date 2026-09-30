// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/battle/actions/solidify.asm
bool resume_battle_actions_solidify(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/solidify.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC28C88: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/actions/solidify.asm:6 END_STACK_VARS
    case 0xC28C8A: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/actions/solidify.asm:6 END_STACK_VARS
    case 0xC28C8B: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/solidify.asm:6 END_STACK_VARS
    case 0xC28C8C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EEu : 0x00FFEEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/solidify.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC28C8C.
    case 0xC28C8E: {
        Instruction step(cpu, 0xFF, 0x94205Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/actions/solidify.asm:6 END_STACK_VARS
    case 0xC28C8F: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/battle/actions/solidify.asm:7 JSR FAIL_ATTACK_ON_NPCS
    case 0xC28C90: {
        Instruction step(cpu, 0x20, 0x007C94u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/solidify.asm:7 JSR FAIL_ATTACK_ON_NPCS
    // Overlapping static entry reached from 0xC28C8E.
    case 0xC28C92: {
        Instruction step(cpu, 0x7C, 0x0000C9u, 3u, AddressMode::AbsoluteIndexedIndirectX);
        step.jump();
        return step.finish();
    }
    // src/battle/actions/solidify.asm:8 CMP #0
    case 0xC28C93: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/solidify.asm:8 CMP #0
    // Overlapping static entry reached from 0xC28C93.
    case 0xC28C95: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/solidify.asm:9 BNE @UNKNOWN1
    case 0xC28C96: {
        Instruction step(cpu, 0xD0, 0x000037u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/actions/solidify.asm:10 JSR SUCCESS_LUCK80
    case 0xC28C98: {
        Instruction step(cpu, 0x20, 0x007C2Du, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/solidify.asm:11 CMP #0
    case 0xC28C9B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/solidify.asm:11 CMP #0
    // Overlapping static entry reached from 0xC28C9B.
    case 0xC28C9D: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/solidify.asm:12 BEQ @UNKNOWN0
    case 0xC28C9E: {
        Instruction step(cpu, 0xF0, 0x000021u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/actions/solidify.asm:13 LDY #STATUS_2::SOLIDIFIED
    case 0xC28CA0: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/actions/solidify.asm:13 LDY #STATUS_2::SOLIDIFIED
    // Overlapping static entry reached from 0xC28CA0.
    case 0xC28CA2: {
        Instruction step(cpu, 0x00, 0x0000A2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/solidify.asm:14 LDX #STATUS_GROUP::TEMPORARY
    case 0xC28CA3: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/solidify.asm:14 LDX #STATUS_GROUP::TEMPORARY
    // Overlapping static entry reached from 0xC28CA3.
    case 0xC28CA5: {
        Instruction step(cpu, 0x00, 0x0000ADu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/solidify.asm:15 LDA CURRENT_TARGET
    case 0xC28CA6: {
        Instruction step(cpu, 0xAD, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/solidify.asm:16 JSR INFLICT_STATUS_BATTLE
    case 0xC28CA9: {
        Instruction step(cpu, 0x20, 0x00718Du, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/solidify.asm:17 CMP #0
    case 0xC28CAC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/solidify.asm:17 CMP #0
    // Overlapping static entry reached from 0xC28CAC.
    case 0xC28CAE: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/solidify.asm:18 BEQ @UNKNOWN0
    case 0xC28CAF: {
        Instruction step(cpu, 0xF0, 0x000010u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/solidify.asm:19 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KOORI_ON
    case 0xC28CB1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000003u : 0x003103u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/solidify.asm:19 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KOORI_ON
    // Overlapping static entry reached from 0xC28CB1.
    case 0xC28CB3: {
        Instruction step(cpu, 0x31, 0x000085u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.and_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/solidify.asm:19 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KOORI_ON
    case 0xC28CB4: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/solidify.asm:19 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KOORI_ON
    // Overlapping static entry reached from 0xC28CB3.
    case 0xC28CB5: {
        Instruction step(cpu, 0x0E, 0x00C7A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/solidify.asm:19 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KOORI_ON
    case 0xC28CB6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/solidify.asm:19 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KOORI_ON
    // Overlapping static entry reached from 0xC28CB6.
    case 0xC28CB8: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/solidify.asm:19 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KOORI_ON
    case 0xC28CB9: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/solidify.asm:19 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KOORI_ON
    case 0xC28CBB: {
        Instruction step(cpu, 0x22, 0xC1D9FFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/solidify.asm:20 BRA @UNKNOWN1
    case 0xC28CBF: {
        Instruction step(cpu, 0x80, 0x00000Eu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/solidify.asm:22 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC28CC1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000CBu : 0x002DCBu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/solidify.asm:22 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    // Overlapping static entry reached from 0xC28CC1.
    case 0xC28CC3: {
        Instruction step(cpu, 0x2D, 0x000E85u, 3u, AddressMode::Absolute);
        step.and_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/solidify.asm:22 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC28CC4: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/solidify.asm:22 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC28CC6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/solidify.asm:22 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    // Overlapping static entry reached from 0xC28CC6.
    case 0xC28CC8: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/solidify.asm:22 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC28CC9: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/solidify.asm:22 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC28CCB: {
        Instruction step(cpu, 0x22, 0xC1D9FFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/actions/solidify.asm:24 END_C_FUNCTION
    case 0xC28CCF: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/solidify.asm:24 END_C_FUNCTION
    case 0xC28CD0: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
