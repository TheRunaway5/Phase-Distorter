// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/overworld/initialize_map.asm
bool resume_overworld_initialize_map(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/initialize_map.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC019C8: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/initialize_map.asm:9 END_STACK_VARS
    case 0xC019CA: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/initialize_map.asm:9 END_STACK_VARS
    case 0xC019CB: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/initialize_map.asm:9 END_STACK_VARS
    case 0xC019CC: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/initialize_map.asm:9 END_STACK_VARS
    case 0xC019CD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000F0u : 0x00FFF0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/initialize_map.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC019CD.
    case 0xC019CF: {
        Instruction step(cpu, 0xFF, 0x84685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/initialize_map.asm:9 END_STACK_VARS
    case 0xC019D0: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/initialize_map.asm:9 END_STACK_VARS
    case 0xC019D1: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_map.asm:10 STY @LOCAL00
    case 0xC019D2: {
        Instruction step(cpu, 0x84, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/initialize_map.asm:10 STY @LOCAL00
    // Overlapping static entry reached from 0xC019CF.
    case 0xC019D3: {
        Instruction step(cpu, 0x0E, 0x000486u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/initialize_map.asm:11 STX @VIRTUAL04
    case 0xC019D4: {
        Instruction step(cpu, 0x86, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/initialize_map.asm:12 STA @VIRTUAL02
    case 0xC019D6: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_map.asm:13 LDX @VIRTUAL04
    case 0xC019D8: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/initialize_map.asm:14 LDA @VIRTUAL02
    case 0xC019DA: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_map.asm:15 JSL UNKNOWN_C068F4
    case 0xC019DC: {
        Instruction step(cpu, 0x22, 0xC06B22u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/initialize_map.asm:16 LDX @VIRTUAL04
    case 0xC019E0: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/initialize_map.asm:17 LDA @VIRTUAL02
    case 0xC019E2: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_map.asm:18 JSL LOAD_MAP_AT_POSITION
    case 0xC019E4: {
        Instruction step(cpu, 0x22, 0xC0140Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/initialize_map.asm:19 LDY @LOCAL00
    case 0xC019E8: {
        Instruction step(cpu, 0xA4, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/initialize_map.asm:20 LDX @VIRTUAL04
    case 0xC019EA: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/initialize_map.asm:21 LDA @VIRTUAL02
    case 0xC019EC: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_map.asm:22 JSL UNKNOWN_C03FA9
    case 0xC019EE: {
        Instruction step(cpu, 0x22, 0xC04230u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/initialize_map.asm:23 JSL UNKNOWN_C069AF
    case 0xC019F2: {
        Instruction step(cpu, 0x22, 0xC06BDDu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/initialize_map.asm:24 END_C_FUNCTION
    case 0xC019F6: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/initialize_map.asm:24 END_C_FUNCTION
    case 0xC019F7: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
