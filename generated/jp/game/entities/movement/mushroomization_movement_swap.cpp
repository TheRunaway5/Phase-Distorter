// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/overworld/mushroomization_movement_swap.asm
bool resume_overworld_mushroomization_movement_swap(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/mushroomization_movement_swap.asm:3 BEGIN_C_FUNCTION
    case 0xC02E5E: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/mushroomization_movement_swap.asm:6 END_STACK_VARS
    case 0xC02E60: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/mushroomization_movement_swap.asm:6 END_STACK_VARS
    case 0xC02E61: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/mushroomization_movement_swap.asm:6 END_STACK_VARS
    case 0xC02E62: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000F0u : 0x00FFF0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/mushroomization_movement_swap.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC02E62.
    case 0xC02E64: {
        Instruction step(cpu, 0xFF, 0x22AD5Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/mushroomization_movement_swap.asm:6 END_STACK_VARS
    case 0xC02E65: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:7 LDA MUSHROOMIZATION_TIMER
    case 0xC02E66: {
        Instruction step(cpu, 0xAD, 0x006122u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:7 LDA MUSHROOMIZATION_TIMER
    // Overlapping static entry reached from 0xC02E64.
    case 0xC02E68: {
        Instruction step(cpu, 0x61, 0x0000D0u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:8 BNE @STILL_HAS_TIME_LEFT
    case 0xC02E69: {
        Instruction step(cpu, 0xD0, 0x000016u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:8 BNE @STILL_HAS_TIME_LEFT
    // Overlapping static entry reached from 0xC02E68.
    case 0xC02E6A: {
        Instruction step(cpu, 0x16, 0x0000A9u, 2u, AddressMode::DirectPageIndexedX);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:9 LDA #TIME_BETWEEN_DIRECTION_SWAPS
    case 0xC02E6B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000008u : 0x000708u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:9 LDA #TIME_BETWEEN_DIRECTION_SWAPS
    // Overlapping static entry reached from 0xC02E6A.
    case 0xC02E6C: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:9 LDA #TIME_BETWEEN_DIRECTION_SWAPS
    // Overlapping static entry reached from 0xC02E6B.
    case 0xC02E6D: {
        Instruction step(cpu, 0x07, 0x00008Du, 2u, AddressMode::DirectPageIndirectLong);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:10 STA MUSHROOMIZATION_TIMER
    case 0xC02E6E: {
        Instruction step(cpu, 0x8D, 0x006122u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:10 STA MUSHROOMIZATION_TIMER
    // Overlapping static entry reached from 0xC02E6D.
    case 0xC02E6F: {
        Instruction step(cpu, 0x22, 0x24A261u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:11 LDX #.LOWORD(MUSHROOMIZATION_MODIFIER)
    case 0xC02E71: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000024u : 0x006124u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:11 LDX #.LOWORD(MUSHROOMIZATION_MODIFIER)
    // Overlapping static entry reached from 0xC02E71.
    case 0xC02E73: {
        Instruction step(cpu, 0x61, 0x0000BDu, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:12 LDA __BSS_START__,X
    case 0xC02E74: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:12 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC02E73.
    case 0xC02E75: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:13 INC
    case 0xC02E77: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:14 STA __BSS_START__,X
    case 0xC02E78: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:15 AND #$0003
    case 0xC02E7B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:15 AND #$0003
    // Overlapping static entry reached from 0xC02E7B.
    case 0xC02E7D: {
        Instruction step(cpu, 0x00, 0x00009Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:16 STA __BSS_START__,X
    case 0xC02E7E: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:18 DEC MUSHROOMIZATION_TIMER
    case 0xC02E81: {
        Instruction step(cpu, 0xCE, 0x006122u, 3u, AddressMode::Absolute);
        step.decrement();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:19 LDA MUSHROOMIZATION_MODIFIER
    case 0xC02E84: {
        Instruction step(cpu, 0xAD, 0x006124u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:20 STA @LOCAL00
    case 0xC02E87: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:21 BEQ @RETURN
    case 0xC02E89: {
        Instruction step(cpu, 0xF0, 0x000071u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:22 LDA DEMO_FRAMES_LEFT
    case 0xC02E8B: {
        Instruction step(cpu, 0xAD, 0x000081u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:23 BNE @RETURN
    case 0xC02E8E: {
        Instruction step(cpu, 0xD0, 0x00006Cu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:24 LDA PAD_PRESS
    case 0xC02E90: {
        Instruction step(cpu, 0xAD, 0x00006Du, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:25 XBA
    case 0xC02E93: {
        Instruction step(cpu, 0xEB, 0x000000u, 1u, AddressMode::Implied);
        step.exchange_accumulator_bytes();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:26 AND #$00FF
    case 0xC02E94: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:26 AND #$00FF
    // Overlapping static entry reached from 0xC02E94.
    case 0xC02E96: {
        Instruction step(cpu, 0x00, 0x000029u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:27 AND #$000F
    case 0xC02E97: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x00000Fu : 0x00000Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:27 AND #$000F
    // Overlapping static entry reached from 0xC02E97.
    case 0xC02E99: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:28 TAY
    case 0xC02E9A: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:29 LDA PAD_STATE
    case 0xC02E9B: {
        Instruction step(cpu, 0xAD, 0x000065u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:30 XBA
    case 0xC02E9E: {
        Instruction step(cpu, 0xEB, 0x000000u, 1u, AddressMode::Implied);
        step.exchange_accumulator_bytes();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:31 AND #$00FF
    case 0xC02E9F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:31 AND #$00FF
    // Overlapping static entry reached from 0xC02E9F.
    case 0xC02EA1: {
        Instruction step(cpu, 0x00, 0x000029u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:32 AND #$000F
    case 0xC02EA2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x00000Fu : 0x00000Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:32 AND #$000F
    // Overlapping static entry reached from 0xC02EA2.
    case 0xC02EA4: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:33 TAX
    case 0xC02EA5: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/mushroomization_movement_swap.asm:34 LOADPTR MUSHROOMIZATION_DIRECTION_REMAP_TABLES, @VIRTUAL06
    case 0xC02EA6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000062u : 0x00E162u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/mushroomization_movement_swap.asm:34 LOADPTR MUSHROOMIZATION_DIRECTION_REMAP_TABLES, @VIRTUAL06
    // Overlapping static entry reached from 0xC02EA6.
    case 0xC02EA8: {
        Instruction step(cpu, 0xE1, 0x000085u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/mushroomization_movement_swap.asm:34 LOADPTR MUSHROOMIZATION_DIRECTION_REMAP_TABLES, @VIRTUAL06
    case 0xC02EA9: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/mushroomization_movement_swap.asm:34 LOADPTR MUSHROOMIZATION_DIRECTION_REMAP_TABLES, @VIRTUAL06
    // Overlapping static entry reached from 0xC02EA8.
    case 0xC02EAA: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/mushroomization_movement_swap.asm:34 LOADPTR MUSHROOMIZATION_DIRECTION_REMAP_TABLES, @VIRTUAL06
    case 0xC02EAB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C3u : 0x0000C3u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/mushroomization_movement_swap.asm:34 LOADPTR MUSHROOMIZATION_DIRECTION_REMAP_TABLES, @VIRTUAL06
    // Overlapping static entry reached from 0xC02EAA.
    case 0xC02EAC: {
        Instruction step(cpu, 0xC3, 0x000000u, 2u, AddressMode::StackRelative);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/mushroomization_movement_swap.asm:34 LOADPTR MUSHROOMIZATION_DIRECTION_REMAP_TABLES, @VIRTUAL06
    // Overlapping static entry reached from 0xC02EAB.
    case 0xC02EAD: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/mushroomization_movement_swap.asm:34 LOADPTR MUSHROOMIZATION_DIRECTION_REMAP_TABLES, @VIRTUAL06
    case 0xC02EAE: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:35 LDA @LOCAL00
    case 0xC02EB0: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:36 DEC
    case 0xC02EB2: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // include/macros.asm:656 ASL
    // Macro caller: src/overworld/mushroomization_movement_swap.asm:37 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC02EB3: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:657 ASL
    // Macro caller: src/overworld/mushroomization_movement_swap.asm:37 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC02EB4: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:658 ASL
    // Macro caller: src/overworld/mushroomization_movement_swap.asm:37 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC02EB5: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:659 ASL
    // Macro caller: src/overworld/mushroomization_movement_swap.asm:37 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC02EB6: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:660 ASL
    // Macro caller: src/overworld/mushroomization_movement_swap.asm:37 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC02EB7: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:38 STA @LOCAL00
    case 0xC02EB8: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:39 TYA
    case 0xC02EBA: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:40 ASL
    case 0xC02EBB: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:41 STA @VIRTUAL04
    case 0xC02EBC: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:42 LDA @LOCAL00
    case 0xC02EBE: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:43 CLC
    case 0xC02EC0: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:44 ADC @VIRTUAL04
    case 0xC02EC1: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:1044 LDY src
    // Macro caller: src/overworld/mushroomization_movement_swap.asm:45 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC02EC3: {
        Instruction step(cpu, 0xA4, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1045 STY dest
    // Macro caller: src/overworld/mushroomization_movement_swap.asm:45 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC02EC5: {
        Instruction step(cpu, 0x84, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:1046 LDY src+2
    // Macro caller: src/overworld/mushroomization_movement_swap.asm:45 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC02EC7: {
        Instruction step(cpu, 0xA4, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1047 STY dest+2
    // Macro caller: src/overworld/mushroomization_movement_swap.asm:45 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC02EC9: {
        Instruction step(cpu, 0x84, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:46 CLC
    case 0xC02ECB: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:47 ADC @VIRTUAL0A
    case 0xC02ECC: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:48 STA @VIRTUAL0A
    case 0xC02ECE: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:49 LDA [@VIRTUAL0A]
    case 0xC02ED0: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:50 STA @VIRTUAL02
    case 0xC02ED2: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:51 LDA PAD_PRESS
    case 0xC02ED4: {
        Instruction step(cpu, 0xAD, 0x00006Du, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:52 AND #$F0FF
    case 0xC02ED7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x00F0FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:52 AND #$F0FF
    // Overlapping static entry reached from 0xC02ED7.
    case 0xC02ED9: {
        Instruction step(cpu, 0xF0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:53 ORA @VIRTUAL02
    case 0xC02EDA: {
        Instruction step(cpu, 0x05, 0x000002u, 2u, AddressMode::DirectPage);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:53 ORA @VIRTUAL02
    // Overlapping static entry reached from 0xC02ED9.
    case 0xC02EDB: {
        Instruction step(cpu, 0x02, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:54 STA PAD_PRESS
    case 0xC02EDC: {
        Instruction step(cpu, 0x8D, 0x00006Du, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:55 TXA
    case 0xC02EDF: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:56 ASL
    case 0xC02EE0: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:57 STA @VIRTUAL04
    case 0xC02EE1: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:58 LDA @LOCAL00
    case 0xC02EE3: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:59 CLC
    case 0xC02EE5: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:60 ADC @VIRTUAL04
    case 0xC02EE6: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:61 CLC
    case 0xC02EE8: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:62 ADC @VIRTUAL06
    case 0xC02EE9: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:63 STA @VIRTUAL06
    case 0xC02EEB: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:64 LDA [@VIRTUAL06]
    case 0xC02EED: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:65 STA @VIRTUAL02
    case 0xC02EEF: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:66 LDA PAD_STATE
    case 0xC02EF1: {
        Instruction step(cpu, 0xAD, 0x000065u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:67 AND #$F0FF
    case 0xC02EF4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x00F0FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:67 AND #$F0FF
    // Overlapping static entry reached from 0xC02EF4.
    case 0xC02EF6: {
        Instruction step(cpu, 0xF0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:68 ORA @VIRTUAL02
    case 0xC02EF7: {
        Instruction step(cpu, 0x05, 0x000002u, 2u, AddressMode::DirectPage);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:68 ORA @VIRTUAL02
    // Overlapping static entry reached from 0xC02EF6.
    case 0xC02EF8: {
        Instruction step(cpu, 0x02, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:69 STA PAD_STATE
    case 0xC02EF9: {
        Instruction step(cpu, 0x8D, 0x000065u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/mushroomization_movement_swap.asm:71 END_C_FUNCTION
    case 0xC02EFC: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/overworld/mushroomization_movement_swap.asm:71 END_C_FUNCTION
    case 0xC02EFD: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
