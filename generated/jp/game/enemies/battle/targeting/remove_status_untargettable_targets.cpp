// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/battle/remove_status_untargettable_targets.asm
bool resume_battle_remove_status_untargettable_targets(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/remove_status_untargettable_targets.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC24023: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/remove_status_untargettable_targets.asm:6 END_STACK_VARS
    case 0xC24025: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/remove_status_untargettable_targets.asm:6 END_STACK_VARS
    case 0xC24026: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/remove_status_untargettable_targets.asm:6 END_STACK_VARS
    case 0xC24027: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000F0u : 0x00FFF0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/remove_status_untargettable_targets.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC24027.
    case 0xC24029: {
        Instruction step(cpu, 0xFF, 0x00A25Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/remove_status_untargettable_targets.asm:6 END_STACK_VARS
    case 0xC2402A: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/battle/remove_status_untargettable_targets.asm:7 LDX #0
    case 0xC2402B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/remove_status_untargettable_targets.asm:7 LDX #0
    // Overlapping static entry reached from 0xC2402B.
    case 0xC2402D: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/remove_status_untargettable_targets.asm:8 STX @LOCAL00
    case 0xC2402E: {
        Instruction step(cpu, 0x86, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/remove_status_untargettable_targets.asm:9 BRA @UNKNOWN1
    case 0xC24030: {
        Instruction step(cpu, 0x80, 0x00000Du, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/remove_status_untargettable_targets.asm:11 LDX CURRENT_ATTACKER
    case 0xC24032: {
        Instruction step(cpu, 0xAE, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/remove_status_untargettable_targets.asm:12 CMP a:battler::current_action,X
    case 0xC24035: {
        Instruction step(cpu, 0xDD, 0x000004u, 3u, AddressMode::AbsoluteIndexedX);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/remove_status_untargettable_targets.asm:13 BEQ @UNKNOWN6
    case 0xC24038: {
        Instruction step(cpu, 0xF0, 0x000054u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/remove_status_untargettable_targets.asm:14 LDX @LOCAL00
    case 0xC2403A: {
        Instruction step(cpu, 0xA6, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/remove_status_untargettable_targets.asm:15 INX
    case 0xC2403C: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/remove_status_untargettable_targets.asm:16 STX @LOCAL00
    case 0xC2403D: {
        Instruction step(cpu, 0x86, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/remove_status_untargettable_targets.asm:18 TXA
    case 0xC2403F: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/remove_status_untargettable_targets.asm:19 ASL
    case 0xC24040: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/remove_status_untargettable_targets.asm:20 TAX
    case 0xC24041: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/remove_status_untargettable_targets.asm:21 LDA f:DEAD_TARGETTABLE_ACTIONS,X
    case 0xC24042: {
        Instruction step(cpu, 0xBF, 0xC474F0u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/remove_status_untargettable_targets.asm:22 BNE @UNKNOWN0
    case 0xC24046: {
        Instruction step(cpu, 0xD0, 0x0000EAu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/remove_status_untargettable_targets.asm:23 LDY #0
    case 0xC24048: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/remove_status_untargettable_targets.asm:23 LDY #0
    // Overlapping static entry reached from 0xC24048.
    case 0xC2404A: {
        Instruction step(cpu, 0x00, 0x000084u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/remove_status_untargettable_targets.asm:24 STY @LOCAL00
    case 0xC2404B: {
        Instruction step(cpu, 0x84, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/remove_status_untargettable_targets.asm:25 BRA @UNKNOWN5
    case 0xC2404D: {
        Instruction step(cpu, 0x80, 0x00003Au, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/remove_status_untargettable_targets.asm:27 TYA
    case 0xC2404F: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/remove_status_untargettable_targets.asm:28 JSL IS_CHAR_TARGETTED
    case 0xC24050: {
        Instruction step(cpu, 0x22, 0xC26F68u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/remove_status_untargettable_targets.asm:29 CMP #0
    case 0xC24054: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/remove_status_untargettable_targets.asm:29 CMP #0
    // Overlapping static entry reached from 0xC24054.
    case 0xC24056: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/remove_status_untargettable_targets.asm:30 BEQ @UNKNOWN4
    case 0xC24057: {
        Instruction step(cpu, 0xF0, 0x00002Bu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/remove_status_untargettable_targets.asm:31 LDY @LOCAL00
    case 0xC24059: {
        Instruction step(cpu, 0xA4, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/remove_status_untargettable_targets.asm:32 TYA
    case 0xC2405B: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/remove_status_untargettable_targets.asm:33 LDY #.SIZEOF(battler)
    case 0xC2405C: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/remove_status_untargettable_targets.asm:33 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2405C.
    case 0xC2405E: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/remove_status_untargettable_targets.asm:34 JSL MULT168
    case 0xC2405F: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/remove_status_untargettable_targets.asm:35 TAX
    case 0xC24063: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/remove_status_untargettable_targets.asm:36 LDA BATTLERS_TABLE+battler::consciousness,X
    case 0xC24064: {
        Instruction step(cpu, 0xBD, 0x00A1BAu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/remove_status_untargettable_targets.asm:37 AND #$00FF
    case 0xC24067: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/remove_status_untargettable_targets.asm:37 AND #$00FF
    // Overlapping static entry reached from 0xC24067.
    case 0xC24069: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/remove_status_untargettable_targets.asm:38 BEQ @UNKNOWN3
    case 0xC2406A: {
        Instruction step(cpu, 0xF0, 0x000011u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/remove_status_untargettable_targets.asm:39 LDA BATTLERS_TABLE+battler::afflictions,X
    case 0xC2406C: {
        Instruction step(cpu, 0xBD, 0x00A1CBu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/remove_status_untargettable_targets.asm:40 AND #$00FF
    case 0xC2406F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/remove_status_untargettable_targets.asm:40 AND #$00FF
    // Overlapping static entry reached from 0xC2406F.
    case 0xC24071: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/remove_status_untargettable_targets.asm:41 TAX
    case 0xC24072: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/remove_status_untargettable_targets.asm:42 CPX #STATUS_0::UNCONSCIOUS
    case 0xC24073: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/battle/remove_status_untargettable_targets.asm:42 CPX #STATUS_0::UNCONSCIOUS
    // Overlapping static entry reached from 0xC24073.
    case 0xC24075: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/remove_status_untargettable_targets.asm:43 BEQ @UNKNOWN3
    case 0xC24076: {
        Instruction step(cpu, 0xF0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/remove_status_untargettable_targets.asm:44 CPX #STATUS_0::DIAMONDIZED
    case 0xC24078: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/battle/remove_status_untargettable_targets.asm:44 CPX #STATUS_0::DIAMONDIZED
    // Overlapping static entry reached from 0xC24078.
    case 0xC2407A: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/remove_status_untargettable_targets.asm:45 BNE @UNKNOWN4
    case 0xC2407B: {
        Instruction step(cpu, 0xD0, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/remove_status_untargettable_targets.asm:47 LDY @LOCAL00
    case 0xC2407D: {
        Instruction step(cpu, 0xA4, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/remove_status_untargettable_targets.asm:48 TYA
    case 0xC2407F: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/remove_status_untargettable_targets.asm:49 JSL REMOVE_TARGET
    case 0xC24080: {
        Instruction step(cpu, 0x22, 0xC26FC8u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/remove_status_untargettable_targets.asm:51 LDY @LOCAL00
    case 0xC24084: {
        Instruction step(cpu, 0xA4, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/remove_status_untargettable_targets.asm:52 INY
    case 0xC24086: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/battle/remove_status_untargettable_targets.asm:53 STY @LOCAL00
    case 0xC24087: {
        Instruction step(cpu, 0x84, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/remove_status_untargettable_targets.asm:55 CPY #BATTLER_COUNT
    case 0xC24089: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/battle/remove_status_untargettable_targets.asm:55 CPY #BATTLER_COUNT
    // Overlapping static entry reached from 0xC24089.
    case 0xC2408B: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/remove_status_untargettable_targets.asm:56 BCC @UNKNOWN2
    case 0xC2408C: {
        Instruction step(cpu, 0x90, 0x0000C1u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/remove_status_untargettable_targets.asm:58 END_C_FUNCTION
    case 0xC2408E: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/remove_status_untargettable_targets.asm:58 END_C_FUNCTION
    case 0xC2408F: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
