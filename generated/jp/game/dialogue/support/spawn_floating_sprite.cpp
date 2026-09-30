// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/text/spawn_floating_sprite.asm
bool resume_text_spawn_floating_sprite(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/spawn_floating_sprite.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4883D: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/spawn_floating_sprite.asm:11 END_STACK_VARS
    case 0xC4883F: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/spawn_floating_sprite.asm:11 END_STACK_VARS
    case 0xC48840: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/spawn_floating_sprite.asm:11 END_STACK_VARS
    case 0xC48841: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/spawn_floating_sprite.asm:11 END_STACK_VARS
    case 0xC48842: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EAu : 0x00FFEAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/spawn_floating_sprite.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC48842.
    case 0xC48844: {
        Instruction step(cpu, 0xFF, 0x9B685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/spawn_floating_sprite.asm:11 END_STACK_VARS
    case 0xC48845: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/spawn_floating_sprite.asm:11 END_STACK_VARS
    case 0xC48846: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:12 TXY
    case 0xC48847: {
        Instruction step(cpu, 0x9B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_y();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:13 STA @VIRTUAL02
    case 0xC48848: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:14 CMP #.LOWORD(-1)
    case 0xC4884A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:14 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC4884A.
    case 0xC4884C: {
        Instruction step(cpu, 0xFF, 0x4C03D0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/spawn_floating_sprite.asm:15 BEQL @UNKNOWN6
    case 0xC4884D: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/spawn_floating_sprite.asm:15 BEQL @UNKNOWN6
    case 0xC4884F: {
        Instruction step(cpu, 0x4C, 0x008929u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/spawn_floating_sprite.asm:15 BEQL @UNKNOWN6
    // Overlapping static entry reached from 0xC4884C.
    case 0xC48850: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000089u : 0x00A589u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:16 LDA @VIRTUAL02
    case 0xC48852: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:16 LDA @VIRTUAL02
    // Overlapping static entry reached from 0xC48850.
    case 0xC48853: {
        Instruction step(cpu, 0x02, 0x00000Au, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:17 ASL
    case 0xC48854: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:18 TAX
    case 0xC48855: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:19 LDA ENTITY_SCRIPT_TABLE,X
    case 0xC48856: {
        Instruction step(cpu, 0xBD, 0x000A58u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:20 CMP #.LOWORD(-1)
    case 0xC48859: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:20 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC48859.
    case 0xC4885B: {
        Instruction step(cpu, 0xFF, 0x4C03D0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/spawn_floating_sprite.asm:21 BEQL @UNKNOWN6
    case 0xC4885C: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/spawn_floating_sprite.asm:21 BEQL @UNKNOWN6
    case 0xC4885E: {
        Instruction step(cpu, 0x4C, 0x008929u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/spawn_floating_sprite.asm:21 BEQL @UNKNOWN6
    // Overlapping static entry reached from 0xC4885B.
    case 0xC4885F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000089u : 0x00BD89u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:22 LDA ENTITY_SIZES,X
    case 0xC48861: {
        Instruction step(cpu, 0xBD, 0x002F6Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:22 LDA ENTITY_SIZES,X
    // Overlapping static entry reached from 0xC4885F.
    case 0xC48862: {
        Instruction step(cpu, 0x6C, 0x00852Fu, 3u, AddressMode::AbsoluteIndirect);
        step.jump();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:23 STA @LOCAL03
    case 0xC48864: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/spawn_floating_sprite.asm:24 LOADPTR FLOATING_SPRITE_TABLE, @VIRTUAL06
    case 0xC48866: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000034u : 0x000D34u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/spawn_floating_sprite.asm:24 LOADPTR FLOATING_SPRITE_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC48866.
    case 0xC48868: {
        Instruction step(cpu, 0x0D, 0x000685u, 3u, AddressMode::Absolute);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/text/spawn_floating_sprite.asm:24 LOADPTR FLOATING_SPRITE_TABLE, @VIRTUAL06
    case 0xC48869: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/spawn_floating_sprite.asm:24 LOADPTR FLOATING_SPRITE_TABLE, @VIRTUAL06
    case 0xC4886B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C4u : 0x0000C4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/spawn_floating_sprite.asm:24 LOADPTR FLOATING_SPRITE_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC4886B.
    case 0xC4886D: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/text/spawn_floating_sprite.asm:24 LOADPTR FLOATING_SPRITE_TABLE, @VIRTUAL06
    case 0xC4886E: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:25 TYA
    case 0xC48870: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:529 STA scratch
    // Macro caller: src/text/spawn_floating_sprite.asm:26 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(floating_sprite)
    case 0xC48871: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:530 ASL
    // Macro caller: src/text/spawn_floating_sprite.asm:26 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(floating_sprite)
    case 0xC48873: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:531 ASL
    // Macro caller: src/text/spawn_floating_sprite.asm:26 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(floating_sprite)
    case 0xC48874: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:532 ADC scratch
    // Macro caller: src/text/spawn_floating_sprite.asm:26 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(floating_sprite)
    case 0xC48875: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:27 CLC
    case 0xC48877: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:28 ADC @VIRTUAL06
    case 0xC48878: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:29 STA @VIRTUAL06
    case 0xC4887A: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:30 LDA ENTITY_ABS_X_TABLE,X
    case 0xC4887C: {
        Instruction step(cpu, 0xBD, 0x000B84u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:31 STA ACTIVE_MANPU_X
    case 0xC4887F: {
        Instruction step(cpu, 0x8D, 0x00B5CDu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:32 LDA ENTITY_ABS_Y_TABLE,X
    case 0xC48882: {
        Instruction step(cpu, 0xBD, 0x000BC0u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:33 STA ACTIVE_MANPU_Y
    case 0xC48885: {
        Instruction step(cpu, 0x8D, 0x00B5CFu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:34 LDA @LOCAL03
    case 0xC48888: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:35 TAX
    case 0xC4888A: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:36 SEP #PROC_FLAGS::ACCUM8
    case 0xC4888B: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:37 LDY #floating_sprite::unknown2
    case 0xC4888D: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:37 LDY #floating_sprite::unknown2
    // Overlapping static entry reached from 0xC4888D.
    case 0xC4888F: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:38 LDA [@VIRTUAL06],Y
    case 0xC48890: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:39 REP #PROC_FLAGS::ACCUM8
    case 0xC48892: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:40 AND #$00FF
    case 0xC48894: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:40 AND #$00FF
    // Overlapping static entry reached from 0xC48894.
    case 0xC48896: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:41 JSR UNKNOWN_C4B329
    case 0xC48897: {
        Instruction step(cpu, 0x20, 0x008796u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:42 SEP #PROC_FLAGS::ACCUM8
    case 0xC4889A: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:43 LDY #floating_sprite::unknown3
    case 0xC4889C: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:43 LDY #floating_sprite::unknown3
    // Overlapping static entry reached from 0xC4889C.
    case 0xC4889E: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:44 LDA [@VIRTUAL06],Y
    case 0xC4889F: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:45 REP #PROC_FLAGS::ACCUM8
    case 0xC488A1: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:46 AND #$00FF
    case 0xC488A3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:46 AND #$00FF
    // Overlapping static entry reached from 0xC488A3.
    case 0xC488A5: {
        Instruction step(cpu, 0x00, 0x000029u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:47 AND #$0080
    case 0xC488A6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000080u : 0x000080u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:47 AND #$0080
    // Overlapping static entry reached from 0xC488A6.
    case 0xC488A8: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:48 BEQ @UNKNOWN2
    case 0xC488A9: {
        Instruction step(cpu, 0xF0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:49 LDX #$FF00
    case 0xC488AB: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x00FF00u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:49 LDX #$FF00
    // Overlapping static entry reached from 0xC488AB.
    case 0xC488AD: {
        Instruction step(cpu, 0xFF, 0xA20380u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:50 BRA @UNKNOWN3
    case 0xC488AE: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:52 LDX #0
    case 0xC488B0: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:52 LDX #0
    // Overlapping static entry reached from 0xC488AD.
    case 0xC488B1: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:52 LDX #0
    // Overlapping static entry reached from 0xC488B0.
    case 0xC488B2: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:54 STX @VIRTUAL04
    case 0xC488B3: {
        Instruction step(cpu, 0x86, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:55 SEP #PROC_FLAGS::ACCUM8
    case 0xC488B5: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:56 LDY #floating_sprite::unknown3
    case 0xC488B7: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:56 LDY #floating_sprite::unknown3
    // Overlapping static entry reached from 0xC488B7.
    case 0xC488B9: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:57 LDA [@VIRTUAL06],Y
    case 0xC488BA: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:58 REP #PROC_FLAGS::ACCUM8
    case 0xC488BC: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:59 AND #$00FF
    case 0xC488BE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:59 AND #$00FF
    // Overlapping static entry reached from 0xC488BE.
    case 0xC488C0: {
        Instruction step(cpu, 0x00, 0x000005u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:60 ORA @VIRTUAL04
    case 0xC488C1: {
        Instruction step(cpu, 0x05, 0x000004u, 2u, AddressMode::DirectPage);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:61 CLC
    case 0xC488C3: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:62 ADC ACTIVE_MANPU_X
    case 0xC488C4: {
        Instruction step(cpu, 0x6D, 0x00B5CDu, 3u, AddressMode::Absolute);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:63 STA ACTIVE_MANPU_X
    case 0xC488C7: {
        Instruction step(cpu, 0x8D, 0x00B5CDu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:64 SEP #PROC_FLAGS::ACCUM8
    case 0xC488CA: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:65 LDY #floating_sprite::unknown4
    case 0xC488CC: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:65 LDY #floating_sprite::unknown4
    // Overlapping static entry reached from 0xC488CC.
    case 0xC488CE: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:66 LDA [@VIRTUAL06],Y
    case 0xC488CF: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:67 REP #PROC_FLAGS::ACCUM8
    case 0xC488D1: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:68 AND #$00FF
    case 0xC488D3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:68 AND #$00FF
    // Overlapping static entry reached from 0xC488D3.
    case 0xC488D5: {
        Instruction step(cpu, 0x00, 0x000029u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:69 AND #$0080
    case 0xC488D6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000080u : 0x000080u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:69 AND #$0080
    // Overlapping static entry reached from 0xC488D6.
    case 0xC488D8: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:70 BEQ @UNKNOWN4
    case 0xC488D9: {
        Instruction step(cpu, 0xF0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:71 LDX #$FF00
    case 0xC488DB: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x00FF00u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:71 LDX #$FF00
    // Overlapping static entry reached from 0xC488DB.
    case 0xC488DD: {
        Instruction step(cpu, 0xFF, 0xA20380u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:72 BRA @UNKNOWN5
    case 0xC488DE: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:74 LDX #0
    case 0xC488E0: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:74 LDX #0
    // Overlapping static entry reached from 0xC488DD.
    case 0xC488E1: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:74 LDX #0
    // Overlapping static entry reached from 0xC488E0.
    case 0xC488E2: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:76 STX @VIRTUAL04
    case 0xC488E3: {
        Instruction step(cpu, 0x86, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:77 SEP #PROC_FLAGS::ACCUM8
    case 0xC488E5: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:78 LDY #floating_sprite::unknown4
    case 0xC488E7: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:78 LDY #floating_sprite::unknown4
    // Overlapping static entry reached from 0xC488E7.
    case 0xC488E9: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:79 LDA [@VIRTUAL06],Y
    case 0xC488EA: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:80 REP #PROC_FLAGS::ACCUM8
    case 0xC488EC: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:81 AND #$00FF
    case 0xC488EE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:81 AND #$00FF
    // Overlapping static entry reached from 0xC488EE.
    case 0xC488F0: {
        Instruction step(cpu, 0x00, 0x000005u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:82 ORA @VIRTUAL04
    case 0xC488F1: {
        Instruction step(cpu, 0x05, 0x000004u, 2u, AddressMode::DirectPage);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:83 CLC
    case 0xC488F3: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:84 ADC ACTIVE_MANPU_Y
    case 0xC488F4: {
        Instruction step(cpu, 0x6D, 0x00B5CFu, 3u, AddressMode::Absolute);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:85 STA @LOCAL02
    case 0xC488F7: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:86 STA ACTIVE_MANPU_Y
    case 0xC488F9: {
        Instruction step(cpu, 0x8D, 0x00B5CFu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:87 LDA ACTIVE_MANPU_X
    case 0xC488FC: {
        Instruction step(cpu, 0xAD, 0x00B5CDu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:88 STA @LOCAL00
    case 0xC488FF: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:89 LDA @LOCAL02
    case 0xC48901: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:90 STA @LOCAL01
    case 0xC48903: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:91 LDY #.LOWORD(-1)
    case 0xC48905: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:91 LDY #.LOWORD(-1)
    // Overlapping static entry reached from 0xC48905.
    case 0xC48907: {
        Instruction step(cpu, 0xFF, 0x0311A2u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:92 LDX #EVENT_SCRIPT::EVENT_785
    case 0xC48908: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000011u : 0x000311u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:92 LDX #EVENT_SCRIPT::EVENT_785
    // Overlapping static entry reached from 0xC48908.
    case 0xC4890A: {
        Instruction step(cpu, 0x03, 0x0000A7u, 2u, AddressMode::StackRelative);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:93 LDA [@VIRTUAL06] ;floating_sprite::sprite
    case 0xC4890B: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:93 LDA [@VIRTUAL06] ;floating_sprite::sprite
    // Overlapping static entry reached from 0xC4890A.
    case 0xC4890C: {
        Instruction step(cpu, 0x06, 0x000022u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:94 JSL CREATE_ENTITY
    case 0xC4890D: {
        Instruction step(cpu, 0x22, 0xC01E5Fu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:94 JSL CREATE_ENTITY
    // Overlapping static entry reached from 0xC4890C.
    case 0xC4890E: {
        Instruction step(cpu, 0x5F, 0x0AC01Eu, 4u, AddressMode::LongIndexedX);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:95 ASL
    case 0xC48911: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:96 TAX
    case 0xC48912: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:97 STX @LOCAL02
    case 0xC48913: {
        Instruction step(cpu, 0x86, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:98 LDA @VIRTUAL02
    case 0xC48915: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:99 ORA #$C000
    case 0xC48917: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x09, narrow ? 0x000000u : 0x00C000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:99 ORA #$C000
    // Overlapping static entry reached from 0xC48917.
    case 0xC48919: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x00009Du : 0x00349Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:100 STA ENTITY_DRAW_PRIORITY,X
    case 0xC4891A: {
        Instruction step(cpu, 0x9D, 0x001034u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:100 STA ENTITY_DRAW_PRIORITY,X
    // Overlapping static entry reached from 0xC48919.
    case 0xC4891B: {
        Instruction step(cpu, 0x34, 0x000010u, 2u, AddressMode::DirectPageIndexedX);
        step.test_bits();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:100 STA ENTITY_DRAW_PRIORITY,X
    // Overlapping static entry reached from 0xC48919.
    case 0xC4891C: {
        Instruction step(cpu, 0x10, 0x0000A5u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:101 LDA @VIRTUAL02
    case 0xC4891D: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:101 LDA @VIRTUAL02
    // Overlapping static entry reached from 0xC4891C.
    case 0xC4891E: {
        Instruction step(cpu, 0x02, 0x00000Au, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:102 ASL
    case 0xC4891F: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:103 TAX
    case 0xC48920: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:104 LDA ENTITY_SURFACE_FLAGS,X
    case 0xC48921: {
        Instruction step(cpu, 0xBD, 0x002FA8u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:105 LDX @LOCAL02
    case 0xC48924: {
        Instruction step(cpu, 0xA6, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:106 STA ENTITY_SURFACE_FLAGS,X
    case 0xC48926: {
        Instruction step(cpu, 0x9D, 0x002FA8u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/spawn_floating_sprite.asm:108 END_C_FUNCTION
    case 0xC48929: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/text/spawn_floating_sprite.asm:108 END_C_FUNCTION
    case 0xC4892A: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
