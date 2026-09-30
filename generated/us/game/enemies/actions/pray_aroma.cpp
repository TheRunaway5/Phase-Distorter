// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/battle/actions/pray_aroma.asm
bool resume_battle_actions_pray_aroma(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/pray_aroma.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2AC99: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/actions/pray_aroma.asm:6 END_STACK_VARS
    case 0xC2AC9B: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/actions/pray_aroma.asm:6 END_STACK_VARS
    case 0xC2AC9C: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/pray_aroma.asm:6 END_STACK_VARS
    case 0xC2AC9D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EEu : 0x00FFEEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/pray_aroma.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC2AC9D.
    case 0xC2AC9F: {
        Instruction step(cpu, 0xFF, 0xFD205Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/actions/pray_aroma.asm:6 END_STACK_VARS
    case 0xC2ACA0: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/battle/actions/pray_aroma.asm:7 JSR FAIL_ATTACK_ON_NPCS
    case 0xC2ACA1: {
        Instruction step(cpu, 0x20, 0x007CFDu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/pray_aroma.asm:7 JSR FAIL_ATTACK_ON_NPCS
    // Overlapping static entry reached from 0xC2AC9F.
    case 0xC2ACA3: {
        Instruction step(cpu, 0x7C, 0x0000C9u, 3u, AddressMode::AbsoluteIndexedIndirectX);
        step.jump();
        return step.finish();
    }
    // src/battle/actions/pray_aroma.asm:8 CMP #$0000
    case 0xC2ACA4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/pray_aroma.asm:8 CMP #$0000
    // Overlapping static entry reached from 0xC2ACA4.
    case 0xC2ACA6: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/pray_aroma.asm:9 BNE @UNKNOWN1
    case 0xC2ACA7: {
        Instruction step(cpu, 0xD0, 0x00002Fu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/actions/pray_aroma.asm:10 LDY #STATUS_2::ASLEEP
    case 0xC2ACA9: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/actions/pray_aroma.asm:10 LDY #STATUS_2::ASLEEP
    // Overlapping static entry reached from 0xC2ACA9.
    case 0xC2ACAB: {
        Instruction step(cpu, 0x00, 0x0000A2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/pray_aroma.asm:11 LDX #STATUS_GROUP::TEMPORARY
    case 0xC2ACAC: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/pray_aroma.asm:11 LDX #STATUS_GROUP::TEMPORARY
    // Overlapping static entry reached from 0xC2ACAC.
    case 0xC2ACAE: {
        Instruction step(cpu, 0x00, 0x0000ADu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/pray_aroma.asm:12 LDA CURRENT_TARGET
    case 0xC2ACAF: {
        Instruction step(cpu, 0xAD, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/pray_aroma.asm:13 JSR INFLICT_STATUS_BATTLE
    case 0xC2ACB2: {
        Instruction step(cpu, 0x20, 0x00724Au, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/pray_aroma.asm:14 CMP #$0000
    case 0xC2ACB5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/pray_aroma.asm:14 CMP #$0000
    // Overlapping static entry reached from 0xC2ACB5.
    case 0xC2ACB7: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/pray_aroma.asm:15 BEQ @UNKNOWN0
    case 0xC2ACB8: {
        Instruction step(cpu, 0xF0, 0x000010u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/pray_aroma.asm:16 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NEMURI_ON
    case 0xC2ACBA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000055u : 0x006C55u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/pray_aroma.asm:16 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NEMURI_ON
    // Overlapping static entry reached from 0xC2ACBA.
    case 0xC2ACBC: {
        Instruction step(cpu, 0x6C, 0x000E85u, 3u, AddressMode::AbsoluteIndirect);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/pray_aroma.asm:16 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NEMURI_ON
    case 0xC2ACBD: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/pray_aroma.asm:16 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NEMURI_ON
    case 0xC2ACBF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000EFu : 0x0000EFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/pray_aroma.asm:16 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NEMURI_ON
    // Overlapping static entry reached from 0xC2ACBF.
    case 0xC2ACC1: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/pray_aroma.asm:16 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NEMURI_ON
    case 0xC2ACC2: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/pray_aroma.asm:16 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NEMURI_ON
    case 0xC2ACC4: {
        Instruction step(cpu, 0x22, 0xC1DC1Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/pray_aroma.asm:17 BRA @UNKNOWN1
    case 0xC2ACC8: {
        Instruction step(cpu, 0x80, 0x00000Eu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/pray_aroma.asm:19 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC2ACCA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00006Eu : 0x00766Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/pray_aroma.asm:19 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    // Overlapping static entry reached from 0xC2ACCA.
    case 0xC2ACCC: {
        Instruction step(cpu, 0x76, 0x000085u, 2u, AddressMode::DirectPageIndexedX);
        step.rotate_right();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/pray_aroma.asm:19 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC2ACCD: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/pray_aroma.asm:19 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    // Overlapping static entry reached from 0xC2ACCC.
    case 0xC2ACCE: {
        Instruction step(cpu, 0x0E, 0x00EFA9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/pray_aroma.asm:19 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC2ACCF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000EFu : 0x0000EFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/pray_aroma.asm:19 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    // Overlapping static entry reached from 0xC2ACCF.
    case 0xC2ACD1: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/pray_aroma.asm:19 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC2ACD2: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/pray_aroma.asm:19 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC2ACD4: {
        Instruction step(cpu, 0x22, 0xC1DC1Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/actions/pray_aroma.asm:21 END_C_FUNCTION
    case 0xC2ACD8: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/pray_aroma.asm:21 END_C_FUNCTION
    case 0xC2ACD9: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
