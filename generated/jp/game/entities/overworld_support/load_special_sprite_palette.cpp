// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/overworld/load_special_sprite_palette.asm
bool resume_overworld_load_special_sprite_palette(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/load_special_sprite_palette.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC00788: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/load_special_sprite_palette.asm:7 END_STACK_VARS
    case 0xC0078A: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/load_special_sprite_palette.asm:7 END_STACK_VARS
    case 0xC0078B: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/load_special_sprite_palette.asm:7 END_STACK_VARS
    case 0xC0078C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EEu : 0x00FFEEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/load_special_sprite_palette.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC0078C.
    case 0xC0078E: {
        Instruction step(cpu, 0xFF, 0x40A25Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/load_special_sprite_palette.asm:7 END_STACK_VARS
    case 0xC0078F: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/overworld/load_special_sprite_palette.asm:8 LDX #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 2
    case 0xC00790: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000040u : 0x000240u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/load_special_sprite_palette.asm:8 LDX #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 2
    // Overlapping static entry reached from 0xC00790.
    case 0xC00792: {
        Instruction step(cpu, 0x02, 0x0000BDu, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/overworld/load_special_sprite_palette.asm:9 LDA __BSS_START__ + BPP4PALETTE_SIZE * 2,X
    case 0xC00793: {
        Instruction step(cpu, 0xBD, 0x000040u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_special_sprite_palette.asm:10 BEQ @UNKNOWN2
    case 0xC00796: {
        Instruction step(cpu, 0xF0, 0x00002Cu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:656 ASL
    // Macro caller: src/overworld/load_special_sprite_palette.asm:11 OPTIMIZED_MULT @VIRTUAL04, BPP4PALETTE_SIZE
    case 0xC00798: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:657 ASL
    // Macro caller: src/overworld/load_special_sprite_palette.asm:11 OPTIMIZED_MULT @VIRTUAL04, BPP4PALETTE_SIZE
    case 0xC00799: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:658 ASL
    // Macro caller: src/overworld/load_special_sprite_palette.asm:11 OPTIMIZED_MULT @VIRTUAL04, BPP4PALETTE_SIZE
    case 0xC0079A: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:659 ASL
    // Macro caller: src/overworld/load_special_sprite_palette.asm:11 OPTIMIZED_MULT @VIRTUAL04, BPP4PALETTE_SIZE
    case 0xC0079B: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:660 ASL
    // Macro caller: src/overworld/load_special_sprite_palette.asm:11 OPTIMIZED_MULT @VIRTUAL04, BPP4PALETTE_SIZE
    case 0xC0079C: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/load_special_sprite_palette.asm:12 CLC
    case 0xC0079D: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/load_special_sprite_palette.asm:13 ADC #.LOWORD(PALETTES)
    case 0xC0079E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000000u : 0x000200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/load_special_sprite_palette.asm:13 ADC #.LOWORD(PALETTES)
    // Overlapping static entry reached from 0xC0079E.
    case 0xC007A0: {
        Instruction step(cpu, 0x02, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/overworld/load_special_sprite_palette.asm:14 TAX
    case 0xC007A1: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/load_special_sprite_palette.asm:15 STX @LOCAL01
    case 0xC007A2: {
        Instruction step(cpu, 0x86, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/load_special_sprite_palette.asm:16 LDA #(BPP4PALETTE_SIZE * 4) / 2 ;goes by colour count, not size
    case 0xC007A4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000040u : 0x000040u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_special_sprite_palette.asm:16 LDA #(BPP4PALETTE_SIZE * 4) / 2 ;goes by colour count, not size
    // Overlapping static entry reached from 0xC007A4.
    case 0xC007A6: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/load_special_sprite_palette.asm:17 STA @LOCAL00
    case 0xC007A7: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_special_sprite_palette.asm:18 BRA @UNKNOWN1
    case 0xC007A9: {
        Instruction step(cpu, 0x80, 0x000014u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/load_special_sprite_palette.asm:20 ASL
    case 0xC007AB: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/load_special_sprite_palette.asm:21 PHA
    case 0xC007AC: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/overworld/load_special_sprite_palette.asm:22 LDA __BSS_START__,X
    case 0xC007AD: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_special_sprite_palette.asm:23 PLX
    case 0xC007B0: {
        Instruction step(cpu, 0xFA, 0x000000u, 1u, AddressMode::Implied);
        step.pull_x();
        return step.finish();
    }
    // src/overworld/load_special_sprite_palette.asm:24 STA PALETTES + BPP4PALETTE_SIZE * 8,X
    case 0xC007B1: {
        Instruction step(cpu, 0x9D, 0x000300u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_special_sprite_palette.asm:25 LDX @LOCAL01
    case 0xC007B4: {
        Instruction step(cpu, 0xA6, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/load_special_sprite_palette.asm:26 INX
    case 0xC007B6: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/overworld/load_special_sprite_palette.asm:27 INX
    case 0xC007B7: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/overworld/load_special_sprite_palette.asm:28 STX @LOCAL01
    case 0xC007B8: {
        Instruction step(cpu, 0x86, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/load_special_sprite_palette.asm:29 LDA @LOCAL00
    case 0xC007BA: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_special_sprite_palette.asm:30 INC
    case 0xC007BC: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/overworld/load_special_sprite_palette.asm:31 STA @LOCAL00
    case 0xC007BD: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_special_sprite_palette.asm:33 CMP #(BPP4PALETTE_SIZE * 5) / 2
    case 0xC007BF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000050u : 0x000050u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/load_special_sprite_palette.asm:33 CMP #(BPP4PALETTE_SIZE * 5) / 2
    // Overlapping static entry reached from 0xC007BF.
    case 0xC007C1: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/load_special_sprite_palette.asm:34 BCC @UNKNOWN0
    case 0xC007C2: {
        Instruction step(cpu, 0x90, 0x0000E7u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/load_special_sprite_palette.asm:36 END_C_FUNCTION
    case 0xC007C4: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/load_special_sprite_palette.asm:36 END_C_FUNCTION
    case 0xC007C5: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
