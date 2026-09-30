// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/battle/instant_win_handler.asm
bool resume_battle_instant_win_handler(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/instant_win_handler.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC261BD: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/instant_win_handler.asm:10 END_STACK_VARS
    case 0xC261BF: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/instant_win_handler.asm:10 END_STACK_VARS
    case 0xC261C0: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/instant_win_handler.asm:10 END_STACK_VARS
    case 0xC261C1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000E4u : 0x00FFE4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/instant_win_handler.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC261C1.
    case 0xC261C3: {
        Instruction step(cpu, 0xFF, 0xBC9C5Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/instant_win_handler.asm:10 END_STACK_VARS
    case 0xC261C4: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:20 STZ BATTLE_INITIATIVE
    case 0xC261C5: {
        Instruction step(cpu, 0x9C, 0x004DBCu, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:20 STZ BATTLE_INITIATIVE
    // Overlapping static entry reached from 0xC261C3.
    case 0xC261C7: {
        Instruction step(cpu, 0x4D, 0x00B7A9u, 3u, AddressMode::Absolute);
        step.xor_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:21 LDA #MUSIC::SUDDEN_VICTORY
    case 0xC261C8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000B7u : 0x0000B7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:21 LDA #MUSIC::SUDDEN_VICTORY
    // Overlapping static entry reached from 0xC261C8.
    case 0xC261CA: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:22 JSL CHANGE_MUSIC
    case 0xC261CB: {
        Instruction step(cpu, 0x22, 0xC4FBBDu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:23 JSL UNKNOWN_C2E9ED
    case 0xC261CF: {
        Instruction step(cpu, 0x22, 0xC2E9EDu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:24 LDX #0
    case 0xC261D3: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:24 LDX #0
    // Overlapping static entry reached from 0xC261D3.
    case 0xC261D5: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:25 STX @LOCAL04
    case 0xC261D6: {
        Instruction step(cpu, 0x86, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:26 BRA @UNKNOWN1
    case 0xC261D8: {
        Instruction step(cpu, 0x80, 0x000017u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:28 LDA #$03E0
    case 0xC261DA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E0u : 0x0003E0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:28 LDA #$03E0
    // Overlapping static entry reached from 0xC261DA.
    case 0xC261DC: {
        Instruction step(cpu, 0x03, 0x000020u, 2u, AddressMode::StackRelative);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:29 JSR UNKNOWN_C26189
    case 0xC261DD: {
        Instruction step(cpu, 0x20, 0x006189u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:29 JSR UNKNOWN_C26189
    // Overlapping static entry reached from 0xC261DC.
    case 0xC261DE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x89, narrow ? 0x000061u : 0x00A961u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.test_bits();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:30 LDA #$001F
    case 0xC261E0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00001Fu : 0x00001Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:30 LDA #$001F
    // Overlapping static entry reached from 0xC261DE.
    case 0xC261E1: {
        Instruction step(cpu, 0x1F, 0x892000u, 4u, AddressMode::LongIndexedX);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:30 LDA #$001F
    // Overlapping static entry reached from 0xC261E0.
    case 0xC261E2: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:31 JSR UNKNOWN_C26189
    case 0xC261E3: {
        Instruction step(cpu, 0x20, 0x006189u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:31 JSR UNKNOWN_C26189
    // Overlapping static entry reached from 0xC261E1.
    case 0xC261E5: {
        Instruction step(cpu, 0x61, 0x0000A9u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:32 LDA #$7C00
    case 0xC261E6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x007C00u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:32 LDA #$7C00
    // Overlapping static entry reached from 0xC261E5.
    case 0xC261E7: {
        Instruction step(cpu, 0x00, 0x00007Cu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:32 LDA #$7C00
    // Overlapping static entry reached from 0xC261E6.
    case 0xC261E8: {
        Instruction step(cpu, 0x7C, 0x008920u, 3u, AddressMode::AbsoluteIndexedIndirectX);
        step.jump();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:33 JSR UNKNOWN_C26189
    case 0xC261E9: {
        Instruction step(cpu, 0x20, 0x006189u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:34 LDX @LOCAL04
    case 0xC261EC: {
        Instruction step(cpu, 0xA6, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:35 INX
    case 0xC261EE: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:36 STX @LOCAL04
    case 0xC261EF: {
        Instruction step(cpu, 0x86, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:38 CPX #2
    case 0xC261F1: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:38 CPX #2
    // Overlapping static entry reached from 0xC261F1.
    case 0xC261F3: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:39 BCC @UNKNOWN0
    case 0xC261F4: {
        Instruction step(cpu, 0x90, 0x0000E4u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:40 LDA #0
    case 0xC261F6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:40 LDA #0
    // Overlapping static entry reached from 0xC261F6.
    case 0xC261F8: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:41 JSR UNKNOWN_C26189
    case 0xC261F9: {
        Instruction step(cpu, 0x20, 0x006189u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/instant_win_handler.asm:42 LOADPTR BUFFER, @LOCAL00
    case 0xC261FC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/instant_win_handler.asm:42 LOADPTR BUFFER, @LOCAL00
    // Overlapping static entry reached from 0xC261FC.
    case 0xC261FE: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/instant_win_handler.asm:42 LOADPTR BUFFER, @LOCAL00
    case 0xC261FF: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/instant_win_handler.asm:42 LOADPTR BUFFER, @LOCAL00
    case 0xC26201: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Fu : 0x00007Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/instant_win_handler.asm:42 LOADPTR BUFFER, @LOCAL00
    // Overlapping static entry reached from 0xC26201.
    case 0xC26203: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/instant_win_handler.asm:42 LOADPTR BUFFER, @LOCAL00
    case 0xC26204: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/instant_win_handler.asm:43 LOADPTR BUFFER + $2000, @LOCAL01
    case 0xC26206: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x002000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/instant_win_handler.asm:43 LOADPTR BUFFER + $2000, @LOCAL01
    // Overlapping static entry reached from 0xC26206.
    case 0xC26208: {
        Instruction step(cpu, 0x20, 0x001285u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/instant_win_handler.asm:43 LOADPTR BUFFER + $2000, @LOCAL01
    case 0xC26209: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/instant_win_handler.asm:43 LOADPTR BUFFER + $2000, @LOCAL01
    case 0xC2620B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Fu : 0x00007Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/instant_win_handler.asm:43 LOADPTR BUFFER + $2000, @LOCAL01
    // Overlapping static entry reached from 0xC2620B.
    case 0xC2620D: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/instant_win_handler.asm:43 LOADPTR BUFFER + $2000, @LOCAL01
    case 0xC2620E: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:44 LDA #$0200
    case 0xC26210: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:44 LDA #$0200
    // Overlapping static entry reached from 0xC26210.
    case 0xC26212: {
        Instruction step(cpu, 0x02, 0x000022u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:45 JSL MEMCPY24
    case 0xC26213: {
        Instruction step(cpu, 0x22, 0xC08EEDu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:46 LDX #$FFFF
    case 0xC26217: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:46 LDX #$FFFF
    // Overlapping static entry reached from 0xC26217.
    case 0xC26219: {
        Instruction step(cpu, 0xFF, 0x0006A9u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:47 LDA #6
    case 0xC2621A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:47 LDA #6
    // Overlapping static entry reached from 0xC2621A.
    case 0xC2621C: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:48 JSL UNKNOWN_C496E7
    case 0xC2621D: {
        Instruction step(cpu, 0x22, 0xC496E7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:49 LDX #0
    case 0xC26221: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:49 LDX #0
    // Overlapping static entry reached from 0xC26221.
    case 0xC26223: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:50 STX @LOCAL03
    case 0xC26224: {
        Instruction step(cpu, 0x86, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:51 BRA @UNKNOWN3
    case 0xC26226: {
        Instruction step(cpu, 0x80, 0x00000Du, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:53 JSL UPDATE_MAP_PALETTE_ANIMATION
    case 0xC26228: {
        Instruction step(cpu, 0x22, 0xC426EDu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:54 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC2622C: {
        Instruction step(cpu, 0x22, 0xC08756u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:55 LDX @LOCAL03
    case 0xC26230: {
        Instruction step(cpu, 0xA6, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:56 INX
    case 0xC26232: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:57 STX @LOCAL03
    case 0xC26233: {
        Instruction step(cpu, 0x86, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:59 CPX #6
    case 0xC26235: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:59 CPX #6
    // Overlapping static entry reached from 0xC26235.
    case 0xC26237: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:60 BCC @UNKNOWN2
    case 0xC26238: {
        Instruction step(cpu, 0x90, 0x0000EEu, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:61 JSL UNKNOWN_C49740
    case 0xC2623A: {
        Instruction step(cpu, 0x22, 0xC49740u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:62 JSL UNKNOWN_C0943C
    case 0xC2623E: {
        Instruction step(cpu, 0x22, 0xC0943Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:740 LDA arg
    // Macro caller: src/battle/instant_win_handler.asm:63 CREATE_WINDOW_FAR #WINDOW::TEXT_BATTLE
    case 0xC26242: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Eu : 0x00000Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:740 LDA arg
    // Macro caller: src/battle/instant_win_handler.asm:63 CREATE_WINDOW_FAR #WINDOW::TEXT_BATTLE
    // Overlapping static entry reached from 0xC26242.
    case 0xC26244: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:741 JSL REDIRECT_CREATE_WINDOW
    // Macro caller: src/battle/instant_win_handler.asm:63 CREATE_WINDOW_FAR #WINDOW::TEXT_BATTLE
    case 0xC26245: {
        Instruction step(cpu, 0x22, 0xC1DD47u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:64 STZ BATTLE_MONEY_SCRATCH
    case 0xC26249: {
        Instruction step(cpu, 0x9C, 0x00A978u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:65 LDA #0
    case 0xC2624C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:65 LDA #0
    // Overlapping static entry reached from 0xC2624C.
    case 0xC2624E: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:66 STA @LOCAL03
    case 0xC2624F: {
        Instruction step(cpu, 0x85, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:67 BRA @UNKNOWN5
    case 0xC26251: {
        Instruction step(cpu, 0x80, 0x000021u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:69 ASL
    case 0xC26253: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:70 TAX
    case 0xC26254: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:71 LDA ENEMIES_IN_BATTLE_IDS,X
    case 0xC26255: {
        Instruction step(cpu, 0xBD, 0x009F8Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:72 LDY #.SIZEOF(enemy_data)
    case 0xC26258: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Eu : 0x00005Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:72 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC26258.
    case 0xC2625A: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:73 JSL MULT168
    case 0xC2625B: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:74 CLC
    case 0xC2625F: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:75 ADC #enemy_data::money
    case 0xC26260: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000029u : 0x000029u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:75 ADC #enemy_data::money
    // Overlapping static entry reached from 0xC26260.
    case 0xC26262: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:76 TAX
    case 0xC26263: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:77 LDA f:ENEMY_CONFIGURATION_TABLE,X
    case 0xC26264: {
        Instruction step(cpu, 0xBF, 0xD59589u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:78 CLC
    case 0xC26268: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:79 ADC BATTLE_MONEY_SCRATCH
    case 0xC26269: {
        Instruction step(cpu, 0x6D, 0x00A978u, 3u, AddressMode::Absolute);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:80 STA BATTLE_MONEY_SCRATCH
    case 0xC2626C: {
        Instruction step(cpu, 0x8D, 0x00A978u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:81 LDA @LOCAL03
    case 0xC2626F: {
        Instruction step(cpu, 0xA5, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:82 INC
    case 0xC26271: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:83 STA @LOCAL03
    case 0xC26272: {
        Instruction step(cpu, 0x85, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:85 CMP ENEMIES_IN_BATTLE
    case 0xC26274: {
        Instruction step(cpu, 0xCD, 0x009F8Au, 3u, AddressMode::Absolute);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:86 BCC @UNKNOWN4
    case 0xC26277: {
        Instruction step(cpu, 0x90, 0x0000DAu, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:87 LDY #.LOWORD(GAME_STATE) + game_state::unknownC4
    case 0xC26279: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x0000B9u : 0x0098B9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:87 LDY #.LOWORD(GAME_STATE) + game_state::unknownC4
    // Overlapping static entry reached from 0xC26279.
    case 0xC2627B: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:88 STY @LOCAL02ALT
    case 0xC2627C: {
        Instruction step(cpu, 0x84, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:89 LDA BATTLE_MONEY_SCRATCH
    case 0xC2627E: {
        Instruction step(cpu, 0xAD, 0x00A978u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/instant_win_handler.asm:90 STORE_INT1632 @VIRTUAL06
    case 0xC26281: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/instant_win_handler.asm:90 STORE_INT1632 @VIRTUAL06
    case 0xC26283: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/instant_win_handler.asm:91 MOVE_INT @VIRTUAL06, @LOCAL00 ;@LOCAL00 = @VIRTUAL06
    case 0xC26285: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/instant_win_handler.asm:91 MOVE_INT @VIRTUAL06, @LOCAL00 ;@LOCAL00 = @VIRTUAL06
    case 0xC26287: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/instant_win_handler.asm:91 MOVE_INT @VIRTUAL06, @LOCAL00 ;@LOCAL00 = @VIRTUAL06
    case 0xC26289: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/instant_win_handler.asm:91 MOVE_INT @VIRTUAL06, @LOCAL00 ;@LOCAL00 = @VIRTUAL06
    case 0xC2628B: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:92 JSL DEPOSIT_INTO_ATM
    case 0xC2628D: {
        Instruction step(cpu, 0x22, 0xC2281Du, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/instant_win_handler.asm:93 MOVE_INT @VIRTUAL06, @VIRTUAL0A ;@VIRTUAL0A = @VIRTUAL06
    case 0xC26291: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/instant_win_handler.asm:93 MOVE_INT @VIRTUAL06, @VIRTUAL0A ;@VIRTUAL0A = @VIRTUAL06
    case 0xC26293: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/instant_win_handler.asm:93 MOVE_INT @VIRTUAL06, @VIRTUAL0A ;@VIRTUAL0A = @VIRTUAL06
    case 0xC26295: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/instant_win_handler.asm:93 MOVE_INT @VIRTUAL06, @VIRTUAL0A ;@VIRTUAL0A = @VIRTUAL06
    case 0xC26297: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:94 LDY @LOCAL02ALT
    case 0xC26299: {
        Instruction step(cpu, 0xA4, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/battle/instant_win_handler.asm:95 MOVE_INT_YPTRSRC 0, @VIRTUAL06 ;@VIRTUAL06 = game_state.unknownC4
    case 0xC2629B: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1114 STA dest
    // Macro caller: src/battle/instant_win_handler.asm:95 MOVE_INT_YPTRSRC 0, @VIRTUAL06 ;@VIRTUAL06 = game_state.unknownC4
    case 0xC2629E: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/battle/instant_win_handler.asm:95 MOVE_INT_YPTRSRC 0, @VIRTUAL06 ;@VIRTUAL06 = game_state.unknownC4
    case 0xC262A0: {
        Instruction step(cpu, 0xB9, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/battle/instant_win_handler.asm:95 MOVE_INT_YPTRSRC 0, @VIRTUAL06 ;@VIRTUAL06 = game_state.unknownC4
    case 0xC262A3: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:96 CLC
    case 0xC262A5: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // include/macros.asm:942 LDA val1
    // Macro caller: src/battle/instant_win_handler.asm:97 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A ;@VIRTUAL06 += @VIRTUAL0A
    case 0xC262A6: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:943 ADC val2
    // Macro caller: src/battle/instant_win_handler.asm:97 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A ;@VIRTUAL06 += @VIRTUAL0A
    case 0xC262A8: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:944 STA dest
    // Macro caller: src/battle/instant_win_handler.asm:97 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A ;@VIRTUAL06 += @VIRTUAL0A
    case 0xC262AA: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/battle/instant_win_handler.asm:97 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A ;@VIRTUAL06 += @VIRTUAL0A
    case 0xC262AC: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/battle/instant_win_handler.asm:97 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A ;@VIRTUAL06 += @VIRTUAL0A
    case 0xC262AE: {
        Instruction step(cpu, 0x65, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/battle/instant_win_handler.asm:97 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A ;@VIRTUAL06 += @VIRTUAL0A
    case 0xC262B0: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1075 LDA src
    // Macro caller: src/battle/instant_win_handler.asm:98 MOVE_INT_YPTRDEST @VIRTUAL06, 0 ;game_state.unknownC4 = @VIRTUAL06
    case 0xC262B2: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/battle/instant_win_handler.asm:98 MOVE_INT_YPTRDEST @VIRTUAL06, 0 ;game_state.unknownC4 = @VIRTUAL06
    case 0xC262B4: {
        Instruction step(cpu, 0x99, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/battle/instant_win_handler.asm:98 MOVE_INT_YPTRDEST @VIRTUAL06, 0 ;game_state.unknownC4 = @VIRTUAL06
    case 0xC262B7: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/battle/instant_win_handler.asm:98 MOVE_INT_YPTRDEST @VIRTUAL06, 0 ;game_state.unknownC4 = @VIRTUAL06
    case 0xC262B9: {
        Instruction step(cpu, 0x99, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:99 LDY #0
    case 0xC262BC: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:99 LDY #0
    // Overlapping static entry reached from 0xC262BC.
    case 0xC262BE: {
        Instruction step(cpu, 0x00, 0x000084u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:100 STY @LOCAL03
    case 0xC262BF: {
        Instruction step(cpu, 0x84, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:101 BRA @UNKNOWN7
    case 0xC262C1: {
        Instruction step(cpu, 0x80, 0x00001Cu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:103 SEP #PROC_FLAGS::ACCUM8
    case 0xC262C3: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:1284 STZ dest
    // Macro caller: src/battle/instant_win_handler.asm:104 STZ_BADOPT @LOCAL00
    case 0xC262C5: {
        Instruction step(cpu, 0x64, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:105 LDX #.SIZEOF(battler)
    case 0xC262C7: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:105 LDX #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC262C7.
    case 0xC262C9: {
        Instruction step(cpu, 0x00, 0x0000C2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:106 REP #PROC_FLAGS::ACCUM8
    case 0xC262CA: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:107 TYA
    case 0xC262CC: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:108 TXY
    case 0xC262CD: {
        Instruction step(cpu, 0x9B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_y();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:109 JSL MULT168
    case 0xC262CE: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:110 CLC
    case 0xC262D2: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:111 ADC #.LOWORD(BATTLERS_TABLE)
    case 0xC262D3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000ACu : 0x009FACu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:111 ADC #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC262D3.
    case 0xC262D5: {
        Instruction step(cpu, 0x9F, 0x8EFC22u, 4u, AddressMode::LongIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:112 JSL MEMSET16
    case 0xC262D6: {
        Instruction step(cpu, 0x22, 0xC08EFCu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:112 JSL MEMSET16
    // Overlapping static entry reached from 0xC262D5.
    case 0xC262D9: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000A4u : 0x0018A4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:113 LDY @LOCAL03
    case 0xC262DA: {
        Instruction step(cpu, 0xA4, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:113 LDY @LOCAL03
    // Overlapping static entry reached from 0xC262D9.
    case 0xC262DB: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:114 INY
    case 0xC262DC: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:115 STY @LOCAL03
    case 0xC262DD: {
        Instruction step(cpu, 0x84, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:117 CPY #BATTLER_COUNT
    case 0xC262DF: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:117 CPY #BATTLER_COUNT
    // Overlapping static entry reached from 0xC262DF.
    case 0xC262E1: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:118 BCC @UNKNOWN6
    case 0xC262E2: {
        Instruction step(cpu, 0x90, 0x0000DFu, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:119 LDY #0
    case 0xC262E4: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:119 LDY #0
    // Overlapping static entry reached from 0xC262E4.
    case 0xC262E6: {
        Instruction step(cpu, 0x00, 0x000084u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:120 STY @LOCAL02ALT2
    case 0xC262E7: {
        Instruction step(cpu, 0x84, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:121 BRA @UNKNOWN11
    case 0xC262E9: {
        Instruction step(cpu, 0x80, 0x000029u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:130 LDA GAME_STATE + game_state::party_members,Y
    case 0xC262EB: {
        Instruction step(cpu, 0xB9, 0x00986Fu, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:132 AND #$00FF
    case 0xC262EE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:132 AND #$00FF
    // Overlapping static entry reached from 0xC262EE.
    case 0xC262F0: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:133 STA @LOCAL03
    case 0xC262F1: {
        Instruction step(cpu, 0x85, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:134 BEQ @UNKNOWN10
    case 0xC262F3: {
        Instruction step(cpu, 0xF0, 0x00001Au, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:135 CMP #4
    case 0xC262F5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:135 CMP #4
    // Overlapping static entry reached from 0xC262F5.
    case 0xC262F7: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/battle/instant_win_handler.asm:136 BGT @UNKNOWN10
    case 0xC262F8: {
        Instruction step(cpu, 0xF0, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:767 BCS dest
    // Macro caller: src/battle/instant_win_handler.asm:136 BGT @UNKNOWN10
    case 0xC262FA: {
        Instruction step(cpu, 0xB0, 0x000013u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:137 TYA
    case 0xC262FC: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:138 LDY #.SIZEOF(battler)
    case 0xC262FD: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:138 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC262FD.
    case 0xC262FF: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:139 JSL MULT168
    case 0xC26300: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:140 CLC
    case 0xC26304: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:141 ADC #.LOWORD(BATTLERS_TABLE)
    case 0xC26305: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000ACu : 0x009FACu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:141 ADC #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC26305.
    case 0xC26307: {
        Instruction step(cpu, 0x9F, 0x18A5AAu, 4u, AddressMode::LongIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:142 TAX
    case 0xC26308: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:143 LDA @LOCAL03
    case 0xC26309: {
        Instruction step(cpu, 0xA5, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:144 JSL BATTLE_INIT_PLAYER_STATS
    case 0xC2630B: {
        Instruction step(cpu, 0x22, 0xC2B930u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:146 LDY @LOCAL02ALT2
    case 0xC2630F: {
        Instruction step(cpu, 0xA4, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:147 INY
    case 0xC26311: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:148 STY @LOCAL02ALT2
    case 0xC26312: {
        Instruction step(cpu, 0x84, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:150 CPY #TOTAL_PARTY_COUNT
    case 0xC26314: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:150 CPY #TOTAL_PARTY_COUNT
    // Overlapping static entry reached from 0xC26314.
    case 0xC26316: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:151 BCC @UNKNOWN8
    case 0xC26317: {
        Instruction step(cpu, 0x90, 0x0000D2u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/instant_win_handler.asm:152 MOVE_INT_CONSTANT 0, BATTLE_EXP_SCRATCH
    case 0xC26319: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/instant_win_handler.asm:152 MOVE_INT_CONSTANT 0, BATTLE_EXP_SCRATCH
    // Overlapping static entry reached from 0xC26319.
    case 0xC2631B: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/battle/instant_win_handler.asm:152 MOVE_INT_CONSTANT 0, BATTLE_EXP_SCRATCH
    case 0xC2631C: {
        Instruction step(cpu, 0x8D, 0x00A974u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/instant_win_handler.asm:152 MOVE_INT_CONSTANT 0, BATTLE_EXP_SCRATCH
    case 0xC2631F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/instant_win_handler.asm:152 MOVE_INT_CONSTANT 0, BATTLE_EXP_SCRATCH
    // Overlapping static entry reached from 0xC2631F.
    case 0xC26321: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/battle/instant_win_handler.asm:152 MOVE_INT_CONSTANT 0, BATTLE_EXP_SCRATCH
    case 0xC26322: {
        Instruction step(cpu, 0x8D, 0x00A976u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:153 LDA #0
    case 0xC26325: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:153 LDA #0
    // Overlapping static entry reached from 0xC26325.
    case 0xC26327: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:154 STA @LOCAL03
    case 0xC26328: {
        Instruction step(cpu, 0x85, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:155 BRA @UNKNOWN13
    case 0xC2632A: {
        Instruction step(cpu, 0x80, 0x000053u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/instant_win_handler.asm:157 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC2632C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000089u : 0x009589u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/instant_win_handler.asm:157 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2632C.
    case 0xC2632E: {
        Instruction step(cpu, 0x95, 0x000085u, 2u, AddressMode::DirectPageIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/instant_win_handler.asm:157 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC2632F: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/instant_win_handler.asm:157 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2632E.
    case 0xC26330: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/instant_win_handler.asm:157 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC26331: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D5u : 0x0000D5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/instant_win_handler.asm:157 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC26330.
    case 0xC26332: {
        Instruction step(cpu, 0xD5, 0x000000u, 2u, AddressMode::DirectPageIndexedX);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/instant_win_handler.asm:157 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC26331.
    case 0xC26333: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/instant_win_handler.asm:157 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC26334: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:158 LDA @LOCAL03
    case 0xC26336: {
        Instruction step(cpu, 0xA5, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:159 ASL
    case 0xC26338: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:160 TAX
    case 0xC26339: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:161 LDA ENEMIES_IN_BATTLE_IDS,X
    case 0xC2633A: {
        Instruction step(cpu, 0xBD, 0x009F8Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:162 LDY #.SIZEOF(enemy_data)
    case 0xC2633D: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Eu : 0x00005Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:162 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC2633D.
    case 0xC2633F: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:163 JSL MULT168
    case 0xC26340: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:164 CLC
    case 0xC26344: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:165 ADC #enemy_data::exp
    case 0xC26345: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000025u : 0x000025u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:165 ADC #enemy_data::exp
    // Overlapping static entry reached from 0xC26345.
    case 0xC26347: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:166 CLC
    case 0xC26348: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:167 ADC @VIRTUAL06
    case 0xC26349: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:168 STA @VIRTUAL06
    case 0xC2634B: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/instant_win_handler.asm:169 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC2634D: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/instant_win_handler.asm:169 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    // Overlapping static entry reached from 0xC2634D.
    case 0xC2634F: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/battle/instant_win_handler.asm:169 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26350: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1136 TAY
    // Macro caller: src/battle/instant_win_handler.asm:169 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26352: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/battle/instant_win_handler.asm:169 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26353: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1138 STA dest
    // Macro caller: src/battle/instant_win_handler.asm:169 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26355: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/battle/instant_win_handler.asm:169 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26357: {
        Instruction step(cpu, 0x84, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/instant_win_handler.asm:170 MOVE_INT BATTLE_EXP_SCRATCH, @VIRTUAL06
    case 0xC26359: {
        Instruction step(cpu, 0xAD, 0x00A974u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/instant_win_handler.asm:170 MOVE_INT BATTLE_EXP_SCRATCH, @VIRTUAL06
    case 0xC2635C: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/instant_win_handler.asm:170 MOVE_INT BATTLE_EXP_SCRATCH, @VIRTUAL06
    case 0xC2635E: {
        Instruction step(cpu, 0xAD, 0x00A976u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/instant_win_handler.asm:170 MOVE_INT BATTLE_EXP_SCRATCH, @VIRTUAL06
    case 0xC26361: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:171 CLC
    case 0xC26363: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // include/macros.asm:942 LDA val1
    // Macro caller: src/battle/instant_win_handler.asm:172 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC26364: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:943 ADC val2
    // Macro caller: src/battle/instant_win_handler.asm:172 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC26366: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:944 STA dest
    // Macro caller: src/battle/instant_win_handler.asm:172 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC26368: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/battle/instant_win_handler.asm:172 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC2636A: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/battle/instant_win_handler.asm:172 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC2636C: {
        Instruction step(cpu, 0x65, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/battle/instant_win_handler.asm:172 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC2636E: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/instant_win_handler.asm:173 MOVE_INT @VIRTUAL06, BATTLE_EXP_SCRATCH
    case 0xC26370: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/instant_win_handler.asm:173 MOVE_INT @VIRTUAL06, BATTLE_EXP_SCRATCH
    case 0xC26372: {
        Instruction step(cpu, 0x8D, 0x00A974u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/instant_win_handler.asm:173 MOVE_INT @VIRTUAL06, BATTLE_EXP_SCRATCH
    case 0xC26375: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/instant_win_handler.asm:173 MOVE_INT @VIRTUAL06, BATTLE_EXP_SCRATCH
    case 0xC26377: {
        Instruction step(cpu, 0x8D, 0x00A976u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:174 LDA @LOCAL03
    case 0xC2637A: {
        Instruction step(cpu, 0xA5, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:175 INC
    case 0xC2637C: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:176 STA @LOCAL03
    case 0xC2637D: {
        Instruction step(cpu, 0x85, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:178 CMP ENEMIES_IN_BATTLE
    case 0xC2637F: {
        Instruction step(cpu, 0xCD, 0x009F8Au, 3u, AddressMode::Absolute);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:179 BCC @UNKNOWN12
    case 0xC26382: {
        Instruction step(cpu, 0x90, 0x0000A8u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:180 LDA #0
    case 0xC26384: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:180 LDA #0
    // Overlapping static entry reached from 0xC26384.
    case 0xC26386: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:181 JSL COUNT_CHARS
    case 0xC26387: {
        Instruction step(cpu, 0x22, 0xC2BAC5u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:182 DEC
    case 0xC2638B: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/instant_win_handler.asm:183 STORE_INT1632 @VIRTUAL0A
    case 0xC2638C: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/instant_win_handler.asm:183 STORE_INT1632 @VIRTUAL0A
    case 0xC2638E: {
        Instruction step(cpu, 0x64, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/instant_win_handler.asm:184 MOVE_INT BATTLE_EXP_SCRATCH, @VIRTUAL06
    case 0xC26390: {
        Instruction step(cpu, 0xAD, 0x00A974u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/instant_win_handler.asm:184 MOVE_INT BATTLE_EXP_SCRATCH, @VIRTUAL06
    case 0xC26393: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/instant_win_handler.asm:184 MOVE_INT BATTLE_EXP_SCRATCH, @VIRTUAL06
    case 0xC26395: {
        Instruction step(cpu, 0xAD, 0x00A976u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/instant_win_handler.asm:184 MOVE_INT BATTLE_EXP_SCRATCH, @VIRTUAL06
    case 0xC26398: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:185 CLC
    case 0xC2639A: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // include/macros.asm:942 LDA val1
    // Macro caller: src/battle/instant_win_handler.asm:186 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC2639B: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:943 ADC val2
    // Macro caller: src/battle/instant_win_handler.asm:186 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC2639D: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:944 STA dest
    // Macro caller: src/battle/instant_win_handler.asm:186 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC2639F: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/battle/instant_win_handler.asm:186 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC263A1: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/battle/instant_win_handler.asm:186 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC263A3: {
        Instruction step(cpu, 0x65, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/battle/instant_win_handler.asm:186 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC263A5: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/instant_win_handler.asm:187 MOVE_INT @VIRTUAL06, BATTLE_EXP_SCRATCH
    case 0xC263A7: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/instant_win_handler.asm:187 MOVE_INT @VIRTUAL06, BATTLE_EXP_SCRATCH
    case 0xC263A9: {
        Instruction step(cpu, 0x8D, 0x00A974u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/instant_win_handler.asm:187 MOVE_INT @VIRTUAL06, BATTLE_EXP_SCRATCH
    case 0xC263AC: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/instant_win_handler.asm:187 MOVE_INT @VIRTUAL06, BATTLE_EXP_SCRATCH
    case 0xC263AE: {
        Instruction step(cpu, 0x8D, 0x00A976u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:188 LDA #0
    case 0xC263B1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:188 LDA #0
    // Overlapping static entry reached from 0xC263B1.
    case 0xC263B3: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:189 JSL COUNT_CHARS
    case 0xC263B4: {
        Instruction step(cpu, 0x22, 0xC2BAC5u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/instant_win_handler.asm:190 STORE_INT1632 @VIRTUAL0A
    case 0xC263B8: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/instant_win_handler.asm:190 STORE_INT1632 @VIRTUAL0A
    case 0xC263BA: {
        Instruction step(cpu, 0x64, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:191 JSL DIVISION32
    case 0xC263BC: {
        Instruction step(cpu, 0x22, 0xC090FFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/instant_win_handler.asm:192 MOVE_INT @VIRTUAL06, BATTLE_EXP_SCRATCH
    case 0xC263C0: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/instant_win_handler.asm:192 MOVE_INT @VIRTUAL06, BATTLE_EXP_SCRATCH
    case 0xC263C2: {
        Instruction step(cpu, 0x8D, 0x00A974u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/instant_win_handler.asm:192 MOVE_INT @VIRTUAL06, BATTLE_EXP_SCRATCH
    case 0xC263C5: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/instant_win_handler.asm:192 MOVE_INT @VIRTUAL06, BATTLE_EXP_SCRATCH
    case 0xC263C7: {
        Instruction step(cpu, 0x8D, 0x00A976u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/instant_win_handler.asm:193 LOADPTR MSG_BTL_PLAYER_WIN_FORCE, @LOCAL00
    case 0xC263CA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000028u : 0x007A28u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/instant_win_handler.asm:193 LOADPTR MSG_BTL_PLAYER_WIN_FORCE, @LOCAL00
    // Overlapping static entry reached from 0xC263CA.
    case 0xC263CC: {
        Instruction step(cpu, 0x7A, 0x000000u, 1u, AddressMode::Implied);
        step.pull_y();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/instant_win_handler.asm:193 LOADPTR MSG_BTL_PLAYER_WIN_FORCE, @LOCAL00
    case 0xC263CD: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/instant_win_handler.asm:193 LOADPTR MSG_BTL_PLAYER_WIN_FORCE, @LOCAL00
    case 0xC263CF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000EFu : 0x0000EFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/instant_win_handler.asm:193 LOADPTR MSG_BTL_PLAYER_WIN_FORCE, @LOCAL00
    // Overlapping static entry reached from 0xC263CF.
    case 0xC263D1: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/instant_win_handler.asm:193 LOADPTR MSG_BTL_PLAYER_WIN_FORCE, @LOCAL00
    case 0xC263D2: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/instant_win_handler.asm:194 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC263D4: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/instant_win_handler.asm:194 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC263D6: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/instant_win_handler.asm:194 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC263D8: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/instant_win_handler.asm:194 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC263DA: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:195 JSL DISPLAY_TEXT_WAIT
    case 0xC263DC: {
        Instruction step(cpu, 0x22, 0xC1DC66u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:196 LDY #.LOWORD(BATTLERS_TABLE)
    case 0xC263E0: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x0000ACu : 0x009FACu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:196 LDY #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC263E0.
    case 0xC263E2: {
        Instruction step(cpu, 0x9F, 0xA91A84u, 4u, AddressMode::LongIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:197 STY @LOCAL04ALT
    case 0xC263E3: {
        Instruction step(cpu, 0x84, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:198 LDA #0
    case 0xC263E5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:198 LDA #0
    // Overlapping static entry reached from 0xC263E2.
    case 0xC263E6: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:198 LDA #0
    // Overlapping static entry reached from 0xC263E5.
    case 0xC263E7: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:199 STA @VIRTUAL02
    case 0xC263E8: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:200 BRA @UNKNOWN16
    case 0xC263EA: {
        Instruction step(cpu, 0x80, 0x000051u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:202 LDA a:battler::consciousness,Y
    case 0xC263EC: {
        Instruction step(cpu, 0xB9, 0x00000Cu, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:203 AND #$00FF
    case 0xC263EF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:203 AND #$00FF
    // Overlapping static entry reached from 0xC263EF.
    case 0xC263F1: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:204 BEQ @UNKNOWN15
    case 0xC263F2: {
        Instruction step(cpu, 0xF0, 0x00003Du, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:205 LDA a:battler::ally_or_enemy,Y
    case 0xC263F4: {
        Instruction step(cpu, 0xB9, 0x00000Eu, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:206 AND #$00FF
    case 0xC263F7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:206 AND #$00FF
    // Overlapping static entry reached from 0xC263F7.
    case 0xC263F9: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:207 BNE @UNKNOWN15
    case 0xC263FA: {
        Instruction step(cpu, 0xD0, 0x000035u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:208 LDA a:battler::npc_id,Y
    case 0xC263FC: {
        Instruction step(cpu, 0xB9, 0x00000Fu, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:209 AND #$00FF
    case 0xC263FF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:209 AND #$00FF
    // Overlapping static entry reached from 0xC263FF.
    case 0xC26401: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:210 BNE @UNKNOWN15
    case 0xC26402: {
        Instruction step(cpu, 0xD0, 0x00002Du, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:211 LDA a:battler::afflictions + STATUS_GROUP::PERSISTENT_EASYHEAL,Y
    case 0xC26404: {
        Instruction step(cpu, 0xB9, 0x00001Du, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:212 AND #$00FF
    case 0xC26407: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:212 AND #$00FF
    // Overlapping static entry reached from 0xC26407.
    case 0xC26409: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:213 TAX
    case 0xC2640A: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:214 CPX #STATUS_0::UNCONSCIOUS
    case 0xC2640B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:214 CPX #STATUS_0::UNCONSCIOUS
    // Overlapping static entry reached from 0xC2640B.
    case 0xC2640D: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:215 BEQ @UNKNOWN15
    case 0xC2640E: {
        Instruction step(cpu, 0xF0, 0x000021u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:216 CPX #STATUS_0::DIAMONDIZED
    case 0xC26410: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:216 CPX #STATUS_0::DIAMONDIZED
    // Overlapping static entry reached from 0xC26410.
    case 0xC26412: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:217 BEQ @UNKNOWN15
    case 0xC26413: {
        Instruction step(cpu, 0xF0, 0x00001Cu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/instant_win_handler.asm:218 MOVE_INT BATTLE_EXP_SCRATCH, @VIRTUAL06
    case 0xC26415: {
        Instruction step(cpu, 0xAD, 0x00A974u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/instant_win_handler.asm:218 MOVE_INT BATTLE_EXP_SCRATCH, @VIRTUAL06
    case 0xC26418: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/instant_win_handler.asm:218 MOVE_INT BATTLE_EXP_SCRATCH, @VIRTUAL06
    case 0xC2641A: {
        Instruction step(cpu, 0xAD, 0x00A976u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/instant_win_handler.asm:218 MOVE_INT BATTLE_EXP_SCRATCH, @VIRTUAL06
    case 0xC2641D: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/instant_win_handler.asm:219 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2641F: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/instant_win_handler.asm:219 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC26421: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/instant_win_handler.asm:219 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC26423: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/instant_win_handler.asm:219 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC26425: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:220 LDX #1
    case 0xC26427: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:220 LDX #1
    // Overlapping static entry reached from 0xC26427.
    case 0xC26429: {
        Instruction step(cpu, 0x00, 0x0000B9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:221 LDA __BSS_START__,Y
    case 0xC2642A: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:222 JSL GAIN_EXP
    case 0xC2642D: {
        Instruction step(cpu, 0x22, 0xC1D9E9u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:224 LDY @LOCAL04ALT
    case 0xC26431: {
        Instruction step(cpu, 0xA4, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:225 TYA
    case 0xC26433: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:226 CLC
    case 0xC26434: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:227 ADC #.SIZEOF(battler)
    case 0xC26435: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:227 ADC #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC26435.
    case 0xC26437: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:228 TAY
    case 0xC26438: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:229 STY @LOCAL04ALT
    case 0xC26439: {
        Instruction step(cpu, 0x84, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:230 INC @VIRTUAL02
    case 0xC2643B: {
        Instruction step(cpu, 0xE6, 0x000002u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:232 LDA @VIRTUAL02
    case 0xC2643D: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:233 CMP #BATTLER_COUNT
    case 0xC2643F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:233 CMP #BATTLER_COUNT
    // Overlapping static entry reached from 0xC2643F.
    case 0xC26441: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:234 BCC @UNKNOWN14
    case 0xC26442: {
        Instruction step(cpu, 0x90, 0x0000A8u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:235 LDA ENEMIES_IN_BATTLE
    case 0xC26444: {
        Instruction step(cpu, 0xAD, 0x009F8Au, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:236 JSR RAND_LIMIT
    case 0xC26447: {
        Instruction step(cpu, 0x20, 0x006A2Du, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:237 ASL
    case 0xC2644A: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:238 TAX
    case 0xC2644B: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:239 LDA ENEMIES_IN_BATTLE_IDS,X
    case 0xC2644C: {
        Instruction step(cpu, 0xBD, 0x009F8Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:240 STA @LOCAL02ALT2
    case 0xC2644F: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/instant_win_handler.asm:241 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC26451: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000089u : 0x009589u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/instant_win_handler.asm:241 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC26451.
    case 0xC26453: {
        Instruction step(cpu, 0x95, 0x000085u, 2u, AddressMode::DirectPageIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/instant_win_handler.asm:241 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC26454: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/instant_win_handler.asm:241 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC26453.
    case 0xC26455: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/instant_win_handler.asm:241 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC26456: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D5u : 0x0000D5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/instant_win_handler.asm:241 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC26455.
    case 0xC26457: {
        Instruction step(cpu, 0xD5, 0x000000u, 2u, AddressMode::DirectPageIndexedX);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/instant_win_handler.asm:241 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC26456.
    case 0xC26458: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/instant_win_handler.asm:241 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC26459: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:242 LDA @LOCAL02ALT2
    case 0xC2645B: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:243 LDY #.SIZEOF(enemy_data)
    case 0xC2645D: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Eu : 0x00005Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:243 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC2645D.
    case 0xC2645F: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:244 JSL MULT168
    case 0xC26460: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:245 STA @LOCAL03
    case 0xC26464: {
        Instruction step(cpu, 0x85, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:246 CLC
    case 0xC26466: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:247 ADC #enemy_data::item_dropped
    case 0xC26467: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000058u : 0x000058u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:247 ADC #enemy_data::item_dropped
    // Overlapping static entry reached from 0xC26467.
    case 0xC26469: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/instant_win_handler.asm:248 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2646A: {
        Instruction step(cpu, 0xA6, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/instant_win_handler.asm:248 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2646C: {
        Instruction step(cpu, 0x86, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/instant_win_handler.asm:248 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2646E: {
        Instruction step(cpu, 0xA6, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/instant_win_handler.asm:248 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC26470: {
        Instruction step(cpu, 0x86, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:249 CLC
    case 0xC26472: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:250 ADC @VIRTUAL0A
    case 0xC26473: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:251 STA @VIRTUAL0A
    case 0xC26475: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:252 LDA [@VIRTUAL0A]
    case 0xC26477: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:253 AND #$00FF
    case 0xC26479: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:253 AND #$00FF
    // Overlapping static entry reached from 0xC26479.
    case 0xC2647B: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:254 STA ITEM_DROPPED
    case 0xC2647C: {
        Instruction step(cpu, 0x8D, 0x00AA10u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:255 LDA @LOCAL03
    case 0xC2647F: {
        Instruction step(cpu, 0xA5, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:256 CLC
    case 0xC26481: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:257 ADC #enemy_data::item_drop_rate
    case 0xC26482: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000057u : 0x000057u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:257 ADC #enemy_data::item_drop_rate
    // Overlapping static entry reached from 0xC26482.
    case 0xC26484: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:258 CLC
    case 0xC26485: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:259 ADC @VIRTUAL06
    case 0xC26486: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:260 STA @VIRTUAL06
    case 0xC26488: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:261 LDA [@VIRTUAL06]
    case 0xC2648A: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:262 AND #$00FF
    case 0xC2648C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:262 AND #$00FF
    // Overlapping static entry reached from 0xC2648C.
    case 0xC2648E: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:263 BEQ @UNKNOWN17
    case 0xC2648F: {
        Instruction step(cpu, 0xF0, 0x000020u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:264 CMP #1
    case 0xC26491: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:264 CMP #1
    // Overlapping static entry reached from 0xC26491.
    case 0xC26493: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:265 BEQ @UNKNOWN18
    case 0xC26494: {
        Instruction step(cpu, 0xF0, 0x000029u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:266 CMP #2
    case 0xC26496: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:266 CMP #2
    // Overlapping static entry reached from 0xC26496.
    case 0xC26498: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:267 BEQ @UNKNOWN19
    case 0xC26499: {
        Instruction step(cpu, 0xF0, 0x000032u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:268 CMP #3
    case 0xC2649B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:268 CMP #3
    // Overlapping static entry reached from 0xC2649B.
    case 0xC2649D: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:269 BEQ @UNKNOWN20
    case 0xC2649E: {
        Instruction step(cpu, 0xF0, 0x00003Bu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:270 CMP #4
    case 0xC264A0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:270 CMP #4
    // Overlapping static entry reached from 0xC264A0.
    case 0xC264A2: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:271 BEQ @UNKNOWN21
    case 0xC264A3: {
        Instruction step(cpu, 0xF0, 0x000044u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:272 CMP #5
    case 0xC264A5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000005u : 0x000005u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:272 CMP #5
    // Overlapping static entry reached from 0xC264A5.
    case 0xC264A7: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:273 BEQ @UNKNOWN22
    case 0xC264A8: {
        Instruction step(cpu, 0xF0, 0x00004Du, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:274 CMP #6
    case 0xC264AA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:274 CMP #6
    // Overlapping static entry reached from 0xC264AA.
    case 0xC264AC: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:275 BEQ @UNKNOWN23
    case 0xC264AD: {
        Instruction step(cpu, 0xF0, 0x000056u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:276 BRA @UNKNOWN24
    case 0xC264AF: {
        Instruction step(cpu, 0x80, 0x000060u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:278 JSL RAND
    case 0xC264B1: {
        Instruction step(cpu, 0x22, 0xC08E9Au, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:279 AND #ITEM_RARITY_0
    case 0xC264B5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x00007Fu : 0x00007Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:279 AND #ITEM_RARITY_0
    // Overlapping static entry reached from 0xC264B5.
    case 0xC264B7: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:280 BEQ @UNKNOWN24
    case 0xC264B8: {
        Instruction step(cpu, 0xF0, 0x000057u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:281 STZ ITEM_DROPPED
    case 0xC264BA: {
        Instruction step(cpu, 0x9C, 0x00AA10u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:282 BRA @UNKNOWN24
    case 0xC264BD: {
        Instruction step(cpu, 0x80, 0x000052u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:284 JSL RAND
    case 0xC264BF: {
        Instruction step(cpu, 0x22, 0xC08E9Au, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:285 AND #ITEM_RARITY_1
    case 0xC264C3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x00003Fu : 0x00003Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:285 AND #ITEM_RARITY_1
    // Overlapping static entry reached from 0xC264C3.
    case 0xC264C5: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:286 BEQ @UNKNOWN24
    case 0xC264C6: {
        Instruction step(cpu, 0xF0, 0x000049u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:287 STZ ITEM_DROPPED
    case 0xC264C8: {
        Instruction step(cpu, 0x9C, 0x00AA10u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:288 BRA @UNKNOWN24
    case 0xC264CB: {
        Instruction step(cpu, 0x80, 0x000044u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:290 JSL RAND
    case 0xC264CD: {
        Instruction step(cpu, 0x22, 0xC08E9Au, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:291 AND #ITEM_RARITY_2
    case 0xC264D1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x00001Fu : 0x00001Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:291 AND #ITEM_RARITY_2
    // Overlapping static entry reached from 0xC264D1.
    case 0xC264D3: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:292 BEQ @UNKNOWN24
    case 0xC264D4: {
        Instruction step(cpu, 0xF0, 0x00003Bu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:293 STZ ITEM_DROPPED
    case 0xC264D6: {
        Instruction step(cpu, 0x9C, 0x00AA10u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:294 BRA @UNKNOWN24
    case 0xC264D9: {
        Instruction step(cpu, 0x80, 0x000036u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:296 JSL RAND
    case 0xC264DB: {
        Instruction step(cpu, 0x22, 0xC08E9Au, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:297 AND #ITEM_RARITY_3
    case 0xC264DF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x00000Fu : 0x00000Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:297 AND #ITEM_RARITY_3
    // Overlapping static entry reached from 0xC264DF.
    case 0xC264E1: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:298 BEQ @UNKNOWN24
    case 0xC264E2: {
        Instruction step(cpu, 0xF0, 0x00002Du, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:299 STZ ITEM_DROPPED
    case 0xC264E4: {
        Instruction step(cpu, 0x9C, 0x00AA10u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:300 BRA @UNKNOWN24
    case 0xC264E7: {
        Instruction step(cpu, 0x80, 0x000028u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:302 JSL RAND
    case 0xC264E9: {
        Instruction step(cpu, 0x22, 0xC08E9Au, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:303 AND #ITEM_RARITY_4
    case 0xC264ED: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000007u : 0x000007u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:303 AND #ITEM_RARITY_4
    // Overlapping static entry reached from 0xC264ED.
    case 0xC264EF: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:304 BEQ @UNKNOWN24
    case 0xC264F0: {
        Instruction step(cpu, 0xF0, 0x00001Fu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:305 STZ ITEM_DROPPED
    case 0xC264F2: {
        Instruction step(cpu, 0x9C, 0x00AA10u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:306 BRA @UNKNOWN24
    case 0xC264F5: {
        Instruction step(cpu, 0x80, 0x00001Au, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:308 JSL RAND
    case 0xC264F7: {
        Instruction step(cpu, 0x22, 0xC08E9Au, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:309 AND #ITEM_RARITY_5
    case 0xC264FB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:309 AND #ITEM_RARITY_5
    // Overlapping static entry reached from 0xC264FB.
    case 0xC264FD: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:310 BEQ @UNKNOWN24
    case 0xC264FE: {
        Instruction step(cpu, 0xF0, 0x000011u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:311 STZ ITEM_DROPPED
    case 0xC26500: {
        Instruction step(cpu, 0x9C, 0x00AA10u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:312 BRA @UNKNOWN24
    case 0xC26503: {
        Instruction step(cpu, 0x80, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:314 JSL RAND
    case 0xC26505: {
        Instruction step(cpu, 0x22, 0xC08E9Au, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:315 AND #ITEM_RARITY_6
    case 0xC26509: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:315 AND #ITEM_RARITY_6
    // Overlapping static entry reached from 0xC26509.
    case 0xC2650B: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:316 BEQ @UNKNOWN24
    case 0xC2650C: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:317 STZ ITEM_DROPPED
    case 0xC2650E: {
        Instruction step(cpu, 0x9C, 0x00AA10u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:319 LDA ITEM_DROPPED
    case 0xC26511: {
        Instruction step(cpu, 0xAD, 0x00AA10u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:320 BEQ @UNKNOWN25
    case 0xC26514: {
        Instruction step(cpu, 0xF0, 0x000017u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:321 SEP #PROC_FLAGS::ACCUM8
    case 0xC26516: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:322 LDA ITEM_DROPPED
    case 0xC26518: {
        Instruction step(cpu, 0xAD, 0x00AA10u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:323 JSL REDIRECT_C1ACF8
    case 0xC2651B: {
        Instruction step(cpu, 0x22, 0xC1DD7Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/instant_win_handler.asm:325 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PRESENT
    case 0xC2651F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000DFu : 0x007BDFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/instant_win_handler.asm:325 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PRESENT
    // Overlapping static entry reached from 0xC2651F.
    case 0xC26521: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/instant_win_handler.asm:325 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PRESENT
    case 0xC26522: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/instant_win_handler.asm:325 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PRESENT
    case 0xC26524: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000EFu : 0x0000EFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/instant_win_handler.asm:325 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PRESENT
    // Overlapping static entry reached from 0xC26524.
    case 0xC26526: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/instant_win_handler.asm:325 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PRESENT
    case 0xC26527: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/instant_win_handler.asm:325 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PRESENT
    case 0xC26529: {
        Instruction step(cpu, 0x22, 0xC1DC1Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:327 JSL UNKNOWN_C1DD5F
    case 0xC2652D: {
        Instruction step(cpu, 0x22, 0xC1DD5Fu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:328 LDA GAME_STATE+game_state::walking_style
    case 0xC26531: {
        Instruction step(cpu, 0xAD, 0x009883u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:329 CMP #WALKING_STYLE::BICYCLE
    case 0xC26534: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:329 CMP #WALKING_STYLE::BICYCLE
    // Overlapping static entry reached from 0xC26534.
    case 0xC26536: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:330 BNE @UNKNOWN26
    case 0xC26537: {
        Instruction step(cpu, 0xD0, 0x000009u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:331 LDA #MUSIC::BICYCLE
    case 0xC26539: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000052u : 0x000052u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:331 LDA #MUSIC::BICYCLE
    // Overlapping static entry reached from 0xC26539.
    case 0xC2653B: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:332 JSL CHANGE_MUSIC
    case 0xC2653C: {
        Instruction step(cpu, 0x22, 0xC4FBBDu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:333 BRA @UNKNOWN27
    case 0xC26540: {
        Instruction step(cpu, 0x80, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:335 JSL UNKNOWN_C06A07
    case 0xC26542: {
        Instruction step(cpu, 0x22, 0xC06A07u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:337 JSL UNKNOWN_C09451
    case 0xC26546: {
        Instruction step(cpu, 0x22, 0xC09451u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/instant_win_handler.asm:338 END_C_FUNCTION
    case 0xC2654A: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/instant_win_handler.asm:338 END_C_FUNCTION
    case 0xC2654B: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
