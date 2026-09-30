// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/ending/play_credits.asm
bool resume_ending_play_credits(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/ending/play_credits.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4F554: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/ending/play_credits.asm:8 END_STACK_VARS
    case 0xC4F556: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/ending/play_credits.asm:8 END_STACK_VARS
    case 0xC4F557: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/play_credits.asm:8 END_STACK_VARS
    case 0xC4F558: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EAu : 0x00FFEAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/play_credits.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC4F558.
    case 0xC4F55A: {
        Instruction step(cpu, 0xFF, 0x01A95Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/ending/play_credits.asm:8 END_STACK_VARS
    case 0xC4F55B: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/ending/play_credits.asm:9 LDA #1
    case 0xC4F55C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/play_credits.asm:9 LDA #1
    // Overlapping static entry reached from 0xC4F55C.
    case 0xC4F55E: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/play_credits.asm:10 STA DISABLED_TRANSITIONS
    case 0xC4F55F: {
        Instruction step(cpu, 0x8D, 0x00B4B6u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/play_credits.asm:11 JSL INITIALIZE_CREDITS_SCENE
    case 0xC4F562: {
        Instruction step(cpu, 0x22, 0xC4F07Du, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/play_credits.asm:12 JSL OAM_CLEAR
    case 0xC4F566: {
        Instruction step(cpu, 0x22, 0xC088B1u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/play_credits.asm:13 LDX #2
    case 0xC4F56A: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/ending/play_credits.asm:13 LDX #2
    // Overlapping static entry reached from 0xC4F56A.
    case 0xC4F56C: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/play_credits.asm:14 LDA #1
    case 0xC4F56D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/play_credits.asm:14 LDA #1
    // Overlapping static entry reached from 0xC4F56D.
    case 0xC4F56F: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/play_credits.asm:15 JSL FADE_IN
    case 0xC4F570: {
        Instruction step(cpu, 0x22, 0xC0886Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/play_credits.asm:16 JSL COUNT_PHOTO_FLAGS
    case 0xC4F574: {
        Instruction step(cpu, 0x22, 0xC4F433u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/play_credits.asm:17 CMP #0
    case 0xC4F578: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/ending/play_credits.asm:17 CMP #0
    // Overlapping static entry reached from 0xC4F578.
    case 0xC4F57A: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/play_credits.asm:18 BEQ @UNKNOWN0
    case 0xC4F57B: {
        Instruction step(cpu, 0xF0, 0x00000Eu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/ending/play_credits.asm:19 JSL COUNT_PHOTO_FLAGS
    case 0xC4F57D: {
        Instruction step(cpu, 0x22, 0xC4F433u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/play_credits.asm:20 TAY
    case 0xC4F581: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/ending/play_credits.asm:21 LDA #CREDITS_LENGTH
    case 0xC4F582: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000B0u : 0x0011B0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/play_credits.asm:21 LDA #CREDITS_LENGTH
    // Overlapping static entry reached from 0xC4F582.
    case 0xC4F584: {
        Instruction step(cpu, 0x11, 0x000022u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.or_accumulator();
        return step.finish();
    }
    // src/ending/play_credits.asm:22 JSL DIVISION16S_DIVISOR_POSITIVE
    case 0xC4F585: {
        Instruction step(cpu, 0x22, 0xC0915Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/play_credits.asm:22 JSL DIVISION16S_DIVISOR_POSITIVE
    // Overlapping static entry reached from 0xC4F584.
    case 0xC4F586: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/ending/play_credits.asm:22 JSL DIVISION16S_DIVISOR_POSITIVE
    // Overlapping static entry reached from 0xC4F586.
    case 0xC4F587: {
        Instruction step(cpu, 0x91, 0x0000C0u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/play_credits.asm:23 BRA @UNKNOWN1
    case 0xC4F589: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/ending/play_credits.asm:25 LDA #CREDITS_LENGTH
    case 0xC4F58B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000B0u : 0x0011B0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/play_credits.asm:25 LDA #CREDITS_LENGTH
    // Overlapping static entry reached from 0xC4F58B.
    case 0xC4F58D: {
        Instruction step(cpu, 0x11, 0x000085u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.or_accumulator();
        return step.finish();
    }
    // src/ending/play_credits.asm:27 STA @VIRTUAL04
    case 0xC4F58E: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/play_credits.asm:27 STA @VIRTUAL04
    // Overlapping static entry reached from 0xC4F58D.
    case 0xC4F58F: {
        Instruction step(cpu, 0x04, 0x000085u, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/ending/play_credits.asm:28 STA @VIRTUAL02
    case 0xC4F590: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/play_credits.asm:28 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC4F58F.
    case 0xC4F591: {
        Instruction step(cpu, 0x02, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/ending/play_credits.asm:29 LDA #.LOWORD(CREDITS_SCROLL_FRAME)
    case 0xC4F592: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00001Eu : 0x00F41Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/play_credits.asm:29 LDA #.LOWORD(CREDITS_SCROLL_FRAME)
    // Overlapping static entry reached from 0xC4F592.
    case 0xC4F594: {
        Instruction step(cpu, 0xF4, 0x001C22u, 3u, AddressMode::Immediate);
        step.push_effective_absolute();
        return step.finish();
    }
    // src/ending/play_credits.asm:30 JSL SET_IRQ_CALLBACK
    case 0xC4F595: {
        Instruction step(cpu, 0x22, 0xC0851Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/play_credits.asm:30 JSL SET_IRQ_CALLBACK
    // Overlapping static entry reached from 0xC4F594.
    case 0xC4F597: {
        Instruction step(cpu, 0x85, 0x0000C0u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/play_credits.asm:31 LDY #0
    case 0xC4F599: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/ending/play_credits.asm:31 LDY #0
    // Overlapping static entry reached from 0xC4F599.
    case 0xC4F59B: {
        Instruction step(cpu, 0x00, 0x000084u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/play_credits.asm:32 STY @LOCAL02
    case 0xC4F59C: {
        Instruction step(cpu, 0x84, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/ending/play_credits.asm:33 JMP @UNKNOWN12
    case 0xC4F59E: {
        Instruction step(cpu, 0x4C, 0x00F657u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/ending/play_credits.asm:35 TYA
    case 0xC4F5A1: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/ending/play_credits.asm:36 JSL TRY_RENDERING_PHOTOGRAPH
    case 0xC4F5A2: {
        Instruction step(cpu, 0x22, 0xC4F264u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/play_credits.asm:37 CMP #0
    case 0xC4F5A6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/ending/play_credits.asm:37 CMP #0
    // Overlapping static entry reached from 0xC4F5A6.
    case 0xC4F5A8: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/ending/play_credits.asm:38 BEQL @UNKNOWN11
    case 0xC4F5A9: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/ending/play_credits.asm:38 BEQL @UNKNOWN11
    case 0xC4F5AB: {
        Instruction step(cpu, 0x4C, 0x00F652u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/ending/play_credits.asm:39 LDX #$FFFF
    case 0xC4F5AE: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/ending/play_credits.asm:39 LDX #$FFFF
    // Overlapping static entry reached from 0xC4F5AE.
    case 0xC4F5B0: {
        Instruction step(cpu, 0xFF, 0x0040A9u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/ending/play_credits.asm:40 LDA #64
    case 0xC4F5B1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000040u : 0x000040u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/play_credits.asm:40 LDA #64
    // Overlapping static entry reached from 0xC4F5B1.
    case 0xC4F5B3: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/play_credits.asm:41 JSL UNKNOWN_C496E7
    case 0xC4F5B4: {
        Instruction step(cpu, 0x22, 0xC496E7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/play_credits.asm:43 LDX #64
    case 0xC4F5B8: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000040u : 0x000040u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/ending/play_credits.asm:43 LDX #64
    // Overlapping static entry reached from 0xC4F5B8.
    case 0xC4F5BA: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/play_credits.asm:44 STX @LOCAL01
    case 0xC4F5BB: {
        Instruction step(cpu, 0x86, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/ending/play_credits.asm:45 BRA @UNKNOWN5
    case 0xC4F5BD: {
        Instruction step(cpu, 0x80, 0x000011u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/ending/play_credits.asm:47 JSL UPDATE_MAP_PALETTE_ANIMATION
    case 0xC4F5BF: {
        Instruction step(cpu, 0x22, 0xC426EDu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/play_credits.asm:48 JSL PROCESS_CREDITS_DMA_QUEUE
    case 0xC4F5C3: {
        Instruction step(cpu, 0x22, 0xC4F01Du, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/play_credits.asm:49 JSL UNKNOWN_C1004E
    case 0xC4F5C7: {
        Instruction step(cpu, 0x22, 0xC1004Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/play_credits.asm:50 LDX @LOCAL01
    case 0xC4F5CB: {
        Instruction step(cpu, 0xA6, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/ending/play_credits.asm:51 DEX
    case 0xC4F5CD: {
        Instruction step(cpu, 0xCA, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_x();
        return step.finish();
    }
    // src/ending/play_credits.asm:52 STX @LOCAL01
    case 0xC4F5CE: {
        Instruction step(cpu, 0x86, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/ending/play_credits.asm:54 BNE @UNKNOWN4
    case 0xC4F5D0: {
        Instruction step(cpu, 0xD0, 0x0000EDu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/ending/play_credits.asm:55 JSL UNKNOWN_C49740
    case 0xC4F5D2: {
        Instruction step(cpu, 0x22, 0xC49740u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/play_credits.asm:56 LDY @LOCAL02
    case 0xC4F5D6: {
        Instruction step(cpu, 0xA4, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/ending/play_credits.asm:57 TYA
    case 0xC4F5D8: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/ending/play_credits.asm:58 JSL SLIDE_CREDITS_PHOTOGRAPH
    case 0xC4F5D9: {
        Instruction step(cpu, 0x22, 0xC4F46Fu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/play_credits.asm:59 BRA @UNKNOWN7
    case 0xC4F5DD: {
        Instruction step(cpu, 0x80, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/ending/play_credits.asm:61 JSL PROCESS_CREDITS_DMA_QUEUE
    case 0xC4F5DF: {
        Instruction step(cpu, 0x22, 0xC4F01Du, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/play_credits.asm:62 JSL UNKNOWN_C1004E
    case 0xC4F5E3: {
        Instruction step(cpu, 0x22, 0xC1004Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/play_credits.asm:64 LDA @VIRTUAL02
    case 0xC4F5E7: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/play_credits.asm:65 CMP BG3_Y_POS
    case 0xC4F5E9: {
        Instruction step(cpu, 0xCD, 0x00003Bu, 3u, AddressMode::Absolute);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/ending/play_credits.asm:66 BGT @UNKNOWN6
    case 0xC4F5EC: {
        Instruction step(cpu, 0xF0, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:767 BCS dest
    // Macro caller: src/ending/play_credits.asm:66 BGT @UNKNOWN6
    case 0xC4F5EE: {
        Instruction step(cpu, 0xB0, 0x0000EFu, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/play_credits.asm:67 LOADPTR BUFFER+32, @LOCAL00
    case 0xC4F5F0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/play_credits.asm:67 LOADPTR BUFFER+32, @LOCAL00
    // Overlapping static entry reached from 0xC4F5F0.
    case 0xC4F5F2: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/play_credits.asm:67 LOADPTR BUFFER+32, @LOCAL00
    case 0xC4F5F3: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/play_credits.asm:67 LOADPTR BUFFER+32, @LOCAL00
    case 0xC4F5F5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Fu : 0x00007Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/play_credits.asm:67 LOADPTR BUFFER+32, @LOCAL00
    // Overlapping static entry reached from 0xC4F5F5.
    case 0xC4F5F7: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/ending/play_credits.asm:67 LOADPTR BUFFER+32, @LOCAL00
    case 0xC4F5F8: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/play_credits.asm:68 LDX #480
    case 0xC4F5FA: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x0000E0u : 0x0001E0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/ending/play_credits.asm:68 LDX #480
    // Overlapping static entry reached from 0xC4F5FA.
    case 0xC4F5FC: {
        Instruction step(cpu, 0x01, 0x0000E2u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/ending/play_credits.asm:69 SEP #PROC_FLAGS::ACCUM8
    case 0xC4F5FD: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/ending/play_credits.asm:69 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC4F5FC.
    case 0xC4F5FE: {
        Instruction step(cpu, 0x20, 0x0000A9u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/ending/play_credits.asm:70 LDA #0
    case 0xC4F5FF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x002200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/play_credits.asm:71 JSL MEMSET24
    case 0xC4F601: {
        Instruction step(cpu, 0x22, 0xC08F15u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/play_credits.asm:71 JSL MEMSET24
    // Overlapping static entry reached from 0xC4F5FF.
    case 0xC4F602: {
        Instruction step(cpu, 0x15, 0x00008Fu, 2u, AddressMode::DirectPageIndexedX);
        step.or_accumulator();
        return step.finish();
    }
    // src/ending/play_credits.asm:71 JSL MEMSET24
    // Overlapping static entry reached from 0xC4F602.
    case 0xC4F604: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000A2u : 0x00FFA2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/ending/play_credits.asm:73 LDX #$FFFF
    case 0xC4F605: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/ending/play_credits.asm:73 LDX #$FFFF
    // Overlapping static entry reached from 0xC4F604.
    case 0xC4F606: {
        Instruction step(cpu, 0xFF, 0x40A9FFu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/ending/play_credits.asm:73 LDX #$FFFF
    // Overlapping static entry reached from 0xC4F605.
    case 0xC4F607: {
        Instruction step(cpu, 0xFF, 0x0040A9u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/ending/play_credits.asm:74 LDA #64
    case 0xC4F608: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000040u : 0x000040u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/play_credits.asm:74 LDA #64
    // Overlapping static entry reached from 0xC4F608.
    case 0xC4F60A: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/play_credits.asm:75 JSL UNKNOWN_C496E7
    case 0xC4F60B: {
        Instruction step(cpu, 0x22, 0xC496E7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/play_credits.asm:76 LDX #0
    case 0xC4F60F: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/ending/play_credits.asm:76 LDX #0
    // Overlapping static entry reached from 0xC4F60F.
    case 0xC4F611: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/play_credits.asm:77 STX @LOCAL01
    case 0xC4F612: {
        Instruction step(cpu, 0x86, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/ending/play_credits.asm:78 BRA @UNKNOWN10
    case 0xC4F614: {
        Instruction step(cpu, 0x80, 0x000011u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/ending/play_credits.asm:80 JSL UPDATE_MAP_PALETTE_ANIMATION
    case 0xC4F616: {
        Instruction step(cpu, 0x22, 0xC426EDu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/play_credits.asm:81 JSL PROCESS_CREDITS_DMA_QUEUE
    case 0xC4F61A: {
        Instruction step(cpu, 0x22, 0xC4F01Du, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/play_credits.asm:82 JSL UNKNOWN_C1004E
    case 0xC4F61E: {
        Instruction step(cpu, 0x22, 0xC1004Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/play_credits.asm:83 LDX @LOCAL01
    case 0xC4F622: {
        Instruction step(cpu, 0xA6, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/ending/play_credits.asm:84 INX
    case 0xC4F624: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/ending/play_credits.asm:85 STX @LOCAL01
    case 0xC4F625: {
        Instruction step(cpu, 0x86, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/ending/play_credits.asm:87 CPX #64
    case 0xC4F627: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000040u : 0x000040u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/ending/play_credits.asm:87 CPX #64
    // Overlapping static entry reached from 0xC4F627.
    case 0xC4F629: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/play_credits.asm:88 BCC @UNKNOWN9
    case 0xC4F62A: {
        Instruction step(cpu, 0x90, 0x0000EAu, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/ending/play_credits.asm:89 SEP #PROC_FLAGS::ACCUM8
    case 0xC4F62C: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:1284 STZ dest
    // Macro caller: src/ending/play_credits.asm:90 STZ_BADOPT @LOCAL00
    case 0xC4F62E: {
        Instruction step(cpu, 0x64, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/ending/play_credits.asm:91 LDX #480
    case 0xC4F630: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x0000E0u : 0x0001E0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/ending/play_credits.asm:91 LDX #480
    // Overlapping static entry reached from 0xC4F630.
    case 0xC4F632: {
        Instruction step(cpu, 0x01, 0x0000C2u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/ending/play_credits.asm:92 REP #PROC_FLAGS::ACCUM8
    case 0xC4F633: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/ending/play_credits.asm:92 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC4F632.
    case 0xC4F634: {
        Instruction step(cpu, 0x20, 0x0020A9u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/ending/play_credits.asm:93 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 1
    case 0xC4F635: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000020u : 0x000220u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/play_credits.asm:93 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 1
    // Overlapping static entry reached from 0xC4F635.
    case 0xC4F637: {
        Instruction step(cpu, 0x02, 0x000022u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/ending/play_credits.asm:94 JSL MEMSET16
    case 0xC4F638: {
        Instruction step(cpu, 0x22, 0xC08EFCu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/play_credits.asm:95 LDA #24
    case 0xC4F63C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000018u : 0x000018u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/play_credits.asm:95 LDA #24
    // Overlapping static entry reached from 0xC4F63C.
    case 0xC4F63E: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/play_credits.asm:96 JSL UNKNOWN_C0856B
    case 0xC4F63F: {
        Instruction step(cpu, 0x22, 0xC0856Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/play_credits.asm:97 JSL PROCESS_CREDITS_DMA_QUEUE
    case 0xC4F643: {
        Instruction step(cpu, 0x22, 0xC4F01Du, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/play_credits.asm:98 JSL UNKNOWN_C1004E
    case 0xC4F647: {
        Instruction step(cpu, 0x22, 0xC1004Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/play_credits.asm:99 LDA @VIRTUAL02
    case 0xC4F64B: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/play_credits.asm:100 CLC
    case 0xC4F64D: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/play_credits.asm:101 ADC @VIRTUAL04
    case 0xC4F64E: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/play_credits.asm:102 STA @VIRTUAL02
    case 0xC4F650: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/play_credits.asm:104 LDY @LOCAL02
    case 0xC4F652: {
        Instruction step(cpu, 0xA4, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/ending/play_credits.asm:105 INY
    case 0xC4F654: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/ending/play_credits.asm:106 STY @LOCAL02
    case 0xC4F655: {
        Instruction step(cpu, 0x84, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/ending/play_credits.asm:108 CPY #NUM_PHOTOS
    case 0xC4F657: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/ending/play_credits.asm:108 CPY #NUM_PHOTOS
    // Overlapping static entry reached from 0xC4F657.
    case 0xC4F659: {
        Instruction step(cpu, 0x00, 0x0000B0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:784 BCS :+
    // Macro caller: src/ending/play_credits.asm:109 BCCL @UNKNOWN2
    case 0xC4F65A: {
        Instruction step(cpu, 0xB0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/ending/play_credits.asm:109 BCCL @UNKNOWN2
    case 0xC4F65C: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:786 JMP dest
    // Macro caller: src/ending/play_credits.asm:109 BCCL @UNKNOWN2
    case 0xC4F65E: {
        Instruction step(cpu, 0x4C, 0x00F5A1u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/ending/play_credits.asm:110 BRA @UNKNOWN15
    case 0xC4F661: {
        Instruction step(cpu, 0x80, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/ending/play_credits.asm:112 JSL PROCESS_CREDITS_DMA_QUEUE
    case 0xC4F663: {
        Instruction step(cpu, 0x22, 0xC4F01Du, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/play_credits.asm:113 JSL UNKNOWN_C1004E
    case 0xC4F667: {
        Instruction step(cpu, 0x22, 0xC1004Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/play_credits.asm:115 LDA BG3_Y_POS
    case 0xC4F66B: {
        Instruction step(cpu, 0xAD, 0x00003Bu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/play_credits.asm:116 CMP #CREDITS_LENGTH
    case 0xC4F66E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000B0u : 0x0011B0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/ending/play_credits.asm:116 CMP #CREDITS_LENGTH
    // Overlapping static entry reached from 0xC4F66E.
    case 0xC4F670: {
        Instruction step(cpu, 0x11, 0x000090u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.or_accumulator();
        return step.finish();
    }
    // src/ending/play_credits.asm:117 BCC @UNKNOWN14
    case 0xC4F671: {
        Instruction step(cpu, 0x90, 0x0000F0u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/ending/play_credits.asm:117 BCC @UNKNOWN14
    // Overlapping static entry reached from 0xC4F670.
    case 0xC4F672: {
        Instruction step(cpu, 0xF0, 0x000022u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/ending/play_credits.asm:118 JSL RESET_IRQ_CALLBACK
    case 0xC4F673: {
        Instruction step(cpu, 0x22, 0xC08522u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/play_credits.asm:118 JSL RESET_IRQ_CALLBACK
    // Overlapping static entry reached from 0xC4F672.
    case 0xC4F674: {
        Instruction step(cpu, 0x22, 0xA2C085u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/play_credits.asm:119 LDX #0
    case 0xC4F677: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/ending/play_credits.asm:119 LDX #0
    // Overlapping static entry reached from 0xC4F674.
    case 0xC4F678: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/play_credits.asm:119 LDX #0
    // Overlapping static entry reached from 0xC4F677.
    case 0xC4F679: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/play_credits.asm:120 STX @LOCAL01
    case 0xC4F67A: {
        Instruction step(cpu, 0x86, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/ending/play_credits.asm:121 BRA @UNKNOWN17
    case 0xC4F67C: {
        Instruction step(cpu, 0x80, 0x000009u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/ending/play_credits.asm:123 JSL UNKNOWN_C1004E
    case 0xC4F67E: {
        Instruction step(cpu, 0x22, 0xC1004Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/play_credits.asm:124 LDX @LOCAL01
    case 0xC4F682: {
        Instruction step(cpu, 0xA6, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/ending/play_credits.asm:125 INX
    case 0xC4F684: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/ending/play_credits.asm:126 STX @LOCAL01
    case 0xC4F685: {
        Instruction step(cpu, 0x86, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/ending/play_credits.asm:128 CPX #2000
    case 0xC4F687: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x0000D0u : 0x0007D0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/ending/play_credits.asm:128 CPX #2000
    // Overlapping static entry reached from 0xC4F687.
    case 0xC4F689: {
        Instruction step(cpu, 0x07, 0x000090u, 2u, AddressMode::DirectPageIndirectLong);
        step.or_accumulator();
        return step.finish();
    }
    // src/ending/play_credits.asm:129 BCC @UNKNOWN16
    case 0xC4F68A: {
        Instruction step(cpu, 0x90, 0x0000F2u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/ending/play_credits.asm:129 BCC @UNKNOWN16
    // Overlapping static entry reached from 0xC4F689.
    case 0xC4F68B: {
        Instruction step(cpu, 0xF2, 0x0000A0u, 2u, AddressMode::DirectPageIndirect);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/ending/play_credits.asm:130 LDY #0
    case 0xC4F68C: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/ending/play_credits.asm:130 LDY #0
    // Overlapping static entry reached from 0xC4F68B.
    case 0xC4F68D: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/play_credits.asm:130 LDY #0
    // Overlapping static entry reached from 0xC4F68C.
    case 0xC4F68E: {
        Instruction step(cpu, 0x00, 0x0000A2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/play_credits.asm:131 LDX #2
    case 0xC4F68F: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/ending/play_credits.asm:131 LDX #2
    // Overlapping static entry reached from 0xC4F68F.
    case 0xC4F691: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/play_credits.asm:132 LDA #1
    case 0xC4F692: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/play_credits.asm:132 LDA #1
    // Overlapping static entry reached from 0xC4F692.
    case 0xC4F694: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/play_credits.asm:133 JSL FADE_OUT_WITH_MOSAIC
    case 0xC4F695: {
        Instruction step(cpu, 0x22, 0xC08814u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/play_credits.asm:133 JSL FADE_OUT_WITH_MOSAIC
    // Overlapping static entry reached from 0xC4F672.
    case 0xC4F696: {
        Instruction step(cpu, 0x14, 0x000088u, 2u, AddressMode::DirectPage);
        step.reset_tested_bits();
        return step.finish();
    }
    // src/ending/play_credits.asm:133 JSL FADE_OUT_WITH_MOSAIC
    // Overlapping static entry reached from 0xC4F696.
    case 0xC4F698: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000A2u : 0x0000A2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/ending/play_credits.asm:134 LDX #0
    case 0xC4F699: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/ending/play_credits.asm:134 LDX #0
    // Overlapping static entry reached from 0xC4F698.
    case 0xC4F69A: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/play_credits.asm:134 LDX #0
    // Overlapping static entry reached from 0xC4F699.
    case 0xC4F69B: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/play_credits.asm:135 LDA #$B3
    case 0xC4F69C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000B3u : 0x0000B3u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/play_credits.asm:135 LDA #$B3
    // Overlapping static entry reached from 0xC4F69C.
    case 0xC4F69E: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/play_credits.asm:136 JSL UNKNOWN_C4249A
    case 0xC4F69F: {
        Instruction step(cpu, 0x22, 0xC4249Au, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/play_credits.asm:137 JSL UNKNOWN_C08726
    case 0xC4F6A3: {
        Instruction step(cpu, 0x22, 0xC08726u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/play_credits.asm:138 JSL OVERWORLD_SETUP_VRAM
    case 0xC4F6A7: {
        Instruction step(cpu, 0x22, 0xC00013u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/play_credits.asm:139 JSL UNKNOWN_C021E6
    case 0xC4F6AB: {
        Instruction step(cpu, 0x22, 0xC021E6u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/play_credits.asm:140 LDA #23
    case 0xC4F6AF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000017u : 0x000017u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/play_credits.asm:140 LDA #23
    // Overlapping static entry reached from 0xC4F6AF.
    case 0xC4F6B1: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/play_credits.asm:141 STA ENTITY_ALLOCATION_MIN_SLOT
    case 0xC4F6B2: {
        Instruction step(cpu, 0x8D, 0x000A4Cu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/play_credits.asm:142 LDA #24
    case 0xC4F6B5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000018u : 0x000018u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/play_credits.asm:142 LDA #24
    // Overlapping static entry reached from 0xC4F6B5.
    case 0xC4F6B7: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/play_credits.asm:143 STA ENTITY_ALLOCATION_MAX_SLOT
    case 0xC4F6B8: {
        Instruction step(cpu, 0x8D, 0x000A4Eu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/play_credits.asm:144 LDY #0
    case 0xC4F6BB: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/ending/play_credits.asm:144 LDY #0
    // Overlapping static entry reached from 0xC4F6BB.
    case 0xC4F6BD: {
        Instruction step(cpu, 0x00, 0x0000BBu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/play_credits.asm:145 TYX
    case 0xC4F6BE: {
        Instruction step(cpu, 0xBB, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_x();
        return step.finish();
    }
    // src/ending/play_credits.asm:146 LDA #EVENT_SCRIPT::EVENT_001
    case 0xC4F6BF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/play_credits.asm:146 LDA #EVENT_SCRIPT::EVENT_001
    // Overlapping static entry reached from 0xC4F6BF.
    case 0xC4F6C1: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/play_credits.asm:147 JSL INIT_ENTITY
    case 0xC4F6C2: {
        Instruction step(cpu, 0x22, 0xC09321u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/play_credits.asm:148 JSL UNKNOWN_C02D29
    case 0xC4F6C6: {
        Instruction step(cpu, 0x22, 0xC02D29u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/play_credits.asm:149 JSL UNKNOWN_C03A24
    case 0xC4F6CA: {
        Instruction step(cpu, 0x22, 0xC03A24u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/ending/play_credits.asm:150 PROMOTENEARPTR BG2_BUFFER, @VIRTUAL06
    case 0xC4F6CE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FEu : 0x007DFEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/ending/play_credits.asm:150 PROMOTENEARPTR BG2_BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC4F6CE.
    case 0xC4F6D0: {
        Instruction step(cpu, 0x7D, 0x000685u, 3u, AddressMode::AbsoluteIndexedX);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/ending/play_credits.asm:150 PROMOTENEARPTR BG2_BUFFER, @VIRTUAL06
    case 0xC4F6D1: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:909 PHB
    // Macro caller: src/ending/play_credits.asm:150 PROMOTENEARPTR BG2_BUFFER, @VIRTUAL06
    case 0xC4F6D3: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/ending/play_credits.asm:150 PROMOTENEARPTR BG2_BUFFER, @VIRTUAL06
    case 0xC4F6D4: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:911 PLA
    // Macro caller: src/ending/play_credits.asm:150 PROMOTENEARPTR BG2_BUFFER, @VIRTUAL06
    case 0xC4F6D6: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/ending/play_credits.asm:150 PROMOTENEARPTR BG2_BUFFER, @VIRTUAL06
    case 0xC4F6D7: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/ending/play_credits.asm:150 PROMOTENEARPTR BG2_BUFFER, @VIRTUAL06
    case 0xC4F6D9: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/ending/play_credits.asm:151 LDX #0
    case 0xC4F6DB: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/ending/play_credits.asm:151 LDX #0
    // Overlapping static entry reached from 0xC4F6DB.
    case 0xC4F6DD: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/play_credits.asm:152 BRA @UNKNOWN19
    case 0xC4F6DE: {
        Instruction step(cpu, 0x80, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/ending/play_credits.asm:154 REP #PROC_FLAGS::ACCUM8
    case 0xC4F6E0: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/ending/play_credits.asm:155 LDA #0
    case 0xC4F6E2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/play_credits.asm:155 LDA #0
    // Overlapping static entry reached from 0xC4F6E2.
    case 0xC4F6E4: {
        Instruction step(cpu, 0x00, 0x000087u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/play_credits.asm:156 STA [@VIRTUAL06]
    case 0xC4F6E5: {
        Instruction step(cpu, 0x87, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/play_credits.asm:157 INC @VIRTUAL06
    case 0xC4F6E7: {
        Instruction step(cpu, 0xE6, 0x000006u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/ending/play_credits.asm:158 INC @VIRTUAL06
    case 0xC4F6E9: {
        Instruction step(cpu, 0xE6, 0x000006u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/ending/play_credits.asm:159 INX
    case 0xC4F6EB: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/ending/play_credits.asm:161 CPX #512
    case 0xC4F6EC: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000000u : 0x000200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/ending/play_credits.asm:161 CPX #512
    // Overlapping static entry reached from 0xC4F6EC.
    case 0xC4F6EE: {
        Instruction step(cpu, 0x02, 0x000090u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/ending/play_credits.asm:162 BCC @UNKNOWN18
    case 0xC4F6EF: {
        Instruction step(cpu, 0x90, 0x0000EFu, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/ending/play_credits.asm:163 JSL UNDRAW_FLYOVER_TEXT
    case 0xC4F6F1: {
        Instruction step(cpu, 0x22, 0xC4800Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/play_credits.asm:164 SEP #PROC_FLAGS::ACCUM8
    case 0xC4F6F5: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/ending/play_credits.asm:165 LDA #$0017
    case 0xC4F6F7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000017u : 0x008D17u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/play_credits.asm:166 STA TM_MIRROR
    case 0xC4F6F9: {
        Instruction step(cpu, 0x8D, 0x00001Au, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/play_credits.asm:166 STA TM_MIRROR
    // Overlapping static entry reached from 0xC4F6F7.
    case 0xC4F6FA: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/ending/play_credits.asm:166 STA TM_MIRROR
    // Overlapping static entry reached from 0xC4F6FA.
    case 0xC4F6FB: {
        Instruction step(cpu, 0x00, 0x0000C2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/play_credits.asm:167 REP #PROC_FLAGS::ACCUM8
    case 0xC4F6FC: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/ending/play_credits.asm:168 LDA #.LOWORD(PROCESS_OVERWORLD_TASKS)
    case 0xC4F6FE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00004Eu : 0x00DC4Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/play_credits.asm:168 LDA #.LOWORD(PROCESS_OVERWORLD_TASKS)
    // Overlapping static entry reached from 0xC4F6FE.
    case 0xC4F700: {
        Instruction step(cpu, 0xDC, 0x001C22u, 3u, AddressMode::AbsoluteIndirectLong);
        step.jump_long();
        return step.finish();
    }
    // src/ending/play_credits.asm:169 JSL SET_IRQ_CALLBACK
    case 0xC4F701: {
        Instruction step(cpu, 0x22, 0xC0851Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/play_credits.asm:170 STZ DISABLED_TRANSITIONS
    case 0xC4F705: {
        Instruction step(cpu, 0x9C, 0x00B4B6u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/ending/play_credits.asm:171 END_C_FUNCTION
    case 0xC4F708: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/ending/play_credits.asm:171 END_C_FUNCTION
    case 0xC4F709: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
