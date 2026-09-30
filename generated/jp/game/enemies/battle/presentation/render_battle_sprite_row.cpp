// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/battle/render_battle_sprite_row.asm
bool resume_battle_render_battle_sprite_row(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/render_battle_sprite_row.asm:3 BEGIN_C_FUNCTION
    case 0xC2F63D: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/render_battle_sprite_row.asm:11 END_STACK_VARS
    case 0xC2F63F: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/render_battle_sprite_row.asm:11 END_STACK_VARS
    case 0xC2F640: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/render_battle_sprite_row.asm:11 END_STACK_VARS
    case 0xC2F641: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/render_battle_sprite_row.asm:11 END_STACK_VARS
    case 0xC2F642: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000E8u : 0x00FFE8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/render_battle_sprite_row.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC2F642.
    case 0xC2F644: {
        Instruction step(cpu, 0xFF, 0x85685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/render_battle_sprite_row.asm:11 END_STACK_VARS
    case 0xC2F645: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/render_battle_sprite_row.asm:11 END_STACK_VARS
    case 0xC2F646: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:12 STA @LOCAL04
    case 0xC2F647: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:12 STA @LOCAL04
    // Overlapping static entry reached from 0xC2F644.
    case 0xC2F648: {
        Instruction step(cpu, 0x16, 0x0000A9u, 2u, AddressMode::DirectPageIndexedX);
        step.shift_left();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:13 LDA #.LOWORD(BATTLERS_TABLE) + .SIZEOF(battler) * 8
    case 0xC2F649: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00001Eu : 0x00A41Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:13 LDA #.LOWORD(BATTLERS_TABLE) + .SIZEOF(battler) * 8
    // Overlapping static entry reached from 0xC2F648.
    case 0xC2F64A: {
        Instruction step(cpu, 0x1E, 0x0085A4u, 3u, AddressMode::AbsoluteIndexedX);
        step.shift_left();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:13 LDA #.LOWORD(BATTLERS_TABLE) + .SIZEOF(battler) * 8
    // Overlapping static entry reached from 0xC2F649.
    case 0xC2F64B: {
        Instruction step(cpu, 0xA4, 0x000085u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:14 STA @VIRTUAL02
    case 0xC2F64C: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:14 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC2F64B.
    case 0xC2F64D: {
        Instruction step(cpu, 0x02, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:15 LDA #8
    case 0xC2F64E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:15 LDA #8
    // Overlapping static entry reached from 0xC2F64E.
    case 0xC2F650: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:16 STA @VIRTUAL04
    case 0xC2F651: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:17 STA @LOCAL03
    case 0xC2F653: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:18 JMP @UNKNOWN12
    case 0xC2F655: {
        Instruction step(cpu, 0x4C, 0x00F804u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:20 LDX @VIRTUAL02
    case 0xC2F658: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:21 LDA a:battler::consciousness,X
    case 0xC2F65A: {
        Instruction step(cpu, 0xBD, 0x00000Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:22 AND #$00FF
    case 0xC2F65D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:22 AND #$00FF
    // Overlapping static entry reached from 0xC2F65D.
    case 0xC2F65F: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/render_battle_sprite_row.asm:23 BEQL @UNKNOWN11
    case 0xC2F660: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/render_battle_sprite_row.asm:23 BEQL @UNKNOWN11
    case 0xC2F662: {
        Instruction step(cpu, 0x4C, 0x00F7F2u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:24 LDX @VIRTUAL02
    case 0xC2F665: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:25 LDA a:battler::afflictions + STATUS_GROUP::PERSISTENT_EASYHEAL,X
    case 0xC2F667: {
        Instruction step(cpu, 0xBD, 0x00001Du, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:26 AND #$00FF
    case 0xC2F66A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:26 AND #$00FF
    // Overlapping static entry reached from 0xC2F66A.
    case 0xC2F66C: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:27 CMP #1
    case 0xC2F66D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:27 CMP #1
    // Overlapping static entry reached from 0xC2F66D.
    case 0xC2F66F: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/render_battle_sprite_row.asm:28 BEQL @UNKNOWN11
    case 0xC2F670: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/render_battle_sprite_row.asm:28 BEQL @UNKNOWN11
    case 0xC2F672: {
        Instruction step(cpu, 0x4C, 0x00F7F2u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:29 LDX @VIRTUAL02
    case 0xC2F675: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:30 LDA a:battler::ally_or_enemy,X
    case 0xC2F677: {
        Instruction step(cpu, 0xBD, 0x00000Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:31 AND #$00FF
    case 0xC2F67A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:31 AND #$00FF
    // Overlapping static entry reached from 0xC2F67A.
    case 0xC2F67C: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:32 CMP #1
    case 0xC2F67D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:32 CMP #1
    // Overlapping static entry reached from 0xC2F67D.
    case 0xC2F67F: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/render_battle_sprite_row.asm:33 BNEL @UNKNOWN11
    case 0xC2F680: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/render_battle_sprite_row.asm:33 BNEL @UNKNOWN11
    case 0xC2F682: {
        Instruction step(cpu, 0x4C, 0x00F7F2u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:34 LDX @VIRTUAL02
    case 0xC2F685: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:35 LDA a:battler::row,X
    case 0xC2F687: {
        Instruction step(cpu, 0xBD, 0x000010u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:36 AND #$00FF
    case 0xC2F68A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:36 AND #$00FF
    // Overlapping static entry reached from 0xC2F68A.
    case 0xC2F68C: {
        Instruction step(cpu, 0x00, 0x0000C5u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:37 CMP @LOCAL04
    case 0xC2F68D: {
        Instruction step(cpu, 0xC5, 0x000016u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/render_battle_sprite_row.asm:38 BNEL @UNKNOWN11
    case 0xC2F68F: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/render_battle_sprite_row.asm:38 BNEL @UNKNOWN11
    case 0xC2F691: {
        Instruction step(cpu, 0x4C, 0x00F7F2u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:39 LDX @VIRTUAL02
    case 0xC2F694: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:40 LDA a:battler::sprite,X
    case 0xC2F696: {
        Instruction step(cpu, 0xBD, 0x000002u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/render_battle_sprite_row.asm:41 BEQL @UNKNOWN11
    case 0xC2F699: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/render_battle_sprite_row.asm:41 BEQL @UNKNOWN11
    case 0xC2F69B: {
        Instruction step(cpu, 0x4C, 0x00F7F2u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:42 LDA @VIRTUAL02
    case 0xC2F69E: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:43 CLC
    case 0xC2F6A0: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:44 ADC #battler::unknown72
    case 0xC2F6A1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000048u : 0x000048u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:44 ADC #battler::unknown72
    // Overlapping static entry reached from 0xC2F6A1.
    case 0xC2F6A3: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:45 TAX
    case 0xC2F6A4: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:46 LDA __BSS_START__,X
    case 0xC2F6A5: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:47 AND #$00FF
    case 0xC2F6A8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:47 AND #$00FF
    // Overlapping static entry reached from 0xC2EA5B.
    case 0xC2F6A9: {
        Instruction step(cpu, 0xFF, 0x1AF000u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:47 AND #$00FF
    // Overlapping static entry reached from 0xC2F6A8.
    case 0xC2F6AA: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:48 BEQ @UNKNOWN6
    case 0xC2F6AB: {
        Instruction step(cpu, 0xF0, 0x00001Au, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:49 SEP #PROC_FLAGS::ACCUM8
    case 0xC2F6AD: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:50 DEC
    case 0xC2F6AF: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:51 STA __BSS_START__,X
    case 0xC2F6B0: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:52 LDY #3
    case 0xC2F6B3: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:52 LDY #3
    // Overlapping static entry reached from 0xC2F6B3.
    case 0xC2F6B5: {
        Instruction step(cpu, 0x00, 0x0000C2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:53 REP #PROC_FLAGS::ACCUM8
    case 0xC2F6B6: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:54 AND #$00FF
    case 0xC2F6B8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:54 AND #$00FF
    // Overlapping static entry reached from 0xC2F6B8.
    case 0xC2F6BA: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:55 JSL DIVISION16
    case 0xC2F6BB: {
        Instruction step(cpu, 0x22, 0xC090C8u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:56 AND #$0001
    case 0xC2F6BF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:56 AND #$0001
    // Overlapping static entry reached from 0xC2F6BF.
    case 0xC2F6C1: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/render_battle_sprite_row.asm:57 BNEL @UNKNOWN11
    case 0xC2F6C2: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/render_battle_sprite_row.asm:57 BNEL @UNKNOWN11
    case 0xC2F6C4: {
        Instruction step(cpu, 0x4C, 0x00F7F2u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:59 LDA @VIRTUAL02
    case 0xC2F6C7: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:60 CLC
    case 0xC2F6C9: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:61 ADC #battler::unknown73
    case 0xC2F6CA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000049u : 0x000049u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:61 ADC #battler::unknown73
    // Overlapping static entry reached from 0xC2F6CA.
    case 0xC2F6CC: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:62 TAX
    case 0xC2F6CD: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:63 LDA __BSS_START__,X
    case 0xC2F6CE: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:64 AND #$00FF
    case 0xC2F6D1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:64 AND #$00FF
    // Overlapping static entry reached from 0xC2F6D1.
    case 0xC2F6D3: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:65 BEQ @UNKNOWN7
    case 0xC2F6D4: {
        Instruction step(cpu, 0xF0, 0x00004Bu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:66 SEP #PROC_FLAGS::ACCUM8
    case 0xC2F6D6: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:67 DEC
    case 0xC2F6D8: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:68 STA __BSS_START__,X
    case 0xC2F6D9: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:69 REP #PROC_FLAGS::ACCUM8
    case 0xC2F6DC: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:70 AND #$00FF
    case 0xC2F6DE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:70 AND #$00FF
    // Overlapping static entry reached from 0xC2F6DE.
    case 0xC2F6E0: {
        Instruction step(cpu, 0x00, 0x000029u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:71 AND #$0004
    case 0xC2F6E1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:71 AND #$0004
    // Overlapping static entry reached from 0xC2F6E1.
    case 0xC2F6E3: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:72 BNE @UNKNOWN7
    case 0xC2F6E4: {
        Instruction step(cpu, 0xD0, 0x00003Bu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:73 LDX @VIRTUAL02
    case 0xC2F6E6: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:74 LDA a:battler::sprite_y,X
    case 0xC2F6E8: {
        Instruction step(cpu, 0xBD, 0x000045u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:75 AND #$00FF
    case 0xC2F6EB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:75 AND #$00FF
    // Overlapping static entry reached from 0xC2F6EB.
    case 0xC2F6ED: {
        Instruction step(cpu, 0x00, 0x000038u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:76 SEC
    case 0xC2F6EE: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:77 SBC SCREEN_EFFECT_VERTICAL_OFFSET
    case 0xC2F6EF: {
        Instruction step(cpu, 0xED, 0x00AF6Du, 3u, AddressMode::Absolute);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:78 TAY
    case 0xC2F6F2: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:79 LDX @VIRTUAL02
    case 0xC2F6F3: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:80 LDA a:battler::sprite_x,X
    case 0xC2F6F5: {
        Instruction step(cpu, 0xBD, 0x000044u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:81 AND #$00FF
    case 0xC2F6F8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:81 AND #$00FF
    // Overlapping static entry reached from 0xC2F6F8.
    case 0xC2F6FA: {
        Instruction step(cpu, 0x00, 0x000038u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:82 SEC
    case 0xC2F6FB: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:83 SBC SCREEN_EFFECT_HORIZONTAL_OFFSET
    case 0xC2F6FC: {
        Instruction step(cpu, 0xED, 0x00AF6Bu, 3u, AddressMode::Absolute);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:84 TAX
    case 0xC2F6FF: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:85 STX @LOCAL02
    case 0xC2F700: {
        Instruction step(cpu, 0x86, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:86 LDX @VIRTUAL02
    case 0xC2F702: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:87 LDA a:battler::vram_sprite_index,X
    case 0xC2F704: {
        Instruction step(cpu, 0xBD, 0x000043u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:88 AND #$00FF
    case 0xC2F707: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:88 AND #$00FF
    // Overlapping static entry reached from 0xC2F707.
    case 0xC2F709: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:703 STA scratch
    // Macro caller: src/battle/render_battle_sprite_row.asm:89 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2F70A: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:704 ASL
    // Macro caller: src/battle/render_battle_sprite_row.asm:89 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2F70C: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:705 ASL
    // Macro caller: src/battle/render_battle_sprite_row.asm:89 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2F70D: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:706 ADC scratch
    // Macro caller: src/battle/render_battle_sprite_row.asm:89 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2F70E: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:707 ASL
    // Macro caller: src/battle/render_battle_sprite_row.asm:89 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2F710: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:708 ASL
    // Macro caller: src/battle/render_battle_sprite_row.asm:89 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2F711: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:709 ASL
    // Macro caller: src/battle/render_battle_sprite_row.asm:89 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2F712: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:710 ASL
    // Macro caller: src/battle/render_battle_sprite_row.asm:89 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2F713: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:90 CLC
    case 0xC2F714: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:91 ADC #.LOWORD(ALT_BATTLE_SPRITEMAPS)
    case 0xC2F715: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EBu : 0x00ADEBu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:91 ADC #.LOWORD(ALT_BATTLE_SPRITEMAPS)
    // Overlapping static entry reached from 0xC2F715.
    case 0xC2F717: {
        Instruction step(cpu, 0xAD, 0x0012A6u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:92 LDX @LOCAL02
    case 0xC2F718: {
        Instruction step(cpu, 0xA6, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:93 JSL UNKNOWN_C08CD5
    case 0xC2F71A: {
        Instruction step(cpu, 0x22, 0xC08CC6u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:94 JMP @UNKNOWN11
    case 0xC2F71E: {
        Instruction step(cpu, 0x4C, 0x00F7F2u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:96 LDX @VIRTUAL02
    case 0xC2F721: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:97 LDA a:battler::use_alt_spritemap,X
    case 0xC2F723: {
        Instruction step(cpu, 0xBD, 0x00004Bu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:98 AND #$00FF
    case 0xC2F726: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:98 AND #$00FF
    // Overlapping static entry reached from 0xC2F726.
    case 0xC2F728: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:99 BEQ @UNKNOWN8
    case 0xC2F729: {
        Instruction step(cpu, 0xF0, 0x00003Bu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:100 LDX @VIRTUAL02
    case 0xC2F72B: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:101 LDA a:battler::sprite_y,X
    case 0xC2F72D: {
        Instruction step(cpu, 0xBD, 0x000045u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:102 AND #$00FF
    case 0xC2F730: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:102 AND #$00FF
    // Overlapping static entry reached from 0xC2F730.
    case 0xC2F732: {
        Instruction step(cpu, 0x00, 0x000038u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:103 SEC
    case 0xC2F733: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:104 SBC SCREEN_EFFECT_VERTICAL_OFFSET
    case 0xC2F734: {
        Instruction step(cpu, 0xED, 0x00AF6Du, 3u, AddressMode::Absolute);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:105 TAY
    case 0xC2F737: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:106 LDX @VIRTUAL02
    case 0xC2F738: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:107 LDA a:battler::sprite_x,X
    case 0xC2F73A: {
        Instruction step(cpu, 0xBD, 0x000044u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:108 AND #$00FF
    case 0xC2F73D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:108 AND #$00FF
    // Overlapping static entry reached from 0xC2F73D.
    case 0xC2F73F: {
        Instruction step(cpu, 0x00, 0x000038u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:109 SEC
    case 0xC2F740: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:110 SBC SCREEN_EFFECT_HORIZONTAL_OFFSET
    case 0xC2F741: {
        Instruction step(cpu, 0xED, 0x00AF6Bu, 3u, AddressMode::Absolute);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:111 TAX
    case 0xC2F744: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:112 STX @LOCAL01
    case 0xC2F745: {
        Instruction step(cpu, 0x86, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:113 LDX @VIRTUAL02
    case 0xC2F747: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:114 LDA a:battler::vram_sprite_index,X
    case 0xC2F749: {
        Instruction step(cpu, 0xBD, 0x000043u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:115 AND #$00FF
    case 0xC2F74C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:115 AND #$00FF
    // Overlapping static entry reached from 0xC2F74C.
    case 0xC2F74E: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:703 STA scratch
    // Macro caller: src/battle/render_battle_sprite_row.asm:116 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2F74F: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:704 ASL
    // Macro caller: src/battle/render_battle_sprite_row.asm:116 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2F751: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:705 ASL
    // Macro caller: src/battle/render_battle_sprite_row.asm:116 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2F752: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:706 ADC scratch
    // Macro caller: src/battle/render_battle_sprite_row.asm:116 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2F753: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:707 ASL
    // Macro caller: src/battle/render_battle_sprite_row.asm:116 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2F755: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:708 ASL
    // Macro caller: src/battle/render_battle_sprite_row.asm:116 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2F756: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:709 ASL
    // Macro caller: src/battle/render_battle_sprite_row.asm:116 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2F757: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:710 ASL
    // Macro caller: src/battle/render_battle_sprite_row.asm:116 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2F758: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:117 CLC
    case 0xC2F759: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:118 ADC #.LOWORD(ALT_BATTLE_SPRITEMAPS)
    case 0xC2F75A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EBu : 0x00ADEBu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:118 ADC #.LOWORD(ALT_BATTLE_SPRITEMAPS)
    // Overlapping static entry reached from 0xC2F75A.
    case 0xC2F75C: {
        Instruction step(cpu, 0xAD, 0x0010A6u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:119 LDX @LOCAL01
    case 0xC2F75D: {
        Instruction step(cpu, 0xA6, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:120 JSL UNKNOWN_C08CD5
    case 0xC2F75F: {
        Instruction step(cpu, 0x22, 0xC08CC6u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:121 JMP @UNKNOWN11
    case 0xC2F763: {
        Instruction step(cpu, 0x4C, 0x00F7F2u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:123 LDA ENEMY_TARGETTING_FLASHING
    case 0xC2F766: {
        Instruction step(cpu, 0xAD, 0x00AF77u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:124 BEQ @UNKNOWN10
    case 0xC2F769: {
        Instruction step(cpu, 0xF0, 0x00004Fu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:125 LDX @VIRTUAL02
    case 0xC2F76B: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:126 LDA a:battler::unknown74,X
    case 0xC2F76D: {
        Instruction step(cpu, 0xBD, 0x00004Au, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:127 AND #$00FF
    case 0xC2F770: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:127 AND #$00FF
    // Overlapping static entry reached from 0xC2F770.
    case 0xC2F772: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:128 BEQ @UNKNOWN9
    case 0xC2F773: {
        Instruction step(cpu, 0xF0, 0x00000Bu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:129 LDA FRAME_COUNTER
    case 0xC2F775: {
        Instruction step(cpu, 0xAD, 0x000002u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:130 AND #$00FF
    case 0xC2F778: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:130 AND #$00FF
    // Overlapping static entry reached from 0xC2F778.
    case 0xC2F77A: {
        Instruction step(cpu, 0x00, 0x000029u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:131 AND #$0008
    case 0xC2F77B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:131 AND #$0008
    // Overlapping static entry reached from 0xC2F77B.
    case 0xC2F77D: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:132 BEQ @UNKNOWN10
    case 0xC2F77E: {
        Instruction step(cpu, 0xF0, 0x00003Au, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:134 LDX @VIRTUAL02
    case 0xC2F780: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:135 LDA a:battler::sprite_y,X
    case 0xC2F782: {
        Instruction step(cpu, 0xBD, 0x000045u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:136 AND #$00FF
    case 0xC2F785: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:136 AND #$00FF
    // Overlapping static entry reached from 0xC2F785.
    case 0xC2F787: {
        Instruction step(cpu, 0x00, 0x000038u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:137 SEC
    case 0xC2F788: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:138 SBC SCREEN_EFFECT_VERTICAL_OFFSET
    case 0xC2F789: {
        Instruction step(cpu, 0xED, 0x00AF6Du, 3u, AddressMode::Absolute);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:139 TAY
    case 0xC2F78C: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:140 LDX @VIRTUAL02
    case 0xC2F78D: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:141 LDA a:battler::sprite_x,X
    case 0xC2F78F: {
        Instruction step(cpu, 0xBD, 0x000044u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:142 AND #$00FF
    case 0xC2F792: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:142 AND #$00FF
    // Overlapping static entry reached from 0xC2F792.
    case 0xC2F794: {
        Instruction step(cpu, 0x00, 0x000038u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:143 SEC
    case 0xC2F795: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:144 SBC SCREEN_EFFECT_HORIZONTAL_OFFSET
    case 0xC2F796: {
        Instruction step(cpu, 0xED, 0x00AF6Bu, 3u, AddressMode::Absolute);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:145 TAX
    case 0xC2F799: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:146 STX @LOCAL02
    case 0xC2F79A: {
        Instruction step(cpu, 0x86, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:147 LDX @VIRTUAL02
    case 0xC2F79C: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:148 LDA a:battler::vram_sprite_index,X
    case 0xC2F79E: {
        Instruction step(cpu, 0xBD, 0x000043u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:149 AND #$00FF
    case 0xC2F7A1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:149 AND #$00FF
    // Overlapping static entry reached from 0xC2F7A1.
    case 0xC2F7A3: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:703 STA scratch
    // Macro caller: src/battle/render_battle_sprite_row.asm:150 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2F7A4: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:704 ASL
    // Macro caller: src/battle/render_battle_sprite_row.asm:150 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2F7A6: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:705 ASL
    // Macro caller: src/battle/render_battle_sprite_row.asm:150 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2F7A7: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:706 ADC scratch
    // Macro caller: src/battle/render_battle_sprite_row.asm:150 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2F7A8: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:707 ASL
    // Macro caller: src/battle/render_battle_sprite_row.asm:150 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2F7AA: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:708 ASL
    // Macro caller: src/battle/render_battle_sprite_row.asm:150 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2F7AB: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:709 ASL
    // Macro caller: src/battle/render_battle_sprite_row.asm:150 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2F7AC: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:710 ASL
    // Macro caller: src/battle/render_battle_sprite_row.asm:150 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2F7AD: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:151 CLC
    case 0xC2F7AE: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:152 ADC #.LOWORD(ALT_BATTLE_SPRITEMAPS)
    case 0xC2F7AF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EBu : 0x00ADEBu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:152 ADC #.LOWORD(ALT_BATTLE_SPRITEMAPS)
    // Overlapping static entry reached from 0xC2F7AF.
    case 0xC2F7B1: {
        Instruction step(cpu, 0xAD, 0x0012A6u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:153 LDX @LOCAL02
    case 0xC2F7B2: {
        Instruction step(cpu, 0xA6, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:154 JSL UNKNOWN_C08CD5
    case 0xC2F7B4: {
        Instruction step(cpu, 0x22, 0xC08CC6u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:155 BRA @UNKNOWN11
    case 0xC2F7B8: {
        Instruction step(cpu, 0x80, 0x000038u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:157 LDX @VIRTUAL02
    case 0xC2F7BA: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:158 LDA a:battler::sprite_y,X
    case 0xC2F7BC: {
        Instruction step(cpu, 0xBD, 0x000045u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:159 AND #$00FF
    case 0xC2F7BF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:159 AND #$00FF
    // Overlapping static entry reached from 0xC2F7BF.
    case 0xC2F7C1: {
        Instruction step(cpu, 0x00, 0x000038u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:160 SEC
    case 0xC2F7C2: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:161 SBC SCREEN_EFFECT_VERTICAL_OFFSET
    case 0xC2F7C3: {
        Instruction step(cpu, 0xED, 0x00AF6Du, 3u, AddressMode::Absolute);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:162 TAY
    case 0xC2F7C6: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:163 LDX @VIRTUAL02
    case 0xC2F7C7: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:164 LDA a:battler::sprite_x,X
    case 0xC2F7C9: {
        Instruction step(cpu, 0xBD, 0x000044u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:165 AND #$00FF
    case 0xC2F7CC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:165 AND #$00FF
    // Overlapping static entry reached from 0xC2F7CC.
    case 0xC2F7CE: {
        Instruction step(cpu, 0x00, 0x000038u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:166 SEC
    case 0xC2F7CF: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:167 SBC SCREEN_EFFECT_HORIZONTAL_OFFSET
    case 0xC2F7D0: {
        Instruction step(cpu, 0xED, 0x00AF6Bu, 3u, AddressMode::Absolute);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:168 TAX
    case 0xC2F7D3: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:169 STX @LOCAL00
    case 0xC2F7D4: {
        Instruction step(cpu, 0x86, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:170 LDX @VIRTUAL02
    case 0xC2F7D6: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:171 LDA a:battler::vram_sprite_index,X
    case 0xC2F7D8: {
        Instruction step(cpu, 0xBD, 0x000043u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:172 AND #$00FF
    case 0xC2F7DB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:172 AND #$00FF
    // Overlapping static entry reached from 0xC2F7DB.
    case 0xC2F7DD: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:703 STA scratch
    // Macro caller: src/battle/render_battle_sprite_row.asm:173 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2F7DE: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:704 ASL
    // Macro caller: src/battle/render_battle_sprite_row.asm:173 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2F7E0: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:705 ASL
    // Macro caller: src/battle/render_battle_sprite_row.asm:173 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2F7E1: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:706 ADC scratch
    // Macro caller: src/battle/render_battle_sprite_row.asm:173 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2F7E2: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:707 ASL
    // Macro caller: src/battle/render_battle_sprite_row.asm:173 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2F7E4: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:708 ASL
    // Macro caller: src/battle/render_battle_sprite_row.asm:173 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2F7E5: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:709 ASL
    // Macro caller: src/battle/render_battle_sprite_row.asm:173 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2F7E6: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:710 ASL
    // Macro caller: src/battle/render_battle_sprite_row.asm:173 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2F7E7: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:174 CLC
    case 0xC2F7E8: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:175 ADC #.LOWORD(BATTLE_SPRITEMAPS)
    case 0xC2F7E9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000ABu : 0x00ACABu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:175 ADC #.LOWORD(BATTLE_SPRITEMAPS)
    // Overlapping static entry reached from 0xC2F7E9.
    case 0xC2F7EB: {
        Instruction step(cpu, 0xAC, 0x000EA6u, 3u, AddressMode::Absolute);
        step.load_y();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:176 LDX @LOCAL00
    case 0xC2F7EC: {
        Instruction step(cpu, 0xA6, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:177 JSL UNKNOWN_C08CD5
    case 0xC2F7EE: {
        Instruction step(cpu, 0x22, 0xC08CC6u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:179 LDA @VIRTUAL02
    case 0xC2F7F2: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:180 CLC
    case 0xC2F7F4: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:181 ADC #.SIZEOF(battler)
    case 0xC2F7F5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:181 ADC #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2F7F5.
    case 0xC2F7F7: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:182 STA @VIRTUAL02
    case 0xC2F7F8: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:183 LDA @LOCAL03
    case 0xC2F7FA: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:184 STA @VIRTUAL04
    case 0xC2F7FC: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:185 INC @VIRTUAL04
    case 0xC2F7FE: {
        Instruction step(cpu, 0xE6, 0x000004u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:186 LDA @VIRTUAL04
    case 0xC2F800: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:187 STA @LOCAL03
    case 0xC2F802: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:189 LDA @VIRTUAL04
    case 0xC2F804: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:190 CMP #BATTLER_COUNT
    case 0xC2F806: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:190 CMP #BATTLER_COUNT
    // Overlapping static entry reached from 0xC2F806.
    case 0xC2F808: {
        Instruction step(cpu, 0x00, 0x0000B0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:784 BCS :+
    // Macro caller: src/battle/render_battle_sprite_row.asm:191 BCCL @UNKNOWN0
    case 0xC2F809: {
        Instruction step(cpu, 0xB0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/battle/render_battle_sprite_row.asm:191 BCCL @UNKNOWN0
    case 0xC2F80B: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:786 JMP dest
    // Macro caller: src/battle/render_battle_sprite_row.asm:191 BCCL @UNKNOWN0
    case 0xC2F80D: {
        Instruction step(cpu, 0x4C, 0x00F658u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/render_battle_sprite_row.asm:192 END_C_FUNCTION
    case 0xC2F810: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/render_battle_sprite_row.asm:192 END_C_FUNCTION
    case 0xC2F811: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
