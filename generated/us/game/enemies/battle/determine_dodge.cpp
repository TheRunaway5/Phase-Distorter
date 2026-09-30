// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/battle/determine_dodge.asm
bool resume_battle_determine_dodge(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/determine_dodge.asm:3 BEGIN_C_FUNCTION
    case 0xC284AD: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/determine_dodge.asm:7 END_STACK_VARS
    case 0xC284AF: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/determine_dodge.asm:7 END_STACK_VARS
    case 0xC284B0: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/determine_dodge.asm:7 END_STACK_VARS
    case 0xC284B1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000F0u : 0x00FFF0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/determine_dodge.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC284B1.
    case 0xC284B3: {
        Instruction step(cpu, 0xFF, 0x72AE5Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/determine_dodge.asm:7 END_STACK_VARS
    case 0xC284B4: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/battle/determine_dodge.asm:8 LDX CURRENT_TARGET
    case 0xC284B5: {
        Instruction step(cpu, 0xAE, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/determine_dodge.asm:8 LDX CURRENT_TARGET
    // Overlapping static entry reached from 0xC284B3.
    case 0xC284B7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000BDu : 0x001DBDu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/determine_dodge.asm:9 LDA a:battler::afflictions + STATUS_GROUP::PERSISTENT_EASYHEAL,X
    case 0xC284B8: {
        Instruction step(cpu, 0xBD, 0x00001Du, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/determine_dodge.asm:9 LDA a:battler::afflictions + STATUS_GROUP::PERSISTENT_EASYHEAL,X
    // Overlapping static entry reached from 0xC284B7.
    case 0xC284B9: {
        Instruction step(cpu, 0x1D, 0x002900u, 3u, AddressMode::AbsoluteIndexedX);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/determine_dodge.asm:9 LDA a:battler::afflictions + STATUS_GROUP::PERSISTENT_EASYHEAL,X
    // Overlapping static entry reached from 0xC284B7.
    case 0xC284BA: {
        Instruction step(cpu, 0x00, 0x000029u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/determine_dodge.asm:10 AND #$00FF
    case 0xC284BB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/determine_dodge.asm:10 AND #$00FF
    // Overlapping static entry reached from 0xC284B9.
    case 0xC284BC: {
        Instruction step(cpu, 0xFF, 0x03C900u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/determine_dodge.asm:10 AND #$00FF
    // Overlapping static entry reached from 0xC284BB.
    case 0xC284BD: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/determine_dodge.asm:11 CMP #STATUS_0::PARALYZED
    case 0xC284BE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/determine_dodge.asm:11 CMP #STATUS_0::PARALYZED
    // Overlapping static entry reached from 0xC284BE.
    case 0xC284C0: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/determine_dodge.asm:12 BNE @UNKNOWN0
    case 0xC284C1: {
        Instruction step(cpu, 0xD0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/determine_dodge.asm:13 LDA #0
    case 0xC284C3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/determine_dodge.asm:13 LDA #0
    // Overlapping static entry reached from 0xC284C3.
    case 0xC284C5: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/determine_dodge.asm:14 BRA @UNKNOWN8
    case 0xC284C6: {
        Instruction step(cpu, 0x80, 0x000059u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/determine_dodge.asm:16 LDX CURRENT_TARGET
    case 0xC284C8: {
        Instruction step(cpu, 0xAE, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/determine_dodge.asm:17 LDA a:battler::afflictions + STATUS_GROUP::TEMPORARY,X
    case 0xC284CB: {
        Instruction step(cpu, 0xBD, 0x00001Fu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/determine_dodge.asm:18 AND #$00FF
    case 0xC284CE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/determine_dodge.asm:18 AND #$00FF
    // Overlapping static entry reached from 0xC284CE.
    case 0xC284D0: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/determine_dodge.asm:19 CMP #STATUS_2::ASLEEP
    case 0xC284D1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/determine_dodge.asm:19 CMP #STATUS_2::ASLEEP
    // Overlapping static entry reached from 0xC284D1.
    case 0xC284D3: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/determine_dodge.asm:20 BNE @UNKNOWN1
    case 0xC284D4: {
        Instruction step(cpu, 0xD0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/determine_dodge.asm:21 LDA #0
    case 0xC284D6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/determine_dodge.asm:21 LDA #0
    // Overlapping static entry reached from 0xC284D6.
    case 0xC284D8: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/determine_dodge.asm:22 BRA @UNKNOWN8
    case 0xC284D9: {
        Instruction step(cpu, 0x80, 0x000046u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/determine_dodge.asm:24 CMP #STATUS_2::IMMOBILIZED
    case 0xC284DB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/determine_dodge.asm:24 CMP #STATUS_2::IMMOBILIZED
    // Overlapping static entry reached from 0xC284DB.
    case 0xC284DD: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/determine_dodge.asm:25 BNE @UNKNOWN2
    case 0xC284DE: {
        Instruction step(cpu, 0xD0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/determine_dodge.asm:26 LDA #0
    case 0xC284E0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/determine_dodge.asm:26 LDA #0
    // Overlapping static entry reached from 0xC284E0.
    case 0xC284E2: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/determine_dodge.asm:27 BRA @UNKNOWN8
    case 0xC284E3: {
        Instruction step(cpu, 0x80, 0x00003Cu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/determine_dodge.asm:29 CMP #STATUS_2::SOLIDIFIED
    case 0xC284E5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/determine_dodge.asm:29 CMP #STATUS_2::SOLIDIFIED
    // Overlapping static entry reached from 0xC284E5.
    case 0xC284E7: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/determine_dodge.asm:30 BNE @UNKNOWN3
    case 0xC284E8: {
        Instruction step(cpu, 0xD0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/determine_dodge.asm:31 LDA #0
    case 0xC284EA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/determine_dodge.asm:31 LDA #0
    // Overlapping static entry reached from 0xC284EA.
    case 0xC284EC: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/determine_dodge.asm:32 BRA @UNKNOWN8
    case 0xC284ED: {
        Instruction step(cpu, 0x80, 0x000032u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/determine_dodge.asm:34 LDX CURRENT_TARGET
    case 0xC284EF: {
        Instruction step(cpu, 0xAE, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/determine_dodge.asm:35 LDA a:battler::speed,X
    case 0xC284F2: {
        Instruction step(cpu, 0xBD, 0x00002Au, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/determine_dodge.asm:36 ASL
    case 0xC284F5: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/determine_dodge.asm:37 LDX CURRENT_ATTACKER
    case 0xC284F6: {
        Instruction step(cpu, 0xAE, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/determine_dodge.asm:38 SEC
    case 0xC284F9: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/battle/determine_dodge.asm:39 SBC a:battler::speed,X
    case 0xC284FA: {
        Instruction step(cpu, 0xFD, 0x00002Au, 3u, AddressMode::AbsoluteIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/determine_dodge.asm:40 STA @LOCAL00
    case 0xC284FD: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/determine_dodge.asm:41 STA @VIRTUAL02
    case 0xC284FF: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/determine_dodge.asm:42 LDA #0
    case 0xC28501: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/determine_dodge.asm:42 LDA #0
    // Overlapping static entry reached from 0xC28501.
    case 0xC28503: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/determine_dodge.asm:43 CLC
    case 0xC28504: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/determine_dodge.asm:44 SBC @VIRTUAL02
    case 0xC28505: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:798 BVS :+
    // Macro caller: src/battle/determine_dodge.asm:45 BRANCHGTS @UNKNOWN6
    case 0xC28507: {
        Instruction step(cpu, 0x70, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_set();
        return step.finish();
    }
    // include/macros.asm:799 BPL dest
    // Macro caller: src/battle/determine_dodge.asm:45 BRANCHGTS @UNKNOWN6
    case 0xC28509: {
        Instruction step(cpu, 0x10, 0x00000Eu, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:800 BRA :++
    // Macro caller: src/battle/determine_dodge.asm:45 BRANCHGTS @UNKNOWN6
    case 0xC2850B: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:802 BMI dest
    // Macro caller: src/battle/determine_dodge.asm:45 BRANCHGTS @UNKNOWN6
    case 0xC2850D: {
        Instruction step(cpu, 0x30, 0x00000Au, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/battle/determine_dodge.asm:46 LDA @LOCAL00
    case 0xC2850F: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/determine_dodge.asm:47 JSR SUCCESS_500
    case 0xC28511: {
        Instruction step(cpu, 0x20, 0x006BDBu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/determine_dodge.asm:48 CMP #0
    case 0xC28514: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/determine_dodge.asm:48 CMP #0
    // Overlapping static entry reached from 0xC28514.
    case 0xC28516: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/determine_dodge.asm:49 BNE @UNKNOWN7
    case 0xC28517: {
        Instruction step(cpu, 0xD0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/determine_dodge.asm:51 LDA #0
    case 0xC28519: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/determine_dodge.asm:51 LDA #0
    // Overlapping static entry reached from 0xC28519.
    case 0xC2851B: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/determine_dodge.asm:52 BRA @UNKNOWN8
    case 0xC2851C: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/determine_dodge.asm:54 LDA #1
    case 0xC2851E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/determine_dodge.asm:54 LDA #1
    // Overlapping static entry reached from 0xC2851E.
    case 0xC28520: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/determine_dodge.asm:56 END_C_FUNCTION
    case 0xC28521: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/determine_dodge.asm:56 END_C_FUNCTION
    case 0xC28522: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
