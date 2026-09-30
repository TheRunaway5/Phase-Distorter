// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/overworld/get_town_map_id.asm
bool resume_overworld_get_town_map_id(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/get_town_map_id.asm:3 BEGIN_C_FUNCTION
    case 0xC4A544: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/get_town_map_id.asm:7 END_STACK_VARS
    case 0xC4A546: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/get_town_map_id.asm:7 END_STACK_VARS
    case 0xC4A547: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/get_town_map_id.asm:7 END_STACK_VARS
    case 0xC4A548: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/get_town_map_id.asm:7 END_STACK_VARS
    case 0xC4A549: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000F2u : 0x00FFF2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/get_town_map_id.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC4A549.
    case 0xC4A54B: {
        Instruction step(cpu, 0xFF, 0xEB685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/get_town_map_id.asm:7 END_STACK_VARS
    case 0xC4A54C: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/get_town_map_id.asm:7 END_STACK_VARS
    case 0xC4A54D: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/overworld/get_town_map_id.asm:8 XBA
    case 0xC4A54E: {
        Instruction step(cpu, 0xEB, 0x000000u, 1u, AddressMode::Implied);
        step.exchange_accumulator_bytes();
        return step.finish();
    }
    // src/overworld/get_town_map_id.asm:9 AND #$00FF
    case 0xC4A54F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/get_town_map_id.asm:9 AND #$00FF
    // Overlapping static entry reached from 0xC4A54F.
    case 0xC4A551: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:522 STA scratch
    // Macro caller: src/overworld/get_town_map_id.asm:10 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC4A552: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:523 ASL
    // Macro caller: src/overworld/get_town_map_id.asm:10 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC4A554: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:524 ADC scratch
    // Macro caller: src/overworld/get_town_map_id.asm:10 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC4A555: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/get_town_map_id.asm:11 STA @VIRTUAL02
    case 0xC4A557: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/get_town_map_id.asm:12 LDY #128
    case 0xC4A559: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000080u : 0x000080u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/get_town_map_id.asm:12 LDY #128
    // Overlapping static entry reached from 0xC4A559.
    case 0xC4A55B: {
        Instruction step(cpu, 0x00, 0x00008Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/get_town_map_id.asm:13 TXA
    case 0xC4A55C: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/overworld/get_town_map_id.asm:14 JSL DIVISION16S_DIVISOR_POSITIVE
    case 0xC4A55D: {
        Instruction step(cpu, 0x22, 0xC0913Du, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:712 STA scratch
    // Macro caller: src/overworld/get_town_map_id.asm:15 OPTIMIZED_MULT @VIRTUAL04, 96
    case 0xC4A561: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:713 ASL
    // Macro caller: src/overworld/get_town_map_id.asm:15 OPTIMIZED_MULT @VIRTUAL04, 96
    case 0xC4A563: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:714 ADC scratch
    // Macro caller: src/overworld/get_town_map_id.asm:15 OPTIMIZED_MULT @VIRTUAL04, 96
    case 0xC4A564: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:715 ASL
    // Macro caller: src/overworld/get_town_map_id.asm:15 OPTIMIZED_MULT @VIRTUAL04, 96
    case 0xC4A566: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:716 ASL
    // Macro caller: src/overworld/get_town_map_id.asm:15 OPTIMIZED_MULT @VIRTUAL04, 96
    case 0xC4A567: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:717 ASL
    // Macro caller: src/overworld/get_town_map_id.asm:15 OPTIMIZED_MULT @VIRTUAL04, 96
    case 0xC4A568: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:718 ASL
    // Macro caller: src/overworld/get_town_map_id.asm:15 OPTIMIZED_MULT @VIRTUAL04, 96
    case 0xC4A569: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:719 ASL
    // Macro caller: src/overworld/get_town_map_id.asm:15 OPTIMIZED_MULT @VIRTUAL04, 96
    case 0xC4A56A: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/get_town_map_id.asm:16 CLC
    case 0xC4A56B: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/get_town_map_id.asm:17 ADC @VIRTUAL02
    case 0xC4A56C: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/get_town_map_id.asm:18 TAX
    case 0xC4A56E: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/get_town_map_id.asm:19 LDA f:MAP_DATA_PER_SECTOR_TOWN_MAP_DATA,X
    case 0xC4A56F: {
        Instruction step(cpu, 0xBF, 0xEFA022u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/get_town_map_id.asm:20 AND #$00FF
    case 0xC4A573: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/get_town_map_id.asm:20 AND #$00FF
    // Overlapping static entry reached from 0xC4A573.
    case 0xC4A575: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/get_town_map_id.asm:21 END_C_FUNCTION
    case 0xC4A576: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/overworld/get_town_map_id.asm:21 END_C_FUNCTION
    case 0xC4A577: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
