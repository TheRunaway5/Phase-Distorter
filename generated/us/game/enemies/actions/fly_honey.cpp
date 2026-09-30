// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/battle/actions/fly_honey.asm
bool resume_battle_actions_fly_honey(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/fly_honey.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2C1BD: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/actions/fly_honey.asm:6 END_STACK_VARS
    case 0xC2C1BF: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/actions/fly_honey.asm:6 END_STACK_VARS
    case 0xC2C1C0: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/fly_honey.asm:6 END_STACK_VARS
    case 0xC2C1C1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EEu : 0x00FFEEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/fly_honey.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC2C1C1.
    case 0xC2C1C3: {
        Instruction step(cpu, 0xFF, 0x1CA25Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/actions/fly_honey.asm:6 END_STACK_VARS
    case 0xC2C1C4: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/battle/actions/fly_honey.asm:7 LDX #.LOWORD(BATTLERS_TABLE) + .SIZEOF(battler) * 8
    case 0xC2C1C5: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x00001Cu : 0x00A21Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/fly_honey.asm:7 LDX #.LOWORD(BATTLERS_TABLE) + .SIZEOF(battler) * 8
    // Overlapping static entry reached from 0xC2C1C5.
    case 0xC2C1C7: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x0000A0u : 0x0008A0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/fly_honey.asm:8 LDY #8
    case 0xC2C1C8: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/actions/fly_honey.asm:8 LDY #8
    // Overlapping static entry reached from 0xC2C1C7.
    case 0xC2C1C9: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // src/battle/actions/fly_honey.asm:8 LDY #8
    // Overlapping static entry reached from 0xC2C1C8.
    case 0xC2C1CA: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/fly_honey.asm:9 BRA @STARTLOOP
    case 0xC2C1CB: {
        Instruction step(cpu, 0x80, 0x00003Du, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/actions/fly_honey.asm:11 LDA a:battler::consciousness,X
    case 0xC2C1CD: {
        Instruction step(cpu, 0xBD, 0x00000Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/fly_honey.asm:12 AND #$00FF
    case 0xC2C1D0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/actions/fly_honey.asm:12 AND #$00FF
    // Overlapping static entry reached from 0xC2C1D0.
    case 0xC2C1D2: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/fly_honey.asm:13 BEQ @BATTLERNOTBELCH
    case 0xC2C1D3: {
        Instruction step(cpu, 0xF0, 0x00002Eu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/actions/fly_honey.asm:14 LDA a:battler::ally_or_enemy,X
    case 0xC2C1D5: {
        Instruction step(cpu, 0xBD, 0x00000Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/fly_honey.asm:15 AND #$00FF
    case 0xC2C1D8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/actions/fly_honey.asm:15 AND #$00FF
    // Overlapping static entry reached from 0xC2C1D8.
    case 0xC2C1DA: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/fly_honey.asm:16 CMP #1
    case 0xC2C1DB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/fly_honey.asm:16 CMP #1
    // Overlapping static entry reached from 0xC2C1DB.
    case 0xC2C1DD: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/fly_honey.asm:17 BNE @BATTLERNOTBELCH
    case 0xC2C1DE: {
        Instruction step(cpu, 0xD0, 0x000023u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/actions/fly_honey.asm:18 LDA a:battler::id,X
    case 0xC2C1E0: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/fly_honey.asm:19 CMP #ENEMY::MASTER_BELCH_3
    case 0xC2C1E3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000C0u : 0x0000C0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/fly_honey.asm:19 CMP #ENEMY::MASTER_BELCH_3
    // Overlapping static entry reached from 0xC2C1E3.
    case 0xC2C1E5: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/fly_honey.asm:20 BEQ @BATTLERISBELCH
    case 0xC2C1E6: {
        Instruction step(cpu, 0xF0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/actions/fly_honey.asm:21 CMP #ENEMY::MASTER_BELCH_1
    case 0xC2C1E8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00005Du : 0x00005Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/fly_honey.asm:21 CMP #ENEMY::MASTER_BELCH_1
    // Overlapping static entry reached from 0xC2C1E8.
    case 0xC2C1EA: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/fly_honey.asm:22 BNE @BATTLERNOTBELCH
    case 0xC2C1EB: {
        Instruction step(cpu, 0xD0, 0x000016u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/actions/fly_honey.asm:24 LDA #ENEMY::MASTER_BELCH_2
    case 0xC2C1ED: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000A9u : 0x0000A9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/fly_honey.asm:24 LDA #ENEMY::MASTER_BELCH_2
    // Overlapping static entry reached from 0xC2C1ED.
    case 0xC2C1EF: {
        Instruction step(cpu, 0x00, 0x00009Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/fly_honey.asm:25 STA a:battler::id,X
    case 0xC2C1F0: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/fly_honey.asm:26 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_G_HAEMITU_G
    case 0xC2C1F3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C0u : 0x00F8C0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/fly_honey.asm:26 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_G_HAEMITU_G
    // Overlapping static entry reached from 0xC2C1F3.
    case 0xC2C1F5: {
        Instruction step(cpu, 0xF8, 0x000000u, 1u, AddressMode::Implied);
        step.set_decimal();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/fly_honey.asm:26 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_G_HAEMITU_G
    case 0xC2C1F6: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/fly_honey.asm:26 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_G_HAEMITU_G
    case 0xC2C1F8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C8u : 0x0000C8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/fly_honey.asm:26 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_G_HAEMITU_G
    // Overlapping static entry reached from 0xC2C1F8.
    case 0xC2C1FA: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/fly_honey.asm:26 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_G_HAEMITU_G
    case 0xC2C1FB: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/fly_honey.asm:26 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_G_HAEMITU_G
    case 0xC2C1FD: {
        Instruction step(cpu, 0x22, 0xC1DC1Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/fly_honey.asm:27 BRA @RETURN
    case 0xC2C201: {
        Instruction step(cpu, 0x80, 0x00001Au, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/actions/fly_honey.asm:29 TXA
    case 0xC2C203: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/actions/fly_honey.asm:30 CLC
    case 0xC2C204: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/actions/fly_honey.asm:31 ADC #.SIZEOF(battler)
    case 0xC2C205: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/actions/fly_honey.asm:31 ADC #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2C205.
    case 0xC2C207: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/fly_honey.asm:32 TAX
    case 0xC2C208: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/actions/fly_honey.asm:33 INY
    case 0xC2C209: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/battle/actions/fly_honey.asm:35 CPY #BATTLER_COUNT
    case 0xC2C20A: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/battle/actions/fly_honey.asm:35 CPY #BATTLER_COUNT
    // Overlapping static entry reached from 0xC2C20A.
    case 0xC2C20C: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/fly_honey.asm:36 BCC @NEXTBATTLER
    case 0xC2C20D: {
        Instruction step(cpu, 0x90, 0x0000BEu, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/fly_honey.asm:37 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_G_HAEMITU_NG
    case 0xC2C20F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FDu : 0x00F8FDu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/fly_honey.asm:37 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_G_HAEMITU_NG
    // Overlapping static entry reached from 0xC2C20F.
    case 0xC2C211: {
        Instruction step(cpu, 0xF8, 0x000000u, 1u, AddressMode::Implied);
        step.set_decimal();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/fly_honey.asm:37 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_G_HAEMITU_NG
    case 0xC2C212: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/fly_honey.asm:37 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_G_HAEMITU_NG
    case 0xC2C214: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C8u : 0x0000C8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/fly_honey.asm:37 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_G_HAEMITU_NG
    // Overlapping static entry reached from 0xC2C214.
    case 0xC2C216: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/fly_honey.asm:37 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_G_HAEMITU_NG
    case 0xC2C217: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/fly_honey.asm:37 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_G_HAEMITU_NG
    case 0xC2C219: {
        Instruction step(cpu, 0x22, 0xC1DC1Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/actions/fly_honey.asm:39 END_C_FUNCTION
    case 0xC2C21D: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/fly_honey.asm:39 END_C_FUNCTION
    case 0xC2C21E: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
