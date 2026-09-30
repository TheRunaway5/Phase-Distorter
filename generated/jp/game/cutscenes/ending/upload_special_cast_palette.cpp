// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/ending/upload_special_cast_palette.asm
bool resume_ending_upload_special_cast_palette(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/ending/upload_special_cast_palette.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4BEC9: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/ending/upload_special_cast_palette.asm:7 END_STACK_VARS
    case 0xC4BECB: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/ending/upload_special_cast_palette.asm:7 END_STACK_VARS
    case 0xC4BECC: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/ending/upload_special_cast_palette.asm:7 END_STACK_VARS
    case 0xC4BECD: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/upload_special_cast_palette.asm:7 END_STACK_VARS
    case 0xC4BECE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EEu : 0x00FFEEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/upload_special_cast_palette.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC4BECE.
    case 0xC4BED0: {
        Instruction step(cpu, 0xFF, 0x0A685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/ending/upload_special_cast_palette.asm:7 END_STACK_VARS
    case 0xC4BED1: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/ending/upload_special_cast_palette.asm:7 END_STACK_VARS
    case 0xC4BED2: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/ending/upload_special_cast_palette.asm:8 ASL
    case 0xC4BED3: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/upload_special_cast_palette.asm:9 ASL
    case 0xC4BED4: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/upload_special_cast_palette.asm:10 ASL
    case 0xC4BED5: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/upload_special_cast_palette.asm:11 ASL
    case 0xC4BED6: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/upload_special_cast_palette.asm:12 ASL
    case 0xC4BED7: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/ending/upload_special_cast_palette.asm:13 STORE_INT1632 @VIRTUAL06
    case 0xC4BED8: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/ending/upload_special_cast_palette.asm:13 STORE_INT1632 @VIRTUAL06
    case 0xC4BEDA: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/ending/upload_special_cast_palette.asm:14 CLC
    case 0xC4BEDC: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // include/macros.asm:994 LDA var
    // Macro caller: src/ending/upload_special_cast_palette.asm:15 VAR_ADD_CONST_INT_ASSIGN BUFFER + $7000, @VIRTUAL06
    case 0xC4BEDD: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:995 ADC #.LOWORD(constant)
    // Macro caller: src/ending/upload_special_cast_palette.asm:15 VAR_ADD_CONST_INT_ASSIGN BUFFER + $7000, @VIRTUAL06
    case 0xC4BEDF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000000u : 0x007000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:995 ADC #.LOWORD(constant)
    // Macro caller: src/ending/upload_special_cast_palette.asm:15 VAR_ADD_CONST_INT_ASSIGN BUFFER + $7000, @VIRTUAL06
    // Overlapping static entry reached from 0xC4BEDF.
    case 0xC4BEE1: {
        Instruction step(cpu, 0x70, 0x000085u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_set();
        return step.finish();
    }
    // include/macros.asm:996 STA dest
    // Macro caller: src/ending/upload_special_cast_palette.asm:15 VAR_ADD_CONST_INT_ASSIGN BUFFER + $7000, @VIRTUAL06
    case 0xC4BEE2: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:996 STA dest
    // Macro caller: src/ending/upload_special_cast_palette.asm:15 VAR_ADD_CONST_INT_ASSIGN BUFFER + $7000, @VIRTUAL06
    // Overlapping static entry reached from 0xC4BEE1.
    case 0xC4BEE3: {
        Instruction step(cpu, 0x06, 0x0000A5u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:997 LDA var+2
    // Macro caller: src/ending/upload_special_cast_palette.asm:15 VAR_ADD_CONST_INT_ASSIGN BUFFER + $7000, @VIRTUAL06
    case 0xC4BEE4: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:997 LDA var+2
    // Macro caller: src/ending/upload_special_cast_palette.asm:15 VAR_ADD_CONST_INT_ASSIGN BUFFER + $7000, @VIRTUAL06
    // Overlapping static entry reached from 0xC4BEE3.
    case 0xC4BEE5: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // include/macros.asm:998 ADC #.HIWORD(constant)
    // Macro caller: src/ending/upload_special_cast_palette.asm:15 VAR_ADD_CONST_INT_ASSIGN BUFFER + $7000, @VIRTUAL06
    case 0xC4BEE6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00007Fu : 0x00007Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:998 ADC #.HIWORD(constant)
    // Macro caller: src/ending/upload_special_cast_palette.asm:15 VAR_ADD_CONST_INT_ASSIGN BUFFER + $7000, @VIRTUAL06
    // Overlapping static entry reached from 0xC4BEE6.
    case 0xC4BEE8: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:999 STA dest+2
    // Macro caller: src/ending/upload_special_cast_palette.asm:15 VAR_ADD_CONST_INT_ASSIGN BUFFER + $7000, @VIRTUAL06
    case 0xC4BEE9: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/upload_special_cast_palette.asm:16 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4BEEB: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/upload_special_cast_palette.asm:16 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4BEED: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/upload_special_cast_palette.asm:16 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4BEEF: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/upload_special_cast_palette.asm:16 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4BEF1: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/upload_special_cast_palette.asm:17 LDX #BPP4PALETTE_SIZE * 1
    case 0xC4BEF3: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/ending/upload_special_cast_palette.asm:17 LDX #BPP4PALETTE_SIZE * 1
    // Overlapping static entry reached from 0xC4BEF3.
    case 0xC4BEF5: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/upload_special_cast_palette.asm:18 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 12
    case 0xC4BEF6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000080u : 0x000380u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/upload_special_cast_palette.asm:18 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 12
    // Overlapping static entry reached from 0xC4BEF6.
    case 0xC4BEF8: {
        Instruction step(cpu, 0x03, 0x000022u, 2u, AddressMode::StackRelative);
        step.or_accumulator();
        return step.finish();
    }
    // src/ending/upload_special_cast_palette.asm:19 JSL MEMCPY16
    case 0xC4BEF9: {
        Instruction step(cpu, 0x22, 0xC08EC3u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/upload_special_cast_palette.asm:19 JSL MEMCPY16
    // Overlapping static entry reached from 0xC4BEF8.
    case 0xC4BEFA: {
        Instruction step(cpu, 0xC3, 0x00008Eu, 2u, AddressMode::StackRelative);
        step.compare_accumulator();
        return step.finish();
    }
    // src/ending/upload_special_cast_palette.asm:19 JSL MEMCPY16
    // Overlapping static entry reached from 0xC4BEFA.
    case 0xC4BEFC: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000E2u : 0x0020E2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/ending/upload_special_cast_palette.asm:20 SEP #PROC_FLAGS::ACCUM8
    case 0xC4BEFD: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/ending/upload_special_cast_palette.asm:20 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC4BEFC.
    case 0xC4BEFE: {
        Instruction step(cpu, 0x20, 0x0010A9u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/ending/upload_special_cast_palette.asm:21 LDA #PALETTE_UPLOAD::OBJ_ONLY
    case 0xC4BEFF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000010u : 0x008D10u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/upload_special_cast_palette.asm:22 STA PALETTE_UPLOAD_MODE
    case 0xC4BF01: {
        Instruction step(cpu, 0x8D, 0x000030u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/upload_special_cast_palette.asm:22 STA PALETTE_UPLOAD_MODE
    // Overlapping static entry reached from 0xC4BEFF.
    case 0xC4BF02: {
        Instruction step(cpu, 0x30, 0x000000u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/ending/upload_special_cast_palette.asm:23 REP #PROC_FLAGS::ACCUM8
    case 0xC4BF04: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/ending/upload_special_cast_palette.asm:24 END_C_FUNCTION
    case 0xC4BF06: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/ending/upload_special_cast_palette.asm:24 END_C_FUNCTION
    case 0xC4BF07: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
