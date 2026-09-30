// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/text/selection_menu.asm
bool resume_text_selection_menu(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/selection_menu.asm:3 BEGIN_C_FUNCTION
    case 0xC1196A: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/selection_menu.asm:19 END_STACK_VARS
    case 0xC1196C: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/selection_menu.asm:19 END_STACK_VARS
    case 0xC1196D: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/selection_menu.asm:19 END_STACK_VARS
    case 0xC1196E: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/selection_menu.asm:19 END_STACK_VARS
    case 0xC1196F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000D6u : 0x00FFD6u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/selection_menu.asm:19 END_STACK_VARS
    // Overlapping static entry reached from 0xC1196F.
    case 0xC11971: {
        Instruction step(cpu, 0xFF, 0x85685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/selection_menu.asm:19 END_STACK_VARS
    case 0xC11972: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/selection_menu.asm:19 END_STACK_VARS
    case 0xC11973: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:20 STA @LOCAL0C
    case 0xC11974: {
        Instruction step(cpu, 0x85, 0x000028u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:20 STA @LOCAL0C
    // Overlapping static entry reached from 0xC11971.
    case 0xC11975: {
        Instruction step(cpu, 0x28, 0x000000u, 1u, AddressMode::Implied);
        step.pull_status();
        return step.finish();
    }
    // src/text/selection_menu.asm:21 LDA CURRENT_FOCUS_WINDOW
    case 0xC11976: {
        Instruction step(cpu, 0xAD, 0x008958u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:22 STA @LOCAL0B
    case 0xC11979: {
        Instruction step(cpu, 0x85, 0x000026u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:23 CMP #.LOWORD(-1)
    case 0xC1197B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:23 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1197B.
    case 0xC1197D: {
        Instruction step(cpu, 0xFF, 0xA906D0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/selection_menu.asm:24 BNE @UNKNOWN0
    case 0xC1197E: {
        Instruction step(cpu, 0xD0, 0x000006u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/selection_menu.asm:25 LDA #0
    case 0xC11980: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:25 LDA #0
    // Overlapping static entry reached from 0xC1197D.
    case 0xC11981: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu.asm:25 LDA #0
    // Overlapping static entry reached from 0xC11980.
    case 0xC11982: {
        Instruction step(cpu, 0x00, 0x00004Cu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu.asm:26 JMP @UNKNOWN44
    case 0xC11983: {
        Instruction step(cpu, 0x4C, 0x001F58u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/selection_menu.asm:28 LDA CURRENT_FOCUS_WINDOW
    case 0xC11986: {
        Instruction step(cpu, 0xAD, 0x008958u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:29 ASL
    case 0xC11989: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/selection_menu.asm:30 TAX
    case 0xC1198A: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/selection_menu.asm:31 LDA OPEN_WINDOW_TABLE,X
    case 0xC1198B: {
        Instruction step(cpu, 0xBD, 0x0088E4u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:32 LDY #.SIZEOF(window_stats)
    case 0xC1198E: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000052u : 0x000052u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/selection_menu.asm:32 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC1198E.
    case 0xC11990: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu.asm:33 JSL MULT168
    case 0xC11991: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/selection_menu.asm:34 CLC
    case 0xC11995: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/selection_menu.asm:35 ADC #.LOWORD(WINDOW_STATS)
    case 0xC11996: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000050u : 0x008650u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/selection_menu.asm:35 ADC #.LOWORD(WINDOW_STATS)
    // Overlapping static entry reached from 0xC11996.
    case 0xC11998: {
        Instruction step(cpu, 0x86, 0x000085u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/selection_menu.asm:36 STA @LOCAL0A
    case 0xC11999: {
        Instruction step(cpu, 0x85, 0x000024u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:36 STA @LOCAL0A
    // Overlapping static entry reached from 0xC11998.
    case 0xC1199A: {
        Instruction step(cpu, 0x24, 0x0000ADu, 2u, AddressMode::DirectPage);
        step.test_bits();
        return step.finish();
    }
    // src/text/selection_menu.asm:38 LDA RESTORE_MENU_BACKUP
    case 0xC1199B: {
        Instruction step(cpu, 0xAD, 0x005E79u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:38 LDA RESTORE_MENU_BACKUP
    // Overlapping static entry reached from 0xC1199A.
    case 0xC1199C: {
        Instruction step(cpu, 0x79, 0x00295Eu, 3u, AddressMode::AbsoluteIndexedY);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/selection_menu.asm:39 AND #$00FF
    case 0xC1199E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:39 AND #$00FF
    // Overlapping static entry reached from 0xC1199C.
    case 0xC1199F: {
        Instruction step(cpu, 0xFF, 0x10F000u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/selection_menu.asm:39 AND #$00FF
    // Overlapping static entry reached from 0xC1199E.
    case 0xC119A0: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu.asm:40 BEQ @UNKNOWN1
    case 0xC119A1: {
        Instruction step(cpu, 0xF0, 0x000010u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/selection_menu.asm:41 LDA MENU_BACKUP_CURRENT_OPTION
    case 0xC119A3: {
        Instruction step(cpu, 0xAD, 0x009688u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:42 LDY #window_stats::current_option
    case 0xC119A6: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00002Bu : 0x00002Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/selection_menu.asm:42 LDY #window_stats::current_option
    // Overlapping static entry reached from 0xC119A6.
    case 0xC119A8: {
        Instruction step(cpu, 0x00, 0x000091u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu.asm:43 STA (@LOCAL0A),Y
    case 0xC119A9: {
        Instruction step(cpu, 0x91, 0x000024u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:44 LDA MENU_BACKUP_SELECTED_OPTION
    case 0xC119AB: {
        Instruction step(cpu, 0xAD, 0x00968Au, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:45 LDY #window_stats::selected_option
    case 0xC119AE: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00002Fu : 0x00002Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/selection_menu.asm:45 LDY #window_stats::selected_option
    // Overlapping static entry reached from 0xC119AE.
    case 0xC119B0: {
        Instruction step(cpu, 0x00, 0x000091u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu.asm:46 STA (@LOCAL0A),Y
    case 0xC119B1: {
        Instruction step(cpu, 0x91, 0x000024u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:49 LDY #window_stats::selected_option
    case 0xC119B3: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00002Fu : 0x00002Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/selection_menu.asm:49 LDY #window_stats::selected_option
    // Overlapping static entry reached from 0xC119B3.
    case 0xC119B5: {
        Instruction step(cpu, 0x00, 0x0000B1u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu.asm:50 LDA (@LOCAL0A),Y
    case 0xC119B6: {
        Instruction step(cpu, 0xB1, 0x000024u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:51 CMP #.LOWORD(-1)
    case 0xC119B8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:51 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC119B8.
    case 0xC119BA: {
        Instruction step(cpu, 0xFF, 0xAA6EF0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/selection_menu.asm:52 BEQ @UNKNOWN4
    case 0xC119BB: {
        Instruction step(cpu, 0xF0, 0x00006Eu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/selection_menu.asm:53 TAX
    case 0xC119BD: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/selection_menu.asm:54 STX @LOCAL09
    case 0xC119BE: {
        Instruction step(cpu, 0x86, 0x000022u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/selection_menu.asm:55 STA @LOCAL08
    case 0xC119C0: {
        Instruction step(cpu, 0x85, 0x000020u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:56 LDY #window_stats::current_option
    case 0xC119C2: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00002Bu : 0x00002Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/selection_menu.asm:56 LDY #window_stats::current_option
    // Overlapping static entry reached from 0xC119C2.
    case 0xC119C4: {
        Instruction step(cpu, 0x00, 0x0000B1u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu.asm:57 LDA (@LOCAL0A),Y
    case 0xC119C5: {
        Instruction step(cpu, 0xB1, 0x000024u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/text/selection_menu.asm:58 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC119C7: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00002Du : 0x00002Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/text/selection_menu.asm:58 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    // Overlapping static entry reached from 0xC119C7.
    case 0xC119C9: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/text/selection_menu.asm:58 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC119CA: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/selection_menu.asm:59 CLC
    case 0xC119CE: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/selection_menu.asm:60 ADC #.LOWORD(MENU_OPTIONS)
    case 0xC119CF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000D4u : 0x0089D4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/selection_menu.asm:60 ADC #.LOWORD(MENU_OPTIONS)
    // Overlapping static entry reached from 0xC119CF.
    case 0xC119D1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x89, narrow ? 0x000085u : 0x000485u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.test_bits();
        return step.finish();
    }
    // src/text/selection_menu.asm:61 STA @VIRTUAL04
    case 0xC119D2: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:61 STA @VIRTUAL04
    // Overlapping static entry reached from 0xC119D1.
    case 0xC119D3: {
        Instruction step(cpu, 0x04, 0x000080u, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/text/selection_menu.asm:62 BRA @UNKNOWN3
    case 0xC119D4: {
        Instruction step(cpu, 0x80, 0x000015u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/selection_menu.asm:62 BRA @UNKNOWN3
    // Overlapping static entry reached from 0xC119D3.
    case 0xC119D5: {
        Instruction step(cpu, 0x15, 0x0000CAu, 2u, AddressMode::DirectPageIndexedX);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:64 DEX
    case 0xC119D6: {
        Instruction step(cpu, 0xCA, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_x();
        return step.finish();
    }
    // src/text/selection_menu.asm:65 STX @LOCAL09
    case 0xC119D7: {
        Instruction step(cpu, 0x86, 0x000022u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/selection_menu.asm:66 LDX @VIRTUAL04
    case 0xC119D9: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/selection_menu.asm:67 LDA __BSS_START__+2,X
    case 0xC119DB: {
        Instruction step(cpu, 0xBD, 0x000002u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/text/selection_menu.asm:68 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC119DE: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00002Du : 0x00002Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/text/selection_menu.asm:68 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    // Overlapping static entry reached from 0xC119DE.
    case 0xC119E0: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/text/selection_menu.asm:68 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC119E1: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/selection_menu.asm:69 CLC
    case 0xC119E5: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/selection_menu.asm:70 ADC #.LOWORD(MENU_OPTIONS)
    case 0xC119E6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000D4u : 0x0089D4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/selection_menu.asm:70 ADC #.LOWORD(MENU_OPTIONS)
    // Overlapping static entry reached from 0xC119E6.
    case 0xC119E8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x89, narrow ? 0x000085u : 0x000485u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.test_bits();
        return step.finish();
    }
    // src/text/selection_menu.asm:71 STA @VIRTUAL04
    case 0xC119E9: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:71 STA @VIRTUAL04
    // Overlapping static entry reached from 0xC119E8.
    case 0xC119EA: {
        Instruction step(cpu, 0x04, 0x0000A6u, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/text/selection_menu.asm:73 LDX @LOCAL09
    case 0xC119EB: {
        Instruction step(cpu, 0xA6, 0x000022u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/selection_menu.asm:73 LDX @LOCAL09
    // Overlapping static entry reached from 0xC119EA.
    case 0xC119EC: {
        Instruction step(cpu, 0x22, 0x22E7D0u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/selection_menu.asm:74 BNE @UNKNOWN2
    case 0xC119ED: {
        Instruction step(cpu, 0xD0, 0x0000E7u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/selection_menu.asm:75 JSR SET_INSTANT_PRINTING
    case 0xC119EF: {
        Instruction step(cpu, 0x22, 0xC3E4D4u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/selection_menu.asm:75 JSR SET_INSTANT_PRINTING
    // Overlapping static entry reached from 0xC119EC.
    case 0xC119F0: {
        Instruction step(cpu, 0xD4, 0x0000E4u, 2u, AddressMode::DirectPage);
        step.push_effective_indirect();
        return step.finish();
    }
    // src/text/selection_menu.asm:75 JSR SET_INSTANT_PRINTING
    // Overlapping static entry reached from 0xC119F0.
    case 0xC119F2: {
        Instruction step(cpu, 0xC3, 0x0000A6u, 2u, AddressMode::StackRelative);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:76 LDX @VIRTUAL04
    case 0xC119F3: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/selection_menu.asm:76 LDX @VIRTUAL04
    // Overlapping static entry reached from 0xC119F2.
    case 0xC119F4: {
        Instruction step(cpu, 0x04, 0x0000BCu, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/text/selection_menu.asm:77 LDY a:menu_option::text_y,X
    case 0xC119F5: {
        Instruction step(cpu, 0xBC, 0x00000Au, 3u, AddressMode::AbsoluteIndexedX);
        step.load_y();
        return step.finish();
    }
    // src/text/selection_menu.asm:77 LDY a:menu_option::text_y,X
    // Overlapping static entry reached from 0xC119F4.
    case 0xC119F6: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/selection_menu.asm:77 LDY a:menu_option::text_y,X
    // Overlapping static entry reached from 0xC119F6.
    case 0xC119F7: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu.asm:78 LDX @VIRTUAL04
    case 0xC119F8: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/selection_menu.asm:79 LDA a:menu_option::text_x,X
    case 0xC119FA: {
        Instruction step(cpu, 0xBD, 0x000008u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:80 TAX
    case 0xC119FD: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/selection_menu.asm:81 INX
    case 0xC119FE: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/text/selection_menu.asm:82 LDA @VIRTUAL04
    case 0xC119FF: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:83 JSL UNKNOWN_C43CD2
    case 0xC11A01: {
        Instruction step(cpu, 0x22, 0xC43CD2u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/selection_menu.asm:84 LDA @VIRTUAL04
    case 0xC11A05: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:85 CLC
    case 0xC11A07: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/selection_menu.asm:86 ADC #menu_option::label
    case 0xC11A08: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000013u : 0x000013u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/selection_menu.asm:86 ADC #menu_option::label
    // Overlapping static entry reached from 0xC11A08.
    case 0xC11A0A: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/text/selection_menu.asm:87 PROMOTENEARPTRA @VIRTUAL06
    case 0xC11A0B: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:909 PHB
    // Macro caller: src/text/selection_menu.asm:87 PROMOTENEARPTRA @VIRTUAL06
    case 0xC11A0D: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/text/selection_menu.asm:87 PROMOTENEARPTRA @VIRTUAL06
    case 0xC11A0E: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:911 PLA
    // Macro caller: src/text/selection_menu.asm:87 PROMOTENEARPTRA @VIRTUAL06
    case 0xC11A10: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/text/selection_menu.asm:87 PROMOTENEARPTRA @VIRTUAL06
    case 0xC11A11: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/text/selection_menu.asm:87 PROMOTENEARPTRA @VIRTUAL06
    case 0xC11A13: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/text/selection_menu.asm:88 REP #PROC_FLAGS::ACCUM8
    case 0xC11A15: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/selection_menu.asm:89 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC11A17: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/selection_menu.asm:89 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC11A19: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/selection_menu.asm:89 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC11A1B: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/selection_menu.asm:89 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC11A1D: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:90 LDX #0
    case 0xC11A1F: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/selection_menu.asm:90 LDX #0
    // Overlapping static entry reached from 0xC11A1F.
    case 0xC11A21: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu.asm:91 LDA #.LOWORD(-1)
    case 0xC11A22: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:91 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC11A22.
    case 0xC11A24: {
        Instruction step(cpu, 0xFF, 0x3BB922u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/selection_menu.asm:92 JSL UNKNOWN_C43BB9
    case 0xC11A25: {
        Instruction step(cpu, 0x22, 0xC43BB9u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/selection_menu.asm:92 JSL UNKNOWN_C43BB9
    // Overlapping static entry reached from 0xC11A24.
    case 0xC11A28: {
        Instruction step(cpu, 0xC4, 0x000080u, 2u, AddressMode::DirectPage);
        step.compare_y();
        return step.finish();
    }
    // src/text/selection_menu.asm:93 BRA @UNKNOWN5
    case 0xC11A29: {
        Instruction step(cpu, 0x80, 0x000014u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/selection_menu.asm:93 BRA @UNKNOWN5
    // Overlapping static entry reached from 0xC11A28.
    case 0xC11A2A: {
        Instruction step(cpu, 0x14, 0x000064u, 2u, AddressMode::DirectPage);
        step.reset_tested_bits();
        return step.finish();
    }
    // src/text/selection_menu.asm:95 STZ @LOCAL08
    case 0xC11A2B: {
        Instruction step(cpu, 0x64, 0x000020u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/text/selection_menu.asm:95 STZ @LOCAL08
    // Overlapping static entry reached from 0xC11A2A.
    case 0xC11A2C: {
        Instruction step(cpu, 0x20, 0x002BA0u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/selection_menu.asm:96 LDY #window_stats::current_option
    case 0xC11A2D: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00002Bu : 0x00002Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/selection_menu.asm:96 LDY #window_stats::current_option
    // Overlapping static entry reached from 0xC11A2D.
    case 0xC11A2F: {
        Instruction step(cpu, 0x00, 0x0000B1u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu.asm:97 LDA (@LOCAL0A),Y
    case 0xC11A30: {
        Instruction step(cpu, 0xB1, 0x000024u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/text/selection_menu.asm:98 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11A32: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00002Du : 0x00002Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/text/selection_menu.asm:98 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    // Overlapping static entry reached from 0xC11A32.
    case 0xC11A34: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/text/selection_menu.asm:98 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11A35: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/selection_menu.asm:99 CLC
    case 0xC11A39: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/selection_menu.asm:100 ADC #.LOWORD(MENU_OPTIONS)
    case 0xC11A3A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000D4u : 0x0089D4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/selection_menu.asm:100 ADC #.LOWORD(MENU_OPTIONS)
    // Overlapping static entry reached from 0xC11A3A.
    case 0xC11A3C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x89, narrow ? 0x000085u : 0x000485u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.test_bits();
        return step.finish();
    }
    // src/text/selection_menu.asm:101 STA @VIRTUAL04
    case 0xC11A3D: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:101 STA @VIRTUAL04
    // Overlapping static entry reached from 0xC11A3C.
    case 0xC11A3E: {
        Instruction step(cpu, 0x04, 0x000064u, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/text/selection_menu.asm:103 STZ @LOCAL09
    case 0xC11A3F: {
        Instruction step(cpu, 0x64, 0x000022u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/text/selection_menu.asm:103 STZ @LOCAL09
    // Overlapping static entry reached from 0xC11A3E.
    case 0xC11A40: {
        Instruction step(cpu, 0x22, 0x1804A5u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/selection_menu.asm:104 LDA @VIRTUAL04
    case 0xC11A41: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:105 CLC
    case 0xC11A43: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/selection_menu.asm:106 ADC #menu_option::script
    case 0xC11A44: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00000Fu : 0x00000Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/selection_menu.asm:106 ADC #menu_option::script
    // Overlapping static entry reached from 0xC11A44.
    case 0xC11A46: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu.asm:107 TAY
    case 0xC11A47: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/text/selection_menu.asm:108 STY @LOCAL07
    case 0xC11A48: {
        Instruction step(cpu, 0x84, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/selection_menu.asm:109 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC11A4A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/selection_menu.asm:109 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC11A4A.
    case 0xC11A4C: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/text/selection_menu.asm:109 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC11A4D: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/selection_menu.asm:109 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC11A4F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/selection_menu.asm:109 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC11A4F.
    case 0xC11A51: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/text/selection_menu.asm:109 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC11A52: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/text/selection_menu.asm:110 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC11A54: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1114 STA dest
    // Macro caller: src/text/selection_menu.asm:110 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC11A57: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/text/selection_menu.asm:110 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC11A59: {
        Instruction step(cpu, 0xB9, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/text/selection_menu.asm:110 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC11A5C: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:111 CMP @VIRTUAL0A+2
    case 0xC11A5E: {
        Instruction step(cpu, 0xC5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:112 BNE @UNKNOWN6
    case 0xC11A60: {
        Instruction step(cpu, 0xD0, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/selection_menu.asm:113 LDA @VIRTUAL06
    case 0xC11A62: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:114 CMP @VIRTUAL0A
    case 0xC11A64: {
        Instruction step(cpu, 0xC5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:116 BEQ @UNKNOWN7
    case 0xC11A66: {
        Instruction step(cpu, 0xF0, 0x00001Cu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/selection_menu.asm:117 JSR SET_INSTANT_PRINTING
    case 0xC11A68: {
        Instruction step(cpu, 0x22, 0xC3E4D4u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/selection_menu.asm:118 LDY @LOCAL07
    case 0xC11A6C: {
        Instruction step(cpu, 0xA4, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/text/selection_menu.asm:119 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC11A6E: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1114 STA dest
    // Macro caller: src/text/selection_menu.asm:119 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC11A71: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/text/selection_menu.asm:119 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC11A73: {
        Instruction step(cpu, 0xB9, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/text/selection_menu.asm:119 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC11A76: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/selection_menu.asm:120 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC11A78: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/selection_menu.asm:120 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC11A7A: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/selection_menu.asm:120 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC11A7C: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/selection_menu.asm:120 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC11A7E: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:121 JSL DISPLAY_TEXT
    case 0xC11A80: {
        Instruction step(cpu, 0x22, 0xC186B1u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/selection_menu.asm:123 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC11A84: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/selection_menu.asm:123 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC11A84.
    case 0xC11A86: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/text/selection_menu.asm:123 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC11A87: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/selection_menu.asm:123 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC11A89: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/selection_menu.asm:123 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC11A89.
    case 0xC11A8B: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/text/selection_menu.asm:123 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC11A8C: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:124 LDA @LOCAL0A
    case 0xC11A8E: {
        Instruction step(cpu, 0xA5, 0x000024u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:125 CLC
    case 0xC11A90: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/selection_menu.asm:126 ADC #window_stats::cursor_move_callback
    case 0xC11A91: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000037u : 0x000037u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/selection_menu.asm:126 ADC #window_stats::cursor_move_callback
    // Overlapping static entry reached from 0xC11A91.
    case 0xC11A93: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu.asm:127 TAY
    case 0xC11A94: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/text/selection_menu.asm:128 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC11A95: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1114 STA dest
    // Macro caller: src/text/selection_menu.asm:128 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC11A98: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/text/selection_menu.asm:128 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC11A9A: {
        Instruction step(cpu, 0xB9, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/text/selection_menu.asm:128 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC11A9D: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:129 CMP @VIRTUAL0A+2
    case 0xC11A9F: {
        Instruction step(cpu, 0xC5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:130 BNE @UNKNOWN8
    case 0xC11AA1: {
        Instruction step(cpu, 0xD0, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/selection_menu.asm:131 LDA @VIRTUAL06
    case 0xC11AA3: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:132 CMP @VIRTUAL0A
    case 0xC11AA5: {
        Instruction step(cpu, 0xC5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:134 BEQ @UNKNOWN11
    case 0xC11AA7: {
        Instruction step(cpu, 0xF0, 0x00003Eu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/selection_menu.asm:135 LDX @VIRTUAL04
    case 0xC11AA9: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/selection_menu.asm:136 LDA a:menu_option::unknown0,X
    case 0xC11AAB: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:137 CMP #1
    case 0xC11AAE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:137 CMP #1
    // Overlapping static entry reached from 0xC11AAE.
    case 0xC11AB0: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu.asm:138 BNE @UNKNOWN9
    case 0xC11AB1: {
        Instruction step(cpu, 0xD0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/selection_menu.asm:139 LDA @LOCAL08
    case 0xC11AB3: {
        Instruction step(cpu, 0xA5, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:140 INC
    case 0xC11AB5: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/text/selection_menu.asm:141 BRA @UNKNOWN10
    case 0xC11AB6: {
        Instruction step(cpu, 0x80, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/selection_menu.asm:143 LDX @VIRTUAL04
    case 0xC11AB8: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/selection_menu.asm:144 LDA a:menu_option::userdata,X
    case 0xC11ABA: {
        Instruction step(cpu, 0xBD, 0x00000Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:146 STA @LOCAL06
    case 0xC11ABD: {
        Instruction step(cpu, 0x85, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:147 LDA @LOCAL0A
    case 0xC11ABF: {
        Instruction step(cpu, 0xA5, 0x000024u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:148 CLC
    case 0xC11AC1: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/selection_menu.asm:149 ADC #window_stats::cursor_move_callback
    case 0xC11AC2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000037u : 0x000037u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/selection_menu.asm:149 ADC #window_stats::cursor_move_callback
    // Overlapping static entry reached from 0xC11AC2.
    case 0xC11AC4: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu.asm:150 TAY
    case 0xC11AC5: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/text/selection_menu.asm:151 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC11AC6: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1114 STA dest
    // Macro caller: src/text/selection_menu.asm:151 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC11AC9: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/text/selection_menu.asm:151 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC11ACB: {
        Instruction step(cpu, 0xB9, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/text/selection_menu.asm:151 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC11ACE: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:152 LDA @LOCAL06
    case 0xC11AD0: {
        Instruction step(cpu, 0xA5, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:153 PHA
    case 0xC11AD2: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/selection_menu.asm:154 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC11AD3: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/selection_menu.asm:154 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC11AD5: {
        Instruction step(cpu, 0x8D, 0x0000BCu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/selection_menu.asm:154 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC11AD8: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/selection_menu.asm:154 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC11ADA: {
        Instruction step(cpu, 0x8D, 0x0000BEu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:155 PLA
    case 0xC11ADD: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:156 JSL UNKNOWN_C09279
    case 0xC11ADE: {
        Instruction step(cpu, 0x22, 0xC09279u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/selection_menu.asm:157 LDA @LOCAL0B
    case 0xC11AE2: {
        Instruction step(cpu, 0xA5, 0x000026u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:158 JSR SET_WINDOW_FOCUS
    case 0xC11AE4: {
        Instruction step(cpu, 0x20, 0x00007Eu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/selection_menu.asm:160 JSR CLEAR_INSTANT_PRINTING
    case 0xC11AE7: {
        Instruction step(cpu, 0x22, 0xC3E4CAu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/selection_menu.asm:162 LDA RESTORE_MENU_BACKUP
    case 0xC11AEB: {
        Instruction step(cpu, 0xAD, 0x005E79u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:163 AND #$00FF
    case 0xC11AEE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:163 AND #$00FF
    // Overlapping static entry reached from 0xC11AEE.
    case 0xC11AF0: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu.asm:164 BEQ @UNKNOWN12
    case 0xC11AF1: {
        Instruction step(cpu, 0xF0, 0x000010u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/selection_menu.asm:165 LDA MENU_BACKUP_SELECTED_TEXT_X
    case 0xC11AF3: {
        Instruction step(cpu, 0xAD, 0x009684u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:166 LDX @VIRTUAL04
    case 0xC11AF6: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/selection_menu.asm:167 STA a:menu_option::text_x,X
    case 0xC11AF8: {
        Instruction step(cpu, 0x9D, 0x000008u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:168 LDA MENU_BACKUP_SELECTED_TEXT_Y
    case 0xC11AFB: {
        Instruction step(cpu, 0xAD, 0x009686u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:169 LDX @VIRTUAL04
    case 0xC11AFE: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/selection_menu.asm:170 STA a:menu_option::text_y,X
    case 0xC11B00: {
        Instruction step(cpu, 0x9D, 0x00000Au, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:173 LDX @VIRTUAL04
    case 0xC11B03: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/selection_menu.asm:174 LDY a:menu_option::text_y,X
    case 0xC11B05: {
        Instruction step(cpu, 0xBC, 0x00000Au, 3u, AddressMode::AbsoluteIndexedX);
        step.load_y();
        return step.finish();
    }
    // src/text/selection_menu.asm:175 LDX @VIRTUAL04
    case 0xC11B08: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/selection_menu.asm:176 LDA a:menu_option::text_x,X
    case 0xC11B0A: {
        Instruction step(cpu, 0xBD, 0x000008u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:177 TAX
    case 0xC11B0D: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/selection_menu.asm:178 LDA @VIRTUAL04
    case 0xC11B0E: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:179 JSL UNKNOWN_C43CD2
    case 0xC11B10: {
        Instruction step(cpu, 0x22, 0xC43CD2u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/selection_menu.asm:180 LDA #1
    case 0xC11B14: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:180 LDA #1
    // Overlapping static entry reached from 0xC11B14.
    case 0xC11B16: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu.asm:181 JSR UNKNOWN_C10FEA
    case 0xC11B17: {
        Instruction step(cpu, 0x20, 0x000FEAu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/selection_menu.asm:182 LDA #33
    case 0xC11B1A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000021u : 0x000021u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:182 LDA #33
    // Overlapping static entry reached from 0xC11B1A.
    case 0xC11B1C: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu.asm:183 JSR UNKNOWN_C10D60
    case 0xC11B1D: {
        Instruction step(cpu, 0x20, 0x000D60u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/selection_menu.asm:184 LDA #0
    case 0xC11B20: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:184 LDA #0
    // Overlapping static entry reached from 0xC11B20.
    case 0xC11B22: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu.asm:185 JSR UNKNOWN_C10FEA
    case 0xC11B23: {
        Instruction step(cpu, 0x20, 0x000FEAu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/selection_menu.asm:186 JSL WINDOW_TICK
    case 0xC11B26: {
        Instruction step(cpu, 0x22, 0xC12DD5u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/selection_menu.asm:187 LDA #1
    case 0xC11B2A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:187 LDA #1
    // Overlapping static entry reached from 0xC11B2A.
    case 0xC11B2C: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu.asm:188 STA @VIRTUAL02
    case 0xC11B2D: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:190 LDA @VIRTUAL02
    case 0xC11B2F: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:191 EOR #$0001
    case 0xC11B31: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x49, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:191 EOR #$0001
    // Overlapping static entry reached from 0xC11B31.
    case 0xC11B33: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu.asm:192 STA @VIRTUAL02
    case 0xC11B34: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:193 STA @LOCAL05
    case 0xC11B36: {
        Instruction step(cpu, 0x85, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:194 LDY #window_stats::text_y
    case 0xC11B38: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/selection_menu.asm:194 LDY #window_stats::text_y
    // Overlapping static entry reached from 0xC11B38.
    case 0xC11B3A: {
        Instruction step(cpu, 0x00, 0x0000B1u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu.asm:195 LDA (@LOCAL0A),Y
    case 0xC11B3B: {
        Instruction step(cpu, 0xB1, 0x000024u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:196 ASL
    case 0xC11B3D: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/selection_menu.asm:197 LDY #window_stats::window_y
    case 0xC11B3E: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/selection_menu.asm:197 LDY #window_stats::window_y
    // Overlapping static entry reached from 0xC11B3E.
    case 0xC11B40: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu.asm:198 CLC
    case 0xC11B41: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/selection_menu.asm:199 ADC (@LOCAL0A),Y
    case 0xC11B42: {
        Instruction step(cpu, 0x71, 0x000024u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/selection_menu.asm:200 ASL
    case 0xC11B44: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/selection_menu.asm:201 ASL
    case 0xC11B45: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/selection_menu.asm:202 ASL
    case 0xC11B46: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/selection_menu.asm:203 ASL
    case 0xC11B47: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/selection_menu.asm:204 ASL
    case 0xC11B48: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/selection_menu.asm:205 STA @VIRTUAL02
    case 0xC11B49: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:206 LDY #window_stats::window_x
    case 0xC11B4B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/selection_menu.asm:206 LDY #window_stats::window_x
    // Overlapping static entry reached from 0xC11B4B.
    case 0xC11B4D: {
        Instruction step(cpu, 0x00, 0x0000B1u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu.asm:207 LDA (@LOCAL0A),Y
    case 0xC11B4E: {
        Instruction step(cpu, 0xB1, 0x000024u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:208 LDY #window_stats::text_x
    case 0xC11B50: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00000Eu : 0x00000Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/selection_menu.asm:208 LDY #window_stats::text_x
    // Overlapping static entry reached from 0xC11B50.
    case 0xC11B52: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu.asm:209 CLC
    case 0xC11B53: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/selection_menu.asm:210 ADC (@LOCAL0A),Y
    case 0xC11B54: {
        Instruction step(cpu, 0x71, 0x000024u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/selection_menu.asm:211 CLC
    case 0xC11B56: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/selection_menu.asm:212 ADC @VIRTUAL02
    case 0xC11B57: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/selection_menu.asm:213 CLC
    case 0xC11B59: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/selection_menu.asm:214 ADC #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 0, 1
    case 0xC11B5A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000020u : 0x007C20u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/selection_menu.asm:214 ADC #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 0, 1
    // Overlapping static entry reached from 0xC11B5A.
    case 0xC11B5C: {
        Instruction step(cpu, 0x7C, 0x001E85u, 3u, AddressMode::AbsoluteIndexedIndirectX);
        step.jump();
        return step.finish();
    }
    // src/text/selection_menu.asm:215 STA @LOCAL07
    case 0xC11B5D: {
        Instruction step(cpu, 0x85, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:216 LDA @LOCAL05
    case 0xC11B5F: {
        Instruction step(cpu, 0xA5, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:217 STA @VIRTUAL02
    case 0xC11B61: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:218 ASL
    case 0xC11B63: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/selection_menu.asm:219 STA @LOCAL04
    case 0xC11B64: {
        Instruction step(cpu, 0x85, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/selection_menu.asm:220 LOADPTR UNKNOWN_C3E3F8+14, @VIRTUAL06
    case 0xC11B66: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000006u : 0x00E406u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/selection_menu.asm:220 LOADPTR UNKNOWN_C3E3F8+14, @VIRTUAL06
    // Overlapping static entry reached from 0xC11B66.
    case 0xC11B68: {
        Instruction step(cpu, 0xE4, 0x000085u, 2u, AddressMode::DirectPage);
        step.compare_x();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/text/selection_menu.asm:220 LOADPTR UNKNOWN_C3E3F8+14, @VIRTUAL06
    case 0xC11B69: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/text/selection_menu.asm:220 LOADPTR UNKNOWN_C3E3F8+14, @VIRTUAL06
    // Overlapping static entry reached from 0xC11B68.
    case 0xC11B6A: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/selection_menu.asm:220 LOADPTR UNKNOWN_C3E3F8+14, @VIRTUAL06
    case 0xC11B6B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C3u : 0x0000C3u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/selection_menu.asm:220 LOADPTR UNKNOWN_C3E3F8+14, @VIRTUAL06
    // Overlapping static entry reached from 0xC11B6A.
    case 0xC11B6C: {
        Instruction step(cpu, 0xC3, 0x000000u, 2u, AddressMode::StackRelative);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/selection_menu.asm:220 LOADPTR UNKNOWN_C3E3F8+14, @VIRTUAL06
    // Overlapping static entry reached from 0xC11B6B.
    case 0xC11B6D: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/text/selection_menu.asm:220 LOADPTR UNKNOWN_C3E3F8+14, @VIRTUAL06
    case 0xC11B6E: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:221 LDA @LOCAL04
    case 0xC11B70: {
        Instruction step(cpu, 0xA5, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:222 CLC
    case 0xC11B72: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/selection_menu.asm:223 ADC @VIRTUAL06
    case 0xC11B73: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/selection_menu.asm:224 STA @VIRTUAL06
    case 0xC11B75: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:225 STA @LOCAL00
    case 0xC11B77: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:226 LDA @VIRTUAL06+2
    case 0xC11B79: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:227 STA @LOCAL00+2
    case 0xC11B7B: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:228 LDY @LOCAL07
    case 0xC11B7D: {
        Instruction step(cpu, 0xA4, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/selection_menu.asm:229 LDX #2
    case 0xC11B7F: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/selection_menu.asm:229 LDX #2
    // Overlapping static entry reached from 0xC11B7F.
    case 0xC11B81: {
        Instruction step(cpu, 0x00, 0x0000E2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu.asm:230 SEP #PROC_FLAGS::ACCUM8
    case 0xC11B82: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/selection_menu.asm:231 LDA #0
    case 0xC11B84: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x002200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:232 JSL PREPARE_VRAM_COPY
    case 0xC11B86: {
        Instruction step(cpu, 0x22, 0xC08616u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/selection_menu.asm:232 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC11B84.
    case 0xC11B87: {
        Instruction step(cpu, 0x16, 0x000086u, 2u, AddressMode::DirectPageIndexedX);
        step.shift_left();
        return step.finish();
    }
    // src/text/selection_menu.asm:232 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC11B87.
    case 0xC11B89: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000A9u : 0x000AA9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/selection_menu.asm:234 LOADPTR UNKNOWN_C3E3F8+18, @VIRTUAL06
    case 0xC11B8A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Au : 0x00E40Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/selection_menu.asm:234 LOADPTR UNKNOWN_C3E3F8+18, @VIRTUAL06
    // Overlapping static entry reached from 0xC11B89.
    case 0xC11B8B: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/selection_menu.asm:234 LOADPTR UNKNOWN_C3E3F8+18, @VIRTUAL06
    // Overlapping static entry reached from 0xC11B8A.
    case 0xC11B8C: {
        Instruction step(cpu, 0xE4, 0x000085u, 2u, AddressMode::DirectPage);
        step.compare_x();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/text/selection_menu.asm:234 LOADPTR UNKNOWN_C3E3F8+18, @VIRTUAL06
    case 0xC11B8D: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/text/selection_menu.asm:234 LOADPTR UNKNOWN_C3E3F8+18, @VIRTUAL06
    // Overlapping static entry reached from 0xC11B8C.
    case 0xC11B8E: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/selection_menu.asm:234 LOADPTR UNKNOWN_C3E3F8+18, @VIRTUAL06
    case 0xC11B8F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C3u : 0x0000C3u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/selection_menu.asm:234 LOADPTR UNKNOWN_C3E3F8+18, @VIRTUAL06
    // Overlapping static entry reached from 0xC11B8E.
    case 0xC11B90: {
        Instruction step(cpu, 0xC3, 0x000000u, 2u, AddressMode::StackRelative);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/selection_menu.asm:234 LOADPTR UNKNOWN_C3E3F8+18, @VIRTUAL06
    // Overlapping static entry reached from 0xC11B8F.
    case 0xC11B91: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/text/selection_menu.asm:234 LOADPTR UNKNOWN_C3E3F8+18, @VIRTUAL06
    case 0xC11B92: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:235 LDA @LOCAL04
    case 0xC11B94: {
        Instruction step(cpu, 0xA5, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:236 CLC
    case 0xC11B96: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/selection_menu.asm:237 ADC @VIRTUAL06
    case 0xC11B97: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/selection_menu.asm:238 STA @VIRTUAL06
    case 0xC11B99: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:239 STA @LOCAL00
    case 0xC11B9B: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:240 LDA @VIRTUAL06+2
    case 0xC11B9D: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:241 STA @LOCAL00+2
    case 0xC11B9F: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:242 LDA @LOCAL07
    case 0xC11BA1: {
        Instruction step(cpu, 0xA5, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:243 CLC
    case 0xC11BA3: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/selection_menu.asm:244 ADC #32
    case 0xC11BA4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/selection_menu.asm:244 ADC #32
    // Overlapping static entry reached from 0xC11BA4.
    case 0xC11BA6: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu.asm:245 TAY
    case 0xC11BA7: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/text/selection_menu.asm:246 LDX #2
    case 0xC11BA8: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/selection_menu.asm:246 LDX #2
    // Overlapping static entry reached from 0xC11BA8.
    case 0xC11BAA: {
        Instruction step(cpu, 0x00, 0x0000E2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu.asm:247 SEP #PROC_FLAGS::ACCUM8
    case 0xC11BAB: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/selection_menu.asm:248 LDA #0
    case 0xC11BAD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x002200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:249 JSL PREPARE_VRAM_COPY
    case 0xC11BAF: {
        Instruction step(cpu, 0x22, 0xC08616u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/selection_menu.asm:249 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC11BAD.
    case 0xC11BB0: {
        Instruction step(cpu, 0x16, 0x000086u, 2u, AddressMode::DirectPageIndexedX);
        step.shift_left();
        return step.finish();
    }
    // src/text/selection_menu.asm:249 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC11BB0.
    case 0xC11BB2: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000A2u : 0x0000A2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/text/selection_menu.asm:251 LDX #0
    case 0xC11BB3: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/selection_menu.asm:251 LDX #0
    // Overlapping static entry reached from 0xC11BB2.
    case 0xC11BB4: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu.asm:251 LDX #0
    // Overlapping static entry reached from 0xC11BB3.
    case 0xC11BB5: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu.asm:252 STX @LOCAL07
    case 0xC11BB6: {
        Instruction step(cpu, 0x86, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/selection_menu.asm:253 JMP @UNKNOWN37
    case 0xC11BB8: {
        Instruction step(cpu, 0x4C, 0x001EBEu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/selection_menu.asm:255 JSL UNKNOWN_C12E42
    case 0xC11BBB: {
        Instruction step(cpu, 0x22, 0xC12E42u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/selection_menu.asm:256 LDA PAD_PRESS
    case 0xC11BBF: {
        Instruction step(cpu, 0xAD, 0x00006Du, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:257 AND #PAD::UP
    case 0xC11BC2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x000800u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:257 AND #PAD::UP
    // Overlapping static entry reached from 0xC11BC2.
    case 0xC11BC4: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // src/text/selection_menu.asm:258 BEQ @UNKNOWN15
    case 0xC11BC5: {
        Instruction step(cpu, 0xF0, 0x00002Eu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/selection_menu.asm:259 LDX @VIRTUAL04
    case 0xC11BC7: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/selection_menu.asm:260 LDA a:menu_option::text_x,X
    case 0xC11BC9: {
        Instruction step(cpu, 0xBD, 0x000008u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:261 STA @LOCAL07
    case 0xC11BCC: {
        Instruction step(cpu, 0x85, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:262 STZ @LOCAL00
    case 0xC11BCE: {
        Instruction step(cpu, 0x64, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/text/selection_menu.asm:263 LDA #SFX::CURSOR3
    case 0xC11BD0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:263 LDA #SFX::CURSOR3
    // Overlapping static entry reached from 0xC11BD0.
    case 0xC11BD2: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu.asm:264 STA @LOCAL00+2
    case 0xC11BD3: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:265 LDA @LOCAL07
    case 0xC11BD5: {
        Instruction step(cpu, 0xA5, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:266 STA @LOCAL01
    case 0xC11BD7: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:267 LDY #window_stats::height
    case 0xC11BD9: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00000Cu : 0x00000Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/selection_menu.asm:267 LDY #window_stats::height
    // Overlapping static entry reached from 0xC11BD9.
    case 0xC11BDB: {
        Instruction step(cpu, 0x00, 0x0000B1u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu.asm:268 LDA (@LOCAL0A),Y
    case 0xC11BDC: {
        Instruction step(cpu, 0xB1, 0x000024u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:269 LSR
    case 0xC11BDE: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/text/selection_menu.asm:270 STA @LOCAL02
    case 0xC11BDF: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:271 LDY #.LOWORD(-1)
    case 0xC11BE1: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/selection_menu.asm:271 LDY #.LOWORD(-1)
    // Overlapping static entry reached from 0xC11BE1.
    case 0xC11BE3: {
        Instruction step(cpu, 0xFF, 0xBD04A6u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/selection_menu.asm:272 LDX @VIRTUAL04
    case 0xC11BE4: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/selection_menu.asm:273 LDA a:menu_option::text_y,X
    case 0xC11BE6: {
        Instruction step(cpu, 0xBD, 0x00000Au, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:273 LDA a:menu_option::text_y,X
    // Overlapping static entry reached from 0xC11BE3.
    case 0xC11BE7: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/selection_menu.asm:273 LDA a:menu_option::text_y,X
    // Overlapping static entry reached from 0xC11BE7.
    case 0xC11BE8: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu.asm:274 TAX
    case 0xC11BE9: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/selection_menu.asm:275 LDA @LOCAL07
    case 0xC11BEA: {
        Instruction step(cpu, 0xA5, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:276 JSL MOVE_CURSOR
    case 0xC11BEC: {
        Instruction step(cpu, 0x22, 0xC118E7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/selection_menu.asm:277 STA @LOCAL06
    case 0xC11BF0: {
        Instruction step(cpu, 0x85, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:278 JMP @UNKNOWN39
    case 0xC11BF2: {
        Instruction step(cpu, 0x4C, 0x001ECBu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/selection_menu.asm:280 LDA PAD_PRESS
    case 0xC11BF5: {
        Instruction step(cpu, 0xAD, 0x00006Du, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:281 AND #PAD::LEFT
    case 0xC11BF8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x000200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:281 AND #PAD::LEFT
    // Overlapping static entry reached from 0xC11BF8.
    case 0xC11BFA: {
        Instruction step(cpu, 0x02, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/text/selection_menu.asm:282 BEQ @UNKNOWN16
    case 0xC11BFB: {
        Instruction step(cpu, 0xF0, 0x000032u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/selection_menu.asm:283 LDX @VIRTUAL04
    case 0xC11BFD: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/selection_menu.asm:284 LDA a:menu_option::text_y,X
    case 0xC11BFF: {
        Instruction step(cpu, 0xBD, 0x00000Au, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:285 STA @LOCAL09
    case 0xC11C02: {
        Instruction step(cpu, 0x85, 0x000022u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:286 LDA #.LOWORD(-1)
    case 0xC11C04: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:286 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC11C04.
    case 0xC11C06: {
        Instruction step(cpu, 0xFF, 0xA90E85u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/selection_menu.asm:287 STA @LOCAL00
    case 0xC11C07: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:288 LDA #SFX::CURSOR2
    case 0xC11C09: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:288 LDA #SFX::CURSOR2
    // Overlapping static entry reached from 0xC11C06.
    case 0xC11C0A: {
        Instruction step(cpu, 0x02, 0x000000u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/text/selection_menu.asm:288 LDA #SFX::CURSOR2
    // Overlapping static entry reached from 0xC11C09.
    case 0xC11C0B: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu.asm:289 STA @LOCAL00+2
    case 0xC11C0C: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:290 LDY #window_stats::width
    case 0xC11C0E: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/selection_menu.asm:290 LDY #window_stats::width
    // Overlapping static entry reached from 0xC11C0E.
    case 0xC11C10: {
        Instruction step(cpu, 0x00, 0x0000B1u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu.asm:291 LDA (@LOCAL0A),Y
    case 0xC11C11: {
        Instruction step(cpu, 0xB1, 0x000024u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:292 STA @LOCAL01
    case 0xC11C13: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:293 LDA @LOCAL09
    case 0xC11C15: {
        Instruction step(cpu, 0xA5, 0x000022u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:294 STA @LOCAL02
    case 0xC11C17: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:295 LDY #0
    case 0xC11C19: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/selection_menu.asm:295 LDY #0
    // Overlapping static entry reached from 0xC11C19.
    case 0xC11C1B: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu.asm:296 TAX
    case 0xC11C1C: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/selection_menu.asm:297 STX @LOCAL03
    case 0xC11C1D: {
        Instruction step(cpu, 0x86, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/selection_menu.asm:298 LDX @VIRTUAL04
    case 0xC11C1F: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/selection_menu.asm:299 LDA a:menu_option::text_x,X
    case 0xC11C21: {
        Instruction step(cpu, 0xBD, 0x000008u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:300 LDX @LOCAL03
    case 0xC11C24: {
        Instruction step(cpu, 0xA6, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/selection_menu.asm:301 JSL MOVE_CURSOR
    case 0xC11C26: {
        Instruction step(cpu, 0x22, 0xC118E7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/selection_menu.asm:302 STA @LOCAL06
    case 0xC11C2A: {
        Instruction step(cpu, 0x85, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:303 JMP @UNKNOWN39
    case 0xC11C2C: {
        Instruction step(cpu, 0x4C, 0x001ECBu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/selection_menu.asm:305 LDA PAD_PRESS
    case 0xC11C2F: {
        Instruction step(cpu, 0xAD, 0x00006Du, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:306 AND #PAD::DOWN
    case 0xC11C32: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x000400u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:306 AND #PAD::DOWN
    // Overlapping static entry reached from 0xC11C32.
    case 0xC11C34: {
        Instruction step(cpu, 0x04, 0x0000F0u, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/text/selection_menu.asm:307 BEQ @UNKNOWN17
    case 0xC11C35: {
        Instruction step(cpu, 0xF0, 0x00002Bu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/selection_menu.asm:307 BEQ @UNKNOWN17
    // Overlapping static entry reached from 0xC11C34.
    case 0xC11C36: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // src/text/selection_menu.asm:308 LDX @VIRTUAL04
    case 0xC11C37: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/selection_menu.asm:309 LDA a:menu_option::text_x,X
    case 0xC11C39: {
        Instruction step(cpu, 0xBD, 0x000008u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:310 STA @LOCAL07
    case 0xC11C3C: {
        Instruction step(cpu, 0x85, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:311 STZ @LOCAL00
    case 0xC11C3E: {
        Instruction step(cpu, 0x64, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/text/selection_menu.asm:312 LDA #SFX::CURSOR3
    case 0xC11C40: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:312 LDA #SFX::CURSOR3
    // Overlapping static entry reached from 0xC11C40.
    case 0xC11C42: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu.asm:313 STA @LOCAL00+2
    case 0xC11C43: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:314 LDA @LOCAL07
    case 0xC11C45: {
        Instruction step(cpu, 0xA5, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:315 STA @LOCAL01
    case 0xC11C47: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:316 LDA #.LOWORD(-1)
    case 0xC11C49: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:316 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC11C49.
    case 0xC11C4B: {
        Instruction step(cpu, 0xFF, 0xA01485u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/selection_menu.asm:317 STA @LOCAL02
    case 0xC11C4C: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:318 LDY #1
    case 0xC11C4E: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/selection_menu.asm:318 LDY #1
    // Overlapping static entry reached from 0xC11C4B.
    case 0xC11C4F: {
        Instruction step(cpu, 0x01, 0x000000u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:318 LDY #1
    // Overlapping static entry reached from 0xC11C4E.
    case 0xC11C50: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu.asm:319 LDX @VIRTUAL04
    case 0xC11C51: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/selection_menu.asm:320 LDA a:menu_option::text_y,X
    case 0xC11C53: {
        Instruction step(cpu, 0xBD, 0x00000Au, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:321 TAX
    case 0xC11C56: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/selection_menu.asm:322 LDA @LOCAL07
    case 0xC11C57: {
        Instruction step(cpu, 0xA5, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:323 JSL MOVE_CURSOR
    case 0xC11C59: {
        Instruction step(cpu, 0x22, 0xC118E7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/selection_menu.asm:324 STA @LOCAL06
    case 0xC11C5D: {
        Instruction step(cpu, 0x85, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:325 JMP @UNKNOWN39
    case 0xC11C5F: {
        Instruction step(cpu, 0x4C, 0x001ECBu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/selection_menu.asm:327 LDA PAD_PRESS
    case 0xC11C62: {
        Instruction step(cpu, 0xAD, 0x00006Du, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:328 AND #PAD::RIGHT
    case 0xC11C65: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x000100u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:328 AND #PAD::RIGHT
    // Overlapping static entry reached from 0xC11C65.
    case 0xC11C67: {
        Instruction step(cpu, 0x01, 0x0000F0u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:329 BEQ @UNKNOWN18
    case 0xC11C68: {
        Instruction step(cpu, 0xF0, 0x000030u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/selection_menu.asm:329 BEQ @UNKNOWN18
    // Overlapping static entry reached from 0xC11C67.
    case 0xC11C69: {
        Instruction step(cpu, 0x30, 0x0000A6u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/text/selection_menu.asm:330 LDX @VIRTUAL04
    case 0xC11C6A: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/selection_menu.asm:330 LDX @VIRTUAL04
    // Overlapping static entry reached from 0xC11C69.
    case 0xC11C6B: {
        Instruction step(cpu, 0x04, 0x0000BDu, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/text/selection_menu.asm:331 LDA a:menu_option::text_y,X
    case 0xC11C6C: {
        Instruction step(cpu, 0xBD, 0x00000Au, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:331 LDA a:menu_option::text_y,X
    // Overlapping static entry reached from 0xC11C6B.
    case 0xC11C6D: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/selection_menu.asm:331 LDA a:menu_option::text_y,X
    // Overlapping static entry reached from 0xC11C6D.
    case 0xC11C6E: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu.asm:332 STA @LOCAL09
    case 0xC11C6F: {
        Instruction step(cpu, 0x85, 0x000022u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:333 LDA #1
    case 0xC11C71: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:333 LDA #1
    // Overlapping static entry reached from 0xC11C71.
    case 0xC11C73: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu.asm:334 STA @LOCAL00
    case 0xC11C74: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:335 LDA #SFX::CURSOR2
    case 0xC11C76: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:335 LDA #SFX::CURSOR2
    // Overlapping static entry reached from 0xC11C76.
    case 0xC11C78: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu.asm:336 STA @LOCAL00+2
    case 0xC11C79: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:337 LDA #.LOWORD(-1)
    case 0xC11C7B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:337 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC11C7B.
    case 0xC11C7D: {
        Instruction step(cpu, 0xFF, 0xA51285u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/selection_menu.asm:338 STA @LOCAL01
    case 0xC11C7E: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:339 LDA @LOCAL09
    case 0xC11C80: {
        Instruction step(cpu, 0xA5, 0x000022u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:339 LDA @LOCAL09
    // Overlapping static entry reached from 0xC11C7D.
    case 0xC11C81: {
        Instruction step(cpu, 0x22, 0xA01485u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/selection_menu.asm:340 STA @LOCAL02
    case 0xC11C82: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:341 LDY #0
    case 0xC11C84: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/selection_menu.asm:341 LDY #0
    // Overlapping static entry reached from 0xC11C81.
    case 0xC11C85: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu.asm:341 LDY #0
    // Overlapping static entry reached from 0xC11C84.
    case 0xC11C86: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu.asm:342 TAX
    case 0xC11C87: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/selection_menu.asm:343 STX @LOCAL06
    case 0xC11C88: {
        Instruction step(cpu, 0x86, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/selection_menu.asm:344 LDX @VIRTUAL04
    case 0xC11C8A: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/selection_menu.asm:345 LDA a:menu_option::text_x,X
    case 0xC11C8C: {
        Instruction step(cpu, 0xBD, 0x000008u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:346 LDX @LOCAL06
    case 0xC11C8F: {
        Instruction step(cpu, 0xA6, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/selection_menu.asm:347 JSL MOVE_CURSOR
    case 0xC11C91: {
        Instruction step(cpu, 0x22, 0xC118E7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/selection_menu.asm:348 STA @LOCAL06
    case 0xC11C95: {
        Instruction step(cpu, 0x85, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:349 JMP @UNKNOWN39
    case 0xC11C97: {
        Instruction step(cpu, 0x4C, 0x001ECBu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/selection_menu.asm:351 LDA PAD_HELD
    case 0xC11C9A: {
        Instruction step(cpu, 0xAD, 0x000069u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:352 AND #PAD::UP
    case 0xC11C9D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x000800u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:352 AND #PAD::UP
    // Overlapping static entry reached from 0xC11C9D.
    case 0xC11C9F: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // src/text/selection_menu.asm:353 BEQ @UNKNOWN19
    case 0xC11CA0: {
        Instruction step(cpu, 0xF0, 0x000022u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/selection_menu.asm:354 STZ @LOCAL00
    case 0xC11CA2: {
        Instruction step(cpu, 0x64, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/text/selection_menu.asm:355 LDA #SFX::CURSOR3
    case 0xC11CA4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:355 LDA #SFX::CURSOR3
    // Overlapping static entry reached from 0xC11CA4.
    case 0xC11CA6: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu.asm:356 STA @LOCAL00+2
    case 0xC11CA7: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:357 LDY #.LOWORD(-1)
    case 0xC11CA9: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/selection_menu.asm:357 LDY #.LOWORD(-1)
    // Overlapping static entry reached from 0xC11CA9.
    case 0xC11CAB: {
        Instruction step(cpu, 0xFF, 0xBD04A6u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/selection_menu.asm:358 LDX @VIRTUAL04
    case 0xC11CAC: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/selection_menu.asm:359 LDA a:menu_option::text_y,X
    case 0xC11CAE: {
        Instruction step(cpu, 0xBD, 0x00000Au, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:359 LDA a:menu_option::text_y,X
    // Overlapping static entry reached from 0xC11CAB.
    case 0xC11CAF: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/selection_menu.asm:359 LDA a:menu_option::text_y,X
    // Overlapping static entry reached from 0xC11CAF.
    case 0xC11CB0: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu.asm:360 TAX
    case 0xC11CB1: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/selection_menu.asm:361 STX @LOCAL05
    case 0xC11CB2: {
        Instruction step(cpu, 0x86, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/selection_menu.asm:362 LDX @VIRTUAL04
    case 0xC11CB4: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/selection_menu.asm:363 LDA a:menu_option::text_x,X
    case 0xC11CB6: {
        Instruction step(cpu, 0xBD, 0x000008u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:364 LDX @LOCAL05
    case 0xC11CB9: {
        Instruction step(cpu, 0xA6, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/selection_menu.asm:365 JSL UNKNOWN_C20B65
    case 0xC11CBB: {
        Instruction step(cpu, 0x22, 0xC20B65u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/selection_menu.asm:366 STA @LOCAL06
    case 0xC11CBF: {
        Instruction step(cpu, 0x85, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:367 JMP @UNKNOWN39
    case 0xC11CC1: {
        Instruction step(cpu, 0x4C, 0x001ECBu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/selection_menu.asm:369 LDA PAD_HELD
    case 0xC11CC4: {
        Instruction step(cpu, 0xAD, 0x000069u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:370 AND #PAD::LEFT
    case 0xC11CC7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x000200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:370 AND #PAD::LEFT
    // Overlapping static entry reached from 0xC11CC7.
    case 0xC11CC9: {
        Instruction step(cpu, 0x02, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/text/selection_menu.asm:371 BEQ @UNKNOWN20
    case 0xC11CCA: {
        Instruction step(cpu, 0xF0, 0x000025u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/selection_menu.asm:372 LDA #.LOWORD(-1)
    case 0xC11CCC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:372 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC11CCC.
    case 0xC11CCE: {
        Instruction step(cpu, 0xFF, 0xA90E85u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/selection_menu.asm:373 STA @LOCAL00
    case 0xC11CCF: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:374 LDA #SFX::CURSOR2
    case 0xC11CD1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:374 LDA #SFX::CURSOR2
    // Overlapping static entry reached from 0xC11CCE.
    case 0xC11CD2: {
        Instruction step(cpu, 0x02, 0x000000u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/text/selection_menu.asm:374 LDA #SFX::CURSOR2
    // Overlapping static entry reached from 0xC11CD1.
    case 0xC11CD3: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu.asm:375 STA @LOCAL00+2
    case 0xC11CD4: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:376 LDY #0
    case 0xC11CD6: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/selection_menu.asm:376 LDY #0
    // Overlapping static entry reached from 0xC11CD6.
    case 0xC11CD8: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu.asm:377 LDX @VIRTUAL04
    case 0xC11CD9: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/selection_menu.asm:378 LDA a:menu_option::text_y,X
    case 0xC11CDB: {
        Instruction step(cpu, 0xBD, 0x00000Au, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:379 TAX
    case 0xC11CDE: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/selection_menu.asm:380 STX @LOCAL05
    case 0xC11CDF: {
        Instruction step(cpu, 0x86, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/selection_menu.asm:381 LDX @VIRTUAL04
    case 0xC11CE1: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/selection_menu.asm:382 LDA a:menu_option::text_x,X
    case 0xC11CE3: {
        Instruction step(cpu, 0xBD, 0x000008u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:383 LDX @LOCAL05
    case 0xC11CE6: {
        Instruction step(cpu, 0xA6, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/selection_menu.asm:384 JSL UNKNOWN_C20B65
    case 0xC11CE8: {
        Instruction step(cpu, 0x22, 0xC20B65u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/selection_menu.asm:385 STA @LOCAL06
    case 0xC11CEC: {
        Instruction step(cpu, 0x85, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:386 JMP @UNKNOWN39
    case 0xC11CEE: {
        Instruction step(cpu, 0x4C, 0x001ECBu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/selection_menu.asm:388 LDA PAD_HELD
    case 0xC11CF1: {
        Instruction step(cpu, 0xAD, 0x000069u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:389 AND #PAD::DOWN
    case 0xC11CF4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x000400u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:389 AND #PAD::DOWN
    // Overlapping static entry reached from 0xC11CF4.
    case 0xC11CF6: {
        Instruction step(cpu, 0x04, 0x0000F0u, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/text/selection_menu.asm:390 BEQ @UNKNOWN21
    case 0xC11CF7: {
        Instruction step(cpu, 0xF0, 0x000022u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/selection_menu.asm:390 BEQ @UNKNOWN21
    // Overlapping static entry reached from 0xC11CF6.
    case 0xC11CF8: {
        Instruction step(cpu, 0x22, 0xA90E64u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/selection_menu.asm:391 STZ @LOCAL00
    case 0xC11CF9: {
        Instruction step(cpu, 0x64, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/text/selection_menu.asm:392 LDA #SFX::CURSOR3
    case 0xC11CFB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:392 LDA #SFX::CURSOR3
    // Overlapping static entry reached from 0xC11CF8.
    case 0xC11CFC: {
        Instruction step(cpu, 0x03, 0x000000u, 2u, AddressMode::StackRelative);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:392 LDA #SFX::CURSOR3
    // Overlapping static entry reached from 0xC11CFB.
    case 0xC11CFD: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu.asm:393 STA @LOCAL00+2
    case 0xC11CFE: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:394 LDY #1
    case 0xC11D00: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/selection_menu.asm:394 LDY #1
    // Overlapping static entry reached from 0xC11D00.
    case 0xC11D02: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu.asm:395 LDX @VIRTUAL04
    case 0xC11D03: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/selection_menu.asm:396 LDA a:menu_option::text_y,X
    case 0xC11D05: {
        Instruction step(cpu, 0xBD, 0x00000Au, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:397 TAX
    case 0xC11D08: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/selection_menu.asm:398 STX @LOCAL03
    case 0xC11D09: {
        Instruction step(cpu, 0x86, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/selection_menu.asm:399 LDX @VIRTUAL04
    case 0xC11D0B: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/selection_menu.asm:400 LDA a:menu_option::text_x,X
    case 0xC11D0D: {
        Instruction step(cpu, 0xBD, 0x000008u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:401 LDX @LOCAL03
    case 0xC11D10: {
        Instruction step(cpu, 0xA6, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/selection_menu.asm:402 JSL UNKNOWN_C20B65
    case 0xC11D12: {
        Instruction step(cpu, 0x22, 0xC20B65u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/selection_menu.asm:403 STA @LOCAL06
    case 0xC11D16: {
        Instruction step(cpu, 0x85, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:404 JMP @UNKNOWN39
    case 0xC11D18: {
        Instruction step(cpu, 0x4C, 0x001ECBu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/selection_menu.asm:406 LDA PAD_HELD
    case 0xC11D1B: {
        Instruction step(cpu, 0xAD, 0x000069u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:407 AND #PAD::RIGHT
    case 0xC11D1E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x000100u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:407 AND #PAD::RIGHT
    // Overlapping static entry reached from 0xC11D1E.
    case 0xC11D20: {
        Instruction step(cpu, 0x01, 0x0000F0u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:408 BEQ @UNKNOWN22
    case 0xC11D21: {
        Instruction step(cpu, 0xF0, 0x000025u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/selection_menu.asm:408 BEQ @UNKNOWN22
    // Overlapping static entry reached from 0xC11D20.
    case 0xC11D22: {
        Instruction step(cpu, 0x25, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:409 LDA #1
    case 0xC11D23: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:409 LDA #1
    // Overlapping static entry reached from 0xC11D22.
    case 0xC11D24: {
        Instruction step(cpu, 0x01, 0x000000u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:409 LDA #1
    // Overlapping static entry reached from 0xC11D23.
    case 0xC11D25: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu.asm:410 STA @LOCAL00
    case 0xC11D26: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:411 LDA #SFX::CURSOR2
    case 0xC11D28: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:411 LDA #SFX::CURSOR2
    // Overlapping static entry reached from 0xC11D28.
    case 0xC11D2A: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu.asm:412 STA @LOCAL00+2
    case 0xC11D2B: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:413 LDY #0
    case 0xC11D2D: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/selection_menu.asm:413 LDY #0
    // Overlapping static entry reached from 0xC11D2D.
    case 0xC11D2F: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu.asm:414 LDX @VIRTUAL04
    case 0xC11D30: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/selection_menu.asm:415 LDA a:menu_option::text_y,X
    case 0xC11D32: {
        Instruction step(cpu, 0xBD, 0x00000Au, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:416 TAX
    case 0xC11D35: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/selection_menu.asm:417 STX @LOCAL06
    case 0xC11D36: {
        Instruction step(cpu, 0x86, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/selection_menu.asm:418 LDX @VIRTUAL04
    case 0xC11D38: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/selection_menu.asm:419 LDA a:menu_option::text_x,X
    case 0xC11D3A: {
        Instruction step(cpu, 0xBD, 0x000008u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:420 LDX @LOCAL06
    case 0xC11D3D: {
        Instruction step(cpu, 0xA6, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/selection_menu.asm:421 JSL UNKNOWN_C20B65
    case 0xC11D3F: {
        Instruction step(cpu, 0x22, 0xC20B65u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/selection_menu.asm:422 STA @LOCAL06
    case 0xC11D43: {
        Instruction step(cpu, 0x85, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:423 JMP @UNKNOWN39
    case 0xC11D45: {
        Instruction step(cpu, 0x4C, 0x001ECBu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/selection_menu.asm:425 LDA PAD_PRESS
    case 0xC11D48: {
        Instruction step(cpu, 0xAD, 0x00006Du, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:426 AND #PAD::A_BUTTON | PAD::L_BUTTON
    case 0xC11D4B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000A0u : 0x0000A0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:426 AND #PAD::A_BUTTON | PAD::L_BUTTON
    // Overlapping static entry reached from 0xC1800E.
    case 0xC11D4C: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x00D000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/selection_menu.asm:426 AND #PAD::A_BUTTON | PAD::L_BUTTON
    // Overlapping static entry reached from 0xC11D4B.
    case 0xC11D4D: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/selection_menu.asm:427 BEQL @UNKNOWN33
    case 0xC11D4E: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/selection_menu.asm:427 BEQL @UNKNOWN33
    // Overlapping static entry reached from 0xC11D4C.
    case 0xC11D4F: {
        Instruction step(cpu, 0x03, 0x00004Cu, 2u, AddressMode::StackRelative);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/selection_menu.asm:427 BEQL @UNKNOWN33
    case 0xC11D50: {
        Instruction step(cpu, 0x4C, 0x001E76u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/selection_menu.asm:427 BEQL @UNKNOWN33
    // Overlapping static entry reached from 0xC11D4F.
    case 0xC11D51: {
        Instruction step(cpu, 0x76, 0x00001Eu, 2u, AddressMode::DirectPageIndexedX);
        step.rotate_right();
        return step.finish();
    }
    // src/text/selection_menu.asm:428 JSR SET_INSTANT_PRINTING
    case 0xC11D53: {
        Instruction step(cpu, 0x22, 0xC3E4D4u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/selection_menu.asm:429 LDX @VIRTUAL04
    case 0xC11D57: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/selection_menu.asm:430 LDA a:menu_option::page,X
    case 0xC11D59: {
        Instruction step(cpu, 0xBD, 0x000006u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/selection_menu.asm:431 BEQL @UNKNOWN30
    case 0xC11D5C: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/selection_menu.asm:431 BEQL @UNKNOWN30
    case 0xC11D5E: {
        Instruction step(cpu, 0x4C, 0x001E22u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/selection_menu.asm:432 LDX @VIRTUAL04
    case 0xC11D61: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/selection_menu.asm:433 LDA a:menu_option::sound_effect,X
    case 0xC11D63: {
        Instruction step(cpu, 0xBD, 0x00000Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:434 AND #$00FF
    case 0xC11D66: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:434 AND #$00FF
    // Overlapping static entry reached from 0xC11D66.
    case 0xC11D68: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu.asm:435 JSL PLAY_SOUND
    case 0xC11D69: {
        Instruction step(cpu, 0x22, 0xC0ABE0u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/selection_menu.asm:436 LDX @VIRTUAL04
    case 0xC11D6D: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/selection_menu.asm:437 LDY a:menu_option::text_y,X
    case 0xC11D6F: {
        Instruction step(cpu, 0xBC, 0x00000Au, 3u, AddressMode::AbsoluteIndexedX);
        step.load_y();
        return step.finish();
    }
    // src/text/selection_menu.asm:438 LDX @VIRTUAL04
    case 0xC11D72: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/selection_menu.asm:439 LDA a:menu_option::text_x,X
    case 0xC11D74: {
        Instruction step(cpu, 0xBD, 0x000008u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:440 TAX
    case 0xC11D77: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/selection_menu.asm:441 LDA @VIRTUAL04
    case 0xC11D78: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:442 JSL UNKNOWN_C43CD2
    case 0xC11D7A: {
        Instruction step(cpu, 0x22, 0xC43CD2u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/selection_menu.asm:443 LDA #47
    case 0xC11D7E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00002Fu : 0x00002Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:443 LDA #47
    // Overlapping static entry reached from 0xC11D7E.
    case 0xC11D80: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu.asm:444 JSR UNKNOWN_C10D60
    case 0xC11D81: {
        Instruction step(cpu, 0x20, 0x000D60u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/selection_menu.asm:445 LDA #6
    case 0xC11D84: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:445 LDA #6
    // Overlapping static entry reached from 0xC11D84.
    case 0xC11D86: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu.asm:446 JSR UNKNOWN_C10FEA
    case 0xC11D87: {
        Instruction step(cpu, 0x20, 0x000FEAu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/selection_menu.asm:447 LDA ENABLE_WORD_WRAP
    case 0xC11D8A: {
        Instruction step(cpu, 0xAD, 0x005E6Eu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:448 BEQ @UNKNOWN27
    case 0xC11D8D: {
        Instruction step(cpu, 0xF0, 0x000066u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/selection_menu.asm:449 LDA f:ALLOW_TEXT_OVERFLOW
    case 0xC11D8F: {
        Instruction step(cpu, 0xAF, 0x7EB49Du, 4u, AddressMode::Long);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:450 AND #$00FF
    case 0xC11D93: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:450 AND #$00FF
    // Overlapping static entry reached from 0xC11D93.
    case 0xC11D95: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu.asm:451 CMP #1
    case 0xC11D96: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:451 CMP #1
    // Overlapping static entry reached from 0xC11D96.
    case 0xC11D98: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu.asm:452 BNE @UNKNOWN26
    case 0xC11D99: {
        Instruction step(cpu, 0xD0, 0x000034u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/selection_menu.asm:453 LDA CURRENT_FOCUS_WINDOW
    case 0xC11D9B: {
        Instruction step(cpu, 0xAD, 0x008958u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:454 CMP #WINDOW::FILE_SELECT_MAIN
    case 0xC11D9E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000013u : 0x000013u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:454 CMP #WINDOW::FILE_SELECT_MAIN
    // Overlapping static entry reached from 0xC11D9E.
    case 0xC11DA0: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu.asm:455 BNE @UNKNOWN25
    case 0xC11DA1: {
        Instruction step(cpu, 0xD0, 0x000006u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/selection_menu.asm:456 JSL UNKNOWN_C43B15
    case 0xC11DA3: {
        Instruction step(cpu, 0x22, 0xC43B15u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/selection_menu.asm:457 BRA @UNKNOWN28
    case 0xC11DA7: {
        Instruction step(cpu, 0x80, 0x000050u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/selection_menu.asm:459 LDA @VIRTUAL04
    case 0xC11DA9: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:460 CLC
    case 0xC11DAB: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/selection_menu.asm:461 ADC #menu_option::label
    case 0xC11DAC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000013u : 0x000013u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/selection_menu.asm:461 ADC #menu_option::label
    // Overlapping static entry reached from 0xC11DAC.
    case 0xC11DAE: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/text/selection_menu.asm:462 PROMOTENEARPTRA @VIRTUAL06
    case 0xC11DAF: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:909 PHB
    // Macro caller: src/text/selection_menu.asm:462 PROMOTENEARPTRA @VIRTUAL06
    case 0xC11DB1: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/text/selection_menu.asm:462 PROMOTENEARPTRA @VIRTUAL06
    case 0xC11DB2: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:911 PLA
    // Macro caller: src/text/selection_menu.asm:462 PROMOTENEARPTRA @VIRTUAL06
    case 0xC11DB4: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/text/selection_menu.asm:462 PROMOTENEARPTRA @VIRTUAL06
    case 0xC11DB5: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/text/selection_menu.asm:462 PROMOTENEARPTRA @VIRTUAL06
    case 0xC11DB7: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/text/selection_menu.asm:463 REP #PROC_FLAGS::ACCUM8
    case 0xC11DB9: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/selection_menu.asm:464 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC11DBB: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/selection_menu.asm:464 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC11DBD: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/selection_menu.asm:464 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC11DBF: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/selection_menu.asm:464 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC11DC1: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:465 LDX #1
    case 0xC11DC3: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/selection_menu.asm:465 LDX #1
    // Overlapping static entry reached from 0xC11DC3.
    case 0xC11DC5: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu.asm:466 LDA #4
    case 0xC11DC6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:466 LDA #4
    // Overlapping static entry reached from 0xC11DC6.
    case 0xC11DC8: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu.asm:467 JSL UNKNOWN_C43BB9
    case 0xC11DC9: {
        Instruction step(cpu, 0x22, 0xC43BB9u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/selection_menu.asm:468 BRA @UNKNOWN28
    case 0xC11DCD: {
        Instruction step(cpu, 0x80, 0x00002Au, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/selection_menu.asm:470 LDA @VIRTUAL04
    case 0xC11DCF: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:471 CLC
    case 0xC11DD1: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/selection_menu.asm:472 ADC #menu_option::label
    case 0xC11DD2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000013u : 0x000013u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/selection_menu.asm:472 ADC #menu_option::label
    // Overlapping static entry reached from 0xC11DD2.
    case 0xC11DD4: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/text/selection_menu.asm:473 PROMOTENEARPTRA @VIRTUAL06
    case 0xC11DD5: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:909 PHB
    // Macro caller: src/text/selection_menu.asm:473 PROMOTENEARPTRA @VIRTUAL06
    case 0xC11DD7: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/text/selection_menu.asm:473 PROMOTENEARPTRA @VIRTUAL06
    case 0xC11DD8: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:911 PLA
    // Macro caller: src/text/selection_menu.asm:473 PROMOTENEARPTRA @VIRTUAL06
    case 0xC11DDA: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/text/selection_menu.asm:473 PROMOTENEARPTRA @VIRTUAL06
    case 0xC11DDB: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/text/selection_menu.asm:473 PROMOTENEARPTRA @VIRTUAL06
    case 0xC11DDD: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/text/selection_menu.asm:474 REP #PROC_FLAGS::ACCUM8
    case 0xC11DDF: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/selection_menu.asm:475 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC11DE1: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/selection_menu.asm:475 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC11DE3: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/selection_menu.asm:475 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC11DE5: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/selection_menu.asm:475 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC11DE7: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:476 LDX #1
    case 0xC11DE9: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/selection_menu.asm:476 LDX #1
    // Overlapping static entry reached from 0xC11DE9.
    case 0xC11DEB: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu.asm:477 LDA #.LOWORD(-1)
    case 0xC11DEC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:477 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC11DEC.
    case 0xC11DEE: {
        Instruction step(cpu, 0xFF, 0x3BB922u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/selection_menu.asm:478 JSL UNKNOWN_C43BB9
    case 0xC11DEF: {
        Instruction step(cpu, 0x22, 0xC43BB9u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/selection_menu.asm:478 JSL UNKNOWN_C43BB9
    // Overlapping static entry reached from 0xC11DEE.
    case 0xC11DF2: {
        Instruction step(cpu, 0xC4, 0x000080u, 2u, AddressMode::DirectPage);
        step.compare_y();
        return step.finish();
    }
    // src/text/selection_menu.asm:479 BRA @UNKNOWN28
    case 0xC11DF3: {
        Instruction step(cpu, 0x80, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/selection_menu.asm:479 BRA @UNKNOWN28
    // Overlapping static entry reached from 0xC11DF2.
    case 0xC11DF4: {
        Instruction step(cpu, 0x04, 0x000022u, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/text/selection_menu.asm:481 JSL UNKNOWN_C43B15
    case 0xC11DF5: {
        Instruction step(cpu, 0x22, 0xC43B15u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/selection_menu.asm:481 JSL UNKNOWN_C43B15
    // Overlapping static entry reached from 0xC11DF4.
    case 0xC11DF6: {
        Instruction step(cpu, 0x15, 0x00003Bu, 2u, AddressMode::DirectPageIndexedX);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:481 JSL UNKNOWN_C43B15
    // Overlapping static entry reached from 0xC11DF6.
    case 0xC11DF8: {
        Instruction step(cpu, 0xC4, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.compare_y();
        return step.finish();
    }
    // src/text/selection_menu.asm:483 LDA #0
    case 0xC11DF9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:483 LDA #0
    // Overlapping static entry reached from 0xC11DF8.
    case 0xC11DFA: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu.asm:483 LDA #0
    // Overlapping static entry reached from 0xC11DF9.
    case 0xC11DFB: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu.asm:484 JSR UNKNOWN_C10FEA
    case 0xC11DFC: {
        Instruction step(cpu, 0x20, 0x000FEAu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/selection_menu.asm:485 JSR CLEAR_INSTANT_PRINTING
    case 0xC11DFF: {
        Instruction step(cpu, 0x22, 0xC3E4CAu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/selection_menu.asm:486 LDA @LOCAL08
    case 0xC11E03: {
        Instruction step(cpu, 0xA5, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:487 LDY #window_stats::selected_option
    case 0xC11E05: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00002Fu : 0x00002Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/selection_menu.asm:487 LDY #window_stats::selected_option
    // Overlapping static entry reached from 0xC11E05.
    case 0xC11E07: {
        Instruction step(cpu, 0x00, 0x000091u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu.asm:488 STA (@LOCAL0A),Y
    case 0xC11E08: {
        Instruction step(cpu, 0x91, 0x000024u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:489 LDX @VIRTUAL04
    case 0xC11E0A: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/selection_menu.asm:490 LDA a:menu_option::unknown0,X
    case 0xC11E0C: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:491 CMP #1
    case 0xC11E0F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:491 CMP #1
    // Overlapping static entry reached from 0xC11E0F.
    case 0xC11E11: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu.asm:492 BNE @UNKNOWN29
    case 0xC11E12: {
        Instruction step(cpu, 0xD0, 0x000006u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/selection_menu.asm:493 LDA @LOCAL08
    case 0xC11E14: {
        Instruction step(cpu, 0xA5, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:494 INC
    case 0xC11E16: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/text/selection_menu.asm:495 JMP @UNKNOWN44
    case 0xC11E17: {
        Instruction step(cpu, 0x4C, 0x001F58u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/selection_menu.asm:497 LDX @VIRTUAL04
    case 0xC11E1A: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/selection_menu.asm:498 LDA a:menu_option::userdata,X
    case 0xC11E1C: {
        Instruction step(cpu, 0xBD, 0x00000Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:499 JMP @UNKNOWN44
    case 0xC11E1F: {
        Instruction step(cpu, 0x4C, 0x001F58u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/selection_menu.asm:501 LDA #SFX::CURSOR2
    case 0xC11E22: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:501 LDA #SFX::CURSOR2
    // Overlapping static entry reached from 0xC11E22.
    case 0xC11E24: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu.asm:502 JSL PLAY_SOUND
    case 0xC11E25: {
        Instruction step(cpu, 0x22, 0xC0ABE0u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/selection_menu.asm:503 JSR UNKNOWN_C10FA3
    case 0xC11E29: {
        Instruction step(cpu, 0x20, 0x000FA3u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/selection_menu.asm:504 LDA @LOCAL0A
    case 0xC11E2C: {
        Instruction step(cpu, 0xA5, 0x000024u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:505 CLC
    case 0xC11E2E: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/selection_menu.asm:506 ADC #window_stats::menu_page_number
    case 0xC11E2F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000033u : 0x000033u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/selection_menu.asm:506 ADC #window_stats::menu_page_number
    // Overlapping static entry reached from 0xC11E2F.
    case 0xC11E31: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu.asm:507 TAX
    case 0xC11E32: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/selection_menu.asm:508 STX @LOCAL09
    case 0xC11E33: {
        Instruction step(cpu, 0x86, 0x000022u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/selection_menu.asm:509 LDA __BSS_START__,X
    case 0xC11E35: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:510 STA @LOCAL07
    case 0xC11E38: {
        Instruction step(cpu, 0x85, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:511 LDX @VIRTUAL04
    case 0xC11E3A: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/selection_menu.asm:512 LDA a:menu_option::previous,X
    case 0xC11E3C: {
        Instruction step(cpu, 0xBD, 0x000004u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/text/selection_menu.asm:513 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11E3F: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00002Du : 0x00002Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/text/selection_menu.asm:513 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    // Overlapping static entry reached from 0xC11E3F.
    case 0xC11E41: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/text/selection_menu.asm:513 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11E42: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/selection_menu.asm:514 TAX
    case 0xC11E46: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/selection_menu.asm:515 LDA @LOCAL07
    case 0xC11E47: {
        Instruction step(cpu, 0xA5, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:516 CMP MENU_OPTIONS + menu_option::page,X
    case 0xC11E49: {
        Instruction step(cpu, 0xDD, 0x0089DAu, 3u, AddressMode::AbsoluteIndexedX);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:517 BNE @UNKNOWN31
    case 0xC11E4C: {
        Instruction step(cpu, 0xD0, 0x00000Au, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/selection_menu.asm:518 LDA #1
    case 0xC11E4E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:518 LDA #1
    // Overlapping static entry reached from 0xC11E4E.
    case 0xC11E50: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu.asm:519 LDX @LOCAL09
    case 0xC11E51: {
        Instruction step(cpu, 0xA6, 0x000022u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/selection_menu.asm:520 STA __BSS_START__,X
    case 0xC11E53: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:521 BRA @UNKNOWN32
    case 0xC11E56: {
        Instruction step(cpu, 0x80, 0x000006u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/selection_menu.asm:523 INC
    case 0xC11E58: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/text/selection_menu.asm:524 LDX @LOCAL09
    case 0xC11E59: {
        Instruction step(cpu, 0xA6, 0x000022u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/selection_menu.asm:525 STA __BSS_START__,X
    case 0xC11E5B: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:527 JSR CLEAR_INSTANT_PRINTING
    case 0xC11E5E: {
        Instruction step(cpu, 0x22, 0xC3E4CAu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/selection_menu.asm:528 LDA @LOCAL0B
    case 0xC11E62: {
        Instruction step(cpu, 0xA5, 0x000026u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:532 JSL UNKNOWN_EF0115
    case 0xC11E64: {
        Instruction step(cpu, 0x22, 0xEF0115u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/selection_menu.asm:534 JSL WINDOW_TICK
    case 0xC11E68: {
        Instruction step(cpu, 0x22, 0xC12DD5u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/selection_menu.asm:535 JSR PRINT_MENU_ITEMS
    case 0xC11E6C: {
        Instruction step(cpu, 0x20, 0x00163Cu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/selection_menu.asm:536 JSR SET_INSTANT_PRINTING
    case 0xC11E6F: {
        Instruction step(cpu, 0x22, 0xC3E4D4u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/selection_menu.asm:537 JMP @UNKNOWN5
    case 0xC11E73: {
        Instruction step(cpu, 0x4C, 0x001A3Fu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/selection_menu.asm:539 LDA PAD_PRESS
    case 0xC11E76: {
        Instruction step(cpu, 0xAD, 0x00006Du, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:540 AND #PAD::B_BUTTON | PAD::SELECT_BUTTON
    case 0xC11E79: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x00A000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:540 AND #PAD::B_BUTTON | PAD::SELECT_BUTTON
    // Overlapping static entry reached from 0xC11E79.
    case 0xC11E7B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x0000F0u : 0x0014F0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/selection_menu.asm:541 BEQ @UNKNOWN34
    case 0xC11E7C: {
        Instruction step(cpu, 0xF0, 0x000014u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/selection_menu.asm:541 BEQ @UNKNOWN34
    // Overlapping static entry reached from 0xC11E7B.
    case 0xC11E7D: {
        Instruction step(cpu, 0x14, 0x0000A5u, 2u, AddressMode::DirectPage);
        step.reset_tested_bits();
        return step.finish();
    }
    // src/text/selection_menu.asm:542 LDA @LOCAL0C
    case 0xC11E7E: {
        Instruction step(cpu, 0xA5, 0x000028u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:542 LDA @LOCAL0C
    // Overlapping static entry reached from 0xC11E7D.
    case 0xC11E7F: {
        Instruction step(cpu, 0x28, 0x000000u, 1u, AddressMode::Implied);
        step.pull_status();
        return step.finish();
    }
    // src/text/selection_menu.asm:543 CMP #1
    case 0xC11E80: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:543 CMP #1
    // Overlapping static entry reached from 0xC11E80.
    case 0xC11E82: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu.asm:544 BNE @UNKNOWN34
    case 0xC11E83: {
        Instruction step(cpu, 0xD0, 0x00000Du, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/selection_menu.asm:545 LDA #SFX::CURSOR2
    case 0xC11E85: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:545 LDA #SFX::CURSOR2
    // Overlapping static entry reached from 0xC11E85.
    case 0xC11E87: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu.asm:546 JSL PLAY_SOUND
    case 0xC11E88: {
        Instruction step(cpu, 0x22, 0xC0ABE0u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/selection_menu.asm:547 LDA #0
    case 0xC11E8C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:547 LDA #0
    // Overlapping static entry reached from 0xC11E8C.
    case 0xC11E8E: {
        Instruction step(cpu, 0x00, 0x00004Cu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu.asm:548 JMP @UNKNOWN44
    case 0xC11E8F: {
        Instruction step(cpu, 0x4C, 0x001F58u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/selection_menu.asm:550 INC @LOCAL09
    case 0xC11E92: {
        Instruction step(cpu, 0xE6, 0x000022u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/text/selection_menu.asm:551 LDA OPEN_WINDOW_TABLE
    case 0xC11E94: {
        Instruction step(cpu, 0xAD, 0x0088E4u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:552 CMP WINDOW_TAIL
    case 0xC11E97: {
        Instruction step(cpu, 0xCD, 0x0088E2u, 3u, AddressMode::Absolute);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:553 BNE @UNKNOWN36
    case 0xC11E9A: {
        Instruction step(cpu, 0xD0, 0x00001Du, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/selection_menu.asm:554 LDA @LOCAL09
    case 0xC11E9C: {
        Instruction step(cpu, 0xA5, 0x000022u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:555 CMP #60
    case 0xC11E9E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00003Cu : 0x00003Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:555 CMP #60
    // Overlapping static entry reached from 0xC11E9E.
    case 0xC11EA0: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:761 BCC dest
    // Macro caller: src/text/selection_menu.asm:556 BLTEQ @UNKNOWN36
    case 0xC11EA1: {
        Instruction step(cpu, 0x90, 0x000016u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/text/selection_menu.asm:556 BLTEQ @UNKNOWN36
    case 0xC11EA3: {
        Instruction step(cpu, 0xF0, 0x000014u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/selection_menu.asm:557 LDA OPEN_WINDOW_TABLE + WINDOW::CARRIED_MONEY * 2
    case 0xC11EA5: {
        Instruction step(cpu, 0xAD, 0x0088F8u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:558 CMP #.LOWORD(-1)
    case 0xC11EA8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:558 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC11EA8.
    case 0xC11EAA: {
        Instruction step(cpu, 0xFF, 0x2003D0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/selection_menu.asm:559 BNE @UNKNOWN35
    case 0xC11EAB: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/selection_menu.asm:560 JSR UNKNOWN_C1134B
    case 0xC11EAD: {
        Instruction step(cpu, 0x20, 0x00134Bu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/selection_menu.asm:560 JSR UNKNOWN_C1134B
    // Overlapping static entry reached from 0xC11EAA.
    case 0xC11EAE: {
        Instruction step(cpu, 0x4B, 0x000000u, 1u, AddressMode::Implied);
        step.push_program_bank();
        return step.finish();
    }
    // src/text/selection_menu.asm:560 JSR UNKNOWN_C1134B
    // Overlapping static entry reached from 0xC11EAE.
    case 0xC11EAF: {
        Instruction step(cpu, 0x13, 0x0000A9u, 2u, AddressMode::StackRelativeIndirectIndexedY);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:562 LDA #0
    case 0xC11EB0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:562 LDA #0
    // Overlapping static entry reached from 0xC11EAF.
    case 0xC11EB1: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu.asm:562 LDA #0
    // Overlapping static entry reached from 0xC11EB0.
    case 0xC11EB2: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu.asm:563 JSR SET_WINDOW_FOCUS
    case 0xC11EB3: {
        Instruction step(cpu, 0x20, 0x00007Eu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/selection_menu.asm:564 JMP @UNKNOWN5
    case 0xC11EB6: {
        Instruction step(cpu, 0x4C, 0x001A3Fu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/selection_menu.asm:566 LDX @LOCAL07
    case 0xC11EB9: {
        Instruction step(cpu, 0xA6, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/selection_menu.asm:567 INX
    case 0xC11EBB: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/text/selection_menu.asm:568 STX @LOCAL07
    case 0xC11EBC: {
        Instruction step(cpu, 0x86, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/selection_menu.asm:570 CPX #10
    case 0xC11EBE: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/text/selection_menu.asm:570 CPX #10
    // Overlapping static entry reached from 0xC11EBE.
    case 0xC11EC0: {
        Instruction step(cpu, 0x00, 0x0000B0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:784 BCS :+
    // Macro caller: src/text/selection_menu.asm:571 BCCL @UNKNOWN14
    case 0xC11EC1: {
        Instruction step(cpu, 0xB0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/text/selection_menu.asm:571 BCCL @UNKNOWN14
    case 0xC11EC3: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:786 JMP dest
    // Macro caller: src/text/selection_menu.asm:571 BCCL @UNKNOWN14
    case 0xC11EC5: {
        Instruction step(cpu, 0x4C, 0x001BBBu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/selection_menu.asm:572 JMP @UNKNOWN13
    case 0xC11EC8: {
        Instruction step(cpu, 0x4C, 0x001B2Fu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/selection_menu.asm:574 CMP #.LOWORD(-1)
    case 0xC11ECB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:574 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC11ECB.
    case 0xC11ECD: {
        Instruction step(cpu, 0xFF, 0x4C03D0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/selection_menu.asm:575 BEQL @UNKNOWN5
    case 0xC11ECE: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/selection_menu.asm:575 BEQL @UNKNOWN5
    case 0xC11ED0: {
        Instruction step(cpu, 0x4C, 0x001A3Fu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/selection_menu.asm:575 BEQL @UNKNOWN5
    // Overlapping static entry reached from 0xC11ECD.
    case 0xC11ED1: {
        Instruction step(cpu, 0x3F, 0x00A91Au, 4u, AddressMode::LongIndexedX);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:576 LDA #0
    case 0xC11ED3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:576 LDA #0
    // Overlapping static entry reached from 0xC11ED3.
    case 0xC11ED5: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu.asm:577 STA @VIRTUAL02
    case 0xC11ED6: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:578 LDY #window_stats::current_option
    case 0xC11ED8: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00002Bu : 0x00002Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/selection_menu.asm:578 LDY #window_stats::current_option
    // Overlapping static entry reached from 0xC11ED8.
    case 0xC11EDA: {
        Instruction step(cpu, 0x00, 0x0000B1u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu.asm:579 LDA (@LOCAL0A),Y
    case 0xC11EDB: {
        Instruction step(cpu, 0xB1, 0x000024u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/text/selection_menu.asm:580 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11EDD: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00002Du : 0x00002Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/text/selection_menu.asm:580 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    // Overlapping static entry reached from 0xC11EDD.
    case 0xC11EDF: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/text/selection_menu.asm:580 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11EE0: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/selection_menu.asm:581 CLC
    case 0xC11EE4: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/selection_menu.asm:582 ADC #.LOWORD(MENU_OPTIONS)
    case 0xC11EE5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000D4u : 0x0089D4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/selection_menu.asm:582 ADC #.LOWORD(MENU_OPTIONS)
    // Overlapping static entry reached from 0xC11EE5.
    case 0xC11EE7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x89, narrow ? 0x000085u : 0x002285u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.test_bits();
        return step.finish();
    }
    // src/text/selection_menu.asm:583 STA @LOCAL09
    case 0xC11EE8: {
        Instruction step(cpu, 0x85, 0x000022u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:583 STA @LOCAL09
    // Overlapping static entry reached from 0xC11EE7.
    case 0xC11EE9: {
        Instruction step(cpu, 0x22, 0x291CA5u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/selection_menu.asm:584 LDA @LOCAL06
    case 0xC11EEA: {
        Instruction step(cpu, 0xA5, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:585 AND #$00FF
    case 0xC11EEC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:585 AND #$00FF
    // Overlapping static entry reached from 0xC11EE9.
    case 0xC11EED: {
        Instruction step(cpu, 0xFF, 0xA5AA00u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/selection_menu.asm:585 AND #$00FF
    // Overlapping static entry reached from 0xC11EEC.
    case 0xC11EEE: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu.asm:586 TAX
    case 0xC11EEF: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/selection_menu.asm:587 LDA @LOCAL06
    case 0xC11EF0: {
        Instruction step(cpu, 0xA5, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:587 LDA @LOCAL06
    // Overlapping static entry reached from 0xC11EED.
    case 0xC11EF1: {
        Instruction step(cpu, 0x1C, 0x000029u, 3u, AddressMode::Absolute);
        step.reset_tested_bits();
        return step.finish();
    }
    // src/text/selection_menu.asm:588 AND #$FF00
    case 0xC11EF2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x00FF00u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:588 AND #$FF00
    // Overlapping static entry reached from 0xC11EF2.
    case 0xC11EF4: {
        Instruction step(cpu, 0xFF, 0xFF29EBu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/selection_menu.asm:589 XBA
    case 0xC11EF5: {
        Instruction step(cpu, 0xEB, 0x000000u, 1u, AddressMode::Implied);
        step.exchange_accumulator_bytes();
        return step.finish();
    }
    // src/text/selection_menu.asm:590 AND #$00FF
    case 0xC11EF6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:590 AND #$00FF
    // Overlapping static entry reached from 0xC11EF6.
    case 0xC11EF8: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu.asm:591 STA @LOCAL06
    case 0xC11EF9: {
        Instruction step(cpu, 0x85, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:592 BRA @UNKNOWN42
    case 0xC11EFB: {
        Instruction step(cpu, 0x80, 0x000014u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/selection_menu.asm:594 INC @VIRTUAL02
    case 0xC11EFD: {
        Instruction step(cpu, 0xE6, 0x000002u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/text/selection_menu.asm:595 LDY #menu_option::next
    case 0xC11EFF: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/selection_menu.asm:595 LDY #menu_option::next
    // Overlapping static entry reached from 0xC11EFF.
    case 0xC11F01: {
        Instruction step(cpu, 0x00, 0x0000B1u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu.asm:596 LDA (@LOCAL09),Y
    case 0xC11F02: {
        Instruction step(cpu, 0xB1, 0x000022u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/text/selection_menu.asm:597 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11F04: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00002Du : 0x00002Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/text/selection_menu.asm:597 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    // Overlapping static entry reached from 0xC11F04.
    case 0xC11F06: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/text/selection_menu.asm:597 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11F07: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/selection_menu.asm:598 CLC
    case 0xC11F0B: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/selection_menu.asm:599 ADC #.LOWORD(MENU_OPTIONS)
    case 0xC11F0C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000D4u : 0x0089D4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/selection_menu.asm:599 ADC #.LOWORD(MENU_OPTIONS)
    // Overlapping static entry reached from 0xC11F0C.
    case 0xC11F0E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x89, narrow ? 0x000085u : 0x002285u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.test_bits();
        return step.finish();
    }
    // src/text/selection_menu.asm:600 STA @LOCAL09
    case 0xC11F0F: {
        Instruction step(cpu, 0x85, 0x000022u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:600 STA @LOCAL09
    // Overlapping static entry reached from 0xC11F0E.
    case 0xC11F10: {
        Instruction step(cpu, 0x22, 0x0008A0u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/selection_menu.asm:602 LDY #menu_option::text_x
    case 0xC11F11: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/selection_menu.asm:602 LDY #menu_option::text_x
    // Overlapping static entry reached from 0xC11F11.
    case 0xC11F13: {
        Instruction step(cpu, 0x00, 0x00008Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu.asm:603 TXA
    case 0xC11F14: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:604 CMP (@LOCAL09),Y
    case 0xC11F15: {
        Instruction step(cpu, 0xD1, 0x000022u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:605 BNE @UNKNOWN41
    case 0xC11F17: {
        Instruction step(cpu, 0xD0, 0x0000E4u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/selection_menu.asm:606 LDY #menu_option::text_y
    case 0xC11F19: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/selection_menu.asm:606 LDY #menu_option::text_y
    // Overlapping static entry reached from 0xC11F19.
    case 0xC11F1B: {
        Instruction step(cpu, 0x00, 0x0000A5u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu.asm:607 LDA @LOCAL06
    case 0xC11F1C: {
        Instruction step(cpu, 0xA5, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:608 CMP (@LOCAL09),Y
    case 0xC11F1E: {
        Instruction step(cpu, 0xD1, 0x000022u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:609 BNE @UNKNOWN41
    case 0xC11F20: {
        Instruction step(cpu, 0xD0, 0x0000DBu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/selection_menu.asm:610 LDY #menu_option::page
    case 0xC11F22: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/selection_menu.asm:610 LDY #menu_option::page
    // Overlapping static entry reached from 0xC11F22.
    case 0xC11F24: {
        Instruction step(cpu, 0x00, 0x0000B1u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu.asm:611 LDA (@LOCAL09),Y
    case 0xC11F25: {
        Instruction step(cpu, 0xB1, 0x000022u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:612 TAY
    case 0xC11F27: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/text/selection_menu.asm:613 STY @LOCAL08
    case 0xC11F28: {
        Instruction step(cpu, 0x84, 0x000020u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/selection_menu.asm:614 TYA
    case 0xC11F2A: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:615 LDY #window_stats::menu_page_number
    case 0xC11F2B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000033u : 0x000033u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/selection_menu.asm:615 LDY #window_stats::menu_page_number
    // Overlapping static entry reached from 0xC11F2B.
    case 0xC11F2D: {
        Instruction step(cpu, 0x00, 0x0000D1u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu.asm:616 CMP (@LOCAL0A),Y
    case 0xC11F2E: {
        Instruction step(cpu, 0xD1, 0x000024u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:617 BEQ @UNKNOWN43
    case 0xC11F30: {
        Instruction step(cpu, 0xF0, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/selection_menu.asm:618 LDY @LOCAL08
    case 0xC11F32: {
        Instruction step(cpu, 0xA4, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/selection_menu.asm:619 BNE @UNKNOWN41
    case 0xC11F34: {
        Instruction step(cpu, 0xD0, 0x0000C7u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/selection_menu.asm:621 LDX @VIRTUAL04
    case 0xC11F36: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/selection_menu.asm:622 LDY a:menu_option::text_y,X
    case 0xC11F38: {
        Instruction step(cpu, 0xBC, 0x00000Au, 3u, AddressMode::AbsoluteIndexedX);
        step.load_y();
        return step.finish();
    }
    // src/text/selection_menu.asm:623 LDX @VIRTUAL04
    case 0xC11F3B: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/selection_menu.asm:624 LDA a:menu_option::text_x,X
    case 0xC11F3D: {
        Instruction step(cpu, 0xBD, 0x000008u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:625 TAX
    case 0xC11F40: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/selection_menu.asm:626 LDA @VIRTUAL04
    case 0xC11F41: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:627 JSL UNKNOWN_C43CD2
    case 0xC11F43: {
        Instruction step(cpu, 0x22, 0xC43CD2u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/selection_menu.asm:628 LDA #47
    case 0xC11F47: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00002Fu : 0x00002Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:628 LDA #47
    // Overlapping static entry reached from 0xC11F47.
    case 0xC11F49: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu.asm:629 JSR UNKNOWN_C10D60
    case 0xC11F4A: {
        Instruction step(cpu, 0x20, 0x000D60u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/selection_menu.asm:630 LDA @VIRTUAL02
    case 0xC11F4D: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:631 STA @LOCAL08
    case 0xC11F4F: {
        Instruction step(cpu, 0x85, 0x000020u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:632 LDA @LOCAL09
    case 0xC11F51: {
        Instruction step(cpu, 0xA5, 0x000022u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:633 STA @VIRTUAL04
    case 0xC11F53: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu.asm:634 JMP @UNKNOWN5
    case 0xC11F55: {
        Instruction step(cpu, 0x4C, 0x001A3Fu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/selection_menu.asm:636 END_C_FUNCTION
    case 0xC11F58: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/text/selection_menu.asm:636 END_C_FUNCTION
    case 0xC11F59: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
