// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/ending/prepare_cast_name_tilemap.asm
bool resume_ending_prepare_cast_name_tilemap(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/ending/prepare_cast_name_tilemap.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4EA9C: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/ending/prepare_cast_name_tilemap.asm:8 END_STACK_VARS
    case 0xC4EA9E: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/ending/prepare_cast_name_tilemap.asm:8 END_STACK_VARS
    case 0xC4EA9F: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/ending/prepare_cast_name_tilemap.asm:8 END_STACK_VARS
    case 0xC4EAA0: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/prepare_cast_name_tilemap.asm:8 END_STACK_VARS
    case 0xC4EAA1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000F0u : 0x00FFF0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/prepare_cast_name_tilemap.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC4EAA1.
    case 0xC4EAA3: {
        Instruction step(cpu, 0xFF, 0x86685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/ending/prepare_cast_name_tilemap.asm:8 END_STACK_VARS
    case 0xC4EAA4: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/ending/prepare_cast_name_tilemap.asm:8 END_STACK_VARS
    case 0xC4EAA5: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/ending/prepare_cast_name_tilemap.asm:9 STX @VIRTUAL04
    case 0xC4EAA6: {
        Instruction step(cpu, 0x86, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/ending/prepare_cast_name_tilemap.asm:9 STX @VIRTUAL04
    // Overlapping static entry reached from 0xC4EAA3.
    case 0xC4EAA7: {
        Instruction step(cpu, 0x04, 0x000085u, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/ending/prepare_cast_name_tilemap.asm:10 STA @VIRTUAL02
    case 0xC4EAA8: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/prepare_cast_name_tilemap.asm:10 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC4EAA7.
    case 0xC4EAA9: {
        Instruction step(cpu, 0x02, 0x000085u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/ending/prepare_cast_name_tilemap.asm:11 STA @LOCAL00
    case 0xC4EAAA: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/prepare_cast_name_tilemap.asm:12 LOADPTR BUFFER + $4000, @VIRTUAL06
    case 0xC4EAAC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x004000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/prepare_cast_name_tilemap.asm:12 LOADPTR BUFFER + $4000, @VIRTUAL06
    // Overlapping static entry reached from 0xC4EAAC.
    case 0xC4EAAE: {
        Instruction step(cpu, 0x40, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_interrupt();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/prepare_cast_name_tilemap.asm:12 LOADPTR BUFFER + $4000, @VIRTUAL06
    case 0xC4EAAF: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/prepare_cast_name_tilemap.asm:12 LOADPTR BUFFER + $4000, @VIRTUAL06
    case 0xC4EAB1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Fu : 0x00007Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/prepare_cast_name_tilemap.asm:12 LOADPTR BUFFER + $4000, @VIRTUAL06
    // Overlapping static entry reached from 0xC4EAB1.
    case 0xC4EAB3: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/ending/prepare_cast_name_tilemap.asm:12 LOADPTR BUFFER + $4000, @VIRTUAL06
    case 0xC4EAB4: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/prepare_cast_name_tilemap.asm:13 TYA
    case 0xC4EAB6: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/ending/prepare_cast_name_tilemap.asm:14 ASL
    case 0xC4EAB7: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/prepare_cast_name_tilemap.asm:15 CLC
    case 0xC4EAB8: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/prepare_cast_name_tilemap.asm:16 ADC @VIRTUAL06
    case 0xC4EAB9: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/prepare_cast_name_tilemap.asm:17 STA @VIRTUAL06
    case 0xC4EABB: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/prepare_cast_name_tilemap.asm:18 BRA @UNKNOWN1
    case 0xC4EABD: {
        Instruction step(cpu, 0x80, 0x000037u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/ending/prepare_cast_name_tilemap.asm:20 LDA @VIRTUAL02
    case 0xC4EABF: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/prepare_cast_name_tilemap.asm:21 AND #$000F
    case 0xC4EAC1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x00000Fu : 0x00000Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/ending/prepare_cast_name_tilemap.asm:21 AND #$000F
    // Overlapping static entry reached from 0xC4EAC1.
    case 0xC4EAC3: {
        Instruction step(cpu, 0x00, 0x000048u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/prepare_cast_name_tilemap.asm:22 PHA
    case 0xC4EAC4: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/ending/prepare_cast_name_tilemap.asm:23 LDA @VIRTUAL02
    case 0xC4EAC5: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/prepare_cast_name_tilemap.asm:24 AND #$03F0
    case 0xC4EAC7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000F0u : 0x0003F0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/ending/prepare_cast_name_tilemap.asm:24 AND #$03F0
    // Overlapping static entry reached from 0xC4EAC7.
    case 0xC4EAC9: {
        Instruction step(cpu, 0x03, 0x00000Au, 2u, AddressMode::StackRelative);
        step.or_accumulator();
        return step.finish();
    }
    // src/ending/prepare_cast_name_tilemap.asm:25 ASL
    case 0xC4EACA: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/prepare_cast_name_tilemap.asm:26 PLY
    case 0xC4EACB: {
        Instruction step(cpu, 0x7A, 0x000000u, 1u, AddressMode::Implied);
        step.pull_y();
        return step.finish();
    }
    // src/ending/prepare_cast_name_tilemap.asm:27 STY @VIRTUAL02
    case 0xC4EACC: {
        Instruction step(cpu, 0x84, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/ending/prepare_cast_name_tilemap.asm:28 CLC
    case 0xC4EACE: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/prepare_cast_name_tilemap.asm:29 ADC @VIRTUAL02
    case 0xC4EACF: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/prepare_cast_name_tilemap.asm:29 ADC @VIRTUAL02
    // Overlapping static entry reached from 0xC454BC.
    case 0xC4EAD0: {
        Instruction step(cpu, 0x02, 0x000018u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/ending/prepare_cast_name_tilemap.asm:30 CLC
    case 0xC4EAD1: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/prepare_cast_name_tilemap.asm:31 ADC CAST_TILE_OFFSET
    case 0xC4EAD2: {
        Instruction step(cpu, 0x6D, 0x00B4D1u, 3u, AddressMode::Absolute);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/ending/prepare_cast_name_tilemap.asm:32 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4EAD5: {
        Instruction step(cpu, 0xA6, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/ending/prepare_cast_name_tilemap.asm:32 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4EAD7: {
        Instruction step(cpu, 0x86, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/ending/prepare_cast_name_tilemap.asm:32 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4EAD9: {
        Instruction step(cpu, 0xA6, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/ending/prepare_cast_name_tilemap.asm:32 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4EADB: {
        Instruction step(cpu, 0x86, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/ending/prepare_cast_name_tilemap.asm:33 STA [@VIRTUAL0A]
    case 0xC4EADD: {
        Instruction step(cpu, 0x87, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/prepare_cast_name_tilemap.asm:34 CLC
    case 0xC4EADF: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/prepare_cast_name_tilemap.asm:35 ADC #16
    case 0xC4EAE0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/prepare_cast_name_tilemap.asm:35 ADC #16
    // Overlapping static entry reached from 0xC4EAE0.
    case 0xC4EAE2: {
        Instruction step(cpu, 0x00, 0x0000A0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/prepare_cast_name_tilemap.asm:36 LDY #64
    case 0xC4EAE3: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000040u : 0x000040u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/ending/prepare_cast_name_tilemap.asm:36 LDY #64
    // Overlapping static entry reached from 0xC4EAE3.
    case 0xC4EAE5: {
        Instruction step(cpu, 0x00, 0x000097u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/prepare_cast_name_tilemap.asm:37 STA [@VIRTUAL06],Y
    case 0xC4EAE6: {
        Instruction step(cpu, 0x97, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/prepare_cast_name_tilemap.asm:38 INC @VIRTUAL06
    case 0xC4EAE8: {
        Instruction step(cpu, 0xE6, 0x000006u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/ending/prepare_cast_name_tilemap.asm:39 INC @VIRTUAL06
    case 0xC4EAEA: {
        Instruction step(cpu, 0xE6, 0x000006u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/ending/prepare_cast_name_tilemap.asm:40 LDA @LOCAL00
    case 0xC4EAEC: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/prepare_cast_name_tilemap.asm:41 STA @VIRTUAL02
    case 0xC4EAEE: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/prepare_cast_name_tilemap.asm:42 INC @VIRTUAL02
    case 0xC4EAF0: {
        Instruction step(cpu, 0xE6, 0x000002u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/ending/prepare_cast_name_tilemap.asm:43 LDA @VIRTUAL02
    case 0xC4EAF2: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/prepare_cast_name_tilemap.asm:44 STA @LOCAL00
    case 0xC4EAF4: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/prepare_cast_name_tilemap.asm:46 LDX @VIRTUAL04
    case 0xC4EAF6: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/ending/prepare_cast_name_tilemap.asm:47 LDA @VIRTUAL04
    case 0xC4EAF8: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/prepare_cast_name_tilemap.asm:48 DEC
    case 0xC4EAFA: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/ending/prepare_cast_name_tilemap.asm:49 STA @VIRTUAL04
    case 0xC4EAFB: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/prepare_cast_name_tilemap.asm:50 CPX #0
    case 0xC4EAFD: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/ending/prepare_cast_name_tilemap.asm:50 CPX #0
    // Overlapping static entry reached from 0xC4EAFD.
    case 0xC4EAFF: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/prepare_cast_name_tilemap.asm:51 BNE @UNKNOWN0
    case 0xC4EB00: {
        Instruction step(cpu, 0xD0, 0x0000BDu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/ending/prepare_cast_name_tilemap.asm:52 END_C_FUNCTION
    case 0xC4EB02: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/ending/prepare_cast_name_tilemap.asm:52 END_C_FUNCTION
    case 0xC4EB03: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
