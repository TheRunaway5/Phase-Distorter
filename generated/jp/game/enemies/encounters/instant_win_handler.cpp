// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/battle/instant_win_handler.asm
bool resume_battle_instant_win_handler(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/instant_win_handler.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC260E9: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/instant_win_handler.asm:10 END_STACK_VARS
    case 0xC260EB: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/instant_win_handler.asm:10 END_STACK_VARS
    case 0xC260EC: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/instant_win_handler.asm:10 END_STACK_VARS
    case 0xC260ED: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000E4u : 0x00FFE4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/instant_win_handler.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC260ED.
    case 0xC260EF: {
        Instruction step(cpu, 0xFF, 0x429C5Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/instant_win_handler.asm:10 END_STACK_VARS
    case 0xC260F0: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:20 STZ BATTLE_INITIATIVE
    case 0xC260F1: {
        Instruction step(cpu, 0x9C, 0x005142u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:20 STZ BATTLE_INITIATIVE
    // Overlapping static entry reached from 0xC260EF.
    case 0xC260F3: {
        Instruction step(cpu, 0x51, 0x0000A9u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.xor_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:21 LDA #MUSIC::SUDDEN_VICTORY
    case 0xC260F4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000B7u : 0x0000B7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:21 LDA #MUSIC::SUDDEN_VICTORY
    // Overlapping static entry reached from 0xC260F3.
    case 0xC260F5: {
        Instruction step(cpu, 0xB7, 0x000000u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:21 LDA #MUSIC::SUDDEN_VICTORY
    // Overlapping static entry reached from 0xC260F4.
    case 0xC260F6: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:22 JSL CHANGE_MUSIC
    case 0xC260F7: {
        Instruction step(cpu, 0x22, 0xC4CF5Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:23 JSL UNKNOWN_C2E9ED
    case 0xC260FB: {
        Instruction step(cpu, 0x22, 0xC2E906u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:24 LDX #0
    case 0xC260FF: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:24 LDX #0
    // Overlapping static entry reached from 0xC260FF.
    case 0xC26101: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:25 STX @LOCAL04
    case 0xC26102: {
        Instruction step(cpu, 0x86, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:26 BRA @UNKNOWN1
    case 0xC26104: {
        Instruction step(cpu, 0x80, 0x000017u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:28 LDA #$03E0
    case 0xC26106: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E0u : 0x0003E0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:28 LDA #$03E0
    // Overlapping static entry reached from 0xC26106.
    case 0xC26108: {
        Instruction step(cpu, 0x03, 0x000020u, 2u, AddressMode::StackRelative);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:29 JSR UNKNOWN_C26189
    case 0xC26109: {
        Instruction step(cpu, 0x20, 0x0060B5u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:29 JSR UNKNOWN_C26189
    // Overlapping static entry reached from 0xC26108.
    case 0xC2610A: {
        Instruction step(cpu, 0xB5, 0x000060u, 2u, AddressMode::DirectPageIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:30 LDA #$001F
    case 0xC2610C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00001Fu : 0x00001Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:30 LDA #$001F
    // Overlapping static entry reached from 0xC2610C.
    case 0xC2610E: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:31 JSR UNKNOWN_C26189
    case 0xC2610F: {
        Instruction step(cpu, 0x20, 0x0060B5u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:32 LDA #$7C00
    case 0xC26112: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x007C00u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:32 LDA #$7C00
    // Overlapping static entry reached from 0xC26112.
    case 0xC26114: {
        Instruction step(cpu, 0x7C, 0x00B520u, 3u, AddressMode::AbsoluteIndexedIndirectX);
        step.jump();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:33 JSR UNKNOWN_C26189
    case 0xC26115: {
        Instruction step(cpu, 0x20, 0x0060B5u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:34 LDX @LOCAL04
    case 0xC26118: {
        Instruction step(cpu, 0xA6, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:35 INX
    case 0xC2611A: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:36 STX @LOCAL04
    case 0xC2611B: {
        Instruction step(cpu, 0x86, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:38 CPX #2
    case 0xC2611D: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:38 CPX #2
    // Overlapping static entry reached from 0xC2611D.
    case 0xC2611F: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:39 BCC @UNKNOWN0
    case 0xC26120: {
        Instruction step(cpu, 0x90, 0x0000E4u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:40 LDA #0
    case 0xC26122: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:40 LDA #0
    // Overlapping static entry reached from 0xC26122.
    case 0xC26124: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:41 JSR UNKNOWN_C26189
    case 0xC26125: {
        Instruction step(cpu, 0x20, 0x0060B5u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/instant_win_handler.asm:42 LOADPTR BUFFER, @LOCAL00
    case 0xC26128: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/instant_win_handler.asm:42 LOADPTR BUFFER, @LOCAL00
    // Overlapping static entry reached from 0xC26128.
    case 0xC2612A: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/instant_win_handler.asm:42 LOADPTR BUFFER, @LOCAL00
    case 0xC2612B: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/instant_win_handler.asm:42 LOADPTR BUFFER, @LOCAL00
    case 0xC2612D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Fu : 0x00007Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/instant_win_handler.asm:42 LOADPTR BUFFER, @LOCAL00
    // Overlapping static entry reached from 0xC2612D.
    case 0xC2612F: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/instant_win_handler.asm:42 LOADPTR BUFFER, @LOCAL00
    case 0xC26130: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/instant_win_handler.asm:43 LOADPTR BUFFER + $2000, @LOCAL01
    case 0xC26132: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x002000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/instant_win_handler.asm:43 LOADPTR BUFFER + $2000, @LOCAL01
    // Overlapping static entry reached from 0xC26132.
    case 0xC26134: {
        Instruction step(cpu, 0x20, 0x001285u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/instant_win_handler.asm:43 LOADPTR BUFFER + $2000, @LOCAL01
    case 0xC26135: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/instant_win_handler.asm:43 LOADPTR BUFFER + $2000, @LOCAL01
    case 0xC26137: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Fu : 0x00007Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/instant_win_handler.asm:43 LOADPTR BUFFER + $2000, @LOCAL01
    // Overlapping static entry reached from 0xC26137.
    case 0xC26139: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/instant_win_handler.asm:43 LOADPTR BUFFER + $2000, @LOCAL01
    case 0xC2613A: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:44 LDA #$0200
    case 0xC2613C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:44 LDA #$0200
    // Overlapping static entry reached from 0xC2613C.
    case 0xC2613E: {
        Instruction step(cpu, 0x02, 0x000022u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:45 JSL MEMCPY24
    case 0xC2613F: {
        Instruction step(cpu, 0x22, 0xC08EDEu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:46 LDX #$FFFF
    case 0xC26143: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:46 LDX #$FFFF
    // Overlapping static entry reached from 0xC26143.
    case 0xC26145: {
        Instruction step(cpu, 0xFF, 0x0006A9u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:47 LDA #6
    case 0xC26146: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:47 LDA #6
    // Overlapping static entry reached from 0xC26146.
    case 0xC26148: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:48 JSL UNKNOWN_C496E7
    case 0xC26149: {
        Instruction step(cpu, 0x22, 0xC46D31u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:49 LDX #0
    case 0xC2614D: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:49 LDX #0
    // Overlapping static entry reached from 0xC2614D.
    case 0xC2614F: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:50 STX @LOCAL03
    case 0xC26150: {
        Instruction step(cpu, 0x86, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:51 BRA @UNKNOWN3
    case 0xC26152: {
        Instruction step(cpu, 0x80, 0x00000Du, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:53 JSL UPDATE_MAP_PALETTE_ANIMATION
    case 0xC26154: {
        Instruction step(cpu, 0x22, 0xC4262Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:54 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC26158: {
        Instruction step(cpu, 0x22, 0xC0874Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:55 LDX @LOCAL03
    case 0xC2615C: {
        Instruction step(cpu, 0xA6, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:56 INX
    case 0xC2615E: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:57 STX @LOCAL03
    case 0xC2615F: {
        Instruction step(cpu, 0x86, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:59 CPX #6
    case 0xC26161: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:59 CPX #6
    // Overlapping static entry reached from 0xC26161.
    case 0xC26163: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:60 BCC @UNKNOWN2
    case 0xC26164: {
        Instruction step(cpu, 0x90, 0x0000EEu, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:61 JSL UNKNOWN_C49740
    case 0xC26166: {
        Instruction step(cpu, 0x22, 0xC46D8Au, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:62 JSL UNKNOWN_C0943C
    case 0xC2616A: {
        Instruction step(cpu, 0x22, 0xC0941Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:740 LDA arg
    // Macro caller: src/battle/instant_win_handler.asm:63 CREATE_WINDOW_FAR #WINDOW::TEXT_BATTLE
    case 0xC2616E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Eu : 0x00000Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:740 LDA arg
    // Macro caller: src/battle/instant_win_handler.asm:63 CREATE_WINDOW_FAR #WINDOW::TEXT_BATTLE
    // Overlapping static entry reached from 0xC2616E.
    case 0xC26170: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:741 JSL REDIRECT_CREATE_WINDOW
    // Macro caller: src/battle/instant_win_handler.asm:63 CREATE_WINDOW_FAR #WINDOW::TEXT_BATTLE
    case 0xC26171: {
        Instruction step(cpu, 0x22, 0xC1DB24u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:64 STZ BATTLE_MONEY_SCRATCH
    case 0xC26175: {
        Instruction step(cpu, 0x9C, 0x00AB7Au, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:65 LDA #0
    case 0xC26178: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:65 LDA #0
    // Overlapping static entry reached from 0xC26178.
    case 0xC2617A: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:66 STA @LOCAL03
    case 0xC2617B: {
        Instruction step(cpu, 0x85, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:67 BRA @UNKNOWN5
    case 0xC2617D: {
        Instruction step(cpu, 0x80, 0x000021u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:69 ASL
    case 0xC2617F: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:70 TAX
    case 0xC26180: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:71 LDA ENEMIES_IN_BATTLE_IDS,X
    case 0xC26181: {
        Instruction step(cpu, 0xBD, 0x00A18Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:72 LDY #.SIZEOF(enemy_data)
    case 0xC26184: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Du : 0x00004Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:72 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC26184.
    case 0xC26186: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:73 JSL MULT168
    case 0xC26187: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:74 CLC
    case 0xC2618B: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:75 ADC #enemy_data::money
    case 0xC2618C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000018u : 0x000018u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:75 ADC #enemy_data::money
    // Overlapping static entry reached from 0xC2618C.
    case 0xC2618E: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:76 TAX
    case 0xC2618F: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:77 LDA f:ENEMY_CONFIGURATION_TABLE,X
    case 0xC26190: {
        Instruction step(cpu, 0xBF, 0xD5A440u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:78 CLC
    case 0xC26194: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:79 ADC BATTLE_MONEY_SCRATCH
    case 0xC26195: {
        Instruction step(cpu, 0x6D, 0x00AB7Au, 3u, AddressMode::Absolute);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:80 STA BATTLE_MONEY_SCRATCH
    case 0xC26198: {
        Instruction step(cpu, 0x8D, 0x00AB7Au, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:81 LDA @LOCAL03
    case 0xC2619B: {
        Instruction step(cpu, 0xA5, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:82 INC
    case 0xC2619D: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:83 STA @LOCAL03
    case 0xC2619E: {
        Instruction step(cpu, 0x85, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:85 CMP ENEMIES_IN_BATTLE
    case 0xC261A0: {
        Instruction step(cpu, 0xCD, 0x00A18Cu, 3u, AddressMode::Absolute);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:86 BCC @UNKNOWN4
    case 0xC261A3: {
        Instruction step(cpu, 0x90, 0x0000DAu, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:87 LDY #.LOWORD(GAME_STATE) + game_state::unknownC4
    case 0xC261A5: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00006Au : 0x009B6Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:87 LDY #.LOWORD(GAME_STATE) + game_state::unknownC4
    // Overlapping static entry reached from 0xC261A5.
    case 0xC261A7: {
        Instruction step(cpu, 0x9B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_y();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:88 STY @LOCAL02ALT
    case 0xC261A8: {
        Instruction step(cpu, 0x84, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:89 LDA BATTLE_MONEY_SCRATCH
    case 0xC261AA: {
        Instruction step(cpu, 0xAD, 0x00AB7Au, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/instant_win_handler.asm:90 STORE_INT1632 @VIRTUAL06
    case 0xC261AD: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/instant_win_handler.asm:90 STORE_INT1632 @VIRTUAL06
    case 0xC261AF: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/instant_win_handler.asm:91 MOVE_INT @VIRTUAL06, @LOCAL00 ;@LOCAL00 = @VIRTUAL06
    case 0xC261B1: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/instant_win_handler.asm:91 MOVE_INT @VIRTUAL06, @LOCAL00 ;@LOCAL00 = @VIRTUAL06
    case 0xC261B3: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/instant_win_handler.asm:91 MOVE_INT @VIRTUAL06, @LOCAL00 ;@LOCAL00 = @VIRTUAL06
    case 0xC261B5: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/instant_win_handler.asm:91 MOVE_INT @VIRTUAL06, @LOCAL00 ;@LOCAL00 = @VIRTUAL06
    case 0xC261B7: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:92 JSL DEPOSIT_INTO_ATM
    case 0xC261B9: {
        Instruction step(cpu, 0x22, 0xC226E9u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/instant_win_handler.asm:93 MOVE_INT @VIRTUAL06, @VIRTUAL0A ;@VIRTUAL0A = @VIRTUAL06
    case 0xC261BD: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/instant_win_handler.asm:93 MOVE_INT @VIRTUAL06, @VIRTUAL0A ;@VIRTUAL0A = @VIRTUAL06
    case 0xC261BF: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/instant_win_handler.asm:93 MOVE_INT @VIRTUAL06, @VIRTUAL0A ;@VIRTUAL0A = @VIRTUAL06
    case 0xC261C1: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/instant_win_handler.asm:93 MOVE_INT @VIRTUAL06, @VIRTUAL0A ;@VIRTUAL0A = @VIRTUAL06
    case 0xC261C3: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:94 LDY @LOCAL02ALT
    case 0xC261C5: {
        Instruction step(cpu, 0xA4, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/battle/instant_win_handler.asm:95 MOVE_INT_YPTRSRC 0, @VIRTUAL06 ;@VIRTUAL06 = game_state.unknownC4
    case 0xC261C7: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1114 STA dest
    // Macro caller: src/battle/instant_win_handler.asm:95 MOVE_INT_YPTRSRC 0, @VIRTUAL06 ;@VIRTUAL06 = game_state.unknownC4
    case 0xC261CA: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/battle/instant_win_handler.asm:95 MOVE_INT_YPTRSRC 0, @VIRTUAL06 ;@VIRTUAL06 = game_state.unknownC4
    case 0xC261CC: {
        Instruction step(cpu, 0xB9, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/battle/instant_win_handler.asm:95 MOVE_INT_YPTRSRC 0, @VIRTUAL06 ;@VIRTUAL06 = game_state.unknownC4
    case 0xC261CF: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:96 CLC
    case 0xC261D1: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // include/macros.asm:942 LDA val1
    // Macro caller: src/battle/instant_win_handler.asm:97 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A ;@VIRTUAL06 += @VIRTUAL0A
    case 0xC261D2: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:943 ADC val2
    // Macro caller: src/battle/instant_win_handler.asm:97 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A ;@VIRTUAL06 += @VIRTUAL0A
    case 0xC261D4: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:944 STA dest
    // Macro caller: src/battle/instant_win_handler.asm:97 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A ;@VIRTUAL06 += @VIRTUAL0A
    case 0xC261D6: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/battle/instant_win_handler.asm:97 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A ;@VIRTUAL06 += @VIRTUAL0A
    case 0xC261D8: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/battle/instant_win_handler.asm:97 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A ;@VIRTUAL06 += @VIRTUAL0A
    case 0xC261DA: {
        Instruction step(cpu, 0x65, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/battle/instant_win_handler.asm:97 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A ;@VIRTUAL06 += @VIRTUAL0A
    case 0xC261DC: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1075 LDA src
    // Macro caller: src/battle/instant_win_handler.asm:98 MOVE_INT_YPTRDEST @VIRTUAL06, 0 ;game_state.unknownC4 = @VIRTUAL06
    case 0xC261DE: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/battle/instant_win_handler.asm:98 MOVE_INT_YPTRDEST @VIRTUAL06, 0 ;game_state.unknownC4 = @VIRTUAL06
    case 0xC261E0: {
        Instruction step(cpu, 0x99, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/battle/instant_win_handler.asm:98 MOVE_INT_YPTRDEST @VIRTUAL06, 0 ;game_state.unknownC4 = @VIRTUAL06
    case 0xC261E3: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/battle/instant_win_handler.asm:98 MOVE_INT_YPTRDEST @VIRTUAL06, 0 ;game_state.unknownC4 = @VIRTUAL06
    case 0xC261E5: {
        Instruction step(cpu, 0x99, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:99 LDY #0
    case 0xC261E8: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:99 LDY #0
    // Overlapping static entry reached from 0xC261E8.
    case 0xC261EA: {
        Instruction step(cpu, 0x00, 0x000084u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:100 STY @LOCAL03
    case 0xC261EB: {
        Instruction step(cpu, 0x84, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:101 BRA @UNKNOWN7
    case 0xC261ED: {
        Instruction step(cpu, 0x80, 0x00001Eu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:103 SEP #PROC_FLAGS::ACCUM8
    case 0xC261EF: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:1275 LDA #$00
    // Macro caller: src/battle/instant_win_handler.asm:104 STZ_BADOPT @LOCAL00
    case 0xC261F1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x008500u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1282 STA dest
    // Macro caller: src/battle/instant_win_handler.asm:104 STZ_BADOPT @LOCAL00
    case 0xC261F3: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1282 STA dest
    // Macro caller: src/battle/instant_win_handler.asm:104 STZ_BADOPT @LOCAL00
    // Overlapping static entry reached from 0xC261F1.
    case 0xC261F4: {
        Instruction step(cpu, 0x0E, 0x004EA2u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:105 LDX #.SIZEOF(battler)
    case 0xC261F5: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:105 LDX #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC261F5.
    case 0xC261F7: {
        Instruction step(cpu, 0x00, 0x0000C2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:106 REP #PROC_FLAGS::ACCUM8
    case 0xC261F8: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:107 TYA
    case 0xC261FA: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:108 TXY
    case 0xC261FB: {
        Instruction step(cpu, 0x9B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_y();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:109 JSL MULT168
    case 0xC261FC: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:110 CLC
    case 0xC26200: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:111 ADC #.LOWORD(BATTLERS_TABLE)
    case 0xC26201: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000AEu : 0x00A1AEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:111 ADC #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC26201.
    case 0xC26203: {
        Instruction step(cpu, 0xA1, 0x000022u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:112 JSL MEMSET16
    case 0xC26204: {
        Instruction step(cpu, 0x22, 0xC08EEDu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:112 JSL MEMSET16
    // Overlapping static entry reached from 0xC26203.
    case 0xC26205: {
        Instruction step(cpu, 0xED, 0x00C08Eu, 3u, AddressMode::Absolute);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:113 LDY @LOCAL03
    case 0xC26208: {
        Instruction step(cpu, 0xA4, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:114 INY
    case 0xC2620A: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:115 STY @LOCAL03
    case 0xC2620B: {
        Instruction step(cpu, 0x84, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:117 CPY #BATTLER_COUNT
    case 0xC2620D: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:117 CPY #BATTLER_COUNT
    // Overlapping static entry reached from 0xC2620D.
    case 0xC2620F: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:118 BCC @UNKNOWN6
    case 0xC26210: {
        Instruction step(cpu, 0x90, 0x0000DDu, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:119 LDY #0
    case 0xC26212: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:119 LDY #0
    // Overlapping static entry reached from 0xC26212.
    case 0xC26214: {
        Instruction step(cpu, 0x00, 0x000084u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:120 STY @LOCAL02ALT2
    case 0xC26215: {
        Instruction step(cpu, 0x84, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:121 BRA @UNKNOWN11
    case 0xC26217: {
        Instruction step(cpu, 0x80, 0x00002Fu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:124 TYA
    case 0xC26219: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:125 CLC
    case 0xC2621A: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:126 ADC #.LOWORD(GAME_STATE)
    case 0xC2621B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000A9u : 0x009AA9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:126 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC2621B.
    case 0xC2621D: {
        Instruction step(cpu, 0x9A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_stack();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:127 TAX
    case 0xC2621E: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:128 LDA a:game_state::party_members,X
    case 0xC2621F: {
        Instruction step(cpu, 0xBD, 0x000077u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:132 AND #$00FF
    case 0xC26222: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:132 AND #$00FF
    // Overlapping static entry reached from 0xC26222.
    case 0xC26224: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:133 STA @LOCAL03
    case 0xC26225: {
        Instruction step(cpu, 0x85, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:134 BEQ @UNKNOWN10
    case 0xC26227: {
        Instruction step(cpu, 0xF0, 0x00001Au, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:135 CMP #4
    case 0xC26229: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:135 CMP #4
    // Overlapping static entry reached from 0xC26229.
    case 0xC2622B: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/battle/instant_win_handler.asm:136 BGT @UNKNOWN10
    case 0xC2622C: {
        Instruction step(cpu, 0xF0, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:767 BCS dest
    // Macro caller: src/battle/instant_win_handler.asm:136 BGT @UNKNOWN10
    case 0xC2622E: {
        Instruction step(cpu, 0xB0, 0x000013u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:137 TYA
    case 0xC26230: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:138 LDY #.SIZEOF(battler)
    case 0xC26231: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:138 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC26231.
    case 0xC26233: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:139 JSL MULT168
    case 0xC26234: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:140 CLC
    case 0xC26238: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:141 ADC #.LOWORD(BATTLERS_TABLE)
    case 0xC26239: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000AEu : 0x00A1AEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:141 ADC #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC26239.
    case 0xC2623B: {
        Instruction step(cpu, 0xA1, 0x0000AAu, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:142 TAX
    case 0xC2623C: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:143 LDA @LOCAL03
    case 0xC2623D: {
        Instruction step(cpu, 0xA5, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:144 JSL BATTLE_INIT_PLAYER_STATS
    case 0xC2623F: {
        Instruction step(cpu, 0x22, 0xC2B8D9u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:146 LDY @LOCAL02ALT2
    case 0xC26243: {
        Instruction step(cpu, 0xA4, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:147 INY
    case 0xC26245: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:148 STY @LOCAL02ALT2
    case 0xC26246: {
        Instruction step(cpu, 0x84, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:150 CPY #TOTAL_PARTY_COUNT
    case 0xC26248: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:150 CPY #TOTAL_PARTY_COUNT
    // Overlapping static entry reached from 0xC26248.
    case 0xC2624A: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:151 BCC @UNKNOWN8
    case 0xC2624B: {
        Instruction step(cpu, 0x90, 0x0000CCu, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/instant_win_handler.asm:152 MOVE_INT_CONSTANT 0, BATTLE_EXP_SCRATCH
    case 0xC2624D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/instant_win_handler.asm:152 MOVE_INT_CONSTANT 0, BATTLE_EXP_SCRATCH
    // Overlapping static entry reached from 0xC2624D.
    case 0xC2624F: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/battle/instant_win_handler.asm:152 MOVE_INT_CONSTANT 0, BATTLE_EXP_SCRATCH
    case 0xC26250: {
        Instruction step(cpu, 0x8D, 0x00AB76u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/instant_win_handler.asm:152 MOVE_INT_CONSTANT 0, BATTLE_EXP_SCRATCH
    case 0xC26253: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/instant_win_handler.asm:152 MOVE_INT_CONSTANT 0, BATTLE_EXP_SCRATCH
    // Overlapping static entry reached from 0xC26253.
    case 0xC26255: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/battle/instant_win_handler.asm:152 MOVE_INT_CONSTANT 0, BATTLE_EXP_SCRATCH
    case 0xC26256: {
        Instruction step(cpu, 0x8D, 0x00AB78u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:153 LDA #0
    case 0xC26259: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:153 LDA #0
    // Overlapping static entry reached from 0xC26259.
    case 0xC2625B: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:154 STA @LOCAL03
    case 0xC2625C: {
        Instruction step(cpu, 0x85, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:155 BRA @UNKNOWN13
    case 0xC2625E: {
        Instruction step(cpu, 0x80, 0x000053u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/instant_win_handler.asm:157 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC26260: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000040u : 0x00A440u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/instant_win_handler.asm:157 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC26260.
    case 0xC26262: {
        Instruction step(cpu, 0xA4, 0x000085u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/instant_win_handler.asm:157 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC26263: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/instant_win_handler.asm:157 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC26262.
    case 0xC26264: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/instant_win_handler.asm:157 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC26265: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D5u : 0x0000D5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/instant_win_handler.asm:157 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC26264.
    case 0xC26266: {
        Instruction step(cpu, 0xD5, 0x000000u, 2u, AddressMode::DirectPageIndexedX);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/instant_win_handler.asm:157 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC26265.
    case 0xC26267: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/instant_win_handler.asm:157 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC26268: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:158 LDA @LOCAL03
    case 0xC2626A: {
        Instruction step(cpu, 0xA5, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:159 ASL
    case 0xC2626C: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:160 TAX
    case 0xC2626D: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:161 LDA ENEMIES_IN_BATTLE_IDS,X
    case 0xC2626E: {
        Instruction step(cpu, 0xBD, 0x00A18Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:162 LDY #.SIZEOF(enemy_data)
    case 0xC26271: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Du : 0x00004Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:162 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC26271.
    case 0xC26273: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:163 JSL MULT168
    case 0xC26274: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:164 CLC
    case 0xC26278: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:165 ADC #enemy_data::exp
    case 0xC26279: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000014u : 0x000014u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:165 ADC #enemy_data::exp
    // Overlapping static entry reached from 0xC26279.
    case 0xC2627B: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:166 CLC
    case 0xC2627C: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:167 ADC @VIRTUAL06
    case 0xC2627D: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:168 STA @VIRTUAL06
    case 0xC2627F: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/instant_win_handler.asm:169 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26281: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/instant_win_handler.asm:169 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    // Overlapping static entry reached from 0xC26281.
    case 0xC26283: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/battle/instant_win_handler.asm:169 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26284: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1136 TAY
    // Macro caller: src/battle/instant_win_handler.asm:169 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26286: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/battle/instant_win_handler.asm:169 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26287: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1138 STA dest
    // Macro caller: src/battle/instant_win_handler.asm:169 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26289: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/battle/instant_win_handler.asm:169 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC2628B: {
        Instruction step(cpu, 0x84, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/instant_win_handler.asm:170 MOVE_INT BATTLE_EXP_SCRATCH, @VIRTUAL06
    case 0xC2628D: {
        Instruction step(cpu, 0xAD, 0x00AB76u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/instant_win_handler.asm:170 MOVE_INT BATTLE_EXP_SCRATCH, @VIRTUAL06
    case 0xC26290: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/instant_win_handler.asm:170 MOVE_INT BATTLE_EXP_SCRATCH, @VIRTUAL06
    case 0xC26292: {
        Instruction step(cpu, 0xAD, 0x00AB78u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/instant_win_handler.asm:170 MOVE_INT BATTLE_EXP_SCRATCH, @VIRTUAL06
    case 0xC26295: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:171 CLC
    case 0xC26297: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // include/macros.asm:942 LDA val1
    // Macro caller: src/battle/instant_win_handler.asm:172 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC26298: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:943 ADC val2
    // Macro caller: src/battle/instant_win_handler.asm:172 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC2629A: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:944 STA dest
    // Macro caller: src/battle/instant_win_handler.asm:172 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC2629C: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/battle/instant_win_handler.asm:172 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC2629E: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/battle/instant_win_handler.asm:172 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC262A0: {
        Instruction step(cpu, 0x65, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/battle/instant_win_handler.asm:172 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC262A2: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/instant_win_handler.asm:173 MOVE_INT @VIRTUAL06, BATTLE_EXP_SCRATCH
    case 0xC262A4: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/instant_win_handler.asm:173 MOVE_INT @VIRTUAL06, BATTLE_EXP_SCRATCH
    case 0xC262A6: {
        Instruction step(cpu, 0x8D, 0x00AB76u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/instant_win_handler.asm:173 MOVE_INT @VIRTUAL06, BATTLE_EXP_SCRATCH
    case 0xC262A9: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/instant_win_handler.asm:173 MOVE_INT @VIRTUAL06, BATTLE_EXP_SCRATCH
    case 0xC262AB: {
        Instruction step(cpu, 0x8D, 0x00AB78u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:174 LDA @LOCAL03
    case 0xC262AE: {
        Instruction step(cpu, 0xA5, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:175 INC
    case 0xC262B0: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:176 STA @LOCAL03
    case 0xC262B1: {
        Instruction step(cpu, 0x85, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:178 CMP ENEMIES_IN_BATTLE
    case 0xC262B3: {
        Instruction step(cpu, 0xCD, 0x00A18Cu, 3u, AddressMode::Absolute);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:179 BCC @UNKNOWN12
    case 0xC262B6: {
        Instruction step(cpu, 0x90, 0x0000A8u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:180 LDA #0
    case 0xC262B8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:180 LDA #0
    // Overlapping static entry reached from 0xC262B8.
    case 0xC262BA: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:181 JSL COUNT_CHARS
    case 0xC262BB: {
        Instruction step(cpu, 0x22, 0xC2BA70u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:182 DEC
    case 0xC262BF: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/instant_win_handler.asm:183 STORE_INT1632 @VIRTUAL0A
    case 0xC262C0: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/instant_win_handler.asm:183 STORE_INT1632 @VIRTUAL0A
    case 0xC262C2: {
        Instruction step(cpu, 0x64, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/instant_win_handler.asm:184 MOVE_INT BATTLE_EXP_SCRATCH, @VIRTUAL06
    case 0xC262C4: {
        Instruction step(cpu, 0xAD, 0x00AB76u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/instant_win_handler.asm:184 MOVE_INT BATTLE_EXP_SCRATCH, @VIRTUAL06
    case 0xC262C7: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/instant_win_handler.asm:184 MOVE_INT BATTLE_EXP_SCRATCH, @VIRTUAL06
    case 0xC262C9: {
        Instruction step(cpu, 0xAD, 0x00AB78u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/instant_win_handler.asm:184 MOVE_INT BATTLE_EXP_SCRATCH, @VIRTUAL06
    case 0xC262CC: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:185 CLC
    case 0xC262CE: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // include/macros.asm:942 LDA val1
    // Macro caller: src/battle/instant_win_handler.asm:186 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC262CF: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:943 ADC val2
    // Macro caller: src/battle/instant_win_handler.asm:186 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC262D1: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:944 STA dest
    // Macro caller: src/battle/instant_win_handler.asm:186 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC262D3: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/battle/instant_win_handler.asm:186 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC262D5: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/battle/instant_win_handler.asm:186 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC262D7: {
        Instruction step(cpu, 0x65, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/battle/instant_win_handler.asm:186 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC262D9: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/instant_win_handler.asm:187 MOVE_INT @VIRTUAL06, BATTLE_EXP_SCRATCH
    case 0xC262DB: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/instant_win_handler.asm:187 MOVE_INT @VIRTUAL06, BATTLE_EXP_SCRATCH
    case 0xC262DD: {
        Instruction step(cpu, 0x8D, 0x00AB76u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/instant_win_handler.asm:187 MOVE_INT @VIRTUAL06, BATTLE_EXP_SCRATCH
    case 0xC262E0: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/instant_win_handler.asm:187 MOVE_INT @VIRTUAL06, BATTLE_EXP_SCRATCH
    case 0xC262E2: {
        Instruction step(cpu, 0x8D, 0x00AB78u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:188 LDA #0
    case 0xC262E5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:188 LDA #0
    // Overlapping static entry reached from 0xC262E5.
    case 0xC262E7: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:189 JSL COUNT_CHARS
    case 0xC262E8: {
        Instruction step(cpu, 0x22, 0xC2BA70u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/instant_win_handler.asm:190 STORE_INT1632 @VIRTUAL0A
    case 0xC262EC: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/instant_win_handler.asm:190 STORE_INT1632 @VIRTUAL0A
    case 0xC262EE: {
        Instruction step(cpu, 0x64, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:191 JSL DIVISION32
    case 0xC262F0: {
        Instruction step(cpu, 0x22, 0xC090E1u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/instant_win_handler.asm:192 MOVE_INT @VIRTUAL06, BATTLE_EXP_SCRATCH
    case 0xC262F4: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/instant_win_handler.asm:192 MOVE_INT @VIRTUAL06, BATTLE_EXP_SCRATCH
    case 0xC262F6: {
        Instruction step(cpu, 0x8D, 0x00AB76u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/instant_win_handler.asm:192 MOVE_INT @VIRTUAL06, BATTLE_EXP_SCRATCH
    case 0xC262F9: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/instant_win_handler.asm:192 MOVE_INT @VIRTUAL06, BATTLE_EXP_SCRATCH
    case 0xC262FB: {
        Instruction step(cpu, 0x8D, 0x00AB78u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/instant_win_handler.asm:193 LOADPTR MSG_BTL_PLAYER_WIN_FORCE, @LOCAL00
    case 0xC262FE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000098u : 0x004798u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/instant_win_handler.asm:193 LOADPTR MSG_BTL_PLAYER_WIN_FORCE, @LOCAL00
    // Overlapping static entry reached from 0xC262FE.
    case 0xC26300: {
        Instruction step(cpu, 0x47, 0x000085u, 2u, AddressMode::DirectPageIndirectLong);
        step.xor_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/instant_win_handler.asm:193 LOADPTR MSG_BTL_PLAYER_WIN_FORCE, @LOCAL00
    case 0xC26301: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/instant_win_handler.asm:193 LOADPTR MSG_BTL_PLAYER_WIN_FORCE, @LOCAL00
    // Overlapping static entry reached from 0xC26300.
    case 0xC26302: {
        Instruction step(cpu, 0x0E, 0x00C7A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/instant_win_handler.asm:193 LOADPTR MSG_BTL_PLAYER_WIN_FORCE, @LOCAL00
    case 0xC26303: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/instant_win_handler.asm:193 LOADPTR MSG_BTL_PLAYER_WIN_FORCE, @LOCAL00
    // Overlapping static entry reached from 0xC26303.
    case 0xC26305: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/instant_win_handler.asm:193 LOADPTR MSG_BTL_PLAYER_WIN_FORCE, @LOCAL00
    case 0xC26306: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/instant_win_handler.asm:194 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC26308: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/instant_win_handler.asm:194 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2630A: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/instant_win_handler.asm:194 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2630C: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/instant_win_handler.asm:194 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2630E: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:195 JSL DISPLAY_TEXT_WAIT
    case 0xC26310: {
        Instruction step(cpu, 0x22, 0xC1DA49u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:196 LDY #.LOWORD(BATTLERS_TABLE)
    case 0xC26314: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x0000AEu : 0x00A1AEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:196 LDY #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC26314.
    case 0xC26316: {
        Instruction step(cpu, 0xA1, 0x000084u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:197 STY @LOCAL04ALT
    case 0xC26317: {
        Instruction step(cpu, 0x84, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:197 STY @LOCAL04ALT
    // Overlapping static entry reached from 0xC26316.
    case 0xC26318: {
        Instruction step(cpu, 0x16, 0x0000A9u, 2u, AddressMode::DirectPageIndexedX);
        step.shift_left();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:198 LDA #0
    case 0xC26319: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:198 LDA #0
    // Overlapping static entry reached from 0xC26318.
    case 0xC2631A: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:198 LDA #0
    // Overlapping static entry reached from 0xC26319.
    case 0xC2631B: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:199 STA @VIRTUAL02
    case 0xC2631C: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:200 BRA @UNKNOWN16
    case 0xC2631E: {
        Instruction step(cpu, 0x80, 0x000051u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:202 LDA a:battler::consciousness,Y
    case 0xC26320: {
        Instruction step(cpu, 0xB9, 0x00000Cu, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:203 AND #$00FF
    case 0xC26323: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:203 AND #$00FF
    // Overlapping static entry reached from 0xC26323.
    case 0xC26325: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:204 BEQ @UNKNOWN15
    case 0xC26326: {
        Instruction step(cpu, 0xF0, 0x00003Du, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:205 LDA a:battler::ally_or_enemy,Y
    case 0xC26328: {
        Instruction step(cpu, 0xB9, 0x00000Eu, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:206 AND #$00FF
    case 0xC2632B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:206 AND #$00FF
    // Overlapping static entry reached from 0xC2632B.
    case 0xC2632D: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:207 BNE @UNKNOWN15
    case 0xC2632E: {
        Instruction step(cpu, 0xD0, 0x000035u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:208 LDA a:battler::npc_id,Y
    case 0xC26330: {
        Instruction step(cpu, 0xB9, 0x00000Fu, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:209 AND #$00FF
    case 0xC26333: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:209 AND #$00FF
    // Overlapping static entry reached from 0xC26333.
    case 0xC26335: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:210 BNE @UNKNOWN15
    case 0xC26336: {
        Instruction step(cpu, 0xD0, 0x00002Du, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:211 LDA a:battler::afflictions + STATUS_GROUP::PERSISTENT_EASYHEAL,Y
    case 0xC26338: {
        Instruction step(cpu, 0xB9, 0x00001Du, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:212 AND #$00FF
    case 0xC2633B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:212 AND #$00FF
    // Overlapping static entry reached from 0xC2633B.
    case 0xC2633D: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:213 TAX
    case 0xC2633E: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:214 CPX #STATUS_0::UNCONSCIOUS
    case 0xC2633F: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:214 CPX #STATUS_0::UNCONSCIOUS
    // Overlapping static entry reached from 0xC2633F.
    case 0xC26341: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:215 BEQ @UNKNOWN15
    case 0xC26342: {
        Instruction step(cpu, 0xF0, 0x000021u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:216 CPX #STATUS_0::DIAMONDIZED
    case 0xC26344: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:216 CPX #STATUS_0::DIAMONDIZED
    // Overlapping static entry reached from 0xC26344.
    case 0xC26346: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:217 BEQ @UNKNOWN15
    case 0xC26347: {
        Instruction step(cpu, 0xF0, 0x00001Cu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/instant_win_handler.asm:218 MOVE_INT BATTLE_EXP_SCRATCH, @VIRTUAL06
    case 0xC26349: {
        Instruction step(cpu, 0xAD, 0x00AB76u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/instant_win_handler.asm:218 MOVE_INT BATTLE_EXP_SCRATCH, @VIRTUAL06
    case 0xC2634C: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/instant_win_handler.asm:218 MOVE_INT BATTLE_EXP_SCRATCH, @VIRTUAL06
    case 0xC2634E: {
        Instruction step(cpu, 0xAD, 0x00AB78u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/instant_win_handler.asm:218 MOVE_INT BATTLE_EXP_SCRATCH, @VIRTUAL06
    case 0xC26351: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/instant_win_handler.asm:219 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC26353: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/instant_win_handler.asm:219 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC26355: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/instant_win_handler.asm:219 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC26357: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/instant_win_handler.asm:219 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC26359: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:220 LDX #1
    case 0xC2635B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:220 LDX #1
    // Overlapping static entry reached from 0xC2635B.
    case 0xC2635D: {
        Instruction step(cpu, 0x00, 0x0000B9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:221 LDA __BSS_START__,Y
    case 0xC2635E: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:222 JSL GAIN_EXP
    case 0xC26361: {
        Instruction step(cpu, 0x22, 0xC1D7E4u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:224 LDY @LOCAL04ALT
    case 0xC26365: {
        Instruction step(cpu, 0xA4, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:225 TYA
    case 0xC26367: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:226 CLC
    case 0xC26368: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:227 ADC #.SIZEOF(battler)
    case 0xC26369: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:227 ADC #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC26369.
    case 0xC2636B: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:228 TAY
    case 0xC2636C: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:229 STY @LOCAL04ALT
    case 0xC2636D: {
        Instruction step(cpu, 0x84, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:230 INC @VIRTUAL02
    case 0xC2636F: {
        Instruction step(cpu, 0xE6, 0x000002u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:232 LDA @VIRTUAL02
    case 0xC26371: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:233 CMP #BATTLER_COUNT
    case 0xC26373: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:233 CMP #BATTLER_COUNT
    // Overlapping static entry reached from 0xC26373.
    case 0xC26375: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:234 BCC @UNKNOWN14
    case 0xC26376: {
        Instruction step(cpu, 0x90, 0x0000A8u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:235 LDA ENEMIES_IN_BATTLE
    case 0xC26378: {
        Instruction step(cpu, 0xAD, 0x00A18Cu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:236 JSR RAND_LIMIT
    case 0xC2637B: {
        Instruction step(cpu, 0x20, 0x00696Cu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:237 ASL
    case 0xC2637E: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:238 TAX
    case 0xC2637F: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:239 LDA ENEMIES_IN_BATTLE_IDS,X
    case 0xC26380: {
        Instruction step(cpu, 0xBD, 0x00A18Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:240 STA @LOCAL02ALT2
    case 0xC26383: {
        Instruction step(cpu, 0x85, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/instant_win_handler.asm:241 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC26385: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000040u : 0x00A440u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/instant_win_handler.asm:241 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC26385.
    case 0xC26387: {
        Instruction step(cpu, 0xA4, 0x000085u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/instant_win_handler.asm:241 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC26388: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/instant_win_handler.asm:241 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC26387.
    case 0xC26389: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/instant_win_handler.asm:241 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC2638A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D5u : 0x0000D5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/instant_win_handler.asm:241 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC26389.
    case 0xC2638B: {
        Instruction step(cpu, 0xD5, 0x000000u, 2u, AddressMode::DirectPageIndexedX);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/instant_win_handler.asm:241 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2638A.
    case 0xC2638C: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/instant_win_handler.asm:241 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC2638D: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:242 LDA @LOCAL02ALT2
    case 0xC2638F: {
        Instruction step(cpu, 0xA5, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:243 LDY #.SIZEOF(enemy_data)
    case 0xC26391: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Du : 0x00004Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:243 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC26391.
    case 0xC26393: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:244 JSL MULT168
    case 0xC26394: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:245 STA @LOCAL03
    case 0xC26398: {
        Instruction step(cpu, 0x85, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:246 CLC
    case 0xC2639A: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:247 ADC #enemy_data::item_dropped
    case 0xC2639B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000047u : 0x000047u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:247 ADC #enemy_data::item_dropped
    // Overlapping static entry reached from 0xC2639B.
    case 0xC2639D: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/instant_win_handler.asm:248 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2639E: {
        Instruction step(cpu, 0xA6, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/instant_win_handler.asm:248 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC263A0: {
        Instruction step(cpu, 0x86, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/instant_win_handler.asm:248 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC263A2: {
        Instruction step(cpu, 0xA6, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/instant_win_handler.asm:248 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC263A4: {
        Instruction step(cpu, 0x86, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:249 CLC
    case 0xC263A6: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:250 ADC @VIRTUAL0A
    case 0xC263A7: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:251 STA @VIRTUAL0A
    case 0xC263A9: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:252 LDA [@VIRTUAL0A]
    case 0xC263AB: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:253 AND #$00FF
    case 0xC263AD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:253 AND #$00FF
    // Overlapping static entry reached from 0xC263AD.
    case 0xC263AF: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:254 STA ITEM_DROPPED
    case 0xC263B0: {
        Instruction step(cpu, 0x8D, 0x00ABE5u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:255 LDA @LOCAL03
    case 0xC263B3: {
        Instruction step(cpu, 0xA5, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:256 CLC
    case 0xC263B5: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:257 ADC #enemy_data::item_drop_rate
    case 0xC263B6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000046u : 0x000046u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:257 ADC #enemy_data::item_drop_rate
    // Overlapping static entry reached from 0xC263B6.
    case 0xC263B8: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:258 CLC
    case 0xC263B9: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:259 ADC @VIRTUAL06
    case 0xC263BA: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:260 STA @VIRTUAL06
    case 0xC263BC: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:261 LDA [@VIRTUAL06]
    case 0xC263BE: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:262 AND #$00FF
    case 0xC263C0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:262 AND #$00FF
    // Overlapping static entry reached from 0xC263C0.
    case 0xC263C2: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:263 BEQ @UNKNOWN17
    case 0xC263C3: {
        Instruction step(cpu, 0xF0, 0x000020u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:264 CMP #1
    case 0xC263C5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:264 CMP #1
    // Overlapping static entry reached from 0xC263C5.
    case 0xC263C7: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:265 BEQ @UNKNOWN18
    case 0xC263C8: {
        Instruction step(cpu, 0xF0, 0x000029u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:266 CMP #2
    case 0xC263CA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:266 CMP #2
    // Overlapping static entry reached from 0xC263CA.
    case 0xC263CC: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:267 BEQ @UNKNOWN19
    case 0xC263CD: {
        Instruction step(cpu, 0xF0, 0x000032u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:268 CMP #3
    case 0xC263CF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:268 CMP #3
    // Overlapping static entry reached from 0xC263CF.
    case 0xC263D1: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:269 BEQ @UNKNOWN20
    case 0xC263D2: {
        Instruction step(cpu, 0xF0, 0x00003Bu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:270 CMP #4
    case 0xC263D4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:270 CMP #4
    // Overlapping static entry reached from 0xC263D4.
    case 0xC263D6: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:271 BEQ @UNKNOWN21
    case 0xC263D7: {
        Instruction step(cpu, 0xF0, 0x000044u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:272 CMP #5
    case 0xC263D9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000005u : 0x000005u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:272 CMP #5
    // Overlapping static entry reached from 0xC263D9.
    case 0xC263DB: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:273 BEQ @UNKNOWN22
    case 0xC263DC: {
        Instruction step(cpu, 0xF0, 0x00004Du, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:274 CMP #6
    case 0xC263DE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:274 CMP #6
    // Overlapping static entry reached from 0xC263DE.
    case 0xC263E0: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:275 BEQ @UNKNOWN23
    case 0xC263E1: {
        Instruction step(cpu, 0xF0, 0x000056u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:276 BRA @UNKNOWN24
    case 0xC263E3: {
        Instruction step(cpu, 0x80, 0x000060u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:278 JSL RAND
    case 0xC263E5: {
        Instruction step(cpu, 0x22, 0xC08E8Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:279 AND #ITEM_RARITY_0
    case 0xC263E9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x00007Fu : 0x00007Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:279 AND #ITEM_RARITY_0
    // Overlapping static entry reached from 0xC263E9.
    case 0xC263EB: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:280 BEQ @UNKNOWN24
    case 0xC263EC: {
        Instruction step(cpu, 0xF0, 0x000057u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:281 STZ ITEM_DROPPED
    case 0xC263EE: {
        Instruction step(cpu, 0x9C, 0x00ABE5u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:282 BRA @UNKNOWN24
    case 0xC263F1: {
        Instruction step(cpu, 0x80, 0x000052u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:284 JSL RAND
    case 0xC263F3: {
        Instruction step(cpu, 0x22, 0xC08E8Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:285 AND #ITEM_RARITY_1
    case 0xC263F7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x00003Fu : 0x00003Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:285 AND #ITEM_RARITY_1
    // Overlapping static entry reached from 0xC263F7.
    case 0xC263F9: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:286 BEQ @UNKNOWN24
    case 0xC263FA: {
        Instruction step(cpu, 0xF0, 0x000049u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:287 STZ ITEM_DROPPED
    case 0xC263FC: {
        Instruction step(cpu, 0x9C, 0x00ABE5u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:288 BRA @UNKNOWN24
    case 0xC263FF: {
        Instruction step(cpu, 0x80, 0x000044u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:290 JSL RAND
    case 0xC26401: {
        Instruction step(cpu, 0x22, 0xC08E8Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:291 AND #ITEM_RARITY_2
    case 0xC26405: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x00001Fu : 0x00001Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:291 AND #ITEM_RARITY_2
    // Overlapping static entry reached from 0xC26405.
    case 0xC26407: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:292 BEQ @UNKNOWN24
    case 0xC26408: {
        Instruction step(cpu, 0xF0, 0x00003Bu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:293 STZ ITEM_DROPPED
    case 0xC2640A: {
        Instruction step(cpu, 0x9C, 0x00ABE5u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:294 BRA @UNKNOWN24
    case 0xC2640D: {
        Instruction step(cpu, 0x80, 0x000036u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:296 JSL RAND
    case 0xC2640F: {
        Instruction step(cpu, 0x22, 0xC08E8Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:297 AND #ITEM_RARITY_3
    case 0xC26413: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x00000Fu : 0x00000Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:297 AND #ITEM_RARITY_3
    // Overlapping static entry reached from 0xC26413.
    case 0xC26415: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:298 BEQ @UNKNOWN24
    case 0xC26416: {
        Instruction step(cpu, 0xF0, 0x00002Du, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:299 STZ ITEM_DROPPED
    case 0xC26418: {
        Instruction step(cpu, 0x9C, 0x00ABE5u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:300 BRA @UNKNOWN24
    case 0xC2641B: {
        Instruction step(cpu, 0x80, 0x000028u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:302 JSL RAND
    case 0xC2641D: {
        Instruction step(cpu, 0x22, 0xC08E8Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:303 AND #ITEM_RARITY_4
    case 0xC26421: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000007u : 0x000007u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:303 AND #ITEM_RARITY_4
    // Overlapping static entry reached from 0xC26421.
    case 0xC26423: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:304 BEQ @UNKNOWN24
    case 0xC26424: {
        Instruction step(cpu, 0xF0, 0x00001Fu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:305 STZ ITEM_DROPPED
    case 0xC26426: {
        Instruction step(cpu, 0x9C, 0x00ABE5u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:306 BRA @UNKNOWN24
    case 0xC26429: {
        Instruction step(cpu, 0x80, 0x00001Au, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:308 JSL RAND
    case 0xC2642B: {
        Instruction step(cpu, 0x22, 0xC08E8Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:309 AND #ITEM_RARITY_5
    case 0xC2642F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:309 AND #ITEM_RARITY_5
    // Overlapping static entry reached from 0xC2642F.
    case 0xC26431: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:310 BEQ @UNKNOWN24
    case 0xC26432: {
        Instruction step(cpu, 0xF0, 0x000011u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:311 STZ ITEM_DROPPED
    case 0xC26434: {
        Instruction step(cpu, 0x9C, 0x00ABE5u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:312 BRA @UNKNOWN24
    case 0xC26437: {
        Instruction step(cpu, 0x80, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:314 JSL RAND
    case 0xC26439: {
        Instruction step(cpu, 0x22, 0xC08E8Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:315 AND #ITEM_RARITY_6
    case 0xC2643D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:315 AND #ITEM_RARITY_6
    // Overlapping static entry reached from 0xC2643D.
    case 0xC2643F: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:316 BEQ @UNKNOWN24
    case 0xC26440: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:317 STZ ITEM_DROPPED
    case 0xC26442: {
        Instruction step(cpu, 0x9C, 0x00ABE5u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:319 LDA ITEM_DROPPED
    case 0xC26445: {
        Instruction step(cpu, 0xAD, 0x00ABE5u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:320 BEQ @UNKNOWN25
    case 0xC26448: {
        Instruction step(cpu, 0xF0, 0x000017u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:321 SEP #PROC_FLAGS::ACCUM8
    case 0xC2644A: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:322 LDA ITEM_DROPPED
    case 0xC2644C: {
        Instruction step(cpu, 0xAD, 0x00ABE5u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:323 JSL REDIRECT_C1ACF8
    case 0xC2644F: {
        Instruction step(cpu, 0x22, 0xC1DB59u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/instant_win_handler.asm:325 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PRESENT
    case 0xC26453: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000017u : 0x004917u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/instant_win_handler.asm:325 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PRESENT
    // Overlapping static entry reached from 0xC26453.
    case 0xC26455: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x49, narrow ? 0x000085u : 0x000E85u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.xor_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/instant_win_handler.asm:325 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PRESENT
    case 0xC26456: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/instant_win_handler.asm:325 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PRESENT
    // Overlapping static entry reached from 0xC26455.
    case 0xC26457: {
        Instruction step(cpu, 0x0E, 0x00C7A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/instant_win_handler.asm:325 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PRESENT
    case 0xC26458: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/instant_win_handler.asm:325 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PRESENT
    // Overlapping static entry reached from 0xC26458.
    case 0xC2645A: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/instant_win_handler.asm:325 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PRESENT
    case 0xC2645B: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/instant_win_handler.asm:325 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PRESENT
    case 0xC2645D: {
        Instruction step(cpu, 0x22, 0xC1D9FFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:327 JSL UNKNOWN_C1DD5F
    case 0xC26461: {
        Instruction step(cpu, 0x22, 0xC1DB3Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:328 LDA GAME_STATE+game_state::walking_style
    case 0xC26465: {
        Instruction step(cpu, 0xAD, 0x009B34u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:329 CMP #WALKING_STYLE::BICYCLE
    case 0xC26468: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:329 CMP #WALKING_STYLE::BICYCLE
    // Overlapping static entry reached from 0xC26468.
    case 0xC2646A: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:330 BNE @UNKNOWN26
    case 0xC2646B: {
        Instruction step(cpu, 0xD0, 0x000009u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:331 LDA #MUSIC::BICYCLE
    case 0xC2646D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000052u : 0x000052u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:331 LDA #MUSIC::BICYCLE
    // Overlapping static entry reached from 0xC2646D.
    case 0xC2646F: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:332 JSL CHANGE_MUSIC
    case 0xC26470: {
        Instruction step(cpu, 0x22, 0xC4CF5Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:333 BRA @UNKNOWN27
    case 0xC26474: {
        Instruction step(cpu, 0x80, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:335 JSL UNKNOWN_C06A07
    case 0xC26476: {
        Instruction step(cpu, 0x22, 0xC06C35u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/instant_win_handler.asm:337 JSL UNKNOWN_C09451
    case 0xC2647A: {
        Instruction step(cpu, 0x22, 0xC09430u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/instant_win_handler.asm:338 END_C_FUNCTION
    case 0xC2647E: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/instant_win_handler.asm:338 END_C_FUNCTION
    case 0xC2647F: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
