// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/battle/actions/mummy_wrap.asm
bool resume_battle_actions_mummy_wrap(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/mummy_wrap.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2A4B7: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/actions/mummy_wrap.asm:7 END_STACK_VARS
    case 0xC2A4B9: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/actions/mummy_wrap.asm:7 END_STACK_VARS
    case 0xC2A4BA: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/mummy_wrap.asm:7 END_STACK_VARS
    case 0xC2A4BB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000ECu : 0x00FFECu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/mummy_wrap.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC2A4BB.
    case 0xC2A4BD: {
        Instruction step(cpu, 0xFF, 0x94205Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/actions/mummy_wrap.asm:7 END_STACK_VARS
    case 0xC2A4BE: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/battle/actions/mummy_wrap.asm:8 JSR FAIL_ATTACK_ON_NPCS
    case 0xC2A4BF: {
        Instruction step(cpu, 0x20, 0x007C94u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/mummy_wrap.asm:8 JSR FAIL_ATTACK_ON_NPCS
    // Overlapping static entry reached from 0xC2A4BD.
    case 0xC2A4C1: {
        Instruction step(cpu, 0x7C, 0x0000C9u, 3u, AddressMode::AbsoluteIndexedIndirectX);
        step.jump();
        return step.finish();
    }
    // src/battle/actions/mummy_wrap.asm:9 CMP #0
    case 0xC2A4C2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/mummy_wrap.asm:9 CMP #0
    // Overlapping static entry reached from 0xC2A4C2.
    case 0xC2A4C4: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/mummy_wrap.asm:10 BNE @UNKNOWN3
    case 0xC2A4C5: {
        Instruction step(cpu, 0xD0, 0x00005Au, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/actions/mummy_wrap.asm:11 LDA #250
    case 0xC2A4C7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FAu : 0x0000FAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/mummy_wrap.asm:11 LDA #250
    // Overlapping static entry reached from 0xC2A4C7.
    case 0xC2A4C9: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/mummy_wrap.asm:12 JSR SUCCESS_SPEED
    case 0xC2A4CA: {
        Instruction step(cpu, 0x20, 0x007C46u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/mummy_wrap.asm:13 CMP #0
    case 0xC2A4CD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/mummy_wrap.asm:13 CMP #0
    // Overlapping static entry reached from 0xC2A4CD.
    case 0xC2A4CF: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/mummy_wrap.asm:14 BEQ @UNKNOWN2
    case 0xC2A4D0: {
        Instruction step(cpu, 0xF0, 0x000041u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/actions/mummy_wrap.asm:15 LDX CURRENT_TARGET
    case 0xC2A4D2: {
        Instruction step(cpu, 0xAE, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/mummy_wrap.asm:16 LDA #MUMMY_WRAP_BASE_DAMAGE
    case 0xC2A4D5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000090u : 0x000190u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/mummy_wrap.asm:16 LDA #MUMMY_WRAP_BASE_DAMAGE
    // Overlapping static entry reached from 0xC2A4D5.
    case 0xC2A4D7: {
        Instruction step(cpu, 0x01, 0x000038u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/actions/mummy_wrap.asm:17 SEC
    case 0xC2A4D8: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/battle/actions/mummy_wrap.asm:18 SBC a:battler::defense,X
    case 0xC2A4D9: {
        Instruction step(cpu, 0xFD, 0x000028u, 3u, AddressMode::AbsoluteIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/actions/mummy_wrap.asm:19 STA @LOCAL01
    case 0xC2A4DC: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/mummy_wrap.asm:20 CLC
    case 0xC2A4DE: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/actions/mummy_wrap.asm:21 SBC #0
    case 0xC2A4DF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/actions/mummy_wrap.asm:21 SBC #0
    // Overlapping static entry reached from 0xC2A4DF.
    case 0xC2A4E1: {
        Instruction step(cpu, 0x00, 0x000050u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:807 BVC :+
    // Macro caller: src/battle/actions/mummy_wrap.asm:22 BRANCHLTEQS @UNKNOWN2
    case 0xC2A4E2: {
        Instruction step(cpu, 0x50, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_clear();
        return step.finish();
    }
    // include/macros.asm:808 BPL dest
    // Macro caller: src/battle/actions/mummy_wrap.asm:22 BRANCHLTEQS @UNKNOWN2
    case 0xC2A4E4: {
        Instruction step(cpu, 0x10, 0x00002Du, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:809 BRA :++
    // Macro caller: src/battle/actions/mummy_wrap.asm:22 BRANCHLTEQS @UNKNOWN2
    case 0xC2A4E6: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:811 BMI dest
    // Macro caller: src/battle/actions/mummy_wrap.asm:22 BRANCHLTEQS @UNKNOWN2
    case 0xC2A4E8: {
        Instruction step(cpu, 0x30, 0x000029u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/battle/actions/mummy_wrap.asm:23 LDX #$00FF
    case 0xC2A4EA: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/mummy_wrap.asm:23 LDX #$00FF
    // Overlapping static entry reached from 0xC2A4EA.
    case 0xC2A4EC: {
        Instruction step(cpu, 0x00, 0x0000A5u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/mummy_wrap.asm:24 LDA @LOCAL01
    case 0xC2A4ED: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/mummy_wrap.asm:25 JSR CALC_RESIST_DAMAGE
    case 0xC2A4EF: {
        Instruction step(cpu, 0x20, 0x0080CBu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/mummy_wrap.asm:26 LDY #STATUS_2::SOLIDIFIED
    case 0xC2A4F2: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/actions/mummy_wrap.asm:26 LDY #STATUS_2::SOLIDIFIED
    // Overlapping static entry reached from 0xC2A4F2.
    case 0xC2A4F4: {
        Instruction step(cpu, 0x00, 0x0000A2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/mummy_wrap.asm:27 LDX #STATUS_GROUP::TEMPORARY
    case 0xC2A4F5: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/mummy_wrap.asm:27 LDX #STATUS_GROUP::TEMPORARY
    // Overlapping static entry reached from 0xC2A4F5.
    case 0xC2A4F7: {
        Instruction step(cpu, 0x00, 0x0000ADu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/mummy_wrap.asm:28 LDA CURRENT_TARGET
    case 0xC2A4F8: {
        Instruction step(cpu, 0xAD, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/mummy_wrap.asm:29 JSR INFLICT_STATUS_BATTLE
    case 0xC2A4FB: {
        Instruction step(cpu, 0x20, 0x00718Du, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/mummy_wrap.asm:30 CMP #0
    case 0xC2A4FE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/mummy_wrap.asm:30 CMP #0
    // Overlapping static entry reached from 0xC2A4FE.
    case 0xC2A500: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/mummy_wrap.asm:31 BEQ @UNKNOWN3
    case 0xC2A501: {
        Instruction step(cpu, 0xF0, 0x00001Eu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/mummy_wrap.asm:32 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KOORI_ON
    case 0xC2A503: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000003u : 0x003103u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/mummy_wrap.asm:32 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KOORI_ON
    // Overlapping static entry reached from 0xC2A503.
    case 0xC2A505: {
        Instruction step(cpu, 0x31, 0x000085u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.and_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/mummy_wrap.asm:32 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KOORI_ON
    case 0xC2A506: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/mummy_wrap.asm:32 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KOORI_ON
    // Overlapping static entry reached from 0xC2A505.
    case 0xC2A507: {
        Instruction step(cpu, 0x0E, 0x00C7A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/mummy_wrap.asm:32 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KOORI_ON
    case 0xC2A508: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/mummy_wrap.asm:32 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KOORI_ON
    // Overlapping static entry reached from 0xC2A508.
    case 0xC2A50A: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/mummy_wrap.asm:32 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KOORI_ON
    case 0xC2A50B: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/mummy_wrap.asm:32 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KOORI_ON
    case 0xC2A50D: {
        Instruction step(cpu, 0x22, 0xC1D9FFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/mummy_wrap.asm:33 BRA @UNKNOWN3
    case 0xC2A511: {
        Instruction step(cpu, 0x80, 0x00000Eu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/mummy_wrap.asm:35 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC2A513: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000CBu : 0x002DCBu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/mummy_wrap.asm:35 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    // Overlapping static entry reached from 0xC2A513.
    case 0xC2A515: {
        Instruction step(cpu, 0x2D, 0x000E85u, 3u, AddressMode::Absolute);
        step.and_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/mummy_wrap.asm:35 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC2A516: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/mummy_wrap.asm:35 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC2A518: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/mummy_wrap.asm:35 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    // Overlapping static entry reached from 0xC2A518.
    case 0xC2A51A: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/mummy_wrap.asm:35 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC2A51B: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/mummy_wrap.asm:35 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC2A51D: {
        Instruction step(cpu, 0x22, 0xC1D9FFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/actions/mummy_wrap.asm:37 END_C_FUNCTION
    case 0xC2A521: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/mummy_wrap.asm:37 END_C_FUNCTION
    case 0xC2A522: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
