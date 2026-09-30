// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/battle/actions/neutralize.asm
bool resume_battle_actions_neutralize(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/neutralize.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC29051: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/actions/neutralize.asm:6 END_STACK_VARS
    case 0xC29053: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/actions/neutralize.asm:6 END_STACK_VARS
    case 0xC29054: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/neutralize.asm:6 END_STACK_VARS
    case 0xC29055: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EEu : 0x00FFEEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/neutralize.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC29055.
    case 0xC29057: {
        Instruction step(cpu, 0xFF, 0x72AE5Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/actions/neutralize.asm:6 END_STACK_VARS
    case 0xC29058: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/battle/actions/neutralize.asm:7 LDX CURRENT_TARGET
    case 0xC29059: {
        Instruction step(cpu, 0xAE, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/neutralize.asm:7 LDX CURRENT_TARGET
    // Overlapping static entry reached from 0xC29057.
    case 0xC2905B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000BDu : 0x0032BDu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/neutralize.asm:8 LDA a:battler::base_offense,X
    case 0xC2905C: {
        Instruction step(cpu, 0xBD, 0x000032u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/neutralize.asm:8 LDA a:battler::base_offense,X
    // Overlapping static entry reached from 0xC2905B.
    case 0xC2905D: {
        Instruction step(cpu, 0x32, 0x000000u, 2u, AddressMode::DirectPageIndirect);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/actions/neutralize.asm:8 LDA a:battler::base_offense,X
    // Overlapping static entry reached from 0xC2905B.
    case 0xC2905E: {
        Instruction step(cpu, 0x00, 0x000029u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/neutralize.asm:9 AND #$00FF
    case 0xC2905F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/actions/neutralize.asm:9 AND #$00FF
    // Overlapping static entry reached from 0xC2905F.
    case 0xC29061: {
        Instruction step(cpu, 0x00, 0x0000AEu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/neutralize.asm:10 LDX CURRENT_TARGET
    case 0xC29062: {
        Instruction step(cpu, 0xAE, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/neutralize.asm:11 STA a:battler::offense,X
    case 0xC29065: {
        Instruction step(cpu, 0x9D, 0x000026u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/neutralize.asm:12 LDX CURRENT_TARGET
    case 0xC29068: {
        Instruction step(cpu, 0xAE, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/neutralize.asm:13 LDA a:battler::base_defense,X
    case 0xC2906B: {
        Instruction step(cpu, 0xBD, 0x000033u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/neutralize.asm:14 AND #$00FF
    case 0xC2906E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/actions/neutralize.asm:14 AND #$00FF
    // Overlapping static entry reached from 0xC2906E.
    case 0xC29070: {
        Instruction step(cpu, 0x00, 0x0000AEu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/neutralize.asm:15 LDX CURRENT_TARGET
    case 0xC29071: {
        Instruction step(cpu, 0xAE, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/neutralize.asm:16 STA a:battler::defense,X
    case 0xC29074: {
        Instruction step(cpu, 0x9D, 0x000028u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/neutralize.asm:17 LDX CURRENT_TARGET
    case 0xC29077: {
        Instruction step(cpu, 0xAE, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/neutralize.asm:18 LDA a:battler::base_speed,X
    case 0xC2907A: {
        Instruction step(cpu, 0xBD, 0x000034u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/neutralize.asm:19 AND #$00FF
    case 0xC2907D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/actions/neutralize.asm:19 AND #$00FF
    // Overlapping static entry reached from 0xC2907D.
    case 0xC2907F: {
        Instruction step(cpu, 0x00, 0x0000AEu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/neutralize.asm:20 LDX CURRENT_TARGET
    case 0xC29080: {
        Instruction step(cpu, 0xAE, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/neutralize.asm:21 STA a:battler::speed,X
    case 0xC29083: {
        Instruction step(cpu, 0x9D, 0x00002Au, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/neutralize.asm:22 LDX CURRENT_TARGET
    case 0xC29086: {
        Instruction step(cpu, 0xAE, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/neutralize.asm:23 LDA a:battler::base_guts,X
    case 0xC29089: {
        Instruction step(cpu, 0xBD, 0x000035u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/neutralize.asm:24 AND #$00FF
    case 0xC2908C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/actions/neutralize.asm:24 AND #$00FF
    // Overlapping static entry reached from 0xC2908C.
    case 0xC2908E: {
        Instruction step(cpu, 0x00, 0x0000AEu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/neutralize.asm:25 LDX CURRENT_TARGET
    case 0xC2908F: {
        Instruction step(cpu, 0xAE, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/neutralize.asm:26 STA a:battler::guts,X
    case 0xC29092: {
        Instruction step(cpu, 0x9D, 0x00002Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/neutralize.asm:27 LDX CURRENT_TARGET
    case 0xC29095: {
        Instruction step(cpu, 0xAE, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/neutralize.asm:28 LDA a:battler::base_luck,X
    case 0xC29098: {
        Instruction step(cpu, 0xBD, 0x000036u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/neutralize.asm:29 AND #$00FF
    case 0xC2909B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/actions/neutralize.asm:29 AND #$00FF
    // Overlapping static entry reached from 0xC2909B.
    case 0xC2909D: {
        Instruction step(cpu, 0x00, 0x0000AEu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/neutralize.asm:30 LDX CURRENT_TARGET
    case 0xC2909E: {
        Instruction step(cpu, 0xAE, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/neutralize.asm:31 STA a:battler::luck,X
    case 0xC290A1: {
        Instruction step(cpu, 0x9D, 0x00002Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/neutralize.asm:32 SEP #PROC_FLAGS::ACCUM8
    case 0xC290A4: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/actions/neutralize.asm:33 LDA #$0000
    case 0xC290A6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x00AE00u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/neutralize.asm:34 LDX CURRENT_TARGET
    case 0xC290A8: {
        Instruction step(cpu, 0xAE, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/neutralize.asm:34 LDX CURRENT_TARGET
    // Overlapping static entry reached from 0xC290A6.
    case 0xC290A9: {
        Instruction step(cpu, 0x72, 0x0000A9u, 2u, AddressMode::DirectPageIndirect);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/actions/neutralize.asm:35 STA a:battler::shield_hp,X
    case 0xC290AB: {
        Instruction step(cpu, 0x9D, 0x000025u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/neutralize.asm:36 LDX CURRENT_TARGET
    case 0xC290AE: {
        Instruction step(cpu, 0xAE, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/neutralize.asm:37 STA a:battler::afflictions + STATUS_GROUP::SHIELD,X
    case 0xC290B1: {
        Instruction step(cpu, 0x9D, 0x000023u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/neutralize.asm:38 REP #PROC_FLAGS::ACCUM8
    case 0xC290B4: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/neutralize.asm:39 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NEUTRALIZE_RESULT
    case 0xC290B6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000023u : 0x007123u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/neutralize.asm:39 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NEUTRALIZE_RESULT
    // Overlapping static entry reached from 0xC290B6.
    case 0xC290B8: {
        Instruction step(cpu, 0x71, 0x000085u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/neutralize.asm:39 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NEUTRALIZE_RESULT
    case 0xC290B9: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/neutralize.asm:39 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NEUTRALIZE_RESULT
    // Overlapping static entry reached from 0xC290B8.
    case 0xC290BA: {
        Instruction step(cpu, 0x0E, 0x00EFA9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/neutralize.asm:39 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NEUTRALIZE_RESULT
    case 0xC290BB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000EFu : 0x0000EFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/neutralize.asm:39 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NEUTRALIZE_RESULT
    // Overlapping static entry reached from 0xC290BB.
    case 0xC290BD: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/neutralize.asm:39 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NEUTRALIZE_RESULT
    case 0xC290BE: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/neutralize.asm:39 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NEUTRALIZE_RESULT
    case 0xC290C0: {
        Instruction step(cpu, 0x22, 0xC1DC1Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/actions/neutralize.asm:40 END_C_FUNCTION
    case 0xC290C4: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/neutralize.asm:40 END_C_FUNCTION
    case 0xC290C5: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
