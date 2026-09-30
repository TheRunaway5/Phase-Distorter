// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/overworld/open_menu.asm
bool resume_overworld_open_menu(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/open_menu.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC134A7: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/open_menu.asm:14 END_STACK_VARS
    case 0xC134A9: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/open_menu.asm:14 END_STACK_VARS
    case 0xC134AA: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/open_menu.asm:14 END_STACK_VARS
    case 0xC134AB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000DBu : 0x00FFDBu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/open_menu.asm:14 END_STACK_VARS
    // Overlapping static entry reached from 0xC134AB.
    case 0xC134AD: {
        Instruction step(cpu, 0xFF, 0x3C225Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/open_menu.asm:14 END_STACK_VARS
    case 0xC134AE: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/overworld/open_menu.asm:15 JSL UNKNOWN_C0943C
    case 0xC134AF: {
        Instruction step(cpu, 0x22, 0xC0943Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/open_menu.asm:15 JSL UNKNOWN_C0943C
    // Overlapping static entry reached from 0xC134AD.
    case 0xC134B1: {
        Instruction step(cpu, 0x94, 0x0000C0u, 2u, AddressMode::DirectPageIndexedX);
        step.store_y();
        return step.finish();
    }
    // src/overworld/open_menu.asm:16 LDA #SFX::CURSOR1
    case 0xC134B3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:16 LDA #SFX::CURSOR1
    // Overlapping static entry reached from 0xC134B3.
    case 0xC134B5: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu.asm:17 JSL PLAY_SOUND
    case 0xC134B6: {
        Instruction step(cpu, 0x22, 0xC0ABE0u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:735 LDA arg
    // Macro caller: src/overworld/open_menu.asm:18 CREATE_WINDOW_NEAR #WINDOW::UNKNOWN00
    case 0xC134BA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:735 LDA arg
    // Macro caller: src/overworld/open_menu.asm:18 CREATE_WINDOW_NEAR #WINDOW::UNKNOWN00
    // Overlapping static entry reached from 0xC134BA.
    case 0xC134BC: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/overworld/open_menu.asm:18 CREATE_WINDOW_NEAR #WINDOW::UNKNOWN00
    case 0xC134BD: {
        Instruction step(cpu, 0x20, 0x0004EEu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/open_menu.asm:19 SEP #PROC_FLAGS::ACCUM8
    case 0xC134C0: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/open_menu.asm:20 STZ SKIP_ADDING_COMMAND_TEXT
    case 0xC134C2: {
        Instruction step(cpu, 0x9C, 0x005E6Cu, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/open_menu.asm:21 JSR UNKNOWN_C133B0
    case 0xC134C5: {
        Instruction step(cpu, 0x20, 0x0033B0u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/open_menu.asm:22 SEP #PROC_FLAGS::ACCUM8
    case 0xC134C8: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/open_menu.asm:23 STZ RESTORE_MENU_BACKUP
    case 0xC134CA: {
        Instruction step(cpu, 0x9C, 0x005E79u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/open_menu.asm:25 REP #PROC_FLAGS::ACCUM8
    case 0xC134CD: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/open_menu.asm:26 LDA #0
    case 0xC134CF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:26 LDA #0
    // Overlapping static entry reached from 0xC134CF.
    case 0xC134D1: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu.asm:27 JSR SET_WINDOW_FOCUS
    case 0xC134D2: {
        Instruction step(cpu, 0x20, 0x00007Eu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/open_menu.asm:28 LDA #1
    case 0xC134D5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:28 LDA #1
    // Overlapping static entry reached from 0xC134D5.
    case 0xC134D7: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu.asm:29 JSR SELECTION_MENU
    case 0xC134D8: {
        Instruction step(cpu, 0x20, 0x00196Au, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/overworld/open_menu.asm:30 STORE_INT1632 @VIRTUAL06
    case 0xC134DB: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/overworld/open_menu.asm:30 STORE_INT1632 @VIRTUAL06
    case 0xC134DD: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/open_menu.asm:31 LDA @VIRTUAL06
    case 0xC134DF: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:32 CMP #MENU_OPTIONS::TALK_TO
    case 0xC134E1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:32 CMP #MENU_OPTIONS::TALK_TO
    // Overlapping static entry reached from 0xC134E1.
    case 0xC134E3: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu.asm:33 BEQ @TALK_TO
    case 0xC134E4: {
        Instruction step(cpu, 0xF0, 0x000028u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/open_menu.asm:34 CMP #MENU_OPTIONS::GOODS
    case 0xC134E6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:34 CMP #MENU_OPTIONS::GOODS
    // Overlapping static entry reached from 0xC134E6.
    case 0xC134E8: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu.asm:35 BEQ @GOODS
    case 0xC134E9: {
        Instruction step(cpu, 0xF0, 0x000056u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/open_menu.asm:36 CMP #MENU_OPTIONS::PSI
    case 0xC134EB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:36 CMP #MENU_OPTIONS::PSI
    // Overlapping static entry reached from 0xC134EB.
    case 0xC134ED: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/open_menu.asm:37 BEQL @PSI
    case 0xC134EE: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/open_menu.asm:37 BEQL @PSI
    case 0xC134F0: {
        Instruction step(cpu, 0x4C, 0x003B62u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/open_menu.asm:38 CMP #MENU_OPTIONS::EQUIP
    case 0xC134F3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:38 CMP #MENU_OPTIONS::EQUIP
    // Overlapping static entry reached from 0xC134F3.
    case 0xC134F5: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/open_menu.asm:39 BEQL @EQUIP
    case 0xC134F6: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/open_menu.asm:39 BEQL @EQUIP
    case 0xC134F8: {
        Instruction step(cpu, 0x4C, 0x003BADu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/open_menu.asm:40 CMP #MENU_OPTIONS::CHECK
    case 0xC134FB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000005u : 0x000005u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:40 CMP #MENU_OPTIONS::CHECK
    // Overlapping static entry reached from 0xC134FB.
    case 0xC134FD: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/open_menu.asm:41 BEQL @CHECK
    case 0xC134FE: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/open_menu.asm:41 BEQL @CHECK
    case 0xC13500: {
        Instruction step(cpu, 0x4C, 0x003BCFu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/open_menu.asm:42 CMP #MENU_OPTIONS::STATUS
    case 0xC13503: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:42 CMP #MENU_OPTIONS::STATUS
    // Overlapping static entry reached from 0xC13503.
    case 0xC13505: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/open_menu.asm:43 BEQL @STATUS
    case 0xC13506: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/open_menu.asm:43 BEQL @STATUS
    case 0xC13508: {
        Instruction step(cpu, 0x4C, 0x003C01u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/open_menu.asm:43 BEQL @STATUS
    // Overlapping static entry reached from 0xC152B3.
    case 0xC13509: {
        Instruction step(cpu, 0x01, 0x00003Cu, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:44 JMP @UNKNOWN75
    case 0xC1350B: {
        Instruction step(cpu, 0x4C, 0x003C16u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/open_menu.asm:46 JSL TALK_TO
    case 0xC1350E: {
        Instruction step(cpu, 0x22, 0xC13187u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/open_menu.asm:47 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC13512: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/open_menu.asm:47 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC13512.
    case 0xC13514: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/overworld/open_menu.asm:47 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC13515: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/open_menu.asm:47 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC13517: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/open_menu.asm:47 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC13517.
    case 0xC13519: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/overworld/open_menu.asm:47 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC1351A: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:745 LDA src + 2
    // Macro caller: src/overworld/open_menu.asm:48 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC1351C: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:746 CMP dest + 2
    // Macro caller: src/overworld/open_menu.asm:48 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC1351E: {
        Instruction step(cpu, 0xC5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:747 BNE :+
    // Macro caller: src/overworld/open_menu.asm:48 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC13520: {
        Instruction step(cpu, 0xD0, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:748 LDA src
    // Macro caller: src/overworld/open_menu.asm:48 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC13522: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:749 CMP dest
    // Macro caller: src/overworld/open_menu.asm:48 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC13524: {
        Instruction step(cpu, 0xC5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:49 BNE @UNKNOWN7
    case 0xC13526: {
        Instruction step(cpu, 0xD0, 0x00000Au, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/open_menu.asm:50 LOADPTR MSG_SYS_HANASU_NG, @VIRTUAL06
    case 0xC13528: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000088u : 0x00C588u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/open_menu.asm:50 LOADPTR MSG_SYS_HANASU_NG, @VIRTUAL06
    // Overlapping static entry reached from 0xC13528.
    case 0xC1352A: {
        Instruction step(cpu, 0xC5, 0x000085u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/open_menu.asm:50 LOADPTR MSG_SYS_HANASU_NG, @VIRTUAL06
    case 0xC1352B: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/open_menu.asm:50 LOADPTR MSG_SYS_HANASU_NG, @VIRTUAL06
    // Overlapping static entry reached from 0xC1352A.
    case 0xC1352C: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu.asm:50 LOADPTR MSG_SYS_HANASU_NG, @VIRTUAL06
    case 0xC1352D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu.asm:50 LOADPTR MSG_SYS_HANASU_NG, @VIRTUAL06
    // Overlapping static entry reached from 0xC1352C.
    case 0xC1352E: {
        Instruction step(cpu, 0xC7, 0x000000u, 2u, AddressMode::DirectPageIndirectLong);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu.asm:50 LOADPTR MSG_SYS_HANASU_NG, @VIRTUAL06
    // Overlapping static entry reached from 0xC1352D.
    case 0xC1352F: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/open_menu.asm:50 LOADPTR MSG_SYS_HANASU_NG, @VIRTUAL06
    case 0xC13530: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/open_menu.asm:52 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC13532: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/open_menu.asm:52 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC13534: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/open_menu.asm:52 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC13536: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/open_menu.asm:52 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC13538: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:53 JSL DISPLAY_TEXT
    case 0xC1353A: {
        Instruction step(cpu, 0x22, 0xC186B1u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/open_menu.asm:54 JMP @UNKNOWN75
    case 0xC1353E: {
        Instruction step(cpu, 0x4C, 0x003C16u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/open_menu.asm:56 JSR UNKNOWN_C1134B
    case 0xC13541: {
        Instruction step(cpu, 0x20, 0x00134Bu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/open_menu.asm:58 LDA GAME_STATE+game_state::player_controlled_party_count
    case 0xC13544: {
        Instruction step(cpu, 0xAD, 0x0098A4u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:59 AND #$00FF
    case 0xC13547: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:59 AND #$00FF
    // Overlapping static entry reached from 0xC13547.
    case 0xC13549: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu.asm:60 CMP #1
    case 0xC1354A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:60 CMP #1
    // Overlapping static entry reached from 0xC1354A.
    case 0xC1354C: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu.asm:61 BNE @GOODS_MANY_PARTY_MEMBERS
    case 0xC1354D: {
        Instruction step(cpu, 0xD0, 0x00004Au, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/open_menu.asm:62 LDY #.LOWORD(GAME_STATE) + game_state::party_members
    case 0xC1354F: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00006Fu : 0x00986Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/open_menu.asm:62 LDY #.LOWORD(GAME_STATE) + game_state::party_members
    // Overlapping static entry reached from 0xC1354F.
    case 0xC13551: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:63 STY @LOCAL08
    case 0xC13552: {
        Instruction step(cpu, 0x84, 0x000023u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/open_menu.asm:64 LDX #1
    case 0xC13554: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/open_menu.asm:64 LDX #1
    // Overlapping static entry reached from 0xC13554.
    case 0xC13556: {
        Instruction step(cpu, 0x00, 0x0000B9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu.asm:65 LDA __BSS_START__,Y
    case 0xC13557: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:66 AND #$00FF
    case 0xC1355A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:66 AND #$00FF
    // Overlapping static entry reached from 0xC1355A.
    case 0xC1355C: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu.asm:67 JSL GET_CHARACTER_ITEM
    case 0xC1355D: {
        Instruction step(cpu, 0x22, 0xC3E977u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/open_menu.asm:68 CMP #0
    case 0xC13561: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:68 CMP #0
    // Overlapping static entry reached from 0xC13561.
    case 0xC13563: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/open_menu.asm:69 BEQL @MAIN_PAUSE_MENU
    case 0xC13564: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/open_menu.asm:69 BEQL @MAIN_PAUSE_MENU
    case 0xC13566: {
        Instruction step(cpu, 0x4C, 0x0034CDu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/open_menu.asm:70 LDX #2
    case 0xC13569: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/open_menu.asm:70 LDX #2
    // Overlapping static entry reached from 0xC13569.
    case 0xC1356B: {
        Instruction step(cpu, 0x00, 0x0000A4u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu.asm:71 LDY @LOCAL08
    case 0xC1356C: {
        Instruction step(cpu, 0xA4, 0x000023u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/open_menu.asm:72 LDA __BSS_START__,Y
    case 0xC1356E: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:73 AND #$00FF
    case 0xC13571: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:73 AND #$00FF
    // Overlapping static entry reached from 0xC13571.
    case 0xC13573: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu.asm:74 JSR INVENTORY_GET_ITEM_NAME
    case 0xC13574: {
        Instruction step(cpu, 0x20, 0x0098DEu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/open_menu.asm:75 LDY @LOCAL08
    case 0xC13577: {
        Instruction step(cpu, 0xA4, 0x000023u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/open_menu.asm:76 SEP #PROC_FLAGS::ACCUM8
    case 0xC13579: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/open_menu.asm:77 LDA __BSS_START__,Y
    case 0xC1357B: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:858 STA dest
    // Macro caller: src/overworld/open_menu.asm:78 STORE_INT832 @VIRTUAL06
    case 0xC1357E: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/overworld/open_menu.asm:78 STORE_INT832 @VIRTUAL06
    case 0xC13580: {
        Instruction step(cpu, 0x64, 0x000007u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/overworld/open_menu.asm:78 STORE_INT832 @VIRTUAL06
    case 0xC13582: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/overworld/open_menu.asm:78 STORE_INT832 @VIRTUAL06
    case 0xC13584: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/open_menu.asm:79 REP #PROC_FLAGS::ACCUM8
    case 0xC13586: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/open_menu.asm:80 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC13588: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/open_menu.asm:80 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC1358A: {
        Instruction step(cpu, 0x85, 0x00001Fu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/open_menu.asm:80 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC1358C: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/open_menu.asm:80 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC1358E: {
        Instruction step(cpu, 0x85, 0x000021u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:81 LDA #0
    case 0xC13590: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:81 LDA #0
    // Overlapping static entry reached from 0xC13590.
    case 0xC13592: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu.asm:82 JSL UNKNOWN_C43573
    case 0xC13593: {
        Instruction step(cpu, 0x22, 0xC43573u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/open_menu.asm:83 BRA @UNKNOWN12
    case 0xC13597: {
        Instruction step(cpu, 0x80, 0x00002Fu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/open_menu.asm:85 LDA #0
    case 0xC13599: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:85 LDA #0
    // Overlapping static entry reached from 0xC13599.
    case 0xC1359B: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu.asm:86 JSR UNKNOWN_C193E7
    case 0xC1359C: {
        Instruction step(cpu, 0x20, 0x0093E7u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/open_menu.asm:87 LOADPTR UNKNOWN_C1339E, @LOCAL00
    case 0xC1359F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00009Eu : 0x00339Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/open_menu.asm:87 LOADPTR UNKNOWN_C1339E, @LOCAL00
    // Overlapping static entry reached from 0xC1359F.
    case 0xC135A1: {
        Instruction step(cpu, 0x33, 0x000085u, 2u, AddressMode::StackRelativeIndirectIndexedY);
        step.and_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/open_menu.asm:87 LOADPTR UNKNOWN_C1339E, @LOCAL00
    case 0xC135A2: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/open_menu.asm:87 LOADPTR UNKNOWN_C1339E, @LOCAL00
    // Overlapping static entry reached from 0xC135A1.
    case 0xC135A3: {
        Instruction step(cpu, 0x0E, 0x00C1A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu.asm:87 LOADPTR UNKNOWN_C1339E, @LOCAL00
    case 0xC135A4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C1u : 0x0000C1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu.asm:87 LOADPTR UNKNOWN_C1339E, @LOCAL00
    // Overlapping static entry reached from 0xC135A4.
    case 0xC135A6: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/open_menu.asm:87 LOADPTR UNKNOWN_C1339E, @LOCAL00
    case 0xC135A7: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/open_menu.asm:88 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC135A9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/open_menu.asm:88 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC135A9.
    case 0xC135AB: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/overworld/open_menu.asm:88 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC135AC: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/open_menu.asm:88 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC135AE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/open_menu.asm:88 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC135AE.
    case 0xC135B0: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/overworld/open_menu.asm:88 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC135B1: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:89 LDX #1
    case 0xC135B3: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/open_menu.asm:89 LDX #1
    // Overlapping static entry reached from 0xC135B3.
    case 0xC135B5: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu.asm:90 LDA #0
    case 0xC135B6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:90 LDA #0
    // Overlapping static entry reached from 0xC135B6.
    case 0xC135B8: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu.asm:91 JSR CHAR_SELECT_PROMPT
    case 0xC135B9: {
        Instruction step(cpu, 0x20, 0x0027EFu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/overworld/open_menu.asm:92 STORE_INT1632 @VIRTUAL06
    case 0xC135BC: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/overworld/open_menu.asm:92 STORE_INT1632 @VIRTUAL06
    case 0xC135BE: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/open_menu.asm:93 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC135C0: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/open_menu.asm:93 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC135C2: {
        Instruction step(cpu, 0x85, 0x00001Fu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/open_menu.asm:93 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC135C4: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/open_menu.asm:93 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC135C6: {
        Instruction step(cpu, 0x85, 0x000021u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/open_menu.asm:95 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC135C8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/open_menu.asm:95 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC135C8.
    case 0xC135CA: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/overworld/open_menu.asm:95 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC135CB: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/open_menu.asm:95 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC135CD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/open_menu.asm:95 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC135CD.
    case 0xC135CF: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/overworld/open_menu.asm:95 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC135D0: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:745 LDA src + 2
    // Macro caller: src/overworld/open_menu.asm:96 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC135D2: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:746 CMP dest + 2
    // Macro caller: src/overworld/open_menu.asm:96 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC135D4: {
        Instruction step(cpu, 0xC5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:747 BNE :+
    // Macro caller: src/overworld/open_menu.asm:96 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC135D6: {
        Instruction step(cpu, 0xD0, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:748 LDA src
    // Macro caller: src/overworld/open_menu.asm:96 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC135D8: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:749 CMP dest
    // Macro caller: src/overworld/open_menu.asm:96 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC135DA: {
        Instruction step(cpu, 0xC5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:97 BNE @UNKNOWN14
    case 0xC135DC: {
        Instruction step(cpu, 0xD0, 0x00000Du, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/open_menu.asm:98 LDA #WINDOW::INVENTORY
    case 0xC135DE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:98 LDA #WINDOW::INVENTORY
    // Overlapping static entry reached from 0xC135DE.
    case 0xC135E0: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu.asm:99 JSL CLOSE_WINDOW
    case 0xC135E1: {
        Instruction step(cpu, 0x22, 0xC3E521u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/open_menu.asm:100 JSR UNKNOWN_C19437
    case 0xC135E5: {
        Instruction step(cpu, 0x20, 0x009437u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/open_menu.asm:101 JMP @MAIN_PAUSE_MENU
    case 0xC135E8: {
        Instruction step(cpu, 0x4C, 0x0034CDu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/open_menu.asm:103 LDX #1
    case 0xC135EB: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/open_menu.asm:103 LDX #1
    // Overlapping static entry reached from 0xC135EB.
    case 0xC135ED: {
        Instruction step(cpu, 0x00, 0x0000A5u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu.asm:104 LDA @VIRTUAL06
    case 0xC135EE: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:105 JSL GET_CHARACTER_ITEM
    case 0xC135F0: {
        Instruction step(cpu, 0x22, 0xC3E977u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/open_menu.asm:106 CMP #0
    case 0xC135F4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:106 CMP #0
    // Overlapping static entry reached from 0xC135F4.
    case 0xC135F6: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/open_menu.asm:107 BEQL @UNKNOWN9
    case 0xC135F7: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/open_menu.asm:107 BEQL @UNKNOWN9
    case 0xC135F9: {
        Instruction step(cpu, 0x4C, 0x003544u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/open_menu.asm:109 LDA #1
    case 0xC135FC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:109 LDA #1
    // Overlapping static entry reached from 0xC135FC.
    case 0xC135FE: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu.asm:110 JSR UNKNOWN_C193E7
    case 0xC135FF: {
        Instruction step(cpu, 0x20, 0x0093E7u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/open_menu.asm:111 LDA #WINDOW::INVENTORY
    case 0xC13602: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:111 LDA #WINDOW::INVENTORY
    // Overlapping static entry reached from 0xC13602.
    case 0xC13604: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu.asm:112 JSR SET_WINDOW_FOCUS
    case 0xC13605: {
        Instruction step(cpu, 0x20, 0x00007Eu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/open_menu.asm:113 LDA #1
    case 0xC13608: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:113 LDA #1
    // Overlapping static entry reached from 0xC13608.
    case 0xC1360A: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu.asm:114 JSR SELECTION_MENU
    case 0xC1360B: {
        Instruction step(cpu, 0x20, 0x00196Au, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/open_menu.asm:115 STA @VIRTUAL04
    case 0xC1360E: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:116 STA @LOCAL06
    case 0xC13610: {
        Instruction step(cpu, 0x85, 0x00001Du, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:117 JSL UNKNOWN_EF016F
    case 0xC13612: {
        Instruction step(cpu, 0x22, 0xEF016Fu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/open_menu.asm:118 JSR UNKNOWN_C19437
    case 0xC13616: {
        Instruction step(cpu, 0x20, 0x009437u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/open_menu.asm:119 LDA @VIRTUAL04
    case 0xC13619: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:120 BNE @GOODS_ITEM_SELECTED
    case 0xC1361B: {
        Instruction step(cpu, 0xD0, 0x000035u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/open_menu.asm:121 LDA GAME_STATE+game_state::player_controlled_party_count
    case 0xC1361D: {
        Instruction step(cpu, 0xAD, 0x0098A4u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:122 AND #$00FF
    case 0xC13620: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:122 AND #$00FF
    // Overlapping static entry reached from 0xC13620.
    case 0xC13622: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu.asm:123 CMP #1
    case 0xC13623: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:123 CMP #1
    // Overlapping static entry reached from 0xC13623.
    case 0xC13625: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/overworld/open_menu.asm:124 BNEL @UNKNOWN9
    case 0xC13626: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/overworld/open_menu.asm:124 BNEL @UNKNOWN9
    case 0xC13628: {
        Instruction step(cpu, 0x4C, 0x003544u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/open_menu.asm:125 LDX #1
    case 0xC1362B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/open_menu.asm:125 LDX #1
    // Overlapping static entry reached from 0xC1362B.
    case 0xC1362D: {
        Instruction step(cpu, 0x00, 0x0000ADu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu.asm:126 LDA GAME_STATE + game_state::party_members
    case 0xC1362E: {
        Instruction step(cpu, 0xAD, 0x00986Fu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:127 AND #$00FF
    case 0xC13631: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:127 AND #$00FF
    // Overlapping static entry reached from 0xC13631.
    case 0xC13633: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu.asm:128 JSL GET_CHARACTER_ITEM
    case 0xC13634: {
        Instruction step(cpu, 0x22, 0xC3E977u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/open_menu.asm:129 CMP #0
    case 0xC13638: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:129 CMP #0
    // Overlapping static entry reached from 0xC13638.
    case 0xC1363A: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu.asm:130 BEQ @UNKNOWN17
    case 0xC1363B: {
        Instruction step(cpu, 0xF0, 0x00000Bu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/open_menu.asm:131 LDA #SFX::MENU_OPEN_CLOSE
    case 0xC1363D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00001Bu : 0x00001Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:131 LDA #SFX::MENU_OPEN_CLOSE
    // Overlapping static entry reached from 0xC1363D.
    case 0xC1363F: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu.asm:132 JSL PLAY_SOUND
    case 0xC13640: {
        Instruction step(cpu, 0x22, 0xC0ABE0u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/open_menu.asm:133 JSL UNKNOWN_C3E6F8
    case 0xC13644: {
        Instruction step(cpu, 0x22, 0xC3E6F8u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/open_menu.asm:135 LDA #WINDOW::INVENTORY
    case 0xC13648: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:135 LDA #WINDOW::INVENTORY
    // Overlapping static entry reached from 0xC13648.
    case 0xC1364A: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu.asm:136 JSL CLOSE_WINDOW
    case 0xC1364B: {
        Instruction step(cpu, 0x22, 0xC3E521u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/open_menu.asm:137 JMP @MAIN_PAUSE_MENU
    case 0xC1364F: {
        Instruction step(cpu, 0x4C, 0x0034CDu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:735 LDA arg
    // Macro caller: src/overworld/open_menu.asm:139 CREATE_WINDOW_NEAR #WINDOW::INVENTORY_MENU
    case 0xC13652: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:735 LDA arg
    // Macro caller: src/overworld/open_menu.asm:139 CREATE_WINDOW_NEAR #WINDOW::INVENTORY_MENU
    // Overlapping static entry reached from 0xC13652.
    case 0xC13654: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/overworld/open_menu.asm:139 CREATE_WINDOW_NEAR #WINDOW::INVENTORY_MENU
    case 0xC13655: {
        Instruction step(cpu, 0x20, 0x0004EEu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/open_menu.asm:140 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC13658: {
        Instruction step(cpu, 0xA5, 0x00001Fu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/open_menu.asm:140 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC1365A: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/open_menu.asm:140 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC1365C: {
        Instruction step(cpu, 0xA5, 0x000021u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/open_menu.asm:140 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC1365E: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:141 LDA @VIRTUAL06
    case 0xC13660: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:142 DEC
    case 0xC13662: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/overworld/open_menu.asm:143 LDY #.SIZEOF(char_struct)
    case 0xC13663: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Fu : 0x00005Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/open_menu.asm:143 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC13663.
    case 0xC13665: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu.asm:144 JSL MULT168
    case 0xC13666: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/open_menu.asm:145 TAX
    case 0xC1366A: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/open_menu.asm:146 LDA PARTY_CHARACTERS + char_struct::afflictions + STATUS_GROUP::PERSISTENT_EASYHEAL,X
    case 0xC1366B: {
        Instruction step(cpu, 0xBD, 0x0099DCu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:147 AND #$00FF
    case 0xC1366E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:147 AND #$00FF
    // Overlapping static entry reached from 0xC1366E.
    case 0xC13670: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu.asm:148 TAX
    case 0xC13671: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/open_menu.asm:149 BEQ @GOODS_ITEM_SELECTED_ALIVE
    case 0xC13672: {
        Instruction step(cpu, 0xF0, 0x000015u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/open_menu.asm:150 STX @VIRTUAL02
    case 0xC13674: {
        Instruction step(cpu, 0x86, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/open_menu.asm:151 LDA #4
    case 0xC13676: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:151 LDA #4
    // Overlapping static entry reached from 0xC13676.
    case 0xC13678: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu.asm:152 CLC
    case 0xC13679: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/open_menu.asm:153 SBC @VIRTUAL02
    case 0xC1367A: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:807 BVC :+
    // Macro caller: src/overworld/open_menu.asm:154 BRANCHLTEQS @GOODS_ITEM_SELECTED_ALIVE
    case 0xC1367C: {
        Instruction step(cpu, 0x50, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_clear();
        return step.finish();
    }
    // include/macros.asm:808 BPL dest
    // Macro caller: src/overworld/open_menu.asm:154 BRANCHLTEQS @GOODS_ITEM_SELECTED_ALIVE
    case 0xC1367E: {
        Instruction step(cpu, 0x10, 0x000009u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:809 BRA :++
    // Macro caller: src/overworld/open_menu.asm:154 BRANCHLTEQS @GOODS_ITEM_SELECTED_ALIVE
    case 0xC13680: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:811 BMI dest
    // Macro caller: src/overworld/open_menu.asm:154 BRANCHLTEQS @GOODS_ITEM_SELECTED_ALIVE
    case 0xC13682: {
        Instruction step(cpu, 0x30, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/overworld/open_menu.asm:155 LDX #1
    case 0xC13684: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/open_menu.asm:155 LDX #1
    // Overlapping static entry reached from 0xC13684.
    case 0xC13686: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu.asm:156 BRA @UNKNOWN22
    case 0xC13687: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/open_menu.asm:158 LDX #$0000
    case 0xC13689: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/open_menu.asm:158 LDX #$0000
    // Overlapping static entry reached from 0xC13689.
    case 0xC1368B: {
        Instruction step(cpu, 0x00, 0x00009Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu.asm:160 TXY
    case 0xC1368C: {
        Instruction step(cpu, 0x9B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_y();
        return step.finish();
    }
    // src/overworld/open_menu.asm:161 STY @LOCAL08
    case 0xC1368D: {
        Instruction step(cpu, 0x84, 0x000023u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/open_menu.asm:162 TYX
    case 0xC1368F: {
        Instruction step(cpu, 0xBB, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_x();
        return step.finish();
    }
    // src/overworld/open_menu.asm:163 LDA #0
    case 0xC13690: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:163 LDA #0
    // Overlapping static entry reached from 0xC13690.
    case 0xC13692: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu.asm:164 JSL UNKNOWN_C438A5
    case 0xC13693: {
        Instruction step(cpu, 0x22, 0xC438A5u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/open_menu.asm:165 BRA @UNKNOWN24
    case 0xC13697: {
        Instruction step(cpu, 0x80, 0x000033u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/open_menu.asm:167 TYX
    case 0xC13699: {
        Instruction step(cpu, 0xBB, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_x();
        return step.finish();
    }
    // src/overworld/open_menu.asm:168 INX
    case 0xC1369A: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/overworld/open_menu.asm:169 STX @LOCAL05
    case 0xC1369B: {
        Instruction step(cpu, 0x86, 0x00001Bu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/open_menu.asm:170 LOADPTR ITEM_USE_MENU_STRINGS, @VIRTUAL06
    case 0xC1369D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000050u : 0x003550u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/open_menu.asm:170 LOADPTR ITEM_USE_MENU_STRINGS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1369D.
    case 0xC1369F: {
        Instruction step(cpu, 0x35, 0x000085u, 2u, AddressMode::DirectPageIndexedX);
        step.and_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/open_menu.asm:170 LOADPTR ITEM_USE_MENU_STRINGS, @VIRTUAL06
    case 0xC136A0: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/open_menu.asm:170 LOADPTR ITEM_USE_MENU_STRINGS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1369F.
    case 0xC136A1: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu.asm:170 LOADPTR ITEM_USE_MENU_STRINGS, @VIRTUAL06
    case 0xC136A2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C4u : 0x0000C4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu.asm:170 LOADPTR ITEM_USE_MENU_STRINGS, @VIRTUAL06
    // Overlapping static entry reached from 0xC136A1.
    case 0xC136A3: {
        Instruction step(cpu, 0xC4, 0x000000u, 2u, AddressMode::DirectPage);
        step.compare_y();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu.asm:170 LOADPTR ITEM_USE_MENU_STRINGS, @VIRTUAL06
    // Overlapping static entry reached from 0xC136A2.
    case 0xC136A4: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/open_menu.asm:170 LOADPTR ITEM_USE_MENU_STRINGS, @VIRTUAL06
    case 0xC136A5: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:171 TYA
    case 0xC136A7: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:534 STA scratch
    // Macro caller: src/overworld/open_menu.asm:172 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC136A8: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:535 ASL
    // Macro caller: src/overworld/open_menu.asm:172 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC136AA: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:536 ADC scratch
    // Macro caller: src/overworld/open_menu.asm:172 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC136AB: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:537 ASL
    // Macro caller: src/overworld/open_menu.asm:172 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC136AD: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/open_menu.asm:173 CLC
    case 0xC136AE: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/open_menu.asm:174 ADC @VIRTUAL06
    case 0xC136AF: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/open_menu.asm:175 STA @VIRTUAL06
    case 0xC136B1: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:176 STA @LOCAL00
    case 0xC136B3: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:177 LDA @VIRTUAL06+2
    case 0xC136B5: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:178 STA @LOCAL00+2
    case 0xC136B7: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/open_menu.asm:179 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC136B9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/open_menu.asm:179 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC136B9.
    case 0xC136BB: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/overworld/open_menu.asm:179 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC136BC: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/open_menu.asm:179 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC136BE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/open_menu.asm:179 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC136BE.
    case 0xC136C0: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/overworld/open_menu.asm:179 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC136C1: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:180 TXA
    case 0xC136C3: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:181 JSR UNKNOWN_C115F4
    case 0xC136C4: {
        Instruction step(cpu, 0x20, 0x0015F4u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/open_menu.asm:182 LDX @LOCAL05
    case 0xC136C7: {
        Instruction step(cpu, 0xA6, 0x00001Bu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/open_menu.asm:183 TXY
    case 0xC136C9: {
        Instruction step(cpu, 0x9B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_y();
        return step.finish();
    }
    // src/overworld/open_menu.asm:184 STY @LOCAL08
    case 0xC136CA: {
        Instruction step(cpu, 0x84, 0x000023u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/open_menu.asm:186 LDY @LOCAL08
    case 0xC136CC: {
        Instruction step(cpu, 0xA4, 0x000023u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/open_menu.asm:187 CPY #4
    case 0xC136CE: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/overworld/open_menu.asm:187 CPY #4
    // Overlapping static entry reached from 0xC136CE.
    case 0xC136D0: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu.asm:188 BCC @UNKNOWN23
    case 0xC136D1: {
        Instruction step(cpu, 0x90, 0x0000C6u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/overworld/open_menu.asm:189 LDY #0
    case 0xC136D3: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/open_menu.asm:189 LDY #0
    // Overlapping static entry reached from 0xC136D3.
    case 0xC136D5: {
        Instruction step(cpu, 0x00, 0x0000BBu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu.asm:190 TYX
    case 0xC136D6: {
        Instruction step(cpu, 0xBB, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_x();
        return step.finish();
    }
    // src/overworld/open_menu.asm:191 LDA #1
    case 0xC136D7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:191 LDA #1
    // Overlapping static entry reached from 0xC136D7.
    case 0xC136D9: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu.asm:192 JSL UNKNOWN_C451FA
    case 0xC136DA: {
        Instruction step(cpu, 0x22, 0xC451FAu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/open_menu.asm:193 LDA #0
    case 0xC136DE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:193 LDA #0
    // Overlapping static entry reached from 0xC136DE.
    case 0xC136E0: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu.asm:194 STA @VIRTUAL02
    case 0xC136E1: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:196 REP #PROC_FLAGS::ACCUM8
    case 0xC136E3: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/open_menu.asm:197 LDA @VIRTUAL02
    case 0xC136E5: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:198 BEQ @UNKNOWN26
    case 0xC136E7: {
        Instruction step(cpu, 0xF0, 0x00001Au, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/open_menu.asm:199 LDA #WINDOW::INVENTORY
    case 0xC136E9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:199 LDA #WINDOW::INVENTORY
    // Overlapping static entry reached from 0xC136E9.
    case 0xC136EB: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu.asm:200 JSR SET_WINDOW_FOCUS
    case 0xC136EC: {
        Instruction step(cpu, 0x20, 0x00007Eu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/open_menu.asm:201 SEP #PROC_FLAGS::ACCUM8
    case 0xC136EF: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/open_menu.asm:202 LDA @LOCAL04
    case 0xC136F1: {
        Instruction step(cpu, 0xA5, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:203 STA @VIRTUAL00
    case 0xC136F3: {
        Instruction step(cpu, 0x85, 0x000000u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:204 REP #PROC_FLAGS::ACCUM8
    case 0xC136F5: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/open_menu.asm:205 LDA @VIRTUAL00
    case 0xC136F7: {
        Instruction step(cpu, 0xA5, 0x000000u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:206 AND #$00FF
    case 0xC136F9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:206 AND #$00FF
    // Overlapping static entry reached from 0xC136F9.
    case 0xC136FB: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu.asm:207 BEQ @UNKNOWN27
    case 0xC136FC: {
        Instruction step(cpu, 0xF0, 0x00000Eu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/open_menu.asm:208 JSR PRINT_MENU_ITEMS
    case 0xC136FE: {
        Instruction step(cpu, 0x20, 0x00163Cu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/open_menu.asm:209 BRA @UNKNOWN27
    case 0xC13701: {
        Instruction step(cpu, 0x80, 0x000009u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/open_menu.asm:211 LDA #WINDOW::INVENTORY_MENU
    case 0xC13703: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:211 LDA #WINDOW::INVENTORY_MENU
    // Overlapping static entry reached from 0xC13703.
    case 0xC13705: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu.asm:212 JSR SET_WINDOW_FOCUS
    case 0xC13706: {
        Instruction step(cpu, 0x20, 0x00007Eu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/open_menu.asm:213 JSR PRINT_MENU_ITEMS
    case 0xC13709: {
        Instruction step(cpu, 0x20, 0x00163Cu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/open_menu.asm:215 LDA #WINDOW::INVENTORY_MENU
    case 0xC1370C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:215 LDA #WINDOW::INVENTORY_MENU
    // Overlapping static entry reached from 0xC1370C.
    case 0xC1370E: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu.asm:216 JSR SET_WINDOW_FOCUS
    case 0xC1370F: {
        Instruction step(cpu, 0x20, 0x00007Eu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/open_menu.asm:217 LDA #1
    case 0xC13712: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:217 LDA #1
    // Overlapping static entry reached from 0xC13712.
    case 0xC13714: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu.asm:218 JSR SELECTION_MENU
    case 0xC13715: {
        Instruction step(cpu, 0x20, 0x00196Au, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/overworld/open_menu.asm:219 STORE_INT1632 @VIRTUAL0A
    case 0xC13718: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/overworld/open_menu.asm:219 STORE_INT1632 @VIRTUAL0A
    case 0xC1371A: {
        Instruction step(cpu, 0x64, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/open_menu.asm:220 LDA @VIRTUAL0A
    case 0xC1371C: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:221 BEQ @UNKNOWN30
    case 0xC1371E: {
        Instruction step(cpu, 0xF0, 0x00001Du, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/open_menu.asm:222 CMP #1
    case 0xC13720: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:222 CMP #1
    // Overlapping static entry reached from 0xC13720.
    case 0xC13722: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu.asm:223 BEQ @GOODS_ITEM_USE
    case 0xC13723: {
        Instruction step(cpu, 0xF0, 0x000024u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/open_menu.asm:224 CMP #4
    case 0xC13725: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:224 CMP #4
    // Overlapping static entry reached from 0xC13725.
    case 0xC13727: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu.asm:225 BEQ @GOODS_ITEM_HELP
    case 0xC13728: {
        Instruction step(cpu, 0xF0, 0x00004Du, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/open_menu.asm:226 CMP #2
    case 0xC1372A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:226 CMP #2
    // Overlapping static entry reached from 0xC1372A.
    case 0xC1372C: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/open_menu.asm:227 BEQL @UNKNOWN34
    case 0xC1372D: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/open_menu.asm:227 BEQL @UNKNOWN34
    case 0xC1372F: {
        Instruction step(cpu, 0x4C, 0x003810u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/open_menu.asm:228 CMP #3
    case 0xC13732: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:228 CMP #3
    // Overlapping static entry reached from 0xC13732.
    case 0xC13734: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/open_menu.asm:229 BEQL @UNKNOWN63
    case 0xC13735: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/open_menu.asm:229 BEQL @UNKNOWN63
    case 0xC13737: {
        Instruction step(cpu, 0x4C, 0x003B10u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/open_menu.asm:230 JMP @UNKNOWN75
    case 0xC1373A: {
        Instruction step(cpu, 0x4C, 0x003C16u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/open_menu.asm:232 JSR CLOSE_FOCUS_WINDOW
    case 0xC1373D: {
        Instruction step(cpu, 0x20, 0x000084u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/open_menu.asm:233 LDA #WINDOW::INVENTORY
    case 0xC13740: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:233 LDA #WINDOW::INVENTORY
    // Overlapping static entry reached from 0xC13740.
    case 0xC13742: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu.asm:234 JSR SET_WINDOW_FOCUS
    case 0xC13743: {
        Instruction step(cpu, 0x20, 0x00007Eu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/open_menu.asm:235 JMP @UNKNOWN15
    case 0xC13746: {
        Instruction step(cpu, 0x4C, 0x0035FCu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/open_menu.asm:237 LDA #1
    case 0xC13749: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:237 LDA #1
    // Overlapping static entry reached from 0xC13749.
    case 0xC1374B: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu.asm:238 STA @VIRTUAL02
    case 0xC1374C: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:239 LDY #0
    case 0xC1374E: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/open_menu.asm:239 LDY #0
    // Overlapping static entry reached from 0xC1374E.
    case 0xC13750: {
        Instruction step(cpu, 0x00, 0x0000A5u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu.asm:240 LDA @LOCAL06
    case 0xC13751: {
        Instruction step(cpu, 0xA5, 0x00001Du, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:241 STA @VIRTUAL04
    case 0xC13753: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:242 LDX @VIRTUAL04
    case 0xC13755: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/open_menu.asm:243 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC13757: {
        Instruction step(cpu, 0xA5, 0x00001Fu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/open_menu.asm:243 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC13759: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/open_menu.asm:243 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC1375B: {
        Instruction step(cpu, 0xA5, 0x000021u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/open_menu.asm:243 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC1375D: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:244 LDA @VIRTUAL06
    case 0xC1375F: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:245 JSR OVERWORLD_USE_ITEM
    case 0xC13761: {
        Instruction step(cpu, 0x20, 0x00AF74u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/open_menu.asm:246 CMP #0
    case 0xC13764: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:246 CMP #0
    // Overlapping static entry reached from 0xC13764.
    case 0xC13766: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/overworld/open_menu.asm:247 BNEL @UNKNOWN75
    case 0xC13767: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/overworld/open_menu.asm:247 BNEL @UNKNOWN75
    case 0xC13769: {
        Instruction step(cpu, 0x4C, 0x003C16u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/open_menu.asm:248 SEP #PROC_FLAGS::ACCUM8
    case 0xC1376C: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/open_menu.asm:249 LDA #0
    case 0xC1376E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x008500u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:250 STA @VIRTUAL00
    case 0xC13770: {
        Instruction step(cpu, 0x85, 0x000000u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:250 STA @VIRTUAL00
    // Overlapping static entry reached from 0xC1376E.
    case 0xC13771: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu.asm:251 STA @LOCAL04
    case 0xC13772: {
        Instruction step(cpu, 0x85, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:252 JMP @UNKNOWN25
    case 0xC13774: {
        Instruction step(cpu, 0x4C, 0x0036E3u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/open_menu.asm:255 LDA #0
    case 0xC13777: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:255 LDA #0
    // Overlapping static entry reached from 0xC13777.
    case 0xC13779: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu.asm:256 JSR UNKNOWN_C10F40
    case 0xC1377A: {
        Instruction step(cpu, 0x20, 0x000F40u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/open_menu.asm:257 LDA #2
    case 0xC1377D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:257 LDA #2
    // Overlapping static entry reached from 0xC1377D.
    case 0xC1377F: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu.asm:258 JSR UNKNOWN_C10F40
    case 0xC13780: {
        Instruction step(cpu, 0x20, 0x000F40u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/open_menu.asm:259 SEP #PROC_FLAGS::ACCUM8
    case 0xC13783: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/open_menu.asm:260 LDA #$00FF
    case 0xC13785: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x008DFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:261 STA RESTORE_MENU_BACKUP
    case 0xC13787: {
        Instruction step(cpu, 0x8D, 0x005E79u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:261 STA RESTORE_MENU_BACKUP
    // Overlapping static entry reached from 0xC13785.
    case 0xC13788: {
        Instruction step(cpu, 0x79, 0x00C25Eu, 3u, AddressMode::AbsoluteIndexedY);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/open_menu.asm:262 REP #PROC_FLAGS::ACCUM8
    case 0xC1378A: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/open_menu.asm:262 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC13788.
    case 0xC1378B: {
        Instruction step(cpu, 0x20, 0x0001A9u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:735 LDA arg
    // Macro caller: src/overworld/open_menu.asm:263 CREATE_WINDOW_NEAR #WINDOW::TEXT_STANDARD
    case 0xC1378C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:735 LDA arg
    // Macro caller: src/overworld/open_menu.asm:263 CREATE_WINDOW_NEAR #WINDOW::TEXT_STANDARD
    // Overlapping static entry reached from 0xC1378C.
    case 0xC1378E: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/overworld/open_menu.asm:263 CREATE_WINDOW_NEAR #WINDOW::TEXT_STANDARD
    case 0xC1378F: {
        Instruction step(cpu, 0x20, 0x0004EEu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/open_menu.asm:264 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC13792: {
        Instruction step(cpu, 0xA5, 0x00001Fu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/open_menu.asm:264 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC13794: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/open_menu.asm:264 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC13796: {
        Instruction step(cpu, 0xA5, 0x000021u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/open_menu.asm:264 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC13798: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:265 LDA @VIRTUAL06
    case 0xC1379A: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:266 TAY
    case 0xC1379C: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/overworld/open_menu.asm:267 STY @LOCAL08
    case 0xC1379D: {
        Instruction step(cpu, 0x84, 0x000023u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/open_menu.asm:268 LDA @LOCAL06
    case 0xC1379F: {
        Instruction step(cpu, 0xA5, 0x00001Du, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:269 STA @VIRTUAL04
    case 0xC137A1: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:270 LDX @VIRTUAL04
    case 0xC137A3: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/open_menu.asm:271 TYA
    case 0xC137A5: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:272 JSL GET_CHARACTER_ITEM
    case 0xC137A6: {
        Instruction step(cpu, 0x22, 0xC3E977u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/open_menu.asm:273 STA @LOCAL06
    case 0xC137AA: {
        Instruction step(cpu, 0x85, 0x00001Du, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/open_menu.asm:274 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL0A
    case 0xC137AC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x005000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/open_menu.asm:274 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC137AC.
    case 0xC137AE: {
        Instruction step(cpu, 0x50, 0x000085u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_clear();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/open_menu.asm:274 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL0A
    case 0xC137AF: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/open_menu.asm:274 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC137AE.
    case 0xC137B0: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu.asm:274 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL0A
    case 0xC137B1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D5u : 0x0000D5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu.asm:274 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC137B1.
    case 0xC137B3: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/open_menu.asm:274 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL0A
    case 0xC137B4: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:275 LDA @LOCAL06
    case 0xC137B6: {
        Instruction step(cpu, 0xA5, 0x00001Du, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:276 LDY #.SIZEOF(item)
    case 0xC137B8: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000027u : 0x000027u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/open_menu.asm:276 LDY #.SIZEOF(item)
    // Overlapping static entry reached from 0xC137B8.
    case 0xC137BA: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu.asm:277 JSL MULT168
    case 0xC137BB: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/open_menu.asm:278 CLC
    case 0xC137BF: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/open_menu.asm:279 ADC #item::help_text
    case 0xC137C0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000023u : 0x000023u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/open_menu.asm:279 ADC #item::help_text
    // Overlapping static entry reached from 0xC137C0.
    case 0xC137C2: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu.asm:280 CLC
    case 0xC137C3: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/open_menu.asm:281 ADC @VIRTUAL0A
    case 0xC137C4: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/open_menu.asm:282 STA @VIRTUAL0A
    case 0xC137C6: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/open_menu.asm:283 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC137C8: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/open_menu.asm:283 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC137C8.
    case 0xC137CA: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/overworld/open_menu.asm:283 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC137CB: {
        Instruction step(cpu, 0xB7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1136 TAY
    // Macro caller: src/overworld/open_menu.asm:283 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC137CD: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/overworld/open_menu.asm:283 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC137CE: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1138 STA dest
    // Macro caller: src/overworld/open_menu.asm:283 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC137D0: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/overworld/open_menu.asm:283 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC137D2: {
        Instruction step(cpu, 0x84, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/open_menu.asm:284 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC137D4: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/open_menu.asm:284 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC137D6: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/open_menu.asm:284 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC137D8: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/open_menu.asm:284 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC137DA: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:285 JSL DISPLAY_TEXT
    case 0xC137DC: {
        Instruction step(cpu, 0x22, 0xC186B1u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/open_menu.asm:286 LDA #WINDOW::TEXT_STANDARD
    case 0xC137E0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:286 LDA #WINDOW::TEXT_STANDARD
    // Overlapping static entry reached from 0xC137E0.
    case 0xC137E2: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu.asm:287 JSL CLOSE_WINDOW
    case 0xC137E3: {
        Instruction step(cpu, 0x22, 0xC3E521u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/open_menu.asm:288 LDA #WINDOW::UNKNOWN00
    case 0xC137E7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:288 LDA #WINDOW::UNKNOWN00
    // Overlapping static entry reached from 0xC137E7.
    case 0xC137E9: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu.asm:289 JSR SET_WINDOW_FOCUS
    case 0xC137EA: {
        Instruction step(cpu, 0x20, 0x00007Eu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/open_menu.asm:290 SEP #PROC_FLAGS::ACCUM8
    case 0xC137ED: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/open_menu.asm:291 LDA #1
    case 0xC137EF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x008D01u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:292 STA SKIP_ADDING_COMMAND_TEXT
    case 0xC137F1: {
        Instruction step(cpu, 0x8D, 0x005E6Cu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:292 STA SKIP_ADDING_COMMAND_TEXT
    // Overlapping static entry reached from 0xC137EF.
    case 0xC137F2: {
        Instruction step(cpu, 0x6C, 0x00205Eu, 3u, AddressMode::AbsoluteIndirect);
        step.jump();
        return step.finish();
    }
    // src/overworld/open_menu.asm:293 JSR UNKNOWN_C133B0
    case 0xC137F4: {
        Instruction step(cpu, 0x20, 0x0033B0u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/open_menu.asm:295 LDX #2
    case 0xC137F7: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/open_menu.asm:295 LDX #2
    // Overlapping static entry reached from 0xC137F7.
    case 0xC137F9: {
        Instruction step(cpu, 0x00, 0x0000A4u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu.asm:296 LDY @LOCAL08
    case 0xC137FA: {
        Instruction step(cpu, 0xA4, 0x000023u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/open_menu.asm:297 TYA
    case 0xC137FC: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:298 JSR INVENTORY_GET_ITEM_NAME
    case 0xC137FD: {
        Instruction step(cpu, 0x20, 0x0098DEu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/open_menu.asm:299 LDA #WINDOW::INVENTORY_MENU
    case 0xC13800: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:299 LDA #WINDOW::INVENTORY_MENU
    // Overlapping static entry reached from 0xC13800.
    case 0xC13802: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu.asm:300 JSL CLOSE_WINDOW
    case 0xC13803: {
        Instruction step(cpu, 0x22, 0xC3E521u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/open_menu.asm:301 LDA #WINDOW::INVENTORY
    case 0xC13807: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:301 LDA #WINDOW::INVENTORY
    // Overlapping static entry reached from 0xC13807.
    case 0xC13809: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu.asm:302 JSR SET_WINDOW_FOCUS
    case 0xC1380A: {
        Instruction step(cpu, 0x20, 0x00007Eu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/open_menu.asm:303 JMP @UNKNOWN15
    case 0xC1380D: {
        Instruction step(cpu, 0x4C, 0x0035FCu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/open_menu.asm:305 LDA #WINDOW::INVENTORY
    case 0xC13810: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:305 LDA #WINDOW::INVENTORY
    // Overlapping static entry reached from 0xC13810.
    case 0xC13812: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu.asm:306 JSR SET_WINDOW_FOCUS
    case 0xC13813: {
        Instruction step(cpu, 0x20, 0x00007Eu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/open_menu.asm:307 JSR UNKNOWN_C10FA3
    case 0xC13816: {
        Instruction step(cpu, 0x20, 0x000FA3u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/open_menu.asm:308 LDA #1
    case 0xC13819: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:308 LDA #1
    // Overlapping static entry reached from 0xC13819.
    case 0xC1381B: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu.asm:309 STA @VIRTUAL02
    case 0xC1381C: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:310 LDA #3
    case 0xC1381E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:310 LDA #3
    // Overlapping static entry reached from 0xC1381E.
    case 0xC13820: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu.asm:311 JSR UNKNOWN_C193E7
    case 0xC13821: {
        Instruction step(cpu, 0x20, 0x0093E7u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/open_menu.asm:312 LOADPTR UNKNOWN_C133A7, @LOCAL00
    case 0xC13824: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000A7u : 0x0033A7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/open_menu.asm:312 LOADPTR UNKNOWN_C133A7, @LOCAL00
    // Overlapping static entry reached from 0xC13824.
    case 0xC13826: {
        Instruction step(cpu, 0x33, 0x000085u, 2u, AddressMode::StackRelativeIndirectIndexedY);
        step.and_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/open_menu.asm:312 LOADPTR UNKNOWN_C133A7, @LOCAL00
    case 0xC13827: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/open_menu.asm:312 LOADPTR UNKNOWN_C133A7, @LOCAL00
    // Overlapping static entry reached from 0xC13826.
    case 0xC13828: {
        Instruction step(cpu, 0x0E, 0x00C1A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu.asm:312 LOADPTR UNKNOWN_C133A7, @LOCAL00
    case 0xC13829: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C1u : 0x0000C1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu.asm:312 LOADPTR UNKNOWN_C133A7, @LOCAL00
    // Overlapping static entry reached from 0xC13829.
    case 0xC1382B: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/open_menu.asm:312 LOADPTR UNKNOWN_C133A7, @LOCAL00
    case 0xC1382C: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/open_menu.asm:313 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1382E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/open_menu.asm:313 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC1382E.
    case 0xC13830: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/overworld/open_menu.asm:313 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC13831: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/open_menu.asm:313 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC13833: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/open_menu.asm:313 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC13833.
    case 0xC13835: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/overworld/open_menu.asm:313 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC13836: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:314 LDX #1
    case 0xC13838: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/open_menu.asm:314 LDX #1
    // Overlapping static entry reached from 0xC13838.
    case 0xC1383A: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu.asm:315 LDA #2
    case 0xC1383B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:315 LDA #2
    // Overlapping static entry reached from 0xC1383B.
    case 0xC1383D: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu.asm:316 JSR CHAR_SELECT_PROMPT
    case 0xC1383E: {
        Instruction step(cpu, 0x20, 0x0027EFu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/open_menu.asm:317 STA @LOCAL03
    case 0xC13841: {
        Instruction step(cpu, 0x85, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:318 JSR UNKNOWN_C19437
    case 0xC13843: {
        Instruction step(cpu, 0x20, 0x009437u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/open_menu.asm:319 LDA #WINDOW::UNKNOWN2C
    case 0xC13846: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00002Cu : 0x00002Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:319 LDA #WINDOW::UNKNOWN2C
    // Overlapping static entry reached from 0xC13846.
    case 0xC13848: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu.asm:320 JSL CLOSE_WINDOW
    case 0xC13849: {
        Instruction step(cpu, 0x22, 0xC3E521u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/open_menu.asm:321 LDA @LOCAL03
    case 0xC1384D: {
        Instruction step(cpu, 0xA5, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:322 BNE @UNKNOWN35
    case 0xC1384F: {
        Instruction step(cpu, 0xD0, 0x00000Bu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/open_menu.asm:323 SEP #PROC_FLAGS::ACCUM8
    case 0xC13851: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/open_menu.asm:324 LDA #1
    case 0xC13853: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x008501u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:325 STA @VIRTUAL00
    case 0xC13855: {
        Instruction step(cpu, 0x85, 0x000000u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:325 STA @VIRTUAL00
    // Overlapping static entry reached from 0xC13853.
    case 0xC13856: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu.asm:326 STA @LOCAL04
    case 0xC13857: {
        Instruction step(cpu, 0x85, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:327 JMP @UNKNOWN25
    case 0xC13859: {
        Instruction step(cpu, 0x4C, 0x0036E3u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/open_menu.asm:329 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC1385C: {
        Instruction step(cpu, 0xA5, 0x00001Fu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/open_menu.asm:329 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC1385E: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/open_menu.asm:329 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC13860: {
        Instruction step(cpu, 0xA5, 0x000021u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/open_menu.asm:329 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC13862: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:865 LDA src
    // Macro caller: src/overworld/open_menu.asm:330 MOVE_INT1632 @LOCAL03, @VIRTUAL0A
    case 0xC13864: {
        Instruction step(cpu, 0xA5, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/overworld/open_menu.asm:330 MOVE_INT1632 @LOCAL03, @VIRTUAL0A
    case 0xC13866: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/overworld/open_menu.asm:330 MOVE_INT1632 @LOCAL03, @VIRTUAL0A
    case 0xC13868: {
        Instruction step(cpu, 0x64, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:745 LDA src + 2
    // Macro caller: src/overworld/open_menu.asm:331 CMP32 @VIRTUAL0A, @VIRTUAL06
    case 0xC1386A: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:746 CMP dest + 2
    // Macro caller: src/overworld/open_menu.asm:331 CMP32 @VIRTUAL0A, @VIRTUAL06
    case 0xC1386C: {
        Instruction step(cpu, 0xC5, 0x000008u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:747 BNE :+
    // Macro caller: src/overworld/open_menu.asm:331 CMP32 @VIRTUAL0A, @VIRTUAL06
    case 0xC1386E: {
        Instruction step(cpu, 0xD0, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:748 LDA src
    // Macro caller: src/overworld/open_menu.asm:331 CMP32 @VIRTUAL0A, @VIRTUAL06
    case 0xC13870: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:749 CMP dest
    // Macro caller: src/overworld/open_menu.asm:331 CMP32 @VIRTUAL0A, @VIRTUAL06
    case 0xC13872: {
        Instruction step(cpu, 0xC5, 0x000006u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:332 BEQ @UNKNOWN37
    case 0xC13874: {
        Instruction step(cpu, 0xF0, 0x000066u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/open_menu.asm:333 LDA @LOCAL06
    case 0xC13876: {
        Instruction step(cpu, 0xA5, 0x00001Du, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:334 STA @VIRTUAL04
    case 0xC13878: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:335 LDX @VIRTUAL04
    case 0xC1387A: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/open_menu.asm:336 LDA @VIRTUAL06
    case 0xC1387C: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:337 JSL GET_CHARACTER_ITEM
    case 0xC1387E: {
        Instruction step(cpu, 0x22, 0xC3E977u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/open_menu.asm:338 LDY #.SIZEOF(item)
    case 0xC13882: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000027u : 0x000027u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/open_menu.asm:338 LDY #.SIZEOF(item)
    // Overlapping static entry reached from 0xC13882.
    case 0xC13884: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu.asm:339 JSL MULT168
    case 0xC13885: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/open_menu.asm:341 CLC
    case 0xC13889: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/open_menu.asm:342 ADC #item::flags
    case 0xC1388A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00001Cu : 0x00001Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/open_menu.asm:342 ADC #item::flags
    // Overlapping static entry reached from 0xC1388A.
    case 0xC1388C: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu.asm:343 TAX
    case 0xC1388D: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/open_menu.asm:344 LDA f:ITEM_CONFIGURATION_TABLE,X
    case 0xC1388E: {
        Instruction step(cpu, 0xBF, 0xD55000u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:345 AND #$00FF
    case 0xC13892: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:345 AND #$00FF
    // Overlapping static entry reached from 0xC13892.
    case 0xC13894: {
        Instruction step(cpu, 0x00, 0x000029u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu.asm:346 AND #ITEM_FLAGS::CANNOT_GIVE
    case 0xC13895: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:346 AND #ITEM_FLAGS::CANNOT_GIVE
    // Overlapping static entry reached from 0xC13895.
    case 0xC13897: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu.asm:347 BEQ @UNKNOWN37
    case 0xC13898: {
        Instruction step(cpu, 0xF0, 0x000042u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:735 LDA arg
    // Macro caller: src/overworld/open_menu.asm:348 CREATE_WINDOW_NEAR #WINDOW::TEXT_STANDARD
    case 0xC1389A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:735 LDA arg
    // Macro caller: src/overworld/open_menu.asm:348 CREATE_WINDOW_NEAR #WINDOW::TEXT_STANDARD
    // Overlapping static entry reached from 0xC1389A.
    case 0xC1389C: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/overworld/open_menu.asm:348 CREATE_WINDOW_NEAR #WINDOW::TEXT_STANDARD
    case 0xC1389D: {
        Instruction step(cpu, 0x20, 0x0004EEu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/open_menu.asm:349 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC138A0: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/open_menu.asm:349 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC138A2: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/open_menu.asm:349 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC138A4: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/open_menu.asm:349 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC138A6: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:350 JSR SET_WORKING_MEMORY
    case 0xC138A8: {
        Instruction step(cpu, 0x20, 0x00045Du, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:865 LDA src
    // Macro caller: src/overworld/open_menu.asm:351 MOVE_INT1632 @VIRTUAL04, @VIRTUAL06
    case 0xC138AB: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/overworld/open_menu.asm:351 MOVE_INT1632 @VIRTUAL04, @VIRTUAL06
    case 0xC138AD: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/overworld/open_menu.asm:351 MOVE_INT1632 @VIRTUAL04, @VIRTUAL06
    case 0xC138AF: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/open_menu.asm:352 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC138B1: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/open_menu.asm:352 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC138B3: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/open_menu.asm:352 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC138B5: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/open_menu.asm:352 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC138B7: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:353 JSR SET_ARGUMENT_MEMORY
    case 0xC138B9: {
        Instruction step(cpu, 0x20, 0x000489u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/open_menu.asm:354 DISPLAY_TEXT_PTR MSG_SYS_GOODS_NOCARRY
    case 0xC138BC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C9u : 0x00C6C9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/open_menu.asm:354 DISPLAY_TEXT_PTR MSG_SYS_GOODS_NOCARRY
    // Overlapping static entry reached from 0xC138BC.
    case 0xC138BE: {
        Instruction step(cpu, 0xC6, 0x000085u, 2u, AddressMode::DirectPage);
        step.decrement();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/open_menu.asm:354 DISPLAY_TEXT_PTR MSG_SYS_GOODS_NOCARRY
    case 0xC138BF: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/open_menu.asm:354 DISPLAY_TEXT_PTR MSG_SYS_GOODS_NOCARRY
    // Overlapping static entry reached from 0xC138BE.
    case 0xC138C0: {
        Instruction step(cpu, 0x0E, 0x00C7A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu.asm:354 DISPLAY_TEXT_PTR MSG_SYS_GOODS_NOCARRY
    case 0xC138C1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu.asm:354 DISPLAY_TEXT_PTR MSG_SYS_GOODS_NOCARRY
    // Overlapping static entry reached from 0xC138C1.
    case 0xC138C3: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/open_menu.asm:354 DISPLAY_TEXT_PTR MSG_SYS_GOODS_NOCARRY
    case 0xC138C4: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:210 JSL DISPLAY_TEXT
    // Macro caller: src/overworld/open_menu.asm:354 DISPLAY_TEXT_PTR MSG_SYS_GOODS_NOCARRY
    case 0xC138C6: {
        Instruction step(cpu, 0x22, 0xC186B1u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/open_menu.asm:355 LDA #WINDOW::TEXT_STANDARD
    case 0xC138CA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:355 LDA #WINDOW::TEXT_STANDARD
    // Overlapping static entry reached from 0xC138CA.
    case 0xC138CC: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu.asm:356 JSL CLOSE_WINDOW
    case 0xC138CD: {
        Instruction step(cpu, 0x22, 0xC3E521u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/open_menu.asm:357 SEP #PROC_FLAGS::ACCUM8
    case 0xC138D1: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/open_menu.asm:358 LDA #1
    case 0xC138D3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x008501u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:359 STA @VIRTUAL00
    case 0xC138D5: {
        Instruction step(cpu, 0x85, 0x000000u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:359 STA @VIRTUAL00
    // Overlapping static entry reached from 0xC138D3.
    case 0xC138D6: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu.asm:360 STA @LOCAL04
    case 0xC138D7: {
        Instruction step(cpu, 0x85, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:361 JMP @UNKNOWN25
    case 0xC138D9: {
        Instruction step(cpu, 0x4C, 0x0036E3u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/open_menu.asm:363 LDX #0
    case 0xC138DC: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/open_menu.asm:363 LDX #0
    // Overlapping static entry reached from 0xC138DC.
    case 0xC138DE: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu.asm:364 STX @LOCAL02
    case 0xC138DF: {
        Instruction step(cpu, 0x86, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/open_menu.asm:365 LDA @VIRTUAL06
    case 0xC138E1: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:366 DEC
    case 0xC138E3: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/overworld/open_menu.asm:367 LDY #.SIZEOF(char_struct)
    case 0xC138E4: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Fu : 0x00005Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/open_menu.asm:367 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC138E4.
    case 0xC138E6: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu.asm:368 JSL MULT168
    case 0xC138E7: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/open_menu.asm:370 TAX
    case 0xC138EB: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/open_menu.asm:371 LDA PARTY_CHARACTERS + char_struct::afflictions + STATUS_GROUP::PERSISTENT_EASYHEAL,X
    case 0xC138EC: {
        Instruction step(cpu, 0xBD, 0x0099DCu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:372 AND #$00FF
    case 0xC138EF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:372 AND #$00FF
    // Overlapping static entry reached from 0xC138EF.
    case 0xC138F1: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu.asm:373 TAY
    case 0xC138F2: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/overworld/open_menu.asm:374 CPY #STATUS_0::UNCONSCIOUS
    case 0xC138F3: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/overworld/open_menu.asm:374 CPY #STATUS_0::UNCONSCIOUS
    // Overlapping static entry reached from 0xC138F3.
    case 0xC138F5: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu.asm:375 BEQ @UNKNOWN38
    case 0xC138F6: {
        Instruction step(cpu, 0xF0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/open_menu.asm:376 CPY #STATUS_0::DIAMONDIZED
    case 0xC138F8: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/overworld/open_menu.asm:376 CPY #STATUS_0::DIAMONDIZED
    // Overlapping static entry reached from 0xC138F8.
    case 0xC138FA: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu.asm:377 BNE @UNKNOWN39
    case 0xC138FB: {
        Instruction step(cpu, 0xD0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/open_menu.asm:379 LDX #5
    case 0xC138FD: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000005u : 0x000005u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/open_menu.asm:379 LDX #5
    // Overlapping static entry reached from 0xC138FD.
    case 0xC138FF: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu.asm:380 STX @LOCAL02
    case 0xC13900: {
        Instruction step(cpu, 0x86, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:865 LDA src
    // Macro caller: src/overworld/open_menu.asm:382 MOVE_INT1632 @LOCAL03, @VIRTUAL0A
    case 0xC13902: {
        Instruction step(cpu, 0xA5, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/overworld/open_menu.asm:382 MOVE_INT1632 @LOCAL03, @VIRTUAL0A
    case 0xC13904: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/overworld/open_menu.asm:382 MOVE_INT1632 @LOCAL03, @VIRTUAL0A
    case 0xC13906: {
        Instruction step(cpu, 0x64, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:745 LDA src + 2
    // Macro caller: src/overworld/open_menu.asm:383 CMP32 @VIRTUAL0A, @VIRTUAL06
    case 0xC13908: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:746 CMP dest + 2
    // Macro caller: src/overworld/open_menu.asm:383 CMP32 @VIRTUAL0A, @VIRTUAL06
    case 0xC1390A: {
        Instruction step(cpu, 0xC5, 0x000008u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:747 BNE :+
    // Macro caller: src/overworld/open_menu.asm:383 CMP32 @VIRTUAL0A, @VIRTUAL06
    case 0xC1390C: {
        Instruction step(cpu, 0xD0, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:748 LDA src
    // Macro caller: src/overworld/open_menu.asm:383 CMP32 @VIRTUAL0A, @VIRTUAL06
    case 0xC1390E: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:749 CMP dest
    // Macro caller: src/overworld/open_menu.asm:383 CMP32 @VIRTUAL0A, @VIRTUAL06
    case 0xC13910: {
        Instruction step(cpu, 0xC5, 0x000006u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:385 BEQ @UNKNOWN43
    case 0xC13912: {
        Instruction step(cpu, 0xF0, 0x000037u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/open_menu.asm:386 LDX @LOCAL02
    case 0xC13914: {
        Instruction step(cpu, 0xA6, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/open_menu.asm:387 INX
    case 0xC13916: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/overworld/open_menu.asm:388 STX @LOCAL02
    case 0xC13917: {
        Instruction step(cpu, 0x86, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/open_menu.asm:389 LDA @LOCAL03
    case 0xC13919: {
        Instruction step(cpu, 0xA5, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:390 JSL FIND_INVENTORY_SPACE2
    case 0xC1391B: {
        Instruction step(cpu, 0x22, 0xC4572Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/open_menu.asm:391 CMP #0
    case 0xC1391F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:391 CMP #0
    // Overlapping static entry reached from 0xC1391F.
    case 0xC13921: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu.asm:392 BEQ @UNKNOWN41
    case 0xC13922: {
        Instruction step(cpu, 0xF0, 0x000006u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/open_menu.asm:393 LDX @LOCAL02
    case 0xC13924: {
        Instruction step(cpu, 0xA6, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/open_menu.asm:394 INX
    case 0xC13926: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/overworld/open_menu.asm:395 INX
    case 0xC13927: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/overworld/open_menu.asm:396 STX @LOCAL02
    case 0xC13928: {
        Instruction step(cpu, 0x86, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/open_menu.asm:398 LDA @LOCAL03
    case 0xC1392A: {
        Instruction step(cpu, 0xA5, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:399 DEC
    case 0xC1392C: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/overworld/open_menu.asm:400 LDY #.SIZEOF(char_struct)
    case 0xC1392D: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Fu : 0x00005Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/open_menu.asm:400 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1392D.
    case 0xC1392F: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu.asm:401 JSL MULT168
    case 0xC13930: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/open_menu.asm:402 TAX
    case 0xC13934: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/open_menu.asm:403 LDA PARTY_CHARACTERS + char_struct::afflictions + STATUS_GROUP::PERSISTENT_EASYHEAL,X
    case 0xC13935: {
        Instruction step(cpu, 0xBD, 0x0099DCu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:404 AND #$00FF
    case 0xC13938: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:404 AND #$00FF
    // Overlapping static entry reached from 0xC13938.
    case 0xC1393A: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu.asm:405 TAY
    case 0xC1393B: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/overworld/open_menu.asm:406 CPY #STATUS_0::UNCONSCIOUS
    case 0xC1393C: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/overworld/open_menu.asm:406 CPY #STATUS_0::UNCONSCIOUS
    // Overlapping static entry reached from 0xC1393C.
    case 0xC1393E: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu.asm:407 BEQ @UNKNOWN42
    case 0xC1393F: {
        Instruction step(cpu, 0xF0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/open_menu.asm:408 CPY #STATUS_0::DIAMONDIZED
    case 0xC13941: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/overworld/open_menu.asm:408 CPY #STATUS_0::DIAMONDIZED
    // Overlapping static entry reached from 0xC13941.
    case 0xC13943: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu.asm:409 BNE @UNKNOWN43
    case 0xC13944: {
        Instruction step(cpu, 0xD0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/open_menu.asm:411 LDX @LOCAL02
    case 0xC13946: {
        Instruction step(cpu, 0xA6, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/open_menu.asm:412 INX
    case 0xC13948: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/overworld/open_menu.asm:413 STX @LOCAL02
    case 0xC13949: {
        Instruction step(cpu, 0x86, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:735 LDA arg
    // Macro caller: src/overworld/open_menu.asm:415 CREATE_WINDOW_NEAR #WINDOW::TEXT_STANDARD
    case 0xC1394B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:735 LDA arg
    // Macro caller: src/overworld/open_menu.asm:415 CREATE_WINDOW_NEAR #WINDOW::TEXT_STANDARD
    // Overlapping static entry reached from 0xC1394B.
    case 0xC1394D: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/overworld/open_menu.asm:415 CREATE_WINDOW_NEAR #WINDOW::TEXT_STANDARD
    case 0xC1394E: {
        Instruction step(cpu, 0x20, 0x0004EEu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/open_menu.asm:416 JSR GET_ACTIVE_WINDOW_ADDRESS
    case 0xC13951: {
        Instruction step(cpu, 0x20, 0x000301u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/open_menu.asm:417 STA @LOCAL08
    case 0xC13954: {
        Instruction step(cpu, 0x85, 0x000023u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:418 CLC
    case 0xC13956: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/open_menu.asm:419 ADC #window_stats::working_memory
    case 0xC13957: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000017u : 0x000017u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/open_menu.asm:419 ADC #window_stats::working_memory
    // Overlapping static entry reached from 0xC13957.
    case 0xC13959: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu.asm:420 TAY
    case 0xC1395A: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1075 LDA src
    // Macro caller: src/overworld/open_menu.asm:421 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC1395B: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/overworld/open_menu.asm:421 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC1395D: {
        Instruction step(cpu, 0x99, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/overworld/open_menu.asm:421 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC13960: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/overworld/open_menu.asm:421 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC13962: {
        Instruction step(cpu, 0x99, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:865 LDA src
    // Macro caller: src/overworld/open_menu.asm:422 MOVE_INT1632 @LOCAL03, @VIRTUAL0A
    case 0xC13965: {
        Instruction step(cpu, 0xA5, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/overworld/open_menu.asm:422 MOVE_INT1632 @LOCAL03, @VIRTUAL0A
    case 0xC13967: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/overworld/open_menu.asm:422 MOVE_INT1632 @LOCAL03, @VIRTUAL0A
    case 0xC13969: {
        Instruction step(cpu, 0x64, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/open_menu.asm:423 LDA @LOCAL08
    case 0xC1396B: {
        Instruction step(cpu, 0xA5, 0x000023u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:424 CLC
    case 0xC1396D: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/open_menu.asm:425 ADC #window_stats::working_memory_storage
    case 0xC1396E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000021u : 0x000021u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/open_menu.asm:425 ADC #window_stats::working_memory_storage
    // Overlapping static entry reached from 0xC1396E.
    case 0xC13970: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu.asm:426 TAY
    case 0xC13971: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1075 LDA src
    // Macro caller: src/overworld/open_menu.asm:427 MOVE_INT_YPTRDEST @VIRTUAL0A, __BSS_START__
    case 0xC13972: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/overworld/open_menu.asm:427 MOVE_INT_YPTRDEST @VIRTUAL0A, __BSS_START__
    case 0xC13974: {
        Instruction step(cpu, 0x99, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/overworld/open_menu.asm:427 MOVE_INT_YPTRDEST @VIRTUAL0A, __BSS_START__
    case 0xC13977: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/overworld/open_menu.asm:427 MOVE_INT_YPTRDEST @VIRTUAL0A, __BSS_START__
    case 0xC13979: {
        Instruction step(cpu, 0x99, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:428 LDA @LOCAL06
    case 0xC1397C: {
        Instruction step(cpu, 0xA5, 0x00001Du, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:429 STA @VIRTUAL04
    case 0xC1397E: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/overworld/open_menu.asm:430 STORE_INT1632 @VIRTUAL0A
    case 0xC13980: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/overworld/open_menu.asm:430 STORE_INT1632 @VIRTUAL0A
    case 0xC13982: {
        Instruction step(cpu, 0x64, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/open_menu.asm:431 LDA @LOCAL08
    case 0xC13984: {
        Instruction step(cpu, 0xA5, 0x000023u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:432 CLC
    case 0xC13986: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/open_menu.asm:433 ADC #window_stats::argument_memory
    case 0xC13987: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00001Bu : 0x00001Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/open_menu.asm:433 ADC #window_stats::argument_memory
    // Overlapping static entry reached from 0xC13987.
    case 0xC13989: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu.asm:434 TAY
    case 0xC1398A: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1075 LDA src
    // Macro caller: src/overworld/open_menu.asm:435 MOVE_INT_YPTRDEST @VIRTUAL0A, __BSS_START__
    case 0xC1398B: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/overworld/open_menu.asm:435 MOVE_INT_YPTRDEST @VIRTUAL0A, __BSS_START__
    case 0xC1398D: {
        Instruction step(cpu, 0x99, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/overworld/open_menu.asm:435 MOVE_INT_YPTRDEST @VIRTUAL0A, __BSS_START__
    case 0xC13990: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/overworld/open_menu.asm:435 MOVE_INT_YPTRDEST @VIRTUAL0A, __BSS_START__
    case 0xC13992: {
        Instruction step(cpu, 0x99, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:436 LDX @LOCAL02
    case 0xC13995: {
        Instruction step(cpu, 0xA6, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/open_menu.asm:437 TXA
    case 0xC13997: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:438 BEQ @GOODS_GIVE_SELF_ALIVE_TEXT
    case 0xC13998: {
        Instruction step(cpu, 0xF0, 0x000045u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/open_menu.asm:439 CMP #1
    case 0xC1399A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:439 CMP #1
    // Overlapping static entry reached from 0xC1399A.
    case 0xC1399C: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu.asm:440 BEQ @GOODS_GIVE_ALIVE_TO_ALIVE_FAIL_TEXT
    case 0xC1399D: {
        Instruction step(cpu, 0xF0, 0x000064u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/open_menu.asm:441 CMP #2
    case 0xC1399F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:441 CMP #2
    // Overlapping static entry reached from 0xC1399F.
    case 0xC139A1: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu.asm:442 BEQ @GOODS_GIVE_ALIVE_TO_DEAD_FAIL_TEXT
    case 0xC139A2: {
        Instruction step(cpu, 0xF0, 0x000070u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/open_menu.asm:443 CMP #3
    case 0xC139A4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:443 CMP #3
    // Overlapping static entry reached from 0xC139A4.
    case 0xC139A6: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/open_menu.asm:444 BEQL @GOODS_GIVE_ALIVE_TO_ALIVE_SUCC_TEXT
    case 0xC139A7: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/open_menu.asm:444 BEQL @GOODS_GIVE_ALIVE_TO_ALIVE_SUCC_TEXT
    case 0xC139A9: {
        Instruction step(cpu, 0x4C, 0x003A25u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/open_menu.asm:445 CMP #4
    case 0xC139AC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:445 CMP #4
    // Overlapping static entry reached from 0xC139AC.
    case 0xC139AE: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/open_menu.asm:446 BEQL @GOODS_GIVE_ALIVE_TO_DEAD_SUCC_TEXT
    case 0xC139AF: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/open_menu.asm:446 BEQL @GOODS_GIVE_ALIVE_TO_DEAD_SUCC_TEXT
    case 0xC139B1: {
        Instruction step(cpu, 0x4C, 0x003A49u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/open_menu.asm:447 CMP #5
    case 0xC139B4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000005u : 0x000005u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:447 CMP #5
    // Overlapping static entry reached from 0xC139B4.
    case 0xC139B6: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/open_menu.asm:448 BEQL @GOODS_GIVE_SELF_DEAD_TEXT
    case 0xC139B7: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/open_menu.asm:448 BEQL @GOODS_GIVE_SELF_DEAD_TEXT
    case 0xC139B9: {
        Instruction step(cpu, 0x4C, 0x003A6Du, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/open_menu.asm:449 CMP #6
    case 0xC139BC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:449 CMP #6
    // Overlapping static entry reached from 0xC139BC.
    case 0xC139BE: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/open_menu.asm:450 BEQL @GOODS_GIVE_DEAD_TO_ALIVE_FAIL_TEXT
    case 0xC139BF: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/open_menu.asm:450 BEQL @GOODS_GIVE_DEAD_TO_ALIVE_FAIL_TEXT
    case 0xC139C1: {
        Instruction step(cpu, 0x4C, 0x003A90u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/open_menu.asm:451 CMP #7
    case 0xC139C4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000007u : 0x000007u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:451 CMP #7
    // Overlapping static entry reached from 0xC139C4.
    case 0xC139C6: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/open_menu.asm:452 BEQL @GOODS_GIVE_DEAD_TO_DEAD_FAIL_TEXT
    case 0xC139C7: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/open_menu.asm:452 BEQL @GOODS_GIVE_DEAD_TO_DEAD_FAIL_TEXT
    case 0xC139C9: {
        Instruction step(cpu, 0x4C, 0x003AA0u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/open_menu.asm:453 CMP #8
    case 0xC139CC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:453 CMP #8
    // Overlapping static entry reached from 0xC139CC.
    case 0xC139CE: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/open_menu.asm:454 BEQL @GOODS_GIVE_DEAD_TO_ALIVE_SUCC_TEXT
    case 0xC139CF: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/open_menu.asm:454 BEQL @GOODS_GIVE_DEAD_TO_ALIVE_SUCC_TEXT
    case 0xC139D1: {
        Instruction step(cpu, 0x4C, 0x003AB0u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/open_menu.asm:455 CMP #9
    case 0xC139D4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000009u : 0x000009u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:455 CMP #9
    // Overlapping static entry reached from 0xC139D4.
    case 0xC139D6: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/open_menu.asm:456 BEQL @GOODS_GIVE_DEAD_TO_DEAD_SUCC_TEXT
    case 0xC139D7: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/open_menu.asm:456 BEQL @GOODS_GIVE_DEAD_TO_DEAD_SUCC_TEXT
    case 0xC139D9: {
        Instruction step(cpu, 0x4C, 0x003AD3u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/open_menu.asm:457 JMP @GOODS_GIVE_INVALID_TEXT
    case 0xC139DC: {
        Instruction step(cpu, 0x4C, 0x003AF6u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/open_menu.asm:459 DISPLAY_TEXT_PTR MSG_SYS_CARRY_SELF_ALIVE
    case 0xC139DF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FAu : 0x00E3FAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/open_menu.asm:459 DISPLAY_TEXT_PTR MSG_SYS_CARRY_SELF_ALIVE
    // Overlapping static entry reached from 0xC139DF.
    case 0xC139E1: {
        Instruction step(cpu, 0xE3, 0x000085u, 2u, AddressMode::StackRelative);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/open_menu.asm:459 DISPLAY_TEXT_PTR MSG_SYS_CARRY_SELF_ALIVE
    case 0xC139E2: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/open_menu.asm:459 DISPLAY_TEXT_PTR MSG_SYS_CARRY_SELF_ALIVE
    // Overlapping static entry reached from 0xC139E1.
    case 0xC139E3: {
        Instruction step(cpu, 0x0E, 0x00C7A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu.asm:459 DISPLAY_TEXT_PTR MSG_SYS_CARRY_SELF_ALIVE
    case 0xC139E4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu.asm:459 DISPLAY_TEXT_PTR MSG_SYS_CARRY_SELF_ALIVE
    // Overlapping static entry reached from 0xC139E4.
    case 0xC139E6: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/open_menu.asm:459 DISPLAY_TEXT_PTR MSG_SYS_CARRY_SELF_ALIVE
    case 0xC139E7: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:210 JSL DISPLAY_TEXT
    // Macro caller: src/overworld/open_menu.asm:459 DISPLAY_TEXT_PTR MSG_SYS_CARRY_SELF_ALIVE
    case 0xC139E9: {
        Instruction step(cpu, 0x22, 0xC186B1u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/open_menu.asm:460 LDY @VIRTUAL04
    case 0xC139ED: {
        Instruction step(cpu, 0xA4, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/open_menu.asm:461 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC139EF: {
        Instruction step(cpu, 0xA5, 0x00001Fu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/open_menu.asm:461 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC139F1: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/open_menu.asm:461 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC139F3: {
        Instruction step(cpu, 0xA5, 0x000021u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/open_menu.asm:461 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC139F5: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:462 LDA @VIRTUAL06
    case 0xC139F7: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:463 TAX
    case 0xC139F9: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/open_menu.asm:464 LDA @LOCAL03
    case 0xC139FA: {
        Instruction step(cpu, 0xA5, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:465 JSL UNKNOWN_C22A3A
    case 0xC139FC: {
        Instruction step(cpu, 0x22, 0xC22A3Au, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/open_menu.asm:466 JMP @UNKNOWN62
    case 0xC13A00: {
        Instruction step(cpu, 0x4C, 0x003AF8u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/open_menu.asm:468 DISPLAY_TEXT_PTR MSG_SYS_CARRY_FAIL_OTHER_ALIVE_ALIVE
    case 0xC13A03: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00002Cu : 0x00E42Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/open_menu.asm:468 DISPLAY_TEXT_PTR MSG_SYS_CARRY_FAIL_OTHER_ALIVE_ALIVE
    // Overlapping static entry reached from 0xC13A03.
    case 0xC13A05: {
        Instruction step(cpu, 0xE4, 0x000085u, 2u, AddressMode::DirectPage);
        step.compare_x();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/open_menu.asm:468 DISPLAY_TEXT_PTR MSG_SYS_CARRY_FAIL_OTHER_ALIVE_ALIVE
    case 0xC13A06: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/open_menu.asm:468 DISPLAY_TEXT_PTR MSG_SYS_CARRY_FAIL_OTHER_ALIVE_ALIVE
    // Overlapping static entry reached from 0xC13A05.
    case 0xC13A07: {
        Instruction step(cpu, 0x0E, 0x00C7A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu.asm:468 DISPLAY_TEXT_PTR MSG_SYS_CARRY_FAIL_OTHER_ALIVE_ALIVE
    case 0xC13A08: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu.asm:468 DISPLAY_TEXT_PTR MSG_SYS_CARRY_FAIL_OTHER_ALIVE_ALIVE
    // Overlapping static entry reached from 0xC13A08.
    case 0xC13A0A: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/open_menu.asm:468 DISPLAY_TEXT_PTR MSG_SYS_CARRY_FAIL_OTHER_ALIVE_ALIVE
    case 0xC13A0B: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:210 JSL DISPLAY_TEXT
    // Macro caller: src/overworld/open_menu.asm:468 DISPLAY_TEXT_PTR MSG_SYS_CARRY_FAIL_OTHER_ALIVE_ALIVE
    case 0xC13A0D: {
        Instruction step(cpu, 0x22, 0xC186B1u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/open_menu.asm:469 JMP @UNKNOWN62
    case 0xC13A11: {
        Instruction step(cpu, 0x4C, 0x003AF8u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/open_menu.asm:471 DISPLAY_TEXT_PTR MSG_SYS_CARRY_FAIL_OTHER_ALIVE_DEAD
    case 0xC13A14: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000068u : 0x00E468u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/open_menu.asm:471 DISPLAY_TEXT_PTR MSG_SYS_CARRY_FAIL_OTHER_ALIVE_DEAD
    // Overlapping static entry reached from 0xC13A14.
    case 0xC13A16: {
        Instruction step(cpu, 0xE4, 0x000085u, 2u, AddressMode::DirectPage);
        step.compare_x();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/open_menu.asm:471 DISPLAY_TEXT_PTR MSG_SYS_CARRY_FAIL_OTHER_ALIVE_DEAD
    case 0xC13A17: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/open_menu.asm:471 DISPLAY_TEXT_PTR MSG_SYS_CARRY_FAIL_OTHER_ALIVE_DEAD
    // Overlapping static entry reached from 0xC13A16.
    case 0xC13A18: {
        Instruction step(cpu, 0x0E, 0x00C7A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu.asm:471 DISPLAY_TEXT_PTR MSG_SYS_CARRY_FAIL_OTHER_ALIVE_DEAD
    case 0xC13A19: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu.asm:471 DISPLAY_TEXT_PTR MSG_SYS_CARRY_FAIL_OTHER_ALIVE_DEAD
    // Overlapping static entry reached from 0xC13A19.
    case 0xC13A1B: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/open_menu.asm:471 DISPLAY_TEXT_PTR MSG_SYS_CARRY_FAIL_OTHER_ALIVE_DEAD
    case 0xC13A1C: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:210 JSL DISPLAY_TEXT
    // Macro caller: src/overworld/open_menu.asm:471 DISPLAY_TEXT_PTR MSG_SYS_CARRY_FAIL_OTHER_ALIVE_DEAD
    case 0xC13A1E: {
        Instruction step(cpu, 0x22, 0xC186B1u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/open_menu.asm:472 JMP @UNKNOWN62
    case 0xC13A22: {
        Instruction step(cpu, 0x4C, 0x003AF8u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/open_menu.asm:474 DISPLAY_TEXT_PTR MSG_SYS_CARRY_OTHER_ALIVE_ALIVE
    case 0xC13A25: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000A4u : 0x00E4A4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/open_menu.asm:474 DISPLAY_TEXT_PTR MSG_SYS_CARRY_OTHER_ALIVE_ALIVE
    // Overlapping static entry reached from 0xC13A25.
    case 0xC13A27: {
        Instruction step(cpu, 0xE4, 0x000085u, 2u, AddressMode::DirectPage);
        step.compare_x();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/open_menu.asm:474 DISPLAY_TEXT_PTR MSG_SYS_CARRY_OTHER_ALIVE_ALIVE
    case 0xC13A28: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/open_menu.asm:474 DISPLAY_TEXT_PTR MSG_SYS_CARRY_OTHER_ALIVE_ALIVE
    // Overlapping static entry reached from 0xC13A27.
    case 0xC13A29: {
        Instruction step(cpu, 0x0E, 0x00C7A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu.asm:474 DISPLAY_TEXT_PTR MSG_SYS_CARRY_OTHER_ALIVE_ALIVE
    case 0xC13A2A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu.asm:474 DISPLAY_TEXT_PTR MSG_SYS_CARRY_OTHER_ALIVE_ALIVE
    // Overlapping static entry reached from 0xC13A2A.
    case 0xC13A2C: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/open_menu.asm:474 DISPLAY_TEXT_PTR MSG_SYS_CARRY_OTHER_ALIVE_ALIVE
    case 0xC13A2D: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:210 JSL DISPLAY_TEXT
    // Macro caller: src/overworld/open_menu.asm:474 DISPLAY_TEXT_PTR MSG_SYS_CARRY_OTHER_ALIVE_ALIVE
    case 0xC13A2F: {
        Instruction step(cpu, 0x22, 0xC186B1u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/open_menu.asm:475 LDY @VIRTUAL04
    case 0xC13A33: {
        Instruction step(cpu, 0xA4, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/open_menu.asm:476 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC13A35: {
        Instruction step(cpu, 0xA5, 0x00001Fu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/open_menu.asm:476 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC13A37: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/open_menu.asm:476 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC13A39: {
        Instruction step(cpu, 0xA5, 0x000021u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/open_menu.asm:476 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC13A3B: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:477 LDA @VIRTUAL06
    case 0xC13A3D: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:478 TAX
    case 0xC13A3F: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/open_menu.asm:479 LDA @LOCAL03
    case 0xC13A40: {
        Instruction step(cpu, 0xA5, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:480 JSL UNKNOWN_C22A3A
    case 0xC13A42: {
        Instruction step(cpu, 0x22, 0xC22A3Au, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/open_menu.asm:481 JMP @UNKNOWN62
    case 0xC13A46: {
        Instruction step(cpu, 0x4C, 0x003AF8u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/open_menu.asm:483 DISPLAY_TEXT_PTR MSG_SYS_CARRY_OTHER_ALIVE_DEAD
    case 0xC13A49: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C3u : 0x00E4C3u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/open_menu.asm:483 DISPLAY_TEXT_PTR MSG_SYS_CARRY_OTHER_ALIVE_DEAD
    // Overlapping static entry reached from 0xC13A49.
    case 0xC13A4B: {
        Instruction step(cpu, 0xE4, 0x000085u, 2u, AddressMode::DirectPage);
        step.compare_x();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/open_menu.asm:483 DISPLAY_TEXT_PTR MSG_SYS_CARRY_OTHER_ALIVE_DEAD
    case 0xC13A4C: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/open_menu.asm:483 DISPLAY_TEXT_PTR MSG_SYS_CARRY_OTHER_ALIVE_DEAD
    // Overlapping static entry reached from 0xC13A4B.
    case 0xC13A4D: {
        Instruction step(cpu, 0x0E, 0x00C7A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu.asm:483 DISPLAY_TEXT_PTR MSG_SYS_CARRY_OTHER_ALIVE_DEAD
    case 0xC13A4E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu.asm:483 DISPLAY_TEXT_PTR MSG_SYS_CARRY_OTHER_ALIVE_DEAD
    // Overlapping static entry reached from 0xC13A4E.
    case 0xC13A50: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/open_menu.asm:483 DISPLAY_TEXT_PTR MSG_SYS_CARRY_OTHER_ALIVE_DEAD
    case 0xC13A51: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:210 JSL DISPLAY_TEXT
    // Macro caller: src/overworld/open_menu.asm:483 DISPLAY_TEXT_PTR MSG_SYS_CARRY_OTHER_ALIVE_DEAD
    case 0xC13A53: {
        Instruction step(cpu, 0x22, 0xC186B1u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/open_menu.asm:484 LDY @VIRTUAL04
    case 0xC13A57: {
        Instruction step(cpu, 0xA4, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/open_menu.asm:485 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC13A59: {
        Instruction step(cpu, 0xA5, 0x00001Fu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/open_menu.asm:485 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC13A5B: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/open_menu.asm:485 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC13A5D: {
        Instruction step(cpu, 0xA5, 0x000021u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/open_menu.asm:485 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC13A5F: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:486 LDA @VIRTUAL06
    case 0xC13A61: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:487 TAX
    case 0xC13A63: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/open_menu.asm:488 LDA @LOCAL03
    case 0xC13A64: {
        Instruction step(cpu, 0xA5, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:489 JSL UNKNOWN_C22A3A
    case 0xC13A66: {
        Instruction step(cpu, 0x22, 0xC22A3Au, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/open_menu.asm:490 JMP @UNKNOWN62
    case 0xC13A6A: {
        Instruction step(cpu, 0x4C, 0x003AF8u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/open_menu.asm:492 DISPLAY_TEXT_PTR MSG_SYS_CARRY_SELF_DEAD
    case 0xC13A6D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E9u : 0x00E4E9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/open_menu.asm:492 DISPLAY_TEXT_PTR MSG_SYS_CARRY_SELF_DEAD
    // Overlapping static entry reached from 0xC13A6D.
    case 0xC13A6F: {
        Instruction step(cpu, 0xE4, 0x000085u, 2u, AddressMode::DirectPage);
        step.compare_x();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/open_menu.asm:492 DISPLAY_TEXT_PTR MSG_SYS_CARRY_SELF_DEAD
    case 0xC13A70: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/open_menu.asm:492 DISPLAY_TEXT_PTR MSG_SYS_CARRY_SELF_DEAD
    // Overlapping static entry reached from 0xC13A6F.
    case 0xC13A71: {
        Instruction step(cpu, 0x0E, 0x00C7A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu.asm:492 DISPLAY_TEXT_PTR MSG_SYS_CARRY_SELF_DEAD
    case 0xC13A72: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu.asm:492 DISPLAY_TEXT_PTR MSG_SYS_CARRY_SELF_DEAD
    // Overlapping static entry reached from 0xC13A72.
    case 0xC13A74: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/open_menu.asm:492 DISPLAY_TEXT_PTR MSG_SYS_CARRY_SELF_DEAD
    case 0xC13A75: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:210 JSL DISPLAY_TEXT
    // Macro caller: src/overworld/open_menu.asm:492 DISPLAY_TEXT_PTR MSG_SYS_CARRY_SELF_DEAD
    case 0xC13A77: {
        Instruction step(cpu, 0x22, 0xC186B1u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/open_menu.asm:493 LDY @VIRTUAL04
    case 0xC13A7B: {
        Instruction step(cpu, 0xA4, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/open_menu.asm:494 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC13A7D: {
        Instruction step(cpu, 0xA5, 0x00001Fu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/open_menu.asm:494 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC13A7F: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/open_menu.asm:494 MOVE_INT @LOCAL07, @VIRTUAL06
    // Overlapping static entry reached from 0xC14C47.
    case 0xC13A80: {
        Instruction step(cpu, 0x06, 0x0000A5u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/open_menu.asm:494 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC13A81: {
        Instruction step(cpu, 0xA5, 0x000021u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/open_menu.asm:494 MOVE_INT @LOCAL07, @VIRTUAL06
    // Overlapping static entry reached from 0xC13A80.
    case 0xC13A82: {
        Instruction step(cpu, 0x21, 0x000085u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.and_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/open_menu.asm:494 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC13A83: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/open_menu.asm:494 MOVE_INT @LOCAL07, @VIRTUAL06
    // Overlapping static entry reached from 0xC13A82.
    case 0xC13A84: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // src/overworld/open_menu.asm:495 LDA @VIRTUAL06
    case 0xC13A85: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:496 TAX
    case 0xC13A87: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/open_menu.asm:497 LDA @LOCAL03
    case 0xC13A88: {
        Instruction step(cpu, 0xA5, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:498 JSL UNKNOWN_C22A3A
    case 0xC13A8A: {
        Instruction step(cpu, 0x22, 0xC22A3Au, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/open_menu.asm:499 BRA @UNKNOWN62
    case 0xC13A8E: {
        Instruction step(cpu, 0x80, 0x000068u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/open_menu.asm:501 DISPLAY_TEXT_PTR MSG_SYS_CARRY_FAIL_OTHER_DEAD_ALIVE
    case 0xC13A90: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00001Cu : 0x00E51Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/open_menu.asm:501 DISPLAY_TEXT_PTR MSG_SYS_CARRY_FAIL_OTHER_DEAD_ALIVE
    // Overlapping static entry reached from 0xC13A90.
    case 0xC13A92: {
        Instruction step(cpu, 0xE5, 0x000085u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/open_menu.asm:501 DISPLAY_TEXT_PTR MSG_SYS_CARRY_FAIL_OTHER_DEAD_ALIVE
    case 0xC13A93: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/open_menu.asm:501 DISPLAY_TEXT_PTR MSG_SYS_CARRY_FAIL_OTHER_DEAD_ALIVE
    // Overlapping static entry reached from 0xC13A92.
    case 0xC13A94: {
        Instruction step(cpu, 0x0E, 0x00C7A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu.asm:501 DISPLAY_TEXT_PTR MSG_SYS_CARRY_FAIL_OTHER_DEAD_ALIVE
    case 0xC13A95: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu.asm:501 DISPLAY_TEXT_PTR MSG_SYS_CARRY_FAIL_OTHER_DEAD_ALIVE
    // Overlapping static entry reached from 0xC13A95.
    case 0xC13A97: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/open_menu.asm:501 DISPLAY_TEXT_PTR MSG_SYS_CARRY_FAIL_OTHER_DEAD_ALIVE
    case 0xC13A98: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:210 JSL DISPLAY_TEXT
    // Macro caller: src/overworld/open_menu.asm:501 DISPLAY_TEXT_PTR MSG_SYS_CARRY_FAIL_OTHER_DEAD_ALIVE
    case 0xC13A9A: {
        Instruction step(cpu, 0x22, 0xC186B1u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/open_menu.asm:502 BRA @UNKNOWN62
    case 0xC13A9E: {
        Instruction step(cpu, 0x80, 0x000058u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/open_menu.asm:504 DISPLAY_TEXT_PTR MSG_SYS_CARRY_FAIL_OTHER_DEAD_DEAD
    case 0xC13AA0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000059u : 0x00E559u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/open_menu.asm:504 DISPLAY_TEXT_PTR MSG_SYS_CARRY_FAIL_OTHER_DEAD_DEAD
    // Overlapping static entry reached from 0xC13AA0.
    case 0xC13AA2: {
        Instruction step(cpu, 0xE5, 0x000085u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/open_menu.asm:504 DISPLAY_TEXT_PTR MSG_SYS_CARRY_FAIL_OTHER_DEAD_DEAD
    case 0xC13AA3: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/open_menu.asm:504 DISPLAY_TEXT_PTR MSG_SYS_CARRY_FAIL_OTHER_DEAD_DEAD
    // Overlapping static entry reached from 0xC13AA2.
    case 0xC13AA4: {
        Instruction step(cpu, 0x0E, 0x00C7A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu.asm:504 DISPLAY_TEXT_PTR MSG_SYS_CARRY_FAIL_OTHER_DEAD_DEAD
    case 0xC13AA5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu.asm:504 DISPLAY_TEXT_PTR MSG_SYS_CARRY_FAIL_OTHER_DEAD_DEAD
    // Overlapping static entry reached from 0xC13AA5.
    case 0xC13AA7: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/open_menu.asm:504 DISPLAY_TEXT_PTR MSG_SYS_CARRY_FAIL_OTHER_DEAD_DEAD
    case 0xC13AA8: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:210 JSL DISPLAY_TEXT
    // Macro caller: src/overworld/open_menu.asm:504 DISPLAY_TEXT_PTR MSG_SYS_CARRY_FAIL_OTHER_DEAD_DEAD
    case 0xC13AAA: {
        Instruction step(cpu, 0x22, 0xC186B1u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/open_menu.asm:505 BRA @UNKNOWN62
    case 0xC13AAE: {
        Instruction step(cpu, 0x80, 0x000048u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/open_menu.asm:507 DISPLAY_TEXT_PTR MSG_SYS_CARRY_OTHER_DEAD_ALIVE
    case 0xC13AB0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000A1u : 0x00E5A1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/open_menu.asm:507 DISPLAY_TEXT_PTR MSG_SYS_CARRY_OTHER_DEAD_ALIVE
    // Overlapping static entry reached from 0xC13AB0.
    case 0xC13AB2: {
        Instruction step(cpu, 0xE5, 0x000085u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/open_menu.asm:507 DISPLAY_TEXT_PTR MSG_SYS_CARRY_OTHER_DEAD_ALIVE
    case 0xC13AB3: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/open_menu.asm:507 DISPLAY_TEXT_PTR MSG_SYS_CARRY_OTHER_DEAD_ALIVE
    // Overlapping static entry reached from 0xC13AB2.
    case 0xC13AB4: {
        Instruction step(cpu, 0x0E, 0x00C7A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu.asm:507 DISPLAY_TEXT_PTR MSG_SYS_CARRY_OTHER_DEAD_ALIVE
    case 0xC13AB5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu.asm:507 DISPLAY_TEXT_PTR MSG_SYS_CARRY_OTHER_DEAD_ALIVE
    // Overlapping static entry reached from 0xC13AB5.
    case 0xC13AB7: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/open_menu.asm:507 DISPLAY_TEXT_PTR MSG_SYS_CARRY_OTHER_DEAD_ALIVE
    case 0xC13AB8: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:210 JSL DISPLAY_TEXT
    // Macro caller: src/overworld/open_menu.asm:507 DISPLAY_TEXT_PTR MSG_SYS_CARRY_OTHER_DEAD_ALIVE
    case 0xC13ABA: {
        Instruction step(cpu, 0x22, 0xC186B1u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/open_menu.asm:508 LDY @VIRTUAL04
    case 0xC13ABE: {
        Instruction step(cpu, 0xA4, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/open_menu.asm:509 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC13AC0: {
        Instruction step(cpu, 0xA5, 0x00001Fu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/open_menu.asm:509 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC13AC2: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/open_menu.asm:509 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC13AC4: {
        Instruction step(cpu, 0xA5, 0x000021u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/open_menu.asm:509 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC13AC6: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:510 LDA @VIRTUAL06
    case 0xC13AC8: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:511 TAX
    case 0xC13ACA: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/open_menu.asm:512 LDA @LOCAL03
    case 0xC13ACB: {
        Instruction step(cpu, 0xA5, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:513 JSL UNKNOWN_C22A3A
    case 0xC13ACD: {
        Instruction step(cpu, 0x22, 0xC22A3Au, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/open_menu.asm:514 BRA @UNKNOWN62
    case 0xC13AD1: {
        Instruction step(cpu, 0x80, 0x000025u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/open_menu.asm:516 DISPLAY_TEXT_PTR MSG_SYS_CARRY_OTHER_DEAD_DEAD
    case 0xC13AD3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C2u : 0x00E5C2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/open_menu.asm:516 DISPLAY_TEXT_PTR MSG_SYS_CARRY_OTHER_DEAD_DEAD
    // Overlapping static entry reached from 0xC13AD3.
    case 0xC13AD5: {
        Instruction step(cpu, 0xE5, 0x000085u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/open_menu.asm:516 DISPLAY_TEXT_PTR MSG_SYS_CARRY_OTHER_DEAD_DEAD
    case 0xC13AD6: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/open_menu.asm:516 DISPLAY_TEXT_PTR MSG_SYS_CARRY_OTHER_DEAD_DEAD
    // Overlapping static entry reached from 0xC13AD5.
    case 0xC13AD7: {
        Instruction step(cpu, 0x0E, 0x00C7A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu.asm:516 DISPLAY_TEXT_PTR MSG_SYS_CARRY_OTHER_DEAD_DEAD
    case 0xC13AD8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu.asm:516 DISPLAY_TEXT_PTR MSG_SYS_CARRY_OTHER_DEAD_DEAD
    // Overlapping static entry reached from 0xC13AD8.
    case 0xC13ADA: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/open_menu.asm:516 DISPLAY_TEXT_PTR MSG_SYS_CARRY_OTHER_DEAD_DEAD
    case 0xC13ADB: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:210 JSL DISPLAY_TEXT
    // Macro caller: src/overworld/open_menu.asm:516 DISPLAY_TEXT_PTR MSG_SYS_CARRY_OTHER_DEAD_DEAD
    case 0xC13ADD: {
        Instruction step(cpu, 0x22, 0xC186B1u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/open_menu.asm:517 LDY @VIRTUAL04
    case 0xC13AE1: {
        Instruction step(cpu, 0xA4, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/open_menu.asm:518 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC13AE3: {
        Instruction step(cpu, 0xA5, 0x00001Fu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/open_menu.asm:518 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC13AE5: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/open_menu.asm:518 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC13AE7: {
        Instruction step(cpu, 0xA5, 0x000021u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/open_menu.asm:518 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC13AE9: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:519 LDA @VIRTUAL06
    case 0xC13AEB: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:520 TAX
    case 0xC13AED: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/open_menu.asm:521 LDA @LOCAL03
    case 0xC13AEE: {
        Instruction step(cpu, 0xA5, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:522 JSL UNKNOWN_C22A3A
    case 0xC13AF0: {
        Instruction step(cpu, 0x22, 0xC22A3Au, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/open_menu.asm:523 BRA @UNKNOWN62
    case 0xC13AF4: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/open_menu.asm:525 BRA @GOODS_GIVE_INVALID_TEXT
    case 0xC13AF6: {
        Instruction step(cpu, 0x80, 0x0000FEu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/open_menu.asm:527 LDA #WINDOW::TEXT_STANDARD
    case 0xC13AF8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:527 LDA #WINDOW::TEXT_STANDARD
    // Overlapping static entry reached from 0xC13AF8.
    case 0xC13AFA: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu.asm:528 JSL CLOSE_WINDOW
    case 0xC13AFB: {
        Instruction step(cpu, 0x22, 0xC3E521u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/open_menu.asm:529 LDA #WINDOW::INVENTORY_MENU
    case 0xC13AFF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:529 LDA #WINDOW::INVENTORY_MENU
    // Overlapping static entry reached from 0xC13AFF.
    case 0xC13B01: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu.asm:530 JSL CLOSE_WINDOW
    case 0xC13B02: {
        Instruction step(cpu, 0x22, 0xC3E521u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/open_menu.asm:531 LDA #WINDOW::INVENTORY
    case 0xC13B06: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:531 LDA #WINDOW::INVENTORY
    // Overlapping static entry reached from 0xC13B06.
    case 0xC13B08: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu.asm:532 JSL CLOSE_WINDOW
    case 0xC13B09: {
        Instruction step(cpu, 0x22, 0xC3E521u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/open_menu.asm:533 JMP @MAIN_PAUSE_MENU
    case 0xC13B0D: {
        Instruction step(cpu, 0x4C, 0x0034CDu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:735 LDA arg
    // Macro caller: src/overworld/open_menu.asm:535 CREATE_WINDOW_NEAR #WINDOW::TEXT_STANDARD
    case 0xC13B10: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:735 LDA arg
    // Macro caller: src/overworld/open_menu.asm:535 CREATE_WINDOW_NEAR #WINDOW::TEXT_STANDARD
    // Overlapping static entry reached from 0xC13B10.
    case 0xC13B12: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/overworld/open_menu.asm:535 CREATE_WINDOW_NEAR #WINDOW::TEXT_STANDARD
    case 0xC13B13: {
        Instruction step(cpu, 0x20, 0x0004EEu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/open_menu.asm:536 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC13B16: {
        Instruction step(cpu, 0xA5, 0x00001Fu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/open_menu.asm:536 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC13B18: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/open_menu.asm:536 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC13B1A: {
        Instruction step(cpu, 0xA5, 0x000021u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/open_menu.asm:536 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC13B1C: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/open_menu.asm:537 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC13B1E: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/open_menu.asm:537 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC13B20: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/open_menu.asm:537 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC13B22: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/open_menu.asm:537 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC13B24: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:538 JSR SET_WORKING_MEMORY
    case 0xC13B26: {
        Instruction step(cpu, 0x20, 0x00045Du, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/open_menu.asm:539 LDA @LOCAL06
    case 0xC13B29: {
        Instruction step(cpu, 0xA5, 0x00001Du, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:540 STA @VIRTUAL04
    case 0xC13B2B: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/overworld/open_menu.asm:541 STORE_INT1632 @VIRTUAL06
    case 0xC13B2D: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/overworld/open_menu.asm:541 STORE_INT1632 @VIRTUAL06
    case 0xC13B2F: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/open_menu.asm:542 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC13B31: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/open_menu.asm:542 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC13B33: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/open_menu.asm:542 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC13B35: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/open_menu.asm:542 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC13B37: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:543 JSR SET_ARGUMENT_MEMORY
    case 0xC13B39: {
        Instruction step(cpu, 0x20, 0x000489u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/open_menu.asm:544 DISPLAY_TEXT_PTR MSG_SYS_GOODS_DROP
    case 0xC13B3C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000009u : 0x00C609u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/open_menu.asm:544 DISPLAY_TEXT_PTR MSG_SYS_GOODS_DROP
    // Overlapping static entry reached from 0xC13B3C.
    case 0xC13B3E: {
        Instruction step(cpu, 0xC6, 0x000085u, 2u, AddressMode::DirectPage);
        step.decrement();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/open_menu.asm:544 DISPLAY_TEXT_PTR MSG_SYS_GOODS_DROP
    case 0xC13B3F: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/open_menu.asm:544 DISPLAY_TEXT_PTR MSG_SYS_GOODS_DROP
    // Overlapping static entry reached from 0xC13B3E.
    case 0xC13B40: {
        Instruction step(cpu, 0x0E, 0x00C7A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu.asm:544 DISPLAY_TEXT_PTR MSG_SYS_GOODS_DROP
    case 0xC13B41: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu.asm:544 DISPLAY_TEXT_PTR MSG_SYS_GOODS_DROP
    // Overlapping static entry reached from 0xC13B41.
    case 0xC13B43: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/open_menu.asm:544 DISPLAY_TEXT_PTR MSG_SYS_GOODS_DROP
    case 0xC13B44: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:210 JSL DISPLAY_TEXT
    // Macro caller: src/overworld/open_menu.asm:544 DISPLAY_TEXT_PTR MSG_SYS_GOODS_DROP
    case 0xC13B46: {
        Instruction step(cpu, 0x22, 0xC186B1u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/open_menu.asm:545 LDA #WINDOW::TEXT_STANDARD
    case 0xC13B4A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:545 LDA #WINDOW::TEXT_STANDARD
    // Overlapping static entry reached from 0xC13B4A.
    case 0xC13B4C: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu.asm:546 JSL CLOSE_WINDOW
    case 0xC13B4D: {
        Instruction step(cpu, 0x22, 0xC3E521u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/open_menu.asm:547 LDA #WINDOW::INVENTORY_MENU
    case 0xC13B51: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:547 LDA #WINDOW::INVENTORY_MENU
    // Overlapping static entry reached from 0xC13B51.
    case 0xC13B53: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu.asm:548 JSL CLOSE_WINDOW
    case 0xC13B54: {
        Instruction step(cpu, 0x22, 0xC3E521u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/open_menu.asm:549 LDA #WINDOW::INVENTORY
    case 0xC13B58: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:549 LDA #WINDOW::INVENTORY
    // Overlapping static entry reached from 0xC13B58.
    case 0xC13B5A: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu.asm:550 JSL CLOSE_WINDOW
    case 0xC13B5B: {
        Instruction step(cpu, 0x22, 0xC3E521u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/open_menu.asm:551 JMP @MAIN_PAUSE_MENU
    case 0xC13B5F: {
        Instruction step(cpu, 0x4C, 0x0034CDu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/open_menu.asm:553 JSR UNKNOWN_C1134B
    case 0xC13B62: {
        Instruction step(cpu, 0x20, 0x00134Bu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/open_menu.asm:554 JSR UNKNOWN_C1C373
    case 0xC13B65: {
        Instruction step(cpu, 0x20, 0x00C373u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/overworld/open_menu.asm:555 STORE_INT1632 @VIRTUAL06
    case 0xC13B68: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/overworld/open_menu.asm:555 STORE_INT1632 @VIRTUAL06
    case 0xC13B6A: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/open_menu.asm:556 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC13B6C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/open_menu.asm:556 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC13B6C.
    case 0xC13B6E: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/overworld/open_menu.asm:556 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC13B6F: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/open_menu.asm:556 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC13B71: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/open_menu.asm:556 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC13B71.
    case 0xC13B73: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/overworld/open_menu.asm:556 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC13B74: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:745 LDA src + 2
    // Macro caller: src/overworld/open_menu.asm:557 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC13B76: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:746 CMP dest + 2
    // Macro caller: src/overworld/open_menu.asm:557 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC13B78: {
        Instruction step(cpu, 0xC5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:747 BNE :+
    // Macro caller: src/overworld/open_menu.asm:557 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC13B7A: {
        Instruction step(cpu, 0xD0, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:748 LDA src
    // Macro caller: src/overworld/open_menu.asm:557 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC13B7C: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:749 CMP dest
    // Macro caller: src/overworld/open_menu.asm:557 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC13B7E: {
        Instruction step(cpu, 0xC5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:558 BEQ @UNKNOWN66
    case 0xC13B80: {
        Instruction step(cpu, 0xF0, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/open_menu.asm:559 LDA @VIRTUAL06
    case 0xC13B82: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:560 DEC
    case 0xC13B84: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/overworld/open_menu.asm:561 JSL UNKNOWN_C43573
    case 0xC13B85: {
        Instruction step(cpu, 0x22, 0xC43573u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/open_menu.asm:563 JSR UNKNOWN_C1B5B6
    case 0xC13B89: {
        Instruction step(cpu, 0x20, 0x00B5B6u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/open_menu.asm:564 CMP #0
    case 0xC13B8C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:564 CMP #0
    // Overlapping static entry reached from 0xC13B8C.
    case 0xC13B8E: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/overworld/open_menu.asm:565 BNEL @UNKNOWN75
    case 0xC13B8F: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/overworld/open_menu.asm:565 BNEL @UNKNOWN75
    case 0xC13B91: {
        Instruction step(cpu, 0x4C, 0x003C16u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/open_menu.asm:566 JSR UNKNOWN_C1C3B6
    case 0xC13B94: {
        Instruction step(cpu, 0x20, 0x00C3B6u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/open_menu.asm:567 CMP #1
    case 0xC13B97: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:567 CMP #1
    // Overlapping static entry reached from 0xC13B97.
    case 0xC13B99: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/overworld/open_menu.asm:568 BNEL @MAIN_PAUSE_MENU
    case 0xC13B9A: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/overworld/open_menu.asm:568 BNEL @MAIN_PAUSE_MENU
    case 0xC13B9C: {
        Instruction step(cpu, 0x4C, 0x0034CDu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/open_menu.asm:569 LDA #SFX::MENU_OPEN_CLOSE
    case 0xC13B9F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00001Bu : 0x00001Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:569 LDA #SFX::MENU_OPEN_CLOSE
    // Overlapping static entry reached from 0xC13B9F.
    case 0xC13BA1: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu.asm:570 JSL PLAY_SOUND
    case 0xC13BA2: {
        Instruction step(cpu, 0x22, 0xC0ABE0u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/open_menu.asm:571 JSL UNKNOWN_C3E6F8
    case 0xC13BA6: {
        Instruction step(cpu, 0x22, 0xC3E6F8u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/open_menu.asm:572 JMP @MAIN_PAUSE_MENU
    case 0xC13BAA: {
        Instruction step(cpu, 0x4C, 0x0034CDu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/open_menu.asm:574 JSR UNKNOWN_C1134B
    case 0xC13BAD: {
        Instruction step(cpu, 0x20, 0x00134Bu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/open_menu.asm:575 JSR UNKNOWN_C1AA5D
    case 0xC13BB0: {
        Instruction step(cpu, 0x20, 0x00AA5Du, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/open_menu.asm:576 LDA GAME_STATE+game_state::player_controlled_party_count
    case 0xC13BB3: {
        Instruction step(cpu, 0xAD, 0x0098A4u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:577 AND #$00FF
    case 0xC13BB6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:577 AND #$00FF
    // Overlapping static entry reached from 0xC13BB6.
    case 0xC13BB8: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu.asm:578 CMP #1
    case 0xC13BB9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:578 CMP #1
    // Overlapping static entry reached from 0xC13BB9.
    case 0xC13BBB: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/overworld/open_menu.asm:579 BNEL @MAIN_PAUSE_MENU
    case 0xC13BBC: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/overworld/open_menu.asm:579 BNEL @MAIN_PAUSE_MENU
    case 0xC13BBE: {
        Instruction step(cpu, 0x4C, 0x0034CDu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/open_menu.asm:580 LDA #SFX::MENU_OPEN_CLOSE
    case 0xC13BC1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00001Bu : 0x00001Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:580 LDA #SFX::MENU_OPEN_CLOSE
    // Overlapping static entry reached from 0xC13BC1.
    case 0xC13BC3: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu.asm:581 JSL PLAY_SOUND
    case 0xC13BC4: {
        Instruction step(cpu, 0x22, 0xC0ABE0u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/open_menu.asm:582 JSL UNKNOWN_C3E6F8
    case 0xC13BC8: {
        Instruction step(cpu, 0x22, 0xC3E6F8u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/open_menu.asm:583 JMP @MAIN_PAUSE_MENU
    case 0xC13BCC: {
        Instruction step(cpu, 0x4C, 0x0034CDu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/open_menu.asm:585 JSL CHECK
    case 0xC13BCF: {
        Instruction step(cpu, 0x22, 0xC1323Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/open_menu.asm:586 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC13BD3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/open_menu.asm:586 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC13BD3.
    case 0xC13BD5: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/overworld/open_menu.asm:586 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC13BD6: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/open_menu.asm:586 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC13BD8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/open_menu.asm:586 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC13BD8.
    case 0xC13BDA: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/overworld/open_menu.asm:586 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC13BDB: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:745 LDA src + 2
    // Macro caller: src/overworld/open_menu.asm:587 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC13BDD: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:746 CMP dest + 2
    // Macro caller: src/overworld/open_menu.asm:587 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC13BDF: {
        Instruction step(cpu, 0xC5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:747 BNE :+
    // Macro caller: src/overworld/open_menu.asm:587 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC13BE1: {
        Instruction step(cpu, 0xD0, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:748 LDA src
    // Macro caller: src/overworld/open_menu.asm:587 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC13BE3: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:749 CMP dest
    // Macro caller: src/overworld/open_menu.asm:587 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC13BE5: {
        Instruction step(cpu, 0xC5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:588 BNE @UNKNOWN73
    case 0xC13BE7: {
        Instruction step(cpu, 0xD0, 0x00000Au, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/open_menu.asm:589 LOADPTR MSG_SYS_NOPROBLEM, @VIRTUAL06
    case 0xC13BE9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00009Eu : 0x00C59Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/open_menu.asm:589 LOADPTR MSG_SYS_NOPROBLEM, @VIRTUAL06
    // Overlapping static entry reached from 0xC13BE9.
    case 0xC13BEB: {
        Instruction step(cpu, 0xC5, 0x000085u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/open_menu.asm:589 LOADPTR MSG_SYS_NOPROBLEM, @VIRTUAL06
    case 0xC13BEC: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/open_menu.asm:589 LOADPTR MSG_SYS_NOPROBLEM, @VIRTUAL06
    // Overlapping static entry reached from 0xC13BEB.
    case 0xC13BED: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu.asm:589 LOADPTR MSG_SYS_NOPROBLEM, @VIRTUAL06
    case 0xC13BEE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu.asm:589 LOADPTR MSG_SYS_NOPROBLEM, @VIRTUAL06
    // Overlapping static entry reached from 0xC13BED.
    case 0xC13BEF: {
        Instruction step(cpu, 0xC7, 0x000000u, 2u, AddressMode::DirectPageIndirectLong);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu.asm:589 LOADPTR MSG_SYS_NOPROBLEM, @VIRTUAL06
    // Overlapping static entry reached from 0xC13BEE.
    case 0xC13BF0: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/open_menu.asm:589 LOADPTR MSG_SYS_NOPROBLEM, @VIRTUAL06
    case 0xC13BF1: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/open_menu.asm:591 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC13BF3: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/open_menu.asm:591 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC13BF5: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/open_menu.asm:591 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC13BF7: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/open_menu.asm:591 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC13BF9: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:592 JSL DISPLAY_TEXT
    case 0xC13BFB: {
        Instruction step(cpu, 0x22, 0xC186B1u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/open_menu.asm:593 BRA @UNKNOWN75
    case 0xC13BFF: {
        Instruction step(cpu, 0x80, 0x000015u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/open_menu.asm:595 JSR UNKNOWN_C1134B
    case 0xC13C01: {
        Instruction step(cpu, 0x20, 0x00134Bu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/open_menu.asm:596 SEP #PROC_FLAGS::ACCUM8
    case 0xC13C04: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/open_menu.asm:597 LDA #1
    case 0xC13C06: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x008D01u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:598 STA FORCE_LEFT_TEXT_ALIGNMENT
    case 0xC13C08: {
        Instruction step(cpu, 0x8D, 0x005E71u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:598 STA FORCE_LEFT_TEXT_ALIGNMENT
    // Overlapping static entry reached from 0xC13C06.
    case 0xC13C09: {
        Instruction step(cpu, 0x71, 0x00005Eu, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/open_menu.asm:599 JSR UNKNOWN_C1BB71
    case 0xC13C0B: {
        Instruction step(cpu, 0x20, 0x00BB71u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/open_menu.asm:600 SEP #PROC_FLAGS::ACCUM8
    case 0xC13C0E: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/open_menu.asm:601 STZ FORCE_LEFT_TEXT_ALIGNMENT
    case 0xC13C10: {
        Instruction step(cpu, 0x9C, 0x005E71u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/open_menu.asm:602 JMP @MAIN_PAUSE_MENU
    case 0xC13C13: {
        Instruction step(cpu, 0x4C, 0x0034CDu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/open_menu.asm:604 JSL CLEAR_INSTANT_PRINTING
    case 0xC13C16: {
        Instruction step(cpu, 0x22, 0xC3E4CAu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/open_menu.asm:605 JSR HIDE_HPPP_WINDOWS
    case 0xC13C1A: {
        Instruction step(cpu, 0x20, 0x000A1Du, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/open_menu.asm:606 JSR UNKNOWN_C1008E
    case 0xC13C1D: {
        Instruction step(cpu, 0x20, 0x00008Eu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/open_menu.asm:608 JSL WINDOW_TICK
    case 0xC13C20: {
        Instruction step(cpu, 0x22, 0xC12DD5u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/open_menu.asm:610 LDA ENTITY_FADE_ENTITY
    case 0xC13C24: {
        Instruction step(cpu, 0xAD, 0x00B4A8u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:611 CMP #.LOWORD(-1)
    case 0xC13C27: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:611 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC13C27.
    case 0xC13C29: {
        Instruction step(cpu, 0xFF, 0x22F4D0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/open_menu.asm:612 BNE @UNKNOWN76
    case 0xC13C2A: {
        Instruction step(cpu, 0xD0, 0x0000F4u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/open_menu.asm:613 JSL UNKNOWN_C09451
    case 0xC13C2C: {
        Instruction step(cpu, 0x22, 0xC09451u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/open_menu.asm:613 JSL UNKNOWN_C09451
    // Overlapping static entry reached from 0xC13C29.
    case 0xC13C2D: {
        Instruction step(cpu, 0x51, 0x000094u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.xor_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:613 JSL UNKNOWN_C09451
    // Overlapping static entry reached from 0xC13C2D.
    case 0xC13C2F: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x00002Bu : 0x006B2Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/open_menu.asm:614 END_C_FUNCTION
    case 0xC13C30: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/open_menu.asm:614 END_C_FUNCTION
    case 0xC13C31: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/open_menu.asm:617 BEGIN_C_FUNCTION_FAR
    case 0xC13C32: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/open_menu.asm:620 END_STACK_VARS
    case 0xC13C34: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/open_menu.asm:620 END_STACK_VARS
    case 0xC13C35: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/open_menu.asm:620 END_STACK_VARS
    case 0xC13C36: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EEu : 0x00FFEEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/open_menu.asm:620 END_STACK_VARS
    // Overlapping static entry reached from 0xC13C36.
    case 0xC13C38: {
        Instruction step(cpu, 0xFF, 0x3C225Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/open_menu.asm:620 END_STACK_VARS
    case 0xC13C39: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/overworld/open_menu.asm:621 JSL UNKNOWN_C0943C
    case 0xC13C3A: {
        Instruction step(cpu, 0x22, 0xC0943Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/open_menu.asm:621 JSL UNKNOWN_C0943C
    // Overlapping static entry reached from 0xC13C38.
    case 0xC13C3C: {
        Instruction step(cpu, 0x94, 0x0000C0u, 2u, AddressMode::DirectPageIndexedX);
        step.store_y();
        return step.finish();
    }
    // src/overworld/open_menu.asm:622 LDA #SFX::CURSOR1
    case 0xC13C3E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:622 LDA #SFX::CURSOR1
    // Overlapping static entry reached from 0xC13C3E.
    case 0xC13C40: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/open_menu.asm:623 JSL PLAY_SOUND
    case 0xC13C41: {
        Instruction step(cpu, 0x22, 0xC0ABE0u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/open_menu.asm:624 JSL TALK_TO
    case 0xC13C45: {
        Instruction step(cpu, 0x22, 0xC13187u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/open_menu.asm:625 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC13C49: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/open_menu.asm:625 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC13C49.
    case 0xC13C4B: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/overworld/open_menu.asm:625 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC13C4C: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/open_menu.asm:625 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC13C4E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/open_menu.asm:625 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC13C4E.
    case 0xC13C50: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/overworld/open_menu.asm:625 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC13C51: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:745 LDA src + 2
    // Macro caller: src/overworld/open_menu.asm:626 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC13C53: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:746 CMP dest + 2
    // Macro caller: src/overworld/open_menu.asm:626 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC13C55: {
        Instruction step(cpu, 0xC5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:747 BNE :+
    // Macro caller: src/overworld/open_menu.asm:626 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC13C57: {
        Instruction step(cpu, 0xD0, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:748 LDA src
    // Macro caller: src/overworld/open_menu.asm:626 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC13C59: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:749 CMP dest
    // Macro caller: src/overworld/open_menu.asm:626 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC13C5B: {
        Instruction step(cpu, 0xC5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:627 BNE @UNKNOWN79
    case 0xC13C5D: {
        Instruction step(cpu, 0xD0, 0x00001Au, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/open_menu.asm:628 JSL CHECK
    case 0xC13C5F: {
        Instruction step(cpu, 0x22, 0xC1323Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:745 LDA src + 2
    // Macro caller: src/overworld/open_menu.asm:629 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC13C63: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:746 CMP dest + 2
    // Macro caller: src/overworld/open_menu.asm:629 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC13C65: {
        Instruction step(cpu, 0xC5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:747 BNE :+
    // Macro caller: src/overworld/open_menu.asm:629 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC13C67: {
        Instruction step(cpu, 0xD0, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:748 LDA src
    // Macro caller: src/overworld/open_menu.asm:629 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC13C69: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:749 CMP dest
    // Macro caller: src/overworld/open_menu.asm:629 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC13C6B: {
        Instruction step(cpu, 0xC5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:630 BNE @UNKNOWN79
    case 0xC13C6D: {
        Instruction step(cpu, 0xD0, 0x00000Au, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/open_menu.asm:631 LOADPTR MSG_SYS_NOPROBLEM, @VIRTUAL06
    case 0xC13C6F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00009Eu : 0x00C59Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/open_menu.asm:631 LOADPTR MSG_SYS_NOPROBLEM, @VIRTUAL06
    // Overlapping static entry reached from 0xC13C6F.
    case 0xC13C71: {
        Instruction step(cpu, 0xC5, 0x000085u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/open_menu.asm:631 LOADPTR MSG_SYS_NOPROBLEM, @VIRTUAL06
    case 0xC13C72: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/open_menu.asm:631 LOADPTR MSG_SYS_NOPROBLEM, @VIRTUAL06
    // Overlapping static entry reached from 0xC13C71.
    case 0xC13C73: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu.asm:631 LOADPTR MSG_SYS_NOPROBLEM, @VIRTUAL06
    case 0xC13C74: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu.asm:631 LOADPTR MSG_SYS_NOPROBLEM, @VIRTUAL06
    // Overlapping static entry reached from 0xC13C73.
    case 0xC13C75: {
        Instruction step(cpu, 0xC7, 0x000000u, 2u, AddressMode::DirectPageIndirectLong);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu.asm:631 LOADPTR MSG_SYS_NOPROBLEM, @VIRTUAL06
    // Overlapping static entry reached from 0xC13C74.
    case 0xC13C76: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/open_menu.asm:631 LOADPTR MSG_SYS_NOPROBLEM, @VIRTUAL06
    case 0xC13C77: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/open_menu.asm:633 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC13C79: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/open_menu.asm:633 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC13C7B: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/open_menu.asm:633 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC13C7D: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/open_menu.asm:633 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC13C7F: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:634 JSL DISPLAY_TEXT
    case 0xC13C81: {
        Instruction step(cpu, 0x22, 0xC186B1u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/open_menu.asm:635 JSL CLEAR_INSTANT_PRINTING
    case 0xC13C85: {
        Instruction step(cpu, 0x22, 0xC3E4CAu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/open_menu.asm:636 JSR HIDE_HPPP_WINDOWS
    case 0xC13C89: {
        Instruction step(cpu, 0x20, 0x000A1Du, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/open_menu.asm:637 JSR UNKNOWN_C1008E
    case 0xC13C8C: {
        Instruction step(cpu, 0x20, 0x00008Eu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/open_menu.asm:639 JSL WINDOW_TICK
    case 0xC13C8F: {
        Instruction step(cpu, 0x22, 0xC12DD5u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/open_menu.asm:640 LDA ENTITY_FADE_ENTITY
    case 0xC13C93: {
        Instruction step(cpu, 0xAD, 0x00B4A8u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:641 CMP #.LOWORD(-1)
    case 0xC13C96: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:641 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC13C96.
    case 0xC13C98: {
        Instruction step(cpu, 0xFF, 0x22F4D0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/open_menu.asm:642 BNE @UNKNOWN80
    case 0xC13C99: {
        Instruction step(cpu, 0xD0, 0x0000F4u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/open_menu.asm:643 JSL UNKNOWN_C09451
    case 0xC13C9B: {
        Instruction step(cpu, 0x22, 0xC09451u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/open_menu.asm:643 JSL UNKNOWN_C09451
    // Overlapping static entry reached from 0xC13C98.
    case 0xC13C9C: {
        Instruction step(cpu, 0x51, 0x000094u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.xor_accumulator();
        return step.finish();
    }
    // src/overworld/open_menu.asm:643 JSL UNKNOWN_C09451
    // Overlapping static entry reached from 0xC13C9C.
    case 0xC13C9E: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x00002Bu : 0x006B2Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/open_menu.asm:644 END_C_FUNCTION
    case 0xC13C9F: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/open_menu.asm:644 END_C_FUNCTION
    case 0xC13CA0: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
