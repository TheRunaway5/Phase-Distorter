// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/battle/calc_damage_reduction.asm
bool resume_battle_calc_damage_reduction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/calc_damage_reduction.asm:3 BEGIN_C_FUNCTION
    case 0xC28125: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/calc_damage_reduction.asm:10 END_STACK_VARS
    case 0xC28127: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/calc_damage_reduction.asm:10 END_STACK_VARS
    case 0xC28128: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/calc_damage_reduction.asm:10 END_STACK_VARS
    case 0xC28129: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/calc_damage_reduction.asm:10 END_STACK_VARS
    case 0xC2812A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EEu : 0x00FFEEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/calc_damage_reduction.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC2812A.
    case 0xC2812C: {
        Instruction step(cpu, 0xFF, 0x9B685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/calc_damage_reduction.asm:10 END_STACK_VARS
    case 0xC2812D: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/calc_damage_reduction.asm:10 END_STACK_VARS
    case 0xC2812E: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:11 TXY
    case 0xC2812F: {
        Instruction step(cpu, 0x9B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_y();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:12 STA @VIRTUAL02
    case 0xC28130: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:13 LDA #$0000
    case 0xC28132: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:13 LDA #$0000
    // Overlapping static entry reached from 0xC28132.
    case 0xC28134: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:14 CLC
    case 0xC28135: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:15 SBC @VIRTUAL02
    case 0xC28136: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:807 BVC :+
    // Macro caller: src/battle/calc_damage_reduction.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC28138: {
        Instruction step(cpu, 0x50, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_clear();
        return step.finish();
    }
    // include/macros.asm:808 BPL dest
    // Macro caller: src/battle/calc_damage_reduction.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC2813A: {
        Instruction step(cpu, 0x10, 0x000009u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:809 BRA :++
    // Macro caller: src/battle/calc_damage_reduction.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC2813C: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:811 BMI dest
    // Macro caller: src/battle/calc_damage_reduction.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC2813E: {
        Instruction step(cpu, 0x30, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:17 LDA #0
    case 0xC28140: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:17 LDA #0
    // Overlapping static entry reached from 0xC28140.
    case 0xC28142: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:18 STA @VIRTUAL02
    case 0xC28143: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:20 CPY #$00FF
    case 0xC28145: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:20 CPY #$00FF
    // Overlapping static entry reached from 0xC28145.
    case 0xC28147: {
        Instruction step(cpu, 0x00, 0x0000B0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:21 BCS @UNKNOWN3
    case 0xC28148: {
        Instruction step(cpu, 0xB0, 0x00000Au, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:22 LDX @VIRTUAL02
    case 0xC2814A: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:23 TYA
    case 0xC2814C: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:24 SEP #PROC_FLAGS::ACCUM8
    case 0xC2814D: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:25 JSR TRUNCATE_16_TO_8
    case 0xC2814F: {
        Instruction step(cpu, 0x20, 0x0069F8u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:26 STA @VIRTUAL02
    case 0xC28152: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:29 LDX CURRENT_TARGET
    case 0xC28154: {
        Instruction step(cpu, 0xAE, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:30 LDA a:battler::consciousness,X
    case 0xC28157: {
        Instruction step(cpu, 0xBD, 0x00000Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:31 AND #$00FF
    case 0xC2815A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:31 AND #$00FF
    // Overlapping static entry reached from 0xC2815A.
    case 0xC2815C: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:32 CMP #1
    case 0xC2815D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:32 CMP #1
    // Overlapping static entry reached from 0xC2815D.
    case 0xC2815F: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/calc_damage_reduction.asm:33 BNEL @UNKNOWN20
    case 0xC28160: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/calc_damage_reduction.asm:33 BNEL @UNKNOWN20
    case 0xC28162: {
        Instruction step(cpu, 0x4C, 0x0082F4u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:34 LDX CURRENT_TARGET
    case 0xC28165: {
        Instruction step(cpu, 0xAE, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:35 LDA a:battler::afflictions + STATUS_GROUP::PERSISTENT_EASYHEAL,X
    case 0xC28168: {
        Instruction step(cpu, 0xBD, 0x00001Du, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:36 AND #$00FF
    case 0xC2816B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:36 AND #$00FF
    // Overlapping static entry reached from 0xC2816B.
    case 0xC2816D: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:37 CMP #STATUS_0::UNCONSCIOUS
    case 0xC2816E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:37 CMP #STATUS_0::UNCONSCIOUS
    // Overlapping static entry reached from 0xC2816E.
    case 0xC28170: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/calc_damage_reduction.asm:38 BEQL @UNKNOWN20
    case 0xC28171: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/calc_damage_reduction.asm:38 BEQL @UNKNOWN20
    case 0xC28173: {
        Instruction step(cpu, 0x4C, 0x0082F4u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:39 LDX CURRENT_TARGET
    case 0xC28176: {
        Instruction step(cpu, 0xAE, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:40 LDA a:battler::guarding,X
    case 0xC28179: {
        Instruction step(cpu, 0xBD, 0x000024u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:41 AND #$00FF
    case 0xC2817C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:41 AND #$00FF
    // Overlapping static entry reached from 0xC2817C.
    case 0xC2817E: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:42 CMP #1
    case 0xC2817F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:42 CMP #1
    // Overlapping static entry reached from 0xC2817F.
    case 0xC28181: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:43 BNE @UNKNOWN6
    case 0xC28182: {
        Instruction step(cpu, 0xD0, 0x00001Au, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:44 LDX CURRENT_ATTACKER
    case 0xC28184: {
        Instruction step(cpu, 0xAE, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:45 LDA a:battler::current_action,X
    case 0xC28187: {
        Instruction step(cpu, 0xBD, 0x000004u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:46 JSR GET_BATTLE_ACTION_TYPE
    case 0xC2818A: {
        Instruction step(cpu, 0x20, 0x00698Bu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:47 CMP #ACTION_TYPE::PHYSICAL
    case 0xC2818D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:47 CMP #ACTION_TYPE::PHYSICAL
    // Overlapping static entry reached from 0xC2818D.
    case 0xC2818F: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:48 BNE @UNKNOWN6
    case 0xC28190: {
        Instruction step(cpu, 0xD0, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:49 SEP #PROC_FLAGS::INDEX8
    case 0xC28192: {
        Instruction step(cpu, 0xE2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:50 LDY #1
    case 0xC28194: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000001u : 0x00A501u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:51 LDA @VIRTUAL02
    case 0xC28196: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:51 LDA @VIRTUAL02
    // Overlapping static entry reached from 0xC28194.
    case 0xC28197: {
        Instruction step(cpu, 0x02, 0x000022u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:52 JSL ASR16
    case 0xC28198: {
        Instruction step(cpu, 0x22, 0xC0925Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:53 STA @VIRTUAL02
    case 0xC2819C: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:55 REP #PROC_FLAGS::INDEX8
    case 0xC2819E: {
        Instruction step(cpu, 0xC2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:56 LDX CURRENT_ATTACKER
    case 0xC281A0: {
        Instruction step(cpu, 0xAE, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:57 LDA a:battler::current_action,X
    case 0xC281A3: {
        Instruction step(cpu, 0xBD, 0x000004u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:58 JSR GET_BATTLE_ACTION_TYPE
    case 0xC281A6: {
        Instruction step(cpu, 0x20, 0x00698Bu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:59 CMP #ACTION_TYPE::PHYSICAL
    case 0xC281A9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:59 CMP #ACTION_TYPE::PHYSICAL
    // Overlapping static entry reached from 0xC281A9.
    case 0xC281AB: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:60 BNE @UNKNOWN9
    case 0xC281AC: {
        Instruction step(cpu, 0xD0, 0x00001Fu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:61 LDX CURRENT_TARGET
    case 0xC281AE: {
        Instruction step(cpu, 0xAE, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:62 LDA a:battler::afflictions + STATUS_GROUP::SHIELD,X
    case 0xC281B1: {
        Instruction step(cpu, 0xBD, 0x000023u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:63 AND #$00FF
    case 0xC281B4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:63 AND #$00FF
    // Overlapping static entry reached from 0xC281B4.
    case 0xC281B6: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:64 CMP #STATUS_6::SHIELD_POWER
    case 0xC281B7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:64 CMP #STATUS_6::SHIELD_POWER
    // Overlapping static entry reached from 0xC281B7.
    case 0xC281B9: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:65 BEQ @UNKNOWN8
    case 0xC281BA: {
        Instruction step(cpu, 0xF0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:66 CMP #STATUS_6::SHIELD
    case 0xC281BC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:66 CMP #STATUS_6::SHIELD
    // Overlapping static entry reached from 0xC281BC.
    case 0xC281BE: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:67 BNE @UNKNOWN9
    case 0xC281BF: {
        Instruction step(cpu, 0xD0, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:69 SEP #PROC_FLAGS::INDEX8
    case 0xC281C1: {
        Instruction step(cpu, 0xE2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:70 LDY #1
    case 0xC281C3: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000001u : 0x00A501u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:71 LDA @VIRTUAL02
    case 0xC281C5: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:71 LDA @VIRTUAL02
    // Overlapping static entry reached from 0xC281C3.
    case 0xC281C6: {
        Instruction step(cpu, 0x02, 0x000022u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:72 JSL ASR16
    case 0xC281C7: {
        Instruction step(cpu, 0x22, 0xC0925Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:73 STA @VIRTUAL02
    case 0xC281CB: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:75 LDA @VIRTUAL02
    case 0xC281CD: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:76 BNE @UNKNOWN10
    case 0xC281CF: {
        Instruction step(cpu, 0xD0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:77 LDA #1
    case 0xC281D1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:77 LDA #1
    // Overlapping static entry reached from 0xC281D1.
    case 0xC281D3: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:78 STA @VIRTUAL02
    case 0xC281D4: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:80 REP #PROC_FLAGS::INDEX8
    case 0xC281D6: {
        Instruction step(cpu, 0xC2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:81 LDX @VIRTUAL02
    case 0xC281D8: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:82 LDA CURRENT_TARGET
    case 0xC281DA: {
        Instruction step(cpu, 0xAD, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:83 JSR CALC_DAMAGE
    case 0xC281DD: {
        Instruction step(cpu, 0x20, 0x007EAFu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:84 CMP #0
    case 0xC281E0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:84 CMP #0
    // Overlapping static entry reached from 0xC281E0.
    case 0xC281E2: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:85 BEQ @UNKNOWN11
    case 0xC281E3: {
        Instruction step(cpu, 0xF0, 0x00000Fu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:86 LDX CURRENT_TARGET
    case 0xC281E5: {
        Instruction step(cpu, 0xAE, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:87 LDA a:battler::hp,X
    case 0xC281E8: {
        Instruction step(cpu, 0xBD, 0x000011u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:88 BNE @UNKNOWN11
    case 0xC281EB: {
        Instruction step(cpu, 0xD0, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:89 LDA CURRENT_TARGET
    case 0xC281ED: {
        Instruction step(cpu, 0xAD, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:90 JSL KO_TARGET
    case 0xC281F0: {
        Instruction step(cpu, 0x22, 0xC27550u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:92 LDA @VIRTUAL02
    case 0xC281F4: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:93 BNE @UNKNOWN12
    case 0xC281F6: {
        Instruction step(cpu, 0xD0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:94 LDA #1
    case 0xC281F8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:94 LDA #1
    // Overlapping static entry reached from 0xC281F8.
    case 0xC281FA: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:95 STA @VIRTUAL02
    case 0xC281FB: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:97 LDA SHIELD_HAS_NULLIFIED_DAMAGE
    case 0xC281FD: {
        Instruction step(cpu, 0xAD, 0x00AA94u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/calc_damage_reduction.asm:98 BNEL @SHIELDS_DONE
    case 0xC28200: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/calc_damage_reduction.asm:98 BNEL @SHIELDS_DONE
    case 0xC28202: {
        Instruction step(cpu, 0x4C, 0x008290u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:99 LDX CURRENT_TARGET
    case 0xC28205: {
        Instruction step(cpu, 0xAE, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:100 LDA a:battler::afflictions + STATUS_GROUP::SHIELD,X
    case 0xC28208: {
        Instruction step(cpu, 0xBD, 0x000023u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:101 AND #$00FF
    case 0xC2820B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:101 AND #$00FF
    // Overlapping static entry reached from 0xC2820B.
    case 0xC2820D: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:102 CMP #STATUS_6::SHIELD_POWER
    case 0xC2820E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:102 CMP #STATUS_6::SHIELD_POWER
    // Overlapping static entry reached from 0xC2820E.
    case 0xC28210: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:103 BEQ @UNKNOWN14
    case 0xC28211: {
        Instruction step(cpu, 0xF0, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:104 CMP #STATUS_6::SHIELD
    case 0xC28213: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:104 CMP #STATUS_6::SHIELD
    // Overlapping static entry reached from 0xC28213.
    case 0xC28215: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:105 BEQ @WEAKEN_SHIELD
    case 0xC28216: {
        Instruction step(cpu, 0xF0, 0x000048u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:106 BRA @SHIELDS_DONE
    case 0xC28218: {
        Instruction step(cpu, 0x80, 0x000076u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:108 LDA ENEMY_PERFORMING_FINAL_ATTACK
    case 0xC2821A: {
        Instruction step(cpu, 0xAD, 0x00AA90u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:109 BNE @WEAKEN_SHIELD
    case 0xC2821D: {
        Instruction step(cpu, 0xD0, 0x000041u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:110 SEP #PROC_FLAGS::INDEX8
    case 0xC2821F: {
        Instruction step(cpu, 0xE2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:111 LDY #1
    case 0xC28221: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000001u : 0x00A501u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:112 LDA @VIRTUAL02
    case 0xC28223: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:112 LDA @VIRTUAL02
    // Overlapping static entry reached from 0xC28221.
    case 0xC28224: {
        Instruction step(cpu, 0x02, 0x000022u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:113 JSL ASR16
    case 0xC28225: {
        Instruction step(cpu, 0x22, 0xC0925Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:114 STA @VIRTUAL02
    case 0xC28229: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:115 CMP #0
    case 0xC2822B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:115 CMP #0
    // Overlapping static entry reached from 0xC2822B.
    case 0xC2822D: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:116 BNE @DAMAGE_ABOVE_ZERO_AFTER_SHIELD
    case 0xC2822E: {
        Instruction step(cpu, 0xD0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:117 LDA #1
    case 0xC28230: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:117 LDA #1
    // Overlapping static entry reached from 0xC28230.
    case 0xC28232: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:118 STA @VIRTUAL02
    case 0xC28233: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/calc_damage_reduction.asm:121 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_POWER_TURN
    case 0xC28235: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000B1u : 0x0070B1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/calc_damage_reduction.asm:121 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_POWER_TURN
    // Overlapping static entry reached from 0xC28235.
    case 0xC28237: {
        Instruction step(cpu, 0x70, 0x000085u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_set();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/calc_damage_reduction.asm:121 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_POWER_TURN
    case 0xC28238: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/calc_damage_reduction.asm:121 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_POWER_TURN
    // Overlapping static entry reached from 0xC28237.
    case 0xC28239: {
        Instruction step(cpu, 0x0E, 0x00EFA9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/calc_damage_reduction.asm:121 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_POWER_TURN
    case 0xC2823A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000EFu : 0x0000EFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/calc_damage_reduction.asm:121 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_POWER_TURN
    // Overlapping static entry reached from 0xC2823A.
    case 0xC2823C: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/calc_damage_reduction.asm:121 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_POWER_TURN
    case 0xC2823D: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/calc_damage_reduction.asm:121 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_POWER_TURN
    case 0xC2823F: {
        Instruction step(cpu, 0x22, 0xC1DC1Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:122 JSR SWAP_ATTACKER_WITH_TARGET
    case 0xC28243: {
        Instruction step(cpu, 0x20, 0x007E8Au, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:123 LDX @VIRTUAL02
    case 0xC28246: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:124 LDA CURRENT_TARGET
    case 0xC28248: {
        Instruction step(cpu, 0xAD, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:125 JSR CALC_DAMAGE
    case 0xC2824B: {
        Instruction step(cpu, 0x20, 0x007EAFu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:126 LDX CURRENT_TARGET
    case 0xC2824E: {
        Instruction step(cpu, 0xAE, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:127 LDA a:battler::hp,X
    case 0xC28251: {
        Instruction step(cpu, 0xBD, 0x000011u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:128 BNE @STILL_HAS_HP_AFTER_REFLECT
    case 0xC28254: {
        Instruction step(cpu, 0xD0, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:129 LDA CURRENT_TARGET
    case 0xC28256: {
        Instruction step(cpu, 0xAD, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:130 JSL KO_TARGET
    case 0xC28259: {
        Instruction step(cpu, 0x22, 0xC27550u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:132 JSR SWAP_ATTACKER_WITH_TARGET
    case 0xC2825D: {
        Instruction step(cpu, 0x20, 0x007E8Au, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:134 LDA CURRENT_TARGET
    case 0xC28260: {
        Instruction step(cpu, 0xAD, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:135 CLC
    case 0xC28263: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:136 ADC #battler::shield_hp
    case 0xC28264: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000025u : 0x000025u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:136 ADC #battler::shield_hp
    // Overlapping static entry reached from 0xC28264.
    case 0xC28266: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:137 TAX
    case 0xC28267: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:138 SEP #PROC_FLAGS::ACCUM8
    case 0xC28268: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:139 LDA __BSS_START__,X
    case 0xC2826A: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:140 DEC
    case 0xC2826D: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:141 STA __BSS_START__,X
    case 0xC2826E: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:142 REP #PROC_FLAGS::ACCUM8
    case 0xC28271: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:143 AND #$00FF
    case 0xC28273: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:143 AND #$00FF
    // Overlapping static entry reached from 0xC28273.
    case 0xC28275: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:144 BNE @SHIELDS_DONE
    case 0xC28276: {
        Instruction step(cpu, 0xD0, 0x000018u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:145 LDX CURRENT_TARGET
    case 0xC28278: {
        Instruction step(cpu, 0xAE, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:146 SEP #PROC_FLAGS::ACCUM8
    case 0xC2827B: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:147 STZ a:battler::afflictions + STATUS_GROUP::SHIELD,X
    case 0xC2827D: {
        Instruction step(cpu, 0x9E, 0x000023u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:148 REP #PROC_FLAGS::ACCUM8
    case 0xC28280: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/calc_damage_reduction.asm:149 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_OFF
    case 0xC28282: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000099u : 0x007099u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/calc_damage_reduction.asm:149 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_OFF
    // Overlapping static entry reached from 0xC28282.
    case 0xC28284: {
        Instruction step(cpu, 0x70, 0x000085u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_set();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/calc_damage_reduction.asm:149 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_OFF
    case 0xC28285: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/calc_damage_reduction.asm:149 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_OFF
    // Overlapping static entry reached from 0xC28284.
    case 0xC28286: {
        Instruction step(cpu, 0x0E, 0x00EFA9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/calc_damage_reduction.asm:149 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_OFF
    case 0xC28287: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000EFu : 0x0000EFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/calc_damage_reduction.asm:149 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_OFF
    // Overlapping static entry reached from 0xC28287.
    case 0xC28289: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/calc_damage_reduction.asm:149 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_OFF
    case 0xC2828A: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/calc_damage_reduction.asm:149 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_OFF
    case 0xC2828C: {
        Instruction step(cpu, 0x22, 0xC1DC1Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:152 LDX CURRENT_TARGET
    case 0xC28290: {
        Instruction step(cpu, 0xAE, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:153 LDA a:battler::ally_or_enemy,X
    case 0xC28293: {
        Instruction step(cpu, 0xBD, 0x00000Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:154 AND #$00FF
    case 0xC28296: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:154 AND #$00FF
    // Overlapping static entry reached from 0xC28296.
    case 0xC28298: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:155 BNE @UNKNOWN19
    case 0xC28299: {
        Instruction step(cpu, 0xD0, 0x000021u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:156 LDX CURRENT_TARGET
    case 0xC2829B: {
        Instruction step(cpu, 0xAE, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:157 LDA a:battler::npc_id,X
    case 0xC2829E: {
        Instruction step(cpu, 0xBD, 0x00000Fu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:158 AND #$00FF
    case 0xC282A1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:158 AND #$00FF
    // Overlapping static entry reached from 0xC282A1.
    case 0xC282A3: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:159 BNE @UNKNOWN19
    case 0xC282A4: {
        Instruction step(cpu, 0xD0, 0x000016u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:160 LDX CURRENT_TARGET
    case 0xC282A6: {
        Instruction step(cpu, 0xAE, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:161 LDA a:battler::row,X
    case 0xC282A9: {
        Instruction step(cpu, 0xBD, 0x000010u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:162 AND #$00FF
    case 0xC282AC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:162 AND #$00FF
    // Overlapping static entry reached from 0xC282AC.
    case 0xC282AE: {
        Instruction step(cpu, 0x00, 0x0000A0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:163 LDY #.SIZEOF(char_struct)
    case 0xC282AF: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Fu : 0x00005Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:163 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC282AF.
    case 0xC282B1: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:164 JSL MULT168
    case 0xC282B2: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:165 TAX
    case 0xC282B6: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:166 LDA PARTY_CHARACTERS+char_struct::current_hp,X
    case 0xC282B7: {
        Instruction step(cpu, 0xBD, 0x009A13u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:167 BEQ @UNKNOWN20
    case 0xC282BA: {
        Instruction step(cpu, 0xF0, 0x000038u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:169 LDX CURRENT_TARGET
    case 0xC282BC: {
        Instruction step(cpu, 0xAE, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:170 LDA a:battler::afflictions + STATUS_GROUP::TEMPORARY,X
    case 0xC282BF: {
        Instruction step(cpu, 0xBD, 0x00001Fu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:171 AND #$00FF
    case 0xC282C2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:171 AND #$00FF
    // Overlapping static entry reached from 0xC282C2.
    case 0xC282C4: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:172 CMP #STATUS_2::ASLEEP
    case 0xC282C5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:172 CMP #STATUS_2::ASLEEP
    // Overlapping static entry reached from 0xC282C5.
    case 0xC282C7: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:173 BNE @UNKNOWN20
    case 0xC282C8: {
        Instruction step(cpu, 0xD0, 0x00002Au, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:174 SEP #PROC_FLAGS::ACCUM8
    case 0xC282CA: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:175 LDA #CHANCE_OF_WAKING_UP_WHEN_ATTACKED
    case 0xC282CC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000080u : 0x002080u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:176 JSR SUCCESS_255
    case 0xC282CE: {
        Instruction step(cpu, 0x20, 0x006BB8u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:176 JSR SUCCESS_255
    // Overlapping static entry reached from 0xC282CC.
    case 0xC282CF: {
        Instruction step(cpu, 0xB8, 0x000000u, 1u, AddressMode::Implied);
        step.clear_overflow();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:176 JSR SUCCESS_255
    // Overlapping static entry reached from 0xC282CF.
    case 0xC282D0: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:178 CMP #$0000
    case 0xC282D1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:178 CMP #$0000
    // Overlapping static entry reached from 0xC282D1.
    case 0xC282D3: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:179 BEQ @UNKNOWN20
    case 0xC282D4: {
        Instruction step(cpu, 0xF0, 0x00001Eu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:180 LDX CURRENT_TARGET
    case 0xC282D6: {
        Instruction step(cpu, 0xAE, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:181 STZ a:battler::current_action,X
    case 0xC282D9: {
        Instruction step(cpu, 0x9E, 0x000004u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:182 LDX CURRENT_TARGET
    case 0xC282DC: {
        Instruction step(cpu, 0xAE, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:183 SEP #PROC_FLAGS::ACCUM8
    case 0xC282DF: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:184 STZ a:battler::afflictions + STATUS_GROUP::TEMPORARY,X
    case 0xC282E1: {
        Instruction step(cpu, 0x9E, 0x00001Fu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:185 REP #PROC_FLAGS::ACCUM8
    case 0xC282E4: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/calc_damage_reduction.asm:186 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NEMURI_OFF
    case 0xC282E6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000054u : 0x006F54u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/calc_damage_reduction.asm:186 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NEMURI_OFF
    // Overlapping static entry reached from 0xC282E6.
    case 0xC282E8: {
        Instruction step(cpu, 0x6F, 0xA90E85u, 4u, AddressMode::Long);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/calc_damage_reduction.asm:186 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NEMURI_OFF
    case 0xC282E9: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/calc_damage_reduction.asm:186 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NEMURI_OFF
    case 0xC282EB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000EFu : 0x0000EFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/calc_damage_reduction.asm:186 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NEMURI_OFF
    // Overlapping static entry reached from 0xC282E8.
    case 0xC282EC: {
        Instruction step(cpu, 0xEF, 0x108500u, 4u, AddressMode::Long);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/calc_damage_reduction.asm:186 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NEMURI_OFF
    // Overlapping static entry reached from 0xC282EB.
    case 0xC282ED: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/calc_damage_reduction.asm:186 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NEMURI_OFF
    case 0xC282EE: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/calc_damage_reduction.asm:186 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NEMURI_OFF
    case 0xC282F0: {
        Instruction step(cpu, 0x22, 0xC1DC1Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/calc_damage_reduction.asm:188 LDA @VIRTUAL02
    case 0xC282F4: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/calc_damage_reduction.asm:189 END_C_FUNCTION
    case 0xC282F6: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/calc_damage_reduction.asm:189 END_C_FUNCTION
    case 0xC282F7: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
