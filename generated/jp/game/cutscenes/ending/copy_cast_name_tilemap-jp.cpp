// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/ending/copy_cast_name_tilemap-jp.asm
bool resume_ending_copy_cast_name_tilemap_jp(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/ending/copy_cast_name_tilemap-jp.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4BC65: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/ending/copy_cast_name_tilemap-jp.asm:12 END_STACK_VARS
    case 0xC4BC67: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/ending/copy_cast_name_tilemap-jp.asm:12 END_STACK_VARS
    case 0xC4BC68: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/ending/copy_cast_name_tilemap-jp.asm:12 END_STACK_VARS
    case 0xC4BC69: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/copy_cast_name_tilemap-jp.asm:12 END_STACK_VARS
    case 0xC4BC6A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000E8u : 0x00FFE8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/copy_cast_name_tilemap-jp.asm:12 END_STACK_VARS
    // Overlapping static entry reached from 0xC4BC6A.
    case 0xC4BC6C: {
        Instruction step(cpu, 0xFF, 0x84685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/ending/copy_cast_name_tilemap-jp.asm:12 END_STACK_VARS
    case 0xC4BC6D: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/ending/copy_cast_name_tilemap-jp.asm:12 END_STACK_VARS
    case 0xC4BC6E: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap-jp.asm:13 STY @VIRTUAL04
    case 0xC4BC6F: {
        Instruction step(cpu, 0x84, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap-jp.asm:13 STY @VIRTUAL04
    // Overlapping static entry reached from 0xC4BC6C.
    case 0xC4BC70: {
        Instruction step(cpu, 0x04, 0x000086u, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap-jp.asm:14 STX @VIRTUAL02
    case 0xC4BC71: {
        Instruction step(cpu, 0x86, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap-jp.asm:14 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC4BC70.
    case 0xC4BC72: {
        Instruction step(cpu, 0x02, 0x000085u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap-jp.asm:15 STA @LOCAL03
    case 0xC4BC73: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap-jp.asm:16 LDA BG3_Y_POS
    case 0xC4BC75: {
        Instruction step(cpu, 0xAD, 0x00003Bu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap-jp.asm:17 LSR
    case 0xC4BC78: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap-jp.asm:18 LSR
    case 0xC4BC79: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap-jp.asm:19 LSR
    case 0xC4BC7A: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap-jp.asm:20 CLC
    case 0xC4BC7B: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap-jp.asm:21 ADC @VIRTUAL02
    case 0xC4BC7C: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap-jp.asm:22 AND #$001F
    case 0xC4BC7E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x00001Fu : 0x00001Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap-jp.asm:22 AND #$001F
    // Overlapping static entry reached from 0xC4BC7E.
    case 0xC4BC80: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap-jp.asm:23 STA @LOCAL02
    case 0xC4BC81: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap-jp.asm:24 LDX @VIRTUAL04
    case 0xC4BC83: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap-jp.asm:25 LDA @LOCAL03
    case 0xC4BC85: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap-jp.asm:26 JSL UNKNOWN_C4B8E2
    case 0xC4BC87: {
        Instruction step(cpu, 0x22, 0xC4B8E2u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap-jp.asm:27 LDA @VIRTUAL04
    case 0xC4BC8B: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap-jp.asm:28 AND #$0001
    case 0xC4BC8D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap-jp.asm:28 AND #$0001
    // Overlapping static entry reached from 0xC4BC8D.
    case 0xC4BC8F: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap-jp.asm:29 BEQ @UNKNOWN0_
    case 0xC4BC90: {
        Instruction step(cpu, 0xF0, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap-jp.asm:30 INC @VIRTUAL04
    case 0xC4BC92: {
        Instruction step(cpu, 0xE6, 0x000004u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap-jp.asm:32 LDA @VIRTUAL04
    case 0xC4BC94: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap-jp.asm:33 INC
    case 0xC4BC96: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap-jp.asm:34 LSR
    case 0xC4BC97: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap-jp.asm:35 STA @VIRTUAL02
    case 0xC4BC98: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap-jp.asm:36 LDA @LOCAL02
    case 0xC4BC9A: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap-jp.asm:37 ASL
    case 0xC4BC9C: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap-jp.asm:38 ASL
    case 0xC4BC9D: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap-jp.asm:39 ASL
    case 0xC4BC9E: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap-jp.asm:40 ASL
    case 0xC4BC9F: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap-jp.asm:41 ASL
    case 0xC4BCA0: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap-jp.asm:42 CLC
    case 0xC4BCA1: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap-jp.asm:43 ADC @LOCAL03
    case 0xC4BCA2: {
        Instruction step(cpu, 0x65, 0x000016u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap-jp.asm:44 CLC
    case 0xC4BCA4: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap-jp.asm:45 ADC #VRAM::CAST_TILEMAP
    case 0xC4BCA5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000000u : 0x007C00u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap-jp.asm:45 ADC #VRAM::CAST_TILEMAP
    // Overlapping static entry reached from 0xC4BCA5.
    case 0xC4BCA7: {
        Instruction step(cpu, 0x7C, 0x00E538u, 3u, AddressMode::AbsoluteIndexedIndirectX);
        step.jump();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap-jp.asm:46 SEC
    case 0xC4BCA8: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap-jp.asm:47 SBC @VIRTUAL02
    case 0xC4BCA9: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap-jp.asm:48 STA @VIRTUAL02
    case 0xC4BCAB: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/copy_cast_name_tilemap-jp.asm:49 LOADPTR BUFFER + $4000, @VIRTUAL06
    case 0xC4BCAD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x004000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/copy_cast_name_tilemap-jp.asm:49 LOADPTR BUFFER + $4000, @VIRTUAL06
    // Overlapping static entry reached from 0xC4BCAD.
    case 0xC4BCAF: {
        Instruction step(cpu, 0x40, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_interrupt();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/copy_cast_name_tilemap-jp.asm:49 LOADPTR BUFFER + $4000, @VIRTUAL06
    case 0xC4BCB0: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/copy_cast_name_tilemap-jp.asm:49 LOADPTR BUFFER + $4000, @VIRTUAL06
    case 0xC4BCB2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Fu : 0x00007Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/copy_cast_name_tilemap-jp.asm:49 LOADPTR BUFFER + $4000, @VIRTUAL06
    // Overlapping static entry reached from 0xC4BCB2.
    case 0xC4BCB4: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/ending/copy_cast_name_tilemap-jp.asm:49 LOADPTR BUFFER + $4000, @VIRTUAL06
    case 0xC4BCB5: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap-jp.asm:50 LDA @LOCAL03
    case 0xC4BCB7: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap-jp.asm:51 ASL
    case 0xC4BCB9: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap-jp.asm:52 CLC
    case 0xC4BCBA: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap-jp.asm:53 ADC @VIRTUAL06
    case 0xC4BCBB: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap-jp.asm:54 STA @VIRTUAL06
    case 0xC4BCBD: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap-jp.asm:55 STA @LOCAL00
    case 0xC4BCBF: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap-jp.asm:56 LDA @VIRTUAL06+2
    case 0xC4BCC1: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap-jp.asm:57 STA @LOCAL00+2
    case 0xC4BCC3: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap-jp.asm:58 LDY @VIRTUAL02
    case 0xC4BCC5: {
        Instruction step(cpu, 0xA4, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap-jp.asm:59 LDA @VIRTUAL04
    case 0xC4BCC7: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap-jp.asm:60 ASL
    case 0xC4BCC9: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap-jp.asm:61 TAX
    case 0xC4BCCA: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap-jp.asm:62 SEP #PROC_FLAGS::ACCUM8
    case 0xC4BCCB: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap-jp.asm:63 LDA #0
    case 0xC4BCCD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x002200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap-jp.asm:64 JSL PREPARE_VRAM_COPY
    case 0xC4BCCF: {
        Instruction step(cpu, 0x22, 0xC08616u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap-jp.asm:64 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC4BCCD.
    case 0xC4BCD0: {
        Instruction step(cpu, 0x16, 0x000086u, 2u, AddressMode::DirectPageIndexedX);
        step.shift_left();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap-jp.asm:64 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC4BCD0.
    case 0xC4BCD2: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000A5u : 0x0014A5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap-jp.asm:66 LDA @LOCAL02
    case 0xC4BCD3: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap-jp.asm:66 LDA @LOCAL02
    // Overlapping static entry reached from 0xC4BCD2.
    case 0xC4BCD4: {
        Instruction step(cpu, 0x14, 0x0000C9u, 2u, AddressMode::DirectPage);
        step.reset_tested_bits();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap-jp.asm:67 CMP #31
    case 0xC4BCD5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00001Fu : 0x00001Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap-jp.asm:67 CMP #31
    // Overlapping static entry reached from 0xC4BCD4.
    case 0xC4BCD6: {
        Instruction step(cpu, 0x1F, 0x0AF000u, 4u, AddressMode::LongIndexedX);
        step.or_accumulator();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap-jp.asm:67 CMP #31
    // Overlapping static entry reached from 0xC4BCD5.
    case 0xC4BCD7: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap-jp.asm:68 BEQ @UNKNOWN0
    case 0xC4BCD8: {
        Instruction step(cpu, 0xF0, 0x00000Au, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap-jp.asm:69 LDA @VIRTUAL02
    case 0xC4BCDA: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap-jp.asm:70 CLC
    case 0xC4BCDC: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap-jp.asm:71 ADC #32
    case 0xC4BCDD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap-jp.asm:71 ADC #32
    // Overlapping static entry reached from 0xC4BCDD.
    case 0xC4BCDF: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap-jp.asm:72 STA @LOCAL01
    case 0xC4BCE0: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap-jp.asm:73 BRA @UNKNOWN1
    case 0xC4BCE2: {
        Instruction step(cpu, 0x80, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap-jp.asm:75 LDA @VIRTUAL02
    case 0xC4BCE4: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap-jp.asm:76 SEC
    case 0xC4BCE6: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap-jp.asm:77 SBC #$03E0
    case 0xC4BCE7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x0000E0u : 0x0003E0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap-jp.asm:77 SBC #$03E0
    // Overlapping static entry reached from 0xC4BCE7.
    case 0xC4BCE9: {
        Instruction step(cpu, 0x03, 0x000085u, 2u, AddressMode::StackRelative);
        step.or_accumulator();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap-jp.asm:78 STA @LOCAL01
    case 0xC4BCEA: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap-jp.asm:78 STA @LOCAL01
    // Overlapping static entry reached from 0xC4BCE9.
    case 0xC4BCEB: {
        Instruction step(cpu, 0x12, 0x0000A9u, 2u, AddressMode::DirectPageIndirect);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/copy_cast_name_tilemap-jp.asm:80 LOADPTR BUFFER + $4000, @VIRTUAL06
    case 0xC4BCEC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x004000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/copy_cast_name_tilemap-jp.asm:80 LOADPTR BUFFER + $4000, @VIRTUAL06
    // Overlapping static entry reached from 0xC4BCEB.
    case 0xC4BCED: {
        Instruction step(cpu, 0x00, 0x000040u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/copy_cast_name_tilemap-jp.asm:80 LOADPTR BUFFER + $4000, @VIRTUAL06
    // Overlapping static entry reached from 0xC4BCEC.
    case 0xC4BCEE: {
        Instruction step(cpu, 0x40, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_interrupt();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/copy_cast_name_tilemap-jp.asm:80 LOADPTR BUFFER + $4000, @VIRTUAL06
    case 0xC4BCEF: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/copy_cast_name_tilemap-jp.asm:80 LOADPTR BUFFER + $4000, @VIRTUAL06
    case 0xC4BCF1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Fu : 0x00007Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/copy_cast_name_tilemap-jp.asm:80 LOADPTR BUFFER + $4000, @VIRTUAL06
    // Overlapping static entry reached from 0xC4BCF1.
    case 0xC4BCF3: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/ending/copy_cast_name_tilemap-jp.asm:80 LOADPTR BUFFER + $4000, @VIRTUAL06
    case 0xC4BCF4: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap-jp.asm:81 LDA @LOCAL03
    case 0xC4BCF6: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap-jp.asm:82 ASL
    case 0xC4BCF8: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap-jp.asm:83 CLC
    case 0xC4BCF9: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap-jp.asm:84 ADC #64
    case 0xC4BCFA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000040u : 0x000040u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap-jp.asm:84 ADC #64
    // Overlapping static entry reached from 0xC4BCFA.
    case 0xC4BCFC: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap-jp.asm:85 CLC
    case 0xC4BCFD: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap-jp.asm:86 ADC @VIRTUAL06
    case 0xC4BCFE: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap-jp.asm:87 STA @VIRTUAL06
    case 0xC4BD00: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap-jp.asm:88 STA @LOCAL00
    case 0xC4BD02: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap-jp.asm:89 LDA @VIRTUAL06+2
    case 0xC4BD04: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap-jp.asm:90 STA @LOCAL00+2
    case 0xC4BD06: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap-jp.asm:91 LDA @LOCAL01
    case 0xC4BD08: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap-jp.asm:92 TAY
    case 0xC4BD0A: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap-jp.asm:93 LDA @VIRTUAL04
    case 0xC4BD0B: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap-jp.asm:94 ASL
    case 0xC4BD0D: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap-jp.asm:95 TAX
    case 0xC4BD0E: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap-jp.asm:96 SEP #PROC_FLAGS::ACCUM8
    case 0xC4BD0F: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap-jp.asm:97 LDA #0
    case 0xC4BD11: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x002200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap-jp.asm:98 JSL PREPARE_VRAM_COPY
    case 0xC4BD13: {
        Instruction step(cpu, 0x22, 0xC08616u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap-jp.asm:98 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC4BD11.
    case 0xC4BD14: {
        Instruction step(cpu, 0x16, 0x000086u, 2u, AddressMode::DirectPageIndexedX);
        step.shift_left();
        return step.finish();
    }
    // src/ending/copy_cast_name_tilemap-jp.asm:98 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC4BD14.
    case 0xC4BD16: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x00002Bu : 0x006B2Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/ending/copy_cast_name_tilemap-jp.asm:99 END_C_FUNCTION
    case 0xC4BD17: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/ending/copy_cast_name_tilemap-jp.asm:99 END_C_FUNCTION
    case 0xC4BD18: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
