// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/battle/actions/psi_fire_common.asm
bool resume_battle_actions_psi_fire_common(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/psi_fire_common.asm:3 BEGIN_C_FUNCTION
    case 0xC2957A: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/actions/psi_fire_common.asm:7 END_STACK_VARS
    case 0xC2957C: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/actions/psi_fire_common.asm:7 END_STACK_VARS
    case 0xC2957D: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/actions/psi_fire_common.asm:7 END_STACK_VARS
    case 0xC2957E: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/psi_fire_common.asm:7 END_STACK_VARS
    case 0xC2957F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000F0u : 0x00FFF0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/psi_fire_common.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC2957F.
    case 0xC29581: {
        Instruction step(cpu, 0xFF, 0xAA685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/actions/psi_fire_common.asm:7 END_STACK_VARS
    case 0xC29582: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/actions/psi_fire_common.asm:7 END_STACK_VARS
    case 0xC29583: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/battle/actions/psi_fire_common.asm:8 TAX
    case 0xC29584: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/actions/psi_fire_common.asm:9 STX @LOCAL00
    case 0xC29585: {
        Instruction step(cpu, 0x86, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/actions/psi_fire_common.asm:10 JSR PSI_SHIELD_NULLIFY
    case 0xC29587: {
        Instruction step(cpu, 0x20, 0x00941Du, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/psi_fire_common.asm:11 CMP #0
    case 0xC2958A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/psi_fire_common.asm:11 CMP #0
    // Overlapping static entry reached from 0xC2958A.
    case 0xC2958C: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/psi_fire_common.asm:12 BNE @UNKNOWN0
    case 0xC2958D: {
        Instruction step(cpu, 0xD0, 0x00001Au, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/actions/psi_fire_common.asm:13 LDX @LOCAL00
    case 0xC2958F: {
        Instruction step(cpu, 0xA6, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/psi_fire_common.asm:14 TXA
    case 0xC29591: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/actions/psi_fire_common.asm:15 JSR TWENTY_FIVE_PERCENT_VARIANCE
    case 0xC29592: {
        Instruction step(cpu, 0x20, 0x006AFDu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/psi_fire_common.asm:16 STA @LOCAL00
    case 0xC29595: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/psi_fire_common.asm:17 LDX CURRENT_TARGET
    case 0xC29597: {
        Instruction step(cpu, 0xAE, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/psi_fire_common.asm:18 LDA a:battler::fire_resist,X
    case 0xC2959A: {
        Instruction step(cpu, 0xBD, 0x00003Au, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/psi_fire_common.asm:19 AND #$00FF
    case 0xC2959D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/actions/psi_fire_common.asm:19 AND #$00FF
    // Overlapping static entry reached from 0xC2959D.
    case 0xC2959F: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/psi_fire_common.asm:20 TAX
    case 0xC295A0: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/actions/psi_fire_common.asm:21 LDA @LOCAL00
    case 0xC295A1: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/psi_fire_common.asm:22 JSR CALC_RESIST_DAMAGE
    case 0xC295A3: {
        Instruction step(cpu, 0x20, 0x008125u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/psi_fire_common.asm:23 JSR WEAKEN_SHIELD
    case 0xC295A6: {
        Instruction step(cpu, 0x20, 0x0094CEu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/actions/psi_fire_common.asm:25 END_C_FUNCTION
    case 0xC295A9: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/actions/psi_fire_common.asm:25 END_C_FUNCTION
    case 0xC295AA: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
