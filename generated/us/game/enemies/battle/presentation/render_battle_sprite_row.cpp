// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/battle/render_battle_sprite_row.asm
bool resume_battle_render_battle_sprite_row(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/render_battle_sprite_row.asm:3 BEGIN_C_FUNCTION
    case 0xC2F724: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/render_battle_sprite_row.asm:11 END_STACK_VARS
    case 0xC2F726: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/render_battle_sprite_row.asm:11 END_STACK_VARS
    case 0xC2F727: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/render_battle_sprite_row.asm:11 END_STACK_VARS
    case 0xC2F728: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/render_battle_sprite_row.asm:11 END_STACK_VARS
    case 0xC2F729: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000E8u : 0x00FFE8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/render_battle_sprite_row.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC2F729.
    case 0xC2F72B: {
        Instruction step(cpu, 0xFF, 0x85685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/render_battle_sprite_row.asm:11 END_STACK_VARS
    case 0xC2F72C: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/render_battle_sprite_row.asm:11 END_STACK_VARS
    case 0xC2F72D: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:12 STA @LOCAL04
    case 0xC2F72E: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:12 STA @LOCAL04
    // Overlapping static entry reached from 0xC2F72B.
    case 0xC2F72F: {
        Instruction step(cpu, 0x16, 0x0000A9u, 2u, AddressMode::DirectPageIndexedX);
        step.shift_left();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:13 LDA #.LOWORD(BATTLERS_TABLE) + .SIZEOF(battler) * 8
    case 0xC2F730: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00001Cu : 0x00A21Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:13 LDA #.LOWORD(BATTLERS_TABLE) + .SIZEOF(battler) * 8
    // Overlapping static entry reached from 0xC2F72F.
    case 0xC2F731: {
        Instruction step(cpu, 0x1C, 0x0085A2u, 3u, AddressMode::Absolute);
        step.reset_tested_bits();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:13 LDA #.LOWORD(BATTLERS_TABLE) + .SIZEOF(battler) * 8
    // Overlapping static entry reached from 0xC2F730.
    case 0xC2F732: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000085u : 0x000285u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:14 STA @VIRTUAL02
    case 0xC2F733: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:14 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC2F732.
    case 0xC2F734: {
        Instruction step(cpu, 0x02, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:15 LDA #8
    case 0xC2F735: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:15 LDA #8
    // Overlapping static entry reached from 0xC2F735.
    case 0xC2F737: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:16 STA @VIRTUAL04
    case 0xC2F738: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:17 STA @LOCAL03
    case 0xC2F73A: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:18 JMP @UNKNOWN12
    case 0xC2F73C: {
        Instruction step(cpu, 0x4C, 0x00F8EBu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:20 LDX @VIRTUAL02
    case 0xC2F73F: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:21 LDA a:battler::consciousness,X
    case 0xC2F741: {
        Instruction step(cpu, 0xBD, 0x00000Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:22 AND #$00FF
    case 0xC2F744: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:22 AND #$00FF
    // Overlapping static entry reached from 0xC2F744.
    case 0xC2F746: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/render_battle_sprite_row.asm:23 BEQL @UNKNOWN11
    case 0xC2F747: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/render_battle_sprite_row.asm:23 BEQL @UNKNOWN11
    case 0xC2F749: {
        Instruction step(cpu, 0x4C, 0x00F8D9u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:24 LDX @VIRTUAL02
    case 0xC2F74C: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:25 LDA a:battler::afflictions + STATUS_GROUP::PERSISTENT_EASYHEAL,X
    case 0xC2F74E: {
        Instruction step(cpu, 0xBD, 0x00001Du, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:26 AND #$00FF
    case 0xC2F751: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:26 AND #$00FF
    // Overlapping static entry reached from 0xC2F751.
    case 0xC2F753: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:27 CMP #1
    case 0xC2F754: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:27 CMP #1
    // Overlapping static entry reached from 0xC2F754.
    case 0xC2F756: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/render_battle_sprite_row.asm:28 BEQL @UNKNOWN11
    case 0xC2F757: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/render_battle_sprite_row.asm:28 BEQL @UNKNOWN11
    case 0xC2F759: {
        Instruction step(cpu, 0x4C, 0x00F8D9u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:29 LDX @VIRTUAL02
    case 0xC2F75C: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:30 LDA a:battler::ally_or_enemy,X
    case 0xC2F75E: {
        Instruction step(cpu, 0xBD, 0x00000Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:31 AND #$00FF
    case 0xC2F761: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:31 AND #$00FF
    // Overlapping static entry reached from 0xC2F761.
    case 0xC2F763: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:32 CMP #1
    case 0xC2F764: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:32 CMP #1
    // Overlapping static entry reached from 0xC2F764.
    case 0xC2F766: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/render_battle_sprite_row.asm:33 BNEL @UNKNOWN11
    case 0xC2F767: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/render_battle_sprite_row.asm:33 BNEL @UNKNOWN11
    case 0xC2F769: {
        Instruction step(cpu, 0x4C, 0x00F8D9u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:34 LDX @VIRTUAL02
    case 0xC2F76C: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:35 LDA a:battler::row,X
    case 0xC2F76E: {
        Instruction step(cpu, 0xBD, 0x000010u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:36 AND #$00FF
    case 0xC2F771: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:36 AND #$00FF
    // Overlapping static entry reached from 0xC2F771.
    case 0xC2F773: {
        Instruction step(cpu, 0x00, 0x0000C5u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:37 CMP @LOCAL04
    case 0xC2F774: {
        Instruction step(cpu, 0xC5, 0x000016u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/render_battle_sprite_row.asm:38 BNEL @UNKNOWN11
    case 0xC2F776: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/render_battle_sprite_row.asm:38 BNEL @UNKNOWN11
    case 0xC2F778: {
        Instruction step(cpu, 0x4C, 0x00F8D9u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:39 LDX @VIRTUAL02
    case 0xC2F77B: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:40 LDA a:battler::sprite,X
    case 0xC2F77D: {
        Instruction step(cpu, 0xBD, 0x000002u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/render_battle_sprite_row.asm:41 BEQL @UNKNOWN11
    case 0xC2F780: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/render_battle_sprite_row.asm:41 BEQL @UNKNOWN11
    case 0xC2F782: {
        Instruction step(cpu, 0x4C, 0x00F8D9u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:42 LDA @VIRTUAL02
    case 0xC2F785: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:43 CLC
    case 0xC2F787: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:44 ADC #battler::unknown72
    case 0xC2F788: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000048u : 0x000048u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:44 ADC #battler::unknown72
    // Overlapping static entry reached from 0xC2F788.
    case 0xC2F78A: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:45 TAX
    case 0xC2F78B: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:46 LDA __BSS_START__,X
    case 0xC2F78C: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:47 AND #$00FF
    case 0xC2F78F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:47 AND #$00FF
    // Overlapping static entry reached from 0xC2F78F.
    case 0xC2F791: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:48 BEQ @UNKNOWN6
    case 0xC2F792: {
        Instruction step(cpu, 0xF0, 0x00001Au, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:49 SEP #PROC_FLAGS::ACCUM8
    case 0xC2F794: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:50 DEC
    case 0xC2F796: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:51 STA __BSS_START__,X
    case 0xC2F797: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:52 LDY #3
    case 0xC2F79A: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:52 LDY #3
    // Overlapping static entry reached from 0xC2F79A.
    case 0xC2F79C: {
        Instruction step(cpu, 0x00, 0x0000C2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:53 REP #PROC_FLAGS::ACCUM8
    case 0xC2F79D: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:54 AND #$00FF
    case 0xC2F79F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:54 AND #$00FF
    // Overlapping static entry reached from 0xC2F79F.
    case 0xC2F7A1: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:55 JSL DIVISION16
    case 0xC2F7A2: {
        Instruction step(cpu, 0x22, 0xC090E6u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:56 AND #$0001
    case 0xC2F7A6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:56 AND #$0001
    // Overlapping static entry reached from 0xC2F7A6.
    case 0xC2F7A8: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/render_battle_sprite_row.asm:57 BNEL @UNKNOWN11
    case 0xC2F7A9: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/render_battle_sprite_row.asm:57 BNEL @UNKNOWN11
    case 0xC2F7AB: {
        Instruction step(cpu, 0x4C, 0x00F8D9u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:59 LDA @VIRTUAL02
    case 0xC2F7AE: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:60 CLC
    case 0xC2F7B0: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:61 ADC #battler::unknown73
    case 0xC2F7B1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000049u : 0x000049u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:61 ADC #battler::unknown73
    // Overlapping static entry reached from 0xC2F7B1.
    case 0xC2F7B3: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:62 TAX
    case 0xC2F7B4: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:63 LDA __BSS_START__,X
    case 0xC2F7B5: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:64 AND #$00FF
    case 0xC2F7B8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:64 AND #$00FF
    // Overlapping static entry reached from 0xC2F7B8.
    case 0xC2F7BA: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:65 BEQ @UNKNOWN7
    case 0xC2F7BB: {
        Instruction step(cpu, 0xF0, 0x00004Bu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:66 SEP #PROC_FLAGS::ACCUM8
    case 0xC2F7BD: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:67 DEC
    case 0xC2F7BF: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:68 STA __BSS_START__,X
    case 0xC2F7C0: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:69 REP #PROC_FLAGS::ACCUM8
    case 0xC2F7C3: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:70 AND #$00FF
    case 0xC2F7C5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:70 AND #$00FF
    // Overlapping static entry reached from 0xC2F7C5.
    case 0xC2F7C7: {
        Instruction step(cpu, 0x00, 0x000029u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:71 AND #$0004
    case 0xC2F7C8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:71 AND #$0004
    // Overlapping static entry reached from 0xC2F7C8.
    case 0xC2F7CA: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:72 BNE @UNKNOWN7
    case 0xC2F7CB: {
        Instruction step(cpu, 0xD0, 0x00003Bu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:73 LDX @VIRTUAL02
    case 0xC2F7CD: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:74 LDA a:battler::sprite_y,X
    case 0xC2F7CF: {
        Instruction step(cpu, 0xBD, 0x000045u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:75 AND #$00FF
    case 0xC2F7D2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:75 AND #$00FF
    // Overlapping static entry reached from 0xC2F7D2.
    case 0xC2F7D4: {
        Instruction step(cpu, 0x00, 0x000038u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:76 SEC
    case 0xC2F7D5: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:77 SBC SCREEN_EFFECT_VERTICAL_OFFSET
    case 0xC2F7D6: {
        Instruction step(cpu, 0xED, 0x00AD98u, 3u, AddressMode::Absolute);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:78 TAY
    case 0xC2F7D9: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:79 LDX @VIRTUAL02
    case 0xC2F7DA: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:80 LDA a:battler::sprite_x,X
    case 0xC2F7DC: {
        Instruction step(cpu, 0xBD, 0x000044u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:81 AND #$00FF
    case 0xC2F7DF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:81 AND #$00FF
    // Overlapping static entry reached from 0xC2F7DF.
    case 0xC2F7E1: {
        Instruction step(cpu, 0x00, 0x000038u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:82 SEC
    case 0xC2F7E2: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:83 SBC SCREEN_EFFECT_HORIZONTAL_OFFSET
    case 0xC2F7E3: {
        Instruction step(cpu, 0xED, 0x00AD96u, 3u, AddressMode::Absolute);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:84 TAX
    case 0xC2F7E6: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:85 STX @LOCAL02
    case 0xC2F7E7: {
        Instruction step(cpu, 0x86, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:86 LDX @VIRTUAL02
    case 0xC2F7E9: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:87 LDA a:battler::vram_sprite_index,X
    case 0xC2F7EB: {
        Instruction step(cpu, 0xBD, 0x000043u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:88 AND #$00FF
    case 0xC2F7EE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:88 AND #$00FF
    // Overlapping static entry reached from 0xC2F7EE.
    case 0xC2F7F0: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:703 STA scratch
    // Macro caller: src/battle/render_battle_sprite_row.asm:89 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2F7F1: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:704 ASL
    // Macro caller: src/battle/render_battle_sprite_row.asm:89 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2F7F3: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:705 ASL
    // Macro caller: src/battle/render_battle_sprite_row.asm:89 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2F7F4: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:706 ADC scratch
    // Macro caller: src/battle/render_battle_sprite_row.asm:89 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2F7F5: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:707 ASL
    // Macro caller: src/battle/render_battle_sprite_row.asm:89 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2F7F7: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:708 ASL
    // Macro caller: src/battle/render_battle_sprite_row.asm:89 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2F7F8: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:709 ASL
    // Macro caller: src/battle/render_battle_sprite_row.asm:89 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2F7F9: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:710 ASL
    // Macro caller: src/battle/render_battle_sprite_row.asm:89 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2F7FA: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:90 CLC
    case 0xC2F7FB: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:91 ADC #.LOWORD(ALT_BATTLE_SPRITEMAPS)
    case 0xC2F7FC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000016u : 0x00AC16u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:91 ADC #.LOWORD(ALT_BATTLE_SPRITEMAPS)
    // Overlapping static entry reached from 0xC2F7FC.
    case 0xC2F7FE: {
        Instruction step(cpu, 0xAC, 0x0012A6u, 3u, AddressMode::Absolute);
        step.load_y();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:92 LDX @LOCAL02
    case 0xC2F7FF: {
        Instruction step(cpu, 0xA6, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:93 JSL UNKNOWN_C08CD5
    case 0xC2F801: {
        Instruction step(cpu, 0x22, 0xC08CD5u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:94 JMP @UNKNOWN11
    case 0xC2F805: {
        Instruction step(cpu, 0x4C, 0x00F8D9u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:96 LDX @VIRTUAL02
    case 0xC2F808: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:97 LDA a:battler::use_alt_spritemap,X
    case 0xC2F80A: {
        Instruction step(cpu, 0xBD, 0x00004Bu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:98 AND #$00FF
    case 0xC2F80D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:98 AND #$00FF
    // Overlapping static entry reached from 0xC2F80D.
    case 0xC2F80F: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:99 BEQ @UNKNOWN8
    case 0xC2F810: {
        Instruction step(cpu, 0xF0, 0x00003Bu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:100 LDX @VIRTUAL02
    case 0xC2F812: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:101 LDA a:battler::sprite_y,X
    case 0xC2F814: {
        Instruction step(cpu, 0xBD, 0x000045u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:102 AND #$00FF
    case 0xC2F817: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:102 AND #$00FF
    // Overlapping static entry reached from 0xC2F817.
    case 0xC2F819: {
        Instruction step(cpu, 0x00, 0x000038u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:103 SEC
    case 0xC2F81A: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:104 SBC SCREEN_EFFECT_VERTICAL_OFFSET
    case 0xC2F81B: {
        Instruction step(cpu, 0xED, 0x00AD98u, 3u, AddressMode::Absolute);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:105 TAY
    case 0xC2F81E: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:106 LDX @VIRTUAL02
    case 0xC2F81F: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:107 LDA a:battler::sprite_x,X
    case 0xC2F821: {
        Instruction step(cpu, 0xBD, 0x000044u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:108 AND #$00FF
    case 0xC2F824: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:108 AND #$00FF
    // Overlapping static entry reached from 0xC2F824.
    case 0xC2F826: {
        Instruction step(cpu, 0x00, 0x000038u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:109 SEC
    case 0xC2F827: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:110 SBC SCREEN_EFFECT_HORIZONTAL_OFFSET
    case 0xC2F828: {
        Instruction step(cpu, 0xED, 0x00AD96u, 3u, AddressMode::Absolute);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:111 TAX
    case 0xC2F82B: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:112 STX @LOCAL01
    case 0xC2F82C: {
        Instruction step(cpu, 0x86, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:113 LDX @VIRTUAL02
    case 0xC2F82E: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:114 LDA a:battler::vram_sprite_index,X
    case 0xC2F830: {
        Instruction step(cpu, 0xBD, 0x000043u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:115 AND #$00FF
    case 0xC2F833: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:115 AND #$00FF
    // Overlapping static entry reached from 0xC2F833.
    case 0xC2F835: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:703 STA scratch
    // Macro caller: src/battle/render_battle_sprite_row.asm:116 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2F836: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:704 ASL
    // Macro caller: src/battle/render_battle_sprite_row.asm:116 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2F838: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:705 ASL
    // Macro caller: src/battle/render_battle_sprite_row.asm:116 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2F839: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:706 ADC scratch
    // Macro caller: src/battle/render_battle_sprite_row.asm:116 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2F83A: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:707 ASL
    // Macro caller: src/battle/render_battle_sprite_row.asm:116 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2F83C: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:708 ASL
    // Macro caller: src/battle/render_battle_sprite_row.asm:116 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2F83D: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:709 ASL
    // Macro caller: src/battle/render_battle_sprite_row.asm:116 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2F83E: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:710 ASL
    // Macro caller: src/battle/render_battle_sprite_row.asm:116 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2F83F: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:117 CLC
    case 0xC2F840: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:118 ADC #.LOWORD(ALT_BATTLE_SPRITEMAPS)
    case 0xC2F841: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000016u : 0x00AC16u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:118 ADC #.LOWORD(ALT_BATTLE_SPRITEMAPS)
    // Overlapping static entry reached from 0xC2F841.
    case 0xC2F843: {
        Instruction step(cpu, 0xAC, 0x0010A6u, 3u, AddressMode::Absolute);
        step.load_y();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:119 LDX @LOCAL01
    case 0xC2F844: {
        Instruction step(cpu, 0xA6, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:120 JSL UNKNOWN_C08CD5
    case 0xC2F846: {
        Instruction step(cpu, 0x22, 0xC08CD5u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:121 JMP @UNKNOWN11
    case 0xC2F84A: {
        Instruction step(cpu, 0x4C, 0x00F8D9u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:123 LDA ENEMY_TARGETTING_FLASHING
    case 0xC2F84D: {
        Instruction step(cpu, 0xAD, 0x00ADA2u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:124 BEQ @UNKNOWN10
    case 0xC2F850: {
        Instruction step(cpu, 0xF0, 0x00004Fu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:125 LDX @VIRTUAL02
    case 0xC2F852: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:126 LDA a:battler::unknown74,X
    case 0xC2F854: {
        Instruction step(cpu, 0xBD, 0x00004Au, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:127 AND #$00FF
    case 0xC2F857: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:127 AND #$00FF
    // Overlapping static entry reached from 0xC2F857.
    case 0xC2F859: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:128 BEQ @UNKNOWN9
    case 0xC2F85A: {
        Instruction step(cpu, 0xF0, 0x00000Bu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:129 LDA FRAME_COUNTER
    case 0xC2F85C: {
        Instruction step(cpu, 0xAD, 0x000002u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:130 AND #$00FF
    case 0xC2F85F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:130 AND #$00FF
    // Overlapping static entry reached from 0xC2F85F.
    case 0xC2F861: {
        Instruction step(cpu, 0x00, 0x000029u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:131 AND #$0008
    case 0xC2F862: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:131 AND #$0008
    // Overlapping static entry reached from 0xC2F862.
    case 0xC2F864: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:132 BEQ @UNKNOWN10
    case 0xC2F865: {
        Instruction step(cpu, 0xF0, 0x00003Au, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:134 LDX @VIRTUAL02
    case 0xC2F867: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:135 LDA a:battler::sprite_y,X
    case 0xC2F869: {
        Instruction step(cpu, 0xBD, 0x000045u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:136 AND #$00FF
    case 0xC2F86C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:136 AND #$00FF
    // Overlapping static entry reached from 0xC2F86C.
    case 0xC2F86E: {
        Instruction step(cpu, 0x00, 0x000038u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:137 SEC
    case 0xC2F86F: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:138 SBC SCREEN_EFFECT_VERTICAL_OFFSET
    case 0xC2F870: {
        Instruction step(cpu, 0xED, 0x00AD98u, 3u, AddressMode::Absolute);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:139 TAY
    case 0xC2F873: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:140 LDX @VIRTUAL02
    case 0xC2F874: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:141 LDA a:battler::sprite_x,X
    case 0xC2F876: {
        Instruction step(cpu, 0xBD, 0x000044u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:142 AND #$00FF
    case 0xC2F879: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:142 AND #$00FF
    // Overlapping static entry reached from 0xC2F879.
    case 0xC2F87B: {
        Instruction step(cpu, 0x00, 0x000038u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:143 SEC
    case 0xC2F87C: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:144 SBC SCREEN_EFFECT_HORIZONTAL_OFFSET
    case 0xC2F87D: {
        Instruction step(cpu, 0xED, 0x00AD96u, 3u, AddressMode::Absolute);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:145 TAX
    case 0xC2F880: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:146 STX @LOCAL02
    case 0xC2F881: {
        Instruction step(cpu, 0x86, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:147 LDX @VIRTUAL02
    case 0xC2F883: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:148 LDA a:battler::vram_sprite_index,X
    case 0xC2F885: {
        Instruction step(cpu, 0xBD, 0x000043u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:149 AND #$00FF
    case 0xC2F888: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:149 AND #$00FF
    // Overlapping static entry reached from 0xC2F888.
    case 0xC2F88A: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:703 STA scratch
    // Macro caller: src/battle/render_battle_sprite_row.asm:150 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2F88B: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:704 ASL
    // Macro caller: src/battle/render_battle_sprite_row.asm:150 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2F88D: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:705 ASL
    // Macro caller: src/battle/render_battle_sprite_row.asm:150 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2F88E: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:706 ADC scratch
    // Macro caller: src/battle/render_battle_sprite_row.asm:150 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2F88F: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:707 ASL
    // Macro caller: src/battle/render_battle_sprite_row.asm:150 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2F891: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:708 ASL
    // Macro caller: src/battle/render_battle_sprite_row.asm:150 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2F892: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:709 ASL
    // Macro caller: src/battle/render_battle_sprite_row.asm:150 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2F893: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:710 ASL
    // Macro caller: src/battle/render_battle_sprite_row.asm:150 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2F894: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:151 CLC
    case 0xC2F895: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:152 ADC #.LOWORD(ALT_BATTLE_SPRITEMAPS)
    case 0xC2F896: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000016u : 0x00AC16u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:152 ADC #.LOWORD(ALT_BATTLE_SPRITEMAPS)
    // Overlapping static entry reached from 0xC2F896.
    case 0xC2F898: {
        Instruction step(cpu, 0xAC, 0x0012A6u, 3u, AddressMode::Absolute);
        step.load_y();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:153 LDX @LOCAL02
    case 0xC2F899: {
        Instruction step(cpu, 0xA6, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:154 JSL UNKNOWN_C08CD5
    case 0xC2F89B: {
        Instruction step(cpu, 0x22, 0xC08CD5u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:155 BRA @UNKNOWN11
    case 0xC2F89F: {
        Instruction step(cpu, 0x80, 0x000038u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:157 LDX @VIRTUAL02
    case 0xC2F8A1: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:158 LDA a:battler::sprite_y,X
    case 0xC2F8A3: {
        Instruction step(cpu, 0xBD, 0x000045u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:159 AND #$00FF
    case 0xC2F8A6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:159 AND #$00FF
    // Overlapping static entry reached from 0xC2F8A6.
    case 0xC2F8A8: {
        Instruction step(cpu, 0x00, 0x000038u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:160 SEC
    case 0xC2F8A9: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:161 SBC SCREEN_EFFECT_VERTICAL_OFFSET
    case 0xC2F8AA: {
        Instruction step(cpu, 0xED, 0x00AD98u, 3u, AddressMode::Absolute);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:162 TAY
    case 0xC2F8AD: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:163 LDX @VIRTUAL02
    case 0xC2F8AE: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:164 LDA a:battler::sprite_x,X
    case 0xC2F8B0: {
        Instruction step(cpu, 0xBD, 0x000044u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:165 AND #$00FF
    case 0xC2F8B3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:165 AND #$00FF
    // Overlapping static entry reached from 0xC2F8B3.
    case 0xC2F8B5: {
        Instruction step(cpu, 0x00, 0x000038u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:166 SEC
    case 0xC2F8B6: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:167 SBC SCREEN_EFFECT_HORIZONTAL_OFFSET
    case 0xC2F8B7: {
        Instruction step(cpu, 0xED, 0x00AD96u, 3u, AddressMode::Absolute);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:168 TAX
    case 0xC2F8BA: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:169 STX @LOCAL00
    case 0xC2F8BB: {
        Instruction step(cpu, 0x86, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:170 LDX @VIRTUAL02
    case 0xC2F8BD: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:171 LDA a:battler::vram_sprite_index,X
    case 0xC2F8BF: {
        Instruction step(cpu, 0xBD, 0x000043u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:172 AND #$00FF
    case 0xC2F8C2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:172 AND #$00FF
    // Overlapping static entry reached from 0xC2F8C2.
    case 0xC2F8C4: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:703 STA scratch
    // Macro caller: src/battle/render_battle_sprite_row.asm:173 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2F8C5: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:704 ASL
    // Macro caller: src/battle/render_battle_sprite_row.asm:173 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2F8C7: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:705 ASL
    // Macro caller: src/battle/render_battle_sprite_row.asm:173 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2F8C8: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:706 ADC scratch
    // Macro caller: src/battle/render_battle_sprite_row.asm:173 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2F8C9: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:707 ASL
    // Macro caller: src/battle/render_battle_sprite_row.asm:173 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2F8CB: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:708 ASL
    // Macro caller: src/battle/render_battle_sprite_row.asm:173 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2F8CC: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:709 ASL
    // Macro caller: src/battle/render_battle_sprite_row.asm:173 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2F8CD: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:710 ASL
    // Macro caller: src/battle/render_battle_sprite_row.asm:173 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2F8CE: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:174 CLC
    case 0xC2F8CF: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:175 ADC #.LOWORD(BATTLE_SPRITEMAPS)
    case 0xC2F8D0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000D6u : 0x00AAD6u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:175 ADC #.LOWORD(BATTLE_SPRITEMAPS)
    // Overlapping static entry reached from 0xC2F8D0.
    case 0xC2F8D2: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:176 LDX @LOCAL00
    case 0xC2F8D3: {
        Instruction step(cpu, 0xA6, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:177 JSL UNKNOWN_C08CD5
    case 0xC2F8D5: {
        Instruction step(cpu, 0x22, 0xC08CD5u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:179 LDA @VIRTUAL02
    case 0xC2F8D9: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:180 CLC
    case 0xC2F8DB: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:181 ADC #.SIZEOF(battler)
    case 0xC2F8DC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:181 ADC #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2F8DC.
    case 0xC2F8DE: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:182 STA @VIRTUAL02
    case 0xC2F8DF: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:183 LDA @LOCAL03
    case 0xC2F8E1: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:184 STA @VIRTUAL04
    case 0xC2F8E3: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:185 INC @VIRTUAL04
    case 0xC2F8E5: {
        Instruction step(cpu, 0xE6, 0x000004u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:186 LDA @VIRTUAL04
    case 0xC2F8E7: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:187 STA @LOCAL03
    case 0xC2F8E9: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:189 LDA @VIRTUAL04
    case 0xC2F8EB: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:190 CMP #BATTLER_COUNT
    case 0xC2F8ED: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/render_battle_sprite_row.asm:190 CMP #BATTLER_COUNT
    // Overlapping static entry reached from 0xC2F8ED.
    case 0xC2F8EF: {
        Instruction step(cpu, 0x00, 0x0000B0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:784 BCS :+
    // Macro caller: src/battle/render_battle_sprite_row.asm:191 BCCL @UNKNOWN0
    case 0xC2F8F0: {
        Instruction step(cpu, 0xB0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/battle/render_battle_sprite_row.asm:191 BCCL @UNKNOWN0
    case 0xC2F8F2: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:786 JMP dest
    // Macro caller: src/battle/render_battle_sprite_row.asm:191 BCCL @UNKNOWN0
    case 0xC2F8F4: {
        Instruction step(cpu, 0x4C, 0x00F73Fu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/render_battle_sprite_row.asm:192 END_C_FUNCTION
    case 0xC2F8F7: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/render_battle_sprite_row.asm:192 END_C_FUNCTION
    case 0xC2F8F8: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
