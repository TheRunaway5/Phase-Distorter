// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/intro/show_title_screen.asm
bool resume_introduction_show_title_screen(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/intro/show_title_screen.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC3F3C5: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/intro/show_title_screen.asm:11 END_STACK_VARS
    case 0xC3F3C7: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/intro/show_title_screen.asm:11 END_STACK_VARS
    case 0xC3F3C8: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/intro/show_title_screen.asm:11 END_STACK_VARS
    case 0xC3F3C9: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/intro/show_title_screen.asm:11 END_STACK_VARS
    case 0xC3F3CA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000E4u : 0x00FFE4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/intro/show_title_screen.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC3F3CA.
    case 0xC3F3CC: {
        Instruction step(cpu, 0xFF, 0xAA685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/intro/show_title_screen.asm:11 END_STACK_VARS
    case 0xC3F3CD: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/intro/show_title_screen.asm:11 END_STACK_VARS
    case 0xC3F3CE: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:12 TAX
    case 0xC3F3CF: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:13 STX TITLE_SCREEN_QUICK_MODE
    case 0xC3F3D0: {
        Instruction step(cpu, 0x8E, 0x009F75u, 3u, AddressMode::Absolute);
        step.store_x();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:14 LDA #0
    case 0xC3F3D3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:14 LDA #0
    // Overlapping static entry reached from 0xC3F3D3.
    case 0xC3F3D5: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:15 STA @VIRTUAL04
    case 0xC3F3D6: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:16 JSL UNKNOWN_C08726
    case 0xC3F3D8: {
        Instruction step(cpu, 0x22, 0xC08726u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:17 JSL UNKNOWN_C0927C
    case 0xC3F3DC: {
        Instruction step(cpu, 0x22, 0xC0927Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:18 BRA @UNKNOWN1
    case 0xC3F3E0: {
        Instruction step(cpu, 0x80, 0x000019u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:20 ASL
    case 0xC3F3E2: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:21 CLC
    case 0xC3F3E3: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:22 ADC #.LOWORD(ENTITY_SPRITEMAP_POINTER_HIGH)
    case 0xC3F3E4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00006Au : 0x00116Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:22 ADC #.LOWORD(ENTITY_SPRITEMAP_POINTER_HIGH)
    // Overlapping static entry reached from 0xC3F3E4.
    case 0xC3F3E6: {
        Instruction step(cpu, 0x11, 0x0000AAu, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.or_accumulator();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:23 TAX
    case 0xC3F3E7: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:24 LDA __BSS_START__,X
    case 0xC3F3E8: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:25 ORA #$8000
    case 0xC3F3EB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x09, narrow ? 0x000000u : 0x008000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.or_accumulator();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:25 ORA #$8000
    // Overlapping static entry reached from 0xC3F3EB.
    case 0xC3F3ED: {
        Instruction step(cpu, 0x80, 0x00009Du, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:26 STA __BSS_START__,X
    case 0xC3F3EE: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:27 LDA @LOCAL04
    case 0xC3F3F1: {
        Instruction step(cpu, 0xA5, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:28 INC
    case 0xC3F3F3: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:29 STA @LOCAL04
    case 0xC3F3F4: {
        Instruction step(cpu, 0x85, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:30 CMP #MAX_ENTITIES
    case 0xC3F3F6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00001Eu : 0x00001Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:30 CMP #MAX_ENTITIES
    // Overlapping static entry reached from 0xC3F3F6.
    case 0xC3F3F8: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:31 BCC @UNKNOWN0
    case 0xC3F3F9: {
        Instruction step(cpu, 0x90, 0x0000E7u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:33 LDA #11
    case 0xC3F3FB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Bu : 0x00000Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:33 LDA #11
    // Overlapping static entry reached from 0xC3F3FB.
    case 0xC3F3FD: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:34 JSL UNKNOWN_C08D79
    case 0xC3F3FE: {
        Instruction step(cpu, 0x22, 0xC08D79u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:35 LDA #3
    case 0xC3F402: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:35 LDA #3
    // Overlapping static entry reached from 0xC3F402.
    case 0xC3F404: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:36 JSL SET_OAM_SIZE
    case 0xC3F405: {
        Instruction step(cpu, 0x22, 0xC08D92u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:37 LDY #$0000
    case 0xC3F409: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:37 LDY #$0000
    // Overlapping static entry reached from 0xC3F409.
    case 0xC3F40B: {
        Instruction step(cpu, 0x00, 0x0000A2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:38 LDX #$5800
    case 0xC3F40C: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x005800u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:38 LDX #$5800
    // Overlapping static entry reached from 0xC3F40C.
    case 0xC3F40E: {
        Instruction step(cpu, 0x58, 0x000000u, 1u, AddressMode::Implied);
        step.enable_interrupts();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:39 TYA ;BG_TILEMAP_SIZE::NORMAL
    case 0xC3F40F: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:40 JSL SET_BG1_VRAM_LOCATION
    case 0xC3F410: {
        Instruction step(cpu, 0x22, 0xC08D9Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:41 STZ BG3_X_POS
    case 0xC3F414: {
        Instruction step(cpu, 0x9C, 0x000039u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:42 STZ BG3_Y_POS
    case 0xC3F417: {
        Instruction step(cpu, 0x9C, 0x00003Bu, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:43 STZ BG2_Y_POS
    case 0xC3F41A: {
        Instruction step(cpu, 0x9C, 0x000037u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:44 STZ BG2_X_POS
    case 0xC3F41D: {
        Instruction step(cpu, 0x9C, 0x000035u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:45 STZ BG1_Y_POS
    case 0xC3F420: {
        Instruction step(cpu, 0x9C, 0x000033u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:46 STZ BG1_X_POS
    case 0xC3F423: {
        Instruction step(cpu, 0x9C, 0x000031u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:47 JSL UPDATE_SCREEN
    case 0xC3F426: {
        Instruction step(cpu, 0x22, 0xC08B26u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:48 STZ BG3_X_POS
    case 0xC3F42A: {
        Instruction step(cpu, 0x9C, 0x000039u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:49 STZ BG3_Y_POS
    case 0xC3F42D: {
        Instruction step(cpu, 0x9C, 0x00003Bu, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:50 STZ BG2_Y_POS
    case 0xC3F430: {
        Instruction step(cpu, 0x9C, 0x000037u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:51 STZ BG2_X_POS
    case 0xC3F433: {
        Instruction step(cpu, 0x9C, 0x000035u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:52 STZ BG1_Y_POS
    case 0xC3F436: {
        Instruction step(cpu, 0x9C, 0x000033u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:53 STZ BG1_X_POS
    case 0xC3F439: {
        Instruction step(cpu, 0x9C, 0x000031u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:54 JSL UPDATE_SCREEN
    case 0xC3F43C: {
        Instruction step(cpu, 0x22, 0xC08B26u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:55 JSL UNKNOWN_C0EBE0
    case 0xC3F440: {
        Instruction step(cpu, 0x22, 0xC0EBE0u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:56 SEP #PROC_FLAGS::ACCUM8
    case 0xC3F444: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:57 LDA #$11
    case 0xC3F446: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000011u : 0x008D11u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:58 STA TM_MIRROR
    case 0xC3F448: {
        Instruction step(cpu, 0x8D, 0x00001Au, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:58 STA TM_MIRROR
    // Overlapping static entry reached from 0xC3F446.
    case 0xC3F449: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:58 STA TM_MIRROR
    // Overlapping static entry reached from 0xC3F449.
    case 0xC3F44A: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:59 JSL OAM_CLEAR
    case 0xC3F44B: {
        Instruction step(cpu, 0x22, 0xC088B1u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:61 LDY #0
    case 0xC3F44F: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:61 LDY #0
    // Overlapping static entry reached from 0xC3F44F.
    case 0xC3F451: {
        Instruction step(cpu, 0x00, 0x0000BBu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:62 TYX
    case 0xC3F452: {
        Instruction step(cpu, 0xBB, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_x();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:63 LDA #EVENT_SCRIPT::TITLE_SCREEN_1
    case 0xC3F453: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000014u : 0x000314u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:63 LDA #EVENT_SCRIPT::TITLE_SCREEN_1
    // Overlapping static entry reached from 0xC3F453.
    case 0xC3F455: {
        Instruction step(cpu, 0x03, 0x000022u, 2u, AddressMode::StackRelative);
        step.or_accumulator();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:64 JSL INIT_ENTITY_WIPE
    case 0xC3F456: {
        Instruction step(cpu, 0x22, 0xC092F5u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:64 JSL INIT_ENTITY_WIPE
    // Overlapping static entry reached from 0xC3F455.
    case 0xC3F457: {
        Instruction step(cpu, 0xF5, 0x000092u, 2u, AddressMode::DirectPageIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:64 JSL INIT_ENTITY_WIPE
    // Overlapping static entry reached from 0xC3F457.
    case 0xC3F459: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x00009Cu : 0x00419Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:65 STZ ACTIONSCRIPT_STATE
    case 0xC3F45A: {
        Instruction step(cpu, 0x9C, 0x009641u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:65 STZ ACTIONSCRIPT_STATE
    // Overlapping static entry reached from 0xC3F459.
    case 0xC3F45B: {
        Instruction step(cpu, 0x41, 0x000096u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.xor_accumulator();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:65 STZ ACTIONSCRIPT_STATE
    // Overlapping static entry reached from 0xC3F459.
    case 0xC3F45C: {
        Instruction step(cpu, 0x96, 0x0000ADu, 2u, AddressMode::DirectPageIndexedY);
        step.store_x();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:66 LDA TITLE_SCREEN_QUICK_MODE
    case 0xC3F45D: {
        Instruction step(cpu, 0xAD, 0x009F75u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:66 LDA TITLE_SCREEN_QUICK_MODE
    // Overlapping static entry reached from 0xC3F45C.
    case 0xC3F45E: {
        Instruction step(cpu, 0x75, 0x00009Fu, 2u, AddressMode::DirectPageIndexedX);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/intro/show_title_screen.asm:67 BNEL @UNKNOWN7
    case 0xC3F460: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/intro/show_title_screen.asm:67 BNEL @UNKNOWN7
    case 0xC3F462: {
        Instruction step(cpu, 0x4C, 0x00F50Au, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:68 SEP #PROC_FLAGS::ACCUM8
    case 0xC3F465: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:69 STZ @LOCAL00
    case 0xC3F467: {
        Instruction step(cpu, 0x64, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:70 LDX #.LOWORD(PALETTES)
    case 0xC3F469: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:70 LDX #.LOWORD(PALETTES)
    // Overlapping static entry reached from 0xC3F469.
    case 0xC3F46B: {
        Instruction step(cpu, 0x02, 0x0000C2u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:71 REP #PROC_FLAGS::ACCUM8
    case 0xC3F46C: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:72 LDA #BPP4PALETTE_SIZE * 16
    case 0xC3F46E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:72 LDA #BPP4PALETTE_SIZE * 16
    // Overlapping static entry reached from 0xC3F46E.
    case 0xC3F470: {
        Instruction step(cpu, 0x02, 0x000022u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:73 JSL MEMSET16
    case 0xC3F471: {
        Instruction step(cpu, 0x22, 0xC08EFCu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:74 SEP #PROC_FLAGS::ACCUM8
    case 0xC3F475: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:75 LDA #PALETTE_UPLOAD::FULL
    case 0xC3F477: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000018u : 0x008D18u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:76 STA PALETTE_UPLOAD_MODE
    case 0xC3F479: {
        Instruction step(cpu, 0x8D, 0x000030u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:76 STA PALETTE_UPLOAD_MODE
    // Overlapping static entry reached from 0xC3F477.
    case 0xC3F47A: {
        Instruction step(cpu, 0x30, 0x000000u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:77 JSL UNKNOWN_C08744
    case 0xC3F47C: {
        Instruction step(cpu, 0x22, 0xC08744u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:78 SEP #PROC_FLAGS::ACCUM8
    case 0xC3F480: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:79 LDA #$0F
    case 0xC3F482: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Fu : 0x008D0Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:80 STA INIDISP_MIRROR
    case 0xC3F484: {
        Instruction step(cpu, 0x8D, 0x00000Du, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:80 STA INIDISP_MIRROR
    // Overlapping static entry reached from 0xC3F482.
    case 0xC3F485: {
        Instruction step(cpu, 0x0D, 0x002200u, 3u, AddressMode::Absolute);
        step.or_accumulator();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:81 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC3F487: {
        Instruction step(cpu, 0x22, 0xC08756u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:81 JSL WAIT_UNTIL_NEXT_FRAME
    // Overlapping static entry reached from 0xC3F485.
    case 0xC3F488: {
        Instruction step(cpu, 0x56, 0x000087u, 2u, AddressMode::DirectPageIndexedX);
        step.shift_right();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:81 JSL WAIT_UNTIL_NEXT_FRAME
    // Overlapping static entry reached from 0xC3F488.
    case 0xC3F48A: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000E2u : 0x0020E2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:82 SEP #PROC_FLAGS::ACCUM8
    case 0xC3F48B: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:82 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC3F48A.
    case 0xC3F48C: {
        Instruction step(cpu, 0x20, 0x00309Cu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:83 STZ PALETTE_UPLOAD_MODE
    case 0xC3F48D: {
        Instruction step(cpu, 0x9C, 0x000030u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:83 STZ PALETTE_UPLOAD_MODE
    // Overlapping static entry reached from 0xC3F48C.
    case 0xC3F48F: {
        Instruction step(cpu, 0x00, 0x0000C2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:84 REP #PROC_FLAGS::ACCUM8
    case 0xC3F490: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/show_title_screen.asm:85 LOADPTR UNKNOWN_E1AE7C, @LOCAL00
    case 0xC3F492: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Cu : 0x00AE7Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/show_title_screen.asm:85 LOADPTR UNKNOWN_E1AE7C, @LOCAL00
    // Overlapping static entry reached from 0xC3F492.
    case 0xC3F494: {
        Instruction step(cpu, 0xAE, 0x000E85u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/show_title_screen.asm:85 LOADPTR UNKNOWN_E1AE7C, @LOCAL00
    case 0xC3F495: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/show_title_screen.asm:85 LOADPTR UNKNOWN_E1AE7C, @LOCAL00
    case 0xC3F497: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E1u : 0x0000E1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/show_title_screen.asm:85 LOADPTR UNKNOWN_E1AE7C, @LOCAL00
    // Overlapping static entry reached from 0xC3F497.
    case 0xC3F499: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/show_title_screen.asm:85 LOADPTR UNKNOWN_E1AE7C, @LOCAL00
    case 0xC3F49A: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/intro/show_title_screen.asm:86 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC3F49C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/intro/show_title_screen.asm:86 PROMOTENEARPTR PALETTES, @VIRTUAL06
    // Overlapping static entry reached from 0xC3F49C.
    case 0xC3F49E: {
        Instruction step(cpu, 0x02, 0x000085u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/intro/show_title_screen.asm:86 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC3F49F: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:909 PHB
    // Macro caller: src/intro/show_title_screen.asm:86 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC3F4A1: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/intro/show_title_screen.asm:86 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC3F4A2: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:911 PLA
    // Macro caller: src/intro/show_title_screen.asm:86 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC3F4A4: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/intro/show_title_screen.asm:86 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC3F4A5: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/intro/show_title_screen.asm:86 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC3F4A7: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:87 REP #PROC_FLAGS::ACCUM8
    case 0xC3F4A9: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:88 LDA #BPP4PALETTE_SIZE * 8
    case 0xC3F4AB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000100u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:88 LDA #BPP4PALETTE_SIZE * 8
    // Overlapping static entry reached from 0xC3F4AB.
    case 0xC3F4AD: {
        Instruction step(cpu, 0x01, 0x000018u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:89 CLC
    case 0xC3F4AE: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:90 ADC @VIRTUAL06
    case 0xC3F4AF: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:91 STA @VIRTUAL06
    case 0xC3F4B1: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:92 STA @LOCAL01
    case 0xC3F4B3: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:93 LDA @VIRTUAL06+2
    case 0xC3F4B5: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:94 STA @LOCAL01+2
    case 0xC3F4B7: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:95 JSL DECOMP
    case 0xC3F4B9: {
        Instruction step(cpu, 0x22, 0xC41A9Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:96 JSL UNKNOWN_C496F9
    case 0xC3F4BD: {
        Instruction step(cpu, 0x22, 0xC496F9u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:97 SEP #PROC_FLAGS::ACCUM8
    case 0xC3F4C1: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:98 STZ @LOCAL00
    case 0xC3F4C3: {
        Instruction step(cpu, 0x64, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:99 LDX #.LOWORD(PALETTES)
    case 0xC3F4C5: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:99 LDX #.LOWORD(PALETTES)
    // Overlapping static entry reached from 0xC3F4C5.
    case 0xC3F4C7: {
        Instruction step(cpu, 0x02, 0x0000C2u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:100 REP #PROC_FLAGS::ACCUM8
    case 0xC3F4C8: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:101 LDA #BPP4PALETTE_SIZE * 16
    case 0xC3F4CA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:101 LDA #BPP4PALETTE_SIZE * 16
    // Overlapping static entry reached from 0xC3F4CA.
    case 0xC3F4CC: {
        Instruction step(cpu, 0x02, 0x000022u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:102 JSL MEMSET16
    case 0xC3F4CD: {
        Instruction step(cpu, 0x22, 0xC08EFCu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:103 LDX #$0100
    case 0xC3F4D1: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000100u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:103 LDX #$0100
    // Overlapping static entry reached from 0xC3F4D1.
    case 0xC3F4D3: {
        Instruction step(cpu, 0x01, 0x0000A9u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:104 LDA #60
    case 0xC3F4D4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00003Cu : 0x00003Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:104 LDA #60
    // Overlapping static entry reached from 0xC3F4D3.
    case 0xC3F4D5: {
        Instruction step(cpu, 0x3C, 0x002200u, 3u, AddressMode::AbsoluteIndexedX);
        step.test_bits();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:104 LDA #60
    // Overlapping static entry reached from 0xC3F4D4.
    case 0xC3F4D6: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:105 JSL UNKNOWN_C496E7
    case 0xC3F4D7: {
        Instruction step(cpu, 0x22, 0xC496E7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:105 JSL UNKNOWN_C496E7
    // Overlapping static entry reached from 0xC3F4D5.
    case 0xC3F4D8: {
        Instruction step(cpu, 0xE7, 0x000096u, 2u, AddressMode::DirectPageIndirectLong);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:105 JSL UNKNOWN_C496E7
    // Overlapping static entry reached from 0xC3F4D8.
    case 0xC3F4DA: {
        Instruction step(cpu, 0xC4, 0x0000E2u, 2u, AddressMode::DirectPage);
        step.compare_y();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:106 SEP #PROC_FLAGS::ACCUM8
    case 0xC3F4DB: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:106 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC3F4DA.
    case 0xC3F4DC: {
        Instruction step(cpu, 0x20, 0x0018A9u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:107 LDA #PALETTE_UPLOAD::FULL
    case 0xC3F4DD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000018u : 0x008D18u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:108 STA PALETTE_UPLOAD_MODE
    case 0xC3F4DF: {
        Instruction step(cpu, 0x8D, 0x000030u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:108 STA PALETTE_UPLOAD_MODE
    // Overlapping static entry reached from 0xC3F4DD.
    case 0xC3F4E0: {
        Instruction step(cpu, 0x30, 0x000000u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:109 LDX #0
    case 0xC3F4E2: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:109 LDX #0
    // Overlapping static entry reached from 0xC3F4E2.
    case 0xC3F4E4: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:110 STX @LOCAL03
    case 0xC3F4E5: {
        Instruction step(cpu, 0x86, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:111 BRA @UNKNOWN4
    case 0xC3F4E7: {
        Instruction step(cpu, 0x80, 0x00000Du, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:113 JSL UPDATE_MAP_PALETTE_ANIMATION
    case 0xC3F4E9: {
        Instruction step(cpu, 0x22, 0xC426EDu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:114 JSL UNKNOWN_C1004E
    case 0xC3F4ED: {
        Instruction step(cpu, 0x22, 0xC1004Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:115 LDX @LOCAL03
    case 0xC3F4F1: {
        Instruction step(cpu, 0xA6, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:116 INX
    case 0xC3F4F3: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:117 STX @LOCAL03
    case 0xC3F4F4: {
        Instruction step(cpu, 0x86, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:117 STX @LOCAL03
    // Overlapping static entry reached from 0xC3F546.
    case 0xC3F4F5: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:119 STX @VIRTUAL02
    case 0xC3F4F6: {
        Instruction step(cpu, 0x86, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:120 REP #PROC_FLAGS::ACCUM8
    case 0xC3F4F8: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:121 LDA #60
    case 0xC3F4FA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00003Cu : 0x00003Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:121 LDA #60
    // Overlapping static entry reached from 0xC3F4FA.
    case 0xC3F4FC: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:122 CLC
    case 0xC3F4FD: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:123 SBC @VIRTUAL02
    case 0xC3F4FE: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:798 BVS :+
    // Macro caller: src/intro/show_title_screen.asm:124 BRANCHGTS @UNKNOWN3
    case 0xC3F500: {
        Instruction step(cpu, 0x70, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_set();
        return step.finish();
    }
    // include/macros.asm:799 BPL dest
    // Macro caller: src/intro/show_title_screen.asm:124 BRANCHGTS @UNKNOWN3
    case 0xC3F502: {
        Instruction step(cpu, 0x10, 0x0000E5u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:800 BRA :++
    // Macro caller: src/intro/show_title_screen.asm:124 BRANCHGTS @UNKNOWN3
    case 0xC3F504: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:802 BMI dest
    // Macro caller: src/intro/show_title_screen.asm:124 BRANCHGTS @UNKNOWN3
    case 0xC3F506: {
        Instruction step(cpu, 0x30, 0x0000E1u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:125 BRA @UNKNOWN11
    case 0xC3F508: {
        Instruction step(cpu, 0x80, 0x00002Au, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:127 LDX #1
    case 0xC3F50A: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:127 LDX #1
    // Overlapping static entry reached from 0xC3F50A.
    case 0xC3F50C: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:128 LDA #4
    case 0xC3F50D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:128 LDA #4
    // Overlapping static entry reached from 0xC3F50D.
    case 0xC3F50F: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:129 JSL FADE_IN
    case 0xC3F510: {
        Instruction step(cpu, 0x22, 0xC0886Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:130 LDX #0
    case 0xC3F514: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:130 LDX #0
    // Overlapping static entry reached from 0xC3F514.
    case 0xC3F516: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:131 STX @LOCAL04
    case 0xC3F517: {
        Instruction step(cpu, 0x86, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:132 BRA @UNKNOWN9
    case 0xC3F519: {
        Instruction step(cpu, 0x80, 0x000009u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:134 JSL UNKNOWN_C1004E
    case 0xC3F51B: {
        Instruction step(cpu, 0x22, 0xC1004Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:134 JSL UNKNOWN_C1004E
    // Overlapping static entry reached from 0xC3F54C.
    case 0xC3F51E: {
        Instruction step(cpu, 0xC1, 0x0000A6u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.compare_accumulator();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:135 LDX @LOCAL04
    case 0xC3F51F: {
        Instruction step(cpu, 0xA6, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:135 LDX @LOCAL04
    // Overlapping static entry reached from 0xC3F51E.
    case 0xC3F520: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:136 INX
    case 0xC3F521: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:137 STX @LOCAL04
    case 0xC3F522: {
        Instruction step(cpu, 0x86, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:139 STX @VIRTUAL02
    case 0xC3F524: {
        Instruction step(cpu, 0x86, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:140 LDA #60
    case 0xC3F526: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00003Cu : 0x00003Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:140 LDA #60
    // Overlapping static entry reached from 0xC3F526.
    case 0xC3F528: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:141 CLC
    case 0xC3F529: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:142 SBC @VIRTUAL02
    case 0xC3F52A: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:798 BVS :+
    // Macro caller: src/intro/show_title_screen.asm:143 BRANCHGTS @UNKNOWN8
    case 0xC3F52C: {
        Instruction step(cpu, 0x70, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_set();
        return step.finish();
    }
    // include/macros.asm:799 BPL dest
    // Macro caller: src/intro/show_title_screen.asm:143 BRANCHGTS @UNKNOWN8
    case 0xC3F52E: {
        Instruction step(cpu, 0x10, 0x0000EBu, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:800 BRA :++
    // Macro caller: src/intro/show_title_screen.asm:143 BRANCHGTS @UNKNOWN8
    case 0xC3F530: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:802 BMI dest
    // Macro caller: src/intro/show_title_screen.asm:143 BRANCHGTS @UNKNOWN8
    case 0xC3F532: {
        Instruction step(cpu, 0x30, 0x0000E7u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:145 LDA #0
    case 0xC3F534: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:145 LDA #0
    // Overlapping static entry reached from 0xC3F534.
    case 0xC3F536: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:146 STA @VIRTUAL02
    case 0xC3F537: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:147 BRA @UNKNOWN15
    case 0xC3F539: {
        Instruction step(cpu, 0x80, 0x000027u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:149 LDA @VIRTUAL04
    case 0xC3F53B: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:150 BNE @UNKNOWN14
    case 0xC3F53D: {
        Instruction step(cpu, 0xD0, 0x00001Fu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:151 LDA PAD_PRESS
    case 0xC3F53F: {
        Instruction step(cpu, 0xAD, 0x00006Du, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:152 AND #PAD::A_BUTTON
    case 0xC3F542: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000080u : 0x000080u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:152 AND #PAD::A_BUTTON
    // Overlapping static entry reached from 0xC3F542.
    case 0xC3F544: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:153 BNE @UNKNOWN13
    case 0xC3F545: {
        Instruction step(cpu, 0xD0, 0x000010u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:153 BNE @UNKNOWN13
    // Overlapping static entry reached from 0xC3F554.
    case 0xC3F546: {
        Instruction step(cpu, 0x10, 0x0000ADu, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:154 LDA PAD_PRESS
    case 0xC3F547: {
        Instruction step(cpu, 0xAD, 0x00006Du, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:154 LDA PAD_PRESS
    // Overlapping static entry reached from 0xC3F546.
    case 0xC3F548: {
        Instruction step(cpu, 0x6D, 0x002900u, 3u, AddressMode::Absolute);
        step.add_with_carry();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:155 AND #PAD::B_BUTTON
    case 0xC3F54A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x008000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:155 AND #PAD::B_BUTTON
    // Overlapping static entry reached from 0xC3F548.
    case 0xC3F54B: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:155 AND #PAD::B_BUTTON
    // Overlapping static entry reached from 0xC3F54A.
    case 0xC3F54C: {
        Instruction step(cpu, 0x80, 0x0000D0u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:156 BNE @UNKNOWN13
    case 0xC3F54D: {
        Instruction step(cpu, 0xD0, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:157 LDA PAD_PRESS
    case 0xC3F54F: {
        Instruction step(cpu, 0xAD, 0x00006Du, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:158 AND #PAD::START_BUTTON
    case 0xC3F552: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x001000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:158 AND #PAD::START_BUTTON
    // Overlapping static entry reached from 0xC3F552.
    case 0xC3F554: {
        Instruction step(cpu, 0x10, 0x0000F0u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:159 BEQ @UNKNOWN14
    case 0xC3F555: {
        Instruction step(cpu, 0xF0, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:159 BEQ @UNKNOWN14
    // Overlapping static entry reached from 0xC3F554.
    case 0xC3F556: {
        Instruction step(cpu, 0x07, 0x0000A9u, 2u, AddressMode::DirectPageIndirectLong);
        step.or_accumulator();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:161 LDA #1
    case 0xC3F557: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:161 LDA #1
    // Overlapping static entry reached from 0xC3F556.
    case 0xC3F558: {
        Instruction step(cpu, 0x01, 0x000000u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:161 LDA #1
    // Overlapping static entry reached from 0xC3F557.
    case 0xC3F559: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:162 STA @VIRTUAL02
    case 0xC3F55A: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:163 BRA @UNKNOWN16
    case 0xC3F55C: {
        Instruction step(cpu, 0x80, 0x000011u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:165 JSL UNKNOWN_C1004E
    case 0xC3F55E: {
        Instruction step(cpu, 0x22, 0xC1004Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:167 LDA ACTIONSCRIPT_STATE
    case 0xC3F562: {
        Instruction step(cpu, 0xAD, 0x009641u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:168 BEQ @UNKNOWN12
    case 0xC3F565: {
        Instruction step(cpu, 0xF0, 0x0000D4u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:169 LDA ACTIONSCRIPT_STATE
    case 0xC3F567: {
        Instruction step(cpu, 0xAD, 0x009641u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:170 CMP #2
    case 0xC3F56A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:170 CMP #2
    // Overlapping static entry reached from 0xC3F56A.
    case 0xC3F56C: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:171 BEQ @UNKNOWN12
    case 0xC3F56D: {
        Instruction step(cpu, 0xF0, 0x0000CCu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:173 LDA TITLE_SCREEN_QUICK_MODE
    case 0xC3F56F: {
        Instruction step(cpu, 0xAD, 0x009F75u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:174 BNE @UNKNOWN17
    case 0xC3F572: {
        Instruction step(cpu, 0xD0, 0x00000Bu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:175 LDA ACTIONSCRIPT_STATE
    case 0xC3F574: {
        Instruction step(cpu, 0xAD, 0x009641u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:176 BNE @UNKNOWN17
    case 0xC3F577: {
        Instruction step(cpu, 0xD0, 0x000006u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:177 JSL UNKNOWN_EF04DC
    case 0xC3F579: {
        Instruction step(cpu, 0x22, 0xEF04DCu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:178 STA @VIRTUAL02
    case 0xC3F57D: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:180 LDY #0
    case 0xC3F57F: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:180 LDY #0
    // Overlapping static entry reached from 0xC3F57F.
    case 0xC3F581: {
        Instruction step(cpu, 0x00, 0x0000A2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:181 LDX #4
    case 0xC3F582: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:181 LDX #4
    // Overlapping static entry reached from 0xC3F582.
    case 0xC3F584: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:182 LDA #1
    case 0xC3F585: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:182 LDA #1
    // Overlapping static entry reached from 0xC3F585.
    case 0xC3F587: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:183 JSL FADE_OUT_WITH_MOSAIC
    case 0xC3F588: {
        Instruction step(cpu, 0x22, 0xC08814u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:184 LDA @VIRTUAL04
    case 0xC3F58C: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:185 BNE @UNKNOWN18
    case 0xC3F58E: {
        Instruction step(cpu, 0xD0, 0x000012u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:186 STZ ACTIONSCRIPT_STATE
    case 0xC3F590: {
        Instruction step(cpu, 0x9C, 0x009641u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:187 LDA #0
    case 0xC3F593: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:187 LDA #0
    // Overlapping static entry reached from 0xC3F593.
    case 0xC3F595: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:188 JSL UNKNOWN_C474A8
    case 0xC3F596: {
        Instruction step(cpu, 0x22, 0xC474A8u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:189 JSL UNKNOWN_C0927C
    case 0xC3F59A: {
        Instruction step(cpu, 0x22, 0xC0927Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:190 LDA @VIRTUAL02
    case 0xC3F59E: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:191 BRA @UNKNOWN23
    case 0xC3F5A0: {
        Instruction step(cpu, 0x80, 0x000055u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:193 LDY #0
    case 0xC3F5A2: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:193 LDY #0
    // Overlapping static entry reached from 0xC3F5A2.
    case 0xC3F5A4: {
        Instruction step(cpu, 0x00, 0x000084u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:194 STY @LOCAL02
    case 0xC3F5A5: {
        Instruction step(cpu, 0x84, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:195 BRA @UNKNOWN22
    case 0xC3F5A7: {
        Instruction step(cpu, 0x80, 0x00002Cu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:197 TYA
    case 0xC3F5A9: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:198 ASL
    case 0xC3F5AA: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:199 TAX
    case 0xC3F5AB: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:200 LDA ENTITY_SCRIPT_TABLE,X
    case 0xC3F5AC: {
        Instruction step(cpu, 0xBD, 0x000A62u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:201 CMP #EVENT_SCRIPT::TITLE_SCREEN_1
    case 0xC3F5AF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000014u : 0x000314u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:201 CMP #EVENT_SCRIPT::TITLE_SCREEN_1
    // Overlapping static entry reached from 0xC3F5AF.
    case 0xC3F5B1: {
        Instruction step(cpu, 0x03, 0x000090u, 2u, AddressMode::StackRelative);
        step.or_accumulator();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:202 BCC @UNKNOWN21
    case 0xC3F5B2: {
        Instruction step(cpu, 0x90, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:202 BCC @UNKNOWN21
    // Overlapping static entry reached from 0xC3F5B1.
    case 0xC3F5B3: {
        Instruction step(cpu, 0x0C, 0x001EC9u, 3u, AddressMode::Absolute);
        step.set_tested_bits();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:203 CMP #EVENT_SCRIPT::TITLE_SCREEN_11
    case 0xC3F5B4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00001Eu : 0x00031Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:203 CMP #EVENT_SCRIPT::TITLE_SCREEN_11
    // Overlapping static entry reached from 0xC3F5B4.
    case 0xC3F5B6: {
        Instruction step(cpu, 0x03, 0x0000F0u, 2u, AddressMode::StackRelative);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/intro/show_title_screen.asm:204 BGT @UNKNOWN21
    case 0xC3F5B7: {
        Instruction step(cpu, 0xF0, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/intro/show_title_screen.asm:204 BGT @UNKNOWN21
    // Overlapping static entry reached from 0xC3F5B6.
    case 0xC3F5B8: {
        Instruction step(cpu, 0x02, 0x0000B0u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // include/macros.asm:767 BCS dest
    // Macro caller: src/intro/show_title_screen.asm:204 BGT @UNKNOWN21
    case 0xC3F5B9: {
        Instruction step(cpu, 0xB0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:205 TYA
    case 0xC3F5BB: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:206 JSL UNKNOWN_C09C35
    case 0xC3F5BC: {
        Instruction step(cpu, 0x22, 0xC09C35u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:208 LDY @LOCAL02
    case 0xC3F5C0: {
        Instruction step(cpu, 0xA4, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:209 TYA
    case 0xC3F5C2: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:210 ASL
    case 0xC3F5C3: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:211 CLC
    case 0xC3F5C4: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:212 ADC #.LOWORD(ENTITY_SPRITEMAP_POINTER_HIGH)
    case 0xC3F5C5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00006Au : 0x00116Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:212 ADC #.LOWORD(ENTITY_SPRITEMAP_POINTER_HIGH)
    // Overlapping static entry reached from 0xC3F5C5.
    case 0xC3F5C7: {
        Instruction step(cpu, 0x11, 0x0000AAu, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.or_accumulator();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:213 TAX
    case 0xC3F5C8: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:214 LDA __BSS_START__,X
    case 0xC3F5C9: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:215 AND #$7FFF
    case 0xC3F5CC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x007FFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:215 AND #$7FFF
    // Overlapping static entry reached from 0xC3F5CC.
    case 0xC3F5CE: {
        Instruction step(cpu, 0x7F, 0x00009Du, 4u, AddressMode::LongIndexedX);
        step.add_with_carry();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:216 STA __BSS_START__,X
    case 0xC3F5CF: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:217 INY
    case 0xC3F5D2: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:218 STY @LOCAL02
    case 0xC3F5D3: {
        Instruction step(cpu, 0x84, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:220 CPY #MAX_ENTITIES
    case 0xC3F5D5: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x00001Eu : 0x00001Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:220 CPY #MAX_ENTITIES
    // Overlapping static entry reached from 0xC3F5D5.
    case 0xC3F5D7: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:221 BCC @UNKNOWN19
    case 0xC3F5D8: {
        Instruction step(cpu, 0x90, 0x0000CFu, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:222 JSL UNKNOWN_C08726
    case 0xC3F5DA: {
        Instruction step(cpu, 0x22, 0xC08726u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:223 JSL RELOAD_MAP
    case 0xC3F5DE: {
        Instruction step(cpu, 0x22, 0xC018F3u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:224 JSL UNDRAW_FLYOVER_TEXT
    case 0xC3F5E2: {
        Instruction step(cpu, 0x22, 0xC4800Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:225 SEP #PROC_FLAGS::ACCUM8
    case 0xC3F5E6: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:226 LDA #$17
    case 0xC3F5E8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000017u : 0x008D17u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:227 STA TM_MIRROR
    case 0xC3F5EA: {
        Instruction step(cpu, 0x8D, 0x00001Au, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:227 STA TM_MIRROR
    // Overlapping static entry reached from 0xC3F5E8.
    case 0xC3F5EB: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:227 STA TM_MIRROR
    // Overlapping static entry reached from 0xC3F5EB.
    case 0xC3F5EC: {
        Instruction step(cpu, 0x00, 0x0000A2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:228 LDX #1
    case 0xC3F5ED: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:228 LDX #1
    // Overlapping static entry reached from 0xC3F5ED.
    case 0xC3F5EF: {
        Instruction step(cpu, 0x00, 0x0000C2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:229 REP #PROC_FLAGS::ACCUM8
    case 0xC3F5F0: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:230 TXA
    case 0xC3F5F2: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/intro/show_title_screen.asm:231 JSL FADE_IN
    case 0xC3F5F3: {
        Instruction step(cpu, 0x22, 0xC0886Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/intro/show_title_screen.asm:233 END_C_FUNCTION
    case 0xC3F5F7: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/intro/show_title_screen.asm:233 END_C_FUNCTION
    case 0xC3F5F8: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
