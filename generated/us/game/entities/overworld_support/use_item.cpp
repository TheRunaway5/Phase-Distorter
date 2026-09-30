// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/overworld/use_item.asm
bool resume_overworld_use_item(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/use_item.asm:3 BEGIN_C_FUNCTION
    case 0xC1AF74: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/use_item.asm:20 END_STACK_VARS
    case 0xC1AF76: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/use_item.asm:20 END_STACK_VARS
    case 0xC1AF77: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/use_item.asm:20 END_STACK_VARS
    case 0xC1AF78: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/use_item.asm:20 END_STACK_VARS
    case 0xC1AF79: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000D2u : 0x00FFD2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/use_item.asm:20 END_STACK_VARS
    // Overlapping static entry reached from 0xC1AF79.
    case 0xC1AF7B: {
        Instruction step(cpu, 0xFF, 0x86685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/use_item.asm:20 END_STACK_VARS
    case 0xC1AF7C: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/use_item.asm:20 END_STACK_VARS
    case 0xC1AF7D: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:21 STX @LOCAL0A
    case 0xC1AF7E: {
        Instruction step(cpu, 0x86, 0x00002Cu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/use_item.asm:21 STX @LOCAL0A
    // Overlapping static entry reached from 0xC1AF7B.
    case 0xC1AF7F: {
        Instruction step(cpu, 0x2C, 0x000485u, 3u, AddressMode::Absolute);
        step.test_bits();
        return step.finish();
    }
    // src/overworld/use_item.asm:22 STA @VIRTUAL04
    case 0xC1AF80: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:23 STA @LOCAL09
    case 0xC1AF82: {
        Instruction step(cpu, 0x85, 0x00002Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/use_item.asm:24 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC1AF84: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/use_item.asm:24 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC1AF84.
    case 0xC1AF86: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/overworld/use_item.asm:24 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC1AF87: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/use_item.asm:24 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC1AF89: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/use_item.asm:24 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC1AF89.
    case 0xC1AF8B: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/overworld/use_item.asm:24 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC1AF8C: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/use_item.asm:25 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1AF8E: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/use_item.asm:25 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1AF90: {
        Instruction step(cpu, 0x85, 0x000026u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/use_item.asm:25 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1AF92: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/use_item.asm:25 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1AF94: {
        Instruction step(cpu, 0x85, 0x000028u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:26 LDA #0
    case 0xC1AF96: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:26 LDA #0
    // Overlapping static entry reached from 0xC1AF96.
    case 0xC1AF98: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_item.asm:27 STA @VIRTUAL02
    case 0xC1AF99: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:28 STA @LOCAL07
    case 0xC1AF9B: {
        Instruction step(cpu, 0x85, 0x000024u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:29 LDX @LOCAL0A
    case 0xC1AF9D: {
        Instruction step(cpu, 0xA6, 0x00002Cu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/use_item.asm:30 LDA @VIRTUAL04
    case 0xC1AF9F: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:31 JSL GET_CHARACTER_ITEM
    case 0xC1AFA1: {
        Instruction step(cpu, 0x22, 0xC3E977u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/use_item.asm:32 SEP #PROC_FLAGS::ACCUM8
    case 0xC1AFA5: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/use_item.asm:33 STA @VIRTUAL01
    case 0xC1AFA7: {
        Instruction step(cpu, 0x85, 0x000001u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:34 REP #PROC_FLAGS::ACCUM8
    case 0xC1AFA9: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/use_item.asm:35 LDA @VIRTUAL01
    case 0xC1AFAB: {
        Instruction step(cpu, 0xA5, 0x000001u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:36 AND #$00FF
    case 0xC1AFAD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:36 AND #$00FF
    // Overlapping static entry reached from 0xC1AFAD.
    case 0xC1AFAF: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_item.asm:37 STA @LOCAL06
    case 0xC1AFB0: {
        Instruction step(cpu, 0x85, 0x000022u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_item.asm:38 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC1AFB2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x005000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_item.asm:38 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1AFB2.
    case 0xC1AFB4: {
        Instruction step(cpu, 0x50, 0x000085u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_clear();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/use_item.asm:38 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC1AFB5: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/use_item.asm:38 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1AFB4.
    case 0xC1AFB6: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:38 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC1AFB7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D5u : 0x0000D5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:38 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1AFB6.
    case 0xC1AFB8: {
        Instruction step(cpu, 0xD5, 0x000000u, 2u, AddressMode::DirectPageIndexedX);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:38 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1AFB7.
    case 0xC1AFB9: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/use_item.asm:38 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC1AFBA: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:39 LDA @LOCAL06
    case 0xC1AFBC: {
        Instruction step(cpu, 0xA5, 0x000022u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/overworld/use_item.asm:40 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC1AFBE: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000027u : 0x000027u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/overworld/use_item.asm:40 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    // Overlapping static entry reached from 0xC1AFBE.
    case 0xC1AFC0: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/overworld/use_item.asm:40 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC1AFC1: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/use_item.asm:41 CLC
    case 0xC1AFC5: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/use_item.asm:42 ADC @VIRTUAL06
    case 0xC1AFC6: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/use_item.asm:43 STA @VIRTUAL06
    case 0xC1AFC8: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:44 STA @LOCAL05
    case 0xC1AFCA: {
        Instruction step(cpu, 0x85, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:45 LDA @VIRTUAL06+2
    case 0xC1AFCC: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:46 STA @LOCAL05+2
    case 0xC1AFCE: {
        Instruction step(cpu, 0x85, 0x000020u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:47 LDY #item::type
    case 0xC1AFD0: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000019u : 0x000019u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/use_item.asm:47 LDY #item::type
    // Overlapping static entry reached from 0xC1AFD0.
    case 0xC1AFD2: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_item.asm:48 LDA [@LOCAL05],Y
    case 0xC1AFD3: {
        Instruction step(cpu, 0xB7, 0x00001Eu, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:49 AND #$00FF
    case 0xC1AFD5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:49 AND #$00FF
    // Overlapping static entry reached from 0xC1AFD5.
    case 0xC1AFD7: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_item.asm:50 TAX
    case 0xC1AFD8: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/use_item.asm:51 STX @LOCAL04
    case 0xC1AFD9: {
        Instruction step(cpu, 0x86, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/use_item.asm:52 TXA
    case 0xC1AFDB: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:53 AND #ITEM_FLAGS::TRANSFORM | ITEM_FLAGS::CANNOT_GIVE
    case 0xC1AFDC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000030u : 0x000030u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:53 AND #ITEM_FLAGS::TRANSFORM | ITEM_FLAGS::CANNOT_GIVE
    // Overlapping static entry reached from 0xC1AFDC.
    case 0xC1AFDE: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_item.asm:54 BEQ @UNKNOWN1
    case 0xC1AFDF: {
        Instruction step(cpu, 0xF0, 0x000015u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/use_item.asm:55 CMP #ITEM_FLAGS::TRANSFORM
    case 0xC1AFE1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:55 CMP #ITEM_FLAGS::TRANSFORM
    // Overlapping static entry reached from 0xC1AFE1.
    case 0xC1AFE3: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_item.asm:56 BEQ @UNKNOWN2
    case 0xC1AFE4: {
        Instruction step(cpu, 0xF0, 0x00004Du, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/use_item.asm:57 CMP #ITEM_FLAGS::CANNOT_GIVE
    case 0xC1AFE6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:57 CMP #ITEM_FLAGS::CANNOT_GIVE
    // Overlapping static entry reached from 0xC1AFE6.
    case 0xC1AFE8: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_item.asm:58 BEQ @UNKNOWN3
    case 0xC1AFE9: {
        Instruction step(cpu, 0xF0, 0x00005Du, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/use_item.asm:59 CMP #ITEM_FLAGS::TRANSFORM | ITEM_FLAGS::CANNOT_GIVE
    case 0xC1AFEB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000030u : 0x000030u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:59 CMP #ITEM_FLAGS::TRANSFORM | ITEM_FLAGS::CANNOT_GIVE
    // Overlapping static entry reached from 0xC1AFEB.
    case 0xC1AFED: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/use_item.asm:60 BEQL @UNKNOWN4
    case 0xC1AFEE: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/use_item.asm:60 BEQL @UNKNOWN4
    case 0xC1AFF0: {
        Instruction step(cpu, 0x4C, 0x00B085u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/use_item.asm:61 JMP @UNKNOWN18
    case 0xC1AFF3: {
        Instruction step(cpu, 0x4C, 0x00B28Cu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/use_item.asm:63 LDA #1
    case 0xC1AFF6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:63 LDA #1
    // Overlapping static entry reached from 0xC1AFF6.
    case 0xC1AFF8: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_item.asm:64 STA @VIRTUAL02
    case 0xC1AFF9: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:65 STA @LOCAL07
    case 0xC1AFFB: {
        Instruction step(cpu, 0x85, 0x000024u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_item.asm:66 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC1AFFD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000068u : 0x007B68u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_item.asm:66 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1AFFD.
    case 0xC1AFFF: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/use_item.asm:66 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC1B000: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:66 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC1B002: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D5u : 0x0000D5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:66 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1B002.
    case 0xC1B004: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/use_item.asm:66 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC1B005: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:67 LDY #item::effect
    case 0xC1B007: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00001Du : 0x00001Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/use_item.asm:67 LDY #item::effect
    // Overlapping static entry reached from 0xC1B007.
    case 0xC1B009: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_item.asm:68 LDA [@LOCAL05],Y
    case 0xC1B00A: {
        Instruction step(cpu, 0xB7, 0x00001Eu, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:568 STA scratch
    // Macro caller: src/overworld/use_item.asm:69 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B00C: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:569 ASL
    // Macro caller: src/overworld/use_item.asm:69 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B00E: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/overworld/use_item.asm:69 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B00F: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:571 ASL
    // Macro caller: src/overworld/use_item.asm:69 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B011: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:572 ASL
    // Macro caller: src/overworld/use_item.asm:69 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B012: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:508 INC
    // Macro caller: src/overworld/use_item.asm:70 OPTIMIZED_ADD battle_action::description_text_pointer
    case 0xC1B013: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // include/macros.asm:509 INC
    // Macro caller: src/overworld/use_item.asm:70 OPTIMIZED_ADD battle_action::description_text_pointer
    case 0xC1B014: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // include/macros.asm:510 INC
    // Macro caller: src/overworld/use_item.asm:70 OPTIMIZED_ADD battle_action::description_text_pointer
    case 0xC1B015: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // include/macros.asm:511 INC
    // Macro caller: src/overworld/use_item.asm:70 OPTIMIZED_ADD battle_action::description_text_pointer
    case 0xC1B016: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/overworld/use_item.asm:71 CLC
    case 0xC1B017: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/use_item.asm:72 ADC @VIRTUAL0A
    case 0xC1B018: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/use_item.asm:73 STA @VIRTUAL0A
    case 0xC1B01A: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/use_item.asm:74 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B01C: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/use_item.asm:74 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC1B01C.
    case 0xC1B01E: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/overworld/use_item.asm:74 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B01F: {
        Instruction step(cpu, 0xB7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1136 TAY
    // Macro caller: src/overworld/use_item.asm:74 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B021: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/overworld/use_item.asm:74 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B022: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1138 STA dest
    // Macro caller: src/overworld/use_item.asm:74 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B024: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/overworld/use_item.asm:74 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B026: {
        Instruction step(cpu, 0x84, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/use_item.asm:75 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B028: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/use_item.asm:75 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B02A: {
        Instruction step(cpu, 0x85, 0x000026u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/use_item.asm:75 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B02C: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/use_item.asm:75 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B02E: {
        Instruction step(cpu, 0x85, 0x000028u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:76 JMP @UNKNOWN18
    case 0xC1B030: {
        Instruction step(cpu, 0x4C, 0x00B28Cu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_item.asm:78 LOADPTR MSG_SYS_GOODS_EQUIP, @VIRTUAL06
    case 0xC1B033: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000042u : 0x00C742u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_item.asm:78 LOADPTR MSG_SYS_GOODS_EQUIP, @VIRTUAL06
    // Overlapping static entry reached from 0xC1B033.
    case 0xC1B035: {
        Instruction step(cpu, 0xC7, 0x000085u, 2u, AddressMode::DirectPageIndirectLong);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/use_item.asm:78 LOADPTR MSG_SYS_GOODS_EQUIP, @VIRTUAL06
    case 0xC1B036: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/use_item.asm:78 LOADPTR MSG_SYS_GOODS_EQUIP, @VIRTUAL06
    // Overlapping static entry reached from 0xC1B035.
    case 0xC1B037: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:78 LOADPTR MSG_SYS_GOODS_EQUIP, @VIRTUAL06
    case 0xC1B038: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:78 LOADPTR MSG_SYS_GOODS_EQUIP, @VIRTUAL06
    // Overlapping static entry reached from 0xC1B037.
    case 0xC1B039: {
        Instruction step(cpu, 0xC7, 0x000000u, 2u, AddressMode::DirectPageIndirectLong);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:78 LOADPTR MSG_SYS_GOODS_EQUIP, @VIRTUAL06
    // Overlapping static entry reached from 0xC1B038.
    case 0xC1B03A: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/use_item.asm:78 LOADPTR MSG_SYS_GOODS_EQUIP, @VIRTUAL06
    case 0xC1B03B: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/use_item.asm:79 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B03D: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/use_item.asm:79 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B03F: {
        Instruction step(cpu, 0x85, 0x000026u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/use_item.asm:79 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B041: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/use_item.asm:79 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B043: {
        Instruction step(cpu, 0x85, 0x000028u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:80 JMP @UNKNOWN18
    case 0xC1B045: {
        Instruction step(cpu, 0x4C, 0x00B28Cu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/use_item.asm:82 LDA #1
    case 0xC1B048: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:82 LDA #1
    // Overlapping static entry reached from 0xC1B048.
    case 0xC1B04A: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_item.asm:83 STA @VIRTUAL02
    case 0xC1B04B: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:84 STA @LOCAL07
    case 0xC1B04D: {
        Instruction step(cpu, 0x85, 0x000024u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_item.asm:85 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC1B04F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000068u : 0x007B68u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_item.asm:85 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1B04F.
    case 0xC1B051: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/use_item.asm:85 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC1B052: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:85 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC1B054: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D5u : 0x0000D5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:85 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1B054.
    case 0xC1B056: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/use_item.asm:85 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC1B057: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:86 LDY #item::effect
    case 0xC1B059: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00001Du : 0x00001Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/use_item.asm:86 LDY #item::effect
    // Overlapping static entry reached from 0xC1B059.
    case 0xC1B05B: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_item.asm:87 LDA [@LOCAL05],Y
    case 0xC1B05C: {
        Instruction step(cpu, 0xB7, 0x00001Eu, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:568 STA scratch
    // Macro caller: src/overworld/use_item.asm:88 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B05E: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:569 ASL
    // Macro caller: src/overworld/use_item.asm:88 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B060: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/overworld/use_item.asm:88 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B061: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:571 ASL
    // Macro caller: src/overworld/use_item.asm:88 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B063: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:572 ASL
    // Macro caller: src/overworld/use_item.asm:88 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B064: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:508 INC
    // Macro caller: src/overworld/use_item.asm:89 OPTIMIZED_ADD battle_action::description_text_pointer
    case 0xC1B065: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // include/macros.asm:509 INC
    // Macro caller: src/overworld/use_item.asm:89 OPTIMIZED_ADD battle_action::description_text_pointer
    case 0xC1B066: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // include/macros.asm:510 INC
    // Macro caller: src/overworld/use_item.asm:89 OPTIMIZED_ADD battle_action::description_text_pointer
    case 0xC1B067: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // include/macros.asm:511 INC
    // Macro caller: src/overworld/use_item.asm:89 OPTIMIZED_ADD battle_action::description_text_pointer
    case 0xC1B068: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/overworld/use_item.asm:90 CLC
    case 0xC1B069: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/use_item.asm:91 ADC @VIRTUAL0A
    case 0xC1B06A: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/use_item.asm:92 STA @VIRTUAL0A
    case 0xC1B06C: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/use_item.asm:93 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B06E: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/use_item.asm:93 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC1B06E.
    case 0xC1B070: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/overworld/use_item.asm:93 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B071: {
        Instruction step(cpu, 0xB7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1136 TAY
    // Macro caller: src/overworld/use_item.asm:93 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B073: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/overworld/use_item.asm:93 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B074: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1138 STA dest
    // Macro caller: src/overworld/use_item.asm:93 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B076: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/overworld/use_item.asm:93 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B078: {
        Instruction step(cpu, 0x84, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/use_item.asm:94 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B07A: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/use_item.asm:94 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B07C: {
        Instruction step(cpu, 0x85, 0x000026u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/use_item.asm:94 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B07E: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/use_item.asm:94 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B080: {
        Instruction step(cpu, 0x85, 0x000028u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:95 JMP @UNKNOWN18
    case 0xC1B082: {
        Instruction step(cpu, 0x4C, 0x00B28Cu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/use_item.asm:97 LDY #item::flags
    case 0xC1B085: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00001Cu : 0x00001Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/use_item.asm:97 LDY #item::flags
    // Overlapping static entry reached from 0xC1B085.
    case 0xC1B087: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_item.asm:102 LDX @VIRTUAL04
    case 0xC1B088: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/use_item.asm:103 DEX
    case 0xC1B08A: {
        Instruction step(cpu, 0xCA, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_x();
        return step.finish();
    }
    // src/overworld/use_item.asm:104 SEP #PROC_FLAGS::ACCUM8
    case 0xC1B08B: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/use_item.asm:105 LDA f:ITEM_USABLE_FLAGS,X
    case 0xC1B08D: {
        Instruction step(cpu, 0xBF, 0xC458ABu, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:106 AND [@LOCAL05],Y
    case 0xC1B091: {
        Instruction step(cpu, 0x37, 0x00001Eu, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:107 REP #PROC_FLAGS::ACCUM8
    case 0xC1B093: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/use_item.asm:108 AND #$00FF
    case 0xC1B095: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:108 AND #$00FF
    // Overlapping static entry reached from 0xC1B095.
    case 0xC1B097: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_item.asm:109 BNE @CHAR_CAN_USE_ITEM
    case 0xC1B098: {
        Instruction step(cpu, 0xD0, 0x000015u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_item.asm:110 LOADPTR MSG_SYS_GOODS_USE_NG_USER, @VIRTUAL06
    case 0xC1B09A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E8u : 0x007EE8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_item.asm:110 LOADPTR MSG_SYS_GOODS_USE_NG_USER, @VIRTUAL06
    // Overlapping static entry reached from 0xC1B09A.
    case 0xC1B09C: {
        Instruction step(cpu, 0x7E, 0x000685u, 3u, AddressMode::AbsoluteIndexedX);
        step.rotate_right();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/use_item.asm:110 LOADPTR MSG_SYS_GOODS_USE_NG_USER, @VIRTUAL06
    case 0xC1B09D: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:110 LOADPTR MSG_SYS_GOODS_USE_NG_USER, @VIRTUAL06
    case 0xC1B09F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:110 LOADPTR MSG_SYS_GOODS_USE_NG_USER, @VIRTUAL06
    // Overlapping static entry reached from 0xC1B09F.
    case 0xC1B0A1: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/use_item.asm:110 LOADPTR MSG_SYS_GOODS_USE_NG_USER, @VIRTUAL06
    case 0xC1B0A2: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/use_item.asm:111 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B0A4: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/use_item.asm:111 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B0A6: {
        Instruction step(cpu, 0x85, 0x000026u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/use_item.asm:111 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B0A8: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/use_item.asm:111 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B0AA: {
        Instruction step(cpu, 0x85, 0x000028u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:112 JMP @UNKNOWN18
    case 0xC1B0AC: {
        Instruction step(cpu, 0x4C, 0x00B28Cu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/use_item.asm:114 LDX @LOCAL04
    case 0xC1B0AF: {
        Instruction step(cpu, 0xA6, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/use_item.asm:115 TXA
    case 0xC1B0B1: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:116 AND #$000C
    case 0xC1B0B2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x00000Cu : 0x00000Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:116 AND #$000C
    // Overlapping static entry reached from 0xC1B0B2.
    case 0xC1B0B4: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_item.asm:117 BEQ @UNKNOWN6
    case 0xC1B0B5: {
        Instruction step(cpu, 0xF0, 0x00000Du, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/use_item.asm:118 CMP #4
    case 0xC1B0B7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:118 CMP #4
    // Overlapping static entry reached from 0xC1B0B7.
    case 0xC1B0B9: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_item.asm:119 BEQ @UNKNOWN7
    case 0xC1B0BA: {
        Instruction step(cpu, 0xF0, 0x000045u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/use_item.asm:120 CMP #8
    case 0xC1B0BC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:120 CMP #8
    // Overlapping static entry reached from 0xC1B0BC.
    case 0xC1B0BE: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_item.asm:121 BEQ @UNKNOWN8
    case 0xC1B0BF: {
        Instruction step(cpu, 0xF0, 0x000055u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/use_item.asm:122 JMP @UNKNOWN18
    case 0xC1B0C1: {
        Instruction step(cpu, 0x4C, 0x00B28Cu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/use_item.asm:124 LDA #1
    case 0xC1B0C4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:124 LDA #1
    // Overlapping static entry reached from 0xC1B0C4.
    case 0xC1B0C6: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_item.asm:125 STA @VIRTUAL02
    case 0xC1B0C7: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:126 STA @LOCAL07
    case 0xC1B0C9: {
        Instruction step(cpu, 0x85, 0x000024u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_item.asm:127 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC1B0CB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000068u : 0x007B68u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_item.asm:127 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1B0CB.
    case 0xC1B0CD: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/use_item.asm:127 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC1B0CE: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:127 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC1B0D0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D5u : 0x0000D5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:127 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1B0D0.
    case 0xC1B0D2: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/use_item.asm:127 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC1B0D3: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:128 LDY #item::effect
    case 0xC1B0D5: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00001Du : 0x00001Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/use_item.asm:128 LDY #item::effect
    // Overlapping static entry reached from 0xC1B0D5.
    case 0xC1B0D7: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_item.asm:129 LDA [@LOCAL05],Y
    case 0xC1B0D8: {
        Instruction step(cpu, 0xB7, 0x00001Eu, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:568 STA scratch
    // Macro caller: src/overworld/use_item.asm:130 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B0DA: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:569 ASL
    // Macro caller: src/overworld/use_item.asm:130 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B0DC: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/overworld/use_item.asm:130 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B0DD: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:571 ASL
    // Macro caller: src/overworld/use_item.asm:130 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B0DF: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:572 ASL
    // Macro caller: src/overworld/use_item.asm:130 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B0E0: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:508 INC
    // Macro caller: src/overworld/use_item.asm:131 OPTIMIZED_ADD battle_action::description_text_pointer
    case 0xC1B0E1: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // include/macros.asm:509 INC
    // Macro caller: src/overworld/use_item.asm:131 OPTIMIZED_ADD battle_action::description_text_pointer
    case 0xC1B0E2: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // include/macros.asm:510 INC
    // Macro caller: src/overworld/use_item.asm:131 OPTIMIZED_ADD battle_action::description_text_pointer
    case 0xC1B0E3: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // include/macros.asm:511 INC
    // Macro caller: src/overworld/use_item.asm:131 OPTIMIZED_ADD battle_action::description_text_pointer
    case 0xC1B0E4: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/overworld/use_item.asm:132 CLC
    case 0xC1B0E5: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/use_item.asm:133 ADC @VIRTUAL0A
    case 0xC1B0E6: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/use_item.asm:134 STA @VIRTUAL0A
    case 0xC1B0E8: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/use_item.asm:135 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B0EA: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/use_item.asm:135 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC1B0EA.
    case 0xC1B0EC: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/overworld/use_item.asm:135 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B0ED: {
        Instruction step(cpu, 0xB7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1136 TAY
    // Macro caller: src/overworld/use_item.asm:135 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B0EF: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/overworld/use_item.asm:135 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B0F0: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1138 STA dest
    // Macro caller: src/overworld/use_item.asm:135 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B0F2: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/overworld/use_item.asm:135 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B0F4: {
        Instruction step(cpu, 0x84, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/use_item.asm:136 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B0F6: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/use_item.asm:136 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B0F8: {
        Instruction step(cpu, 0x85, 0x000026u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/use_item.asm:136 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B0FA: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/use_item.asm:136 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B0FC: {
        Instruction step(cpu, 0x85, 0x000028u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:137 JMP @UNKNOWN18
    case 0xC1B0FE: {
        Instruction step(cpu, 0x4C, 0x00B28Cu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_item.asm:139 LOADPTR MSG_SYS_GOODS_USE_NG_HERE, @VIRTUAL06
    case 0xC1B101: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000F1u : 0x00C6F1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_item.asm:139 LOADPTR MSG_SYS_GOODS_USE_NG_HERE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1B101.
    case 0xC1B103: {
        Instruction step(cpu, 0xC6, 0x000085u, 2u, AddressMode::DirectPage);
        step.decrement();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/use_item.asm:139 LOADPTR MSG_SYS_GOODS_USE_NG_HERE, @VIRTUAL06
    case 0xC1B104: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/use_item.asm:139 LOADPTR MSG_SYS_GOODS_USE_NG_HERE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1B103.
    case 0xC1B105: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:139 LOADPTR MSG_SYS_GOODS_USE_NG_HERE, @VIRTUAL06
    case 0xC1B106: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:139 LOADPTR MSG_SYS_GOODS_USE_NG_HERE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1B105.
    case 0xC1B107: {
        Instruction step(cpu, 0xC7, 0x000000u, 2u, AddressMode::DirectPageIndirectLong);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:139 LOADPTR MSG_SYS_GOODS_USE_NG_HERE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1B106.
    case 0xC1B108: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/use_item.asm:139 LOADPTR MSG_SYS_GOODS_USE_NG_HERE, @VIRTUAL06
    case 0xC1B109: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/use_item.asm:140 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B10B: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/use_item.asm:140 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B10D: {
        Instruction step(cpu, 0x85, 0x000026u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/use_item.asm:140 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B10F: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/use_item.asm:140 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B111: {
        Instruction step(cpu, 0x85, 0x000028u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:141 JMP @UNKNOWN18
    case 0xC1B113: {
        Instruction step(cpu, 0x4C, 0x00B28Cu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/use_item.asm:143 TXA
    case 0xC1B116: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:144 AND #$0003
    case 0xC1B117: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:144 AND #$0003
    // Overlapping static entry reached from 0xC1B117.
    case 0xC1B119: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_item.asm:145 BEQ @UNKNOWN10
    case 0xC1B11A: {
        Instruction step(cpu, 0xF0, 0x000015u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/use_item.asm:146 CMP #1
    case 0xC1B11C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:146 CMP #1
    // Overlapping static entry reached from 0xC1B11C.
    case 0xC1B11E: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_item.asm:147 BEQ @UNKNOWN10
    case 0xC1B11F: {
        Instruction step(cpu, 0xF0, 0x000010u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/use_item.asm:148 CMP #2
    case 0xC1B121: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:148 CMP #2
    // Overlapping static entry reached from 0xC1B121.
    case 0xC1B123: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_item.asm:149 BEQ @UNKNOWN11
    case 0xC1B124: {
        Instruction step(cpu, 0xF0, 0x000048u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/use_item.asm:150 CMP #3
    case 0xC1B126: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:150 CMP #3
    // Overlapping static entry reached from 0xC1B126.
    case 0xC1B128: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/use_item.asm:151 BEQL @UNKNOWN14
    case 0xC1B129: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/use_item.asm:151 BEQL @UNKNOWN14
    case 0xC1B12B: {
        Instruction step(cpu, 0x4C, 0x00B1F2u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/use_item.asm:152 JMP @UNKNOWN18
    case 0xC1B12E: {
        Instruction step(cpu, 0x4C, 0x00B28Cu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/use_item.asm:154 LDA #1
    case 0xC1B131: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:154 LDA #1
    // Overlapping static entry reached from 0xC1B131.
    case 0xC1B133: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_item.asm:155 STA @VIRTUAL02
    case 0xC1B134: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:156 STA @LOCAL07
    case 0xC1B136: {
        Instruction step(cpu, 0x85, 0x000024u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_item.asm:157 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC1B138: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000068u : 0x007B68u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_item.asm:157 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1B138.
    case 0xC1B13A: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/use_item.asm:157 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC1B13B: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:157 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC1B13D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D5u : 0x0000D5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:157 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1B13D.
    case 0xC1B13F: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/use_item.asm:157 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC1B140: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:158 LDY #item::effect
    case 0xC1B142: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00001Du : 0x00001Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/use_item.asm:158 LDY #item::effect
    // Overlapping static entry reached from 0xC1B142.
    case 0xC1B144: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_item.asm:159 LDA [@LOCAL05],Y
    case 0xC1B145: {
        Instruction step(cpu, 0xB7, 0x00001Eu, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:568 STA scratch
    // Macro caller: src/overworld/use_item.asm:160 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B147: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:569 ASL
    // Macro caller: src/overworld/use_item.asm:160 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B149: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/overworld/use_item.asm:160 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B14A: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:571 ASL
    // Macro caller: src/overworld/use_item.asm:160 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B14C: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:572 ASL
    // Macro caller: src/overworld/use_item.asm:160 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B14D: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:508 INC
    // Macro caller: src/overworld/use_item.asm:161 OPTIMIZED_ADD battle_action::description_text_pointer
    case 0xC1B14E: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // include/macros.asm:509 INC
    // Macro caller: src/overworld/use_item.asm:161 OPTIMIZED_ADD battle_action::description_text_pointer
    case 0xC1B14F: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // include/macros.asm:510 INC
    // Macro caller: src/overworld/use_item.asm:161 OPTIMIZED_ADD battle_action::description_text_pointer
    case 0xC1B150: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // include/macros.asm:511 INC
    // Macro caller: src/overworld/use_item.asm:161 OPTIMIZED_ADD battle_action::description_text_pointer
    case 0xC1B151: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/overworld/use_item.asm:162 CLC
    case 0xC1B152: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/use_item.asm:163 ADC @VIRTUAL0A
    case 0xC1B153: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/use_item.asm:164 STA @VIRTUAL0A
    case 0xC1B155: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/use_item.asm:165 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B157: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/use_item.asm:165 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC1B157.
    case 0xC1B159: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/overworld/use_item.asm:165 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B15A: {
        Instruction step(cpu, 0xB7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1136 TAY
    // Macro caller: src/overworld/use_item.asm:165 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B15C: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/overworld/use_item.asm:165 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B15D: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1138 STA dest
    // Macro caller: src/overworld/use_item.asm:165 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B15F: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/overworld/use_item.asm:165 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B161: {
        Instruction step(cpu, 0x84, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/use_item.asm:166 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B163: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/use_item.asm:166 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B165: {
        Instruction step(cpu, 0x85, 0x000026u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/use_item.asm:166 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B167: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/use_item.asm:166 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B169: {
        Instruction step(cpu, 0x85, 0x000028u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:167 JMP @UNKNOWN18
    case 0xC1B16B: {
        Instruction step(cpu, 0x4C, 0x00B28Cu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/use_item.asm:169 JSR UNKNOWN_C1AD7D
    case 0xC1B16E: {
        Instruction step(cpu, 0x20, 0x00AD7Du, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/use_item.asm:170 TAX
    case 0xC1B171: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/use_item.asm:171 LDA @LOCAL06
    case 0xC1B172: {
        Instruction step(cpu, 0xA5, 0x000022u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:172 STA @VIRTUAL02
    case 0xC1B174: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:173 TXA
    case 0xC1B176: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:174 CMP @VIRTUAL02
    case 0xC1B177: {
        Instruction step(cpu, 0xC5, 0x000002u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:175 BNE @UNKNOWN13
    case 0xC1B179: {
        Instruction step(cpu, 0xD0, 0x000062u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/use_item.asm:176 LDA @LOCAL06
    case 0xC1B17B: {
        Instruction step(cpu, 0xA5, 0x000022u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:177 CMP #ITEM::BICYCLE
    case 0xC1B17D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000B0u : 0x0000B0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:177 CMP #ITEM::BICYCLE
    // Overlapping static entry reached from 0xC1B17D.
    case 0xC1B17F: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_item.asm:178 BNE @UNKNOWN12
    case 0xC1B180: {
        Instruction step(cpu, 0xD0, 0x00001Eu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/use_item.asm:179 JSL UNKNOWN_C03C4B
    case 0xC1B182: {
        Instruction step(cpu, 0x22, 0xC03C4Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/use_item.asm:180 CMP #0
    case 0xC1B186: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:180 CMP #0
    // Overlapping static entry reached from 0xC1B186.
    case 0xC1B188: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_item.asm:181 BEQ @UNKNOWN12
    case 0xC1B189: {
        Instruction step(cpu, 0xF0, 0x000015u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_item.asm:182 LOADPTR MSG_SYS_BICYCLE_ATARI_HERE, @VIRTUAL06
    case 0xC1B18B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000033u : 0x00C833u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_item.asm:182 LOADPTR MSG_SYS_BICYCLE_ATARI_HERE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1B18B.
    case 0xC1B18D: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/use_item.asm:182 LOADPTR MSG_SYS_BICYCLE_ATARI_HERE, @VIRTUAL06
    case 0xC1B18E: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:182 LOADPTR MSG_SYS_BICYCLE_ATARI_HERE, @VIRTUAL06
    case 0xC1B190: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:182 LOADPTR MSG_SYS_BICYCLE_ATARI_HERE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1B190.
    case 0xC1B192: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/use_item.asm:182 LOADPTR MSG_SYS_BICYCLE_ATARI_HERE, @VIRTUAL06
    case 0xC1B193: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/use_item.asm:183 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B195: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/use_item.asm:183 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B197: {
        Instruction step(cpu, 0x85, 0x000026u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/use_item.asm:183 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B199: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/use_item.asm:183 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B19B: {
        Instruction step(cpu, 0x85, 0x000028u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:184 JMP @UNKNOWN18
    case 0xC1B19D: {
        Instruction step(cpu, 0x4C, 0x00B28Cu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/use_item.asm:186 LDA #1
    case 0xC1B1A0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:186 LDA #1
    // Overlapping static entry reached from 0xC1B1A0.
    case 0xC1B1A2: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_item.asm:187 STA @VIRTUAL02
    case 0xC1B1A3: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:188 STA @LOCAL07
    case 0xC1B1A5: {
        Instruction step(cpu, 0x85, 0x000024u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_item.asm:189 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC1B1A7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000068u : 0x007B68u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_item.asm:189 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1B1A7.
    case 0xC1B1A9: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/use_item.asm:189 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC1B1AA: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:189 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC1B1AC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D5u : 0x0000D5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:189 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1B1AC.
    case 0xC1B1AE: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/use_item.asm:189 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC1B1AF: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:190 LDY #item::effect
    case 0xC1B1B1: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00001Du : 0x00001Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/use_item.asm:190 LDY #item::effect
    // Overlapping static entry reached from 0xC1B1B1.
    case 0xC1B1B3: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_item.asm:191 LDA [@LOCAL05],Y
    case 0xC1B1B4: {
        Instruction step(cpu, 0xB7, 0x00001Eu, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:568 STA scratch
    // Macro caller: src/overworld/use_item.asm:192 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B1B6: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:569 ASL
    // Macro caller: src/overworld/use_item.asm:192 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B1B8: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/overworld/use_item.asm:192 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B1B9: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:571 ASL
    // Macro caller: src/overworld/use_item.asm:192 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B1BB: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:572 ASL
    // Macro caller: src/overworld/use_item.asm:192 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B1BC: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:508 INC
    // Macro caller: src/overworld/use_item.asm:193 OPTIMIZED_ADD battle_action::description_text_pointer
    case 0xC1B1BD: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // include/macros.asm:509 INC
    // Macro caller: src/overworld/use_item.asm:193 OPTIMIZED_ADD battle_action::description_text_pointer
    case 0xC1B1BE: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // include/macros.asm:510 INC
    // Macro caller: src/overworld/use_item.asm:193 OPTIMIZED_ADD battle_action::description_text_pointer
    case 0xC1B1BF: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // include/macros.asm:511 INC
    // Macro caller: src/overworld/use_item.asm:193 OPTIMIZED_ADD battle_action::description_text_pointer
    case 0xC1B1C0: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/overworld/use_item.asm:194 CLC
    case 0xC1B1C1: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/use_item.asm:195 ADC @VIRTUAL0A
    case 0xC1B1C2: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/use_item.asm:196 STA @VIRTUAL0A
    case 0xC1B1C4: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/use_item.asm:197 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B1C6: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/use_item.asm:197 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC1B1C6.
    case 0xC1B1C8: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/overworld/use_item.asm:197 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B1C9: {
        Instruction step(cpu, 0xB7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1136 TAY
    // Macro caller: src/overworld/use_item.asm:197 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B1CB: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/overworld/use_item.asm:197 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B1CC: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1138 STA dest
    // Macro caller: src/overworld/use_item.asm:197 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B1CE: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/overworld/use_item.asm:197 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B1D0: {
        Instruction step(cpu, 0x84, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/use_item.asm:198 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B1D2: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/use_item.asm:198 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B1D4: {
        Instruction step(cpu, 0x85, 0x000026u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/use_item.asm:198 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B1D6: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/use_item.asm:198 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B1D8: {
        Instruction step(cpu, 0x85, 0x000028u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:199 JMP @UNKNOWN18
    case 0xC1B1DA: {
        Instruction step(cpu, 0x4C, 0x00B28Cu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_item.asm:201 LOADPTR MSG_SYS_GOODS_USE_NG_HERE, @VIRTUAL06
    case 0xC1B1DD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000F1u : 0x00C6F1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_item.asm:201 LOADPTR MSG_SYS_GOODS_USE_NG_HERE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1B1DD.
    case 0xC1B1DF: {
        Instruction step(cpu, 0xC6, 0x000085u, 2u, AddressMode::DirectPage);
        step.decrement();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/use_item.asm:201 LOADPTR MSG_SYS_GOODS_USE_NG_HERE, @VIRTUAL06
    case 0xC1B1E0: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/use_item.asm:201 LOADPTR MSG_SYS_GOODS_USE_NG_HERE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1B1DF.
    case 0xC1B1E1: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:201 LOADPTR MSG_SYS_GOODS_USE_NG_HERE, @VIRTUAL06
    case 0xC1B1E2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:201 LOADPTR MSG_SYS_GOODS_USE_NG_HERE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1B1E1.
    case 0xC1B1E3: {
        Instruction step(cpu, 0xC7, 0x000000u, 2u, AddressMode::DirectPageIndirectLong);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:201 LOADPTR MSG_SYS_GOODS_USE_NG_HERE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1B1E2.
    case 0xC1B1E4: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/use_item.asm:201 LOADPTR MSG_SYS_GOODS_USE_NG_HERE, @VIRTUAL06
    case 0xC1B1E5: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/use_item.asm:202 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B1E7: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/use_item.asm:202 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B1E9: {
        Instruction step(cpu, 0x85, 0x000026u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/use_item.asm:202 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B1EB: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/use_item.asm:202 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B1ED: {
        Instruction step(cpu, 0x85, 0x000028u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:203 JMP @UNKNOWN18
    case 0xC1B1EF: {
        Instruction step(cpu, 0x4C, 0x00B28Cu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/use_item.asm:205 LDA #1
    case 0xC1B1F2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:205 LDA #1
    // Overlapping static entry reached from 0xC1B1F2.
    case 0xC1B1F4: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_item.asm:206 STA @VIRTUAL02
    case 0xC1B1F5: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:207 STA @LOCAL07
    case 0xC1B1F7: {
        Instruction step(cpu, 0x85, 0x000024u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:208 JSR UNKNOWN_C1AD42
    case 0xC1B1F9: {
        Instruction step(cpu, 0x20, 0x00AD42u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/use_item.asm:209 REP #PROC_FLAGS::ACCUM8
    case 0xC1B1FC: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/use_item.asm:210 AND #$00FF
    case 0xC1B1FE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:210 AND #$00FF
    // Overlapping static entry reached from 0xC1B1FE.
    case 0xC1B200: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_item.asm:211 CMP #1
    case 0xC1B201: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:211 CMP #1
    // Overlapping static entry reached from 0xC1B201.
    case 0xC1B203: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_item.asm:212 BEQ @UNKNOWN15
    case 0xC1B204: {
        Instruction step(cpu, 0xF0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/use_item.asm:213 CMP #3
    case 0xC1B206: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:213 CMP #3
    // Overlapping static entry reached from 0xC1B206.
    case 0xC1B208: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_item.asm:214 BNE @UNKNOWN16
    case 0xC1B209: {
        Instruction step(cpu, 0xD0, 0x000032u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_item.asm:216 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL0A
    case 0xC1B20B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000085u : 0x008985u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_item.asm:216 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1B20B.
    case 0xC1B20D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x89, narrow ? 0x000085u : 0x000A85u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.test_bits();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/use_item.asm:216 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL0A
    case 0xC1B20E: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/use_item.asm:216 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1B20D.
    case 0xC1B20F: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:216 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL0A
    case 0xC1B210: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000CFu : 0x0000CFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:216 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1B210.
    case 0xC1B212: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/use_item.asm:216 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL0A
    case 0xC1B213: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:217 LDA INTERACTING_NPC_ID
    case 0xC1B215: {
        Instruction step(cpu, 0xAD, 0x005D62u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:594 STA scratch
    // Macro caller: src/overworld/use_item.asm:218 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC1B218: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:595 ASL
    // Macro caller: src/overworld/use_item.asm:218 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC1B21A: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:596 ASL
    // Macro caller: src/overworld/use_item.asm:218 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC1B21B: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:597 ASL
    // Macro caller: src/overworld/use_item.asm:218 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC1B21C: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:598 ASL
    // Macro caller: src/overworld/use_item.asm:218 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC1B21D: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:599 ADC scratch
    // Macro caller: src/overworld/use_item.asm:218 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC1B21E: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/use_item.asm:219 CLC
    case 0xC1B220: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/use_item.asm:220 ADC #npc_config::text_pointer2
    case 0xC1B221: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00000Du : 0x00000Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/use_item.asm:220 ADC #npc_config::text_pointer2
    // Overlapping static entry reached from 0xC1B221.
    case 0xC1B223: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_item.asm:221 CLC
    case 0xC1B224: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/use_item.asm:222 ADC @VIRTUAL0A
    case 0xC1B225: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/use_item.asm:223 STA @VIRTUAL0A
    case 0xC1B227: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/use_item.asm:224 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B229: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/use_item.asm:224 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC1B229.
    case 0xC1B22B: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/overworld/use_item.asm:224 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B22C: {
        Instruction step(cpu, 0xB7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1136 TAY
    // Macro caller: src/overworld/use_item.asm:224 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B22E: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/overworld/use_item.asm:224 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B22F: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1138 STA dest
    // Macro caller: src/overworld/use_item.asm:224 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B231: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/overworld/use_item.asm:224 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B233: {
        Instruction step(cpu, 0x84, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/use_item.asm:225 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B235: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/use_item.asm:225 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B237: {
        Instruction step(cpu, 0x85, 0x000026u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/use_item.asm:225 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B239: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/use_item.asm:225 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B23B: {
        Instruction step(cpu, 0x85, 0x000028u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/use_item.asm:227 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC1B23D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/use_item.asm:227 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1B23D.
    case 0xC1B23F: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/overworld/use_item.asm:227 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC1B240: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/use_item.asm:227 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC1B242: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/use_item.asm:227 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1B242.
    case 0xC1B244: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/overworld/use_item.asm:227 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC1B245: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/use_item.asm:228 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC1B247: {
        Instruction step(cpu, 0xA5, 0x000026u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/use_item.asm:228 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC1B249: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/use_item.asm:228 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC1B24B: {
        Instruction step(cpu, 0xA5, 0x000028u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/use_item.asm:228 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC1B24D: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:229 CMP @VIRTUAL0A+2
    case 0xC1B24F: {
        Instruction step(cpu, 0xC5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:230 BNE @UNKNOWN17
    case 0xC1B251: {
        Instruction step(cpu, 0xD0, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/use_item.asm:231 LDA @VIRTUAL06
    case 0xC1B253: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:232 CMP @VIRTUAL0A
    case 0xC1B255: {
        Instruction step(cpu, 0xC5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:234 BNE @UNKNOWN18
    case 0xC1B257: {
        Instruction step(cpu, 0xD0, 0x000033u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_item.asm:235 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC1B259: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000068u : 0x007B68u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_item.asm:235 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1B259.
    case 0xC1B25B: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/use_item.asm:235 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC1B25C: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:235 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC1B25E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D5u : 0x0000D5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:235 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1B25E.
    case 0xC1B260: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/use_item.asm:235 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC1B261: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:236 LDY #item::effect
    case 0xC1B263: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00001Du : 0x00001Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/use_item.asm:236 LDY #item::effect
    // Overlapping static entry reached from 0xC1B263.
    case 0xC1B265: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_item.asm:237 LDA [@LOCAL05],Y
    case 0xC1B266: {
        Instruction step(cpu, 0xB7, 0x00001Eu, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:568 STA scratch
    // Macro caller: src/overworld/use_item.asm:238 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B268: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:569 ASL
    // Macro caller: src/overworld/use_item.asm:238 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B26A: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/overworld/use_item.asm:238 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B26B: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:571 ASL
    // Macro caller: src/overworld/use_item.asm:238 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B26D: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:572 ASL
    // Macro caller: src/overworld/use_item.asm:238 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B26E: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:508 INC
    // Macro caller: src/overworld/use_item.asm:239 OPTIMIZED_ADD battle_action::description_text_pointer
    case 0xC1B26F: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // include/macros.asm:509 INC
    // Macro caller: src/overworld/use_item.asm:239 OPTIMIZED_ADD battle_action::description_text_pointer
    case 0xC1B270: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // include/macros.asm:510 INC
    // Macro caller: src/overworld/use_item.asm:239 OPTIMIZED_ADD battle_action::description_text_pointer
    case 0xC1B271: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // include/macros.asm:511 INC
    // Macro caller: src/overworld/use_item.asm:239 OPTIMIZED_ADD battle_action::description_text_pointer
    case 0xC1B272: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/overworld/use_item.asm:240 CLC
    case 0xC1B273: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/use_item.asm:241 ADC @VIRTUAL0A
    case 0xC1B274: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/use_item.asm:242 STA @VIRTUAL0A
    case 0xC1B276: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/use_item.asm:243 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B278: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/use_item.asm:243 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC1B278.
    case 0xC1B27A: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/overworld/use_item.asm:243 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B27B: {
        Instruction step(cpu, 0xB7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1136 TAY
    // Macro caller: src/overworld/use_item.asm:243 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B27D: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/overworld/use_item.asm:243 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B27E: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1138 STA dest
    // Macro caller: src/overworld/use_item.asm:243 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B280: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/overworld/use_item.asm:243 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B282: {
        Instruction step(cpu, 0x84, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/use_item.asm:244 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B284: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/use_item.asm:244 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B286: {
        Instruction step(cpu, 0x85, 0x000026u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/use_item.asm:244 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B288: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/use_item.asm:244 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B28A: {
        Instruction step(cpu, 0x85, 0x000028u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:246 LDA @LOCAL09
    case 0xC1B28C: {
        Instruction step(cpu, 0xA5, 0x00002Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:247 STA @VIRTUAL04
    case 0xC1B28E: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:248 SEP #PROC_FLAGS::ACCUM8
    case 0xC1B290: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/use_item.asm:249 STA @VIRTUAL00
    case 0xC1B292: {
        Instruction step(cpu, 0x85, 0x000000u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:250 REP #PROC_FLAGS::ACCUM8
    case 0xC1B294: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/use_item.asm:251 LDA @LOCAL07
    case 0xC1B296: {
        Instruction step(cpu, 0xA5, 0x000024u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:252 STA @VIRTUAL02
    case 0xC1B298: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:253 BEQ @UNKNOWN20
    case 0xC1B29A: {
        Instruction step(cpu, 0xF0, 0x000031u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/use_item.asm:254 LDX @VIRTUAL04
    case 0xC1B29C: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/use_item.asm:255 LDY #item::effect
    case 0xC1B29E: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00001Du : 0x00001Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/use_item.asm:255 LDY #item::effect
    // Overlapping static entry reached from 0xC1B29E.
    case 0xC1B2A0: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_item.asm:256 LDA [@LOCAL05],Y
    case 0xC1B2A1: {
        Instruction step(cpu, 0xB7, 0x00001Eu, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:257 JSR DETERMINE_TARGETTING
    case 0xC1B2A3: {
        Instruction step(cpu, 0x20, 0x00ADB4u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/use_item.asm:258 SEP #PROC_FLAGS::ACCUM8
    case 0xC1B2A6: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/use_item.asm:259 STA @VIRTUAL00
    case 0xC1B2A8: {
        Instruction step(cpu, 0x85, 0x000000u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:260 REP #PROC_FLAGS::ACCUM8
    case 0xC1B2AA: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/use_item.asm:261 LDA @VIRTUAL00
    case 0xC1B2AC: {
        Instruction step(cpu, 0xA5, 0x000000u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:262 AND #$00FF
    case 0xC1B2AE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:262 AND #$00FF
    // Overlapping static entry reached from 0xC1B2AE.
    case 0xC1B2B0: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_item.asm:263 BNE @UNKNOWN19
    case 0xC1B2B1: {
        Instruction step(cpu, 0xD0, 0x000006u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/use_item.asm:264 LDA #0
    case 0xC1B2B3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:264 LDA #0
    // Overlapping static entry reached from 0xC1B2B3.
    case 0xC1B2B5: {
        Instruction step(cpu, 0x00, 0x00004Cu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_item.asm:265 JMP @UNKNOWN43
    case 0xC1B2B6: {
        Instruction step(cpu, 0x4C, 0x00B5B4u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/use_item.asm:267 LDY #item::flags
    case 0xC1B2B9: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00001Cu : 0x00001Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/use_item.asm:267 LDY #item::flags
    // Overlapping static entry reached from 0xC1B2B9.
    case 0xC1B2BB: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_item.asm:268 LDA [@LOCAL05],Y
    case 0xC1B2BC: {
        Instruction step(cpu, 0xB7, 0x00001Eu, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:269 AND #$00FF
    case 0xC1B2BE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:269 AND #$00FF
    // Overlapping static entry reached from 0xC1B2BE.
    case 0xC1B2C0: {
        Instruction step(cpu, 0x00, 0x000029u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_item.asm:270 AND #ITEM_FLAGS::CONSUMED_ON_USE
    case 0xC1B2C1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000080u : 0x000080u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:270 AND #ITEM_FLAGS::CONSUMED_ON_USE
    // Overlapping static entry reached from 0xC1B2C1.
    case 0xC1B2C3: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_item.asm:271 BEQ @UNKNOWN20
    case 0xC1B2C4: {
        Instruction step(cpu, 0xF0, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/use_item.asm:272 LDX @LOCAL0A
    case 0xC1B2C6: {
        Instruction step(cpu, 0xA6, 0x00002Cu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/use_item.asm:273 LDA @VIRTUAL04
    case 0xC1B2C8: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:274 JSR REMOVE_ITEM_FROM_INVENTORY
    case 0xC1B2CA: {
        Instruction step(cpu, 0x20, 0x008C27u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/use_item.asm:276 LDA #WINDOW::INVENTORY_MENU
    case 0xC1B2CD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:276 LDA #WINDOW::INVENTORY_MENU
    // Overlapping static entry reached from 0xC1B2CD.
    case 0xC1B2CF: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_item.asm:277 JSR CLOSE_WINDOW
    case 0xC1B2D0: {
        Instruction step(cpu, 0x22, 0xC3E521u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/use_item.asm:278 LDA #WINDOW::INVENTORY
    case 0xC1B2D4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:278 LDA #WINDOW::INVENTORY
    // Overlapping static entry reached from 0xC1B2D4.
    case 0xC1B2D6: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_item.asm:279 JSR CLOSE_WINDOW
    case 0xC1B2D7: {
        Instruction step(cpu, 0x22, 0xC3E521u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/use_item.asm:280 LDX #.SIZEOF(char_struct::name)
    case 0xC1B2DB: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000005u : 0x000005u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/use_item.asm:280 LDX #.SIZEOF(char_struct::name)
    // Overlapping static entry reached from 0xC1B2DB.
    case 0xC1B2DD: {
        Instruction step(cpu, 0x00, 0x0000A5u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_item.asm:281 LDA @VIRTUAL04
    case 0xC1B2DE: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:282 DEC
    case 0xC1B2E0: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/overworld/use_item.asm:283 LDY #.SIZEOF(char_struct)
    case 0xC1B2E1: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Fu : 0x00005Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/use_item.asm:283 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1B2E1.
    case 0xC1B2E3: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_item.asm:284 JSL MULT168
    case 0xC1B2E4: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/use_item.asm:285 CLC
    case 0xC1B2E8: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/use_item.asm:286 ADC #.LOWORD(PARTY_CHARACTERS)
    case 0xC1B2E9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000CEu : 0x0099CEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/use_item.asm:286 ADC #.LOWORD(PARTY_CHARACTERS)
    // Overlapping static entry reached from 0xC1B2E9.
    case 0xC1B2EB: {
        Instruction step(cpu, 0x99, 0x004A20u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:287 JSR UNKNOWN_C1AC4A
    case 0xC1B2EC: {
        Instruction step(cpu, 0x20, 0x00AC4Au, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/use_item.asm:287 JSR UNKNOWN_C1AC4A
    // Overlapping static entry reached from 0xC1B2EB.
    case 0xC1B2EE: {
        Instruction step(cpu, 0xAC, 0x0020E2u, 3u, AddressMode::Absolute);
        step.load_y();
        return step.finish();
    }
    // src/overworld/use_item.asm:288 SEP #PROC_FLAGS::ACCUM8
    case 0xC1B2EF: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/use_item.asm:289 LDA @VIRTUAL01
    case 0xC1B2F1: {
        Instruction step(cpu, 0xA5, 0x000001u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:290 JSR UNKNOWN_C1ACF8
    case 0xC1B2F3: {
        Instruction step(cpu, 0x20, 0x00ACF8u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:735 LDA arg
    // Macro caller: src/overworld/use_item.asm:292 CREATE_WINDOW_NEAR #WINDOW::TEXT_STANDARD
    case 0xC1B2F6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:735 LDA arg
    // Macro caller: src/overworld/use_item.asm:292 CREATE_WINDOW_NEAR #WINDOW::TEXT_STANDARD
    // Overlapping static entry reached from 0xC1B2F6.
    case 0xC1B2F8: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/overworld/use_item.asm:292 CREATE_WINDOW_NEAR #WINDOW::TEXT_STANDARD
    case 0xC1B2F9: {
        Instruction step(cpu, 0x20, 0x0004EEu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:865 LDA src
    // Macro caller: src/overworld/use_item.asm:297 MOVE_INT1632 @VIRTUAL04, @VIRTUAL06
    case 0xC1B2FC: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/overworld/use_item.asm:297 MOVE_INT1632 @VIRTUAL04, @VIRTUAL06
    case 0xC1B2FE: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/overworld/use_item.asm:297 MOVE_INT1632 @VIRTUAL04, @VIRTUAL06
    case 0xC1B300: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/use_item.asm:298 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1B302: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/use_item.asm:298 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1B304: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/use_item.asm:298 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1B306: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/use_item.asm:298 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1B308: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:300 JSR SET_WORKING_MEMORY
    case 0xC1B30A: {
        Instruction step(cpu, 0x20, 0x00045Du, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:865 LDA src
    // Macro caller: src/overworld/use_item.asm:305 MOVE_INT1632 @LOCAL0A, @VIRTUAL06
    case 0xC1B30D: {
        Instruction step(cpu, 0xA5, 0x00002Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/overworld/use_item.asm:305 MOVE_INT1632 @LOCAL0A, @VIRTUAL06
    case 0xC1B30F: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/overworld/use_item.asm:305 MOVE_INT1632 @LOCAL0A, @VIRTUAL06
    case 0xC1B311: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/use_item.asm:306 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1B313: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/use_item.asm:306 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1B315: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/use_item.asm:306 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1B317: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/use_item.asm:306 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1B319: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:308 JSR SET_ARGUMENT_MEMORY
    case 0xC1B31B: {
        Instruction step(cpu, 0x20, 0x000489u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/use_item.asm:309 LDA @VIRTUAL00
    case 0xC1B31E: {
        Instruction step(cpu, 0xA5, 0x000000u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:310 AND #$00FF
    case 0xC1B320: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:310 AND #$00FF
    // Overlapping static entry reached from 0xC1B320.
    case 0xC1B322: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_item.asm:311 TAY
    case 0xC1B323: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/overworld/use_item.asm:312 CPY #>-1
    case 0xC1B324: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/overworld/use_item.asm:312 CPY #>-1
    // Overlapping static entry reached from 0xC1B324.
    case 0xC1B326: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_item.asm:313 BEQ @UNKNOWN21
    case 0xC1B327: {
        Instruction step(cpu, 0xF0, 0x000013u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/use_item.asm:314 LDX #.SIZEOF(char_struct::name)
    case 0xC1B329: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000005u : 0x000005u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/use_item.asm:314 LDX #.SIZEOF(char_struct::name)
    // Overlapping static entry reached from 0xC1B329.
    case 0xC1B32B: {
        Instruction step(cpu, 0x00, 0x000098u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_item.asm:315 TYA
    case 0xC1B32C: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:316 DEC
    case 0xC1B32D: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/overworld/use_item.asm:317 LDY #.SIZEOF(char_struct)
    case 0xC1B32E: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Fu : 0x00005Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/use_item.asm:317 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1B32E.
    case 0xC1B330: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_item.asm:318 JSL MULT168
    case 0xC1B331: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/use_item.asm:320 CLC
    case 0xC1B335: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/use_item.asm:321 ADC #.LOWORD(PARTY_CHARACTERS)
    case 0xC1B336: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000CEu : 0x0099CEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/use_item.asm:321 ADC #.LOWORD(PARTY_CHARACTERS)
    // Overlapping static entry reached from 0xC1B336.
    case 0xC1B338: {
        Instruction step(cpu, 0x99, 0x00A120u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:322 JSR UNKNOWN_C1ACA1
    case 0xC1B339: {
        Instruction step(cpu, 0x20, 0x00ACA1u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/use_item.asm:322 JSR UNKNOWN_C1ACA1
    // Overlapping static entry reached from 0xC1B338.
    case 0xC1B33B: {
        Instruction step(cpu, 0xAC, 0x0000A9u, 3u, AddressMode::Absolute);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/use_item.asm:324 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC1B33C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/use_item.asm:324 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1B33C.
    case 0xC1B33E: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/overworld/use_item.asm:324 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC1B33F: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/use_item.asm:324 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC1B341: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/use_item.asm:324 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1B341.
    case 0xC1B343: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/overworld/use_item.asm:324 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC1B344: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/use_item.asm:325 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC1B346: {
        Instruction step(cpu, 0xA5, 0x000026u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/use_item.asm:325 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC1B348: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/use_item.asm:325 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC1B34A: {
        Instruction step(cpu, 0xA5, 0x000028u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/use_item.asm:325 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC1B34C: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:326 CMP @VIRTUAL0A+2
    case 0xC1B34E: {
        Instruction step(cpu, 0xC5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:327 BNE @UNKNOWN22
    case 0xC1B350: {
        Instruction step(cpu, 0xD0, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/use_item.asm:328 LDA @VIRTUAL06
    case 0xC1B352: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:329 CMP @VIRTUAL0A
    case 0xC1B354: {
        Instruction step(cpu, 0xC5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:331 BNE @UNKNOWN23
    case 0xC1B356: {
        Instruction step(cpu, 0xD0, 0x000012u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_item.asm:332 LOADPTR MSG_SYS_GOODS_USE_NG, @VIRTUAL06
    case 0xC1B358: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000B6u : 0x00C6B6u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_item.asm:332 LOADPTR MSG_SYS_GOODS_USE_NG, @VIRTUAL06
    // Overlapping static entry reached from 0xC1B358.
    case 0xC1B35A: {
        Instruction step(cpu, 0xC6, 0x000085u, 2u, AddressMode::DirectPage);
        step.decrement();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/use_item.asm:332 LOADPTR MSG_SYS_GOODS_USE_NG, @VIRTUAL06
    case 0xC1B35B: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/use_item.asm:332 LOADPTR MSG_SYS_GOODS_USE_NG, @VIRTUAL06
    // Overlapping static entry reached from 0xC1B35A.
    case 0xC1B35C: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:332 LOADPTR MSG_SYS_GOODS_USE_NG, @VIRTUAL06
    case 0xC1B35D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:332 LOADPTR MSG_SYS_GOODS_USE_NG, @VIRTUAL06
    // Overlapping static entry reached from 0xC1B35C.
    case 0xC1B35E: {
        Instruction step(cpu, 0xC7, 0x000000u, 2u, AddressMode::DirectPageIndirectLong);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:332 LOADPTR MSG_SYS_GOODS_USE_NG, @VIRTUAL06
    // Overlapping static entry reached from 0xC1B35D.
    case 0xC1B35F: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/use_item.asm:332 LOADPTR MSG_SYS_GOODS_USE_NG, @VIRTUAL06
    case 0xC1B360: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/use_item.asm:333 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B362: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/use_item.asm:333 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B364: {
        Instruction step(cpu, 0x85, 0x000026u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/use_item.asm:333 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B366: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/use_item.asm:333 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B368: {
        Instruction step(cpu, 0x85, 0x000028u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:335 LDA @VIRTUAL02
    case 0xC1B36A: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/use_item.asm:336 BEQL @UNKNOWN41
    case 0xC1B36C: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/use_item.asm:336 BEQL @UNKNOWN41
    case 0xC1B36E: {
        Instruction step(cpu, 0x4C, 0x00B596u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_item.asm:337 LOADPTR BATTLE_ACTION_TABLE, @LOCAL03
    case 0xC1B371: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000068u : 0x007B68u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_item.asm:337 LOADPTR BATTLE_ACTION_TABLE, @LOCAL03
    // Overlapping static entry reached from 0xC1B371.
    case 0xC1B373: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/use_item.asm:337 LOADPTR BATTLE_ACTION_TABLE, @LOCAL03
    case 0xC1B374: {
        Instruction step(cpu, 0x85, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:337 LOADPTR BATTLE_ACTION_TABLE, @LOCAL03
    case 0xC1B376: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D5u : 0x0000D5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:337 LOADPTR BATTLE_ACTION_TABLE, @LOCAL03
    // Overlapping static entry reached from 0xC1B376.
    case 0xC1B378: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/use_item.asm:337 LOADPTR BATTLE_ACTION_TABLE, @LOCAL03
    case 0xC1B379: {
        Instruction step(cpu, 0x85, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/use_item.asm:338 MOVE_INT @LOCAL05, @VIRTUAL0A
    case 0xC1B37B: {
        Instruction step(cpu, 0xA5, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/use_item.asm:338 MOVE_INT @LOCAL05, @VIRTUAL0A
    case 0xC1B37D: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/use_item.asm:338 MOVE_INT @LOCAL05, @VIRTUAL0A
    case 0xC1B37F: {
        Instruction step(cpu, 0xA5, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/use_item.asm:338 MOVE_INT @LOCAL05, @VIRTUAL0A
    case 0xC1B381: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:339 LDA #item::effect
    case 0xC1B383: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00001Du : 0x00001Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:339 LDA #item::effect
    // Overlapping static entry reached from 0xC1B383.
    case 0xC1B385: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_item.asm:340 CLC
    case 0xC1B386: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/use_item.asm:341 ADC @VIRTUAL0A
    case 0xC1B387: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/use_item.asm:342 STA @VIRTUAL0A
    case 0xC1B389: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:343 STA @LOCAL02
    case 0xC1B38B: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:344 LDA @VIRTUAL0A+2
    case 0xC1B38D: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:345 STA @LOCAL02+2
    case 0xC1B38F: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/use_item.asm:346 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC1B391: {
        Instruction step(cpu, 0xA5, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/use_item.asm:346 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC1B393: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/use_item.asm:346 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC1B395: {
        Instruction step(cpu, 0xA5, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/use_item.asm:346 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC1B397: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:347 LDA [@VIRTUAL0A]
    case 0xC1B399: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:568 STA scratch
    // Macro caller: src/overworld/use_item.asm:348 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B39B: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:569 ASL
    // Macro caller: src/overworld/use_item.asm:348 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B39D: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/overworld/use_item.asm:348 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B39E: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:571 ASL
    // Macro caller: src/overworld/use_item.asm:348 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B3A0: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:572 ASL
    // Macro caller: src/overworld/use_item.asm:348 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B3A1: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/use_item.asm:349 CLC
    case 0xC1B3A2: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/use_item.asm:350 ADC #battle_action::battle_function_pointer
    case 0xC1B3A3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/use_item.asm:350 ADC #battle_action::battle_function_pointer
    // Overlapping static entry reached from 0xC1B3A3.
    case 0xC1B3A5: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_item.asm:351 CLC
    case 0xC1B3A6: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/use_item.asm:352 ADC @VIRTUAL06
    case 0xC1B3A7: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/use_item.asm:353 STA @VIRTUAL06
    case 0xC1B3A9: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/use_item.asm:354 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC1B3AB: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/use_item.asm:354 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    // Overlapping static entry reached from 0xC1B3AB.
    case 0xC1B3AD: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/overworld/use_item.asm:354 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC1B3AE: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1136 TAY
    // Macro caller: src/overworld/use_item.asm:354 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC1B3B0: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/overworld/use_item.asm:354 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC1B3B1: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1138 STA dest
    // Macro caller: src/overworld/use_item.asm:354 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC1B3B3: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/overworld/use_item.asm:354 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC1B3B5: {
        Instruction step(cpu, 0x84, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/use_item.asm:355 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC1B3B7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/use_item.asm:355 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1B3B7.
    case 0xC1B3B9: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/overworld/use_item.asm:355 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC1B3BA: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/use_item.asm:355 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC1B3BC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/use_item.asm:355 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1B3BC.
    case 0xC1B3BE: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/overworld/use_item.asm:355 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC1B3BF: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:745 LDA src + 2
    // Macro caller: src/overworld/use_item.asm:356 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC1B3C1: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:746 CMP dest + 2
    // Macro caller: src/overworld/use_item.asm:356 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC1B3C3: {
        Instruction step(cpu, 0xC5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:747 BNE :+
    // Macro caller: src/overworld/use_item.asm:356 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC1B3C5: {
        Instruction step(cpu, 0xD0, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:748 LDA src
    // Macro caller: src/overworld/use_item.asm:356 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC1B3C7: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:749 CMP dest
    // Macro caller: src/overworld/use_item.asm:356 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC1B3C9: {
        Instruction step(cpu, 0xC5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/use_item.asm:357 BEQL @UNKNOWN41
    case 0xC1B3CB: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/use_item.asm:357 BEQL @UNKNOWN41
    case 0xC1B3CD: {
        Instruction step(cpu, 0x4C, 0x00B596u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/use_item.asm:358 LDA #.LOWORD(BATTLERS_TABLE)
    case 0xC1B3D0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000ACu : 0x009FACu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:358 LDA #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC1B3D0.
    case 0xC1B3D2: {
        Instruction step(cpu, 0x9F, 0xA9708Du, 4u, AddressMode::LongIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:359 STA CURRENT_ATTACKER
    case 0xC1B3D3: {
        Instruction step(cpu, 0x8D, 0x00A970u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:360 TAX
    case 0xC1B3D6: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/use_item.asm:361 LDA @LOCAL09
    case 0xC1B3D7: {
        Instruction step(cpu, 0xA5, 0x00002Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:362 STA @VIRTUAL04
    case 0xC1B3D9: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:363 JSL BATTLE_INIT_PLAYER_STATS
    case 0xC1B3DB: {
        Instruction step(cpu, 0x22, 0xC2B930u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/use_item.asm:364 SEP #PROC_FLAGS::ACCUM8
    case 0xC1B3DF: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/use_item.asm:365 LDA @VIRTUAL01
    case 0xC1B3E1: {
        Instruction step(cpu, 0xA5, 0x000001u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:366 LDX CURRENT_ATTACKER
    case 0xC1B3E3: {
        Instruction step(cpu, 0xAE, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/overworld/use_item.asm:367 STA __BSS_START__ + battler::current_action_argument,X
    case 0xC1B3E6: {
        Instruction step(cpu, 0x9D, 0x000008u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:368 REP #PROC_FLAGS::ACCUM8
    case 0xC1B3E9: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/use_item.asm:369 LDA @LOCAL0A
    case 0xC1B3EB: {
        Instruction step(cpu, 0xA5, 0x00002Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:370 SEP #PROC_FLAGS::ACCUM8
    case 0xC1B3ED: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/use_item.asm:371 LDX CURRENT_ATTACKER
    case 0xC1B3EF: {
        Instruction step(cpu, 0xAE, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/overworld/use_item.asm:372 STA __BSS_START__ + battler::action_item_slot,X
    case 0xC1B3F2: {
        Instruction step(cpu, 0x9D, 0x000007u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:373 REP #PROC_FLAGS::ACCUM8
    case 0xC1B3F5: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/use_item.asm:374 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC1B3F7: {
        Instruction step(cpu, 0xA5, 0x000026u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/use_item.asm:374 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC1B3F9: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/use_item.asm:374 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC1B3FB: {
        Instruction step(cpu, 0xA5, 0x000028u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/use_item.asm:374 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC1B3FD: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/use_item.asm:375 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1B3FF: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/use_item.asm:375 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1B401: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/use_item.asm:375 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1B403: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/use_item.asm:375 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1B405: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:376 JSL DISPLAY_TEXT
    case 0xC1B407: {
        Instruction step(cpu, 0x22, 0xC186B1u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/use_item.asm:377 SEP #PROC_FLAGS::ACCUM8
    case 0xC1B40B: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/use_item.asm:378 LDA @VIRTUAL01
    case 0xC1B40D: {
        Instruction step(cpu, 0xA5, 0x000001u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:379 JSR UNKNOWN_C1ACF8
    case 0xC1B40F: {
        Instruction step(cpu, 0x20, 0x00ACF8u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/use_item.asm:381 LDX #.LOWORD(BATTLERS_TABLE) + .SIZEOF(battler)
    case 0xC1B412: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x0000FAu : 0x009FFAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/use_item.asm:381 LDX #.LOWORD(BATTLERS_TABLE) + .SIZEOF(battler)
    // Overlapping static entry reached from 0xC1B412.
    case 0xC1B414: {
        Instruction step(cpu, 0x9F, 0xA9728Eu, 4u, AddressMode::LongIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:382 STX CURRENT_TARGET
    case 0xC1B415: {
        Instruction step(cpu, 0x8E, 0x00A972u, 3u, AddressMode::Absolute);
        step.store_x();
        return step.finish();
    }
    // src/overworld/use_item.asm:383 LDA @VIRTUAL00
    case 0xC1B418: {
        Instruction step(cpu, 0xA5, 0x000000u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:384 AND #$00FF
    case 0xC1B41A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:384 AND #$00FF
    // Overlapping static entry reached from 0xC1B41A.
    case 0xC1B41C: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_item.asm:385 TAY
    case 0xC1B41D: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/overworld/use_item.asm:386 CPY #>-1
    case 0xC1B41E: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/overworld/use_item.asm:386 CPY #>-1
    // Overlapping static entry reached from 0xC1B41E.
    case 0xC1B420: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/overworld/use_item.asm:387 BNEL @UNKNOWN36
    case 0xC1B421: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/overworld/use_item.asm:387 BNEL @UNKNOWN36
    case 0xC1B423: {
        Instruction step(cpu, 0x4C, 0x00B504u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/use_item.asm:388 LDY #0
    case 0xC1B426: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/use_item.asm:388 LDY #0
    // Overlapping static entry reached from 0xC1B426.
    case 0xC1B428: {
        Instruction step(cpu, 0x00, 0x000084u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_item.asm:389 STY @LOCAL06
    case 0xC1B429: {
        Instruction step(cpu, 0x84, 0x000022u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/use_item.asm:390 JMP @UNKNOWN33
    case 0xC1B42B: {
        Instruction step(cpu, 0x4C, 0x00B4EAu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/use_item.asm:392 TYA
    case 0xC1B42E: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:393 CLC
    case 0xC1B42F: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/use_item.asm:399 ADC #.LOWORD(GAME_STATE) + game_state::party_members
    case 0xC1B430: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00006Fu : 0x00986Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/use_item.asm:399 ADC #.LOWORD(GAME_STATE) + game_state::party_members
    // Overlapping static entry reached from 0xC1B430.
    case 0xC1B432: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:401 STA @VIRTUAL02
    case 0xC1B433: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:402 LDX #.SIZEOF(char_struct::name)
    case 0xC1B435: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000005u : 0x000005u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/use_item.asm:402 LDX #.SIZEOF(char_struct::name)
    // Overlapping static entry reached from 0xC1B435.
    case 0xC1B437: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_item.asm:403 STX @LOCAL01
    case 0xC1B438: {
        Instruction step(cpu, 0x86, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/use_item.asm:404 LDX @VIRTUAL02
    case 0xC1B43A: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/use_item.asm:405 LDA __BSS_START__,X
    case 0xC1B43C: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:406 AND #$00FF
    case 0xC1B43F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:406 AND #$00FF
    // Overlapping static entry reached from 0xC1B43F.
    case 0xC1B441: {
        Instruction step(cpu, 0x00, 0x00003Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_item.asm:407 DEC
    case 0xC1B442: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/overworld/use_item.asm:408 LDY #.SIZEOF(char_struct)
    case 0xC1B443: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Fu : 0x00005Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/use_item.asm:408 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1B443.
    case 0xC1B445: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_item.asm:409 JSL MULT168
    case 0xC1B446: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/use_item.asm:411 CLC
    case 0xC1B44A: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/use_item.asm:412 ADC #.LOWORD(PARTY_CHARACTERS)
    case 0xC1B44B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000CEu : 0x0099CEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/use_item.asm:412 ADC #.LOWORD(PARTY_CHARACTERS)
    // Overlapping static entry reached from 0xC1B44B.
    case 0xC1B44D: {
        Instruction step(cpu, 0x99, 0x0012A6u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:413 LDX @LOCAL01
    case 0xC1B44E: {
        Instruction step(cpu, 0xA6, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/use_item.asm:414 JSR UNKNOWN_C1ACA1
    case 0xC1B450: {
        Instruction step(cpu, 0x20, 0x00ACA1u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/use_item.asm:415 LDX CURRENT_TARGET
    case 0xC1B453: {
        Instruction step(cpu, 0xAE, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/overworld/use_item.asm:416 STX @LOCAL01
    case 0xC1B456: {
        Instruction step(cpu, 0x86, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/use_item.asm:417 LDX @VIRTUAL02
    case 0xC1B458: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/use_item.asm:418 LDA __BSS_START__,X
    case 0xC1B45A: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:419 AND #$00FF
    case 0xC1B45D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:419 AND #$00FF
    // Overlapping static entry reached from 0xC1B45D.
    case 0xC1B45F: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_item.asm:420 LDX @LOCAL01
    case 0xC1B460: {
        Instruction step(cpu, 0xA6, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/use_item.asm:421 JSL BATTLE_INIT_PLAYER_STATS
    case 0xC1B462: {
        Instruction step(cpu, 0x22, 0xC2B930u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_item.asm:422 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC1B466: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000068u : 0x007B68u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_item.asm:422 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1B466.
    case 0xC1B468: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/use_item.asm:422 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC1B469: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:422 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC1B46B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D5u : 0x0000D5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:422 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1B46B.
    case 0xC1B46D: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/use_item.asm:422 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC1B46E: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:423 LDY #item::effect
    case 0xC1B470: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00001Du : 0x00001Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/use_item.asm:423 LDY #item::effect
    // Overlapping static entry reached from 0xC1B470.
    case 0xC1B472: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_item.asm:424 LDA [@LOCAL05],Y
    case 0xC1B473: {
        Instruction step(cpu, 0xB7, 0x00001Eu, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:568 STA scratch
    // Macro caller: src/overworld/use_item.asm:425 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B475: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:569 ASL
    // Macro caller: src/overworld/use_item.asm:425 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B477: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/overworld/use_item.asm:425 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B478: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:571 ASL
    // Macro caller: src/overworld/use_item.asm:425 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B47A: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:572 ASL
    // Macro caller: src/overworld/use_item.asm:425 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B47B: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/use_item.asm:426 CLC
    case 0xC1B47C: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/use_item.asm:427 ADC #8
    case 0xC1B47D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/use_item.asm:427 ADC #8
    // Overlapping static entry reached from 0xC1B47D.
    case 0xC1B47F: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_item.asm:428 CLC
    case 0xC1B480: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/use_item.asm:429 ADC @VIRTUAL0A
    case 0xC1B481: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/use_item.asm:430 STA @VIRTUAL0A
    case 0xC1B483: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/use_item.asm:431 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B485: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/use_item.asm:431 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC1B485.
    case 0xC1B487: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/overworld/use_item.asm:431 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B488: {
        Instruction step(cpu, 0xB7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1136 TAY
    // Macro caller: src/overworld/use_item.asm:431 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B48A: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/overworld/use_item.asm:431 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B48B: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1138 STA dest
    // Macro caller: src/overworld/use_item.asm:431 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B48D: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/overworld/use_item.asm:431 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B48F: {
        Instruction step(cpu, 0x84, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/use_item.asm:432 PHA
    case 0xC1B491: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/use_item.asm:433 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC1B492: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/use_item.asm:433 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC1B494: {
        Instruction step(cpu, 0x8D, 0x0000BCu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/use_item.asm:433 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC1B497: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/use_item.asm:433 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC1B499: {
        Instruction step(cpu, 0x8D, 0x0000BEu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:434 PLA
    case 0xC1B49C: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:435 JSL UNKNOWN_C09279
    case 0xC1B49D: {
        Instruction step(cpu, 0x22, 0xC09279u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/use_item.asm:436 LDA #0
    case 0xC1B4A1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:436 LDA #0
    // Overlapping static entry reached from 0xC1B4A1.
    case 0xC1B4A3: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_item.asm:437 STA @LOCAL0A
    case 0xC1B4A4: {
        Instruction step(cpu, 0x85, 0x00002Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:438 BRA @UNKNOWN30
    case 0xC1B4A6: {
        Instruction step(cpu, 0x80, 0x00002Du, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/use_item.asm:440 LDA @LOCAL0A
    case 0xC1B4A8: {
        Instruction step(cpu, 0xA5, 0x00002Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:441 STA @VIRTUAL02
    case 0xC1B4AA: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:442 LDY @LOCAL06
    case 0xC1B4AC: {
        Instruction step(cpu, 0xA4, 0x000022u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/use_item.asm:443 TYA
    case 0xC1B4AE: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:444 LDY #.SIZEOF(char_struct)
    case 0xC1B4AF: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Fu : 0x00005Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/use_item.asm:444 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1B4AF.
    case 0xC1B4B1: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_item.asm:445 JSL MULT168
    case 0xC1B4B2: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/use_item.asm:446 CLC
    case 0xC1B4B6: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/use_item.asm:447 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::afflictions
    case 0xC1B4B7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000DCu : 0x0099DCu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/use_item.asm:447 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::afflictions
    // Overlapping static entry reached from 0xC1B4B7.
    case 0xC1B4B9: {
        Instruction step(cpu, 0x99, 0x006518u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:448 CLC
    case 0xC1B4BA: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/use_item.asm:449 ADC @VIRTUAL02
    case 0xC1B4BB: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/use_item.asm:449 ADC @VIRTUAL02
    // Overlapping static entry reached from 0xC1B4B9.
    case 0xC1B4BC: {
        Instruction step(cpu, 0x02, 0x000048u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/overworld/use_item.asm:450 PHA
    case 0xC1B4BD: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:451 LDA @LOCAL0A
    case 0xC1B4BE: {
        Instruction step(cpu, 0xA5, 0x00002Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:452 CLC
    case 0xC1B4C0: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/use_item.asm:453 ADC CURRENT_TARGET
    case 0xC1B4C1: {
        Instruction step(cpu, 0x6D, 0x00A972u, 3u, AddressMode::Absolute);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/use_item.asm:454 TAX
    case 0xC1B4C4: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/use_item.asm:455 SEP #PROC_FLAGS::ACCUM8
    case 0xC1B4C5: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/use_item.asm:456 LDA __BSS_START__ + battler::afflictions,X
    case 0xC1B4C7: {
        Instruction step(cpu, 0xBD, 0x00001Du, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:457 PLX
    case 0xC1B4CA: {
        Instruction step(cpu, 0xFA, 0x000000u, 1u, AddressMode::Implied);
        step.pull_x();
        return step.finish();
    }
    // src/overworld/use_item.asm:458 STA __BSS_START__,X
    case 0xC1B4CB: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:459 REP #PROC_FLAGS::ACCUM8
    case 0xC1B4CE: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/use_item.asm:460 LDA @LOCAL0A
    case 0xC1B4D0: {
        Instruction step(cpu, 0xA5, 0x00002Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:461 INC
    case 0xC1B4D2: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/overworld/use_item.asm:462 STA @LOCAL0A
    case 0xC1B4D3: {
        Instruction step(cpu, 0x85, 0x00002Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:464 STA @VIRTUAL02
    case 0xC1B4D5: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:465 LDA #7
    case 0xC1B4D7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000007u : 0x000007u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:465 LDA #7
    // Overlapping static entry reached from 0xC1B4D7.
    case 0xC1B4D9: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_item.asm:466 CLC
    case 0xC1B4DA: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/use_item.asm:467 SBC @VIRTUAL02
    case 0xC1B4DB: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:798 BVS :+
    // Macro caller: src/overworld/use_item.asm:468 BRANCHGTS @UNKNOWN29
    case 0xC1B4DD: {
        Instruction step(cpu, 0x70, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_set();
        return step.finish();
    }
    // include/macros.asm:799 BPL dest
    // Macro caller: src/overworld/use_item.asm:468 BRANCHGTS @UNKNOWN29
    case 0xC1B4DF: {
        Instruction step(cpu, 0x10, 0x0000C7u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:800 BRA :++
    // Macro caller: src/overworld/use_item.asm:468 BRANCHGTS @UNKNOWN29
    case 0xC1B4E1: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:802 BMI dest
    // Macro caller: src/overworld/use_item.asm:468 BRANCHGTS @UNKNOWN29
    case 0xC1B4E3: {
        Instruction step(cpu, 0x30, 0x0000C3u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/overworld/use_item.asm:469 LDY @LOCAL06
    case 0xC1B4E5: {
        Instruction step(cpu, 0xA4, 0x000022u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/use_item.asm:470 INY
    case 0xC1B4E7: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/overworld/use_item.asm:471 STY @LOCAL06
    case 0xC1B4E8: {
        Instruction step(cpu, 0x84, 0x000022u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/use_item.asm:473 STY @VIRTUAL02
    case 0xC1B4EA: {
        Instruction step(cpu, 0x84, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/use_item.asm:474 LDA GAME_STATE+game_state::player_controlled_party_count
    case 0xC1B4EC: {
        Instruction step(cpu, 0xAD, 0x0098A4u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:475 AND #$00FF
    case 0xC1B4EF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:475 AND #$00FF
    // Overlapping static entry reached from 0xC1B4EF.
    case 0xC1B4F1: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_item.asm:476 CLC
    case 0xC1B4F2: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/use_item.asm:477 SBC @VIRTUAL02
    case 0xC1B4F3: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:816 BVS :+
    // Macro caller: src/overworld/use_item.asm:478 JUMPGTS @UNKNOWN28
    case 0xC1B4F5: {
        Instruction step(cpu, 0x70, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_set();
        return step.finish();
    }
    // include/macros.asm:817 BMI :++
    // Macro caller: src/overworld/use_item.asm:478 JUMPGTS @UNKNOWN28
    case 0xC1B4F7: {
        Instruction step(cpu, 0x30, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // include/macros.asm:818 JMP dest
    // Macro caller: src/overworld/use_item.asm:478 JUMPGTS @UNKNOWN28
    case 0xC1B4F9: {
        Instruction step(cpu, 0x4C, 0x00B42Eu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:820 BPL :+
    // Macro caller: src/overworld/use_item.asm:478 JUMPGTS @UNKNOWN28
    case 0xC1B4FC: {
        Instruction step(cpu, 0x10, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:821 JMP dest
    // Macro caller: src/overworld/use_item.asm:478 JUMPGTS @UNKNOWN28
    case 0xC1B4FE: {
        Instruction step(cpu, 0x4C, 0x00B42Eu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/use_item.asm:479 JMP @UNKNOWN40
    case 0xC1B501: {
        Instruction step(cpu, 0x4C, 0x00B590u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/use_item.asm:481 TYA
    case 0xC1B504: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:482 JSL BATTLE_INIT_PLAYER_STATS
    case 0xC1B505: {
        Instruction step(cpu, 0x22, 0xC2B930u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/use_item.asm:483 MOVE_INT @LOCAL02, @VIRTUAL0A
    case 0xC1B509: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/use_item.asm:483 MOVE_INT @LOCAL02, @VIRTUAL0A
    case 0xC1B50B: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/use_item.asm:483 MOVE_INT @LOCAL02, @VIRTUAL0A
    case 0xC1B50D: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/use_item.asm:483 MOVE_INT @LOCAL02, @VIRTUAL0A
    case 0xC1B50F: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:484 LDA [@VIRTUAL0A]
    case 0xC1B511: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:568 STA scratch
    // Macro caller: src/overworld/use_item.asm:485 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B513: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:569 ASL
    // Macro caller: src/overworld/use_item.asm:485 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B515: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/overworld/use_item.asm:485 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B516: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:571 ASL
    // Macro caller: src/overworld/use_item.asm:485 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B518: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:572 ASL
    // Macro caller: src/overworld/use_item.asm:485 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B519: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/use_item.asm:486 CLC
    case 0xC1B51A: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/use_item.asm:487 ADC #battle_action::battle_function_pointer
    case 0xC1B51B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/use_item.asm:487 ADC #battle_action::battle_function_pointer
    // Overlapping static entry reached from 0xC1B51B.
    case 0xC1B51D: {
        Instruction step(cpu, 0x00, 0x000048u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_item.asm:488 PHA
    case 0xC1B51E: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/use_item.asm:489 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC1B51F: {
        Instruction step(cpu, 0xA5, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/use_item.asm:489 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC1B521: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/use_item.asm:489 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC1B523: {
        Instruction step(cpu, 0xA5, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/use_item.asm:489 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC1B525: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:490 PLA
    case 0xC1B527: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:491 CLC
    case 0xC1B528: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/use_item.asm:492 ADC @VIRTUAL0A
    case 0xC1B529: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/use_item.asm:493 STA @VIRTUAL0A
    case 0xC1B52B: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/use_item.asm:494 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B52D: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/use_item.asm:494 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC1B52D.
    case 0xC1B52F: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/overworld/use_item.asm:494 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B530: {
        Instruction step(cpu, 0xB7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1136 TAY
    // Macro caller: src/overworld/use_item.asm:494 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B532: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/overworld/use_item.asm:494 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B533: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1138 STA dest
    // Macro caller: src/overworld/use_item.asm:494 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B535: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/overworld/use_item.asm:494 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B537: {
        Instruction step(cpu, 0x84, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/use_item.asm:495 PHA
    case 0xC1B539: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/use_item.asm:496 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC1B53A: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/use_item.asm:496 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC1B53C: {
        Instruction step(cpu, 0x8D, 0x0000BCu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/use_item.asm:496 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC1B53F: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/use_item.asm:496 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC1B541: {
        Instruction step(cpu, 0x8D, 0x0000BEu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:497 PLA
    case 0xC1B544: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:498 JSL UNKNOWN_C09279
    case 0xC1B545: {
        Instruction step(cpu, 0x22, 0xC09279u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/use_item.asm:499 LDA #0
    case 0xC1B549: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:499 LDA #0
    // Overlapping static entry reached from 0xC1B549.
    case 0xC1B54B: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_item.asm:500 STA @LOCAL0A
    case 0xC1B54C: {
        Instruction step(cpu, 0x85, 0x00002Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:501 BRA @UNKNOWN38
    case 0xC1B54E: {
        Instruction step(cpu, 0x80, 0x000030u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/use_item.asm:503 LDA @LOCAL0A
    case 0xC1B550: {
        Instruction step(cpu, 0xA5, 0x00002Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:504 STA @VIRTUAL02
    case 0xC1B552: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:505 LDA @VIRTUAL00
    case 0xC1B554: {
        Instruction step(cpu, 0xA5, 0x000000u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:506 AND #$00FF
    case 0xC1B556: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:506 AND #$00FF
    // Overlapping static entry reached from 0xC1B556.
    case 0xC1B558: {
        Instruction step(cpu, 0x00, 0x00003Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_item.asm:507 DEC
    case 0xC1B559: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/overworld/use_item.asm:508 LDY #.SIZEOF(char_struct)
    case 0xC1B55A: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Fu : 0x00005Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/use_item.asm:508 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1B55A.
    case 0xC1B55C: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_item.asm:509 JSL MULT168
    case 0xC1B55D: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/use_item.asm:510 CLC
    case 0xC1B561: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/use_item.asm:511 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::afflictions
    case 0xC1B562: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000DCu : 0x0099DCu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/use_item.asm:511 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::afflictions
    // Overlapping static entry reached from 0xC1B562.
    case 0xC1B564: {
        Instruction step(cpu, 0x99, 0x006518u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:512 CLC
    case 0xC1B565: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/use_item.asm:513 ADC @VIRTUAL02
    case 0xC1B566: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/use_item.asm:513 ADC @VIRTUAL02
    // Overlapping static entry reached from 0xC1B564.
    case 0xC1B567: {
        Instruction step(cpu, 0x02, 0x000048u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/overworld/use_item.asm:514 PHA
    case 0xC1B568: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:515 LDA @LOCAL0A
    case 0xC1B569: {
        Instruction step(cpu, 0xA5, 0x00002Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:516 CLC
    case 0xC1B56B: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/use_item.asm:517 ADC CURRENT_TARGET
    case 0xC1B56C: {
        Instruction step(cpu, 0x6D, 0x00A972u, 3u, AddressMode::Absolute);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/use_item.asm:518 TAX
    case 0xC1B56F: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/use_item.asm:519 SEP #PROC_FLAGS::ACCUM8
    case 0xC1B570: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/use_item.asm:520 LDA __BSS_START__+battler::afflictions,X
    case 0xC1B572: {
        Instruction step(cpu, 0xBD, 0x00001Du, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:521 PLX
    case 0xC1B575: {
        Instruction step(cpu, 0xFA, 0x000000u, 1u, AddressMode::Implied);
        step.pull_x();
        return step.finish();
    }
    // src/overworld/use_item.asm:522 STA __BSS_START__,X
    case 0xC1B576: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:523 REP #PROC_FLAGS::ACCUM8
    case 0xC1B579: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/use_item.asm:524 LDA @LOCAL0A
    case 0xC1B57B: {
        Instruction step(cpu, 0xA5, 0x00002Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:525 INC
    case 0xC1B57D: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/overworld/use_item.asm:526 STA @LOCAL0A
    case 0xC1B57E: {
        Instruction step(cpu, 0x85, 0x00002Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:528 STA @VIRTUAL02
    case 0xC1B580: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:529 LDA #7
    case 0xC1B582: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000007u : 0x000007u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:529 LDA #7
    // Overlapping static entry reached from 0xC1B582.
    case 0xC1B584: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_item.asm:530 CLC
    case 0xC1B585: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/use_item.asm:531 SBC @VIRTUAL02
    case 0xC1B586: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:798 BVS :+
    // Macro caller: src/overworld/use_item.asm:532 BRANCHGTS @UNKNOWN37
    case 0xC1B588: {
        Instruction step(cpu, 0x70, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_set();
        return step.finish();
    }
    // include/macros.asm:799 BPL dest
    // Macro caller: src/overworld/use_item.asm:532 BRANCHGTS @UNKNOWN37
    case 0xC1B58A: {
        Instruction step(cpu, 0x10, 0x0000C4u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:800 BRA :++
    // Macro caller: src/overworld/use_item.asm:532 BRANCHGTS @UNKNOWN37
    case 0xC1B58C: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:802 BMI dest
    // Macro caller: src/overworld/use_item.asm:532 BRANCHGTS @UNKNOWN37
    case 0xC1B58E: {
        Instruction step(cpu, 0x30, 0x0000C0u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/overworld/use_item.asm:534 JSL UNKNOWN_C3EE4D
    case 0xC1B590: {
        Instruction step(cpu, 0x22, 0xC3EE4Du, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/use_item.asm:535 BRA @UNKNOWN42
    case 0xC1B594: {
        Instruction step(cpu, 0x80, 0x000014u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/use_item.asm:537 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC1B596: {
        Instruction step(cpu, 0xA5, 0x000026u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/use_item.asm:537 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC1B598: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/use_item.asm:537 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC1B59A: {
        Instruction step(cpu, 0xA5, 0x000028u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/use_item.asm:537 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC1B59C: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/use_item.asm:538 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1B59E: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/use_item.asm:538 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1B5A0: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/use_item.asm:538 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1B5A2: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/use_item.asm:538 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1B5A4: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:539 JSL DISPLAY_TEXT
    case 0xC1B5A6: {
        Instruction step(cpu, 0x22, 0xC186B1u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/use_item.asm:541 LDA #WINDOW::TEXT_STANDARD
    case 0xC1B5AA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:541 LDA #WINDOW::TEXT_STANDARD
    // Overlapping static entry reached from 0xC1B5AA.
    case 0xC1B5AC: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_item.asm:542 JSR CLOSE_WINDOW
    case 0xC1B5AD: {
        Instruction step(cpu, 0x22, 0xC3E521u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/use_item.asm:543 LDA #TRUE
    case 0xC1B5B1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_item.asm:543 LDA #TRUE
    // Overlapping static entry reached from 0xC1B5B1.
    case 0xC1B5B3: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/use_item.asm:545 END_C_FUNCTION
    case 0xC1B5B4: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/overworld/use_item.asm:545 END_C_FUNCTION
    case 0xC1B5B5: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
