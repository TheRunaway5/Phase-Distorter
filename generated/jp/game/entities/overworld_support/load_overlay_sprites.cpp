// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/overworld/load_overlay_sprites.asm
bool resume_overworld_load_overlay_sprites(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/load_overlay_sprites.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC486D8: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/load_overlay_sprites.asm:8 END_STACK_VARS
    case 0xC486DA: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/load_overlay_sprites.asm:8 END_STACK_VARS
    case 0xC486DB: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/load_overlay_sprites.asm:8 END_STACK_VARS
    case 0xC486DC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000ECu : 0x00FFECu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/load_overlay_sprites.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC486DC.
    case 0xC486DE: {
        Instruction step(cpu, 0xFF, 0x00A95Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/load_overlay_sprites.asm:8 END_STACK_VARS
    case 0xC486DF: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/overworld/load_overlay_sprites.asm:9 LDA #VRAM::OVERLAY_BASE
    case 0xC486E0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x005600u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_overlay_sprites.asm:9 LDA #VRAM::OVERLAY_BASE
    // Overlapping static entry reached from 0xC486E0.
    case 0xC486E2: {
        Instruction step(cpu, 0x56, 0x000085u, 2u, AddressMode::DirectPageIndexedX);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/load_overlay_sprites.asm:10 STA @LOCAL02
    case 0xC486E3: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_overlay_sprites.asm:10 STA @LOCAL02
    // Overlapping static entry reached from 0xC486E2.
    case 0xC486E4: {
        Instruction step(cpu, 0x12, 0x0000A9u, 2u, AddressMode::DirectPageIndirect);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_overlay_sprites.asm:11 LOADPTR ENTITY_OVERLAY_SPRITES, @VIRTUAL0A
    case 0xC486E5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Eu : 0x000D7Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_overlay_sprites.asm:11 LOADPTR ENTITY_OVERLAY_SPRITES, @VIRTUAL0A
    // Overlapping static entry reached from 0xC486E4.
    case 0xC486E6: {
        Instruction step(cpu, 0x7E, 0x00850Du, 3u, AddressMode::AbsoluteIndexedX);
        step.rotate_right();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_overlay_sprites.asm:11 LOADPTR ENTITY_OVERLAY_SPRITES, @VIRTUAL0A
    // Overlapping static entry reached from 0xC486E5.
    case 0xC486E7: {
        Instruction step(cpu, 0x0D, 0x000A85u, 3u, AddressMode::Absolute);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_overlay_sprites.asm:11 LOADPTR ENTITY_OVERLAY_SPRITES, @VIRTUAL0A
    case 0xC486E8: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_overlay_sprites.asm:11 LOADPTR ENTITY_OVERLAY_SPRITES, @VIRTUAL0A
    // Overlapping static entry reached from 0xC486E6.
    case 0xC486E9: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_overlay_sprites.asm:11 LOADPTR ENTITY_OVERLAY_SPRITES, @VIRTUAL0A
    case 0xC486EA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C4u : 0x0000C4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_overlay_sprites.asm:11 LOADPTR ENTITY_OVERLAY_SPRITES, @VIRTUAL0A
    // Overlapping static entry reached from 0xC486EA.
    case 0xC486EC: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/load_overlay_sprites.asm:11 LOADPTR ENTITY_OVERLAY_SPRITES, @VIRTUAL0A
    case 0xC486ED: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_overlay_sprites.asm:12 LDA #0
    case 0xC486EF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_overlay_sprites.asm:12 LDA #0
    // Overlapping static entry reached from 0xC486EF.
    case 0xC486F1: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/load_overlay_sprites.asm:13 STA @VIRTUAL02
    case 0xC486F2: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_overlay_sprites.asm:14 BRA @FIRSTLOOPSTART
    case 0xC486F4: {
        Instruction step(cpu, 0x80, 0x000040u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/load_overlay_sprites.asm:16 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC486F6: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/load_overlay_sprites.asm:16 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC486F8: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/load_overlay_sprites.asm:16 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC486FA: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/load_overlay_sprites.asm:16 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC486FC: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_overlay_sprites.asm:17 SEP #PROC_FLAGS::ACCUM8
    case 0xC486FE: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/load_overlay_sprites.asm:18 LDY #2
    case 0xC48700: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/load_overlay_sprites.asm:18 LDY #2
    // Overlapping static entry reached from 0xC48700.
    case 0xC48702: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/load_overlay_sprites.asm:19 LDA [@VIRTUAL0A],Y
    case 0xC48703: {
        Instruction step(cpu, 0xB7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_overlay_sprites.asm:20 REP #PROC_FLAGS::ACCUM8
    case 0xC48705: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/load_overlay_sprites.asm:21 AND #$00FF
    case 0xC48707: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/load_overlay_sprites.asm:21 AND #$00FF
    // Overlapping static entry reached from 0xC48707.
    case 0xC48709: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/load_overlay_sprites.asm:22 TAY
    case 0xC4870A: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/overworld/load_overlay_sprites.asm:23 LDA [@VIRTUAL06]
    case 0xC4870B: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_overlay_sprites.asm:24 TAX
    case 0xC4870D: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/load_overlay_sprites.asm:25 LDA @LOCAL02
    case 0xC4870E: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_overlay_sprites.asm:26 JSR UNKNOWN_C4B1B8
    case 0xC48710: {
        Instruction step(cpu, 0x20, 0x008625u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/load_overlay_sprites.asm:27 STA @LOCAL01
    case 0xC48713: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_overlay_sprites.asm:28 SEP #PROC_FLAGS::ACCUM8
    case 0xC48715: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/load_overlay_sprites.asm:29 LDY #3
    case 0xC48717: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/load_overlay_sprites.asm:29 LDY #3
    // Overlapping static entry reached from 0xC48717.
    case 0xC48719: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/load_overlay_sprites.asm:30 LDA [@VIRTUAL0A],Y
    case 0xC4871A: {
        Instruction step(cpu, 0xB7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_overlay_sprites.asm:31 REP #PROC_FLAGS::ACCUM8
    case 0xC4871C: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/load_overlay_sprites.asm:32 AND #$00FF
    case 0xC4871E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/load_overlay_sprites.asm:32 AND #$00FF
    // Overlapping static entry reached from 0xC4871E.
    case 0xC48720: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/load_overlay_sprites.asm:33 TAY
    case 0xC48721: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/overworld/load_overlay_sprites.asm:34 LDA [@VIRTUAL06]
    case 0xC48722: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_overlay_sprites.asm:35 TAX
    case 0xC48724: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/load_overlay_sprites.asm:36 LDA @LOCAL01
    case 0xC48725: {
        Instruction step(cpu, 0xA5, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_overlay_sprites.asm:37 JSR UNKNOWN_C4B1B8
    case 0xC48727: {
        Instruction step(cpu, 0x20, 0x008625u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/load_overlay_sprites.asm:38 STA @LOCAL02
    case 0xC4872A: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_overlay_sprites.asm:39 LDA #4
    case 0xC4872C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_overlay_sprites.asm:39 LDA #4
    // Overlapping static entry reached from 0xC4872C.
    case 0xC4872E: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/load_overlay_sprites.asm:40 CLC
    case 0xC4872F: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/load_overlay_sprites.asm:41 ADC @VIRTUAL0A
    case 0xC48730: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/load_overlay_sprites.asm:42 STA @VIRTUAL0A
    case 0xC48732: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_overlay_sprites.asm:43 INC @VIRTUAL02
    case 0xC48734: {
        Instruction step(cpu, 0xE6, 0x000002u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/overworld/load_overlay_sprites.asm:45 LDA f:ENTITY_OVERLAY_COUNT
    case 0xC48736: {
        Instruction step(cpu, 0xAF, 0xC40D7Du, 4u, AddressMode::Long);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_overlay_sprites.asm:46 AND #$00FF
    case 0xC4873A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/load_overlay_sprites.asm:46 AND #$00FF
    // Overlapping static entry reached from 0xC4873A.
    case 0xC4873C: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/load_overlay_sprites.asm:47 STA @VIRTUAL04
    case 0xC4873D: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_overlay_sprites.asm:48 LDA @VIRTUAL02
    case 0xC4873F: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_overlay_sprites.asm:49 CMP @VIRTUAL04
    case 0xC48741: {
        Instruction step(cpu, 0xC5, 0x000004u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/load_overlay_sprites.asm:50 BCC @LOADNEXTOVERLAYSPRITE
    case 0xC48743: {
        Instruction step(cpu, 0x90, 0x0000B1u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/overworld/load_overlay_sprites.asm:51 LDA #0
    case 0xC48745: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_overlay_sprites.asm:51 LDA #0
    // Overlapping static entry reached from 0xC48745.
    case 0xC48747: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/load_overlay_sprites.asm:52 STA @LOCAL00
    case 0xC48748: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_overlay_sprites.asm:53 BRA @SECONDLOOPSTART
    case 0xC4874A: {
        Instruction step(cpu, 0x80, 0x000043u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/load_overlay_sprites.asm:55 ASL
    case 0xC4874C: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/load_overlay_sprites.asm:56 TAX
    case 0xC4874D: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_overlay_sprites.asm:57 LOADPTR ENTITY_OVERLAY_MUSHROOMIZED, @VIRTUAL06
    case 0xC4874E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000030u : 0x000E30u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_overlay_sprites.asm:57 LOADPTR ENTITY_OVERLAY_MUSHROOMIZED, @VIRTUAL06
    // Overlapping static entry reached from 0xC4874E.
    case 0xC48750: {
        Instruction step(cpu, 0x0E, 0x000685u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_overlay_sprites.asm:57 LOADPTR ENTITY_OVERLAY_MUSHROOMIZED, @VIRTUAL06
    case 0xC48751: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_overlay_sprites.asm:57 LOADPTR ENTITY_OVERLAY_MUSHROOMIZED, @VIRTUAL06
    case 0xC48753: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C4u : 0x0000C4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_overlay_sprites.asm:57 LOADPTR ENTITY_OVERLAY_MUSHROOMIZED, @VIRTUAL06
    // Overlapping static entry reached from 0xC48753.
    case 0xC48755: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/load_overlay_sprites.asm:57 LOADPTR ENTITY_OVERLAY_MUSHROOMIZED, @VIRTUAL06
    case 0xC48756: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_overlay_sprites.asm:58 LDA @VIRTUAL06
    case 0xC48758: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_overlay_sprites.asm:59 STA ENTITY_MUSHROOMIZED_OVERLAY_PTRS,X
    case 0xC4875A: {
        Instruction step(cpu, 0x9D, 0x0032B4u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_overlay_sprites.asm:60 LOADPTR ENTITY_OVERLAY_SWEATING, @VIRTUAL06
    case 0xC4875D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FCu : 0x000DFCu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_overlay_sprites.asm:60 LOADPTR ENTITY_OVERLAY_SWEATING, @VIRTUAL06
    // Overlapping static entry reached from 0xC4875D.
    case 0xC4875F: {
        Instruction step(cpu, 0x0D, 0x000685u, 3u, AddressMode::Absolute);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_overlay_sprites.asm:60 LOADPTR ENTITY_OVERLAY_SWEATING, @VIRTUAL06
    case 0xC48760: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_overlay_sprites.asm:60 LOADPTR ENTITY_OVERLAY_SWEATING, @VIRTUAL06
    case 0xC48762: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C4u : 0x0000C4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_overlay_sprites.asm:60 LOADPTR ENTITY_OVERLAY_SWEATING, @VIRTUAL06
    // Overlapping static entry reached from 0xC48762.
    case 0xC48764: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/load_overlay_sprites.asm:60 LOADPTR ENTITY_OVERLAY_SWEATING, @VIRTUAL06
    case 0xC48765: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_overlay_sprites.asm:61 LDA @VIRTUAL06
    case 0xC48767: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_overlay_sprites.asm:62 STA ENTITY_SWEATING_OVERLAY_PTRS,X
    case 0xC48769: {
        Instruction step(cpu, 0x9D, 0x003368u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_overlay_sprites.asm:63 LOADPTR ENTITY_OVERLAY_RIPPLE, @VIRTUAL06
    case 0xC4876C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00003Cu : 0x000E3Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_overlay_sprites.asm:63 LOADPTR ENTITY_OVERLAY_RIPPLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC4876C.
    case 0xC4876E: {
        Instruction step(cpu, 0x0E, 0x000685u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_overlay_sprites.asm:63 LOADPTR ENTITY_OVERLAY_RIPPLE, @VIRTUAL06
    case 0xC4876F: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_overlay_sprites.asm:63 LOADPTR ENTITY_OVERLAY_RIPPLE, @VIRTUAL06
    case 0xC48771: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C4u : 0x0000C4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_overlay_sprites.asm:63 LOADPTR ENTITY_OVERLAY_RIPPLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC48771.
    case 0xC48773: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/load_overlay_sprites.asm:63 LOADPTR ENTITY_OVERLAY_RIPPLE, @VIRTUAL06
    case 0xC48774: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_overlay_sprites.asm:64 LDA @VIRTUAL06
    case 0xC48776: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_overlay_sprites.asm:65 STA ENTITY_RIPPLE_OVERLAY_PTRS,X
    case 0xC48778: {
        Instruction step(cpu, 0x9D, 0x00341Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_overlay_sprites.asm:66 LOADPTR ENTITY_OVERLAY_BIG_RIPPLE, @VIRTUAL06
    case 0xC4877B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000050u : 0x000E50u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_overlay_sprites.asm:66 LOADPTR ENTITY_OVERLAY_BIG_RIPPLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC4877B.
    case 0xC4877D: {
        Instruction step(cpu, 0x0E, 0x000685u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_overlay_sprites.asm:66 LOADPTR ENTITY_OVERLAY_BIG_RIPPLE, @VIRTUAL06
    case 0xC4877E: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_overlay_sprites.asm:66 LOADPTR ENTITY_OVERLAY_BIG_RIPPLE, @VIRTUAL06
    case 0xC48780: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C4u : 0x0000C4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_overlay_sprites.asm:66 LOADPTR ENTITY_OVERLAY_BIG_RIPPLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC48780.
    case 0xC48782: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/load_overlay_sprites.asm:66 LOADPTR ENTITY_OVERLAY_BIG_RIPPLE, @VIRTUAL06
    case 0xC48783: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_overlay_sprites.asm:67 LDA @VIRTUAL06
    case 0xC48785: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_overlay_sprites.asm:68 STA ENTITY_BIG_RIPPLE_OVERLAY_PTRS,X
    case 0xC48787: {
        Instruction step(cpu, 0x9D, 0x0034D0u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_overlay_sprites.asm:69 LDA @LOCAL00
    case 0xC4878A: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_overlay_sprites.asm:70 INC
    case 0xC4878C: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/overworld/load_overlay_sprites.asm:71 STA @LOCAL00
    case 0xC4878D: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_overlay_sprites.asm:73 CMP #MAX_ENTITIES
    case 0xC4878F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00001Eu : 0x00001Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/load_overlay_sprites.asm:73 CMP #MAX_ENTITIES
    // Overlapping static entry reached from 0xC4878F.
    case 0xC48791: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/load_overlay_sprites.asm:74 BCC @FILLNEXTENTRY
    case 0xC48792: {
        Instruction step(cpu, 0x90, 0x0000B8u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/load_overlay_sprites.asm:75 END_C_FUNCTION
    case 0xC48794: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/load_overlay_sprites.asm:75 END_C_FUNCTION
    case 0xC48795: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
