// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/battle/lose_hp_status.asm
bool resume_battle_lose_hp_status(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/lose_hp_status.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2BC91: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/lose_hp_status.asm:8 END_STACK_VARS
    case 0xC2BC93: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/lose_hp_status.asm:8 END_STACK_VARS
    case 0xC2BC94: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/lose_hp_status.asm:8 END_STACK_VARS
    case 0xC2BC95: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/lose_hp_status.asm:8 END_STACK_VARS
    case 0xC2BC96: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000F0u : 0x00FFF0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/lose_hp_status.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC2BC96.
    case 0xC2BC98: {
        Instruction step(cpu, 0xFF, 0x86685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/lose_hp_status.asm:8 END_STACK_VARS
    case 0xC2BC99: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/lose_hp_status.asm:8 END_STACK_VARS
    case 0xC2BC9A: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/battle/lose_hp_status.asm:9 STX @VIRTUAL02
    case 0xC2BC9B: {
        Instruction step(cpu, 0x86, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/lose_hp_status.asm:9 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC2BC98.
    case 0xC2BC9C: {
        Instruction step(cpu, 0x02, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/battle/lose_hp_status.asm:10 TAY
    case 0xC2BC9D: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/battle/lose_hp_status.asm:11 LDA a:battler::hp_target,Y
    case 0xC2BC9E: {
        Instruction step(cpu, 0xB9, 0x000013u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/lose_hp_status.asm:12 STA @LOCAL00
    case 0xC2BCA1: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/lose_hp_status.asm:13 STA @VIRTUAL04
    case 0xC2BCA3: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/lose_hp_status.asm:14 LDA @VIRTUAL02
    case 0xC2BCA5: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/lose_hp_status.asm:15 CMP @VIRTUAL04
    case 0xC2BCA7: {
        Instruction step(cpu, 0xC5, 0x000004u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:761 BCC dest
    // Macro caller: src/battle/lose_hp_status.asm:16 BLTEQ @UNKNOWN0
    case 0xC2BCA9: {
        Instruction step(cpu, 0x90, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/battle/lose_hp_status.asm:16 BLTEQ @UNKNOWN0
    case 0xC2BCAB: {
        Instruction step(cpu, 0xF0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/lose_hp_status.asm:17 LDA #0
    case 0xC2BCAD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/lose_hp_status.asm:17 LDA #0
    // Overlapping static entry reached from 0xC2BCAD.
    case 0xC2BCAF: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/lose_hp_status.asm:18 BRA @UNKNOWN1
    case 0xC2BCB0: {
        Instruction step(cpu, 0x80, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/lose_hp_status.asm:20 LDA @LOCAL00
    case 0xC2BCB2: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/lose_hp_status.asm:21 SEC
    case 0xC2BCB4: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/battle/lose_hp_status.asm:22 SBC @VIRTUAL02
    case 0xC2BCB5: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/lose_hp_status.asm:24 TAX
    case 0xC2BCB7: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/lose_hp_status.asm:25 TYA
    case 0xC2BCB8: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/lose_hp_status.asm:26 JSR SET_HP
    case 0xC2BCB9: {
        Instruction step(cpu, 0x20, 0x007065u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/lose_hp_status.asm:27 END_C_FUNCTION
    case 0xC2BCBC: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/lose_hp_status.asm:27 END_C_FUNCTION
    case 0xC2BCBD: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
