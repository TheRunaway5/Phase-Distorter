// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/battle/actions/crying2.asm
bool resume_battle_actions_crying2(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/crying2.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC28D93: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/actions/crying2.asm:6 END_STACK_VARS
    case 0xC28D95: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/actions/crying2.asm:6 END_STACK_VARS
    case 0xC28D96: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/crying2.asm:6 END_STACK_VARS
    case 0xC28D97: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EEu : 0x00FFEEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/crying2.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC28D97.
    case 0xC28D99: {
        Instruction step(cpu, 0xFF, 0x94205Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/actions/crying2.asm:6 END_STACK_VARS
    case 0xC28D9A: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/battle/actions/crying2.asm:7 JSR FAIL_ATTACK_ON_NPCS
    case 0xC28D9B: {
        Instruction step(cpu, 0x20, 0x007C94u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/crying2.asm:7 JSR FAIL_ATTACK_ON_NPCS
    // Overlapping static entry reached from 0xC28D99.
    case 0xC28D9D: {
        Instruction step(cpu, 0x7C, 0x0000C9u, 3u, AddressMode::AbsoluteIndexedIndirectX);
        step.jump();
        return step.finish();
    }
    // src/battle/actions/crying2.asm:8 CMP #0
    case 0xC28D9E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/crying2.asm:8 CMP #0
    // Overlapping static entry reached from 0xC28D9E.
    case 0xC28DA0: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/crying2.asm:9 BNE @UNKNOWN1
    case 0xC28DA1: {
        Instruction step(cpu, 0xD0, 0x00002Du, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/actions/crying2.asm:10 LDY #STATUS_2::CRYING
    case 0xC28DA3: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/actions/crying2.asm:10 LDY #STATUS_2::CRYING
    // Overlapping static entry reached from 0xC28DA3.
    case 0xC28DA5: {
        Instruction step(cpu, 0x00, 0x0000BBu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/crying2.asm:12 TYX
    case 0xC28DA6: {
        Instruction step(cpu, 0xBB, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_x();
        return step.finish();
    }
    // src/battle/actions/crying2.asm:13 LDA CURRENT_TARGET
    case 0xC28DA7: {
        Instruction step(cpu, 0xAD, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/crying2.asm:14 JSR INFLICT_STATUS_BATTLE
    case 0xC28DAA: {
        Instruction step(cpu, 0x20, 0x00718Du, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/crying2.asm:15 CMP #0
    case 0xC28DAD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/crying2.asm:15 CMP #0
    // Overlapping static entry reached from 0xC28DAD.
    case 0xC28DAF: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/crying2.asm:16 BEQ @UNKNOWN0
    case 0xC28DB0: {
        Instruction step(cpu, 0xF0, 0x000010u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/crying2.asm:17 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NAMIDA_ON
    case 0xC28DB2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000CFu : 0x0030CFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/crying2.asm:17 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NAMIDA_ON
    // Overlapping static entry reached from 0xC28DB2.
    case 0xC28DB4: {
        Instruction step(cpu, 0x30, 0x000085u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/crying2.asm:17 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NAMIDA_ON
    case 0xC28DB5: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/crying2.asm:17 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NAMIDA_ON
    // Overlapping static entry reached from 0xC28DB4.
    case 0xC28DB6: {
        Instruction step(cpu, 0x0E, 0x00C7A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/crying2.asm:17 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NAMIDA_ON
    case 0xC28DB7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/crying2.asm:17 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NAMIDA_ON
    // Overlapping static entry reached from 0xC28DB7.
    case 0xC28DB9: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/crying2.asm:17 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NAMIDA_ON
    case 0xC28DBA: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/crying2.asm:17 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NAMIDA_ON
    case 0xC28DBC: {
        Instruction step(cpu, 0x22, 0xC1D9FFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/crying2.asm:18 BRA @UNKNOWN1
    case 0xC28DC0: {
        Instruction step(cpu, 0x80, 0x00000Eu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/crying2.asm:20 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC28DC2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000CBu : 0x002DCBu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/crying2.asm:20 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    // Overlapping static entry reached from 0xC28DC2.
    case 0xC28DC4: {
        Instruction step(cpu, 0x2D, 0x000E85u, 3u, AddressMode::Absolute);
        step.and_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/crying2.asm:20 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC28DC5: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/crying2.asm:20 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC28DC7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/crying2.asm:20 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    // Overlapping static entry reached from 0xC28DC7.
    case 0xC28DC9: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/crying2.asm:20 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC28DCA: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/crying2.asm:20 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC28DCC: {
        Instruction step(cpu, 0x22, 0xC1D9FFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/actions/crying2.asm:22 END_C_FUNCTION
    case 0xC28DD0: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/crying2.asm:22 END_C_FUNCTION
    case 0xC28DD1: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
