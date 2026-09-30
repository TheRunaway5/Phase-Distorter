// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/ending/prepare_cast_name_tilemap-jp.asm
bool resume_ending_prepare_cast_name_tilemap_jp(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/ending/prepare_cast_name_tilemap-jp.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4BBE0: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/ending/prepare_cast_name_tilemap-jp.asm:12 END_STACK_VARS
    case 0xC4BBE2: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/ending/prepare_cast_name_tilemap-jp.asm:12 END_STACK_VARS
    case 0xC4BBE3: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/ending/prepare_cast_name_tilemap-jp.asm:12 END_STACK_VARS
    case 0xC4BBE4: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/prepare_cast_name_tilemap-jp.asm:12 END_STACK_VARS
    case 0xC4BBE5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EDu : 0x00FFEDu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/prepare_cast_name_tilemap-jp.asm:12 END_STACK_VARS
    // Overlapping static entry reached from 0xC4BBE5.
    case 0xC4BBE7: {
        Instruction step(cpu, 0xFF, 0x86685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/ending/prepare_cast_name_tilemap-jp.asm:12 END_STACK_VARS
    case 0xC4BBE8: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/ending/prepare_cast_name_tilemap-jp.asm:12 END_STACK_VARS
    case 0xC4BBE9: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/ending/prepare_cast_name_tilemap-jp.asm:13 STX @VIRTUAL02
    case 0xC4BBEA: {
        Instruction step(cpu, 0x86, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/ending/prepare_cast_name_tilemap-jp.asm:13 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC4BBE7.
    case 0xC4BBEB: {
        Instruction step(cpu, 0x02, 0x000086u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/ending/prepare_cast_name_tilemap-jp.asm:14 STX @LOCAL02
    case 0xC4BBEC: {
        Instruction step(cpu, 0x86, 0x000011u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/ending/prepare_cast_name_tilemap-jp.asm:15 STA @LOCAL01
    case 0xC4BBEE: {
        Instruction step(cpu, 0x85, 0x00000Fu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/prepare_cast_name_tilemap-jp.asm:16 MOVE_INT @PARAM02, @VIRTUAL0A
    case 0xC4BBF0: {
        Instruction step(cpu, 0xA5, 0x000021u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/prepare_cast_name_tilemap-jp.asm:16 MOVE_INT @PARAM02, @VIRTUAL0A
    case 0xC4BBF2: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/prepare_cast_name_tilemap-jp.asm:16 MOVE_INT @PARAM02, @VIRTUAL0A
    case 0xC4BBF4: {
        Instruction step(cpu, 0xA5, 0x000023u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/prepare_cast_name_tilemap-jp.asm:16 MOVE_INT @PARAM02, @VIRTUAL0A
    case 0xC4BBF6: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/prepare_cast_name_tilemap-jp.asm:17 LOADPTR BUFFER + $4000, @VIRTUAL06
    case 0xC4BBF8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x004000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/prepare_cast_name_tilemap-jp.asm:17 LOADPTR BUFFER + $4000, @VIRTUAL06
    // Overlapping static entry reached from 0xC4BBF8.
    case 0xC4BBFA: {
        Instruction step(cpu, 0x40, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_interrupt();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/prepare_cast_name_tilemap-jp.asm:17 LOADPTR BUFFER + $4000, @VIRTUAL06
    case 0xC4BBFB: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/prepare_cast_name_tilemap-jp.asm:17 LOADPTR BUFFER + $4000, @VIRTUAL06
    case 0xC4BBFD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Fu : 0x00007Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/prepare_cast_name_tilemap-jp.asm:17 LOADPTR BUFFER + $4000, @VIRTUAL06
    // Overlapping static entry reached from 0xC4BBFD.
    case 0xC4BBFF: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/ending/prepare_cast_name_tilemap-jp.asm:17 LOADPTR BUFFER + $4000, @VIRTUAL06
    case 0xC4BC00: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/prepare_cast_name_tilemap-jp.asm:18 LDA @LOCAL01
    case 0xC4BC02: {
        Instruction step(cpu, 0xA5, 0x00000Fu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/prepare_cast_name_tilemap-jp.asm:19 ASL
    case 0xC4BC04: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/prepare_cast_name_tilemap-jp.asm:20 CLC
    case 0xC4BC05: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/prepare_cast_name_tilemap-jp.asm:21 ADC @VIRTUAL06
    case 0xC4BC06: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/prepare_cast_name_tilemap-jp.asm:22 STA @VIRTUAL06
    case 0xC4BC08: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/prepare_cast_name_tilemap-jp.asm:23 LDX #0
    case 0xC4BC0A: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/ending/prepare_cast_name_tilemap-jp.asm:23 LDX #0
    // Overlapping static entry reached from 0xC4BC0A.
    case 0xC4BC0C: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/prepare_cast_name_tilemap-jp.asm:24 BRA @UNKNOWN1
    case 0xC4BC0D: {
        Instruction step(cpu, 0x80, 0x00003Du, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/ending/prepare_cast_name_tilemap-jp.asm:26 LDA @LOCAL00
    case 0xC4BC0F: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/prepare_cast_name_tilemap-jp.asm:27 AND #$00FF
    case 0xC4BC11: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/ending/prepare_cast_name_tilemap-jp.asm:27 AND #$00FF
    // Overlapping static entry reached from 0xC4BC11.
    case 0xC4BC13: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/prepare_cast_name_tilemap-jp.asm:28 STA @LOCAL01
    case 0xC4BC14: {
        Instruction step(cpu, 0x85, 0x00000Fu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/prepare_cast_name_tilemap-jp.asm:29 AND #$1C00
    case 0xC4BC16: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x001C00u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/ending/prepare_cast_name_tilemap-jp.asm:29 AND #$1C00
    // Overlapping static entry reached from 0xC4BC16.
    case 0xC4BC18: {
        Instruction step(cpu, 0x1C, 0x000485u, 3u, AddressMode::Absolute);
        step.reset_tested_bits();
        return step.finish();
    }
    // src/ending/prepare_cast_name_tilemap-jp.asm:30 STA @VIRTUAL04
    case 0xC4BC19: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/prepare_cast_name_tilemap-jp.asm:31 LDA @LOCAL01
    case 0xC4BC1B: {
        Instruction step(cpu, 0xA5, 0x00000Fu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/prepare_cast_name_tilemap-jp.asm:32 AND #$000F
    case 0xC4BC1D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x00000Fu : 0x00000Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/ending/prepare_cast_name_tilemap-jp.asm:32 AND #$000F
    // Overlapping static entry reached from 0xC4BC1D.
    case 0xC4BC1F: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/prepare_cast_name_tilemap-jp.asm:33 STA @VIRTUAL02
    case 0xC4BC20: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/prepare_cast_name_tilemap-jp.asm:34 LDA @LOCAL01
    case 0xC4BC22: {
        Instruction step(cpu, 0xA5, 0x00000Fu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/prepare_cast_name_tilemap-jp.asm:35 AND #$03F0
    case 0xC4BC24: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000F0u : 0x0003F0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/ending/prepare_cast_name_tilemap-jp.asm:35 AND #$03F0
    // Overlapping static entry reached from 0xC4BC24.
    case 0xC4BC26: {
        Instruction step(cpu, 0x03, 0x00000Au, 2u, AddressMode::StackRelative);
        step.or_accumulator();
        return step.finish();
    }
    // src/ending/prepare_cast_name_tilemap-jp.asm:36 ASL
    case 0xC4BC27: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/prepare_cast_name_tilemap-jp.asm:37 CLC
    case 0xC4BC28: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/prepare_cast_name_tilemap-jp.asm:38 ADC @VIRTUAL02
    case 0xC4BC29: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/prepare_cast_name_tilemap-jp.asm:39 CLC
    case 0xC4BC2B: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/prepare_cast_name_tilemap-jp.asm:40 ADC @VIRTUAL04
    case 0xC4BC2C: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/prepare_cast_name_tilemap-jp.asm:41 STA @LOCAL01
    case 0xC4BC2E: {
        Instruction step(cpu, 0x85, 0x00000Fu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/prepare_cast_name_tilemap-jp.asm:42 CLC
    case 0xC4BC30: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/prepare_cast_name_tilemap-jp.asm:43 ADC CAST_TILE_OFFSET
    case 0xC4BC31: {
        Instruction step(cpu, 0x6D, 0x00B6A4u, 3u, AddressMode::Absolute);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/prepare_cast_name_tilemap-jp.asm:44 STA [@VIRTUAL06]
    case 0xC4BC34: {
        Instruction step(cpu, 0x87, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/prepare_cast_name_tilemap-jp.asm:45 LDA @LOCAL01
    case 0xC4BC36: {
        Instruction step(cpu, 0xA5, 0x00000Fu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/prepare_cast_name_tilemap-jp.asm:46 CLC
    case 0xC4BC38: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/prepare_cast_name_tilemap-jp.asm:47 ADC CAST_TILE_OFFSET
    case 0xC4BC39: {
        Instruction step(cpu, 0x6D, 0x00B6A4u, 3u, AddressMode::Absolute);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/prepare_cast_name_tilemap-jp.asm:48 CLC
    case 0xC4BC3C: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/prepare_cast_name_tilemap-jp.asm:49 ADC #16
    case 0xC4BC3D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/prepare_cast_name_tilemap-jp.asm:49 ADC #16
    // Overlapping static entry reached from 0xC4BC3D.
    case 0xC4BC3F: {
        Instruction step(cpu, 0x00, 0x0000A0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/prepare_cast_name_tilemap-jp.asm:50 LDY #64
    case 0xC4BC40: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000040u : 0x000040u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/ending/prepare_cast_name_tilemap-jp.asm:50 LDY #64
    // Overlapping static entry reached from 0xC4BC40.
    case 0xC4BC42: {
        Instruction step(cpu, 0x00, 0x000097u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/prepare_cast_name_tilemap-jp.asm:51 STA [@VIRTUAL06],Y
    case 0xC4BC43: {
        Instruction step(cpu, 0x97, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/prepare_cast_name_tilemap-jp.asm:52 INC @VIRTUAL06
    case 0xC4BC45: {
        Instruction step(cpu, 0xE6, 0x000006u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/ending/prepare_cast_name_tilemap-jp.asm:53 INC @VIRTUAL06
    case 0xC4BC47: {
        Instruction step(cpu, 0xE6, 0x000006u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/ending/prepare_cast_name_tilemap-jp.asm:54 INC @VIRTUAL0A
    case 0xC4BC49: {
        Instruction step(cpu, 0xE6, 0x00000Au, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/ending/prepare_cast_name_tilemap-jp.asm:55 INX
    case 0xC4BC4B: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/ending/prepare_cast_name_tilemap-jp.asm:57 SEP #PROC_FLAGS::ACCUM8
    case 0xC4BC4C: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/ending/prepare_cast_name_tilemap-jp.asm:58 LDA [@VIRTUAL0A]
    case 0xC4BC4E: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/prepare_cast_name_tilemap-jp.asm:59 STA @LOCAL00
    case 0xC4BC50: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/prepare_cast_name_tilemap-jp.asm:60 REP #PROC_FLAGS::ACCUM8
    case 0xC4BC52: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/ending/prepare_cast_name_tilemap-jp.asm:61 AND #$00FF
    case 0xC4BC54: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/ending/prepare_cast_name_tilemap-jp.asm:61 AND #$00FF
    // Overlapping static entry reached from 0xC4BC54.
    case 0xC4BC56: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/prepare_cast_name_tilemap-jp.asm:62 BEQ @UNKNOWN2
    case 0xC4BC57: {
        Instruction step(cpu, 0xF0, 0x000009u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/ending/prepare_cast_name_tilemap-jp.asm:63 LDA @LOCAL02
    case 0xC4BC59: {
        Instruction step(cpu, 0xA5, 0x000011u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/prepare_cast_name_tilemap-jp.asm:64 STA @VIRTUAL02
    case 0xC4BC5B: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/prepare_cast_name_tilemap-jp.asm:65 TXA
    case 0xC4BC5D: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/ending/prepare_cast_name_tilemap-jp.asm:66 CMP @VIRTUAL02
    case 0xC4BC5E: {
        Instruction step(cpu, 0xC5, 0x000002u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/ending/prepare_cast_name_tilemap-jp.asm:67 BCC @UNKNOWN0
    case 0xC4BC60: {
        Instruction step(cpu, 0x90, 0x0000ADu, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/ending/prepare_cast_name_tilemap-jp.asm:69 TXA
    case 0xC4BC62: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/ending/prepare_cast_name_tilemap-jp.asm:70 END_C_FUNCTION
    case 0xC4BC63: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/ending/prepare_cast_name_tilemap-jp.asm:70 END_C_FUNCTION
    case 0xC4BC64: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
