// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/overworld/mushroomization_movement_swap.asm
bool resume_overworld_mushroomization_movement_swap(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/mushroomization_movement_swap.asm:3 BEGIN_C_FUNCTION
    case 0xC02C89: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/mushroomization_movement_swap.asm:6 END_STACK_VARS
    case 0xC02C8B: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/mushroomization_movement_swap.asm:6 END_STACK_VARS
    case 0xC02C8C: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/mushroomization_movement_swap.asm:6 END_STACK_VARS
    case 0xC02C8D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000F0u : 0x00FFF0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/mushroomization_movement_swap.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC02C8D.
    case 0xC02C8F: {
        Instruction step(cpu, 0xFF, 0x9CAD5Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/mushroomization_movement_swap.asm:6 END_STACK_VARS
    case 0xC02C90: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:7 LDA MUSHROOMIZATION_TIMER
    case 0xC02C91: {
        Instruction step(cpu, 0xAD, 0x005D9Cu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:7 LDA MUSHROOMIZATION_TIMER
    // Overlapping static entry reached from 0xC02C8F.
    case 0xC02C93: {
        Instruction step(cpu, 0x5D, 0x0016D0u, 3u, AddressMode::AbsoluteIndexedX);
        step.xor_accumulator();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:8 BNE @STILL_HAS_TIME_LEFT
    case 0xC02C94: {
        Instruction step(cpu, 0xD0, 0x000016u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:9 LDA #TIME_BETWEEN_DIRECTION_SWAPS
    case 0xC02C96: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000008u : 0x000708u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:9 LDA #TIME_BETWEEN_DIRECTION_SWAPS
    // Overlapping static entry reached from 0xC02C96.
    case 0xC02C98: {
        Instruction step(cpu, 0x07, 0x00008Du, 2u, AddressMode::DirectPageIndirectLong);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:10 STA MUSHROOMIZATION_TIMER
    case 0xC02C99: {
        Instruction step(cpu, 0x8D, 0x005D9Cu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:10 STA MUSHROOMIZATION_TIMER
    // Overlapping static entry reached from 0xC02C98.
    case 0xC02C9A: {
        Instruction step(cpu, 0x9C, 0x00A25Du, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:11 LDX #.LOWORD(MUSHROOMIZATION_MODIFIER)
    case 0xC02C9C: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x00009Eu : 0x005D9Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:11 LDX #.LOWORD(MUSHROOMIZATION_MODIFIER)
    // Overlapping static entry reached from 0xC02C9A.
    case 0xC02C9D: {
        Instruction step(cpu, 0x9E, 0x00BD5Du, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:11 LDX #.LOWORD(MUSHROOMIZATION_MODIFIER)
    // Overlapping static entry reached from 0xC02C9C.
    case 0xC02C9E: {
        Instruction step(cpu, 0x5D, 0x0000BDu, 3u, AddressMode::AbsoluteIndexedX);
        step.xor_accumulator();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:12 LDA __BSS_START__,X
    case 0xC02C9F: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:12 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC02C9D.
    case 0xC02CA0: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:12 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC02C9E.
    case 0xC02CA1: {
        Instruction step(cpu, 0x00, 0x00001Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:13 INC
    case 0xC02CA2: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:14 STA __BSS_START__,X
    case 0xC02CA3: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:15 AND #$0003
    case 0xC02CA6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:15 AND #$0003
    // Overlapping static entry reached from 0xC02CA6.
    case 0xC02CA8: {
        Instruction step(cpu, 0x00, 0x00009Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:16 STA __BSS_START__,X
    case 0xC02CA9: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:18 DEC MUSHROOMIZATION_TIMER
    case 0xC02CAC: {
        Instruction step(cpu, 0xCE, 0x005D9Cu, 3u, AddressMode::Absolute);
        step.decrement();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:19 LDA MUSHROOMIZATION_MODIFIER
    case 0xC02CAF: {
        Instruction step(cpu, 0xAD, 0x005D9Eu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:20 STA @LOCAL00
    case 0xC02CB2: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:21 BEQ @RETURN
    case 0xC02CB4: {
        Instruction step(cpu, 0xF0, 0x000071u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:22 LDA DEMO_FRAMES_LEFT
    case 0xC02CB6: {
        Instruction step(cpu, 0xAD, 0x000081u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:23 BNE @RETURN
    case 0xC02CB9: {
        Instruction step(cpu, 0xD0, 0x00006Cu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:24 LDA PAD_PRESS
    case 0xC02CBB: {
        Instruction step(cpu, 0xAD, 0x00006Du, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:25 XBA
    case 0xC02CBE: {
        Instruction step(cpu, 0xEB, 0x000000u, 1u, AddressMode::Implied);
        step.exchange_accumulator_bytes();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:26 AND #$00FF
    case 0xC02CBF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:26 AND #$00FF
    // Overlapping static entry reached from 0xC02CBF.
    case 0xC02CC1: {
        Instruction step(cpu, 0x00, 0x000029u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:27 AND #$000F
    case 0xC02CC2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x00000Fu : 0x00000Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:27 AND #$000F
    // Overlapping static entry reached from 0xC02CC2.
    case 0xC02CC4: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:28 TAY
    case 0xC02CC5: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:29 LDA PAD_STATE
    case 0xC02CC6: {
        Instruction step(cpu, 0xAD, 0x000065u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:30 XBA
    case 0xC02CC9: {
        Instruction step(cpu, 0xEB, 0x000000u, 1u, AddressMode::Implied);
        step.exchange_accumulator_bytes();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:31 AND #$00FF
    case 0xC02CCA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:31 AND #$00FF
    // Overlapping static entry reached from 0xC02CCA.
    case 0xC02CCC: {
        Instruction step(cpu, 0x00, 0x000029u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:32 AND #$000F
    case 0xC02CCD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x00000Fu : 0x00000Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:32 AND #$000F
    // Overlapping static entry reached from 0xC02CCD.
    case 0xC02CCF: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:33 TAX
    case 0xC02CD0: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/mushroomization_movement_swap.asm:34 LOADPTR MUSHROOMIZATION_DIRECTION_REMAP_TABLES, @VIRTUAL06
    case 0xC02CD1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000078u : 0x00E178u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/mushroomization_movement_swap.asm:34 LOADPTR MUSHROOMIZATION_DIRECTION_REMAP_TABLES, @VIRTUAL06
    // Overlapping static entry reached from 0xC02CD1.
    case 0xC02CD3: {
        Instruction step(cpu, 0xE1, 0x000085u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/mushroomization_movement_swap.asm:34 LOADPTR MUSHROOMIZATION_DIRECTION_REMAP_TABLES, @VIRTUAL06
    case 0xC02CD4: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/mushroomization_movement_swap.asm:34 LOADPTR MUSHROOMIZATION_DIRECTION_REMAP_TABLES, @VIRTUAL06
    // Overlapping static entry reached from 0xC02CD3.
    case 0xC02CD5: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/mushroomization_movement_swap.asm:34 LOADPTR MUSHROOMIZATION_DIRECTION_REMAP_TABLES, @VIRTUAL06
    case 0xC02CD6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C3u : 0x0000C3u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/mushroomization_movement_swap.asm:34 LOADPTR MUSHROOMIZATION_DIRECTION_REMAP_TABLES, @VIRTUAL06
    // Overlapping static entry reached from 0xC02CD5.
    case 0xC02CD7: {
        Instruction step(cpu, 0xC3, 0x000000u, 2u, AddressMode::StackRelative);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/mushroomization_movement_swap.asm:34 LOADPTR MUSHROOMIZATION_DIRECTION_REMAP_TABLES, @VIRTUAL06
    // Overlapping static entry reached from 0xC02CD6.
    case 0xC02CD8: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/mushroomization_movement_swap.asm:34 LOADPTR MUSHROOMIZATION_DIRECTION_REMAP_TABLES, @VIRTUAL06
    case 0xC02CD9: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:35 LDA @LOCAL00
    case 0xC02CDB: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:36 DEC
    case 0xC02CDD: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // include/macros.asm:656 ASL
    // Macro caller: src/overworld/mushroomization_movement_swap.asm:37 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC02CDE: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:657 ASL
    // Macro caller: src/overworld/mushroomization_movement_swap.asm:37 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC02CDF: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:658 ASL
    // Macro caller: src/overworld/mushroomization_movement_swap.asm:37 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC02CE0: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:659 ASL
    // Macro caller: src/overworld/mushroomization_movement_swap.asm:37 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC02CE1: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:660 ASL
    // Macro caller: src/overworld/mushroomization_movement_swap.asm:37 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC02CE2: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:38 STA @LOCAL00
    case 0xC02CE3: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:39 TYA
    case 0xC02CE5: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:40 ASL
    case 0xC02CE6: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:41 STA @VIRTUAL04
    case 0xC02CE7: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:42 LDA @LOCAL00
    case 0xC02CE9: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:43 CLC
    case 0xC02CEB: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:44 ADC @VIRTUAL04
    case 0xC02CEC: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:1044 LDY src
    // Macro caller: src/overworld/mushroomization_movement_swap.asm:45 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC02CEE: {
        Instruction step(cpu, 0xA4, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1045 STY dest
    // Macro caller: src/overworld/mushroomization_movement_swap.asm:45 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC02CF0: {
        Instruction step(cpu, 0x84, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:1046 LDY src+2
    // Macro caller: src/overworld/mushroomization_movement_swap.asm:45 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC02CF2: {
        Instruction step(cpu, 0xA4, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1047 STY dest+2
    // Macro caller: src/overworld/mushroomization_movement_swap.asm:45 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC02CF4: {
        Instruction step(cpu, 0x84, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:46 CLC
    case 0xC02CF6: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:47 ADC @VIRTUAL0A
    case 0xC02CF7: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:48 STA @VIRTUAL0A
    case 0xC02CF9: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:49 LDA [@VIRTUAL0A]
    case 0xC02CFB: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:50 STA @VIRTUAL02
    case 0xC02CFD: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:51 LDA PAD_PRESS
    case 0xC02CFF: {
        Instruction step(cpu, 0xAD, 0x00006Du, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:52 AND #$F0FF
    case 0xC02D02: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x00F0FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:52 AND #$F0FF
    // Overlapping static entry reached from 0xC02D02.
    case 0xC02D04: {
        Instruction step(cpu, 0xF0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:53 ORA @VIRTUAL02
    case 0xC02D05: {
        Instruction step(cpu, 0x05, 0x000002u, 2u, AddressMode::DirectPage);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:53 ORA @VIRTUAL02
    // Overlapping static entry reached from 0xC02D04.
    case 0xC02D06: {
        Instruction step(cpu, 0x02, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:54 STA PAD_PRESS
    case 0xC02D07: {
        Instruction step(cpu, 0x8D, 0x00006Du, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:55 TXA
    case 0xC02D0A: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:56 ASL
    case 0xC02D0B: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:57 STA @VIRTUAL04
    case 0xC02D0C: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:58 LDA @LOCAL00
    case 0xC02D0E: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:59 CLC
    case 0xC02D10: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:60 ADC @VIRTUAL04
    case 0xC02D11: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:61 CLC
    case 0xC02D13: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:62 ADC @VIRTUAL06
    case 0xC02D14: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:63 STA @VIRTUAL06
    case 0xC02D16: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:64 LDA [@VIRTUAL06]
    case 0xC02D18: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:65 STA @VIRTUAL02
    case 0xC02D1A: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:66 LDA PAD_STATE
    case 0xC02D1C: {
        Instruction step(cpu, 0xAD, 0x000065u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:67 AND #$F0FF
    case 0xC02D1F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x00F0FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:67 AND #$F0FF
    // Overlapping static entry reached from 0xC02D1F.
    case 0xC02D21: {
        Instruction step(cpu, 0xF0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:68 ORA @VIRTUAL02
    case 0xC02D22: {
        Instruction step(cpu, 0x05, 0x000002u, 2u, AddressMode::DirectPage);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:68 ORA @VIRTUAL02
    // Overlapping static entry reached from 0xC02D21.
    case 0xC02D23: {
        Instruction step(cpu, 0x02, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/overworld/mushroomization_movement_swap.asm:69 STA PAD_STATE
    case 0xC02D24: {
        Instruction step(cpu, 0x8D, 0x000065u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/mushroomization_movement_swap.asm:71 END_C_FUNCTION
    case 0xC02D27: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/overworld/mushroomization_movement_swap.asm:71 END_C_FUNCTION
    case 0xC02D28: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
