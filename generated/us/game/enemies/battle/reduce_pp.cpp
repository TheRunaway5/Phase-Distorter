// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/battle/reduce_pp.asm
bool resume_battle_reduce_pp(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/reduce_pp.asm:3 BEGIN_C_FUNCTION
    case 0xC2721D: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/reduce_pp.asm:8 END_STACK_VARS
    case 0xC2721F: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/reduce_pp.asm:8 END_STACK_VARS
    case 0xC27220: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/reduce_pp.asm:8 END_STACK_VARS
    case 0xC27221: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/reduce_pp.asm:8 END_STACK_VARS
    case 0xC27222: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000F0u : 0x00FFF0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/reduce_pp.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC27222.
    case 0xC27224: {
        Instruction step(cpu, 0xFF, 0x86685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/reduce_pp.asm:8 END_STACK_VARS
    case 0xC27225: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/reduce_pp.asm:8 END_STACK_VARS
    case 0xC27226: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/battle/reduce_pp.asm:9 STX @VIRTUAL02
    case 0xC27227: {
        Instruction step(cpu, 0x86, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/reduce_pp.asm:9 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC27224.
    case 0xC27228: {
        Instruction step(cpu, 0x02, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/battle/reduce_pp.asm:10 TAY
    case 0xC27229: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/battle/reduce_pp.asm:11 LDA a:battler::pp_target,Y
    case 0xC2722A: {
        Instruction step(cpu, 0xB9, 0x000019u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/reduce_pp.asm:12 STA @LOCAL00
    case 0xC2722D: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/reduce_pp.asm:13 STA @VIRTUAL04
    case 0xC2722F: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/reduce_pp.asm:14 LDA @VIRTUAL02
    case 0xC27231: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/reduce_pp.asm:15 CMP @VIRTUAL04
    case 0xC27233: {
        Instruction step(cpu, 0xC5, 0x000004u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:761 BCC dest
    // Macro caller: src/battle/reduce_pp.asm:16 BLTEQ @UNKNOWN0
    case 0xC27235: {
        Instruction step(cpu, 0x90, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/battle/reduce_pp.asm:16 BLTEQ @UNKNOWN0
    case 0xC27237: {
        Instruction step(cpu, 0xF0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/reduce_pp.asm:17 LDA #0
    case 0xC27239: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/reduce_pp.asm:17 LDA #0
    // Overlapping static entry reached from 0xC27239.
    case 0xC2723B: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/reduce_pp.asm:18 BRA @UNKNOWN1
    case 0xC2723C: {
        Instruction step(cpu, 0x80, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/reduce_pp.asm:20 LDA @LOCAL00
    case 0xC2723E: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/reduce_pp.asm:21 SEC
    case 0xC27240: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/battle/reduce_pp.asm:22 SBC @VIRTUAL02
    case 0xC27241: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/reduce_pp.asm:24 TAX
    case 0xC27243: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/reduce_pp.asm:25 TYA
    case 0xC27244: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/reduce_pp.asm:26 JSR SET_PP
    case 0xC27245: {
        Instruction step(cpu, 0x20, 0x007191u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/reduce_pp.asm:27 END_C_FUNCTION
    case 0xC27248: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/reduce_pp.asm:27 END_C_FUNCTION
    case 0xC27249: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
