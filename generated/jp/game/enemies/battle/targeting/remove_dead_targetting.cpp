// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/battle/remove_dead_targetting.asm
bool resume_battle_remove_dead_targetting(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/remove_dead_targetting.asm:3 BEGIN_C_FUNCTION
    case 0xC27023: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/remove_dead_targetting.asm:6 END_STACK_VARS
    case 0xC27025: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/remove_dead_targetting.asm:6 END_STACK_VARS
    case 0xC27026: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/remove_dead_targetting.asm:6 END_STACK_VARS
    case 0xC27027: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000F0u : 0x00FFF0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/remove_dead_targetting.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC27027.
    case 0xC27029: {
        Instruction step(cpu, 0xFF, 0x00A25Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/remove_dead_targetting.asm:6 END_STACK_VARS
    case 0xC2702A: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/battle/remove_dead_targetting.asm:7 LDX #0
    case 0xC2702B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/remove_dead_targetting.asm:7 LDX #0
    // Overlapping static entry reached from 0xC2702B.
    case 0xC2702D: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/remove_dead_targetting.asm:8 STX @LOCAL00
    case 0xC2702E: {
        Instruction step(cpu, 0x86, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/remove_dead_targetting.asm:9 BRA @UNKNOWN2
    case 0xC27030: {
        Instruction step(cpu, 0x80, 0x00002Cu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/remove_dead_targetting.asm:11 TXA
    case 0xC27032: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/remove_dead_targetting.asm:12 JSL IS_CHAR_TARGETTED
    case 0xC27033: {
        Instruction step(cpu, 0x22, 0xC26F68u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/remove_dead_targetting.asm:13 CMP #0
    case 0xC27037: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/remove_dead_targetting.asm:13 CMP #0
    // Overlapping static entry reached from 0xC27037.
    case 0xC27039: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/remove_dead_targetting.asm:14 BEQ @UNKNOWN1
    case 0xC2703A: {
        Instruction step(cpu, 0xF0, 0x00001Du, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/remove_dead_targetting.asm:15 LDX @LOCAL00
    case 0xC2703C: {
        Instruction step(cpu, 0xA6, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/remove_dead_targetting.asm:16 TXA
    case 0xC2703E: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/remove_dead_targetting.asm:17 LDY #.SIZEOF(battler)
    case 0xC2703F: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/remove_dead_targetting.asm:17 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2703F.
    case 0xC27041: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/remove_dead_targetting.asm:18 JSL MULT168
    case 0xC27042: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/remove_dead_targetting.asm:19 TAX
    case 0xC27046: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/remove_dead_targetting.asm:20 LDA BATTLERS_TABLE+battler::afflictions,X
    case 0xC27047: {
        Instruction step(cpu, 0xBD, 0x00A1CBu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/remove_dead_targetting.asm:21 AND #$00FF
    case 0xC2704A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/remove_dead_targetting.asm:21 AND #$00FF
    // Overlapping static entry reached from 0xC2704A.
    case 0xC2704C: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/remove_dead_targetting.asm:22 CMP #STATUS_0::UNCONSCIOUS
    case 0xC2704D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/remove_dead_targetting.asm:22 CMP #STATUS_0::UNCONSCIOUS
    // Overlapping static entry reached from 0xC2704D.
    case 0xC2704F: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/remove_dead_targetting.asm:23 BNE @UNKNOWN1
    case 0xC27050: {
        Instruction step(cpu, 0xD0, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/remove_dead_targetting.asm:24 LDX @LOCAL00
    case 0xC27052: {
        Instruction step(cpu, 0xA6, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/remove_dead_targetting.asm:25 TXA
    case 0xC27054: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/remove_dead_targetting.asm:26 JSL REMOVE_TARGET
    case 0xC27055: {
        Instruction step(cpu, 0x22, 0xC26FC8u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/remove_dead_targetting.asm:28 LDX @LOCAL00
    case 0xC27059: {
        Instruction step(cpu, 0xA6, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/remove_dead_targetting.asm:29 INX
    case 0xC2705B: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/remove_dead_targetting.asm:30 STX @LOCAL00
    case 0xC2705C: {
        Instruction step(cpu, 0x86, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/remove_dead_targetting.asm:32 CPX #BATTLER_COUNT
    case 0xC2705E: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/battle/remove_dead_targetting.asm:32 CPX #BATTLER_COUNT
    // Overlapping static entry reached from 0xC2705E.
    case 0xC27060: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/remove_dead_targetting.asm:33 BCC @UNKNOWN0
    case 0xC27061: {
        Instruction step(cpu, 0x90, 0x0000CFu, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/remove_dead_targetting.asm:34 END_C_FUNCTION
    case 0xC27063: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/remove_dead_targetting.asm:34 END_C_FUNCTION
    case 0xC27064: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
