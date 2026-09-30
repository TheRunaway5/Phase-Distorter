// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/battle/giygas_hurt_prayer.asm
bool resume_battle_giygas_hurt_prayer(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/giygas_hurt_prayer.asm:3 BEGIN_C_FUNCTION
    case 0xC2C39C: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/giygas_hurt_prayer.asm:7 END_STACK_VARS
    case 0xC2C39E: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/giygas_hurt_prayer.asm:7 END_STACK_VARS
    case 0xC2C39F: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/giygas_hurt_prayer.asm:7 END_STACK_VARS
    case 0xC2C3A0: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/giygas_hurt_prayer.asm:7 END_STACK_VARS
    case 0xC2C3A1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000F0u : 0x00FFF0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/giygas_hurt_prayer.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC2C3A1.
    case 0xC2C3A3: {
        Instruction step(cpu, 0xFF, 0xAA685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/giygas_hurt_prayer.asm:7 END_STACK_VARS
    case 0xC2C3A4: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/giygas_hurt_prayer.asm:7 END_STACK_VARS
    case 0xC2C3A5: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/battle/giygas_hurt_prayer.asm:8 TAX
    case 0xC2C3A6: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/giygas_hurt_prayer.asm:9 STX @LOCAL00
    case 0xC2C3A7: {
        Instruction step(cpu, 0x86, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/giygas_hurt_prayer.asm:10 LDA #1*SECOND
    case 0xC2C3A9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00003Cu : 0x00003Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/giygas_hurt_prayer.asm:10 LDA #1*SECOND
    // Overlapping static entry reached from 0xC2C3A9.
    case 0xC2C3AB: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/giygas_hurt_prayer.asm:11 JSR WAIT
    case 0xC2C3AC: {
        Instruction step(cpu, 0x20, 0x0068FDu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/giygas_hurt_prayer.asm:12 LDA #.LOWORD(BATTLERS_TABLE) + (.SIZEOF(battler) * 8)
    case 0xC2C3AF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00001Eu : 0x00A41Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/giygas_hurt_prayer.asm:12 LDA #.LOWORD(BATTLERS_TABLE) + (.SIZEOF(battler) * 8)
    // Overlapping static entry reached from 0xC2C3AF.
    case 0xC2C3B1: {
        Instruction step(cpu, 0xA4, 0x00008Du, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/giygas_hurt_prayer.asm:13 STA CURRENT_TARGET
    case 0xC2C3B2: {
        Instruction step(cpu, 0x8D, 0x00AB74u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/giygas_hurt_prayer.asm:13 STA CURRENT_TARGET
    // Overlapping static entry reached from 0xC2C3B1.
    case 0xC2C3B3: {
        Instruction step(cpu, 0x74, 0x0000ABu, 2u, AddressMode::DirectPageIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/giygas_hurt_prayer.asm:14 JSL FIX_TARGET_NAME
    case 0xC2C3B5: {
        Instruction step(cpu, 0x22, 0xC23BF4u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/giygas_hurt_prayer.asm:15 LDA #1*SECOND
    case 0xC2C3B9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00003Cu : 0x00003Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/giygas_hurt_prayer.asm:15 LDA #1*SECOND
    // Overlapping static entry reached from 0xC2C3B9.
    case 0xC2C3BB: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/giygas_hurt_prayer.asm:16 STA GREEN_FLASH_DURATION
    case 0xC2C3BC: {
        Instruction step(cpu, 0x8D, 0x00AF73u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/giygas_hurt_prayer.asm:17 LDA #1
    case 0xC2C3BF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/giygas_hurt_prayer.asm:17 LDA #1
    // Overlapping static entry reached from 0xC2C3BF.
    case 0xC2C3C1: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/giygas_hurt_prayer.asm:18 STA IS_SMAAAAASH_ATTACK
    case 0xC2C3C2: {
        Instruction step(cpu, 0x8D, 0x00AC63u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/giygas_hurt_prayer.asm:19 LDX @LOCAL00
    case 0xC2C3C5: {
        Instruction step(cpu, 0xA6, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/giygas_hurt_prayer.asm:20 TXA
    case 0xC2C3C7: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/giygas_hurt_prayer.asm:21 JSR TWENTY_FIVE_PERCENT_VARIANCE
    case 0xC2C3C8: {
        Instruction step(cpu, 0x20, 0x006A3Cu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/giygas_hurt_prayer.asm:22 LDX #$00FF
    case 0xC2C3CB: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/giygas_hurt_prayer.asm:22 LDX #$00FF
    // Overlapping static entry reached from 0xC2C3CB.
    case 0xC2C3CD: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/giygas_hurt_prayer.asm:23 JSR CALC_RESIST_DAMAGE
    case 0xC2C3CE: {
        Instruction step(cpu, 0x20, 0x0080CBu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/giygas_hurt_prayer.asm:24 LDA #1*SECOND
    case 0xC2C3D1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00003Cu : 0x00003Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/giygas_hurt_prayer.asm:24 LDA #1*SECOND
    // Overlapping static entry reached from 0xC2C3D1.
    case 0xC2C3D3: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/giygas_hurt_prayer.asm:25 JSR WAIT
    case 0xC2C3D4: {
        Instruction step(cpu, 0x20, 0x0068FDu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/giygas_hurt_prayer.asm:26 END_C_FUNCTION
    case 0xC2C3D7: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/giygas_hurt_prayer.asm:26 END_C_FUNCTION
    case 0xC2C3D8: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
