// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/overworld/use_item.asm
bool resume_overworld_use_item(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/use_item.asm:3 BEGIN_C_FUNCTION
    case 0xC1AE35: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/use_item.asm:20 END_STACK_VARS
    case 0xC1AE37: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/use_item.asm:20 END_STACK_VARS
    case 0xC1AE38: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/use_item.asm:20 END_STACK_VARS
    case 0xC1AE39: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/use_item.asm:20 END_STACK_VARS
    case 0xC1AE3A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000D2u : 0x00FFD2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/use_item.asm:20 END_STACK_VARS
    // Overlapping static entry reached from 0xC1AE3A.
    case 0xC1AE3C: {
        Instruction step(cpu, 0xFF, 0x86685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/use_item.asm:20 END_STACK_VARS
    case 0xC1AE3D: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/use_item.asm:20 END_STACK_VARS
    case 0xC1AE3E: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:21 STX @LOCAL0A
    case 0xC1AE3F: {
        Instruction step(cpu, 0x86, 0x00002Cu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/use_item.asm:21 STX @LOCAL0A
    // Overlapping static entry reached from 0xC1AE3C.
    case 0xC1AE40: {
        Instruction step(cpu, 0x2C, 0x000485u, 3u, AddressMode::Absolute);
        step.test_bits();
        return step.finish();
    }
    // src/overworld/use_item.asm:22 STA @VIRTUAL04
    case 0xC1AE41: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:23 STA @LOCAL09
    case 0xC1AE43: {
        Instruction step(cpu, 0x85, 0x00002Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/use_item.asm:24 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC1AE45: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/use_item.asm:24 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC1AE45.
    case 0xC1AE47: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/overworld/use_item.asm:24 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC1AE48: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/use_item.asm:24 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC1AE4A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/use_item.asm:24 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC1AE4A.
    case 0xC1AE4C: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/overworld/use_item.asm:24 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC1AE4D: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/use_item.asm:25 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1AE4F: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/use_item.asm:25 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1AE51: {
        Instruction step(cpu, 0x85, 0x000026u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/use_item.asm:25 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1AE53: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/use_item.asm:25 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1AE55: {
        Instruction step(cpu, 0x85, 0x000028u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:26 LDA #0
    case 0xC1AE57: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:26 LDA #0
    // Overlapping static entry reached from 0xC1AE57.
    case 0xC1AE59: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_item.asm:27 STA @VIRTUAL02
    case 0xC1AE5A: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:28 STA @LOCAL07
    case 0xC1AE5C: {
        Instruction step(cpu, 0x85, 0x000024u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:29 LDX @LOCAL0A
    case 0xC1AE5E: {
        Instruction step(cpu, 0xA6, 0x00002Cu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/use_item.asm:30 LDA @VIRTUAL04
    case 0xC1AE60: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:31 JSL GET_CHARACTER_ITEM
    case 0xC1AE62: {
        Instruction step(cpu, 0x22, 0xC3E537u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/use_item.asm:32 SEP #PROC_FLAGS::ACCUM8
    case 0xC1AE66: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/use_item.asm:33 STA @VIRTUAL01
    case 0xC1AE68: {
        Instruction step(cpu, 0x85, 0x000001u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:34 REP #PROC_FLAGS::ACCUM8
    case 0xC1AE6A: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/use_item.asm:35 LDA @VIRTUAL01
    case 0xC1AE6C: {
        Instruction step(cpu, 0xA5, 0x000001u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:36 AND #$00FF
    case 0xC1AE6E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:36 AND #$00FF
    // Overlapping static entry reached from 0xC1AE6E.
    case 0xC1AE70: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_item.asm:37 STA @LOCAL06
    case 0xC1AE71: {
        Instruction step(cpu, 0x85, 0x000022u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_item.asm:38 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC1AE73: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x007000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_item.asm:38 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1AE73.
    case 0xC1AE75: {
        Instruction step(cpu, 0x70, 0x000085u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_set();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/use_item.asm:38 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC1AE76: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/use_item.asm:38 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1AE75.
    case 0xC1AE77: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:38 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC1AE78: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D5u : 0x0000D5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:38 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1AE77.
    case 0xC1AE79: {
        Instruction step(cpu, 0xD5, 0x000000u, 2u, AddressMode::DirectPageIndexedX);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:38 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1AE78.
    case 0xC1AE7A: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/use_item.asm:38 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC1AE7B: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:39 LDA @LOCAL06
    case 0xC1AE7D: {
        Instruction step(cpu, 0xA5, 0x000022u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:623 STA scratch
    // Macro caller: src/overworld/use_item.asm:40 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC1AE7F: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:624 ASL
    // Macro caller: src/overworld/use_item.asm:40 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC1AE81: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:625 ADC scratch
    // Macro caller: src/overworld/use_item.asm:40 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC1AE82: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:626 ASL
    // Macro caller: src/overworld/use_item.asm:40 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC1AE84: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:627 ASL
    // Macro caller: src/overworld/use_item.asm:40 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC1AE85: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:628 ASL
    // Macro caller: src/overworld/use_item.asm:40 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC1AE86: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/use_item.asm:41 CLC
    case 0xC1AE87: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/use_item.asm:42 ADC @VIRTUAL06
    case 0xC1AE88: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/use_item.asm:43 STA @VIRTUAL06
    case 0xC1AE8A: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:44 STA @LOCAL05
    case 0xC1AE8C: {
        Instruction step(cpu, 0x85, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:45 LDA @VIRTUAL06+2
    case 0xC1AE8E: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:46 STA @LOCAL05+2
    case 0xC1AE90: {
        Instruction step(cpu, 0x85, 0x000020u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:47 LDY #item::type
    case 0xC1AE92: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/use_item.asm:47 LDY #item::type
    // Overlapping static entry reached from 0xC1AE92.
    case 0xC1AE94: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_item.asm:48 LDA [@LOCAL05],Y
    case 0xC1AE95: {
        Instruction step(cpu, 0xB7, 0x00001Eu, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:49 AND #$00FF
    case 0xC1AE97: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:49 AND #$00FF
    // Overlapping static entry reached from 0xC1AE97.
    case 0xC1AE99: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_item.asm:50 TAX
    case 0xC1AE9A: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/use_item.asm:51 STX @LOCAL04
    case 0xC1AE9B: {
        Instruction step(cpu, 0x86, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/use_item.asm:52 TXA
    case 0xC1AE9D: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:53 AND #ITEM_FLAGS::TRANSFORM | ITEM_FLAGS::CANNOT_GIVE
    case 0xC1AE9E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000030u : 0x000030u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:53 AND #ITEM_FLAGS::TRANSFORM | ITEM_FLAGS::CANNOT_GIVE
    // Overlapping static entry reached from 0xC1AE9E.
    case 0xC1AEA0: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_item.asm:54 BEQ @UNKNOWN1
    case 0xC1AEA1: {
        Instruction step(cpu, 0xF0, 0x000015u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/use_item.asm:55 CMP #ITEM_FLAGS::TRANSFORM
    case 0xC1AEA3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:55 CMP #ITEM_FLAGS::TRANSFORM
    // Overlapping static entry reached from 0xC1AEA3.
    case 0xC1AEA5: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_item.asm:56 BEQ @UNKNOWN2
    case 0xC1AEA6: {
        Instruction step(cpu, 0xF0, 0x00004Du, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/use_item.asm:57 CMP #ITEM_FLAGS::CANNOT_GIVE
    case 0xC1AEA8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:57 CMP #ITEM_FLAGS::CANNOT_GIVE
    // Overlapping static entry reached from 0xC1AEA8.
    case 0xC1AEAA: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_item.asm:58 BEQ @UNKNOWN3
    case 0xC1AEAB: {
        Instruction step(cpu, 0xF0, 0x00005Du, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/use_item.asm:59 CMP #ITEM_FLAGS::TRANSFORM | ITEM_FLAGS::CANNOT_GIVE
    case 0xC1AEAD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000030u : 0x000030u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:59 CMP #ITEM_FLAGS::TRANSFORM | ITEM_FLAGS::CANNOT_GIVE
    // Overlapping static entry reached from 0xC1AEAD.
    case 0xC1AEAF: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/use_item.asm:60 BEQL @UNKNOWN4
    case 0xC1AEB0: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/use_item.asm:60 BEQL @UNKNOWN4
    case 0xC1AEB2: {
        Instruction step(cpu, 0x4C, 0x00AF47u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/use_item.asm:61 JMP @UNKNOWN18
    case 0xC1AEB5: {
        Instruction step(cpu, 0x4C, 0x00B152u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/use_item.asm:63 LDA #1
    case 0xC1AEB8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:63 LDA #1
    // Overlapping static entry reached from 0xC1AEB8.
    case 0xC1AEBA: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_item.asm:64 STA @VIRTUAL02
    case 0xC1AEBB: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:65 STA @LOCAL07
    case 0xC1AEBD: {
        Instruction step(cpu, 0x85, 0x000024u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_item.asm:66 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC1AEBF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00001Eu : 0x008B1Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_item.asm:66 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1AEBF.
    case 0xC1AEC1: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/use_item.asm:66 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC1AEC2: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:66 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC1AEC4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D5u : 0x0000D5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:66 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1AEC4.
    case 0xC1AEC6: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/use_item.asm:66 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC1AEC7: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:67 LDY #item::effect
    case 0xC1AEC9: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00000Eu : 0x00000Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/use_item.asm:67 LDY #item::effect
    // Overlapping static entry reached from 0xC1AEC9.
    case 0xC1AECB: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_item.asm:68 LDA [@LOCAL05],Y
    case 0xC1AECC: {
        Instruction step(cpu, 0xB7, 0x00001Eu, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:568 STA scratch
    // Macro caller: src/overworld/use_item.asm:69 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1AECE: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:569 ASL
    // Macro caller: src/overworld/use_item.asm:69 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1AED0: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/overworld/use_item.asm:69 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1AED1: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:571 ASL
    // Macro caller: src/overworld/use_item.asm:69 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1AED3: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:572 ASL
    // Macro caller: src/overworld/use_item.asm:69 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1AED4: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:508 INC
    // Macro caller: src/overworld/use_item.asm:70 OPTIMIZED_ADD battle_action::description_text_pointer
    case 0xC1AED5: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // include/macros.asm:509 INC
    // Macro caller: src/overworld/use_item.asm:70 OPTIMIZED_ADD battle_action::description_text_pointer
    case 0xC1AED6: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // include/macros.asm:510 INC
    // Macro caller: src/overworld/use_item.asm:70 OPTIMIZED_ADD battle_action::description_text_pointer
    case 0xC1AED7: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // include/macros.asm:511 INC
    // Macro caller: src/overworld/use_item.asm:70 OPTIMIZED_ADD battle_action::description_text_pointer
    case 0xC1AED8: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/overworld/use_item.asm:71 CLC
    case 0xC1AED9: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/use_item.asm:72 ADC @VIRTUAL0A
    case 0xC1AEDA: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/use_item.asm:73 STA @VIRTUAL0A
    case 0xC1AEDC: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/use_item.asm:74 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1AEDE: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/use_item.asm:74 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC1AEDE.
    case 0xC1AEE0: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/overworld/use_item.asm:74 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1AEE1: {
        Instruction step(cpu, 0xB7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1136 TAY
    // Macro caller: src/overworld/use_item.asm:74 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1AEE3: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/overworld/use_item.asm:74 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1AEE4: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1138 STA dest
    // Macro caller: src/overworld/use_item.asm:74 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1AEE6: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/overworld/use_item.asm:74 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1AEE8: {
        Instruction step(cpu, 0x84, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/use_item.asm:75 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1AEEA: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/use_item.asm:75 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1AEEC: {
        Instruction step(cpu, 0x85, 0x000026u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/use_item.asm:75 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1AEEE: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/use_item.asm:75 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1AEF0: {
        Instruction step(cpu, 0x85, 0x000028u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:76 JMP @UNKNOWN18
    case 0xC1AEF2: {
        Instruction step(cpu, 0x4C, 0x00B152u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_item.asm:78 LOADPTR MSG_SYS_GOODS_EQUIP, @VIRTUAL06
    case 0xC1AEF5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Au : 0x00277Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_item.asm:78 LOADPTR MSG_SYS_GOODS_EQUIP, @VIRTUAL06
    // Overlapping static entry reached from 0xC1AEF5.
    case 0xC1AEF7: {
        Instruction step(cpu, 0x27, 0x000085u, 2u, AddressMode::DirectPageIndirectLong);
        step.and_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/use_item.asm:78 LOADPTR MSG_SYS_GOODS_EQUIP, @VIRTUAL06
    case 0xC1AEF8: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/use_item.asm:78 LOADPTR MSG_SYS_GOODS_EQUIP, @VIRTUAL06
    // Overlapping static entry reached from 0xC1AEF7.
    case 0xC1AEF9: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:78 LOADPTR MSG_SYS_GOODS_EQUIP, @VIRTUAL06
    case 0xC1AEFA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C9u : 0x0000C9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:78 LOADPTR MSG_SYS_GOODS_EQUIP, @VIRTUAL06
    // Overlapping static entry reached from 0xC1AEF9.
    case 0xC1AEFB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x008500u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:78 LOADPTR MSG_SYS_GOODS_EQUIP, @VIRTUAL06
    // Overlapping static entry reached from 0xC1AEFA.
    case 0xC1AEFC: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/use_item.asm:78 LOADPTR MSG_SYS_GOODS_EQUIP, @VIRTUAL06
    case 0xC1AEFD: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/use_item.asm:78 LOADPTR MSG_SYS_GOODS_EQUIP, @VIRTUAL06
    // Overlapping static entry reached from 0xC1AEFB.
    case 0xC1AEFE: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/use_item.asm:79 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1AEFF: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/use_item.asm:79 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1AF01: {
        Instruction step(cpu, 0x85, 0x000026u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/use_item.asm:79 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1AF03: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/use_item.asm:79 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1AF05: {
        Instruction step(cpu, 0x85, 0x000028u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:80 JMP @UNKNOWN18
    case 0xC1AF07: {
        Instruction step(cpu, 0x4C, 0x00B152u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/use_item.asm:82 LDA #1
    case 0xC1AF0A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:82 LDA #1
    // Overlapping static entry reached from 0xC1AF0A.
    case 0xC1AF0C: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_item.asm:83 STA @VIRTUAL02
    case 0xC1AF0D: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:84 STA @LOCAL07
    case 0xC1AF0F: {
        Instruction step(cpu, 0x85, 0x000024u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_item.asm:85 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC1AF11: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00001Eu : 0x008B1Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_item.asm:85 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1AF11.
    case 0xC1AF13: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/use_item.asm:85 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC1AF14: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:85 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC1AF16: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D5u : 0x0000D5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:85 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1AF16.
    case 0xC1AF18: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/use_item.asm:85 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC1AF19: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:86 LDY #item::effect
    case 0xC1AF1B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00000Eu : 0x00000Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/use_item.asm:86 LDY #item::effect
    // Overlapping static entry reached from 0xC1AF1B.
    case 0xC1AF1D: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_item.asm:87 LDA [@LOCAL05],Y
    case 0xC1AF1E: {
        Instruction step(cpu, 0xB7, 0x00001Eu, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:568 STA scratch
    // Macro caller: src/overworld/use_item.asm:88 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1AF20: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:569 ASL
    // Macro caller: src/overworld/use_item.asm:88 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1AF22: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/overworld/use_item.asm:88 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1AF23: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:571 ASL
    // Macro caller: src/overworld/use_item.asm:88 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1AF25: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:572 ASL
    // Macro caller: src/overworld/use_item.asm:88 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1AF26: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:508 INC
    // Macro caller: src/overworld/use_item.asm:89 OPTIMIZED_ADD battle_action::description_text_pointer
    case 0xC1AF27: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // include/macros.asm:509 INC
    // Macro caller: src/overworld/use_item.asm:89 OPTIMIZED_ADD battle_action::description_text_pointer
    case 0xC1AF28: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // include/macros.asm:510 INC
    // Macro caller: src/overworld/use_item.asm:89 OPTIMIZED_ADD battle_action::description_text_pointer
    case 0xC1AF29: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // include/macros.asm:511 INC
    // Macro caller: src/overworld/use_item.asm:89 OPTIMIZED_ADD battle_action::description_text_pointer
    case 0xC1AF2A: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/overworld/use_item.asm:90 CLC
    case 0xC1AF2B: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/use_item.asm:91 ADC @VIRTUAL0A
    case 0xC1AF2C: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/use_item.asm:92 STA @VIRTUAL0A
    case 0xC1AF2E: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/use_item.asm:93 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1AF30: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/use_item.asm:93 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC1AF30.
    case 0xC1AF32: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/overworld/use_item.asm:93 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1AF33: {
        Instruction step(cpu, 0xB7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1136 TAY
    // Macro caller: src/overworld/use_item.asm:93 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1AF35: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/overworld/use_item.asm:93 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1AF36: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1138 STA dest
    // Macro caller: src/overworld/use_item.asm:93 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1AF38: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/overworld/use_item.asm:93 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1AF3A: {
        Instruction step(cpu, 0x84, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/use_item.asm:94 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1AF3C: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/use_item.asm:94 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1AF3E: {
        Instruction step(cpu, 0x85, 0x000026u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/use_item.asm:94 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1AF40: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/use_item.asm:94 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1AF42: {
        Instruction step(cpu, 0x85, 0x000028u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:95 JMP @UNKNOWN18
    case 0xC1AF44: {
        Instruction step(cpu, 0x4C, 0x00B152u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/use_item.asm:97 LDY #item::flags
    case 0xC1AF47: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00000Du : 0x00000Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/use_item.asm:97 LDY #item::flags
    // Overlapping static entry reached from 0xC1AF47.
    case 0xC1AF49: {
        Instruction step(cpu, 0x00, 0x0000A5u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_item.asm:99 LDA @LOCAL09
    case 0xC1AF4A: {
        Instruction step(cpu, 0xA5, 0x00002Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:100 STA @VIRTUAL04
    case 0xC1AF4C: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:102 LDX @VIRTUAL04
    case 0xC1AF4E: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/use_item.asm:103 DEX
    case 0xC1AF50: {
        Instruction step(cpu, 0xCA, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_x();
        return step.finish();
    }
    // src/overworld/use_item.asm:104 SEP #PROC_FLAGS::ACCUM8
    case 0xC1AF51: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/use_item.asm:105 LDA f:ITEM_USABLE_FLAGS,X
    case 0xC1AF53: {
        Instruction step(cpu, 0xBF, 0xC436A9u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:106 AND [@LOCAL05],Y
    case 0xC1AF57: {
        Instruction step(cpu, 0x37, 0x00001Eu, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:107 REP #PROC_FLAGS::ACCUM8
    case 0xC1AF59: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/use_item.asm:108 AND #$00FF
    case 0xC1AF5B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:108 AND #$00FF
    // Overlapping static entry reached from 0xC1AF5B.
    case 0xC1AF5D: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_item.asm:109 BNE @CHAR_CAN_USE_ITEM
    case 0xC1AF5E: {
        Instruction step(cpu, 0xD0, 0x000015u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_item.asm:110 LOADPTR MSG_SYS_GOODS_USE_NG_USER, @VIRTUAL06
    case 0xC1AF60: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00003Au : 0x00293Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_item.asm:110 LOADPTR MSG_SYS_GOODS_USE_NG_USER, @VIRTUAL06
    // Overlapping static entry reached from 0xC1AF60.
    case 0xC1AF62: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000085u : 0x000685u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/use_item.asm:110 LOADPTR MSG_SYS_GOODS_USE_NG_USER, @VIRTUAL06
    case 0xC1AF63: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/use_item.asm:110 LOADPTR MSG_SYS_GOODS_USE_NG_USER, @VIRTUAL06
    // Overlapping static entry reached from 0xC1AF62.
    case 0xC1AF64: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:110 LOADPTR MSG_SYS_GOODS_USE_NG_USER, @VIRTUAL06
    case 0xC1AF65: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:110 LOADPTR MSG_SYS_GOODS_USE_NG_USER, @VIRTUAL06
    // Overlapping static entry reached from 0xC1AF64.
    case 0xC1AF66: {
        Instruction step(cpu, 0xC7, 0x000000u, 2u, AddressMode::DirectPageIndirectLong);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:110 LOADPTR MSG_SYS_GOODS_USE_NG_USER, @VIRTUAL06
    // Overlapping static entry reached from 0xC1AF65.
    case 0xC1AF67: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/use_item.asm:110 LOADPTR MSG_SYS_GOODS_USE_NG_USER, @VIRTUAL06
    case 0xC1AF68: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/use_item.asm:111 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1AF6A: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/use_item.asm:111 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1AF6C: {
        Instruction step(cpu, 0x85, 0x000026u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/use_item.asm:111 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1AF6E: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/use_item.asm:111 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1AF70: {
        Instruction step(cpu, 0x85, 0x000028u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:112 JMP @UNKNOWN18
    case 0xC1AF72: {
        Instruction step(cpu, 0x4C, 0x00B152u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/use_item.asm:114 LDX @LOCAL04
    case 0xC1AF75: {
        Instruction step(cpu, 0xA6, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/use_item.asm:115 TXA
    case 0xC1AF77: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:116 AND #$000C
    case 0xC1AF78: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x00000Cu : 0x00000Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:116 AND #$000C
    // Overlapping static entry reached from 0xC1AF78.
    case 0xC1AF7A: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_item.asm:117 BEQ @UNKNOWN6
    case 0xC1AF7B: {
        Instruction step(cpu, 0xF0, 0x00000Du, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/use_item.asm:118 CMP #4
    case 0xC1AF7D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:118 CMP #4
    // Overlapping static entry reached from 0xC1AF7D.
    case 0xC1AF7F: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_item.asm:119 BEQ @UNKNOWN7
    case 0xC1AF80: {
        Instruction step(cpu, 0xF0, 0x000045u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/use_item.asm:120 CMP #8
    case 0xC1AF82: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:120 CMP #8
    // Overlapping static entry reached from 0xC1AF82.
    case 0xC1AF84: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_item.asm:121 BEQ @UNKNOWN8
    case 0xC1AF85: {
        Instruction step(cpu, 0xF0, 0x000055u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/use_item.asm:122 JMP @UNKNOWN18
    case 0xC1AF87: {
        Instruction step(cpu, 0x4C, 0x00B152u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/use_item.asm:124 LDA #1
    case 0xC1AF8A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:124 LDA #1
    // Overlapping static entry reached from 0xC1AF8A.
    case 0xC1AF8C: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_item.asm:125 STA @VIRTUAL02
    case 0xC1AF8D: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:126 STA @LOCAL07
    case 0xC1AF8F: {
        Instruction step(cpu, 0x85, 0x000024u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_item.asm:127 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC1AF91: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00001Eu : 0x008B1Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_item.asm:127 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1AF91.
    case 0xC1AF93: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/use_item.asm:127 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC1AF94: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:127 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC1AF96: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D5u : 0x0000D5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:127 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1AF96.
    case 0xC1AF98: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/use_item.asm:127 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC1AF99: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:128 LDY #item::effect
    case 0xC1AF9B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00000Eu : 0x00000Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/use_item.asm:128 LDY #item::effect
    // Overlapping static entry reached from 0xC1AF9B.
    case 0xC1AF9D: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_item.asm:129 LDA [@LOCAL05],Y
    case 0xC1AF9E: {
        Instruction step(cpu, 0xB7, 0x00001Eu, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:568 STA scratch
    // Macro caller: src/overworld/use_item.asm:130 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1AFA0: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:569 ASL
    // Macro caller: src/overworld/use_item.asm:130 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1AFA2: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/overworld/use_item.asm:130 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1AFA3: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:571 ASL
    // Macro caller: src/overworld/use_item.asm:130 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1AFA5: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:572 ASL
    // Macro caller: src/overworld/use_item.asm:130 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1AFA6: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:508 INC
    // Macro caller: src/overworld/use_item.asm:131 OPTIMIZED_ADD battle_action::description_text_pointer
    case 0xC1AFA7: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // include/macros.asm:509 INC
    // Macro caller: src/overworld/use_item.asm:131 OPTIMIZED_ADD battle_action::description_text_pointer
    case 0xC1AFA8: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // include/macros.asm:510 INC
    // Macro caller: src/overworld/use_item.asm:131 OPTIMIZED_ADD battle_action::description_text_pointer
    case 0xC1AFA9: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // include/macros.asm:511 INC
    // Macro caller: src/overworld/use_item.asm:131 OPTIMIZED_ADD battle_action::description_text_pointer
    case 0xC1AFAA: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/overworld/use_item.asm:132 CLC
    case 0xC1AFAB: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/use_item.asm:133 ADC @VIRTUAL0A
    case 0xC1AFAC: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/use_item.asm:134 STA @VIRTUAL0A
    case 0xC1AFAE: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/use_item.asm:135 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1AFB0: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/use_item.asm:135 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC1AFB0.
    case 0xC1AFB2: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/overworld/use_item.asm:135 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1AFB3: {
        Instruction step(cpu, 0xB7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1136 TAY
    // Macro caller: src/overworld/use_item.asm:135 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1AFB5: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/overworld/use_item.asm:135 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1AFB6: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1138 STA dest
    // Macro caller: src/overworld/use_item.asm:135 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1AFB8: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/overworld/use_item.asm:135 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1AFBA: {
        Instruction step(cpu, 0x84, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/use_item.asm:136 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1AFBC: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/use_item.asm:136 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1AFBE: {
        Instruction step(cpu, 0x85, 0x000026u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/use_item.asm:136 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1AFC0: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/use_item.asm:136 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1AFC2: {
        Instruction step(cpu, 0x85, 0x000028u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:137 JMP @UNKNOWN18
    case 0xC1AFC4: {
        Instruction step(cpu, 0x4C, 0x00B152u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_item.asm:139 LOADPTR MSG_SYS_GOODS_USE_NG_HERE, @VIRTUAL06
    case 0xC1AFC7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000047u : 0x002747u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_item.asm:139 LOADPTR MSG_SYS_GOODS_USE_NG_HERE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1AFC7.
    case 0xC1AFC9: {
        Instruction step(cpu, 0x27, 0x000085u, 2u, AddressMode::DirectPageIndirectLong);
        step.and_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/use_item.asm:139 LOADPTR MSG_SYS_GOODS_USE_NG_HERE, @VIRTUAL06
    case 0xC1AFCA: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/use_item.asm:139 LOADPTR MSG_SYS_GOODS_USE_NG_HERE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1AFC9.
    case 0xC1AFCB: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:139 LOADPTR MSG_SYS_GOODS_USE_NG_HERE, @VIRTUAL06
    case 0xC1AFCC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C9u : 0x0000C9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:139 LOADPTR MSG_SYS_GOODS_USE_NG_HERE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1AFCB.
    case 0xC1AFCD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x008500u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:139 LOADPTR MSG_SYS_GOODS_USE_NG_HERE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1AFCC.
    case 0xC1AFCE: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/use_item.asm:139 LOADPTR MSG_SYS_GOODS_USE_NG_HERE, @VIRTUAL06
    case 0xC1AFCF: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/use_item.asm:139 LOADPTR MSG_SYS_GOODS_USE_NG_HERE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1AFCD.
    case 0xC1AFD0: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/use_item.asm:140 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1AFD1: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/use_item.asm:140 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1AFD3: {
        Instruction step(cpu, 0x85, 0x000026u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/use_item.asm:140 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1AFD5: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/use_item.asm:140 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1AFD7: {
        Instruction step(cpu, 0x85, 0x000028u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:141 JMP @UNKNOWN18
    case 0xC1AFD9: {
        Instruction step(cpu, 0x4C, 0x00B152u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/use_item.asm:143 TXA
    case 0xC1AFDC: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:144 AND #$0003
    case 0xC1AFDD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:144 AND #$0003
    // Overlapping static entry reached from 0xC1AFDD.
    case 0xC1AFDF: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_item.asm:145 BEQ @UNKNOWN10
    case 0xC1AFE0: {
        Instruction step(cpu, 0xF0, 0x000015u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/use_item.asm:146 CMP #1
    case 0xC1AFE2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:146 CMP #1
    // Overlapping static entry reached from 0xC1AFE2.
    case 0xC1AFE4: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_item.asm:147 BEQ @UNKNOWN10
    case 0xC1AFE5: {
        Instruction step(cpu, 0xF0, 0x000010u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/use_item.asm:148 CMP #2
    case 0xC1AFE7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:148 CMP #2
    // Overlapping static entry reached from 0xC1AFE7.
    case 0xC1AFE9: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_item.asm:149 BEQ @UNKNOWN11
    case 0xC1AFEA: {
        Instruction step(cpu, 0xF0, 0x000048u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/use_item.asm:150 CMP #3
    case 0xC1AFEC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:150 CMP #3
    // Overlapping static entry reached from 0xC1AFEC.
    case 0xC1AFEE: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/use_item.asm:151 BEQL @UNKNOWN14
    case 0xC1AFEF: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/use_item.asm:151 BEQL @UNKNOWN14
    case 0xC1AFF1: {
        Instruction step(cpu, 0x4C, 0x00B0B8u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/use_item.asm:152 JMP @UNKNOWN18
    case 0xC1AFF4: {
        Instruction step(cpu, 0x4C, 0x00B152u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/use_item.asm:154 LDA #1
    case 0xC1AFF7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:154 LDA #1
    // Overlapping static entry reached from 0xC1AFF7.
    case 0xC1AFF9: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_item.asm:155 STA @VIRTUAL02
    case 0xC1AFFA: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:156 STA @LOCAL07
    case 0xC1AFFC: {
        Instruction step(cpu, 0x85, 0x000024u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_item.asm:157 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC1AFFE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00001Eu : 0x008B1Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_item.asm:157 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1AFFE.
    case 0xC1B000: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/use_item.asm:157 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC1B001: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:157 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC1B003: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D5u : 0x0000D5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:157 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1B003.
    case 0xC1B005: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/use_item.asm:157 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC1B006: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:158 LDY #item::effect
    case 0xC1B008: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00000Eu : 0x00000Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/use_item.asm:158 LDY #item::effect
    // Overlapping static entry reached from 0xC1B008.
    case 0xC1B00A: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_item.asm:159 LDA [@LOCAL05],Y
    case 0xC1B00B: {
        Instruction step(cpu, 0xB7, 0x00001Eu, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:568 STA scratch
    // Macro caller: src/overworld/use_item.asm:160 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B00D: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:569 ASL
    // Macro caller: src/overworld/use_item.asm:160 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B00F: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/overworld/use_item.asm:160 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B010: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:571 ASL
    // Macro caller: src/overworld/use_item.asm:160 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B012: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:572 ASL
    // Macro caller: src/overworld/use_item.asm:160 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B013: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:508 INC
    // Macro caller: src/overworld/use_item.asm:161 OPTIMIZED_ADD battle_action::description_text_pointer
    case 0xC1B014: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // include/macros.asm:509 INC
    // Macro caller: src/overworld/use_item.asm:161 OPTIMIZED_ADD battle_action::description_text_pointer
    case 0xC1B015: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // include/macros.asm:510 INC
    // Macro caller: src/overworld/use_item.asm:161 OPTIMIZED_ADD battle_action::description_text_pointer
    case 0xC1B016: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // include/macros.asm:511 INC
    // Macro caller: src/overworld/use_item.asm:161 OPTIMIZED_ADD battle_action::description_text_pointer
    case 0xC1B017: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/overworld/use_item.asm:162 CLC
    case 0xC1B018: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/use_item.asm:163 ADC @VIRTUAL0A
    case 0xC1B019: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/use_item.asm:164 STA @VIRTUAL0A
    case 0xC1B01B: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/use_item.asm:165 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B01D: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/use_item.asm:165 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC1B01D.
    case 0xC1B01F: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/overworld/use_item.asm:165 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B020: {
        Instruction step(cpu, 0xB7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1136 TAY
    // Macro caller: src/overworld/use_item.asm:165 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B022: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/overworld/use_item.asm:165 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B023: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1138 STA dest
    // Macro caller: src/overworld/use_item.asm:165 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B025: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/overworld/use_item.asm:165 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B027: {
        Instruction step(cpu, 0x84, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/use_item.asm:166 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B029: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/use_item.asm:166 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B02B: {
        Instruction step(cpu, 0x85, 0x000026u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/use_item.asm:166 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B02D: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/use_item.asm:166 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B02F: {
        Instruction step(cpu, 0x85, 0x000028u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:167 JMP @UNKNOWN18
    case 0xC1B031: {
        Instruction step(cpu, 0x4C, 0x00B152u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/use_item.asm:169 JSR UNKNOWN_C1AD7D
    case 0xC1B034: {
        Instruction step(cpu, 0x20, 0x00AC39u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/use_item.asm:170 TAX
    case 0xC1B037: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/use_item.asm:171 LDA @LOCAL06
    case 0xC1B038: {
        Instruction step(cpu, 0xA5, 0x000022u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:172 STA @VIRTUAL02
    case 0xC1B03A: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:173 TXA
    case 0xC1B03C: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:174 CMP @VIRTUAL02
    case 0xC1B03D: {
        Instruction step(cpu, 0xC5, 0x000002u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:175 BNE @UNKNOWN13
    case 0xC1B03F: {
        Instruction step(cpu, 0xD0, 0x000062u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/use_item.asm:176 LDA @LOCAL06
    case 0xC1B041: {
        Instruction step(cpu, 0xA5, 0x000022u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:177 CMP #ITEM::BICYCLE
    case 0xC1B043: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000B0u : 0x0000B0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:177 CMP #ITEM::BICYCLE
    // Overlapping static entry reached from 0xC1B043.
    case 0xC1B045: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_item.asm:178 BNE @UNKNOWN12
    case 0xC1B046: {
        Instruction step(cpu, 0xD0, 0x00001Eu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/use_item.asm:179 JSL UNKNOWN_C03C4B
    case 0xC1B048: {
        Instruction step(cpu, 0x22, 0xC03EB2u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/use_item.asm:180 CMP #0
    case 0xC1B04C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:180 CMP #0
    // Overlapping static entry reached from 0xC1B04C.
    case 0xC1B04E: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_item.asm:181 BEQ @UNKNOWN12
    case 0xC1B04F: {
        Instruction step(cpu, 0xF0, 0x000015u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_item.asm:182 LOADPTR MSG_SYS_BICYCLE_ATARI_HERE, @VIRTUAL06
    case 0xC1B051: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000068u : 0x002868u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_item.asm:182 LOADPTR MSG_SYS_BICYCLE_ATARI_HERE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1B051.
    case 0xC1B053: {
        Instruction step(cpu, 0x28, 0x000000u, 1u, AddressMode::Implied);
        step.pull_status();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/use_item.asm:182 LOADPTR MSG_SYS_BICYCLE_ATARI_HERE, @VIRTUAL06
    case 0xC1B054: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:182 LOADPTR MSG_SYS_BICYCLE_ATARI_HERE, @VIRTUAL06
    case 0xC1B056: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C9u : 0x0000C9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:182 LOADPTR MSG_SYS_BICYCLE_ATARI_HERE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1B056.
    case 0xC1B058: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/use_item.asm:182 LOADPTR MSG_SYS_BICYCLE_ATARI_HERE, @VIRTUAL06
    case 0xC1B059: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/use_item.asm:183 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B05B: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/use_item.asm:183 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B05D: {
        Instruction step(cpu, 0x85, 0x000026u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/use_item.asm:183 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B05F: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/use_item.asm:183 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B061: {
        Instruction step(cpu, 0x85, 0x000028u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:184 JMP @UNKNOWN18
    case 0xC1B063: {
        Instruction step(cpu, 0x4C, 0x00B152u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/use_item.asm:186 LDA #1
    case 0xC1B066: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:186 LDA #1
    // Overlapping static entry reached from 0xC1B066.
    case 0xC1B068: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_item.asm:187 STA @VIRTUAL02
    case 0xC1B069: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:188 STA @LOCAL07
    case 0xC1B06B: {
        Instruction step(cpu, 0x85, 0x000024u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_item.asm:189 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC1B06D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00001Eu : 0x008B1Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_item.asm:189 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1B06D.
    case 0xC1B06F: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/use_item.asm:189 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC1B070: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:189 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC1B072: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D5u : 0x0000D5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:189 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1B072.
    case 0xC1B074: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/use_item.asm:189 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC1B075: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:190 LDY #item::effect
    case 0xC1B077: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00000Eu : 0x00000Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/use_item.asm:190 LDY #item::effect
    // Overlapping static entry reached from 0xC1B077.
    case 0xC1B079: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_item.asm:191 LDA [@LOCAL05],Y
    case 0xC1B07A: {
        Instruction step(cpu, 0xB7, 0x00001Eu, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:568 STA scratch
    // Macro caller: src/overworld/use_item.asm:192 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B07C: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:569 ASL
    // Macro caller: src/overworld/use_item.asm:192 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B07E: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/overworld/use_item.asm:192 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B07F: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:571 ASL
    // Macro caller: src/overworld/use_item.asm:192 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B081: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:572 ASL
    // Macro caller: src/overworld/use_item.asm:192 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B082: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:508 INC
    // Macro caller: src/overworld/use_item.asm:193 OPTIMIZED_ADD battle_action::description_text_pointer
    case 0xC1B083: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // include/macros.asm:509 INC
    // Macro caller: src/overworld/use_item.asm:193 OPTIMIZED_ADD battle_action::description_text_pointer
    case 0xC1B084: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // include/macros.asm:510 INC
    // Macro caller: src/overworld/use_item.asm:193 OPTIMIZED_ADD battle_action::description_text_pointer
    case 0xC1B085: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // include/macros.asm:511 INC
    // Macro caller: src/overworld/use_item.asm:193 OPTIMIZED_ADD battle_action::description_text_pointer
    case 0xC1B086: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/overworld/use_item.asm:194 CLC
    case 0xC1B087: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/use_item.asm:195 ADC @VIRTUAL0A
    case 0xC1B088: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/use_item.asm:196 STA @VIRTUAL0A
    case 0xC1B08A: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/use_item.asm:197 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B08C: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/use_item.asm:197 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC1B08C.
    case 0xC1B08E: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/overworld/use_item.asm:197 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B08F: {
        Instruction step(cpu, 0xB7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1136 TAY
    // Macro caller: src/overworld/use_item.asm:197 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B091: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/overworld/use_item.asm:197 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B092: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1138 STA dest
    // Macro caller: src/overworld/use_item.asm:197 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B094: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/overworld/use_item.asm:197 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B096: {
        Instruction step(cpu, 0x84, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/use_item.asm:198 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B098: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/use_item.asm:198 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B09A: {
        Instruction step(cpu, 0x85, 0x000026u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/use_item.asm:198 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B09C: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/use_item.asm:198 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B09E: {
        Instruction step(cpu, 0x85, 0x000028u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:199 JMP @UNKNOWN18
    case 0xC1B0A0: {
        Instruction step(cpu, 0x4C, 0x00B152u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_item.asm:201 LOADPTR MSG_SYS_GOODS_USE_NG_HERE, @VIRTUAL06
    case 0xC1B0A3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000047u : 0x002747u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_item.asm:201 LOADPTR MSG_SYS_GOODS_USE_NG_HERE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1B0A3.
    case 0xC1B0A5: {
        Instruction step(cpu, 0x27, 0x000085u, 2u, AddressMode::DirectPageIndirectLong);
        step.and_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/use_item.asm:201 LOADPTR MSG_SYS_GOODS_USE_NG_HERE, @VIRTUAL06
    case 0xC1B0A6: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/use_item.asm:201 LOADPTR MSG_SYS_GOODS_USE_NG_HERE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1B0A5.
    case 0xC1B0A7: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:201 LOADPTR MSG_SYS_GOODS_USE_NG_HERE, @VIRTUAL06
    case 0xC1B0A8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C9u : 0x0000C9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:201 LOADPTR MSG_SYS_GOODS_USE_NG_HERE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1B0A7.
    case 0xC1B0A9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x008500u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:201 LOADPTR MSG_SYS_GOODS_USE_NG_HERE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1B0A8.
    case 0xC1B0AA: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/use_item.asm:201 LOADPTR MSG_SYS_GOODS_USE_NG_HERE, @VIRTUAL06
    case 0xC1B0AB: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/use_item.asm:201 LOADPTR MSG_SYS_GOODS_USE_NG_HERE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1B0A9.
    case 0xC1B0AC: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/use_item.asm:202 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B0AD: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/use_item.asm:202 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B0AF: {
        Instruction step(cpu, 0x85, 0x000026u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/use_item.asm:202 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B0B1: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/use_item.asm:202 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B0B3: {
        Instruction step(cpu, 0x85, 0x000028u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:203 JMP @UNKNOWN18
    case 0xC1B0B5: {
        Instruction step(cpu, 0x4C, 0x00B152u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/use_item.asm:205 LDA #1
    case 0xC1B0B8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:205 LDA #1
    // Overlapping static entry reached from 0xC1B0B8.
    case 0xC1B0BA: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_item.asm:206 STA @VIRTUAL02
    case 0xC1B0BB: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:207 STA @LOCAL07
    case 0xC1B0BD: {
        Instruction step(cpu, 0x85, 0x000024u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:208 JSR UNKNOWN_C1AD42
    case 0xC1B0BF: {
        Instruction step(cpu, 0x20, 0x00ABFEu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/use_item.asm:209 REP #PROC_FLAGS::ACCUM8
    case 0xC1B0C2: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/use_item.asm:210 AND #$00FF
    case 0xC1B0C4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:210 AND #$00FF
    // Overlapping static entry reached from 0xC1B0C4.
    case 0xC1B0C6: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_item.asm:211 CMP #1
    case 0xC1B0C7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:211 CMP #1
    // Overlapping static entry reached from 0xC1B0C7.
    case 0xC1B0C9: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_item.asm:212 BEQ @UNKNOWN15
    case 0xC1B0CA: {
        Instruction step(cpu, 0xF0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/use_item.asm:213 CMP #3
    case 0xC1B0CC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:213 CMP #3
    // Overlapping static entry reached from 0xC1B0CC.
    case 0xC1B0CE: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_item.asm:214 BNE @UNKNOWN16
    case 0xC1B0CF: {
        Instruction step(cpu, 0xD0, 0x000032u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_item.asm:216 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL0A
    case 0xC1B0D1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C1u : 0x0089C1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_item.asm:216 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1B0D1.
    case 0xC1B0D3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x89, narrow ? 0x000085u : 0x000A85u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.test_bits();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/use_item.asm:216 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL0A
    case 0xC1B0D4: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/use_item.asm:216 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1B0D3.
    case 0xC1B0D5: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:216 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL0A
    case 0xC1B0D6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000CFu : 0x0000CFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:216 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1B0D6.
    case 0xC1B0D8: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/use_item.asm:216 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL0A
    case 0xC1B0D9: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:217 LDA INTERACTING_NPC_ID
    case 0xC1B0DB: {
        Instruction step(cpu, 0xAD, 0x0060E8u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:594 STA scratch
    // Macro caller: src/overworld/use_item.asm:218 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC1B0DE: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:595 ASL
    // Macro caller: src/overworld/use_item.asm:218 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC1B0E0: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:596 ASL
    // Macro caller: src/overworld/use_item.asm:218 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC1B0E1: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:597 ASL
    // Macro caller: src/overworld/use_item.asm:218 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC1B0E2: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:598 ASL
    // Macro caller: src/overworld/use_item.asm:218 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC1B0E3: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:599 ADC scratch
    // Macro caller: src/overworld/use_item.asm:218 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC1B0E4: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/use_item.asm:219 CLC
    case 0xC1B0E6: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/use_item.asm:220 ADC #npc_config::text_pointer2
    case 0xC1B0E7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00000Du : 0x00000Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/use_item.asm:220 ADC #npc_config::text_pointer2
    // Overlapping static entry reached from 0xC1B0E7.
    case 0xC1B0E9: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_item.asm:221 CLC
    case 0xC1B0EA: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/use_item.asm:222 ADC @VIRTUAL0A
    case 0xC1B0EB: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/use_item.asm:223 STA @VIRTUAL0A
    case 0xC1B0ED: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/use_item.asm:224 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B0EF: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/use_item.asm:224 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC1B0EF.
    case 0xC1B0F1: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/overworld/use_item.asm:224 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B0F2: {
        Instruction step(cpu, 0xB7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1136 TAY
    // Macro caller: src/overworld/use_item.asm:224 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B0F4: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/overworld/use_item.asm:224 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B0F5: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1138 STA dest
    // Macro caller: src/overworld/use_item.asm:224 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B0F7: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/overworld/use_item.asm:224 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B0F9: {
        Instruction step(cpu, 0x84, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/use_item.asm:225 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B0FB: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/use_item.asm:225 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B0FD: {
        Instruction step(cpu, 0x85, 0x000026u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/use_item.asm:225 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B0FF: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/use_item.asm:225 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B101: {
        Instruction step(cpu, 0x85, 0x000028u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/use_item.asm:227 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC1B103: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/use_item.asm:227 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1B103.
    case 0xC1B105: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/overworld/use_item.asm:227 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC1B106: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/use_item.asm:227 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC1B108: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/use_item.asm:227 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1B108.
    case 0xC1B10A: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/overworld/use_item.asm:227 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC1B10B: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/use_item.asm:228 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC1B10D: {
        Instruction step(cpu, 0xA5, 0x000026u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/use_item.asm:228 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC1B10F: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/use_item.asm:228 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC1B111: {
        Instruction step(cpu, 0xA5, 0x000028u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/use_item.asm:228 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC1B113: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:229 CMP @VIRTUAL0A+2
    case 0xC1B115: {
        Instruction step(cpu, 0xC5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:230 BNE @UNKNOWN17
    case 0xC1B117: {
        Instruction step(cpu, 0xD0, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/use_item.asm:231 LDA @VIRTUAL06
    case 0xC1B119: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:232 CMP @VIRTUAL0A
    case 0xC1B11B: {
        Instruction step(cpu, 0xC5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:234 BNE @UNKNOWN18
    case 0xC1B11D: {
        Instruction step(cpu, 0xD0, 0x000033u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_item.asm:235 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC1B11F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00001Eu : 0x008B1Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_item.asm:235 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1B11F.
    case 0xC1B121: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/use_item.asm:235 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC1B122: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:235 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC1B124: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D5u : 0x0000D5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:235 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1B124.
    case 0xC1B126: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/use_item.asm:235 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC1B127: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:236 LDY #item::effect
    case 0xC1B129: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00000Eu : 0x00000Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/use_item.asm:236 LDY #item::effect
    // Overlapping static entry reached from 0xC1B129.
    case 0xC1B12B: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_item.asm:237 LDA [@LOCAL05],Y
    case 0xC1B12C: {
        Instruction step(cpu, 0xB7, 0x00001Eu, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:568 STA scratch
    // Macro caller: src/overworld/use_item.asm:238 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B12E: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:569 ASL
    // Macro caller: src/overworld/use_item.asm:238 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B130: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/overworld/use_item.asm:238 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B131: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:571 ASL
    // Macro caller: src/overworld/use_item.asm:238 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B133: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:572 ASL
    // Macro caller: src/overworld/use_item.asm:238 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B134: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:508 INC
    // Macro caller: src/overworld/use_item.asm:239 OPTIMIZED_ADD battle_action::description_text_pointer
    case 0xC1B135: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // include/macros.asm:509 INC
    // Macro caller: src/overworld/use_item.asm:239 OPTIMIZED_ADD battle_action::description_text_pointer
    case 0xC1B136: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // include/macros.asm:510 INC
    // Macro caller: src/overworld/use_item.asm:239 OPTIMIZED_ADD battle_action::description_text_pointer
    case 0xC1B137: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // include/macros.asm:511 INC
    // Macro caller: src/overworld/use_item.asm:239 OPTIMIZED_ADD battle_action::description_text_pointer
    case 0xC1B138: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/overworld/use_item.asm:240 CLC
    case 0xC1B139: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/use_item.asm:241 ADC @VIRTUAL0A
    case 0xC1B13A: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/use_item.asm:242 STA @VIRTUAL0A
    case 0xC1B13C: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/use_item.asm:243 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B13E: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/use_item.asm:243 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC1B13E.
    case 0xC1B140: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/overworld/use_item.asm:243 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B141: {
        Instruction step(cpu, 0xB7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1136 TAY
    // Macro caller: src/overworld/use_item.asm:243 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B143: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/overworld/use_item.asm:243 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B144: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1138 STA dest
    // Macro caller: src/overworld/use_item.asm:243 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B146: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/overworld/use_item.asm:243 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B148: {
        Instruction step(cpu, 0x84, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/use_item.asm:244 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B14A: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/use_item.asm:244 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B14C: {
        Instruction step(cpu, 0x85, 0x000026u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/use_item.asm:244 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B14E: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/use_item.asm:244 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B150: {
        Instruction step(cpu, 0x85, 0x000028u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:246 LDA @LOCAL09
    case 0xC1B152: {
        Instruction step(cpu, 0xA5, 0x00002Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:247 STA @VIRTUAL04
    case 0xC1B154: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:248 SEP #PROC_FLAGS::ACCUM8
    case 0xC1B156: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/use_item.asm:249 STA @VIRTUAL00
    case 0xC1B158: {
        Instruction step(cpu, 0x85, 0x000000u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:250 REP #PROC_FLAGS::ACCUM8
    case 0xC1B15A: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/use_item.asm:251 LDA @LOCAL07
    case 0xC1B15C: {
        Instruction step(cpu, 0xA5, 0x000024u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:252 STA @VIRTUAL02
    case 0xC1B15E: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:253 BEQ @UNKNOWN20
    case 0xC1B160: {
        Instruction step(cpu, 0xF0, 0x000031u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/use_item.asm:254 LDX @VIRTUAL04
    case 0xC1B162: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/use_item.asm:255 LDY #item::effect
    case 0xC1B164: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00000Eu : 0x00000Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/use_item.asm:255 LDY #item::effect
    // Overlapping static entry reached from 0xC1B164.
    case 0xC1B166: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_item.asm:256 LDA [@LOCAL05],Y
    case 0xC1B167: {
        Instruction step(cpu, 0xB7, 0x00001Eu, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:257 JSR DETERMINE_TARGETTING
    case 0xC1B169: {
        Instruction step(cpu, 0x20, 0x00AC70u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/use_item.asm:258 SEP #PROC_FLAGS::ACCUM8
    case 0xC1B16C: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/use_item.asm:259 STA @VIRTUAL00
    case 0xC1B16E: {
        Instruction step(cpu, 0x85, 0x000000u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:260 REP #PROC_FLAGS::ACCUM8
    case 0xC1B170: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/use_item.asm:261 LDA @VIRTUAL00
    case 0xC1B172: {
        Instruction step(cpu, 0xA5, 0x000000u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:262 AND #$00FF
    case 0xC1B174: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:262 AND #$00FF
    // Overlapping static entry reached from 0xC1B174.
    case 0xC1B176: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_item.asm:263 BNE @UNKNOWN19
    case 0xC1B177: {
        Instruction step(cpu, 0xD0, 0x000006u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/use_item.asm:264 LDA #0
    case 0xC1B179: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:264 LDA #0
    // Overlapping static entry reached from 0xC1B179.
    case 0xC1B17B: {
        Instruction step(cpu, 0x00, 0x00004Cu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_item.asm:265 JMP @UNKNOWN43
    case 0xC1B17C: {
        Instruction step(cpu, 0x4C, 0x00B47Bu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/use_item.asm:267 LDY #item::flags
    case 0xC1B17F: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00000Du : 0x00000Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/use_item.asm:267 LDY #item::flags
    // Overlapping static entry reached from 0xC1B17F.
    case 0xC1B181: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_item.asm:268 LDA [@LOCAL05],Y
    case 0xC1B182: {
        Instruction step(cpu, 0xB7, 0x00001Eu, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:269 AND #$00FF
    case 0xC1B184: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:269 AND #$00FF
    // Overlapping static entry reached from 0xC1B184.
    case 0xC1B186: {
        Instruction step(cpu, 0x00, 0x000029u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_item.asm:270 AND #ITEM_FLAGS::CONSUMED_ON_USE
    case 0xC1B187: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000080u : 0x000080u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:270 AND #ITEM_FLAGS::CONSUMED_ON_USE
    // Overlapping static entry reached from 0xC1B187.
    case 0xC1B189: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_item.asm:271 BEQ @UNKNOWN20
    case 0xC1B18A: {
        Instruction step(cpu, 0xF0, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/use_item.asm:272 LDX @LOCAL0A
    case 0xC1B18C: {
        Instruction step(cpu, 0xA6, 0x00002Cu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/use_item.asm:273 LDA @VIRTUAL04
    case 0xC1B18E: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:274 JSR REMOVE_ITEM_FROM_INVENTORY
    case 0xC1B190: {
        Instruction step(cpu, 0x20, 0x008CCEu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/use_item.asm:276 LDA #WINDOW::INVENTORY_MENU
    case 0xC1B193: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:276 LDA #WINDOW::INVENTORY_MENU
    // Overlapping static entry reached from 0xC1B193.
    case 0xC1B195: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_item.asm:277 JSR CLOSE_WINDOW
    case 0xC1B196: {
        Instruction step(cpu, 0x20, 0x000141u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/use_item.asm:278 LDA #WINDOW::INVENTORY
    case 0xC1B199: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:278 LDA #WINDOW::INVENTORY
    // Overlapping static entry reached from 0xC1B199.
    case 0xC1B19B: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_item.asm:279 JSR CLOSE_WINDOW
    case 0xC1B19C: {
        Instruction step(cpu, 0x20, 0x000141u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/use_item.asm:280 LDX #.SIZEOF(char_struct::name)
    case 0xC1B19F: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/use_item.asm:280 LDX #.SIZEOF(char_struct::name)
    // Overlapping static entry reached from 0xC1B19F.
    case 0xC1B1A1: {
        Instruction step(cpu, 0x00, 0x0000A5u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_item.asm:281 LDA @VIRTUAL04
    case 0xC1B1A2: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:282 DEC
    case 0xC1B1A4: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/overworld/use_item.asm:283 LDY #.SIZEOF(char_struct)
    case 0xC1B1A5: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Eu : 0x00005Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/use_item.asm:283 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1B1A5.
    case 0xC1B1A7: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_item.asm:284 JSL MULT168
    case 0xC1B1A8: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/use_item.asm:285 CLC
    case 0xC1B1AC: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/use_item.asm:286 ADC #.LOWORD(PARTY_CHARACTERS)
    case 0xC1B1AD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00007Fu : 0x009C7Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/use_item.asm:286 ADC #.LOWORD(PARTY_CHARACTERS)
    // Overlapping static entry reached from 0xC1B1AD.
    case 0xC1B1AF: {
        Instruction step(cpu, 0x9C, 0x001220u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/use_item.asm:287 JSR UNKNOWN_C1AC4A
    case 0xC1B1B0: {
        Instruction step(cpu, 0x20, 0x00AB12u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/use_item.asm:287 JSR UNKNOWN_C1AC4A
    // Overlapping static entry reached from 0xC1B1AF.
    case 0xC1B1B2: {
        Instruction step(cpu, 0xAB, 0x000000u, 1u, AddressMode::Implied);
        step.pull_data_bank();
        return step.finish();
    }
    // src/overworld/use_item.asm:288 SEP #PROC_FLAGS::ACCUM8
    case 0xC1B1B3: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/use_item.asm:289 LDA @VIRTUAL01
    case 0xC1B1B5: {
        Instruction step(cpu, 0xA5, 0x000001u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:290 JSR UNKNOWN_C1ACF8
    case 0xC1B1B7: {
        Instruction step(cpu, 0x20, 0x00ABB4u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:735 LDA arg
    // Macro caller: src/overworld/use_item.asm:292 CREATE_WINDOW_NEAR #WINDOW::TEXT_STANDARD
    case 0xC1B1BA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:735 LDA arg
    // Macro caller: src/overworld/use_item.asm:292 CREATE_WINDOW_NEAR #WINDOW::TEXT_STANDARD
    // Overlapping static entry reached from 0xC1B1BA.
    case 0xC1B1BC: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/overworld/use_item.asm:292 CREATE_WINDOW_NEAR #WINDOW::TEXT_STANDARD
    case 0xC1B1BD: {
        Instruction step(cpu, 0x20, 0x0006E4u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:865 LDA src
    // Macro caller: src/overworld/use_item.asm:294 MOVE_INT1632 @VIRTUAL04, @VIRTUAL0A
    case 0xC1B1C0: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/overworld/use_item.asm:294 MOVE_INT1632 @VIRTUAL04, @VIRTUAL0A
    case 0xC1B1C2: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/overworld/use_item.asm:294 MOVE_INT1632 @VIRTUAL04, @VIRTUAL0A
    case 0xC1B1C4: {
        Instruction step(cpu, 0x64, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/use_item.asm:295 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC1B1C6: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/use_item.asm:295 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC1B1C8: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/use_item.asm:295 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC1B1CA: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/use_item.asm:295 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC1B1CC: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:300 JSR SET_WORKING_MEMORY
    case 0xC1B1CE: {
        Instruction step(cpu, 0x20, 0x000660u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:865 LDA src
    // Macro caller: src/overworld/use_item.asm:302 MOVE_INT1632 @LOCAL0A, @VIRTUAL0A
    case 0xC1B1D1: {
        Instruction step(cpu, 0xA5, 0x00002Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/overworld/use_item.asm:302 MOVE_INT1632 @LOCAL0A, @VIRTUAL0A
    case 0xC1B1D3: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/overworld/use_item.asm:302 MOVE_INT1632 @LOCAL0A, @VIRTUAL0A
    case 0xC1B1D5: {
        Instruction step(cpu, 0x64, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/use_item.asm:303 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC1B1D7: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/use_item.asm:303 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC1B1D9: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/use_item.asm:303 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC1B1DB: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/use_item.asm:303 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC1B1DD: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:308 JSR SET_ARGUMENT_MEMORY
    case 0xC1B1DF: {
        Instruction step(cpu, 0x20, 0x00068Cu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/use_item.asm:309 LDA @VIRTUAL00
    case 0xC1B1E2: {
        Instruction step(cpu, 0xA5, 0x000000u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:310 AND #$00FF
    case 0xC1B1E4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:310 AND #$00FF
    // Overlapping static entry reached from 0xC1B1E4.
    case 0xC1B1E6: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_item.asm:311 TAY
    case 0xC1B1E7: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/overworld/use_item.asm:312 CPY #>-1
    case 0xC1B1E8: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/overworld/use_item.asm:312 CPY #>-1
    // Overlapping static entry reached from 0xC1B1E8.
    case 0xC1B1EA: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_item.asm:313 BEQ @UNKNOWN21
    case 0xC1B1EB: {
        Instruction step(cpu, 0xF0, 0x000013u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/use_item.asm:314 LDX #.SIZEOF(char_struct::name)
    case 0xC1B1ED: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/use_item.asm:314 LDX #.SIZEOF(char_struct::name)
    // Overlapping static entry reached from 0xC1B1ED.
    case 0xC1B1EF: {
        Instruction step(cpu, 0x00, 0x000098u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_item.asm:315 TYA
    case 0xC1B1F0: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:316 DEC
    case 0xC1B1F1: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/overworld/use_item.asm:317 LDY #.SIZEOF(char_struct)
    case 0xC1B1F2: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Eu : 0x00005Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/use_item.asm:317 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1B1F2.
    case 0xC1B1F4: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_item.asm:318 JSL MULT168
    case 0xC1B1F5: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/use_item.asm:320 CLC
    case 0xC1B1F9: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/use_item.asm:321 ADC #.LOWORD(PARTY_CHARACTERS)
    case 0xC1B1FA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00007Fu : 0x009C7Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/use_item.asm:321 ADC #.LOWORD(PARTY_CHARACTERS)
    // Overlapping static entry reached from 0xC1B1FA.
    case 0xC1B1FC: {
        Instruction step(cpu, 0x9C, 0x006320u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/use_item.asm:322 JSR UNKNOWN_C1ACA1
    case 0xC1B1FD: {
        Instruction step(cpu, 0x20, 0x00AB63u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/use_item.asm:322 JSR UNKNOWN_C1ACA1
    // Overlapping static entry reached from 0xC1B1FC.
    case 0xC1B1FF: {
        Instruction step(cpu, 0xAB, 0x000000u, 1u, AddressMode::Implied);
        step.pull_data_bank();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/use_item.asm:324 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC1B200: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/use_item.asm:324 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1B200.
    case 0xC1B202: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/overworld/use_item.asm:324 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC1B203: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/use_item.asm:324 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC1B205: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/use_item.asm:324 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1B205.
    case 0xC1B207: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/overworld/use_item.asm:324 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC1B208: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/use_item.asm:325 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC1B20A: {
        Instruction step(cpu, 0xA5, 0x000026u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/use_item.asm:325 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC1B20C: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/use_item.asm:325 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC1B20E: {
        Instruction step(cpu, 0xA5, 0x000028u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/use_item.asm:325 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC1B210: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:326 CMP @VIRTUAL0A+2
    case 0xC1B212: {
        Instruction step(cpu, 0xC5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:327 BNE @UNKNOWN22
    case 0xC1B214: {
        Instruction step(cpu, 0xD0, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/use_item.asm:328 LDA @VIRTUAL06
    case 0xC1B216: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:329 CMP @VIRTUAL0A
    case 0xC1B218: {
        Instruction step(cpu, 0xC5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:331 BNE @UNKNOWN23
    case 0xC1B21A: {
        Instruction step(cpu, 0xD0, 0x000012u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_item.asm:332 LOADPTR MSG_SYS_GOODS_USE_NG, @VIRTUAL06
    case 0xC1B21C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000012u : 0x002712u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_item.asm:332 LOADPTR MSG_SYS_GOODS_USE_NG, @VIRTUAL06
    // Overlapping static entry reached from 0xC1B21C.
    case 0xC1B21E: {
        Instruction step(cpu, 0x27, 0x000085u, 2u, AddressMode::DirectPageIndirectLong);
        step.and_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/use_item.asm:332 LOADPTR MSG_SYS_GOODS_USE_NG, @VIRTUAL06
    case 0xC1B21F: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/use_item.asm:332 LOADPTR MSG_SYS_GOODS_USE_NG, @VIRTUAL06
    // Overlapping static entry reached from 0xC1B21E.
    case 0xC1B220: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:332 LOADPTR MSG_SYS_GOODS_USE_NG, @VIRTUAL06
    case 0xC1B221: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C9u : 0x0000C9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:332 LOADPTR MSG_SYS_GOODS_USE_NG, @VIRTUAL06
    // Overlapping static entry reached from 0xC1B220.
    case 0xC1B222: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x008500u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:332 LOADPTR MSG_SYS_GOODS_USE_NG, @VIRTUAL06
    // Overlapping static entry reached from 0xC1B221.
    case 0xC1B223: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/use_item.asm:332 LOADPTR MSG_SYS_GOODS_USE_NG, @VIRTUAL06
    case 0xC1B224: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/use_item.asm:332 LOADPTR MSG_SYS_GOODS_USE_NG, @VIRTUAL06
    // Overlapping static entry reached from 0xC1B222.
    case 0xC1B225: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/use_item.asm:333 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B226: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/use_item.asm:333 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B228: {
        Instruction step(cpu, 0x85, 0x000026u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/use_item.asm:333 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B22A: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/use_item.asm:333 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B22C: {
        Instruction step(cpu, 0x85, 0x000028u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:335 LDA @VIRTUAL02
    case 0xC1B22E: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/use_item.asm:336 BEQL @UNKNOWN41
    case 0xC1B230: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/use_item.asm:336 BEQL @UNKNOWN41
    case 0xC1B232: {
        Instruction step(cpu, 0x4C, 0x00B45Eu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_item.asm:337 LOADPTR BATTLE_ACTION_TABLE, @LOCAL03
    case 0xC1B235: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00001Eu : 0x008B1Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_item.asm:337 LOADPTR BATTLE_ACTION_TABLE, @LOCAL03
    // Overlapping static entry reached from 0xC1B235.
    case 0xC1B237: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/use_item.asm:337 LOADPTR BATTLE_ACTION_TABLE, @LOCAL03
    case 0xC1B238: {
        Instruction step(cpu, 0x85, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:337 LOADPTR BATTLE_ACTION_TABLE, @LOCAL03
    case 0xC1B23A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D5u : 0x0000D5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:337 LOADPTR BATTLE_ACTION_TABLE, @LOCAL03
    // Overlapping static entry reached from 0xC1B23A.
    case 0xC1B23C: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/use_item.asm:337 LOADPTR BATTLE_ACTION_TABLE, @LOCAL03
    case 0xC1B23D: {
        Instruction step(cpu, 0x85, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/use_item.asm:338 MOVE_INT @LOCAL05, @VIRTUAL0A
    case 0xC1B23F: {
        Instruction step(cpu, 0xA5, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/use_item.asm:338 MOVE_INT @LOCAL05, @VIRTUAL0A
    case 0xC1B241: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/use_item.asm:338 MOVE_INT @LOCAL05, @VIRTUAL0A
    case 0xC1B243: {
        Instruction step(cpu, 0xA5, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/use_item.asm:338 MOVE_INT @LOCAL05, @VIRTUAL0A
    case 0xC1B245: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:339 LDA #item::effect
    case 0xC1B247: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Eu : 0x00000Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:339 LDA #item::effect
    // Overlapping static entry reached from 0xC1B247.
    case 0xC1B249: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_item.asm:340 CLC
    case 0xC1B24A: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/use_item.asm:341 ADC @VIRTUAL0A
    case 0xC1B24B: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/use_item.asm:342 STA @VIRTUAL0A
    case 0xC1B24D: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:343 STA @LOCAL02
    case 0xC1B24F: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:344 LDA @VIRTUAL0A+2
    case 0xC1B251: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:345 STA @LOCAL02+2
    case 0xC1B253: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/use_item.asm:346 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC1B255: {
        Instruction step(cpu, 0xA5, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/use_item.asm:346 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC1B257: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/use_item.asm:346 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC1B259: {
        Instruction step(cpu, 0xA5, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/use_item.asm:346 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC1B25B: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:347 LDA [@VIRTUAL0A]
    case 0xC1B25D: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:568 STA scratch
    // Macro caller: src/overworld/use_item.asm:348 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B25F: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:569 ASL
    // Macro caller: src/overworld/use_item.asm:348 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B261: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/overworld/use_item.asm:348 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B262: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:571 ASL
    // Macro caller: src/overworld/use_item.asm:348 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B264: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:572 ASL
    // Macro caller: src/overworld/use_item.asm:348 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B265: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/use_item.asm:349 CLC
    case 0xC1B266: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/use_item.asm:350 ADC #battle_action::battle_function_pointer
    case 0xC1B267: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/use_item.asm:350 ADC #battle_action::battle_function_pointer
    // Overlapping static entry reached from 0xC1B267.
    case 0xC1B269: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_item.asm:351 CLC
    case 0xC1B26A: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/use_item.asm:352 ADC @VIRTUAL06
    case 0xC1B26B: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/use_item.asm:353 STA @VIRTUAL06
    case 0xC1B26D: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/use_item.asm:354 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC1B26F: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/use_item.asm:354 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    // Overlapping static entry reached from 0xC1B26F.
    case 0xC1B271: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/overworld/use_item.asm:354 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC1B272: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1136 TAY
    // Macro caller: src/overworld/use_item.asm:354 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC1B274: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/overworld/use_item.asm:354 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC1B275: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1138 STA dest
    // Macro caller: src/overworld/use_item.asm:354 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC1B277: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/overworld/use_item.asm:354 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC1B279: {
        Instruction step(cpu, 0x84, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/use_item.asm:355 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC1B27B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/use_item.asm:355 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1B27B.
    case 0xC1B27D: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/overworld/use_item.asm:355 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC1B27E: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/use_item.asm:355 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC1B280: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/use_item.asm:355 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1B280.
    case 0xC1B282: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/overworld/use_item.asm:355 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC1B283: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:745 LDA src + 2
    // Macro caller: src/overworld/use_item.asm:356 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC1B285: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:746 CMP dest + 2
    // Macro caller: src/overworld/use_item.asm:356 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC1B287: {
        Instruction step(cpu, 0xC5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:747 BNE :+
    // Macro caller: src/overworld/use_item.asm:356 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC1B289: {
        Instruction step(cpu, 0xD0, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:748 LDA src
    // Macro caller: src/overworld/use_item.asm:356 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC1B28B: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:749 CMP dest
    // Macro caller: src/overworld/use_item.asm:356 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC1B28D: {
        Instruction step(cpu, 0xC5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/use_item.asm:357 BEQL @UNKNOWN41
    case 0xC1B28F: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/use_item.asm:357 BEQL @UNKNOWN41
    case 0xC1B291: {
        Instruction step(cpu, 0x4C, 0x00B45Eu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/use_item.asm:358 LDA #.LOWORD(BATTLERS_TABLE)
    case 0xC1B294: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000AEu : 0x00A1AEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:358 LDA #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC1B294.
    case 0xC1B296: {
        Instruction step(cpu, 0xA1, 0x00008Du, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:359 STA CURRENT_ATTACKER
    case 0xC1B297: {
        Instruction step(cpu, 0x8D, 0x00AB72u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:359 STA CURRENT_ATTACKER
    // Overlapping static entry reached from 0xC1B296.
    case 0xC1B298: {
        Instruction step(cpu, 0x72, 0x0000ABu, 2u, AddressMode::DirectPageIndirect);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/use_item.asm:360 TAX
    case 0xC1B29A: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/use_item.asm:361 LDA @LOCAL09
    case 0xC1B29B: {
        Instruction step(cpu, 0xA5, 0x00002Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:362 STA @VIRTUAL04
    case 0xC1B29D: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:363 JSL BATTLE_INIT_PLAYER_STATS
    case 0xC1B29F: {
        Instruction step(cpu, 0x22, 0xC2B8D9u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/use_item.asm:364 SEP #PROC_FLAGS::ACCUM8
    case 0xC1B2A3: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/use_item.asm:365 LDA @VIRTUAL01
    case 0xC1B2A5: {
        Instruction step(cpu, 0xA5, 0x000001u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:366 LDX CURRENT_ATTACKER
    case 0xC1B2A7: {
        Instruction step(cpu, 0xAE, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/overworld/use_item.asm:367 STA __BSS_START__ + battler::current_action_argument,X
    case 0xC1B2AA: {
        Instruction step(cpu, 0x9D, 0x000008u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:368 REP #PROC_FLAGS::ACCUM8
    case 0xC1B2AD: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/use_item.asm:369 LDA @LOCAL0A
    case 0xC1B2AF: {
        Instruction step(cpu, 0xA5, 0x00002Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:370 SEP #PROC_FLAGS::ACCUM8
    case 0xC1B2B1: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/use_item.asm:371 LDX CURRENT_ATTACKER
    case 0xC1B2B3: {
        Instruction step(cpu, 0xAE, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/overworld/use_item.asm:372 STA __BSS_START__ + battler::action_item_slot,X
    case 0xC1B2B6: {
        Instruction step(cpu, 0x9D, 0x000007u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:373 REP #PROC_FLAGS::ACCUM8
    case 0xC1B2B9: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/use_item.asm:374 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC1B2BB: {
        Instruction step(cpu, 0xA5, 0x000026u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/use_item.asm:374 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC1B2BD: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/use_item.asm:374 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC1B2BF: {
        Instruction step(cpu, 0xA5, 0x000028u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/use_item.asm:374 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC1B2C1: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/use_item.asm:375 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1B2C3: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/use_item.asm:375 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1B2C5: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/use_item.asm:375 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1B2C7: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/use_item.asm:375 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1B2C9: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:376 JSL DISPLAY_TEXT
    case 0xC1B2CB: {
        Instruction step(cpu, 0x22, 0xC18913u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/use_item.asm:377 SEP #PROC_FLAGS::ACCUM8
    case 0xC1B2CF: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/use_item.asm:378 LDA @VIRTUAL01
    case 0xC1B2D1: {
        Instruction step(cpu, 0xA5, 0x000001u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:379 JSR UNKNOWN_C1ACF8
    case 0xC1B2D3: {
        Instruction step(cpu, 0x20, 0x00ABB4u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/use_item.asm:381 LDX #.LOWORD(BATTLERS_TABLE) + .SIZEOF(battler)
    case 0xC1B2D6: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x0000FCu : 0x00A1FCu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/use_item.asm:381 LDX #.LOWORD(BATTLERS_TABLE) + .SIZEOF(battler)
    // Overlapping static entry reached from 0xC1B2D6.
    case 0xC1B2D8: {
        Instruction step(cpu, 0xA1, 0x00008Eu, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:382 STX CURRENT_TARGET
    case 0xC1B2D9: {
        Instruction step(cpu, 0x8E, 0x00AB74u, 3u, AddressMode::Absolute);
        step.store_x();
        return step.finish();
    }
    // src/overworld/use_item.asm:382 STX CURRENT_TARGET
    // Overlapping static entry reached from 0xC1B2D8.
    case 0xC1B2DA: {
        Instruction step(cpu, 0x74, 0x0000ABu, 2u, AddressMode::DirectPageIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/use_item.asm:383 LDA @VIRTUAL00
    case 0xC1B2DC: {
        Instruction step(cpu, 0xA5, 0x000000u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:384 AND #$00FF
    case 0xC1B2DE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:384 AND #$00FF
    // Overlapping static entry reached from 0xC1B2DE.
    case 0xC1B2E0: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_item.asm:385 TAY
    case 0xC1B2E1: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/overworld/use_item.asm:386 CPY #>-1
    case 0xC1B2E2: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/overworld/use_item.asm:386 CPY #>-1
    // Overlapping static entry reached from 0xC1B2E2.
    case 0xC1B2E4: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/overworld/use_item.asm:387 BNEL @UNKNOWN36
    case 0xC1B2E5: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/overworld/use_item.asm:387 BNEL @UNKNOWN36
    case 0xC1B2E7: {
        Instruction step(cpu, 0x4C, 0x00B3CCu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/use_item.asm:388 LDY #0
    case 0xC1B2EA: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/use_item.asm:388 LDY #0
    // Overlapping static entry reached from 0xC1B2EA.
    case 0xC1B2EC: {
        Instruction step(cpu, 0x00, 0x000084u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_item.asm:389 STY @LOCAL06
    case 0xC1B2ED: {
        Instruction step(cpu, 0x84, 0x000022u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/use_item.asm:390 JMP @UNKNOWN33
    case 0xC1B2EF: {
        Instruction step(cpu, 0x4C, 0x00B3B2u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/use_item.asm:392 TYA
    case 0xC1B2F2: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:393 CLC
    case 0xC1B2F3: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/use_item.asm:395 ADC #.LOWORD(GAME_STATE)
    case 0xC1B2F4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000A9u : 0x009AA9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/use_item.asm:395 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC1B2F4.
    case 0xC1B2F6: {
        Instruction step(cpu, 0x9A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_stack();
        return step.finish();
    }
    // src/overworld/use_item.asm:396 CLC
    case 0xC1B2F7: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/use_item.asm:397 ADC #game_state::party_members
    case 0xC1B2F8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000077u : 0x000077u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/use_item.asm:397 ADC #game_state::party_members
    // Overlapping static entry reached from 0xC1B2F8.
    case 0xC1B2FA: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_item.asm:401 STA @VIRTUAL02
    case 0xC1B2FB: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:402 LDX #.SIZEOF(char_struct::name)
    case 0xC1B2FD: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/use_item.asm:402 LDX #.SIZEOF(char_struct::name)
    // Overlapping static entry reached from 0xC1B2FD.
    case 0xC1B2FF: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_item.asm:403 STX @LOCAL01
    case 0xC1B300: {
        Instruction step(cpu, 0x86, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/use_item.asm:404 LDX @VIRTUAL02
    case 0xC1B302: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/use_item.asm:405 LDA __BSS_START__,X
    case 0xC1B304: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:406 AND #$00FF
    case 0xC1B307: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:406 AND #$00FF
    // Overlapping static entry reached from 0xC1B307.
    case 0xC1B309: {
        Instruction step(cpu, 0x00, 0x00003Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_item.asm:407 DEC
    case 0xC1B30A: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/overworld/use_item.asm:408 LDY #.SIZEOF(char_struct)
    case 0xC1B30B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Eu : 0x00005Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/use_item.asm:408 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1B30B.
    case 0xC1B30D: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_item.asm:409 JSL MULT168
    case 0xC1B30E: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/use_item.asm:411 CLC
    case 0xC1B312: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/use_item.asm:412 ADC #.LOWORD(PARTY_CHARACTERS)
    case 0xC1B313: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00007Fu : 0x009C7Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/use_item.asm:412 ADC #.LOWORD(PARTY_CHARACTERS)
    // Overlapping static entry reached from 0xC1B313.
    case 0xC1B315: {
        Instruction step(cpu, 0x9C, 0x0012A6u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/use_item.asm:413 LDX @LOCAL01
    case 0xC1B316: {
        Instruction step(cpu, 0xA6, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/use_item.asm:414 JSR UNKNOWN_C1ACA1
    case 0xC1B318: {
        Instruction step(cpu, 0x20, 0x00AB63u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/use_item.asm:415 LDX CURRENT_TARGET
    case 0xC1B31B: {
        Instruction step(cpu, 0xAE, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/overworld/use_item.asm:416 STX @LOCAL01
    case 0xC1B31E: {
        Instruction step(cpu, 0x86, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/use_item.asm:417 LDX @VIRTUAL02
    case 0xC1B320: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/use_item.asm:418 LDA __BSS_START__,X
    case 0xC1B322: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:419 AND #$00FF
    case 0xC1B325: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:419 AND #$00FF
    // Overlapping static entry reached from 0xC1B325.
    case 0xC1B327: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_item.asm:420 LDX @LOCAL01
    case 0xC1B328: {
        Instruction step(cpu, 0xA6, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/use_item.asm:421 JSL BATTLE_INIT_PLAYER_STATS
    case 0xC1B32A: {
        Instruction step(cpu, 0x22, 0xC2B8D9u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_item.asm:422 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC1B32E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00001Eu : 0x008B1Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_item.asm:422 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1B32E.
    case 0xC1B330: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/use_item.asm:422 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC1B331: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:422 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC1B333: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D5u : 0x0000D5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:422 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1B333.
    case 0xC1B335: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/use_item.asm:422 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC1B336: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:423 LDY #item::effect
    case 0xC1B338: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00000Eu : 0x00000Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/use_item.asm:423 LDY #item::effect
    // Overlapping static entry reached from 0xC1B338.
    case 0xC1B33A: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_item.asm:424 LDA [@LOCAL05],Y
    case 0xC1B33B: {
        Instruction step(cpu, 0xB7, 0x00001Eu, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:568 STA scratch
    // Macro caller: src/overworld/use_item.asm:425 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B33D: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:569 ASL
    // Macro caller: src/overworld/use_item.asm:425 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B33F: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/overworld/use_item.asm:425 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B340: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:571 ASL
    // Macro caller: src/overworld/use_item.asm:425 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B342: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:572 ASL
    // Macro caller: src/overworld/use_item.asm:425 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B343: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/use_item.asm:426 CLC
    case 0xC1B344: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/use_item.asm:427 ADC #8
    case 0xC1B345: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/use_item.asm:427 ADC #8
    // Overlapping static entry reached from 0xC1B345.
    case 0xC1B347: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_item.asm:428 CLC
    case 0xC1B348: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/use_item.asm:429 ADC @VIRTUAL0A
    case 0xC1B349: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/use_item.asm:430 STA @VIRTUAL0A
    case 0xC1B34B: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/use_item.asm:431 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B34D: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/use_item.asm:431 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC1B34D.
    case 0xC1B34F: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/overworld/use_item.asm:431 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B350: {
        Instruction step(cpu, 0xB7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1136 TAY
    // Macro caller: src/overworld/use_item.asm:431 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B352: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/overworld/use_item.asm:431 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B353: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1138 STA dest
    // Macro caller: src/overworld/use_item.asm:431 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B355: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/overworld/use_item.asm:431 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B357: {
        Instruction step(cpu, 0x84, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/use_item.asm:432 PHA
    case 0xC1B359: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/use_item.asm:433 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC1B35A: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/use_item.asm:433 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC1B35C: {
        Instruction step(cpu, 0x8D, 0x0000BAu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/use_item.asm:433 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC1B35F: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/use_item.asm:433 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC1B361: {
        Instruction step(cpu, 0x8D, 0x0000BCu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:434 PLA
    case 0xC1B364: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:435 JSL UNKNOWN_C09279
    case 0xC1B365: {
        Instruction step(cpu, 0x22, 0xC0925Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/use_item.asm:436 LDA #0
    case 0xC1B369: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:436 LDA #0
    // Overlapping static entry reached from 0xC1B369.
    case 0xC1B36B: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_item.asm:437 STA @LOCAL0A
    case 0xC1B36C: {
        Instruction step(cpu, 0x85, 0x00002Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:438 BRA @UNKNOWN30
    case 0xC1B36E: {
        Instruction step(cpu, 0x80, 0x00002Du, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/use_item.asm:440 LDA @LOCAL0A
    case 0xC1B370: {
        Instruction step(cpu, 0xA5, 0x00002Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:441 STA @VIRTUAL02
    case 0xC1B372: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:442 LDY @LOCAL06
    case 0xC1B374: {
        Instruction step(cpu, 0xA4, 0x000022u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/use_item.asm:443 TYA
    case 0xC1B376: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:444 LDY #.SIZEOF(char_struct)
    case 0xC1B377: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Eu : 0x00005Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/use_item.asm:444 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1B377.
    case 0xC1B379: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_item.asm:445 JSL MULT168
    case 0xC1B37A: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/use_item.asm:446 CLC
    case 0xC1B37E: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/use_item.asm:447 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::afflictions
    case 0xC1B37F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00008Cu : 0x009C8Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/use_item.asm:447 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::afflictions
    // Overlapping static entry reached from 0xC1B37F.
    case 0xC1B381: {
        Instruction step(cpu, 0x9C, 0x006518u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/use_item.asm:448 CLC
    case 0xC1B382: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/use_item.asm:449 ADC @VIRTUAL02
    case 0xC1B383: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/use_item.asm:449 ADC @VIRTUAL02
    // Overlapping static entry reached from 0xC1B381.
    case 0xC1B384: {
        Instruction step(cpu, 0x02, 0x000048u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/overworld/use_item.asm:450 PHA
    case 0xC1B385: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:451 LDA @LOCAL0A
    case 0xC1B386: {
        Instruction step(cpu, 0xA5, 0x00002Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:452 CLC
    case 0xC1B388: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/use_item.asm:453 ADC CURRENT_TARGET
    case 0xC1B389: {
        Instruction step(cpu, 0x6D, 0x00AB74u, 3u, AddressMode::Absolute);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/use_item.asm:454 TAX
    case 0xC1B38C: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/use_item.asm:455 SEP #PROC_FLAGS::ACCUM8
    case 0xC1B38D: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/use_item.asm:456 LDA __BSS_START__ + battler::afflictions,X
    case 0xC1B38F: {
        Instruction step(cpu, 0xBD, 0x00001Du, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:457 PLX
    case 0xC1B392: {
        Instruction step(cpu, 0xFA, 0x000000u, 1u, AddressMode::Implied);
        step.pull_x();
        return step.finish();
    }
    // src/overworld/use_item.asm:458 STA __BSS_START__,X
    case 0xC1B393: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:459 REP #PROC_FLAGS::ACCUM8
    case 0xC1B396: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/use_item.asm:460 LDA @LOCAL0A
    case 0xC1B398: {
        Instruction step(cpu, 0xA5, 0x00002Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:461 INC
    case 0xC1B39A: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/overworld/use_item.asm:462 STA @LOCAL0A
    case 0xC1B39B: {
        Instruction step(cpu, 0x85, 0x00002Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:464 STA @VIRTUAL02
    case 0xC1B39D: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:465 LDA #7
    case 0xC1B39F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000007u : 0x000007u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:465 LDA #7
    // Overlapping static entry reached from 0xC1B39F.
    case 0xC1B3A1: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_item.asm:466 CLC
    case 0xC1B3A2: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/use_item.asm:467 SBC @VIRTUAL02
    case 0xC1B3A3: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:798 BVS :+
    // Macro caller: src/overworld/use_item.asm:468 BRANCHGTS @UNKNOWN29
    case 0xC1B3A5: {
        Instruction step(cpu, 0x70, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_set();
        return step.finish();
    }
    // include/macros.asm:799 BPL dest
    // Macro caller: src/overworld/use_item.asm:468 BRANCHGTS @UNKNOWN29
    case 0xC1B3A7: {
        Instruction step(cpu, 0x10, 0x0000C7u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:800 BRA :++
    // Macro caller: src/overworld/use_item.asm:468 BRANCHGTS @UNKNOWN29
    case 0xC1B3A9: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:802 BMI dest
    // Macro caller: src/overworld/use_item.asm:468 BRANCHGTS @UNKNOWN29
    case 0xC1B3AB: {
        Instruction step(cpu, 0x30, 0x0000C3u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/overworld/use_item.asm:469 LDY @LOCAL06
    case 0xC1B3AD: {
        Instruction step(cpu, 0xA4, 0x000022u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/use_item.asm:470 INY
    case 0xC1B3AF: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/overworld/use_item.asm:471 STY @LOCAL06
    case 0xC1B3B0: {
        Instruction step(cpu, 0x84, 0x000022u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/use_item.asm:473 STY @VIRTUAL02
    case 0xC1B3B2: {
        Instruction step(cpu, 0x84, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/use_item.asm:474 LDA GAME_STATE+game_state::player_controlled_party_count
    case 0xC1B3B4: {
        Instruction step(cpu, 0xAD, 0x009B55u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:475 AND #$00FF
    case 0xC1B3B7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:475 AND #$00FF
    // Overlapping static entry reached from 0xC1B3B7.
    case 0xC1B3B9: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_item.asm:476 CLC
    case 0xC1B3BA: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/use_item.asm:477 SBC @VIRTUAL02
    case 0xC1B3BB: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:816 BVS :+
    // Macro caller: src/overworld/use_item.asm:478 JUMPGTS @UNKNOWN28
    case 0xC1B3BD: {
        Instruction step(cpu, 0x70, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_set();
        return step.finish();
    }
    // include/macros.asm:817 BMI :++
    // Macro caller: src/overworld/use_item.asm:478 JUMPGTS @UNKNOWN28
    case 0xC1B3BF: {
        Instruction step(cpu, 0x30, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // include/macros.asm:818 JMP dest
    // Macro caller: src/overworld/use_item.asm:478 JUMPGTS @UNKNOWN28
    case 0xC1B3C1: {
        Instruction step(cpu, 0x4C, 0x00B2F2u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:820 BPL :+
    // Macro caller: src/overworld/use_item.asm:478 JUMPGTS @UNKNOWN28
    case 0xC1B3C4: {
        Instruction step(cpu, 0x10, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:821 JMP dest
    // Macro caller: src/overworld/use_item.asm:478 JUMPGTS @UNKNOWN28
    case 0xC1B3C6: {
        Instruction step(cpu, 0x4C, 0x00B2F2u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/use_item.asm:479 JMP @UNKNOWN40
    case 0xC1B3C9: {
        Instruction step(cpu, 0x4C, 0x00B458u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/use_item.asm:481 TYA
    case 0xC1B3CC: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:482 JSL BATTLE_INIT_PLAYER_STATS
    case 0xC1B3CD: {
        Instruction step(cpu, 0x22, 0xC2B8D9u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/use_item.asm:483 MOVE_INT @LOCAL02, @VIRTUAL0A
    case 0xC1B3D1: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/use_item.asm:483 MOVE_INT @LOCAL02, @VIRTUAL0A
    case 0xC1B3D3: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/use_item.asm:483 MOVE_INT @LOCAL02, @VIRTUAL0A
    case 0xC1B3D5: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/use_item.asm:483 MOVE_INT @LOCAL02, @VIRTUAL0A
    case 0xC1B3D7: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:484 LDA [@VIRTUAL0A]
    case 0xC1B3D9: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:568 STA scratch
    // Macro caller: src/overworld/use_item.asm:485 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B3DB: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:569 ASL
    // Macro caller: src/overworld/use_item.asm:485 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B3DD: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/overworld/use_item.asm:485 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B3DE: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:571 ASL
    // Macro caller: src/overworld/use_item.asm:485 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B3E0: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:572 ASL
    // Macro caller: src/overworld/use_item.asm:485 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B3E1: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/use_item.asm:486 CLC
    case 0xC1B3E2: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/use_item.asm:487 ADC #battle_action::battle_function_pointer
    case 0xC1B3E3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/use_item.asm:487 ADC #battle_action::battle_function_pointer
    // Overlapping static entry reached from 0xC1B3E3.
    case 0xC1B3E5: {
        Instruction step(cpu, 0x00, 0x000048u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_item.asm:488 PHA
    case 0xC1B3E6: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/use_item.asm:489 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC1B3E7: {
        Instruction step(cpu, 0xA5, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/use_item.asm:489 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC1B3E9: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/use_item.asm:489 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC1B3EB: {
        Instruction step(cpu, 0xA5, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/use_item.asm:489 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC1B3ED: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:490 PLA
    case 0xC1B3EF: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:491 CLC
    case 0xC1B3F0: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/use_item.asm:492 ADC @VIRTUAL0A
    case 0xC1B3F1: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/use_item.asm:493 STA @VIRTUAL0A
    case 0xC1B3F3: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/use_item.asm:494 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B3F5: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/use_item.asm:494 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC1B3F5.
    case 0xC1B3F7: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/overworld/use_item.asm:494 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B3F8: {
        Instruction step(cpu, 0xB7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1136 TAY
    // Macro caller: src/overworld/use_item.asm:494 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B3FA: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/overworld/use_item.asm:494 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B3FB: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1138 STA dest
    // Macro caller: src/overworld/use_item.asm:494 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B3FD: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/overworld/use_item.asm:494 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B3FF: {
        Instruction step(cpu, 0x84, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/use_item.asm:495 PHA
    case 0xC1B401: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/use_item.asm:496 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC1B402: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/use_item.asm:496 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC1B404: {
        Instruction step(cpu, 0x8D, 0x0000BAu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/use_item.asm:496 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC1B407: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/use_item.asm:496 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC1B409: {
        Instruction step(cpu, 0x8D, 0x0000BCu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:497 PLA
    case 0xC1B40C: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:498 JSL UNKNOWN_C09279
    case 0xC1B40D: {
        Instruction step(cpu, 0x22, 0xC0925Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/use_item.asm:499 LDA #0
    case 0xC1B411: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:499 LDA #0
    // Overlapping static entry reached from 0xC1B411.
    case 0xC1B413: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_item.asm:500 STA @LOCAL0A
    case 0xC1B414: {
        Instruction step(cpu, 0x85, 0x00002Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:501 BRA @UNKNOWN38
    case 0xC1B416: {
        Instruction step(cpu, 0x80, 0x000030u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/use_item.asm:503 LDA @LOCAL0A
    case 0xC1B418: {
        Instruction step(cpu, 0xA5, 0x00002Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:504 STA @VIRTUAL02
    case 0xC1B41A: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:505 LDA @VIRTUAL00
    case 0xC1B41C: {
        Instruction step(cpu, 0xA5, 0x000000u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:506 AND #$00FF
    case 0xC1B41E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:506 AND #$00FF
    // Overlapping static entry reached from 0xC1B41E.
    case 0xC1B420: {
        Instruction step(cpu, 0x00, 0x00003Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_item.asm:507 DEC
    case 0xC1B421: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/overworld/use_item.asm:508 LDY #.SIZEOF(char_struct)
    case 0xC1B422: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Eu : 0x00005Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/use_item.asm:508 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1B422.
    case 0xC1B424: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_item.asm:509 JSL MULT168
    case 0xC1B425: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/use_item.asm:510 CLC
    case 0xC1B429: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/use_item.asm:511 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::afflictions
    case 0xC1B42A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00008Cu : 0x009C8Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/use_item.asm:511 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::afflictions
    // Overlapping static entry reached from 0xC1B42A.
    case 0xC1B42C: {
        Instruction step(cpu, 0x9C, 0x006518u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/use_item.asm:512 CLC
    case 0xC1B42D: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/use_item.asm:513 ADC @VIRTUAL02
    case 0xC1B42E: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/use_item.asm:513 ADC @VIRTUAL02
    // Overlapping static entry reached from 0xC1B42C.
    case 0xC1B42F: {
        Instruction step(cpu, 0x02, 0x000048u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/overworld/use_item.asm:514 PHA
    case 0xC1B430: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:515 LDA @LOCAL0A
    case 0xC1B431: {
        Instruction step(cpu, 0xA5, 0x00002Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:516 CLC
    case 0xC1B433: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/use_item.asm:517 ADC CURRENT_TARGET
    case 0xC1B434: {
        Instruction step(cpu, 0x6D, 0x00AB74u, 3u, AddressMode::Absolute);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/use_item.asm:518 TAX
    case 0xC1B437: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/use_item.asm:519 SEP #PROC_FLAGS::ACCUM8
    case 0xC1B438: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/use_item.asm:520 LDA __BSS_START__+battler::afflictions,X
    case 0xC1B43A: {
        Instruction step(cpu, 0xBD, 0x00001Du, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:521 PLX
    case 0xC1B43D: {
        Instruction step(cpu, 0xFA, 0x000000u, 1u, AddressMode::Implied);
        step.pull_x();
        return step.finish();
    }
    // src/overworld/use_item.asm:522 STA __BSS_START__,X
    case 0xC1B43E: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:523 REP #PROC_FLAGS::ACCUM8
    case 0xC1B441: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/use_item.asm:524 LDA @LOCAL0A
    case 0xC1B443: {
        Instruction step(cpu, 0xA5, 0x00002Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:525 INC
    case 0xC1B445: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/overworld/use_item.asm:526 STA @LOCAL0A
    case 0xC1B446: {
        Instruction step(cpu, 0x85, 0x00002Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:528 STA @VIRTUAL02
    case 0xC1B448: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:529 LDA #7
    case 0xC1B44A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000007u : 0x000007u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:529 LDA #7
    // Overlapping static entry reached from 0xC1B44A.
    case 0xC1B44C: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_item.asm:530 CLC
    case 0xC1B44D: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/use_item.asm:531 SBC @VIRTUAL02
    case 0xC1B44E: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:798 BVS :+
    // Macro caller: src/overworld/use_item.asm:532 BRANCHGTS @UNKNOWN37
    case 0xC1B450: {
        Instruction step(cpu, 0x70, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_set();
        return step.finish();
    }
    // include/macros.asm:799 BPL dest
    // Macro caller: src/overworld/use_item.asm:532 BRANCHGTS @UNKNOWN37
    case 0xC1B452: {
        Instruction step(cpu, 0x10, 0x0000C4u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:800 BRA :++
    // Macro caller: src/overworld/use_item.asm:532 BRANCHGTS @UNKNOWN37
    case 0xC1B454: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:802 BMI dest
    // Macro caller: src/overworld/use_item.asm:532 BRANCHGTS @UNKNOWN37
    case 0xC1B456: {
        Instruction step(cpu, 0x30, 0x0000C0u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/overworld/use_item.asm:534 JSL UNKNOWN_C3EE4D
    case 0xC1B458: {
        Instruction step(cpu, 0x22, 0xC3EA14u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/use_item.asm:535 BRA @UNKNOWN42
    case 0xC1B45C: {
        Instruction step(cpu, 0x80, 0x000014u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/use_item.asm:537 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC1B45E: {
        Instruction step(cpu, 0xA5, 0x000026u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/use_item.asm:537 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC1B460: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/use_item.asm:537 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC1B462: {
        Instruction step(cpu, 0xA5, 0x000028u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/use_item.asm:537 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC1B464: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/use_item.asm:538 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1B466: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/use_item.asm:538 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1B468: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/use_item.asm:538 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1B46A: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/use_item.asm:538 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1B46C: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:539 JSL DISPLAY_TEXT
    case 0xC1B46E: {
        Instruction step(cpu, 0x22, 0xC18913u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/use_item.asm:541 LDA #WINDOW::TEXT_STANDARD
    case 0xC1B472: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:541 LDA #WINDOW::TEXT_STANDARD
    // Overlapping static entry reached from 0xC1B472.
    case 0xC1B474: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_item.asm:542 JSR CLOSE_WINDOW
    case 0xC1B475: {
        Instruction step(cpu, 0x20, 0x000141u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/use_item.asm:543 LDA #TRUE
    case 0xC1B478: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:543 LDA #TRUE
    // Overlapping static entry reached from 0xC1B478.
    case 0xC1B47A: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/use_item.asm:545 END_C_FUNCTION
    case 0xC1B47B: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/overworld/use_item.asm:545 END_C_FUNCTION
    case 0xC1B47C: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
