// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/battle/actions/solidify_2.asm
bool resume_battle_actions_solidify_2(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/solidify_2.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2A82A: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/actions/solidify_2.asm:6 END_STACK_VARS
    case 0xC2A82C: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/actions/solidify_2.asm:6 END_STACK_VARS
    case 0xC2A82D: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/solidify_2.asm:6 END_STACK_VARS
    case 0xC2A82E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EEu : 0x00FFEEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/solidify_2.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC2A82E.
    case 0xC2A830: {
        Instruction step(cpu, 0xFF, 0x96205Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/actions/solidify_2.asm:6 END_STACK_VARS
    case 0xC2A831: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/battle/actions/solidify_2.asm:7 JSR SUCCESS_LUCK80
    case 0xC2A832: {
        Instruction step(cpu, 0x20, 0x007C96u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/solidify_2.asm:7 JSR SUCCESS_LUCK80
    // Overlapping static entry reached from 0xC2A830.
    case 0xC2A834: {
        Instruction step(cpu, 0x7C, 0x0000C9u, 3u, AddressMode::AbsoluteIndexedIndirectX);
        step.jump();
        return step.finish();
    }
    // src/battle/actions/solidify_2.asm:8 CMP #0
    case 0xC2A835: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/solidify_2.asm:8 CMP #0
    // Overlapping static entry reached from 0xC2A835.
    case 0xC2A837: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/solidify_2.asm:9 BEQ @UNKNOWN0
    case 0xC2A838: {
        Instruction step(cpu, 0xF0, 0x000021u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/actions/solidify_2.asm:10 LDY #STATUS_2::SOLIDIFIED
    case 0xC2A83A: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/actions/solidify_2.asm:10 LDY #STATUS_2::SOLIDIFIED
    // Overlapping static entry reached from 0xC2A83A.
    case 0xC2A83C: {
        Instruction step(cpu, 0x00, 0x0000A2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/solidify_2.asm:11 LDX #STATUS_GROUP::TEMPORARY
    case 0xC2A83D: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/solidify_2.asm:11 LDX #STATUS_GROUP::TEMPORARY
    // Overlapping static entry reached from 0xC2A83D.
    case 0xC2A83F: {
        Instruction step(cpu, 0x00, 0x0000ADu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/solidify_2.asm:12 LDA CURRENT_TARGET
    case 0xC2A840: {
        Instruction step(cpu, 0xAD, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/solidify_2.asm:13 JSR INFLICT_STATUS_BATTLE
    case 0xC2A843: {
        Instruction step(cpu, 0x20, 0x00724Au, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/solidify_2.asm:14 CMP #0
    case 0xC2A846: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/solidify_2.asm:14 CMP #0
    // Overlapping static entry reached from 0xC2A846.
    case 0xC2A848: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/solidify_2.asm:15 BEQ @UNKNOWN0
    case 0xC2A849: {
        Instruction step(cpu, 0xF0, 0x000010u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/solidify_2.asm:16 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KOORI_ON
    case 0xC2A84B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000EFu : 0x006BEFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/solidify_2.asm:16 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KOORI_ON
    // Overlapping static entry reached from 0xC2A84B.
    case 0xC2A84D: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/solidify_2.asm:16 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KOORI_ON
    case 0xC2A84E: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/solidify_2.asm:16 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KOORI_ON
    case 0xC2A850: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000EFu : 0x0000EFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/solidify_2.asm:16 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KOORI_ON
    // Overlapping static entry reached from 0xC2A850.
    case 0xC2A852: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/solidify_2.asm:16 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KOORI_ON
    case 0xC2A853: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/solidify_2.asm:16 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KOORI_ON
    case 0xC2A855: {
        Instruction step(cpu, 0x22, 0xC1DC1Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/solidify_2.asm:17 BRA @UNKNOWN1
    case 0xC2A859: {
        Instruction step(cpu, 0x80, 0x00000Eu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/solidify_2.asm:19 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC2A85B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00006Eu : 0x00766Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/solidify_2.asm:19 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    // Overlapping static entry reached from 0xC2A85B.
    case 0xC2A85D: {
        Instruction step(cpu, 0x76, 0x000085u, 2u, AddressMode::DirectPageIndexedX);
        step.rotate_right();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/solidify_2.asm:19 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC2A85E: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/solidify_2.asm:19 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    // Overlapping static entry reached from 0xC2A85D.
    case 0xC2A85F: {
        Instruction step(cpu, 0x0E, 0x00EFA9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/solidify_2.asm:19 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC2A860: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000EFu : 0x0000EFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/solidify_2.asm:19 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    // Overlapping static entry reached from 0xC2A860.
    case 0xC2A862: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/solidify_2.asm:19 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC2A863: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/solidify_2.asm:19 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC2A865: {
        Instruction step(cpu, 0x22, 0xC1DC1Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/actions/solidify_2.asm:21 END_C_FUNCTION
    case 0xC2A869: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/solidify_2.asm:21 END_C_FUNCTION
    case 0xC2A86A: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
