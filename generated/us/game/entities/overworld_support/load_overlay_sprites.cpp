// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/overworld/load_overlay_sprites.asm
bool resume_overworld_load_overlay_sprites(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/load_overlay_sprites.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4B26B: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/load_overlay_sprites.asm:8 END_STACK_VARS
    case 0xC4B26D: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/load_overlay_sprites.asm:8 END_STACK_VARS
    case 0xC4B26E: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/load_overlay_sprites.asm:8 END_STACK_VARS
    case 0xC4B26F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000ECu : 0x00FFECu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/load_overlay_sprites.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC4B26F.
    case 0xC4B271: {
        Instruction step(cpu, 0xFF, 0x00A95Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/load_overlay_sprites.asm:8 END_STACK_VARS
    case 0xC4B272: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/overworld/load_overlay_sprites.asm:9 LDA #VRAM::OVERLAY_BASE
    case 0xC4B273: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x005600u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_overlay_sprites.asm:9 LDA #VRAM::OVERLAY_BASE
    // Overlapping static entry reached from 0xC4B273.
    case 0xC4B275: {
        Instruction step(cpu, 0x56, 0x000085u, 2u, AddressMode::DirectPageIndexedX);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/load_overlay_sprites.asm:10 STA @LOCAL02
    case 0xC4B276: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_overlay_sprites.asm:10 STA @LOCAL02
    // Overlapping static entry reached from 0xC4B275.
    case 0xC4B277: {
        Instruction step(cpu, 0x12, 0x0000A9u, 2u, AddressMode::DirectPageIndirect);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_overlay_sprites.asm:11 LOADPTR ENTITY_OVERLAY_SPRITES, @VIRTUAL0A
    case 0xC4B278: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000032u : 0x000E32u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_overlay_sprites.asm:11 LOADPTR ENTITY_OVERLAY_SPRITES, @VIRTUAL0A
    // Overlapping static entry reached from 0xC4B277.
    case 0xC4B279: {
        Instruction step(cpu, 0x32, 0x00000Eu, 2u, AddressMode::DirectPageIndirect);
        step.and_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_overlay_sprites.asm:11 LOADPTR ENTITY_OVERLAY_SPRITES, @VIRTUAL0A
    // Overlapping static entry reached from 0xC4B278.
    case 0xC4B27A: {
        Instruction step(cpu, 0x0E, 0x000A85u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_overlay_sprites.asm:11 LOADPTR ENTITY_OVERLAY_SPRITES, @VIRTUAL0A
    case 0xC4B27B: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_overlay_sprites.asm:11 LOADPTR ENTITY_OVERLAY_SPRITES, @VIRTUAL0A
    case 0xC4B27D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C4u : 0x0000C4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_overlay_sprites.asm:11 LOADPTR ENTITY_OVERLAY_SPRITES, @VIRTUAL0A
    // Overlapping static entry reached from 0xC4B27D.
    case 0xC4B27F: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/load_overlay_sprites.asm:11 LOADPTR ENTITY_OVERLAY_SPRITES, @VIRTUAL0A
    case 0xC4B280: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_overlay_sprites.asm:12 LDA #0
    case 0xC4B282: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_overlay_sprites.asm:12 LDA #0
    // Overlapping static entry reached from 0xC4B282.
    case 0xC4B284: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/load_overlay_sprites.asm:13 STA @VIRTUAL02
    case 0xC4B285: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_overlay_sprites.asm:14 BRA @FIRSTLOOPSTART
    case 0xC4B287: {
        Instruction step(cpu, 0x80, 0x000040u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/load_overlay_sprites.asm:16 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4B289: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/load_overlay_sprites.asm:16 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4B28B: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/load_overlay_sprites.asm:16 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4B28D: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/load_overlay_sprites.asm:16 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4B28F: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_overlay_sprites.asm:17 SEP #PROC_FLAGS::ACCUM8
    case 0xC4B291: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/load_overlay_sprites.asm:18 LDY #2
    case 0xC4B293: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/load_overlay_sprites.asm:18 LDY #2
    // Overlapping static entry reached from 0xC4B293.
    case 0xC4B295: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/load_overlay_sprites.asm:19 LDA [@VIRTUAL0A],Y
    case 0xC4B296: {
        Instruction step(cpu, 0xB7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_overlay_sprites.asm:20 REP #PROC_FLAGS::ACCUM8
    case 0xC4B298: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/load_overlay_sprites.asm:21 AND #$00FF
    case 0xC4B29A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/load_overlay_sprites.asm:21 AND #$00FF
    // Overlapping static entry reached from 0xC4B29A.
    case 0xC4B29C: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/load_overlay_sprites.asm:22 TAY
    case 0xC4B29D: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/overworld/load_overlay_sprites.asm:23 LDA [@VIRTUAL06]
    case 0xC4B29E: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_overlay_sprites.asm:24 TAX
    case 0xC4B2A0: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/load_overlay_sprites.asm:25 LDA @LOCAL02
    case 0xC4B2A1: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_overlay_sprites.asm:26 JSR UNKNOWN_C4B1B8
    case 0xC4B2A3: {
        Instruction step(cpu, 0x20, 0x00B1B8u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/load_overlay_sprites.asm:27 STA @LOCAL01
    case 0xC4B2A6: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_overlay_sprites.asm:28 SEP #PROC_FLAGS::ACCUM8
    case 0xC4B2A8: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/load_overlay_sprites.asm:28 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC486C0.
    case 0xC4B2A9: {
        Instruction step(cpu, 0x20, 0x0003A0u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/load_overlay_sprites.asm:29 LDY #3
    case 0xC4B2AA: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/load_overlay_sprites.asm:29 LDY #3
    // Overlapping static entry reached from 0xC4B2AA.
    case 0xC4B2AC: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/load_overlay_sprites.asm:30 LDA [@VIRTUAL0A],Y
    case 0xC4B2AD: {
        Instruction step(cpu, 0xB7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_overlay_sprites.asm:31 REP #PROC_FLAGS::ACCUM8
    case 0xC4B2AF: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/load_overlay_sprites.asm:32 AND #$00FF
    case 0xC4B2B1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/load_overlay_sprites.asm:32 AND #$00FF
    // Overlapping static entry reached from 0xC4B2B1.
    case 0xC4B2B3: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/load_overlay_sprites.asm:33 TAY
    case 0xC4B2B4: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/overworld/load_overlay_sprites.asm:34 LDA [@VIRTUAL06]
    case 0xC4B2B5: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_overlay_sprites.asm:35 TAX
    case 0xC4B2B7: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/load_overlay_sprites.asm:36 LDA @LOCAL01
    case 0xC4B2B8: {
        Instruction step(cpu, 0xA5, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_overlay_sprites.asm:37 JSR UNKNOWN_C4B1B8
    case 0xC4B2BA: {
        Instruction step(cpu, 0x20, 0x00B1B8u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/load_overlay_sprites.asm:38 STA @LOCAL02
    case 0xC4B2BD: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_overlay_sprites.asm:39 LDA #4
    case 0xC4B2BF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_overlay_sprites.asm:39 LDA #4
    // Overlapping static entry reached from 0xC4B2BF.
    case 0xC4B2C1: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/load_overlay_sprites.asm:40 CLC
    case 0xC4B2C2: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/load_overlay_sprites.asm:41 ADC @VIRTUAL0A
    case 0xC4B2C3: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/load_overlay_sprites.asm:42 STA @VIRTUAL0A
    case 0xC4B2C5: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_overlay_sprites.asm:43 INC @VIRTUAL02
    case 0xC4B2C7: {
        Instruction step(cpu, 0xE6, 0x000002u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/overworld/load_overlay_sprites.asm:45 LDA f:ENTITY_OVERLAY_COUNT
    case 0xC4B2C9: {
        Instruction step(cpu, 0xAF, 0xC40E31u, 4u, AddressMode::Long);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_overlay_sprites.asm:46 AND #$00FF
    case 0xC4B2CD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/load_overlay_sprites.asm:46 AND #$00FF
    // Overlapping static entry reached from 0xC4B2CD.
    case 0xC4B2CF: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/load_overlay_sprites.asm:47 STA @VIRTUAL04
    case 0xC4B2D0: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_overlay_sprites.asm:48 LDA @VIRTUAL02
    case 0xC4B2D2: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_overlay_sprites.asm:49 CMP @VIRTUAL04
    case 0xC4B2D4: {
        Instruction step(cpu, 0xC5, 0x000004u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/load_overlay_sprites.asm:50 BCC @LOADNEXTOVERLAYSPRITE
    case 0xC4B2D6: {
        Instruction step(cpu, 0x90, 0x0000B1u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/overworld/load_overlay_sprites.asm:51 LDA #0
    case 0xC4B2D8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_overlay_sprites.asm:51 LDA #0
    // Overlapping static entry reached from 0xC4B2D8.
    case 0xC4B2DA: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/load_overlay_sprites.asm:52 STA @LOCAL00
    case 0xC4B2DB: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_overlay_sprites.asm:53 BRA @SECONDLOOPSTART
    case 0xC4B2DD: {
        Instruction step(cpu, 0x80, 0x000043u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/load_overlay_sprites.asm:55 ASL
    case 0xC4B2DF: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/load_overlay_sprites.asm:56 TAX
    case 0xC4B2E0: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_overlay_sprites.asm:57 LOADPTR ENTITY_OVERLAY_MUSHROOMIZED, @VIRTUAL06
    case 0xC4B2E1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E4u : 0x000EE4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_overlay_sprites.asm:57 LOADPTR ENTITY_OVERLAY_MUSHROOMIZED, @VIRTUAL06
    // Overlapping static entry reached from 0xC4B2E1.
    case 0xC4B2E3: {
        Instruction step(cpu, 0x0E, 0x000685u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_overlay_sprites.asm:57 LOADPTR ENTITY_OVERLAY_MUSHROOMIZED, @VIRTUAL06
    case 0xC4B2E4: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_overlay_sprites.asm:57 LOADPTR ENTITY_OVERLAY_MUSHROOMIZED, @VIRTUAL06
    case 0xC4B2E6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C4u : 0x0000C4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_overlay_sprites.asm:57 LOADPTR ENTITY_OVERLAY_MUSHROOMIZED, @VIRTUAL06
    // Overlapping static entry reached from 0xC4B2E6.
    case 0xC4B2E8: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/load_overlay_sprites.asm:57 LOADPTR ENTITY_OVERLAY_MUSHROOMIZED, @VIRTUAL06
    case 0xC4B2E9: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_overlay_sprites.asm:58 LDA @VIRTUAL06
    case 0xC4B2EB: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_overlay_sprites.asm:59 STA ENTITY_MUSHROOMIZED_OVERLAY_PTRS,X
    case 0xC4B2ED: {
        Instruction step(cpu, 0x9D, 0x002EB6u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_overlay_sprites.asm:60 LOADPTR ENTITY_OVERLAY_SWEATING, @VIRTUAL06
    case 0xC4B2F0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000B0u : 0x000EB0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_overlay_sprites.asm:60 LOADPTR ENTITY_OVERLAY_SWEATING, @VIRTUAL06
    // Overlapping static entry reached from 0xC4B2F0.
    case 0xC4B2F2: {
        Instruction step(cpu, 0x0E, 0x000685u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_overlay_sprites.asm:60 LOADPTR ENTITY_OVERLAY_SWEATING, @VIRTUAL06
    case 0xC4B2F3: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_overlay_sprites.asm:60 LOADPTR ENTITY_OVERLAY_SWEATING, @VIRTUAL06
    case 0xC4B2F5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C4u : 0x0000C4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_overlay_sprites.asm:60 LOADPTR ENTITY_OVERLAY_SWEATING, @VIRTUAL06
    // Overlapping static entry reached from 0xC4B2F5.
    case 0xC4B2F7: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/load_overlay_sprites.asm:60 LOADPTR ENTITY_OVERLAY_SWEATING, @VIRTUAL06
    case 0xC4B2F8: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_overlay_sprites.asm:61 LDA @VIRTUAL06
    case 0xC4B2FA: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_overlay_sprites.asm:62 STA ENTITY_SWEATING_OVERLAY_PTRS,X
    case 0xC4B2FC: {
        Instruction step(cpu, 0x9D, 0x002F6Au, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_overlay_sprites.asm:63 LOADPTR ENTITY_OVERLAY_RIPPLE, @VIRTUAL06
    case 0xC4B2FF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000F0u : 0x000EF0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_overlay_sprites.asm:63 LOADPTR ENTITY_OVERLAY_RIPPLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC4B2FF.
    case 0xC4B301: {
        Instruction step(cpu, 0x0E, 0x000685u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_overlay_sprites.asm:63 LOADPTR ENTITY_OVERLAY_RIPPLE, @VIRTUAL06
    case 0xC4B302: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_overlay_sprites.asm:63 LOADPTR ENTITY_OVERLAY_RIPPLE, @VIRTUAL06
    case 0xC4B304: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C4u : 0x0000C4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_overlay_sprites.asm:63 LOADPTR ENTITY_OVERLAY_RIPPLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC4B304.
    case 0xC4B306: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/load_overlay_sprites.asm:63 LOADPTR ENTITY_OVERLAY_RIPPLE, @VIRTUAL06
    case 0xC4B307: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_overlay_sprites.asm:64 LDA @VIRTUAL06
    case 0xC4B309: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_overlay_sprites.asm:65 STA ENTITY_RIPPLE_OVERLAY_PTRS,X
    case 0xC4B30B: {
        Instruction step(cpu, 0x9D, 0x00301Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_overlay_sprites.asm:66 LOADPTR ENTITY_OVERLAY_BIG_RIPPLE, @VIRTUAL06
    case 0xC4B30E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000004u : 0x000F04u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_overlay_sprites.asm:66 LOADPTR ENTITY_OVERLAY_BIG_RIPPLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC4B30E.
    case 0xC4B310: {
        Instruction step(cpu, 0x0F, 0xA90685u, 4u, AddressMode::Long);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_overlay_sprites.asm:66 LOADPTR ENTITY_OVERLAY_BIG_RIPPLE, @VIRTUAL06
    case 0xC4B311: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_overlay_sprites.asm:66 LOADPTR ENTITY_OVERLAY_BIG_RIPPLE, @VIRTUAL06
    case 0xC4B313: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C4u : 0x0000C4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_overlay_sprites.asm:66 LOADPTR ENTITY_OVERLAY_BIG_RIPPLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC4B310.
    case 0xC4B314: {
        Instruction step(cpu, 0xC4, 0x000000u, 2u, AddressMode::DirectPage);
        step.compare_y();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_overlay_sprites.asm:66 LOADPTR ENTITY_OVERLAY_BIG_RIPPLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC4B313.
    case 0xC4B315: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/load_overlay_sprites.asm:66 LOADPTR ENTITY_OVERLAY_BIG_RIPPLE, @VIRTUAL06
    case 0xC4B316: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_overlay_sprites.asm:67 LDA @VIRTUAL06
    case 0xC4B318: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_overlay_sprites.asm:68 STA ENTITY_BIG_RIPPLE_OVERLAY_PTRS,X
    case 0xC4B31A: {
        Instruction step(cpu, 0x9D, 0x0030D2u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_overlay_sprites.asm:69 LDA @LOCAL00
    case 0xC4B31D: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_overlay_sprites.asm:70 INC
    case 0xC4B31F: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/overworld/load_overlay_sprites.asm:71 STA @LOCAL00
    case 0xC4B320: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_overlay_sprites.asm:73 CMP #MAX_ENTITIES
    case 0xC4B322: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00001Eu : 0x00001Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/load_overlay_sprites.asm:73 CMP #MAX_ENTITIES
    // Overlapping static entry reached from 0xC4B322.
    case 0xC4B324: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/load_overlay_sprites.asm:74 BCC @FILLNEXTENTRY
    case 0xC4B325: {
        Instruction step(cpu, 0x90, 0x0000B8u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/load_overlay_sprites.asm:75 END_C_FUNCTION
    case 0xC4B327: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/load_overlay_sprites.asm:75 END_C_FUNCTION
    case 0xC4B328: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
