// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/battle/actions/level_2_attack.asm
bool resume_battle_actions_level_2_attack(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/level_2_attack.asm:3 BEGIN_C_FUNCTION
    case 0xC28523: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/actions/level_2_attack.asm:6 END_STACK_VARS
    case 0xC28525: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/actions/level_2_attack.asm:6 END_STACK_VARS
    case 0xC28526: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/level_2_attack.asm:6 END_STACK_VARS
    case 0xC28527: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000F0u : 0x00FFF0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/level_2_attack.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC28527.
    case 0xC28529: {
        Instruction step(cpu, 0xFF, 0x70AE5Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/actions/level_2_attack.asm:6 END_STACK_VARS
    case 0xC2852A: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/battle/actions/level_2_attack.asm:7 LDX CURRENT_ATTACKER
    case 0xC2852B: {
        Instruction step(cpu, 0xAE, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/level_2_attack.asm:7 LDX CURRENT_ATTACKER
    // Overlapping static entry reached from 0xC28529.
    case 0xC2852D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000BDu : 0x0026BDu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/level_2_attack.asm:8 LDA a:battler::offense,X
    case 0xC2852E: {
        Instruction step(cpu, 0xBD, 0x000026u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/level_2_attack.asm:8 LDA a:battler::offense,X
    // Overlapping static entry reached from 0xC2852D.
    case 0xC2852F: {
        Instruction step(cpu, 0x26, 0x000000u, 2u, AddressMode::DirectPage);
        step.rotate_left();
        return step.finish();
    }
    // src/battle/actions/level_2_attack.asm:8 LDA a:battler::offense,X
    // Overlapping static entry reached from 0xC2852D.
    case 0xC28530: {
        Instruction step(cpu, 0x00, 0x00000Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/level_2_attack.asm:9 ASL
    case 0xC28531: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/actions/level_2_attack.asm:10 LDX CURRENT_TARGET
    case 0xC28532: {
        Instruction step(cpu, 0xAE, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/level_2_attack.asm:11 SEC
    case 0xC28535: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/battle/actions/level_2_attack.asm:12 SBC a:battler::defense,X
    case 0xC28536: {
        Instruction step(cpu, 0xFD, 0x000028u, 3u, AddressMode::AbsoluteIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/actions/level_2_attack.asm:13 STA @LOCAL00
    case 0xC28539: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/level_2_attack.asm:14 CLC
    case 0xC2853B: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/actions/level_2_attack.asm:15 SBC #0
    case 0xC2853C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/actions/level_2_attack.asm:15 SBC #0
    // Overlapping static entry reached from 0xC2853C.
    case 0xC2853E: {
        Instruction step(cpu, 0x00, 0x000050u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:807 BVC :+
    // Macro caller: src/battle/actions/level_2_attack.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC2853F: {
        Instruction step(cpu, 0x50, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_clear();
        return step.finish();
    }
    // include/macros.asm:808 BPL dest
    // Macro caller: src/battle/actions/level_2_attack.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC28541: {
        Instruction step(cpu, 0x10, 0x00000Bu, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:809 BRA :++
    // Macro caller: src/battle/actions/level_2_attack.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC28543: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:811 BMI dest
    // Macro caller: src/battle/actions/level_2_attack.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC28545: {
        Instruction step(cpu, 0x30, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/battle/actions/level_2_attack.asm:17 LDA @LOCAL00
    case 0xC28547: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/level_2_attack.asm:18 JSR TWENTY_FIVE_PERCENT_VARIANCE
    case 0xC28549: {
        Instruction step(cpu, 0x20, 0x006AFDu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/level_2_attack.asm:19 STA @LOCAL00
    case 0xC2854C: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/level_2_attack.asm:21 LDA @LOCAL00
    case 0xC2854E: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/level_2_attack.asm:22 CLC
    case 0xC28550: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/actions/level_2_attack.asm:23 SBC #0
    case 0xC28551: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/actions/level_2_attack.asm:23 SBC #0
    // Overlapping static entry reached from 0xC28551.
    case 0xC28553: {
        Instruction step(cpu, 0x00, 0x000070u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:798 BVS :+
    // Macro caller: src/battle/actions/level_2_attack.asm:24 BRANCHGTS @UNKNOWN5
    case 0xC28554: {
        Instruction step(cpu, 0x70, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_set();
        return step.finish();
    }
    // include/macros.asm:799 BPL dest
    // Macro caller: src/battle/actions/level_2_attack.asm:24 BRANCHGTS @UNKNOWN5
    case 0xC28556: {
        Instruction step(cpu, 0x10, 0x000009u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:800 BRA :++
    // Macro caller: src/battle/actions/level_2_attack.asm:24 BRANCHGTS @UNKNOWN5
    case 0xC28558: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:802 BMI dest
    // Macro caller: src/battle/actions/level_2_attack.asm:24 BRANCHGTS @UNKNOWN5
    case 0xC2855A: {
        Instruction step(cpu, 0x30, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/battle/actions/level_2_attack.asm:25 LDA #1
    case 0xC2855C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/level_2_attack.asm:25 LDA #1
    // Overlapping static entry reached from 0xC2855C.
    case 0xC2855E: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/level_2_attack.asm:26 STA @LOCAL00
    case 0xC2855F: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/level_2_attack.asm:28 LDX #$00FF
    case 0xC28561: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/level_2_attack.asm:28 LDX #$00FF
    // Overlapping static entry reached from 0xC28561.
    case 0xC28563: {
        Instruction step(cpu, 0x00, 0x0000A5u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/level_2_attack.asm:29 LDA @LOCAL00
    case 0xC28564: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/level_2_attack.asm:30 JSR CALC_RESIST_DAMAGE
    case 0xC28566: {
        Instruction step(cpu, 0x20, 0x008125u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/actions/level_2_attack.asm:31 END_C_FUNCTION
    case 0xC28569: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/actions/level_2_attack.asm:31 END_C_FUNCTION
    case 0xC2856A: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
