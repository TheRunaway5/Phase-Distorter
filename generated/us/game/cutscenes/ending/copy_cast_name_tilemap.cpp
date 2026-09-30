// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/ending/copy_cast_name_tilemap.asm
bool resume_ending_copy_cast_name_tilemap(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/ending/copy_cast_name_tilemap.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4EB04: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/ending/copy_cast_name_tilemap.asm:13 END_STACK_VARS
    case 0xC4EB06: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/ending/copy_cast_name_tilemap.asm:13 END_STACK_VARS
    case 0xC4EB07: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/ending/copy_cast_name_tilemap.asm:13 END_STACK_VARS
    case 0xC4EB08: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/copy_cast_name_tilemap.asm:13 END_STACK_VARS
    case 0xC4EB09: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000E6u : 0x00FFE6u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/copy_cast_name_tilemap.asm:13 END_STACK_VARS
    // Overlapping static entry reached from 0xC4EB09.
    case 0xC4EB0B: {
        Instruction step(cpu, 0xFF, 0x84685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/ending/copy_cast_name_tilemap.asm:13 END_STACK_VARS
    case 0xC4EB0C: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/ending/copy_cast_name_tilemap.asm:13 END_STACK_VARS
    case 0xC4EB0D: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap.asm:14 STY @LOCAL04
    case 0xC4EB0E: {
        Instruction step(cpu, 0x84, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap.asm:14 STY @LOCAL04
    // Overlapping static entry reached from 0xC4EB0B.
    case 0xC4EB0F: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap.asm:15 STX @VIRTUAL02
    case 0xC4EB10: {
        Instruction step(cpu, 0x86, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap.asm:16 STA @LOCAL03
    case 0xC4EB12: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap.asm:17 LDA BG3_Y_POS
    case 0xC4EB14: {
        Instruction step(cpu, 0xAD, 0x00003Bu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap.asm:18 LSR
    case 0xC4EB17: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap.asm:19 LSR
    case 0xC4EB18: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap.asm:20 LSR
    case 0xC4EB19: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap.asm:21 CLC
    case 0xC4EB1A: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap.asm:22 ADC @VIRTUAL02
    case 0xC4EB1B: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap.asm:23 AND #$001F
    case 0xC4EB1D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x00001Fu : 0x00001Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap.asm:23 AND #$001F
    // Overlapping static entry reached from 0xC4EB1D.
    case 0xC4EB1F: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap.asm:24 STA @VIRTUAL02
    case 0xC4EB20: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap.asm:25 STA @LOCAL02
    case 0xC4EB22: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap.asm:26 LDA @LOCAL04
    case 0xC4EB24: {
        Instruction step(cpu, 0xA5, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap.asm:27 INC
    case 0xC4EB26: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap.asm:28 LSR
    case 0xC4EB27: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap.asm:29 PHA
    case 0xC4EB28: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap.asm:30 LDA @VIRTUAL02
    case 0xC4EB29: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap.asm:31 ASL
    case 0xC4EB2B: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap.asm:32 ASL
    case 0xC4EB2C: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap.asm:33 ASL
    case 0xC4EB2D: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap.asm:34 ASL
    case 0xC4EB2E: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap.asm:35 ASL
    case 0xC4EB2F: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap.asm:36 CLC
    case 0xC4EB30: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap.asm:37 ADC @LOCAL03
    case 0xC4EB31: {
        Instruction step(cpu, 0x65, 0x000016u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap.asm:38 CLC
    case 0xC4EB33: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap.asm:39 ADC #VRAM::CAST_TILEMAP
    case 0xC4EB34: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000000u : 0x007C00u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap.asm:39 ADC #VRAM::CAST_TILEMAP
    // Overlapping static entry reached from 0xC4EB34.
    case 0xC4EB36: {
        Instruction step(cpu, 0x7C, 0x00847Au, 3u, AddressMode::AbsoluteIndexedIndirectX);
        step.jump();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap.asm:40 PLY
    case 0xC4EB37: {
        Instruction step(cpu, 0x7A, 0x000000u, 1u, AddressMode::Implied);
        step.pull_y();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap.asm:41 STY @VIRTUAL02
    case 0xC4EB38: {
        Instruction step(cpu, 0x84, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap.asm:42 SEC
    case 0xC4EB3A: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap.asm:43 SBC @VIRTUAL02
    case 0xC4EB3B: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap.asm:44 STA @VIRTUAL04
    case 0xC4EB3D: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/copy_cast_name_tilemap.asm:45 LOADPTR BUFFER + $4000, @VIRTUAL06
    case 0xC4EB3F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x004000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/copy_cast_name_tilemap.asm:45 LOADPTR BUFFER + $4000, @VIRTUAL06
    // Overlapping static entry reached from 0xC4EB3F.
    case 0xC4EB41: {
        Instruction step(cpu, 0x40, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_interrupt();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/copy_cast_name_tilemap.asm:45 LOADPTR BUFFER + $4000, @VIRTUAL06
    case 0xC4EB42: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/copy_cast_name_tilemap.asm:45 LOADPTR BUFFER + $4000, @VIRTUAL06
    case 0xC4EB44: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Fu : 0x00007Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/copy_cast_name_tilemap.asm:45 LOADPTR BUFFER + $4000, @VIRTUAL06
    // Overlapping static entry reached from 0xC4EB44.
    case 0xC4EB46: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/ending/copy_cast_name_tilemap.asm:45 LOADPTR BUFFER + $4000, @VIRTUAL06
    case 0xC4EB47: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap.asm:46 LDA @LOCAL03
    case 0xC4EB49: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap.asm:47 ASL
    case 0xC4EB4B: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap.asm:48 CLC
    case 0xC4EB4C: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap.asm:49 ADC @VIRTUAL06
    case 0xC4EB4D: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap.asm:50 STA @VIRTUAL06
    case 0xC4EB4F: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap.asm:51 STA @LOCAL00
    case 0xC4EB51: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap.asm:52 LDA @VIRTUAL06+2
    case 0xC4EB53: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap.asm:53 STA @LOCAL00+2
    case 0xC4EB55: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap.asm:54 LDY @VIRTUAL04
    case 0xC4EB57: {
        Instruction step(cpu, 0xA4, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap.asm:55 LDA @LOCAL04
    case 0xC4EB59: {
        Instruction step(cpu, 0xA5, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap.asm:56 ASL
    case 0xC4EB5B: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap.asm:57 TAX
    case 0xC4EB5C: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap.asm:58 SEP #PROC_FLAGS::ACCUM8
    case 0xC4EB5D: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap.asm:59 LDA #0
    case 0xC4EB5F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x002200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap.asm:60 JSL PREPARE_VRAM_COPY
    case 0xC4EB61: {
        Instruction step(cpu, 0x22, 0xC08616u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap.asm:60 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC4EB5F.
    case 0xC4EB62: {
        Instruction step(cpu, 0x16, 0x000086u, 2u, AddressMode::DirectPageIndexedX);
        step.shift_left();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap.asm:60 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC4EB62.
    case 0xC4EB64: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000A5u : 0x0014A5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap.asm:62 LDA @LOCAL02
    case 0xC4EB65: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap.asm:62 LDA @LOCAL02
    // Overlapping static entry reached from 0xC4EB64.
    case 0xC4EB66: {
        Instruction step(cpu, 0x14, 0x000085u, 2u, AddressMode::DirectPage);
        step.reset_tested_bits();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap.asm:63 STA @VIRTUAL02
    case 0xC4EB67: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap.asm:63 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC4EB66.
    case 0xC4EB68: {
        Instruction step(cpu, 0x02, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap.asm:64 CMP #31
    case 0xC4EB69: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00001Fu : 0x00001Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap.asm:64 CMP #31
    // Overlapping static entry reached from 0xC4EB69.
    case 0xC4EB6B: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap.asm:65 BEQ @UNKNOWN0
    case 0xC4EB6C: {
        Instruction step(cpu, 0xF0, 0x00000Au, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap.asm:66 LDA @VIRTUAL04
    case 0xC4EB6E: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap.asm:67 CLC
    case 0xC4EB70: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap.asm:68 ADC #32
    case 0xC4EB71: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap.asm:68 ADC #32
    // Overlapping static entry reached from 0xC4EB71.
    case 0xC4EB73: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap.asm:69 STA @LOCAL01
    case 0xC4EB74: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap.asm:70 BRA @UNKNOWN1
    case 0xC4EB76: {
        Instruction step(cpu, 0x80, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap.asm:72 LDA @VIRTUAL04
    case 0xC4EB78: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap.asm:73 SEC
    case 0xC4EB7A: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap.asm:74 SBC #$03E0
    case 0xC4EB7B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x0000E0u : 0x0003E0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap.asm:74 SBC #$03E0
    // Overlapping static entry reached from 0xC4EB7B.
    case 0xC4EB7D: {
        Instruction step(cpu, 0x03, 0x000085u, 2u, AddressMode::StackRelative);
        step.or_accumulator();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap.asm:75 STA @LOCAL01
    case 0xC4EB7E: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap.asm:75 STA @LOCAL01
    // Overlapping static entry reached from 0xC4EB7D.
    case 0xC4EB7F: {
        Instruction step(cpu, 0x12, 0x0000A9u, 2u, AddressMode::DirectPageIndirect);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/copy_cast_name_tilemap.asm:77 LOADPTR BUFFER + $4000, @VIRTUAL06
    case 0xC4EB80: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x004000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/copy_cast_name_tilemap.asm:77 LOADPTR BUFFER + $4000, @VIRTUAL06
    // Overlapping static entry reached from 0xC4EB7F.
    case 0xC4EB81: {
        Instruction step(cpu, 0x00, 0x000040u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/copy_cast_name_tilemap.asm:77 LOADPTR BUFFER + $4000, @VIRTUAL06
    // Overlapping static entry reached from 0xC4EB80.
    case 0xC4EB82: {
        Instruction step(cpu, 0x40, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_interrupt();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/copy_cast_name_tilemap.asm:77 LOADPTR BUFFER + $4000, @VIRTUAL06
    case 0xC4EB83: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/copy_cast_name_tilemap.asm:77 LOADPTR BUFFER + $4000, @VIRTUAL06
    case 0xC4EB85: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Fu : 0x00007Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/copy_cast_name_tilemap.asm:77 LOADPTR BUFFER + $4000, @VIRTUAL06
    // Overlapping static entry reached from 0xC4EB85.
    case 0xC4EB87: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/ending/copy_cast_name_tilemap.asm:77 LOADPTR BUFFER + $4000, @VIRTUAL06
    case 0xC4EB88: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap.asm:78 LDA @LOCAL03
    case 0xC4EB8A: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap.asm:79 ASL
    case 0xC4EB8C: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap.asm:80 CLC
    case 0xC4EB8D: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap.asm:81 ADC #64
    case 0xC4EB8E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000040u : 0x000040u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap.asm:81 ADC #64
    // Overlapping static entry reached from 0xC4EB8E.
    case 0xC4EB90: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap.asm:82 CLC
    case 0xC4EB91: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap.asm:83 ADC @VIRTUAL06
    case 0xC4EB92: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap.asm:84 STA @VIRTUAL06
    case 0xC4EB94: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap.asm:85 STA @LOCAL00
    case 0xC4EB96: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap.asm:86 LDA @VIRTUAL06+2
    case 0xC4EB98: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap.asm:87 STA @LOCAL00+2
    case 0xC4EB9A: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap.asm:88 LDA @LOCAL01
    case 0xC4EB9C: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap.asm:89 TAY
    case 0xC4EB9E: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap.asm:90 LDA @LOCAL04
    case 0xC4EB9F: {
        Instruction step(cpu, 0xA5, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap.asm:91 ASL
    case 0xC4EBA1: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap.asm:92 TAX
    case 0xC4EBA2: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap.asm:93 SEP #PROC_FLAGS::ACCUM8
    case 0xC4EBA3: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap.asm:94 LDA #0
    case 0xC4EBA5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x002200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap.asm:95 JSL PREPARE_VRAM_COPY
    case 0xC4EBA7: {
        Instruction step(cpu, 0x22, 0xC08616u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap.asm:95 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC4EBA5.
    case 0xC4EBA8: {
        Instruction step(cpu, 0x16, 0x000086u, 2u, AddressMode::DirectPageIndexedX);
        step.shift_left();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap.asm:95 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC4EBA8.
    case 0xC4EBAA: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x00002Bu : 0x006B2Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/ending/copy_cast_name_tilemap.asm:96 END_C_FUNCTION
    case 0xC4EBAB: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/ending/copy_cast_name_tilemap.asm:96 END_C_FUNCTION
    case 0xC4EBAC: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
