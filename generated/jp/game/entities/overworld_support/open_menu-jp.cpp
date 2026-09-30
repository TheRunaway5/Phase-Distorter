// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/overworld/open_menu-jp.asm
bool resume_overworld_open_menu_jp(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/open_menu-jp.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC13A85: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/open_menu-jp.asm:13 END_STACK_VARS
    case 0xC13A87: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/open_menu-jp.asm:13 END_STACK_VARS
    case 0xC13A88: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/open_menu-jp.asm:13 END_STACK_VARS
    case 0xC13A89: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000DDu : 0x00FFDDu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/open_menu-jp.asm:13 END_STACK_VARS
    // Overlapping static entry reached from 0xC13A89.
    case 0xC13A8B: {
        Instruction step(cpu, 0xFF, 0x1B225Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/open_menu-jp.asm:13 END_STACK_VARS
    case 0xC13A8C: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:14 JSL UNKNOWN_C0943C
    case 0xC13A8D: {
        Instruction step(cpu, 0x22, 0xC0941Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:14 JSL UNKNOWN_C0943C
    // Overlapping static entry reached from 0xC13A8B.
    case 0xC13A8F: {
        Instruction step(cpu, 0x94, 0x0000C0u, 2u, AddressMode::DirectPageIndexedX);
        step.store_y();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:15 LDA #SFX::CURSOR1
    case 0xC13A91: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:15 LDA #SFX::CURSOR1
    // Overlapping static entry reached from 0xC13A91.
    case 0xC13A93: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:16 JSL PLAY_SOUND
    case 0xC13A94: {
        Instruction step(cpu, 0x22, 0xC0ABBFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:735 LDA arg
    // Macro caller: src/overworld/open_menu-jp.asm:17 CREATE_WINDOW_NEAR #WINDOW::UNKNOWN00
    case 0xC13A98: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:735 LDA arg
    // Macro caller: src/overworld/open_menu-jp.asm:17 CREATE_WINDOW_NEAR #WINDOW::UNKNOWN00
    // Overlapping static entry reached from 0xC13A98.
    case 0xC13A9A: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/overworld/open_menu-jp.asm:17 CREATE_WINDOW_NEAR #WINDOW::UNKNOWN00
    case 0xC13A9B: {
        Instruction step(cpu, 0x20, 0x0006E4u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:18 LDA #1
    case 0xC13A9E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:18 LDA #1
    // Overlapping static entry reached from 0xC13A9E.
    case 0xC13AA0: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:19 STA @VIRTUAL02
    case 0xC13AA1: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:20 JMP @UNKNOWN7
    case 0xC13AA3: {
        Instruction step(cpu, 0x4C, 0x003B4Cu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:22 LDA @VIRTUAL02
    case 0xC13AA6: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:23 CMP #3
    case 0xC13AA8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:23 CMP #3
    // Overlapping static entry reached from 0xC13AA8.
    case 0xC13AAA: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:24 BNE @UNKNOWN2
    case 0xC13AAB: {
        Instruction step(cpu, 0xD0, 0x00000Bu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:25 JSR UNKNOWN_C1C373
    case 0xC13AAD: {
        Instruction step(cpu, 0x20, 0x00C1D5u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:26 CMP #0
    case 0xC13AB0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:26 CMP #0
    // Overlapping static entry reached from 0xC13AB0.
    case 0xC13AB2: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/open_menu-jp.asm:27 BEQL @UNKNOWN6
    case 0xC13AB3: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/open_menu-jp.asm:27 BEQL @UNKNOWN6
    case 0xC13AB5: {
        Instruction step(cpu, 0x4C, 0x003B4Au, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:29 LDA @VIRTUAL02
    case 0xC13AB8: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:30 CMP #1
    case 0xC13ABA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:30 CMP #1
    // Overlapping static entry reached from 0xC13ABA.
    case 0xC13ABC: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:31 BEQ @UNKNOWN3
    case 0xC13ABD: {
        Instruction step(cpu, 0xF0, 0x00002Bu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:32 LDA @VIRTUAL02
    case 0xC13ABF: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:33 CMP #5
    case 0xC13AC1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000005u : 0x000005u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:33 CMP #5
    // Overlapping static entry reached from 0xC13AC1.
    case 0xC13AC3: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:34 BEQ @UNKNOWN3
    case 0xC13AC4: {
        Instruction step(cpu, 0xF0, 0x000024u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:35 LDA @VIRTUAL02
    case 0xC13AC6: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:36 CMP #2
    case 0xC13AC8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:36 CMP #2
    // Overlapping static entry reached from 0xC13AC8.
    case 0xC13ACA: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:37 BNE @UNKNOWN4
    case 0xC13ACB: {
        Instruction step(cpu, 0xD0, 0x000022u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:38 LDA GAME_STATE+game_state::player_controlled_party_count
    case 0xC13ACD: {
        Instruction step(cpu, 0xAD, 0x009B55u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:39 AND #$00FF
    case 0xC13AD0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:39 AND #$00FF
    // Overlapping static entry reached from 0xC13AD0.
    case 0xC13AD2: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:40 CMP #1
    case 0xC13AD3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:40 CMP #1
    // Overlapping static entry reached from 0xC13AD3.
    case 0xC13AD5: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:41 BNE @UNKNOWN4
    case 0xC13AD6: {
        Instruction step(cpu, 0xD0, 0x000017u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:42 LDX #1
    case 0xC13AD8: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:42 LDX #1
    // Overlapping static entry reached from 0xC13AD8.
    case 0xC13ADA: {
        Instruction step(cpu, 0x00, 0x0000ADu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:43 LDA GAME_STATE + game_state::party_members
    case 0xC13ADB: {
        Instruction step(cpu, 0xAD, 0x009B20u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:44 AND #$00FF
    case 0xC13ADE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:44 AND #$00FF
    // Overlapping static entry reached from 0xC13ADE.
    case 0xC13AE0: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:45 JSL GET_CHARACTER_ITEM
    case 0xC13AE1: {
        Instruction step(cpu, 0x22, 0xC3E537u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:46 CMP #0
    case 0xC13AE5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:46 CMP #0
    // Overlapping static entry reached from 0xC13AE5.
    case 0xC13AE7: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:47 BNE @UNKNOWN4
    case 0xC13AE8: {
        Instruction step(cpu, 0xD0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:49 LDX #1
    case 0xC13AEA: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:49 LDX #1
    // Overlapping static entry reached from 0xC13AEA.
    case 0xC13AEC: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:50 BRA @UNKNOWN5
    case 0xC13AED: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:52 LDX #27
    case 0xC13AEF: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x00001Bu : 0x00001Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:52 LDX #27
    // Overlapping static entry reached from 0xC13AEF.
    case 0xC13AF1: {
        Instruction step(cpu, 0x00, 0x0000A5u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:54 LDA @VIRTUAL02
    case 0xC13AF2: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:55 DEC
    case 0xC13AF4: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:56 STA @LOCAL07
    case 0xC13AF5: {
        Instruction step(cpu, 0x85, 0x000021u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/open_menu-jp.asm:57 LOADPTR CMD_WINDOW_TEXT, @VIRTUAL06
    case 0xC13AF7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000030u : 0x00DD30u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/open_menu-jp.asm:57 LOADPTR CMD_WINDOW_TEXT, @VIRTUAL06
    // Overlapping static entry reached from 0xC13AF7.
    case 0xC13AF9: {
        Instruction step(cpu, 0xDD, 0x000685u, 3u, AddressMode::AbsoluteIndexedX);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/open_menu-jp.asm:57 LOADPTR CMD_WINDOW_TEXT, @VIRTUAL06
    case 0xC13AFA: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu-jp.asm:57 LOADPTR CMD_WINDOW_TEXT, @VIRTUAL06
    case 0xC13AFC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C9u : 0x0000C9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu-jp.asm:57 LOADPTR CMD_WINDOW_TEXT, @VIRTUAL06
    // Overlapping static entry reached from 0xC13AFC.
    case 0xC13AFE: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/open_menu-jp.asm:57 LOADPTR CMD_WINDOW_TEXT, @VIRTUAL06
    case 0xC13AFF: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:58 LDA @LOCAL07
    case 0xC13B01: {
        Instruction step(cpu, 0xA5, 0x000021u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:529 STA scratch
    // Macro caller: src/overworld/open_menu-jp.asm:59 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC13B03: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:530 ASL
    // Macro caller: src/overworld/open_menu-jp.asm:59 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC13B05: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:531 ASL
    // Macro caller: src/overworld/open_menu-jp.asm:59 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC13B06: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:532 ADC scratch
    // Macro caller: src/overworld/open_menu-jp.asm:59 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC13B07: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:60 CLC
    case 0xC13B09: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:61 ADC @VIRTUAL06
    case 0xC13B0A: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:62 STA @VIRTUAL06
    case 0xC13B0C: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:63 STA @LOCAL00
    case 0xC13B0E: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:64 LDA @VIRTUAL06+2
    case 0xC13B10: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:65 STA @LOCAL00+2
    case 0xC13B12: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/open_menu-jp.asm:66 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC13B14: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/open_menu-jp.asm:66 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC13B14.
    case 0xC13B16: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/overworld/open_menu-jp.asm:66 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC13B17: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/open_menu-jp.asm:66 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC13B19: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/open_menu-jp.asm:66 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC13B19.
    case 0xC13B1B: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/overworld/open_menu-jp.asm:66 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC13B1C: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:67 TXA
    case 0xC13B1E: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:68 SEP #PROC_FLAGS::ACCUM8
    case 0xC13B1F: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:69 STA @LOCAL02
    case 0xC13B21: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:70 REP #PROC_FLAGS::ACCUM8
    case 0xC13B23: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:71 LDA @LOCAL07
    case 0xC13B25: {
        Instruction step(cpu, 0xA5, 0x000021u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:72 LSR
    case 0xC13B27: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:73 TAY
    case 0xC13B28: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:74 STY @LOCAL06
    case 0xC13B29: {
        Instruction step(cpu, 0x84, 0x00001Fu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:75 LDY #2
    case 0xC13B2B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:75 LDY #2
    // Overlapping static entry reached from 0xC13B2B.
    case 0xC13B2D: {
        Instruction step(cpu, 0x00, 0x0000A5u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:76 LDA @VIRTUAL02
    case 0xC13B2E: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:77 JSL MODULUS16
    case 0xC13B30: {
        Instruction step(cpu, 0x22, 0xC09213u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:529 STA scratch
    // Macro caller: src/overworld/open_menu-jp.asm:78 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC13B34: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:530 ASL
    // Macro caller: src/overworld/open_menu-jp.asm:78 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC13B36: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:531 ASL
    // Macro caller: src/overworld/open_menu-jp.asm:78 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC13B37: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:532 ADC scratch
    // Macro caller: src/overworld/open_menu-jp.asm:78 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC13B38: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:79 STA @VIRTUAL04
    case 0xC13B3A: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:80 LDA #5
    case 0xC13B3C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000005u : 0x000005u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:80 LDA #5
    // Overlapping static entry reached from 0xC13B3C.
    case 0xC13B3E: {
        Instruction step(cpu, 0x00, 0x000038u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:81 SEC
    case 0xC13B3F: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:82 SBC @VIRTUAL04
    case 0xC13B40: {
        Instruction step(cpu, 0xE5, 0x000004u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:83 TAX
    case 0xC13B42: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:84 LDA @VIRTUAL02
    case 0xC13B43: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:85 LDY @LOCAL06
    case 0xC13B45: {
        Instruction step(cpu, 0xA4, 0x00001Fu, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:86 JSR UNKNOWN_C11596
    case 0xC13B47: {
        Instruction step(cpu, 0x20, 0x001B6Au, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:88 INC @VIRTUAL02
    case 0xC13B4A: {
        Instruction step(cpu, 0xE6, 0x000002u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:90 LDA @VIRTUAL02
    case 0xC13B4C: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:91 CMP #7
    case 0xC13B4E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000007u : 0x000007u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:91 CMP #7
    // Overlapping static entry reached from 0xC13B4E.
    case 0xC13B50: {
        Instruction step(cpu, 0x00, 0x0000B0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:784 BCS :+
    // Macro caller: src/overworld/open_menu-jp.asm:92 BCCL @UNKNOWN1
    case 0xC13B51: {
        Instruction step(cpu, 0xB0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/overworld/open_menu-jp.asm:92 BCCL @UNKNOWN1
    case 0xC13B53: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:786 JMP dest
    // Macro caller: src/overworld/open_menu-jp.asm:92 BCCL @UNKNOWN1
    case 0xC13B55: {
        Instruction step(cpu, 0x4C, 0x003AA6u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:93 JSR PRINT_MENU_ITEMS
    case 0xC13B58: {
        Instruction step(cpu, 0x20, 0x001BF0u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:95 LDA #0
    case 0xC13B5B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:95 LDA #0
    // Overlapping static entry reached from 0xC13B5B.
    case 0xC13B5D: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:96 JSR SET_WINDOW_FOCUS
    case 0xC13B5E: {
        Instruction step(cpu, 0x20, 0x00013Bu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:97 JSR PRINT_MENU_ITEMS
    case 0xC13B61: {
        Instruction step(cpu, 0x20, 0x001BF0u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:98 LDA #1
    case 0xC13B64: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:98 LDA #1
    // Overlapping static entry reached from 0xC13B64.
    case 0xC13B66: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:99 JSR SELECTION_MENU
    case 0xC13B67: {
        Instruction step(cpu, 0x20, 0x002109u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/overworld/open_menu-jp.asm:100 STORE_INT1632 @VIRTUAL06
    case 0xC13B6A: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/overworld/open_menu-jp.asm:100 STORE_INT1632 @VIRTUAL06
    case 0xC13B6C: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:101 LDA @VIRTUAL06
    case 0xC13B6E: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:102 CMP #MENU_OPTIONS::TALK_TO
    case 0xC13B70: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:102 CMP #MENU_OPTIONS::TALK_TO
    // Overlapping static entry reached from 0xC13B70.
    case 0xC13B72: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:103 BEQ @TALK_TO
    case 0xC13B73: {
        Instruction step(cpu, 0xF0, 0x000028u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:104 CMP #MENU_OPTIONS::GOODS
    case 0xC13B75: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:104 CMP #MENU_OPTIONS::GOODS
    // Overlapping static entry reached from 0xC13B75.
    case 0xC13B77: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:105 BEQ @GOODS
    case 0xC13B78: {
        Instruction step(cpu, 0xF0, 0x000056u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:106 CMP #MENU_OPTIONS::PSI
    case 0xC13B7A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:106 CMP #MENU_OPTIONS::PSI
    // Overlapping static entry reached from 0xC13B7A.
    case 0xC13B7C: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/open_menu-jp.asm:107 BEQL @PSI
    case 0xC13B7D: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/open_menu-jp.asm:107 BEQL @PSI
    case 0xC13B7F: {
        Instruction step(cpu, 0x4C, 0x003FE1u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:108 CMP #MENU_OPTIONS::EQUIP
    case 0xC13B82: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:108 CMP #MENU_OPTIONS::EQUIP
    // Overlapping static entry reached from 0xC13B82.
    case 0xC13B84: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/open_menu-jp.asm:109 BEQL @EQUIP
    case 0xC13B85: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/open_menu-jp.asm:109 BEQL @EQUIP
    case 0xC13B87: {
        Instruction step(cpu, 0x4C, 0x004027u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:110 CMP #MENU_OPTIONS::CHECK
    case 0xC13B8A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000005u : 0x000005u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:110 CMP #MENU_OPTIONS::CHECK
    // Overlapping static entry reached from 0xC13B8A.
    case 0xC13B8C: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/open_menu-jp.asm:111 BEQL @CHECK
    case 0xC13B8D: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/open_menu-jp.asm:111 BEQL @CHECK
    case 0xC13B8F: {
        Instruction step(cpu, 0x4C, 0x004048u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:112 CMP #MENU_OPTIONS::STATUS
    case 0xC13B92: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:112 CMP #MENU_OPTIONS::STATUS
    // Overlapping static entry reached from 0xC13B92.
    case 0xC13B94: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/open_menu-jp.asm:113 BEQL @STATUS
    case 0xC13B95: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/open_menu-jp.asm:113 BEQL @STATUS
    case 0xC13B97: {
        Instruction step(cpu, 0x4C, 0x00407Au, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:114 JMP @UNKNOWN75
    case 0xC13B9A: {
        Instruction step(cpu, 0x4C, 0x004083u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:116 JSL TALK_TO
    case 0xC13B9D: {
        Instruction step(cpu, 0x22, 0xC13864u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/open_menu-jp.asm:117 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC13BA1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/open_menu-jp.asm:117 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC13BA1.
    case 0xC13BA3: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/overworld/open_menu-jp.asm:117 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC13BA4: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/open_menu-jp.asm:117 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC13BA6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/open_menu-jp.asm:117 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC13BA6.
    case 0xC13BA8: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/overworld/open_menu-jp.asm:117 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC13BA9: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:745 LDA src + 2
    // Macro caller: src/overworld/open_menu-jp.asm:118 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC13BAB: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:746 CMP dest + 2
    // Macro caller: src/overworld/open_menu-jp.asm:118 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC13BAD: {
        Instruction step(cpu, 0xC5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:747 BNE :+
    // Macro caller: src/overworld/open_menu-jp.asm:118 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC13BAF: {
        Instruction step(cpu, 0xD0, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:748 LDA src
    // Macro caller: src/overworld/open_menu-jp.asm:118 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC13BB1: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:749 CMP dest
    // Macro caller: src/overworld/open_menu-jp.asm:118 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC13BB3: {
        Instruction step(cpu, 0xC5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:119 BNE @T012
    case 0xC13BB5: {
        Instruction step(cpu, 0xD0, 0x00000Au, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/open_menu-jp.asm:120 LOADPTR MSG_SYS_HANASU_NG, @VIRTUAL06
    case 0xC13BB7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000A1u : 0x0025A1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/open_menu-jp.asm:120 LOADPTR MSG_SYS_HANASU_NG, @VIRTUAL06
    // Overlapping static entry reached from 0xC13BB7.
    case 0xC13BB9: {
        Instruction step(cpu, 0x25, 0x000085u, 2u, AddressMode::DirectPage);
        step.and_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/open_menu-jp.asm:120 LOADPTR MSG_SYS_HANASU_NG, @VIRTUAL06
    case 0xC13BBA: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/open_menu-jp.asm:120 LOADPTR MSG_SYS_HANASU_NG, @VIRTUAL06
    // Overlapping static entry reached from 0xC13BB9.
    case 0xC13BBB: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu-jp.asm:120 LOADPTR MSG_SYS_HANASU_NG, @VIRTUAL06
    case 0xC13BBC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C9u : 0x0000C9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu-jp.asm:120 LOADPTR MSG_SYS_HANASU_NG, @VIRTUAL06
    // Overlapping static entry reached from 0xC13BBB.
    case 0xC13BBD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x008500u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu-jp.asm:120 LOADPTR MSG_SYS_HANASU_NG, @VIRTUAL06
    // Overlapping static entry reached from 0xC13BBC.
    case 0xC13BBE: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/open_menu-jp.asm:120 LOADPTR MSG_SYS_HANASU_NG, @VIRTUAL06
    case 0xC13BBF: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/open_menu-jp.asm:120 LOADPTR MSG_SYS_HANASU_NG, @VIRTUAL06
    // Overlapping static entry reached from 0xC13BBD.
    case 0xC13BC0: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/open_menu-jp.asm:122 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC13BC1: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/open_menu-jp.asm:122 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC13BC3: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/open_menu-jp.asm:122 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC13BC5: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/open_menu-jp.asm:122 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC13BC7: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:123 JSL DISPLAY_TEXT
    case 0xC13BC9: {
        Instruction step(cpu, 0x22, 0xC18913u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:124 JMP @UNKNOWN75
    case 0xC13BCD: {
        Instruction step(cpu, 0x4C, 0x004083u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:126 JSR UNKNOWN_C1134B
    case 0xC13BD0: {
        Instruction step(cpu, 0x20, 0x001900u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:128 LDA GAME_STATE+game_state::player_controlled_party_count
    case 0xC13BD3: {
        Instruction step(cpu, 0xAD, 0x009B55u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:129 AND #$00FF
    case 0xC13BD6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:129 AND #$00FF
    // Overlapping static entry reached from 0xC13BD6.
    case 0xC13BD8: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:130 CMP #1
    case 0xC13BD9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:130 CMP #1
    // Overlapping static entry reached from 0xC13BD9.
    case 0xC13BDB: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:131 BNE @GOODS_MANY_PARTY_MEMBERS
    case 0xC13BDC: {
        Instruction step(cpu, 0xD0, 0x000049u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:132 LDY #.LOWORD(GAME_STATE) + game_state::party_members
    case 0xC13BDE: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000020u : 0x009B20u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:132 LDY #.LOWORD(GAME_STATE) + game_state::party_members
    // Overlapping static entry reached from 0xC13BDE.
    case 0xC13BE0: {
        Instruction step(cpu, 0x9B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_y();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:133 STY @LOCAL05
    case 0xC13BE1: {
        Instruction step(cpu, 0x84, 0x00001Du, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:134 LDX #1
    case 0xC13BE3: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:134 LDX #1
    // Overlapping static entry reached from 0xC13BE3.
    case 0xC13BE5: {
        Instruction step(cpu, 0x00, 0x0000B9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:135 LDA __BSS_START__,Y
    case 0xC13BE6: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:136 AND #$00FF
    case 0xC13BE9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:136 AND #$00FF
    // Overlapping static entry reached from 0xC13BE9.
    case 0xC13BEB: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:137 JSL GET_CHARACTER_ITEM
    case 0xC13BEC: {
        Instruction step(cpu, 0x22, 0xC3E537u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:138 CMP #0
    case 0xC13BF0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:138 CMP #0
    // Overlapping static entry reached from 0xC13BF0.
    case 0xC13BF2: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/open_menu-jp.asm:139 BEQL @MAIN_PAUSE_MENU
    case 0xC13BF3: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/open_menu-jp.asm:139 BEQL @MAIN_PAUSE_MENU
    case 0xC13BF5: {
        Instruction step(cpu, 0x4C, 0x003B5Bu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:140 LDX #2
    case 0xC13BF8: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:140 LDX #2
    // Overlapping static entry reached from 0xC13BF8.
    case 0xC13BFA: {
        Instruction step(cpu, 0x00, 0x0000A4u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:141 LDY @LOCAL05
    case 0xC13BFB: {
        Instruction step(cpu, 0xA4, 0x00001Du, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:142 LDA __BSS_START__,Y
    case 0xC13BFD: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:143 AND #$00FF
    case 0xC13C00: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:143 AND #$00FF
    // Overlapping static entry reached from 0xC13C00.
    case 0xC13C02: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:144 JSR INVENTORY_GET_ITEM_NAME
    case 0xC13C03: {
        Instruction step(cpu, 0x20, 0x009930u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:145 LDY @LOCAL05
    case 0xC13C06: {
        Instruction step(cpu, 0xA4, 0x00001Du, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:146 SEP #PROC_FLAGS::ACCUM8
    case 0xC13C08: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:147 LDA __BSS_START__,Y
    case 0xC13C0A: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:858 STA dest
    // Macro caller: src/overworld/open_menu-jp.asm:148 STORE_INT832 @VIRTUAL06
    case 0xC13C0D: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/overworld/open_menu-jp.asm:148 STORE_INT832 @VIRTUAL06
    case 0xC13C0F: {
        Instruction step(cpu, 0x64, 0x000007u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/overworld/open_menu-jp.asm:148 STORE_INT832 @VIRTUAL06
    case 0xC13C11: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/overworld/open_menu-jp.asm:148 STORE_INT832 @VIRTUAL06
    case 0xC13C13: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:149 REP #PROC_FLAGS::ACCUM8
    case 0xC13C15: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/open_menu-jp.asm:150 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC13C17: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/open_menu-jp.asm:150 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC13C19: {
        Instruction step(cpu, 0x85, 0x000019u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/open_menu-jp.asm:150 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC13C1B: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/open_menu-jp.asm:150 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC13C1D: {
        Instruction step(cpu, 0x85, 0x00001Bu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:151 LDA #0
    case 0xC13C1F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:151 LDA #0
    // Overlapping static entry reached from 0xC13C1F.
    case 0xC13C21: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:152 JSR UNKNOWN_C43573
    case 0xC13C22: {
        Instruction step(cpu, 0x20, 0x000C40u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:153 BRA @UNKNOWN12
    case 0xC13C25: {
        Instruction step(cpu, 0x80, 0x00002Fu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:155 LDA #0
    case 0xC13C27: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:155 LDA #0
    // Overlapping static entry reached from 0xC13C27.
    case 0xC13C29: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:156 JSR UNKNOWN_C193E7
    case 0xC13C2A: {
        Instruction step(cpu, 0x20, 0x00949Cu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/open_menu-jp.asm:157 LOADPTR UNKNOWN_C1339E, @LOCAL00
    case 0xC13C2D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000073u : 0x003A73u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/open_menu-jp.asm:157 LOADPTR UNKNOWN_C1339E, @LOCAL00
    // Overlapping static entry reached from 0xC13C2D.
    case 0xC13C2F: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/open_menu-jp.asm:157 LOADPTR UNKNOWN_C1339E, @LOCAL00
    case 0xC13C30: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu-jp.asm:157 LOADPTR UNKNOWN_C1339E, @LOCAL00
    case 0xC13C32: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C1u : 0x0000C1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu-jp.asm:157 LOADPTR UNKNOWN_C1339E, @LOCAL00
    // Overlapping static entry reached from 0xC13C32.
    case 0xC13C34: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/open_menu-jp.asm:157 LOADPTR UNKNOWN_C1339E, @LOCAL00
    case 0xC13C35: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/open_menu-jp.asm:158 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC13C37: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/open_menu-jp.asm:158 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC13C37.
    case 0xC13C39: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/overworld/open_menu-jp.asm:158 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC13C3A: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/open_menu-jp.asm:158 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC13C3C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/open_menu-jp.asm:158 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC13C3C.
    case 0xC13C3E: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/overworld/open_menu-jp.asm:158 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC13C3F: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:159 LDX #1
    case 0xC13C41: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:159 LDX #1
    // Overlapping static entry reached from 0xC13C41.
    case 0xC13C43: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:160 LDA #0
    case 0xC13C44: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:160 LDA #0
    // Overlapping static entry reached from 0xC13C44.
    case 0xC13C46: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:161 JSR CHAR_SELECT_PROMPT
    case 0xC13C47: {
        Instruction step(cpu, 0x20, 0x002EE7u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/overworld/open_menu-jp.asm:162 STORE_INT1632 @VIRTUAL06
    case 0xC13C4A: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/overworld/open_menu-jp.asm:162 STORE_INT1632 @VIRTUAL06
    case 0xC13C4C: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/open_menu-jp.asm:163 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC13C4E: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/open_menu-jp.asm:163 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC13C50: {
        Instruction step(cpu, 0x85, 0x000019u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/open_menu-jp.asm:163 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC13C52: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/open_menu-jp.asm:163 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC13C54: {
        Instruction step(cpu, 0x85, 0x00001Bu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/open_menu-jp.asm:165 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC13C56: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/open_menu-jp.asm:165 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC13C56.
    case 0xC13C58: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/overworld/open_menu-jp.asm:165 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC13C59: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/open_menu-jp.asm:165 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC13C5B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/open_menu-jp.asm:165 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC13C5B.
    case 0xC13C5D: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/overworld/open_menu-jp.asm:165 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC13C5E: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:745 LDA src + 2
    // Macro caller: src/overworld/open_menu-jp.asm:166 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC13C60: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:746 CMP dest + 2
    // Macro caller: src/overworld/open_menu-jp.asm:166 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC13C62: {
        Instruction step(cpu, 0xC5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:747 BNE :+
    // Macro caller: src/overworld/open_menu-jp.asm:166 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC13C64: {
        Instruction step(cpu, 0xD0, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:748 LDA src
    // Macro caller: src/overworld/open_menu-jp.asm:166 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC13C66: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:749 CMP dest
    // Macro caller: src/overworld/open_menu-jp.asm:166 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC13C68: {
        Instruction step(cpu, 0xC5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:168 BNE @UNKNOWN14
    case 0xC13C6A: {
        Instruction step(cpu, 0xD0, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:169 LDA #WINDOW::INVENTORY
    case 0xC13C6C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:169 LDA #WINDOW::INVENTORY
    // Overlapping static entry reached from 0xC13C6C.
    case 0xC13C6E: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:170 JSR CLOSE_WINDOW
    case 0xC13C6F: {
        Instruction step(cpu, 0x20, 0x000141u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:171 JSR UNKNOWN_C19437
    case 0xC13C72: {
        Instruction step(cpu, 0x20, 0x0094E5u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:172 JMP @MAIN_PAUSE_MENU
    case 0xC13C75: {
        Instruction step(cpu, 0x4C, 0x003B5Bu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:174 LDX #1
    case 0xC13C78: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:174 LDX #1
    // Overlapping static entry reached from 0xC13C78.
    case 0xC13C7A: {
        Instruction step(cpu, 0x00, 0x0000A5u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:175 LDA @VIRTUAL06
    case 0xC13C7B: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:176 JSL GET_CHARACTER_ITEM
    case 0xC13C7D: {
        Instruction step(cpu, 0x22, 0xC3E537u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:177 CMP #0
    case 0xC13C81: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:177 CMP #0
    // Overlapping static entry reached from 0xC13C81.
    case 0xC13C83: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/open_menu-jp.asm:178 BEQL @UNKNOWN9
    case 0xC13C84: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/open_menu-jp.asm:178 BEQL @UNKNOWN9
    case 0xC13C86: {
        Instruction step(cpu, 0x4C, 0x003BD3u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:180 LDA #1
    case 0xC13C89: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:180 LDA #1
    // Overlapping static entry reached from 0xC13C89.
    case 0xC13C8B: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:181 JSR UNKNOWN_C193E7
    case 0xC13C8C: {
        Instruction step(cpu, 0x20, 0x00949Cu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:182 LDA #2
    case 0xC13C8F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:182 LDA #2
    // Overlapping static entry reached from 0xC13C8F.
    case 0xC13C91: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:183 JSR SET_WINDOW_FOCUS
    case 0xC13C92: {
        Instruction step(cpu, 0x20, 0x00013Bu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:184 LDA #1
    case 0xC13C95: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:184 LDA #1
    // Overlapping static entry reached from 0xC13C95.
    case 0xC13C97: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:185 JSR SELECTION_MENU
    case 0xC13C98: {
        Instruction step(cpu, 0x20, 0x002109u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:186 STA @VIRTUAL02
    case 0xC13C9B: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:187 JSR UNKNOWN_C19437
    case 0xC13C9D: {
        Instruction step(cpu, 0x20, 0x0094E5u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:188 LDA @VIRTUAL02
    case 0xC13CA0: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:189 BNE @GOODS_ITEM_SELECTED
    case 0xC13CA2: {
        Instruction step(cpu, 0xD0, 0x000033u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:190 LDA GAME_STATE+game_state::player_controlled_party_count
    case 0xC13CA4: {
        Instruction step(cpu, 0xAD, 0x009B55u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:191 AND #$00FF
    case 0xC13CA7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:191 AND #$00FF
    // Overlapping static entry reached from 0xC13CA7.
    case 0xC13CA9: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:192 CMP #1
    case 0xC13CAA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:192 CMP #1
    // Overlapping static entry reached from 0xC13CAA.
    case 0xC13CAC: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/overworld/open_menu-jp.asm:193 BNEL @UNKNOWN9
    case 0xC13CAD: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/overworld/open_menu-jp.asm:193 BNEL @UNKNOWN9
    case 0xC13CAF: {
        Instruction step(cpu, 0x4C, 0x003BD3u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:194 LDX #1
    case 0xC13CB2: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:194 LDX #1
    // Overlapping static entry reached from 0xC13CB2.
    case 0xC13CB4: {
        Instruction step(cpu, 0x00, 0x0000ADu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:195 LDA GAME_STATE + game_state::party_members
    case 0xC13CB5: {
        Instruction step(cpu, 0xAD, 0x009B20u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:196 AND #$00FF
    case 0xC13CB8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:196 AND #$00FF
    // Overlapping static entry reached from 0xC13CB8.
    case 0xC13CBA: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:197 JSL GET_CHARACTER_ITEM
    case 0xC13CBB: {
        Instruction step(cpu, 0x22, 0xC3E537u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:198 CMP #0
    case 0xC13CBF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:198 CMP #0
    // Overlapping static entry reached from 0xC13CBF.
    case 0xC13CC1: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:199 BEQ @UNKNOWN17
    case 0xC13CC2: {
        Instruction step(cpu, 0xF0, 0x00000Au, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:200 LDA #SFX::MENU_OPEN_CLOSE
    case 0xC13CC4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00001Bu : 0x00001Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:200 LDA #SFX::MENU_OPEN_CLOSE
    // Overlapping static entry reached from 0xC13CC4.
    case 0xC13CC6: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:201 JSL PLAY_SOUND
    case 0xC13CC7: {
        Instruction step(cpu, 0x22, 0xC0ABBFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:202 JSR UNKNOWN_C3E6F8
    case 0xC13CCB: {
        Instruction step(cpu, 0x20, 0x000BDBu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:204 LDA #WINDOW::INVENTORY
    case 0xC13CCE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:204 LDA #WINDOW::INVENTORY
    // Overlapping static entry reached from 0xC13CCE.
    case 0xC13CD0: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:205 JSR CLOSE_WINDOW
    case 0xC13CD1: {
        Instruction step(cpu, 0x20, 0x000141u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:206 JMP @MAIN_PAUSE_MENU
    case 0xC13CD4: {
        Instruction step(cpu, 0x4C, 0x003B5Bu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:735 LDA arg
    // Macro caller: src/overworld/open_menu-jp.asm:208 CREATE_WINDOW_NEAR #WINDOW::INVENTORY_MENU
    case 0xC13CD7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:735 LDA arg
    // Macro caller: src/overworld/open_menu-jp.asm:208 CREATE_WINDOW_NEAR #WINDOW::INVENTORY_MENU
    // Overlapping static entry reached from 0xC13CD7.
    case 0xC13CD9: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/overworld/open_menu-jp.asm:208 CREATE_WINDOW_NEAR #WINDOW::INVENTORY_MENU
    case 0xC13CDA: {
        Instruction step(cpu, 0x20, 0x0006E4u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/open_menu-jp.asm:209 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC13CDD: {
        Instruction step(cpu, 0xA5, 0x000019u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/open_menu-jp.asm:209 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC13CDF: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/open_menu-jp.asm:209 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC13CE1: {
        Instruction step(cpu, 0xA5, 0x00001Bu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/open_menu-jp.asm:209 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC13CE3: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:210 LDA @VIRTUAL06
    case 0xC13CE5: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:211 DEC
    case 0xC13CE7: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:212 LDY #.SIZEOF(char_struct)
    case 0xC13CE8: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Eu : 0x00005Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:212 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC13CE8.
    case 0xC13CEA: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:213 JSL MULT168
    case 0xC13CEB: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:214 TAX
    case 0xC13CEF: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:215 LDA PARTY_CHARACTERS+char_struct::afflictions,X
    case 0xC13CF0: {
        Instruction step(cpu, 0xBD, 0x009C8Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:216 AND #$00FF
    case 0xC13CF3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:216 AND #$00FF
    // Overlapping static entry reached from 0xC13CF3.
    case 0xC13CF5: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:217 TAX
    case 0xC13CF6: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:218 BEQ @GOODS_ITEM_SELECTED_ALIVE
    case 0xC13CF7: {
        Instruction step(cpu, 0xF0, 0x000015u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:219 STX @VIRTUAL04
    case 0xC13CF9: {
        Instruction step(cpu, 0x86, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:220 LDA #4
    case 0xC13CFB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:220 LDA #4
    // Overlapping static entry reached from 0xC13CFB.
    case 0xC13CFD: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:221 CLC
    case 0xC13CFE: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:222 SBC @VIRTUAL04
    case 0xC13CFF: {
        Instruction step(cpu, 0xE5, 0x000004u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:807 BVC :+
    // Macro caller: src/overworld/open_menu-jp.asm:223 BRANCHLTEQS @GOODS_ITEM_SELECTED_ALIVE
    case 0xC13D01: {
        Instruction step(cpu, 0x50, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_clear();
        return step.finish();
    }
    // include/macros.asm:808 BPL dest
    // Macro caller: src/overworld/open_menu-jp.asm:223 BRANCHLTEQS @GOODS_ITEM_SELECTED_ALIVE
    case 0xC13D03: {
        Instruction step(cpu, 0x10, 0x000009u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:809 BRA :++
    // Macro caller: src/overworld/open_menu-jp.asm:223 BRANCHLTEQS @GOODS_ITEM_SELECTED_ALIVE
    case 0xC13D05: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:811 BMI dest
    // Macro caller: src/overworld/open_menu-jp.asm:223 BRANCHLTEQS @GOODS_ITEM_SELECTED_ALIVE
    case 0xC13D07: {
        Instruction step(cpu, 0x30, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:224 LDX #1
    case 0xC13D09: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:224 LDX #1
    // Overlapping static entry reached from 0xC13D09.
    case 0xC13D0B: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:225 BRA @UNKNOWN22
    case 0xC13D0C: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:227 LDX #0
    case 0xC13D0E: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:227 LDX #0
    // Overlapping static entry reached from 0xC13D0E.
    case 0xC13D10: {
        Instruction step(cpu, 0x00, 0x00009Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:229 TXY
    case 0xC13D11: {
        Instruction step(cpu, 0x9B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_y();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:230 STY @LOCAL03
    case 0xC13D12: {
        Instruction step(cpu, 0x84, 0x000017u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:231 TYX
    case 0xC13D14: {
        Instruction step(cpu, 0xBB, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_x();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:232 LDA #0
    case 0xC13D15: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:232 LDA #0
    // Overlapping static entry reached from 0xC13D15.
    case 0xC13D17: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:233 JSR UNKNOWN_C438A5
    case 0xC13D18: {
        Instruction step(cpu, 0x20, 0x001169u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:234 BRA @UNKNOWN24
    case 0xC13D1B: {
        Instruction step(cpu, 0x80, 0x000033u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:236 TYX
    case 0xC13D1D: {
        Instruction step(cpu, 0xBB, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_x();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:237 INX
    case 0xC13D1E: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:238 STX @LOCAL05
    case 0xC13D1F: {
        Instruction step(cpu, 0x86, 0x00001Du, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/open_menu-jp.asm:239 LOADPTR ITEM_USE_MENU_STRINGS, @VIRTUAL0A
    case 0xC13D21: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D6u : 0x0032D6u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/open_menu-jp.asm:239 LOADPTR ITEM_USE_MENU_STRINGS, @VIRTUAL0A
    // Overlapping static entry reached from 0xC13D21.
    case 0xC13D23: {
        Instruction step(cpu, 0x32, 0x000085u, 2u, AddressMode::DirectPageIndirect);
        step.and_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/open_menu-jp.asm:239 LOADPTR ITEM_USE_MENU_STRINGS, @VIRTUAL0A
    case 0xC13D24: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/open_menu-jp.asm:239 LOADPTR ITEM_USE_MENU_STRINGS, @VIRTUAL0A
    // Overlapping static entry reached from 0xC13D23.
    case 0xC13D25: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu-jp.asm:239 LOADPTR ITEM_USE_MENU_STRINGS, @VIRTUAL0A
    case 0xC13D26: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C4u : 0x0000C4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu-jp.asm:239 LOADPTR ITEM_USE_MENU_STRINGS, @VIRTUAL0A
    // Overlapping static entry reached from 0xC13D26.
    case 0xC13D28: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/open_menu-jp.asm:239 LOADPTR ITEM_USE_MENU_STRINGS, @VIRTUAL0A
    case 0xC13D29: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:240 TYA
    case 0xC13D2B: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:529 STA scratch
    // Macro caller: src/overworld/open_menu-jp.asm:241 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC13D2C: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:530 ASL
    // Macro caller: src/overworld/open_menu-jp.asm:241 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC13D2E: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:531 ASL
    // Macro caller: src/overworld/open_menu-jp.asm:241 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC13D2F: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:532 ADC scratch
    // Macro caller: src/overworld/open_menu-jp.asm:241 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC13D30: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:242 CLC
    case 0xC13D32: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:243 ADC @VIRTUAL0A
    case 0xC13D33: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:244 STA @VIRTUAL0A
    case 0xC13D35: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:245 STA @LOCAL00
    case 0xC13D37: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:246 LDA @VIRTUAL0A+2
    case 0xC13D39: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:247 STA @LOCAL00+2
    case 0xC13D3B: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/open_menu-jp.asm:248 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC13D3D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/open_menu-jp.asm:248 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC13D3D.
    case 0xC13D3F: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/overworld/open_menu-jp.asm:248 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC13D40: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/open_menu-jp.asm:248 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC13D42: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/open_menu-jp.asm:248 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC13D42.
    case 0xC13D44: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/overworld/open_menu-jp.asm:248 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC13D45: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:249 TXA
    case 0xC13D47: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:250 JSR UNKNOWN_C115F4
    case 0xC13D48: {
        Instruction step(cpu, 0x20, 0x001BB0u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:251 LDX @LOCAL05
    case 0xC13D4B: {
        Instruction step(cpu, 0xA6, 0x00001Du, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:252 TXY
    case 0xC13D4D: {
        Instruction step(cpu, 0x9B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_y();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:253 STY @LOCAL03
    case 0xC13D4E: {
        Instruction step(cpu, 0x84, 0x000017u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:255 LDY @LOCAL03
    case 0xC13D50: {
        Instruction step(cpu, 0xA4, 0x000017u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:256 CPY #4
    case 0xC13D52: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:256 CPY #4
    // Overlapping static entry reached from 0xC13D52.
    case 0xC13D54: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:257 BCC @UNKNOWN23
    case 0xC13D55: {
        Instruction step(cpu, 0x90, 0x0000C6u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:258 LDY #0
    case 0xC13D57: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:258 LDY #0
    // Overlapping static entry reached from 0xC13D57.
    case 0xC13D59: {
        Instruction step(cpu, 0x00, 0x0000BBu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:259 TYX
    case 0xC13D5A: {
        Instruction step(cpu, 0xBB, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_x();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:260 LDA #1
    case 0xC13D5B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:260 LDA #1
    // Overlapping static entry reached from 0xC13D5B.
    case 0xC13D5D: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:261 JSR UNKNOWN_C451FA
    case 0xC13D5E: {
        Instruction step(cpu, 0x20, 0x001DEAu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:261 JSR UNKNOWN_C451FA
    // Overlapping static entry reached from 0xC13DD8.
    case 0xC13D5F: {
        Instruction step(cpu, 0xEA, 0x000000u, 1u, AddressMode::Implied);
        step.no_operation();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:261 JSR UNKNOWN_C451FA
    // Overlapping static entry reached from 0xC13D5F.
    case 0xC13D60: {
        Instruction step(cpu, 0x1D, 0x0003A9u, 3u, AddressMode::AbsoluteIndexedX);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:263 LDA #3
    case 0xC13D61: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:263 LDA #3
    // Overlapping static entry reached from 0xC13D61.
    case 0xC13D63: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:264 JSR SET_WINDOW_FOCUS
    case 0xC13D64: {
        Instruction step(cpu, 0x20, 0x00013Bu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:265 JSR PRINT_MENU_ITEMS
    case 0xC13D67: {
        Instruction step(cpu, 0x20, 0x001BF0u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:266 LDA #1
    case 0xC13D6A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:266 LDA #1
    // Overlapping static entry reached from 0xC13D6A.
    case 0xC13D6C: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:267 JSR SELECTION_MENU
    case 0xC13D6D: {
        Instruction step(cpu, 0x20, 0x002109u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/overworld/open_menu-jp.asm:268 STORE_INT1632 @VIRTUAL0A
    case 0xC13D70: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/overworld/open_menu-jp.asm:268 STORE_INT1632 @VIRTUAL0A
    case 0xC13D72: {
        Instruction step(cpu, 0x64, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:269 LDA @VIRTUAL0A
    case 0xC13D74: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:270 BEQ @UNKNOWN30
    case 0xC13D76: {
        Instruction step(cpu, 0xF0, 0x00001Du, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:271 CMP #1
    case 0xC13D78: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:271 CMP #1
    // Overlapping static entry reached from 0xC13D78.
    case 0xC13D7A: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:272 BEQ @GOODS_ITEM_USE
    case 0xC13D7B: {
        Instruction step(cpu, 0xF0, 0x000027u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:273 CMP #4
    case 0xC13D7D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:273 CMP #4
    // Overlapping static entry reached from 0xC13D7D.
    case 0xC13D7F: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:274 BEQ @GOODS_ITEM_HELP
    case 0xC13D80: {
        Instruction step(cpu, 0xF0, 0x00003Cu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:275 CMP #2
    case 0xC13D82: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:275 CMP #2
    // Overlapping static entry reached from 0xC13D82.
    case 0xC13D84: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/open_menu-jp.asm:276 BEQL @UNKNOWN34
    case 0xC13D85: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/open_menu-jp.asm:276 BEQL @UNKNOWN34
    case 0xC13D87: {
        Instruction step(cpu, 0x4C, 0x003E23u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:277 CMP #3
    case 0xC13D8A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:277 CMP #3
    // Overlapping static entry reached from 0xC13D8A.
    case 0xC13D8C: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/open_menu-jp.asm:278 BEQL @UNKNOWN48
    case 0xC13D8D: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/open_menu-jp.asm:278 BEQL @UNKNOWN48
    case 0xC13D8F: {
        Instruction step(cpu, 0x4C, 0x003F94u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:279 JMP @UNKNOWN75
    case 0xC13D92: {
        Instruction step(cpu, 0x4C, 0x004083u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:281 JSR CLOSE_FOCUS_WINDOW
    case 0xC13D95: {
        Instruction step(cpu, 0x20, 0x0002A6u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:282 LDA #2
    case 0xC13D98: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:282 LDA #2
    // Overlapping static entry reached from 0xC13D98.
    case 0xC13D9A: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:283 JSR SET_WINDOW_FOCUS
    case 0xC13D9B: {
        Instruction step(cpu, 0x20, 0x00013Bu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:284 JSR PRINT_MENU_ITEMS
    case 0xC13D9E: {
        Instruction step(cpu, 0x20, 0x001BF0u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:285 JMP @UNKNOWN15
    case 0xC13DA1: {
        Instruction step(cpu, 0x4C, 0x003C89u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:287 LDY #0
    case 0xC13DA4: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:287 LDY #0
    // Overlapping static entry reached from 0xC13DA4.
    case 0xC13DA6: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:288 LDX @VIRTUAL02
    case 0xC13DA7: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/open_menu-jp.asm:289 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC13DA9: {
        Instruction step(cpu, 0xA5, 0x000019u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/open_menu-jp.asm:289 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC13DAB: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/open_menu-jp.asm:289 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC13DAD: {
        Instruction step(cpu, 0xA5, 0x00001Bu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/open_menu-jp.asm:289 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC13DAF: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:290 LDA @VIRTUAL06
    case 0xC13DB1: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:291 JSR OVERWORLD_USE_ITEM
    case 0xC13DB3: {
        Instruction step(cpu, 0x20, 0x00AE35u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:292 CMP #0
    case 0xC13DB6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:292 CMP #0
    // Overlapping static entry reached from 0xC13DB6.
    case 0xC13DB8: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:293 BEQ @UNKNOWN25
    case 0xC13DB9: {
        Instruction step(cpu, 0xF0, 0x0000A6u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:294 JMP @UNKNOWN75
    case 0xC13DBB: {
        Instruction step(cpu, 0x4C, 0x004083u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:735 LDA arg
    // Macro caller: src/overworld/open_menu-jp.asm:296 CREATE_WINDOW_NEAR #WINDOW::TEXT_STANDARD
    case 0xC13DBE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:735 LDA arg
    // Macro caller: src/overworld/open_menu-jp.asm:296 CREATE_WINDOW_NEAR #WINDOW::TEXT_STANDARD
    // Overlapping static entry reached from 0xC13DBE.
    case 0xC13DC0: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/overworld/open_menu-jp.asm:296 CREATE_WINDOW_NEAR #WINDOW::TEXT_STANDARD
    case 0xC13DC1: {
        Instruction step(cpu, 0x20, 0x0006E4u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:297 LDX @VIRTUAL02
    case 0xC13DC4: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/open_menu-jp.asm:298 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC13DC6: {
        Instruction step(cpu, 0xA5, 0x000019u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/open_menu-jp.asm:298 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC13DC8: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/open_menu-jp.asm:298 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC13DCA: {
        Instruction step(cpu, 0xA5, 0x00001Bu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/open_menu-jp.asm:298 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC13DCC: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:299 LDA @VIRTUAL06
    case 0xC13DCE: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:300 JSL GET_CHARACTER_ITEM
    case 0xC13DD0: {
        Instruction step(cpu, 0x22, 0xC3E537u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:301 STA @LOCAL07
    case 0xC13DD4: {
        Instruction step(cpu, 0x85, 0x000021u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/open_menu-jp.asm:302 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC13DD6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x007000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/open_menu-jp.asm:302 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC13DD6.
    case 0xC13DD8: {
        Instruction step(cpu, 0x70, 0x000085u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_set();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/open_menu-jp.asm:302 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC13DD9: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/open_menu-jp.asm:302 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC13DD8.
    case 0xC13DDA: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu-jp.asm:302 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC13DDB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D5u : 0x0000D5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu-jp.asm:302 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC13DDA.
    case 0xC13DDC: {
        Instruction step(cpu, 0xD5, 0x000000u, 2u, AddressMode::DirectPageIndexedX);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu-jp.asm:302 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC13DDB.
    case 0xC13DDD: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/open_menu-jp.asm:302 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC13DDE: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:303 LDA @LOCAL07
    case 0xC13DE0: {
        Instruction step(cpu, 0xA5, 0x000021u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:623 STA scratch
    // Macro caller: src/overworld/open_menu-jp.asm:304 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC13DE2: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:624 ASL
    // Macro caller: src/overworld/open_menu-jp.asm:304 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC13DE4: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:625 ADC scratch
    // Macro caller: src/overworld/open_menu-jp.asm:304 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC13DE5: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:626 ASL
    // Macro caller: src/overworld/open_menu-jp.asm:304 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC13DE7: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:627 ASL
    // Macro caller: src/overworld/open_menu-jp.asm:304 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC13DE8: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:628 ASL
    // Macro caller: src/overworld/open_menu-jp.asm:304 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC13DE9: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:305 CLC
    case 0xC13DEA: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:306 ADC #item::help_text
    case 0xC13DEB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000014u : 0x000014u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:306 ADC #item::help_text
    // Overlapping static entry reached from 0xC13DEB.
    case 0xC13DED: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:307 CLC
    case 0xC13DEE: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:308 ADC @VIRTUAL06
    case 0xC13DEF: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:309 STA @VIRTUAL06
    case 0xC13DF1: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/open_menu-jp.asm:310 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC13DF3: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/open_menu-jp.asm:310 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    // Overlapping static entry reached from 0xC13DF3.
    case 0xC13DF5: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/overworld/open_menu-jp.asm:310 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC13DF6: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1136 TAY
    // Macro caller: src/overworld/open_menu-jp.asm:310 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC13DF8: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/overworld/open_menu-jp.asm:310 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC13DF9: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1138 STA dest
    // Macro caller: src/overworld/open_menu-jp.asm:310 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC13DFB: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/overworld/open_menu-jp.asm:310 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC13DFD: {
        Instruction step(cpu, 0x84, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/open_menu-jp.asm:311 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC13DFF: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/open_menu-jp.asm:311 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC13E01: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/open_menu-jp.asm:311 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC13E03: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/open_menu-jp.asm:311 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC13E05: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:312 JSL DISPLAY_TEXT
    case 0xC13E07: {
        Instruction step(cpu, 0x22, 0xC18913u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:313 LDA #WINDOW::TEXT_STANDARD
    case 0xC13E0B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:313 LDA #WINDOW::TEXT_STANDARD
    // Overlapping static entry reached from 0xC13E0B.
    case 0xC13E0D: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:314 JSR CLOSE_WINDOW
    case 0xC13E0E: {
        Instruction step(cpu, 0x20, 0x000141u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:315 LDA #WINDOW::INVENTORY_MENU
    case 0xC13E11: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:315 LDA #WINDOW::INVENTORY_MENU
    // Overlapping static entry reached from 0xC13E11.
    case 0xC13E13: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:316 JSR CLOSE_WINDOW
    case 0xC13E14: {
        Instruction step(cpu, 0x20, 0x000141u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:317 LDA #WINDOW::INVENTORY
    case 0xC13E17: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:317 LDA #WINDOW::INVENTORY
    // Overlapping static entry reached from 0xC13E17.
    case 0xC13E19: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:318 JSR SET_WINDOW_FOCUS
    case 0xC13E1A: {
        Instruction step(cpu, 0x20, 0x00013Bu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:319 JSR PRINT_MENU_ITEMS
    case 0xC13E1D: {
        Instruction step(cpu, 0x20, 0x001BF0u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:320 JMP @UNKNOWN15
    case 0xC13E20: {
        Instruction step(cpu, 0x4C, 0x003C89u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:322 LDA #3
    case 0xC13E23: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:322 LDA #3
    // Overlapping static entry reached from 0xC13E23.
    case 0xC13E25: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:323 JSR UNKNOWN_C193E7
    case 0xC13E26: {
        Instruction step(cpu, 0x20, 0x00949Cu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/open_menu-jp.asm:324 LOADPTR UNKNOWN_C133A7, @LOCAL00
    case 0xC13E29: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Cu : 0x003A7Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/open_menu-jp.asm:324 LOADPTR UNKNOWN_C133A7, @LOCAL00
    // Overlapping static entry reached from 0xC13E29.
    case 0xC13E2B: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/open_menu-jp.asm:324 LOADPTR UNKNOWN_C133A7, @LOCAL00
    case 0xC13E2C: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu-jp.asm:324 LOADPTR UNKNOWN_C133A7, @LOCAL00
    case 0xC13E2E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C1u : 0x0000C1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu-jp.asm:324 LOADPTR UNKNOWN_C133A7, @LOCAL00
    // Overlapping static entry reached from 0xC13E2E.
    case 0xC13E30: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/open_menu-jp.asm:324 LOADPTR UNKNOWN_C133A7, @LOCAL00
    case 0xC13E31: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/open_menu-jp.asm:325 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC13E33: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/open_menu-jp.asm:325 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC13E33.
    case 0xC13E35: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/overworld/open_menu-jp.asm:325 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC13E36: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/open_menu-jp.asm:325 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC13E38: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/open_menu-jp.asm:325 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC13E38.
    case 0xC13E3A: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/overworld/open_menu-jp.asm:325 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC13E3B: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:326 LDX #1
    case 0xC13E3D: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:326 LDX #1
    // Overlapping static entry reached from 0xC13E3D.
    case 0xC13E3F: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:327 LDA #2
    case 0xC13E40: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:327 LDA #2
    // Overlapping static entry reached from 0xC13E40.
    case 0xC13E42: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:328 JSR CHAR_SELECT_PROMPT
    case 0xC13E43: {
        Instruction step(cpu, 0x20, 0x002EE7u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:329 STA @VIRTUAL04
    case 0xC13E46: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:330 STA @LOCAL05
    case 0xC13E48: {
        Instruction step(cpu, 0x85, 0x00001Du, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:331 JSR UNKNOWN_C19437
    case 0xC13E4A: {
        Instruction step(cpu, 0x20, 0x0094E5u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:332 LDA #WINDOW::UNKNOWN2C
    case 0xC13E4D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00002Cu : 0x00002Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:332 LDA #WINDOW::UNKNOWN2C
    // Overlapping static entry reached from 0xC13E4D.
    case 0xC13E4F: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:333 JSR CLOSE_WINDOW
    case 0xC13E50: {
        Instruction step(cpu, 0x20, 0x000141u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:334 LDA @VIRTUAL04
    case 0xC13E53: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/open_menu-jp.asm:335 BEQL @UNKNOWN25
    case 0xC13E55: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/open_menu-jp.asm:335 BEQL @UNKNOWN25
    case 0xC13E57: {
        Instruction step(cpu, 0x4C, 0x003D61u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/open_menu-jp.asm:336 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC13E5A: {
        Instruction step(cpu, 0xA5, 0x000019u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/open_menu-jp.asm:336 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC13E5C: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/open_menu-jp.asm:336 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC13E5E: {
        Instruction step(cpu, 0xA5, 0x00001Bu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/open_menu-jp.asm:336 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC13E60: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:865 LDA src
    // Macro caller: src/overworld/open_menu-jp.asm:337 MOVE_INT1632 @VIRTUAL04, @VIRTUAL0A
    case 0xC13E62: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/overworld/open_menu-jp.asm:337 MOVE_INT1632 @VIRTUAL04, @VIRTUAL0A
    case 0xC13E64: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/overworld/open_menu-jp.asm:337 MOVE_INT1632 @VIRTUAL04, @VIRTUAL0A
    case 0xC13E66: {
        Instruction step(cpu, 0x64, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:745 LDA src + 2
    // Macro caller: src/overworld/open_menu-jp.asm:338 CMP32 @VIRTUAL0A, @VIRTUAL06
    case 0xC13E68: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:746 CMP dest + 2
    // Macro caller: src/overworld/open_menu-jp.asm:338 CMP32 @VIRTUAL0A, @VIRTUAL06
    case 0xC13E6A: {
        Instruction step(cpu, 0xC5, 0x000008u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:747 BNE :+
    // Macro caller: src/overworld/open_menu-jp.asm:338 CMP32 @VIRTUAL0A, @VIRTUAL06
    case 0xC13E6C: {
        Instruction step(cpu, 0xD0, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:748 LDA src
    // Macro caller: src/overworld/open_menu-jp.asm:338 CMP32 @VIRTUAL0A, @VIRTUAL06
    case 0xC13E6E: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:749 CMP dest
    // Macro caller: src/overworld/open_menu-jp.asm:338 CMP32 @VIRTUAL0A, @VIRTUAL06
    case 0xC13E70: {
        Instruction step(cpu, 0xC5, 0x000006u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:339 BEQ @UNKNOWN37
    case 0xC13E72: {
        Instruction step(cpu, 0xF0, 0x00005Au, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:340 LDX @VIRTUAL02
    case 0xC13E74: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:341 LDA @VIRTUAL06
    case 0xC13E76: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:342 JSL GET_CHARACTER_ITEM
    case 0xC13E78: {
        Instruction step(cpu, 0x22, 0xC3E537u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:623 STA scratch
    // Macro caller: src/overworld/open_menu-jp.asm:343 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC13E7C: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:624 ASL
    // Macro caller: src/overworld/open_menu-jp.asm:343 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC13E7E: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:625 ADC scratch
    // Macro caller: src/overworld/open_menu-jp.asm:343 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC13E7F: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:626 ASL
    // Macro caller: src/overworld/open_menu-jp.asm:343 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC13E81: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:627 ASL
    // Macro caller: src/overworld/open_menu-jp.asm:343 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC13E82: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:628 ASL
    // Macro caller: src/overworld/open_menu-jp.asm:343 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC13E83: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:345 CLC
    case 0xC13E84: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:346 ADC #item::flags
    case 0xC13E85: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00000Du : 0x00000Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:346 ADC #item::flags
    // Overlapping static entry reached from 0xC13E85.
    case 0xC13E87: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:347 TAX
    case 0xC13E88: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:348 LDA f:ITEM_CONFIGURATION_TABLE,X
    case 0xC13E89: {
        Instruction step(cpu, 0xBF, 0xD57000u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:349 AND #$00FF
    case 0xC13E8D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:349 AND #$00FF
    // Overlapping static entry reached from 0xC13E8D.
    case 0xC13E8F: {
        Instruction step(cpu, 0x00, 0x000029u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:350 AND #ITEM_FLAGS::CANNOT_GIVE
    case 0xC13E90: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:350 AND #ITEM_FLAGS::CANNOT_GIVE
    // Overlapping static entry reached from 0xC13E90.
    case 0xC13E92: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:351 BEQ @UNKNOWN37
    case 0xC13E93: {
        Instruction step(cpu, 0xF0, 0x000039u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:735 LDA arg
    // Macro caller: src/overworld/open_menu-jp.asm:352 CREATE_WINDOW_NEAR #WINDOW::TEXT_STANDARD
    case 0xC13E95: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:735 LDA arg
    // Macro caller: src/overworld/open_menu-jp.asm:352 CREATE_WINDOW_NEAR #WINDOW::TEXT_STANDARD
    // Overlapping static entry reached from 0xC13E95.
    case 0xC13E97: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/overworld/open_menu-jp.asm:352 CREATE_WINDOW_NEAR #WINDOW::TEXT_STANDARD
    case 0xC13E98: {
        Instruction step(cpu, 0x20, 0x0006E4u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/open_menu-jp.asm:353 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC13E9B: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/open_menu-jp.asm:353 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC13E9D: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/open_menu-jp.asm:353 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC13E9F: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/open_menu-jp.asm:353 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC13EA1: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:354 JSR SET_WORKING_MEMORY
    case 0xC13EA3: {
        Instruction step(cpu, 0x20, 0x000660u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:865 LDA src
    // Macro caller: src/overworld/open_menu-jp.asm:355 MOVE_INT1632 @VIRTUAL02, @VIRTUAL0A
    case 0xC13EA6: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/overworld/open_menu-jp.asm:355 MOVE_INT1632 @VIRTUAL02, @VIRTUAL0A
    case 0xC13EA8: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/overworld/open_menu-jp.asm:355 MOVE_INT1632 @VIRTUAL02, @VIRTUAL0A
    case 0xC13EAA: {
        Instruction step(cpu, 0x64, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/open_menu-jp.asm:356 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC13EAC: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/open_menu-jp.asm:356 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC13EAE: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/open_menu-jp.asm:356 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC13EB0: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/open_menu-jp.asm:356 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC13EB2: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:357 JSR SET_ARGUMENT_MEMORY
    case 0xC13EB4: {
        Instruction step(cpu, 0x20, 0x00068Cu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/open_menu-jp.asm:358 DISPLAY_TEXT_PTR MSG_SYS_GOODS_NOCARRY
    case 0xC13EB7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000025u : 0x002725u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/open_menu-jp.asm:358 DISPLAY_TEXT_PTR MSG_SYS_GOODS_NOCARRY
    // Overlapping static entry reached from 0xC13EB7.
    case 0xC13EB9: {
        Instruction step(cpu, 0x27, 0x000085u, 2u, AddressMode::DirectPageIndirectLong);
        step.and_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/open_menu-jp.asm:358 DISPLAY_TEXT_PTR MSG_SYS_GOODS_NOCARRY
    case 0xC13EBA: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/open_menu-jp.asm:358 DISPLAY_TEXT_PTR MSG_SYS_GOODS_NOCARRY
    // Overlapping static entry reached from 0xC13EB9.
    case 0xC13EBB: {
        Instruction step(cpu, 0x0E, 0x00C9A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu-jp.asm:358 DISPLAY_TEXT_PTR MSG_SYS_GOODS_NOCARRY
    case 0xC13EBC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C9u : 0x0000C9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu-jp.asm:358 DISPLAY_TEXT_PTR MSG_SYS_GOODS_NOCARRY
    // Overlapping static entry reached from 0xC13EBC.
    case 0xC13EBE: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/open_menu-jp.asm:358 DISPLAY_TEXT_PTR MSG_SYS_GOODS_NOCARRY
    case 0xC13EBF: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:210 JSL DISPLAY_TEXT
    // Macro caller: src/overworld/open_menu-jp.asm:358 DISPLAY_TEXT_PTR MSG_SYS_GOODS_NOCARRY
    case 0xC13EC1: {
        Instruction step(cpu, 0x22, 0xC18913u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:359 LDA #1
    case 0xC13EC5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:359 LDA #1
    // Overlapping static entry reached from 0xC13EC5.
    case 0xC13EC7: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:360 JSR CLOSE_WINDOW
    case 0xC13EC8: {
        Instruction step(cpu, 0x20, 0x000141u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:361 JMP @UNKNOWN25
    case 0xC13ECB: {
        Instruction step(cpu, 0x4C, 0x003D61u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:735 LDA arg
    // Macro caller: src/overworld/open_menu-jp.asm:364 CREATE_WINDOW_NEAR #WINDOW::TEXT_STANDARD
    case 0xC13ECE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:735 LDA arg
    // Macro caller: src/overworld/open_menu-jp.asm:364 CREATE_WINDOW_NEAR #WINDOW::TEXT_STANDARD
    // Overlapping static entry reached from 0xC13ECE.
    case 0xC13ED0: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/overworld/open_menu-jp.asm:364 CREATE_WINDOW_NEAR #WINDOW::TEXT_STANDARD
    case 0xC13ED1: {
        Instruction step(cpu, 0x20, 0x0006E4u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/open_menu-jp.asm:365 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC13ED4: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/open_menu-jp.asm:365 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC13ED6: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/open_menu-jp.asm:365 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC13ED8: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/open_menu-jp.asm:365 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC13EDA: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:366 JSR SET_WORKING_MEMORY
    case 0xC13EDC: {
        Instruction step(cpu, 0x20, 0x000660u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:865 LDA src
    // Macro caller: src/overworld/open_menu-jp.asm:367 MOVE_INT1632 @VIRTUAL02, @VIRTUAL0A
    case 0xC13EDF: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/overworld/open_menu-jp.asm:367 MOVE_INT1632 @VIRTUAL02, @VIRTUAL0A
    case 0xC13EE1: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/overworld/open_menu-jp.asm:367 MOVE_INT1632 @VIRTUAL02, @VIRTUAL0A
    case 0xC13EE3: {
        Instruction step(cpu, 0x64, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/open_menu-jp.asm:368 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC13EE5: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/open_menu-jp.asm:368 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC13EE7: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/open_menu-jp.asm:368 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC13EE9: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/open_menu-jp.asm:368 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC13EEB: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:369 JSR SET_ARGUMENT_MEMORY
    case 0xC13EED: {
        Instruction step(cpu, 0x20, 0x00068Cu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/open_menu-jp.asm:370 DISPLAY_TEXT_PTR MSG_SYS_CARRY
    case 0xC13EF0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C9u : 0x0025C9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/open_menu-jp.asm:370 DISPLAY_TEXT_PTR MSG_SYS_CARRY
    // Overlapping static entry reached from 0xC13EF0.
    case 0xC13EF2: {
        Instruction step(cpu, 0x25, 0x000085u, 2u, AddressMode::DirectPage);
        step.and_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/open_menu-jp.asm:370 DISPLAY_TEXT_PTR MSG_SYS_CARRY
    case 0xC13EF3: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/open_menu-jp.asm:370 DISPLAY_TEXT_PTR MSG_SYS_CARRY
    // Overlapping static entry reached from 0xC13EF2.
    case 0xC13EF4: {
        Instruction step(cpu, 0x0E, 0x00C9A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu-jp.asm:370 DISPLAY_TEXT_PTR MSG_SYS_CARRY
    case 0xC13EF5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C9u : 0x0000C9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu-jp.asm:370 DISPLAY_TEXT_PTR MSG_SYS_CARRY
    // Overlapping static entry reached from 0xC13EF5.
    case 0xC13EF7: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/open_menu-jp.asm:370 DISPLAY_TEXT_PTR MSG_SYS_CARRY
    case 0xC13EF8: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:210 JSL DISPLAY_TEXT
    // Macro caller: src/overworld/open_menu-jp.asm:370 DISPLAY_TEXT_PTR MSG_SYS_CARRY
    case 0xC13EFA: {
        Instruction step(cpu, 0x22, 0xC18913u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:371 LDA @LOCAL05
    case 0xC13EFE: {
        Instruction step(cpu, 0xA5, 0x00001Du, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:372 STA @VIRTUAL04
    case 0xC13F00: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/overworld/open_menu-jp.asm:373 STORE_INT1632 @VIRTUAL0A
    case 0xC13F02: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/overworld/open_menu-jp.asm:373 STORE_INT1632 @VIRTUAL0A
    case 0xC13F04: {
        Instruction step(cpu, 0x64, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/open_menu-jp.asm:374 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC13F06: {
        Instruction step(cpu, 0xA5, 0x000019u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/open_menu-jp.asm:374 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC13F08: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/open_menu-jp.asm:374 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC13F0A: {
        Instruction step(cpu, 0xA5, 0x00001Bu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/open_menu-jp.asm:374 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC13F0C: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:745 LDA src + 2
    // Macro caller: src/overworld/open_menu-jp.asm:375 CMP32 @VIRTUAL0A, @VIRTUAL06
    case 0xC13F0E: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:746 CMP dest + 2
    // Macro caller: src/overworld/open_menu-jp.asm:375 CMP32 @VIRTUAL0A, @VIRTUAL06
    case 0xC13F10: {
        Instruction step(cpu, 0xC5, 0x000008u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:747 BNE :+
    // Macro caller: src/overworld/open_menu-jp.asm:375 CMP32 @VIRTUAL0A, @VIRTUAL06
    case 0xC13F12: {
        Instruction step(cpu, 0xD0, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:748 LDA src
    // Macro caller: src/overworld/open_menu-jp.asm:375 CMP32 @VIRTUAL0A, @VIRTUAL06
    case 0xC13F14: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:749 CMP dest
    // Macro caller: src/overworld/open_menu-jp.asm:375 CMP32 @VIRTUAL0A, @VIRTUAL06
    case 0xC13F16: {
        Instruction step(cpu, 0xC5, 0x000006u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:376 BNE @UNKNOWN45
    case 0xC13F18: {
        Instruction step(cpu, 0xD0, 0x00001Bu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:377 LDY @VIRTUAL02
    case 0xC13F1A: {
        Instruction step(cpu, 0xA4, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:378 LDA @VIRTUAL06
    case 0xC13F1C: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:379 TAX
    case 0xC13F1E: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:380 LDA @VIRTUAL04
    case 0xC13F1F: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:381 JSL UNKNOWN_C22A3A
    case 0xC13F21: {
        Instruction step(cpu, 0x22, 0xC2295Fu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/open_menu-jp.asm:382 DISPLAY_TEXT_PTR MSG_SYS_CARRY_SELF
    case 0xC13F25: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000004u : 0x002604u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/open_menu-jp.asm:382 DISPLAY_TEXT_PTR MSG_SYS_CARRY_SELF
    // Overlapping static entry reached from 0xC13F25.
    case 0xC13F27: {
        Instruction step(cpu, 0x26, 0x000085u, 2u, AddressMode::DirectPage);
        step.rotate_left();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/open_menu-jp.asm:382 DISPLAY_TEXT_PTR MSG_SYS_CARRY_SELF
    case 0xC13F28: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/open_menu-jp.asm:382 DISPLAY_TEXT_PTR MSG_SYS_CARRY_SELF
    // Overlapping static entry reached from 0xC13F27.
    case 0xC13F29: {
        Instruction step(cpu, 0x0E, 0x00C9A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu-jp.asm:382 DISPLAY_TEXT_PTR MSG_SYS_CARRY_SELF
    case 0xC13F2A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C9u : 0x0000C9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu-jp.asm:382 DISPLAY_TEXT_PTR MSG_SYS_CARRY_SELF
    // Overlapping static entry reached from 0xC13F2A.
    case 0xC13F2C: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/open_menu-jp.asm:382 DISPLAY_TEXT_PTR MSG_SYS_CARRY_SELF
    case 0xC13F2D: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:210 JSL DISPLAY_TEXT
    // Macro caller: src/overworld/open_menu-jp.asm:382 DISPLAY_TEXT_PTR MSG_SYS_CARRY_SELF
    case 0xC13F2F: {
        Instruction step(cpu, 0x22, 0xC18913u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:383 BRA @UNKNOWN47
    case 0xC13F33: {
        Instruction step(cpu, 0x80, 0x00004Au, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:385 LDA @VIRTUAL04
    case 0xC13F35: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:386 JSL FIND_INVENTORY_SPACE2
    case 0xC13F37: {
        Instruction step(cpu, 0x22, 0xC43525u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:387 CMP #0
    case 0xC13F3B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:387 CMP #0
    // Overlapping static entry reached from 0xC13F3B.
    case 0xC13F3D: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:388 BEQ @UNKNOWN46
    case 0xC13F3E: {
        Instruction step(cpu, 0xF0, 0x000026u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:389 LDY @VIRTUAL02
    case 0xC13F40: {
        Instruction step(cpu, 0xA4, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:390 LDA @VIRTUAL06
    case 0xC13F42: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:391 TAX
    case 0xC13F44: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:392 LDA @VIRTUAL04
    case 0xC13F45: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:393 JSL UNKNOWN_C22A3A
    case 0xC13F47: {
        Instruction step(cpu, 0x22, 0xC2295Fu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/open_menu-jp.asm:394 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC13F4B: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/open_menu-jp.asm:394 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC13F4D: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/open_menu-jp.asm:394 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC13F4F: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/open_menu-jp.asm:394 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC13F51: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:395 JSR SET_WORKING_MEMORY
    case 0xC13F53: {
        Instruction step(cpu, 0x20, 0x000660u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/open_menu-jp.asm:396 DISPLAY_TEXT_PTR MSG_SYS_CARRY_OTHER
    case 0xC13F56: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000013u : 0x002613u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/open_menu-jp.asm:396 DISPLAY_TEXT_PTR MSG_SYS_CARRY_OTHER
    // Overlapping static entry reached from 0xC13F56.
    case 0xC13F58: {
        Instruction step(cpu, 0x26, 0x000085u, 2u, AddressMode::DirectPage);
        step.rotate_left();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/open_menu-jp.asm:396 DISPLAY_TEXT_PTR MSG_SYS_CARRY_OTHER
    case 0xC13F59: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/open_menu-jp.asm:396 DISPLAY_TEXT_PTR MSG_SYS_CARRY_OTHER
    // Overlapping static entry reached from 0xC13F58.
    case 0xC13F5A: {
        Instruction step(cpu, 0x0E, 0x00C9A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu-jp.asm:396 DISPLAY_TEXT_PTR MSG_SYS_CARRY_OTHER
    case 0xC13F5B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C9u : 0x0000C9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu-jp.asm:396 DISPLAY_TEXT_PTR MSG_SYS_CARRY_OTHER
    // Overlapping static entry reached from 0xC13F5B.
    case 0xC13F5D: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/open_menu-jp.asm:396 DISPLAY_TEXT_PTR MSG_SYS_CARRY_OTHER
    case 0xC13F5E: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:210 JSL DISPLAY_TEXT
    // Macro caller: src/overworld/open_menu-jp.asm:396 DISPLAY_TEXT_PTR MSG_SYS_CARRY_OTHER
    case 0xC13F60: {
        Instruction step(cpu, 0x22, 0xC18913u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:397 BRA @UNKNOWN47
    case 0xC13F64: {
        Instruction step(cpu, 0x80, 0x000019u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/open_menu-jp.asm:399 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC13F66: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/open_menu-jp.asm:399 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC13F68: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/open_menu-jp.asm:399 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC13F6A: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/open_menu-jp.asm:399 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC13F6C: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:400 JSR SET_WORKING_MEMORY
    case 0xC13F6E: {
        Instruction step(cpu, 0x20, 0x000660u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/open_menu-jp.asm:401 DISPLAY_TEXT_PTR MSG_SYS_CARRY_OTHER_NG
    case 0xC13F71: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000046u : 0x002646u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/open_menu-jp.asm:401 DISPLAY_TEXT_PTR MSG_SYS_CARRY_OTHER_NG
    // Overlapping static entry reached from 0xC13F71.
    case 0xC13F73: {
        Instruction step(cpu, 0x26, 0x000085u, 2u, AddressMode::DirectPage);
        step.rotate_left();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/open_menu-jp.asm:401 DISPLAY_TEXT_PTR MSG_SYS_CARRY_OTHER_NG
    case 0xC13F74: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/open_menu-jp.asm:401 DISPLAY_TEXT_PTR MSG_SYS_CARRY_OTHER_NG
    // Overlapping static entry reached from 0xC13F73.
    case 0xC13F75: {
        Instruction step(cpu, 0x0E, 0x00C9A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu-jp.asm:401 DISPLAY_TEXT_PTR MSG_SYS_CARRY_OTHER_NG
    case 0xC13F76: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C9u : 0x0000C9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu-jp.asm:401 DISPLAY_TEXT_PTR MSG_SYS_CARRY_OTHER_NG
    // Overlapping static entry reached from 0xC13F76.
    case 0xC13F78: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/open_menu-jp.asm:401 DISPLAY_TEXT_PTR MSG_SYS_CARRY_OTHER_NG
    case 0xC13F79: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:210 JSL DISPLAY_TEXT
    // Macro caller: src/overworld/open_menu-jp.asm:401 DISPLAY_TEXT_PTR MSG_SYS_CARRY_OTHER_NG
    case 0xC13F7B: {
        Instruction step(cpu, 0x22, 0xC18913u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:403 LDA #WINDOW::TEXT_STANDARD
    case 0xC13F7F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:403 LDA #WINDOW::TEXT_STANDARD
    // Overlapping static entry reached from 0xC13F7F.
    case 0xC13F81: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:404 JSR CLOSE_WINDOW
    case 0xC13F82: {
        Instruction step(cpu, 0x20, 0x000141u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:405 LDA #WINDOW::INVENTORY_MENU
    case 0xC13F85: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:405 LDA #WINDOW::INVENTORY_MENU
    // Overlapping static entry reached from 0xC13F85.
    case 0xC13F87: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:406 JSR CLOSE_WINDOW
    case 0xC13F88: {
        Instruction step(cpu, 0x20, 0x000141u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:407 LDA #WINDOW::INVENTORY
    case 0xC13F8B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:407 LDA #WINDOW::INVENTORY
    // Overlapping static entry reached from 0xC13F8B.
    case 0xC13F8D: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:408 JSR CLOSE_WINDOW
    case 0xC13F8E: {
        Instruction step(cpu, 0x20, 0x000141u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:409 JMP @MAIN_PAUSE_MENU
    case 0xC13F91: {
        Instruction step(cpu, 0x4C, 0x003B5Bu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:735 LDA arg
    // Macro caller: src/overworld/open_menu-jp.asm:411 CREATE_WINDOW_NEAR #WINDOW::TEXT_STANDARD
    case 0xC13F94: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:735 LDA arg
    // Macro caller: src/overworld/open_menu-jp.asm:411 CREATE_WINDOW_NEAR #WINDOW::TEXT_STANDARD
    // Overlapping static entry reached from 0xC13F94.
    case 0xC13F96: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/overworld/open_menu-jp.asm:411 CREATE_WINDOW_NEAR #WINDOW::TEXT_STANDARD
    case 0xC13F97: {
        Instruction step(cpu, 0x20, 0x0006E4u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/open_menu-jp.asm:412 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC13F9A: {
        Instruction step(cpu, 0xA5, 0x000019u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/open_menu-jp.asm:412 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC13F9C: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/open_menu-jp.asm:412 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC13F9E: {
        Instruction step(cpu, 0xA5, 0x00001Bu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/open_menu-jp.asm:412 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC13FA0: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/open_menu-jp.asm:413 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC13FA2: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/open_menu-jp.asm:413 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC13FA4: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/open_menu-jp.asm:413 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC13FA6: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/open_menu-jp.asm:413 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC13FA8: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:414 JSR SET_WORKING_MEMORY
    case 0xC13FAA: {
        Instruction step(cpu, 0x20, 0x000660u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:865 LDA src
    // Macro caller: src/overworld/open_menu-jp.asm:415 MOVE_INT1632 @VIRTUAL02, @VIRTUAL06
    case 0xC13FAD: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/overworld/open_menu-jp.asm:415 MOVE_INT1632 @VIRTUAL02, @VIRTUAL06
    case 0xC13FAF: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/overworld/open_menu-jp.asm:415 MOVE_INT1632 @VIRTUAL02, @VIRTUAL06
    case 0xC13FB1: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/open_menu-jp.asm:416 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC13FB3: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/open_menu-jp.asm:416 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC13FB5: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/open_menu-jp.asm:416 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC13FB7: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/open_menu-jp.asm:416 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC13FB9: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:417 JSR SET_ARGUMENT_MEMORY
    case 0xC13FBB: {
        Instruction step(cpu, 0x20, 0x00068Cu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/open_menu-jp.asm:418 DISPLAY_TEXT_PTR MSG_SYS_GOODS_DROP
    case 0xC13FBE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00006Au : 0x00266Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/open_menu-jp.asm:418 DISPLAY_TEXT_PTR MSG_SYS_GOODS_DROP
    // Overlapping static entry reached from 0xC13FBE.
    case 0xC13FC0: {
        Instruction step(cpu, 0x26, 0x000085u, 2u, AddressMode::DirectPage);
        step.rotate_left();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/open_menu-jp.asm:418 DISPLAY_TEXT_PTR MSG_SYS_GOODS_DROP
    case 0xC13FC1: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/open_menu-jp.asm:418 DISPLAY_TEXT_PTR MSG_SYS_GOODS_DROP
    // Overlapping static entry reached from 0xC13FC0.
    case 0xC13FC2: {
        Instruction step(cpu, 0x0E, 0x00C9A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu-jp.asm:418 DISPLAY_TEXT_PTR MSG_SYS_GOODS_DROP
    case 0xC13FC3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C9u : 0x0000C9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu-jp.asm:418 DISPLAY_TEXT_PTR MSG_SYS_GOODS_DROP
    // Overlapping static entry reached from 0xC13FC3.
    case 0xC13FC5: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/open_menu-jp.asm:418 DISPLAY_TEXT_PTR MSG_SYS_GOODS_DROP
    case 0xC13FC6: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:210 JSL DISPLAY_TEXT
    // Macro caller: src/overworld/open_menu-jp.asm:418 DISPLAY_TEXT_PTR MSG_SYS_GOODS_DROP
    case 0xC13FC8: {
        Instruction step(cpu, 0x22, 0xC18913u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:419 LDA #WINDOW::TEXT_STANDARD
    case 0xC13FCC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:419 LDA #WINDOW::TEXT_STANDARD
    // Overlapping static entry reached from 0xC13FCC.
    case 0xC13FCE: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:420 JSR CLOSE_WINDOW
    case 0xC13FCF: {
        Instruction step(cpu, 0x20, 0x000141u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:421 LDA #WINDOW::INVENTORY_MENU
    case 0xC13FD2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:421 LDA #WINDOW::INVENTORY_MENU
    // Overlapping static entry reached from 0xC13FD2.
    case 0xC13FD4: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:422 JSR CLOSE_WINDOW
    case 0xC13FD5: {
        Instruction step(cpu, 0x20, 0x000141u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:423 LDA #WINDOW::INVENTORY
    case 0xC13FD8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:423 LDA #WINDOW::INVENTORY
    // Overlapping static entry reached from 0xC13FD8.
    case 0xC13FDA: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:424 JSR CLOSE_WINDOW
    case 0xC13FDB: {
        Instruction step(cpu, 0x20, 0x000141u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:425 JMP @MAIN_PAUSE_MENU
    case 0xC13FDE: {
        Instruction step(cpu, 0x4C, 0x003B5Bu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:428 JSR UNKNOWN_C1134B
    case 0xC13FE1: {
        Instruction step(cpu, 0x20, 0x001900u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:429 JSR UNKNOWN_C1C373
    case 0xC13FE4: {
        Instruction step(cpu, 0x20, 0x00C1D5u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/overworld/open_menu-jp.asm:430 STORE_INT1632 @VIRTUAL06
    case 0xC13FE7: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/overworld/open_menu-jp.asm:430 STORE_INT1632 @VIRTUAL06
    case 0xC13FE9: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/open_menu-jp.asm:431 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC13FEB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/open_menu-jp.asm:431 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC13FEB.
    case 0xC13FED: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/overworld/open_menu-jp.asm:431 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC13FEE: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/open_menu-jp.asm:431 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC13FF0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/open_menu-jp.asm:431 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC13FF0.
    case 0xC13FF2: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/overworld/open_menu-jp.asm:431 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC13FF3: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:745 LDA src + 2
    // Macro caller: src/overworld/open_menu-jp.asm:432 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC13FF5: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:746 CMP dest + 2
    // Macro caller: src/overworld/open_menu-jp.asm:432 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC13FF7: {
        Instruction step(cpu, 0xC5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:747 BNE :+
    // Macro caller: src/overworld/open_menu-jp.asm:432 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC13FF9: {
        Instruction step(cpu, 0xD0, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:748 LDA src
    // Macro caller: src/overworld/open_menu-jp.asm:432 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC13FFB: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:749 CMP dest
    // Macro caller: src/overworld/open_menu-jp.asm:432 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC13FFD: {
        Instruction step(cpu, 0xC5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:433 BEQ @UNKNOWN66
    case 0xC13FFF: {
        Instruction step(cpu, 0xF0, 0x000006u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:434 LDA @VIRTUAL06
    case 0xC14001: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:435 DEC
    case 0xC14003: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:436 JSR UNKNOWN_C43573
    case 0xC14004: {
        Instruction step(cpu, 0x20, 0x000C40u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:438 JSR UNKNOWN_C1B5B6
    case 0xC14007: {
        Instruction step(cpu, 0x20, 0x00B47Du, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:439 CMP #0
    case 0xC1400A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:439 CMP #0
    // Overlapping static entry reached from 0xC1400A.
    case 0xC1400C: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:440 BNE @UNKNOWN75
    case 0xC1400D: {
        Instruction step(cpu, 0xD0, 0x000074u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:442 JSR UNKNOWN_C1C3B6
    case 0xC1400F: {
        Instruction step(cpu, 0x20, 0x00C21Du, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:443 CMP #1
    case 0xC14012: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:443 CMP #1
    // Overlapping static entry reached from 0xC14012.
    case 0xC14014: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/overworld/open_menu-jp.asm:444 BNEL @MAIN_PAUSE_MENU
    case 0xC14015: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/overworld/open_menu-jp.asm:444 BNEL @MAIN_PAUSE_MENU
    case 0xC14017: {
        Instruction step(cpu, 0x4C, 0x003B5Bu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:445 LDA #SFX::MENU_OPEN_CLOSE
    case 0xC1401A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00001Bu : 0x00001Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:445 LDA #SFX::MENU_OPEN_CLOSE
    // Overlapping static entry reached from 0xC1401A.
    case 0xC1401C: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:446 JSL PLAY_SOUND
    case 0xC1401D: {
        Instruction step(cpu, 0x22, 0xC0ABBFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:447 JSR UNKNOWN_C3E6F8
    case 0xC14021: {
        Instruction step(cpu, 0x20, 0x000BDBu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:448 JMP @MAIN_PAUSE_MENU
    case 0xC14024: {
        Instruction step(cpu, 0x4C, 0x003B5Bu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:450 JSR UNKNOWN_C1134B
    case 0xC14027: {
        Instruction step(cpu, 0x20, 0x001900u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:451 JSR UNKNOWN_C1AA5D
    case 0xC1402A: {
        Instruction step(cpu, 0x20, 0x00A941u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:452 LDA GAME_STATE+game_state::player_controlled_party_count
    case 0xC1402D: {
        Instruction step(cpu, 0xAD, 0x009B55u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:452 LDA GAME_STATE+game_state::player_controlled_party_count
    // Overlapping static entry reached from 0xC14099.
    case 0xC1402F: {
        Instruction step(cpu, 0x9B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_y();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:453 AND #$00FF
    case 0xC14030: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:453 AND #$00FF
    // Overlapping static entry reached from 0xC14030.
    case 0xC14032: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:454 CMP #1
    case 0xC14033: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:454 CMP #1
    // Overlapping static entry reached from 0xC14033.
    case 0xC14035: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/overworld/open_menu-jp.asm:455 BNEL @MAIN_PAUSE_MENU
    case 0xC14036: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/overworld/open_menu-jp.asm:455 BNEL @MAIN_PAUSE_MENU
    case 0xC14038: {
        Instruction step(cpu, 0x4C, 0x003B5Bu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:456 LDA #SFX::MENU_OPEN_CLOSE
    case 0xC1403B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00001Bu : 0x00001Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:456 LDA #SFX::MENU_OPEN_CLOSE
    // Overlapping static entry reached from 0xC1403B.
    case 0xC1403D: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:457 JSL PLAY_SOUND
    case 0xC1403E: {
        Instruction step(cpu, 0x22, 0xC0ABBFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:458 JSR UNKNOWN_C3E6F8
    case 0xC14042: {
        Instruction step(cpu, 0x20, 0x000BDBu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:459 JMP @MAIN_PAUSE_MENU
    case 0xC14045: {
        Instruction step(cpu, 0x4C, 0x003B5Bu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:461 JSL CHECK
    case 0xC14048: {
        Instruction step(cpu, 0x22, 0xC13918u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/open_menu-jp.asm:462 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC1404C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/open_menu-jp.asm:462 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1404C.
    case 0xC1404E: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/overworld/open_menu-jp.asm:462 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC1404F: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/open_menu-jp.asm:462 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC14051: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/open_menu-jp.asm:462 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC14051.
    case 0xC14053: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/overworld/open_menu-jp.asm:462 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC14054: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:745 LDA src + 2
    // Macro caller: src/overworld/open_menu-jp.asm:463 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC14056: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:746 CMP dest + 2
    // Macro caller: src/overworld/open_menu-jp.asm:463 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC14058: {
        Instruction step(cpu, 0xC5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:747 BNE :+
    // Macro caller: src/overworld/open_menu-jp.asm:463 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC1405A: {
        Instruction step(cpu, 0xD0, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:748 LDA src
    // Macro caller: src/overworld/open_menu-jp.asm:463 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC1405C: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:749 CMP dest
    // Macro caller: src/overworld/open_menu-jp.asm:463 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC1405E: {
        Instruction step(cpu, 0xC5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:464 BNE @UNKNOWN73
    case 0xC14060: {
        Instruction step(cpu, 0xD0, 0x00000Au, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/open_menu-jp.asm:465 LOADPTR MSG_SYS_NOPROBLEM, @VIRTUAL06
    case 0xC14062: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000B8u : 0x0025B8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/open_menu-jp.asm:465 LOADPTR MSG_SYS_NOPROBLEM, @VIRTUAL06
    // Overlapping static entry reached from 0xC14062.
    case 0xC14064: {
        Instruction step(cpu, 0x25, 0x000085u, 2u, AddressMode::DirectPage);
        step.and_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/open_menu-jp.asm:465 LOADPTR MSG_SYS_NOPROBLEM, @VIRTUAL06
    case 0xC14065: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/open_menu-jp.asm:465 LOADPTR MSG_SYS_NOPROBLEM, @VIRTUAL06
    // Overlapping static entry reached from 0xC14064.
    case 0xC14066: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu-jp.asm:465 LOADPTR MSG_SYS_NOPROBLEM, @VIRTUAL06
    case 0xC14067: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C9u : 0x0000C9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu-jp.asm:465 LOADPTR MSG_SYS_NOPROBLEM, @VIRTUAL06
    // Overlapping static entry reached from 0xC14066.
    case 0xC14068: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x008500u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu-jp.asm:465 LOADPTR MSG_SYS_NOPROBLEM, @VIRTUAL06
    // Overlapping static entry reached from 0xC14067.
    case 0xC14069: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/open_menu-jp.asm:465 LOADPTR MSG_SYS_NOPROBLEM, @VIRTUAL06
    case 0xC1406A: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/open_menu-jp.asm:465 LOADPTR MSG_SYS_NOPROBLEM, @VIRTUAL06
    // Overlapping static entry reached from 0xC14068.
    case 0xC1406B: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/open_menu-jp.asm:467 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1406C: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/open_menu-jp.asm:467 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1406E: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/open_menu-jp.asm:467 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14070: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/open_menu-jp.asm:467 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14072: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:468 JSL DISPLAY_TEXT
    case 0xC14074: {
        Instruction step(cpu, 0x22, 0xC18913u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:469 BRA @UNKNOWN75
    case 0xC14078: {
        Instruction step(cpu, 0x80, 0x000009u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:471 JSR UNKNOWN_C1134B
    case 0xC1407A: {
        Instruction step(cpu, 0x20, 0x001900u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:472 JSR UNKNOWN_C1BB71
    case 0xC1407D: {
        Instruction step(cpu, 0x20, 0x00BA16u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:473 JMP @MAIN_PAUSE_MENU
    case 0xC14080: {
        Instruction step(cpu, 0x4C, 0x003B5Bu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:475 JSR CLEAR_INSTANT_PRINTING
    case 0xC14083: {
        Instruction step(cpu, 0x20, 0x0000EDu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:476 JSR HIDE_HPPP_WINDOWS
    case 0xC14086: {
        Instruction step(cpu, 0x20, 0x000E72u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:477 JSR UNKNOWN_C1008E
    case 0xC14089: {
        Instruction step(cpu, 0x20, 0x0002AFu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:479 JSL WINDOW_TICK
    case 0xC1408C: {
        Instruction step(cpu, 0x22, 0xC13502u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:481 LDA ENTITY_FADE_ENTITY
    case 0xC14090: {
        Instruction step(cpu, 0xAD, 0x00B67Cu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:482 CMP #.LOWORD(-1)
    case 0xC14093: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:482 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC14093.
    case 0xC14095: {
        Instruction step(cpu, 0xFF, 0x22F4D0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:483 BNE @UNKNOWN76
    case 0xC14096: {
        Instruction step(cpu, 0xD0, 0x0000F4u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:484 JSL UNKNOWN_C09451
    case 0xC14098: {
        Instruction step(cpu, 0x22, 0xC09430u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:484 JSL UNKNOWN_C09451
    // Overlapping static entry reached from 0xC14095.
    case 0xC14099: {
        Instruction step(cpu, 0x30, 0x000094u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:484 JSL UNKNOWN_C09451
    // Overlapping static entry reached from 0xC14099.
    case 0xC1409B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x00002Bu : 0x006B2Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/open_menu-jp.asm:485 END_C_FUNCTION
    case 0xC1409C: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/open_menu-jp.asm:485 END_C_FUNCTION
    case 0xC1409D: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/open_menu-jp.asm:488 BEGIN_C_FUNCTION_FAR
    case 0xC1409E: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/open_menu-jp.asm:492 END_STACK_VARS
    case 0xC140A0: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/open_menu-jp.asm:492 END_STACK_VARS
    case 0xC140A1: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/open_menu-jp.asm:492 END_STACK_VARS
    case 0xC140A2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EEu : 0x00FFEEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/open_menu-jp.asm:492 END_STACK_VARS
    // Overlapping static entry reached from 0xC140A2.
    case 0xC140A4: {
        Instruction step(cpu, 0xFF, 0x1B225Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/open_menu-jp.asm:492 END_STACK_VARS
    case 0xC140A5: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:493 JSL UNKNOWN_C0943C
    case 0xC140A6: {
        Instruction step(cpu, 0x22, 0xC0941Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:493 JSL UNKNOWN_C0943C
    // Overlapping static entry reached from 0xC140A4.
    case 0xC140A8: {
        Instruction step(cpu, 0x94, 0x0000C0u, 2u, AddressMode::DirectPageIndexedX);
        step.store_y();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:494 LDA #SFX::CURSOR1
    case 0xC140AA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:494 LDA #SFX::CURSOR1
    // Overlapping static entry reached from 0xC140AA.
    case 0xC140AC: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:495 JSL PLAY_SOUND
    case 0xC140AD: {
        Instruction step(cpu, 0x22, 0xC0ABBFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:496 JSL TALK_TO
    case 0xC140B1: {
        Instruction step(cpu, 0x22, 0xC13864u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/open_menu-jp.asm:497 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC140B5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/open_menu-jp.asm:497 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC140B5.
    case 0xC140B7: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/overworld/open_menu-jp.asm:497 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC140B8: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/open_menu-jp.asm:497 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC140BA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/open_menu-jp.asm:497 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC140BA.
    case 0xC140BC: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/overworld/open_menu-jp.asm:497 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC140BD: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:745 LDA src + 2
    // Macro caller: src/overworld/open_menu-jp.asm:498 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC140BF: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:746 CMP dest + 2
    // Macro caller: src/overworld/open_menu-jp.asm:498 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC140C1: {
        Instruction step(cpu, 0xC5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:747 BNE :+
    // Macro caller: src/overworld/open_menu-jp.asm:498 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC140C3: {
        Instruction step(cpu, 0xD0, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:748 LDA src
    // Macro caller: src/overworld/open_menu-jp.asm:498 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC140C5: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:749 CMP dest
    // Macro caller: src/overworld/open_menu-jp.asm:498 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC140C7: {
        Instruction step(cpu, 0xC5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:499 BNE @UNKNOWN79
    case 0xC140C9: {
        Instruction step(cpu, 0xD0, 0x00001Au, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:500 JSL CHECK
    case 0xC140CB: {
        Instruction step(cpu, 0x22, 0xC13918u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:745 LDA src + 2
    // Macro caller: src/overworld/open_menu-jp.asm:501 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC140CF: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:746 CMP dest + 2
    // Macro caller: src/overworld/open_menu-jp.asm:501 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC140D1: {
        Instruction step(cpu, 0xC5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:747 BNE :+
    // Macro caller: src/overworld/open_menu-jp.asm:501 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC140D3: {
        Instruction step(cpu, 0xD0, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:748 LDA src
    // Macro caller: src/overworld/open_menu-jp.asm:501 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC140D5: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:749 CMP dest
    // Macro caller: src/overworld/open_menu-jp.asm:501 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC140D7: {
        Instruction step(cpu, 0xC5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:502 BNE @UNKNOWN79
    case 0xC140D9: {
        Instruction step(cpu, 0xD0, 0x00000Au, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/open_menu-jp.asm:503 LOADPTR MSG_SYS_NOPROBLEM, @VIRTUAL06
    case 0xC140DB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000B8u : 0x0025B8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/open_menu-jp.asm:503 LOADPTR MSG_SYS_NOPROBLEM, @VIRTUAL06
    // Overlapping static entry reached from 0xC140DB.
    case 0xC140DD: {
        Instruction step(cpu, 0x25, 0x000085u, 2u, AddressMode::DirectPage);
        step.and_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/open_menu-jp.asm:503 LOADPTR MSG_SYS_NOPROBLEM, @VIRTUAL06
    case 0xC140DE: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/open_menu-jp.asm:503 LOADPTR MSG_SYS_NOPROBLEM, @VIRTUAL06
    // Overlapping static entry reached from 0xC140DD.
    case 0xC140DF: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu-jp.asm:503 LOADPTR MSG_SYS_NOPROBLEM, @VIRTUAL06
    case 0xC140E0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C9u : 0x0000C9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu-jp.asm:503 LOADPTR MSG_SYS_NOPROBLEM, @VIRTUAL06
    // Overlapping static entry reached from 0xC140DF.
    case 0xC140E1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x008500u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu-jp.asm:503 LOADPTR MSG_SYS_NOPROBLEM, @VIRTUAL06
    // Overlapping static entry reached from 0xC140E0.
    case 0xC140E2: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/open_menu-jp.asm:503 LOADPTR MSG_SYS_NOPROBLEM, @VIRTUAL06
    case 0xC140E3: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/open_menu-jp.asm:503 LOADPTR MSG_SYS_NOPROBLEM, @VIRTUAL06
    // Overlapping static entry reached from 0xC140E1.
    case 0xC140E4: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/open_menu-jp.asm:505 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC140E5: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/open_menu-jp.asm:505 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC140E7: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/open_menu-jp.asm:505 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC140E9: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/open_menu-jp.asm:505 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC140EB: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:506 JSL DISPLAY_TEXT
    case 0xC140ED: {
        Instruction step(cpu, 0x22, 0xC18913u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:507 JSR CLEAR_INSTANT_PRINTING
    case 0xC140F1: {
        Instruction step(cpu, 0x20, 0x0000EDu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:508 JSR HIDE_HPPP_WINDOWS
    case 0xC140F4: {
        Instruction step(cpu, 0x20, 0x000E72u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:509 JSR UNKNOWN_C1008E
    case 0xC140F7: {
        Instruction step(cpu, 0x20, 0x0002AFu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:511 JSL WINDOW_TICK
    case 0xC140FA: {
        Instruction step(cpu, 0x22, 0xC13502u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:512 LDA ENTITY_FADE_ENTITY
    case 0xC140FE: {
        Instruction step(cpu, 0xAD, 0x00B67Cu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:513 CMP #.LOWORD(-1)
    case 0xC14101: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:513 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC14101.
    case 0xC14103: {
        Instruction step(cpu, 0xFF, 0x22F4D0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:514 BNE @UNKNOWN80
    case 0xC14104: {
        Instruction step(cpu, 0xD0, 0x0000F4u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:515 JSL UNKNOWN_C09451
    case 0xC14106: {
        Instruction step(cpu, 0x22, 0xC09430u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:515 JSL UNKNOWN_C09451
    // Overlapping static entry reached from 0xC14103.
    case 0xC14107: {
        Instruction step(cpu, 0x30, 0x000094u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/overworld/open_menu-jp.asm:515 JSL UNKNOWN_C09451
    // Overlapping static entry reached from 0xC14107.
    case 0xC14109: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x00002Bu : 0x006B2Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/open_menu-jp.asm:516 END_C_FUNCTION
    case 0xC1410A: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/open_menu-jp.asm:516 END_C_FUNCTION
    case 0xC1410B: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
