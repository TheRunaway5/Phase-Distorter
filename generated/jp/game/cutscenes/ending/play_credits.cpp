// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/ending/play_credits.asm
bool resume_ending_play_credits(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/ending/play_credits.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4C594: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/ending/play_credits.asm:8 END_STACK_VARS
    case 0xC4C596: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/ending/play_credits.asm:8 END_STACK_VARS
    case 0xC4C597: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/play_credits.asm:8 END_STACK_VARS
    case 0xC4C598: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EAu : 0x00FFEAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/play_credits.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC4C598.
    case 0xC4C59A: {
        Instruction step(cpu, 0xFF, 0x01A95Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/ending/play_credits.asm:8 END_STACK_VARS
    case 0xC4C59B: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/ending/play_credits.asm:9 LDA #1
    case 0xC4C59C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/play_credits.asm:9 LDA #1
    // Overlapping static entry reached from 0xC4C59C.
    case 0xC4C59E: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/play_credits.asm:10 STA DISABLED_TRANSITIONS
    case 0xC4C59F: {
        Instruction step(cpu, 0x8D, 0x00B68Au, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/play_credits.asm:11 JSL INITIALIZE_CREDITS_SCENE
    case 0xC4C5A2: {
        Instruction step(cpu, 0x22, 0xC4C0B7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/play_credits.asm:12 JSL OAM_CLEAR
    case 0xC4C5A6: {
        Instruction step(cpu, 0x22, 0xC088A3u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/play_credits.asm:13 LDX #2
    case 0xC4C5AA: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/ending/play_credits.asm:13 LDX #2
    // Overlapping static entry reached from 0xC4C5AA.
    case 0xC4C5AC: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/play_credits.asm:14 LDA #1
    case 0xC4C5AD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/play_credits.asm:14 LDA #1
    // Overlapping static entry reached from 0xC4C5AD.
    case 0xC4C5AF: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/play_credits.asm:15 JSL FADE_IN
    case 0xC4C5B0: {
        Instruction step(cpu, 0x22, 0xC0885Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/play_credits.asm:16 JSL COUNT_PHOTO_FLAGS
    case 0xC4C5B4: {
        Instruction step(cpu, 0x22, 0xC4C473u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/play_credits.asm:17 CMP #0
    case 0xC4C5B8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/ending/play_credits.asm:17 CMP #0
    // Overlapping static entry reached from 0xC4C5B8.
    case 0xC4C5BA: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/play_credits.asm:18 BEQ @UNKNOWN0
    case 0xC4C5BB: {
        Instruction step(cpu, 0xF0, 0x00000Eu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/ending/play_credits.asm:19 JSL COUNT_PHOTO_FLAGS
    case 0xC4C5BD: {
        Instruction step(cpu, 0x22, 0xC4C473u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/play_credits.asm:20 TAY
    case 0xC4C5C1: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/ending/play_credits.asm:21 LDA #CREDITS_LENGTH
    case 0xC4C5C2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000A8u : 0x0011A8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/play_credits.asm:21 LDA #CREDITS_LENGTH
    // Overlapping static entry reached from 0xC4C5C2.
    case 0xC4C5C4: {
        Instruction step(cpu, 0x11, 0x000022u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.or_accumulator();
        return step.finish();
    }
    // src/ending/play_credits.asm:22 JSL DIVISION16S_DIVISOR_POSITIVE
    case 0xC4C5C5: {
        Instruction step(cpu, 0x22, 0xC0913Du, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/play_credits.asm:22 JSL DIVISION16S_DIVISOR_POSITIVE
    // Overlapping static entry reached from 0xC4C5C4.
    case 0xC4C5C6: {
        Instruction step(cpu, 0x3D, 0x00C091u, 3u, AddressMode::AbsoluteIndexedX);
        step.and_accumulator();
        return step.finish();
    }
    // src/ending/play_credits.asm:23 BRA @UNKNOWN1
    case 0xC4C5C9: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/ending/play_credits.asm:25 LDA #CREDITS_LENGTH
    case 0xC4C5CB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000A8u : 0x0011A8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/play_credits.asm:25 LDA #CREDITS_LENGTH
    // Overlapping static entry reached from 0xC4C5CB.
    case 0xC4C5CD: {
        Instruction step(cpu, 0x11, 0x000085u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.or_accumulator();
        return step.finish();
    }
    // src/ending/play_credits.asm:27 STA @VIRTUAL04
    case 0xC4C5CE: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/play_credits.asm:27 STA @VIRTUAL04
    // Overlapping static entry reached from 0xC4C5CD.
    case 0xC4C5CF: {
        Instruction step(cpu, 0x04, 0x000085u, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/ending/play_credits.asm:28 STA @VIRTUAL02
    case 0xC4C5D0: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/play_credits.asm:28 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC4C5CF.
    case 0xC4C5D1: {
        Instruction step(cpu, 0x02, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/ending/play_credits.asm:29 LDA #.LOWORD(CREDITS_SCROLL_FRAME)
    case 0xC4C5D2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00008Du : 0x00FB8Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/play_credits.asm:29 LDA #.LOWORD(CREDITS_SCROLL_FRAME)
    // Overlapping static entry reached from 0xC4C5D2.
    case 0xC4C5D4: {
        Instruction step(cpu, 0xFB, 0x000000u, 1u, AddressMode::Implied);
        step.exchange_carry_emulation();
        return step.finish();
    }
    // src/ending/play_credits.asm:30 JSL SET_IRQ_CALLBACK
    case 0xC4C5D5: {
        Instruction step(cpu, 0x22, 0xC0851Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/play_credits.asm:31 LDY #0
    case 0xC4C5D9: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/ending/play_credits.asm:31 LDY #0
    // Overlapping static entry reached from 0xC4C5D9.
    case 0xC4C5DB: {
        Instruction step(cpu, 0x00, 0x000084u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/play_credits.asm:32 STY @LOCAL02
    case 0xC4C5DC: {
        Instruction step(cpu, 0x84, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/ending/play_credits.asm:33 JMP @UNKNOWN12
    case 0xC4C5DE: {
        Instruction step(cpu, 0x4C, 0x00C699u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/ending/play_credits.asm:35 TYA
    case 0xC4C5E1: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/ending/play_credits.asm:36 JSL TRY_RENDERING_PHOTOGRAPH
    case 0xC4C5E2: {
        Instruction step(cpu, 0x22, 0xC4C2A0u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/play_credits.asm:37 CMP #0
    case 0xC4C5E6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/ending/play_credits.asm:37 CMP #0
    // Overlapping static entry reached from 0xC4C5E6.
    case 0xC4C5E8: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/ending/play_credits.asm:38 BEQL @UNKNOWN11
    case 0xC4C5E9: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/ending/play_credits.asm:38 BEQL @UNKNOWN11
    case 0xC4C5EB: {
        Instruction step(cpu, 0x4C, 0x00C694u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/ending/play_credits.asm:39 LDX #$FFFF
    case 0xC4C5EE: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/ending/play_credits.asm:39 LDX #$FFFF
    // Overlapping static entry reached from 0xC4C5EE.
    case 0xC4C5F0: {
        Instruction step(cpu, 0xFF, 0x0040A9u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/ending/play_credits.asm:40 LDA #64
    case 0xC4C5F1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000040u : 0x000040u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/play_credits.asm:40 LDA #64
    // Overlapping static entry reached from 0xC4C5F1.
    case 0xC4C5F3: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/play_credits.asm:41 JSL UNKNOWN_C496E7
    case 0xC4C5F4: {
        Instruction step(cpu, 0x22, 0xC46D31u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/play_credits.asm:43 LDX #64
    case 0xC4C5F8: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000040u : 0x000040u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/ending/play_credits.asm:43 LDX #64
    // Overlapping static entry reached from 0xC4C5F8.
    case 0xC4C5FA: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/play_credits.asm:44 STX @LOCAL01
    case 0xC4C5FB: {
        Instruction step(cpu, 0x86, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/ending/play_credits.asm:45 BRA @UNKNOWN5
    case 0xC4C5FD: {
        Instruction step(cpu, 0x80, 0x000011u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/ending/play_credits.asm:47 JSL UPDATE_MAP_PALETTE_ANIMATION
    case 0xC4C5FF: {
        Instruction step(cpu, 0x22, 0xC4262Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/play_credits.asm:48 JSL PROCESS_CREDITS_DMA_QUEUE
    case 0xC4C603: {
        Instruction step(cpu, 0x22, 0xC4C057u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/play_credits.asm:49 JSL UNKNOWN_C1004E
    case 0xC4C607: {
        Instruction step(cpu, 0x22, 0xC100C4u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/play_credits.asm:50 LDX @LOCAL01
    case 0xC4C60B: {
        Instruction step(cpu, 0xA6, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/ending/play_credits.asm:51 DEX
    case 0xC4C60D: {
        Instruction step(cpu, 0xCA, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_x();
        return step.finish();
    }
    // src/ending/play_credits.asm:52 STX @LOCAL01
    case 0xC4C60E: {
        Instruction step(cpu, 0x86, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/ending/play_credits.asm:54 BNE @UNKNOWN4
    case 0xC4C610: {
        Instruction step(cpu, 0xD0, 0x0000EDu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/ending/play_credits.asm:55 JSL UNKNOWN_C49740
    case 0xC4C612: {
        Instruction step(cpu, 0x22, 0xC46D8Au, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/play_credits.asm:56 LDY @LOCAL02
    case 0xC4C616: {
        Instruction step(cpu, 0xA4, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/ending/play_credits.asm:57 TYA
    case 0xC4C618: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/ending/play_credits.asm:58 JSL SLIDE_CREDITS_PHOTOGRAPH
    case 0xC4C619: {
        Instruction step(cpu, 0x22, 0xC4C4AFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/play_credits.asm:59 BRA @UNKNOWN7
    case 0xC4C61D: {
        Instruction step(cpu, 0x80, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/ending/play_credits.asm:61 JSL PROCESS_CREDITS_DMA_QUEUE
    case 0xC4C61F: {
        Instruction step(cpu, 0x22, 0xC4C057u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/play_credits.asm:62 JSL UNKNOWN_C1004E
    case 0xC4C623: {
        Instruction step(cpu, 0x22, 0xC100C4u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/play_credits.asm:64 LDA @VIRTUAL02
    case 0xC4C627: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/play_credits.asm:65 CMP BG3_Y_POS
    case 0xC4C629: {
        Instruction step(cpu, 0xCD, 0x00003Bu, 3u, AddressMode::Absolute);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/ending/play_credits.asm:66 BGT @UNKNOWN6
    case 0xC4C62C: {
        Instruction step(cpu, 0xF0, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:767 BCS dest
    // Macro caller: src/ending/play_credits.asm:66 BGT @UNKNOWN6
    case 0xC4C62E: {
        Instruction step(cpu, 0xB0, 0x0000EFu, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/play_credits.asm:67 LOADPTR BUFFER+32, @LOCAL00
    case 0xC4C630: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/play_credits.asm:67 LOADPTR BUFFER+32, @LOCAL00
    // Overlapping static entry reached from 0xC4C630.
    case 0xC4C632: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/play_credits.asm:67 LOADPTR BUFFER+32, @LOCAL00
    case 0xC4C633: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/play_credits.asm:67 LOADPTR BUFFER+32, @LOCAL00
    case 0xC4C635: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Fu : 0x00007Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/play_credits.asm:67 LOADPTR BUFFER+32, @LOCAL00
    // Overlapping static entry reached from 0xC4C635.
    case 0xC4C637: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/ending/play_credits.asm:67 LOADPTR BUFFER+32, @LOCAL00
    case 0xC4C638: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/play_credits.asm:68 LDX #480
    case 0xC4C63A: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x0000E0u : 0x0001E0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/ending/play_credits.asm:68 LDX #480
    // Overlapping static entry reached from 0xC4C63A.
    case 0xC4C63C: {
        Instruction step(cpu, 0x01, 0x0000E2u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/ending/play_credits.asm:69 SEP #PROC_FLAGS::ACCUM8
    case 0xC4C63D: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/ending/play_credits.asm:69 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC4C63C.
    case 0xC4C63E: {
        Instruction step(cpu, 0x20, 0x0000A9u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/ending/play_credits.asm:70 LDA #0
    case 0xC4C63F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x002200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/play_credits.asm:71 JSL MEMSET24
    case 0xC4C641: {
        Instruction step(cpu, 0x22, 0xC08F06u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/play_credits.asm:71 JSL MEMSET24
    // Overlapping static entry reached from 0xC4C63F.
    case 0xC4C642: {
        Instruction step(cpu, 0x06, 0x00008Fu, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // src/ending/play_credits.asm:71 JSL MEMSET24
    // Overlapping static entry reached from 0xC4C642.
    case 0xC4C644: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000A2u : 0x00FFA2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/ending/play_credits.asm:73 LDX #$FFFF
    case 0xC4C645: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/ending/play_credits.asm:73 LDX #$FFFF
    // Overlapping static entry reached from 0xC4C644.
    case 0xC4C646: {
        Instruction step(cpu, 0xFF, 0x40A9FFu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/ending/play_credits.asm:73 LDX #$FFFF
    // Overlapping static entry reached from 0xC4C645.
    case 0xC4C647: {
        Instruction step(cpu, 0xFF, 0x0040A9u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/ending/play_credits.asm:74 LDA #64
    case 0xC4C648: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000040u : 0x000040u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/play_credits.asm:74 LDA #64
    // Overlapping static entry reached from 0xC4C648.
    case 0xC4C64A: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/play_credits.asm:75 JSL UNKNOWN_C496E7
    case 0xC4C64B: {
        Instruction step(cpu, 0x22, 0xC46D31u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/play_credits.asm:76 LDX #0
    case 0xC4C64F: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/ending/play_credits.asm:76 LDX #0
    // Overlapping static entry reached from 0xC4C64F.
    case 0xC4C651: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/play_credits.asm:77 STX @LOCAL01
    case 0xC4C652: {
        Instruction step(cpu, 0x86, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/ending/play_credits.asm:78 BRA @UNKNOWN10
    case 0xC4C654: {
        Instruction step(cpu, 0x80, 0x000011u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/ending/play_credits.asm:80 JSL UPDATE_MAP_PALETTE_ANIMATION
    case 0xC4C656: {
        Instruction step(cpu, 0x22, 0xC4262Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/play_credits.asm:81 JSL PROCESS_CREDITS_DMA_QUEUE
    case 0xC4C65A: {
        Instruction step(cpu, 0x22, 0xC4C057u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/play_credits.asm:82 JSL UNKNOWN_C1004E
    case 0xC4C65E: {
        Instruction step(cpu, 0x22, 0xC100C4u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/play_credits.asm:83 LDX @LOCAL01
    case 0xC4C662: {
        Instruction step(cpu, 0xA6, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/ending/play_credits.asm:84 INX
    case 0xC4C664: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/ending/play_credits.asm:85 STX @LOCAL01
    case 0xC4C665: {
        Instruction step(cpu, 0x86, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/ending/play_credits.asm:87 CPX #64
    case 0xC4C667: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000040u : 0x000040u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/ending/play_credits.asm:87 CPX #64
    // Overlapping static entry reached from 0xC4C667.
    case 0xC4C669: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/play_credits.asm:88 BCC @UNKNOWN9
    case 0xC4C66A: {
        Instruction step(cpu, 0x90, 0x0000EAu, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/ending/play_credits.asm:89 SEP #PROC_FLAGS::ACCUM8
    case 0xC4C66C: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:1275 LDA #$00
    // Macro caller: src/ending/play_credits.asm:90 STZ_BADOPT @LOCAL00
    case 0xC4C66E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x008500u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1282 STA dest
    // Macro caller: src/ending/play_credits.asm:90 STZ_BADOPT @LOCAL00
    case 0xC4C670: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1282 STA dest
    // Macro caller: src/ending/play_credits.asm:90 STZ_BADOPT @LOCAL00
    // Overlapping static entry reached from 0xC4C66E.
    case 0xC4C671: {
        Instruction step(cpu, 0x0E, 0x00E0A2u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // src/ending/play_credits.asm:91 LDX #480
    case 0xC4C672: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x0000E0u : 0x0001E0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/ending/play_credits.asm:91 LDX #480
    // Overlapping static entry reached from 0xC4C672.
    case 0xC4C674: {
        Instruction step(cpu, 0x01, 0x0000C2u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/ending/play_credits.asm:92 REP #PROC_FLAGS::ACCUM8
    case 0xC4C675: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/ending/play_credits.asm:92 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC4C674.
    case 0xC4C676: {
        Instruction step(cpu, 0x20, 0x0020A9u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/ending/play_credits.asm:93 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 1
    case 0xC4C677: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000020u : 0x000220u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/play_credits.asm:93 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 1
    // Overlapping static entry reached from 0xC4C677.
    case 0xC4C679: {
        Instruction step(cpu, 0x02, 0x000022u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/ending/play_credits.asm:94 JSL MEMSET16
    case 0xC4C67A: {
        Instruction step(cpu, 0x22, 0xC08EEDu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/play_credits.asm:95 LDA #24
    case 0xC4C67E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000018u : 0x000018u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/play_credits.asm:95 LDA #24
    // Overlapping static entry reached from 0xC4C67E.
    case 0xC4C680: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/play_credits.asm:96 JSL UNKNOWN_C0856B
    case 0xC4C681: {
        Instruction step(cpu, 0x22, 0xC0856Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/play_credits.asm:97 JSL PROCESS_CREDITS_DMA_QUEUE
    case 0xC4C685: {
        Instruction step(cpu, 0x22, 0xC4C057u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/play_credits.asm:98 JSL UNKNOWN_C1004E
    case 0xC4C689: {
        Instruction step(cpu, 0x22, 0xC100C4u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/play_credits.asm:99 LDA @VIRTUAL02
    case 0xC4C68D: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/play_credits.asm:100 CLC
    case 0xC4C68F: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/play_credits.asm:101 ADC @VIRTUAL04
    case 0xC4C690: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/play_credits.asm:102 STA @VIRTUAL02
    case 0xC4C692: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/play_credits.asm:104 LDY @LOCAL02
    case 0xC4C694: {
        Instruction step(cpu, 0xA4, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/ending/play_credits.asm:105 INY
    case 0xC4C696: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/ending/play_credits.asm:106 STY @LOCAL02
    case 0xC4C697: {
        Instruction step(cpu, 0x84, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/ending/play_credits.asm:108 CPY #NUM_PHOTOS
    case 0xC4C699: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/ending/play_credits.asm:108 CPY #NUM_PHOTOS
    // Overlapping static entry reached from 0xC4C699.
    case 0xC4C69B: {
        Instruction step(cpu, 0x00, 0x0000B0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:784 BCS :+
    // Macro caller: src/ending/play_credits.asm:109 BCCL @UNKNOWN2
    case 0xC4C69C: {
        Instruction step(cpu, 0xB0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/ending/play_credits.asm:109 BCCL @UNKNOWN2
    case 0xC4C69E: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:786 JMP dest
    // Macro caller: src/ending/play_credits.asm:109 BCCL @UNKNOWN2
    case 0xC4C6A0: {
        Instruction step(cpu, 0x4C, 0x00C5E1u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/ending/play_credits.asm:110 BRA @UNKNOWN15
    case 0xC4C6A3: {
        Instruction step(cpu, 0x80, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/ending/play_credits.asm:112 JSL PROCESS_CREDITS_DMA_QUEUE
    case 0xC4C6A5: {
        Instruction step(cpu, 0x22, 0xC4C057u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/play_credits.asm:113 JSL UNKNOWN_C1004E
    case 0xC4C6A9: {
        Instruction step(cpu, 0x22, 0xC100C4u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/play_credits.asm:115 LDA BG3_Y_POS
    case 0xC4C6AD: {
        Instruction step(cpu, 0xAD, 0x00003Bu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/play_credits.asm:116 CMP #CREDITS_LENGTH
    case 0xC4C6B0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000A8u : 0x0011A8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/ending/play_credits.asm:116 CMP #CREDITS_LENGTH
    // Overlapping static entry reached from 0xC4C6B0.
    case 0xC4C6B2: {
        Instruction step(cpu, 0x11, 0x000090u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.or_accumulator();
        return step.finish();
    }
    // src/ending/play_credits.asm:117 BCC @UNKNOWN14
    case 0xC4C6B3: {
        Instruction step(cpu, 0x90, 0x0000F0u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/ending/play_credits.asm:117 BCC @UNKNOWN14
    // Overlapping static entry reached from 0xC4C6B2.
    case 0xC4C6B4: {
        Instruction step(cpu, 0xF0, 0x000022u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/ending/play_credits.asm:118 JSL RESET_IRQ_CALLBACK
    case 0xC4C6B5: {
        Instruction step(cpu, 0x22, 0xC08522u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/play_credits.asm:118 JSL RESET_IRQ_CALLBACK
    // Overlapping static entry reached from 0xC4C6B4.
    case 0xC4C6B6: {
        Instruction step(cpu, 0x22, 0xA2C085u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/play_credits.asm:119 LDX #0
    case 0xC4C6B9: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/ending/play_credits.asm:119 LDX #0
    // Overlapping static entry reached from 0xC4C6B6.
    case 0xC4C6BA: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/play_credits.asm:119 LDX #0
    // Overlapping static entry reached from 0xC4C6B9.
    case 0xC4C6BB: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/play_credits.asm:120 STX @LOCAL01
    case 0xC4C6BC: {
        Instruction step(cpu, 0x86, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/ending/play_credits.asm:121 BRA @UNKNOWN17
    case 0xC4C6BE: {
        Instruction step(cpu, 0x80, 0x000009u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/ending/play_credits.asm:123 JSL UNKNOWN_C1004E
    case 0xC4C6C0: {
        Instruction step(cpu, 0x22, 0xC100C4u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/play_credits.asm:124 LDX @LOCAL01
    case 0xC4C6C4: {
        Instruction step(cpu, 0xA6, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/ending/play_credits.asm:125 INX
    case 0xC4C6C6: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/ending/play_credits.asm:126 STX @LOCAL01
    case 0xC4C6C7: {
        Instruction step(cpu, 0x86, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/ending/play_credits.asm:128 CPX #2000
    case 0xC4C6C9: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x0000D0u : 0x0007D0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/ending/play_credits.asm:128 CPX #2000
    // Overlapping static entry reached from 0xC4C6C9.
    case 0xC4C6CB: {
        Instruction step(cpu, 0x07, 0x000090u, 2u, AddressMode::DirectPageIndirectLong);
        step.or_accumulator();
        return step.finish();
    }
    // src/ending/play_credits.asm:129 BCC @UNKNOWN16
    case 0xC4C6CC: {
        Instruction step(cpu, 0x90, 0x0000F2u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/ending/play_credits.asm:129 BCC @UNKNOWN16
    // Overlapping static entry reached from 0xC4C6CB.
    case 0xC4C6CD: {
        Instruction step(cpu, 0xF2, 0x0000A0u, 2u, AddressMode::DirectPageIndirect);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/ending/play_credits.asm:130 LDY #0
    case 0xC4C6CE: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/ending/play_credits.asm:130 LDY #0
    // Overlapping static entry reached from 0xC4C6CD.
    case 0xC4C6CF: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/play_credits.asm:130 LDY #0
    // Overlapping static entry reached from 0xC4C6CE.
    case 0xC4C6D0: {
        Instruction step(cpu, 0x00, 0x0000A2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/play_credits.asm:131 LDX #2
    case 0xC4C6D1: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/ending/play_credits.asm:131 LDX #2
    // Overlapping static entry reached from 0xC4C6D1.
    case 0xC4C6D3: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/play_credits.asm:132 LDA #1
    case 0xC4C6D4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/play_credits.asm:132 LDA #1
    // Overlapping static entry reached from 0xC4C6D4.
    case 0xC4C6D6: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/play_credits.asm:133 JSL FADE_OUT_WITH_MOSAIC
    case 0xC4C6D7: {
        Instruction step(cpu, 0x22, 0xC0880Au, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/play_credits.asm:133 JSL FADE_OUT_WITH_MOSAIC
    // Overlapping static entry reached from 0xC4C6B4.
    case 0xC4C6D8: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/play_credits.asm:133 JSL FADE_OUT_WITH_MOSAIC
    // Overlapping static entry reached from 0xC4C6D8.
    case 0xC4C6D9: {
        Instruction step(cpu, 0x88, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_y();
        return step.finish();
    }
    // src/ending/play_credits.asm:133 JSL FADE_OUT_WITH_MOSAIC
    // Overlapping static entry reached from 0xC4C6D9.
    case 0xC4C6DA: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000A2u : 0x0000A2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/ending/play_credits.asm:134 LDX #0
    case 0xC4C6DB: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/ending/play_credits.asm:134 LDX #0
    // Overlapping static entry reached from 0xC4C6DA.
    case 0xC4C6DC: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/play_credits.asm:134 LDX #0
    // Overlapping static entry reached from 0xC4C6DB.
    case 0xC4C6DD: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/play_credits.asm:135 LDA #$B3
    case 0xC4C6DE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000B3u : 0x0000B3u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/play_credits.asm:135 LDA #$B3
    // Overlapping static entry reached from 0xC4C6DE.
    case 0xC4C6E0: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/play_credits.asm:136 JSL UNKNOWN_C4249A
    case 0xC4C6E1: {
        Instruction step(cpu, 0x22, 0xC423D8u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/play_credits.asm:137 JSL UNKNOWN_C08726
    case 0xC4C6E5: {
        Instruction step(cpu, 0x22, 0xC0871Fu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/play_credits.asm:138 JSL OVERWORLD_SETUP_VRAM
    case 0xC4C6E9: {
        Instruction step(cpu, 0x22, 0xC00013u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/play_credits.asm:139 JSL UNKNOWN_C021E6
    case 0xC4C6ED: {
        Instruction step(cpu, 0x22, 0xC021F4u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/play_credits.asm:140 LDA #23
    case 0xC4C6F1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000017u : 0x000017u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/play_credits.asm:140 LDA #23
    // Overlapping static entry reached from 0xC4C6F1.
    case 0xC4C6F3: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/play_credits.asm:141 STA ENTITY_ALLOCATION_MIN_SLOT
    case 0xC4C6F4: {
        Instruction step(cpu, 0x8D, 0x000A42u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/play_credits.asm:142 LDA #24
    case 0xC4C6F7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000018u : 0x000018u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/play_credits.asm:142 LDA #24
    // Overlapping static entry reached from 0xC4C6F7.
    case 0xC4C6F9: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/play_credits.asm:143 STA ENTITY_ALLOCATION_MAX_SLOT
    case 0xC4C6FA: {
        Instruction step(cpu, 0x8D, 0x000A44u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/play_credits.asm:144 LDY #0
    case 0xC4C6FD: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/ending/play_credits.asm:144 LDY #0
    // Overlapping static entry reached from 0xC4C6FD.
    case 0xC4C6FF: {
        Instruction step(cpu, 0x00, 0x0000BBu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/play_credits.asm:145 TYX
    case 0xC4C700: {
        Instruction step(cpu, 0xBB, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_x();
        return step.finish();
    }
    // src/ending/play_credits.asm:146 LDA #EVENT_SCRIPT::EVENT_001
    case 0xC4C701: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/play_credits.asm:146 LDA #EVENT_SCRIPT::EVENT_001
    // Overlapping static entry reached from 0xC4C701.
    case 0xC4C703: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/play_credits.asm:147 JSL INIT_ENTITY
    case 0xC4C704: {
        Instruction step(cpu, 0x22, 0xC09300u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/play_credits.asm:148 JSL UNKNOWN_C02D29
    case 0xC4C708: {
        Instruction step(cpu, 0x22, 0xC02EFEu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/play_credits.asm:149 JSL UNKNOWN_C03A24
    case 0xC4C70C: {
        Instruction step(cpu, 0x22, 0xC03C74u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/ending/play_credits.asm:150 PROMOTENEARPTR BG2_BUFFER, @VIRTUAL06
    case 0xC4C710: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000076u : 0x008176u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/ending/play_credits.asm:150 PROMOTENEARPTR BG2_BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC4C710.
    case 0xC4C712: {
        Instruction step(cpu, 0x81, 0x000085u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/ending/play_credits.asm:150 PROMOTENEARPTR BG2_BUFFER, @VIRTUAL06
    case 0xC4C713: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/ending/play_credits.asm:150 PROMOTENEARPTR BG2_BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC4C712.
    case 0xC4C714: {
        Instruction step(cpu, 0x06, 0x00008Bu, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:909 PHB
    // Macro caller: src/ending/play_credits.asm:150 PROMOTENEARPTR BG2_BUFFER, @VIRTUAL06
    case 0xC4C715: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/ending/play_credits.asm:150 PROMOTENEARPTR BG2_BUFFER, @VIRTUAL06
    case 0xC4C716: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:911 PLA
    // Macro caller: src/ending/play_credits.asm:150 PROMOTENEARPTR BG2_BUFFER, @VIRTUAL06
    case 0xC4C718: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/ending/play_credits.asm:150 PROMOTENEARPTR BG2_BUFFER, @VIRTUAL06
    case 0xC4C719: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/ending/play_credits.asm:150 PROMOTENEARPTR BG2_BUFFER, @VIRTUAL06
    case 0xC4C71B: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/ending/play_credits.asm:151 LDX #0
    case 0xC4C71D: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/ending/play_credits.asm:151 LDX #0
    // Overlapping static entry reached from 0xC4C71D.
    case 0xC4C71F: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/play_credits.asm:152 BRA @UNKNOWN19
    case 0xC4C720: {
        Instruction step(cpu, 0x80, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/ending/play_credits.asm:154 REP #PROC_FLAGS::ACCUM8
    case 0xC4C722: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/ending/play_credits.asm:155 LDA #0
    case 0xC4C724: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/play_credits.asm:155 LDA #0
    // Overlapping static entry reached from 0xC4C724.
    case 0xC4C726: {
        Instruction step(cpu, 0x00, 0x000087u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/play_credits.asm:156 STA [@VIRTUAL06]
    case 0xC4C727: {
        Instruction step(cpu, 0x87, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/play_credits.asm:157 INC @VIRTUAL06
    case 0xC4C729: {
        Instruction step(cpu, 0xE6, 0x000006u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/ending/play_credits.asm:158 INC @VIRTUAL06
    case 0xC4C72B: {
        Instruction step(cpu, 0xE6, 0x000006u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/ending/play_credits.asm:159 INX
    case 0xC4C72D: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/ending/play_credits.asm:161 CPX #512
    case 0xC4C72E: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000000u : 0x000200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/ending/play_credits.asm:161 CPX #512
    // Overlapping static entry reached from 0xC4C72E.
    case 0xC4C730: {
        Instruction step(cpu, 0x02, 0x000090u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/ending/play_credits.asm:162 BCC @UNKNOWN18
    case 0xC4C731: {
        Instruction step(cpu, 0x90, 0x0000EFu, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/ending/play_credits.asm:163 JSL UNDRAW_FLYOVER_TEXT
    case 0xC4C733: {
        Instruction step(cpu, 0x22, 0xC45CA2u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/play_credits.asm:164 SEP #PROC_FLAGS::ACCUM8
    case 0xC4C737: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/ending/play_credits.asm:165 LDA #$0017
    case 0xC4C739: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000017u : 0x008D17u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/play_credits.asm:166 STA TM_MIRROR
    case 0xC4C73B: {
        Instruction step(cpu, 0x8D, 0x00001Au, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/play_credits.asm:166 STA TM_MIRROR
    // Overlapping static entry reached from 0xC4C739.
    case 0xC4C73C: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/ending/play_credits.asm:166 STA TM_MIRROR
    // Overlapping static entry reached from 0xC4C73C.
    case 0xC4C73D: {
        Instruction step(cpu, 0x00, 0x0000C2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/play_credits.asm:167 REP #PROC_FLAGS::ACCUM8
    case 0xC4C73E: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/ending/play_credits.asm:168 LDA #.LOWORD(PROCESS_OVERWORLD_TASKS)
    case 0xC4C740: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000016u : 0x00DC16u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/play_credits.asm:168 LDA #.LOWORD(PROCESS_OVERWORLD_TASKS)
    // Overlapping static entry reached from 0xC4C740.
    case 0xC4C742: {
        Instruction step(cpu, 0xDC, 0x001C22u, 3u, AddressMode::AbsoluteIndirectLong);
        step.jump_long();
        return step.finish();
    }
    // src/ending/play_credits.asm:169 JSL SET_IRQ_CALLBACK
    case 0xC4C743: {
        Instruction step(cpu, 0x22, 0xC0851Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/play_credits.asm:170 STZ DISABLED_TRANSITIONS
    case 0xC4C747: {
        Instruction step(cpu, 0x9C, 0x00B68Au, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/ending/play_credits.asm:171 END_C_FUNCTION
    case 0xC4C74A: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/ending/play_credits.asm:171 END_C_FUNCTION
    case 0xC4C74B: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
