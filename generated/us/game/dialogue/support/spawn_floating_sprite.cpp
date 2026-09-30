// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/text/spawn_floating_sprite.asm
bool resume_text_spawn_floating_sprite(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/spawn_floating_sprite.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4B3D0: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/spawn_floating_sprite.asm:11 END_STACK_VARS
    case 0xC4B3D2: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/spawn_floating_sprite.asm:11 END_STACK_VARS
    case 0xC4B3D3: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/spawn_floating_sprite.asm:11 END_STACK_VARS
    case 0xC4B3D4: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/spawn_floating_sprite.asm:11 END_STACK_VARS
    case 0xC4B3D5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EAu : 0x00FFEAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/spawn_floating_sprite.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC4B3D5.
    case 0xC4B3D7: {
        Instruction step(cpu, 0xFF, 0x9B685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/spawn_floating_sprite.asm:11 END_STACK_VARS
    case 0xC4B3D8: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/spawn_floating_sprite.asm:11 END_STACK_VARS
    case 0xC4B3D9: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:12 TXY
    case 0xC4B3DA: {
        Instruction step(cpu, 0x9B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_y();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:13 STA @VIRTUAL02
    case 0xC4B3DB: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:14 CMP #.LOWORD(-1)
    case 0xC4B3DD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:14 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC4B3DD.
    case 0xC4B3DF: {
        Instruction step(cpu, 0xFF, 0x4C03D0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/spawn_floating_sprite.asm:15 BEQL @UNKNOWN6
    case 0xC4B3E0: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/spawn_floating_sprite.asm:15 BEQL @UNKNOWN6
    case 0xC4B3E2: {
        Instruction step(cpu, 0x4C, 0x00B4BCu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/spawn_floating_sprite.asm:15 BEQL @UNKNOWN6
    // Overlapping static entry reached from 0xC4B3DF.
    case 0xC4B3E3: {
        Instruction step(cpu, 0xBC, 0x00A5B4u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_y();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:16 LDA @VIRTUAL02
    case 0xC4B3E5: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:16 LDA @VIRTUAL02
    // Overlapping static entry reached from 0xC4B3E3.
    case 0xC4B3E6: {
        Instruction step(cpu, 0x02, 0x00000Au, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:17 ASL
    case 0xC4B3E7: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:18 TAX
    case 0xC4B3E8: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:19 LDA ENTITY_SCRIPT_TABLE,X
    case 0xC4B3E9: {
        Instruction step(cpu, 0xBD, 0x000A62u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:20 CMP #.LOWORD(-1)
    case 0xC4B3EC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:20 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC4B3EC.
    case 0xC4B3EE: {
        Instruction step(cpu, 0xFF, 0x4C03D0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/spawn_floating_sprite.asm:21 BEQL @UNKNOWN6
    case 0xC4B3EF: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/spawn_floating_sprite.asm:21 BEQL @UNKNOWN6
    case 0xC4B3F1: {
        Instruction step(cpu, 0x4C, 0x00B4BCu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/spawn_floating_sprite.asm:21 BEQL @UNKNOWN6
    // Overlapping static entry reached from 0xC4B3EE.
    case 0xC4B3F2: {
        Instruction step(cpu, 0xBC, 0x00BDB4u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_y();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:22 LDA ENTITY_SIZES,X
    case 0xC4B3F4: {
        Instruction step(cpu, 0xBD, 0x002B6Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:22 LDA ENTITY_SIZES,X
    // Overlapping static entry reached from 0xC4B3F2.
    case 0xC4B3F5: {
        Instruction step(cpu, 0x6E, 0x00852Bu, 3u, AddressMode::Absolute);
        step.rotate_right();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:23 STA @LOCAL03
    case 0xC4B3F7: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:23 STA @LOCAL03
    // Overlapping static entry reached from 0xC4B3F5.
    case 0xC4B3F8: {
        Instruction step(cpu, 0x14, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.reset_tested_bits();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/spawn_floating_sprite.asm:24 LOADPTR FLOATING_SPRITE_TABLE, @VIRTUAL06
    case 0xC4B3F9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E8u : 0x000DE8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/spawn_floating_sprite.asm:24 LOADPTR FLOATING_SPRITE_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC4B3F8.
    case 0xC4B3FA: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/spawn_floating_sprite.asm:24 LOADPTR FLOATING_SPRITE_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC4B3F9.
    case 0xC4B3FB: {
        Instruction step(cpu, 0x0D, 0x000685u, 3u, AddressMode::Absolute);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/text/spawn_floating_sprite.asm:24 LOADPTR FLOATING_SPRITE_TABLE, @VIRTUAL06
    case 0xC4B3FC: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/spawn_floating_sprite.asm:24 LOADPTR FLOATING_SPRITE_TABLE, @VIRTUAL06
    case 0xC4B3FE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C4u : 0x0000C4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/spawn_floating_sprite.asm:24 LOADPTR FLOATING_SPRITE_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC4B3FE.
    case 0xC4B400: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/text/spawn_floating_sprite.asm:24 LOADPTR FLOATING_SPRITE_TABLE, @VIRTUAL06
    case 0xC4B401: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:25 TYA
    case 0xC4B403: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:529 STA scratch
    // Macro caller: src/text/spawn_floating_sprite.asm:26 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(floating_sprite)
    case 0xC4B404: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:530 ASL
    // Macro caller: src/text/spawn_floating_sprite.asm:26 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(floating_sprite)
    case 0xC4B406: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:531 ASL
    // Macro caller: src/text/spawn_floating_sprite.asm:26 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(floating_sprite)
    case 0xC4B407: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:532 ADC scratch
    // Macro caller: src/text/spawn_floating_sprite.asm:26 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(floating_sprite)
    case 0xC4B408: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:27 CLC
    case 0xC4B40A: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:28 ADC @VIRTUAL06
    case 0xC4B40B: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:29 STA @VIRTUAL06
    case 0xC4B40D: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:30 LDA ENTITY_ABS_X_TABLE,X
    case 0xC4B40F: {
        Instruction step(cpu, 0xBD, 0x000B8Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:31 STA ACTIVE_MANPU_X
    case 0xC4B412: {
        Instruction step(cpu, 0x8D, 0x00B3F8u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:32 LDA ENTITY_ABS_Y_TABLE,X
    case 0xC4B415: {
        Instruction step(cpu, 0xBD, 0x000BCAu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:33 STA ACTIVE_MANPU_Y
    case 0xC4B418: {
        Instruction step(cpu, 0x8D, 0x00B3FAu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:34 LDA @LOCAL03
    case 0xC4B41B: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:35 TAX
    case 0xC4B41D: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:36 SEP #PROC_FLAGS::ACCUM8
    case 0xC4B41E: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:37 LDY #floating_sprite::unknown2
    case 0xC4B420: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:37 LDY #floating_sprite::unknown2
    // Overlapping static entry reached from 0xC4B420.
    case 0xC4B422: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:38 LDA [@VIRTUAL06],Y
    case 0xC4B423: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:39 REP #PROC_FLAGS::ACCUM8
    case 0xC4B425: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:40 AND #$00FF
    case 0xC4B427: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:40 AND #$00FF
    // Overlapping static entry reached from 0xC4B427.
    case 0xC4B429: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:41 JSR UNKNOWN_C4B329
    case 0xC4B42A: {
        Instruction step(cpu, 0x20, 0x00B329u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:42 SEP #PROC_FLAGS::ACCUM8
    case 0xC4B42D: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:43 LDY #floating_sprite::unknown3
    case 0xC4B42F: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:43 LDY #floating_sprite::unknown3
    // Overlapping static entry reached from 0xC4B42F.
    case 0xC4B431: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:44 LDA [@VIRTUAL06],Y
    case 0xC4B432: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:45 REP #PROC_FLAGS::ACCUM8
    case 0xC4B434: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:46 AND #$00FF
    case 0xC4B436: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:46 AND #$00FF
    // Overlapping static entry reached from 0xC4B436.
    case 0xC4B438: {
        Instruction step(cpu, 0x00, 0x000029u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:47 AND #$0080
    case 0xC4B439: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000080u : 0x000080u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:47 AND #$0080
    // Overlapping static entry reached from 0xC4B439.
    case 0xC4B43B: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:48 BEQ @UNKNOWN2
    case 0xC4B43C: {
        Instruction step(cpu, 0xF0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:49 LDX #$FF00
    case 0xC4B43E: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x00FF00u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:49 LDX #$FF00
    // Overlapping static entry reached from 0xC4B43E.
    case 0xC4B440: {
        Instruction step(cpu, 0xFF, 0xA20380u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:50 BRA @UNKNOWN3
    case 0xC4B441: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:52 LDX #0
    case 0xC4B443: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:52 LDX #0
    // Overlapping static entry reached from 0xC4B440.
    case 0xC4B444: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:52 LDX #0
    // Overlapping static entry reached from 0xC4B443.
    case 0xC4B445: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:54 STX @VIRTUAL04
    case 0xC4B446: {
        Instruction step(cpu, 0x86, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:55 SEP #PROC_FLAGS::ACCUM8
    case 0xC4B448: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:56 LDY #floating_sprite::unknown3
    case 0xC4B44A: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:56 LDY #floating_sprite::unknown3
    // Overlapping static entry reached from 0xC4B44A.
    case 0xC4B44C: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:57 LDA [@VIRTUAL06],Y
    case 0xC4B44D: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:58 REP #PROC_FLAGS::ACCUM8
    case 0xC4B44F: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:59 AND #$00FF
    case 0xC4B451: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:59 AND #$00FF
    // Overlapping static entry reached from 0xC4B451.
    case 0xC4B453: {
        Instruction step(cpu, 0x00, 0x000005u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:60 ORA @VIRTUAL04
    case 0xC4B454: {
        Instruction step(cpu, 0x05, 0x000004u, 2u, AddressMode::DirectPage);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:61 CLC
    case 0xC4B456: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:62 ADC ACTIVE_MANPU_X
    case 0xC4B457: {
        Instruction step(cpu, 0x6D, 0x00B3F8u, 3u, AddressMode::Absolute);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:63 STA ACTIVE_MANPU_X
    case 0xC4B45A: {
        Instruction step(cpu, 0x8D, 0x00B3F8u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:64 SEP #PROC_FLAGS::ACCUM8
    case 0xC4B45D: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:65 LDY #floating_sprite::unknown4
    case 0xC4B45F: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:65 LDY #floating_sprite::unknown4
    // Overlapping static entry reached from 0xC4B45F.
    case 0xC4B461: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:66 LDA [@VIRTUAL06],Y
    case 0xC4B462: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:67 REP #PROC_FLAGS::ACCUM8
    case 0xC4B464: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:68 AND #$00FF
    case 0xC4B466: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:68 AND #$00FF
    // Overlapping static entry reached from 0xC4B466.
    case 0xC4B468: {
        Instruction step(cpu, 0x00, 0x000029u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:69 AND #$0080
    case 0xC4B469: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000080u : 0x000080u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:69 AND #$0080
    // Overlapping static entry reached from 0xC4B469.
    case 0xC4B46B: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:70 BEQ @UNKNOWN4
    case 0xC4B46C: {
        Instruction step(cpu, 0xF0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:71 LDX #$FF00
    case 0xC4B46E: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x00FF00u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:71 LDX #$FF00
    // Overlapping static entry reached from 0xC4B46E.
    case 0xC4B470: {
        Instruction step(cpu, 0xFF, 0xA20380u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:72 BRA @UNKNOWN5
    case 0xC4B471: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:74 LDX #0
    case 0xC4B473: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:74 LDX #0
    // Overlapping static entry reached from 0xC4B470.
    case 0xC4B474: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:74 LDX #0
    // Overlapping static entry reached from 0xC4B473.
    case 0xC4B475: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:76 STX @VIRTUAL04
    case 0xC4B476: {
        Instruction step(cpu, 0x86, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:77 SEP #PROC_FLAGS::ACCUM8
    case 0xC4B478: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:78 LDY #floating_sprite::unknown4
    case 0xC4B47A: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:78 LDY #floating_sprite::unknown4
    // Overlapping static entry reached from 0xC4B47A.
    case 0xC4B47C: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:79 LDA [@VIRTUAL06],Y
    case 0xC4B47D: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:80 REP #PROC_FLAGS::ACCUM8
    case 0xC4B47F: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:81 AND #$00FF
    case 0xC4B481: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:81 AND #$00FF
    // Overlapping static entry reached from 0xC4B481.
    case 0xC4B483: {
        Instruction step(cpu, 0x00, 0x000005u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:82 ORA @VIRTUAL04
    case 0xC4B484: {
        Instruction step(cpu, 0x05, 0x000004u, 2u, AddressMode::DirectPage);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:83 CLC
    case 0xC4B486: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:84 ADC ACTIVE_MANPU_Y
    case 0xC4B487: {
        Instruction step(cpu, 0x6D, 0x00B3FAu, 3u, AddressMode::Absolute);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:85 STA @LOCAL02
    case 0xC4B48A: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:86 STA ACTIVE_MANPU_Y
    case 0xC4B48C: {
        Instruction step(cpu, 0x8D, 0x00B3FAu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:87 LDA ACTIVE_MANPU_X
    case 0xC4B48F: {
        Instruction step(cpu, 0xAD, 0x00B3F8u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:88 STA @LOCAL00
    case 0xC4B492: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:89 LDA @LOCAL02
    case 0xC4B494: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:90 STA @LOCAL01
    case 0xC4B496: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:91 LDY #.LOWORD(-1)
    case 0xC4B498: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:91 LDY #.LOWORD(-1)
    // Overlapping static entry reached from 0xC4B498.
    case 0xC4B49A: {
        Instruction step(cpu, 0xFF, 0x0311A2u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:92 LDX #EVENT_SCRIPT::EVENT_785
    case 0xC4B49B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000011u : 0x000311u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:92 LDX #EVENT_SCRIPT::EVENT_785
    // Overlapping static entry reached from 0xC4B49B.
    case 0xC4B49D: {
        Instruction step(cpu, 0x03, 0x0000A7u, 2u, AddressMode::StackRelative);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:93 LDA [@VIRTUAL06] ;floating_sprite::sprite
    case 0xC4B49E: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:93 LDA [@VIRTUAL06] ;floating_sprite::sprite
    // Overlapping static entry reached from 0xC4B49D.
    case 0xC4B49F: {
        Instruction step(cpu, 0x06, 0x000022u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:94 JSL CREATE_ENTITY
    case 0xC4B4A0: {
        Instruction step(cpu, 0x22, 0xC01E49u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:94 JSL CREATE_ENTITY
    // Overlapping static entry reached from 0xC4B49F.
    case 0xC4B4A1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x49, narrow ? 0x00001Eu : 0x00C01Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:94 JSL CREATE_ENTITY
    // Overlapping static entry reached from 0xC4B4A1.
    case 0xC4B4A3: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x00000Au : 0x00AA0Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:95 ASL
    case 0xC4B4A4: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:96 TAX
    case 0xC4B4A5: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:97 STX @LOCAL02
    case 0xC4B4A6: {
        Instruction step(cpu, 0x86, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:98 LDA @VIRTUAL02
    case 0xC4B4A8: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:99 ORA #$C000
    case 0xC4B4AA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x09, narrow ? 0x000000u : 0x00C000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:99 ORA #$C000
    // Overlapping static entry reached from 0xC4B4AA.
    case 0xC4B4AC: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x00009Du : 0x003E9Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:100 STA ENTITY_DRAW_PRIORITY,X
    case 0xC4B4AD: {
        Instruction step(cpu, 0x9D, 0x00103Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:100 STA ENTITY_DRAW_PRIORITY,X
    // Overlapping static entry reached from 0xC4B4AC.
    case 0xC4B4AE: {
        Instruction step(cpu, 0x3E, 0x00A510u, 3u, AddressMode::AbsoluteIndexedX);
        step.rotate_left();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:100 STA ENTITY_DRAW_PRIORITY,X
    // Overlapping static entry reached from 0xC4B4AC.
    case 0xC4B4AF: {
        Instruction step(cpu, 0x10, 0x0000A5u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:101 LDA @VIRTUAL02
    case 0xC4B4B0: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:101 LDA @VIRTUAL02
    // Overlapping static entry reached from 0xC4B4AF.
    case 0xC4B4B1: {
        Instruction step(cpu, 0x02, 0x00000Au, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:102 ASL
    case 0xC4B4B2: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:103 TAX
    case 0xC4B4B3: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:104 LDA ENTITY_SURFACE_FLAGS,X
    case 0xC4B4B4: {
        Instruction step(cpu, 0xBD, 0x002BAAu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:105 LDX @LOCAL02
    case 0xC4B4B7: {
        Instruction step(cpu, 0xA6, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/spawn_floating_sprite.asm:106 STA ENTITY_SURFACE_FLAGS,X
    case 0xC4B4B9: {
        Instruction step(cpu, 0x9D, 0x002BAAu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/spawn_floating_sprite.asm:108 END_C_FUNCTION
    case 0xC4B4BC: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/text/spawn_floating_sprite.asm:108 END_C_FUNCTION
    case 0xC4B4BD: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
