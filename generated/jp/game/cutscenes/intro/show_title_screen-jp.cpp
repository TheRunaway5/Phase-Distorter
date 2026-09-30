// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/intro/show_title_screen-jp.asm
bool resume_introduction_show_title_screen_jp(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/intro/show_title_screen-jp.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0EDC0: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/intro/show_title_screen-jp.asm:9 END_STACK_VARS
    case 0xC0EDC2: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/intro/show_title_screen-jp.asm:9 END_STACK_VARS
    case 0xC0EDC3: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/intro/show_title_screen-jp.asm:9 END_STACK_VARS
    case 0xC0EDC4: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/intro/show_title_screen-jp.asm:9 END_STACK_VARS
    case 0xC0EDC5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000ECu : 0x00FFECu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/intro/show_title_screen-jp.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC0EDC5.
    case 0xC0EDC7: {
        Instruction step(cpu, 0xFF, 0x85685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/intro/show_title_screen-jp.asm:9 END_STACK_VARS
    case 0xC0EDC8: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/intro/show_title_screen-jp.asm:9 END_STACK_VARS
    case 0xC0EDC9: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:10 STA @VIRTUAL02
    case 0xC0EDCA: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:10 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC0EDC7.
    case 0xC0EDCB: {
        Instruction step(cpu, 0x02, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:11 STA TITLE_SCREEN_QUICK_MODE
    case 0xC0EDCC: {
        Instruction step(cpu, 0x8D, 0x00A177u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:12 JSL UNKNOWN_C08726
    case 0xC0EDCF: {
        Instruction step(cpu, 0x22, 0xC0871Fu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:13 LDA @VIRTUAL02
    case 0xC0EDD3: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:14 BNE @UNKNOWN0
    case 0xC0EDD5: {
        Instruction step(cpu, 0xD0, 0x000006u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:15 JSL UNKNOWN_C0927C
    case 0xC0EDD7: {
        Instruction step(cpu, 0x22, 0xC0925Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:16 BRA @UNKNOWN1
    case 0xC0EDDB: {
        Instruction step(cpu, 0x80, 0x00002Bu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:18 LDY #0
    case 0xC0EDDD: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:18 LDY #0
    // Overlapping static entry reached from 0xC0EDDD.
    case 0xC0EDDF: {
        Instruction step(cpu, 0x00, 0x0000A2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:19 LDX #1
    case 0xC0EDE0: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:19 LDX #1
    // Overlapping static entry reached from 0xC0EDE0.
    case 0xC0EDE2: {
        Instruction step(cpu, 0x00, 0x00008Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:20 TXA
    case 0xC0EDE3: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:21 JSL FADE_OUT_WITH_MOSAIC
    case 0xC0EDE4: {
        Instruction step(cpu, 0x22, 0xC0880Au, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:22 LDA #0
    case 0xC0EDE8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:22 LDA #0
    // Overlapping static entry reached from 0xC0EDE8.
    case 0xC0EDEA: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:23 STA @LOCAL02
    case 0xC0EDEB: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:24 BRA @UNKNOWN2
    case 0xC0EDED: {
        Instruction step(cpu, 0x80, 0x000014u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:26 ASL
    case 0xC0EDEF: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:27 CLC
    case 0xC0EDF0: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:28 ADC #.LOWORD(ENTITY_SPRITEMAP_POINTER_HIGH)
    case 0xC0EDF1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000060u : 0x001160u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:28 ADC #.LOWORD(ENTITY_SPRITEMAP_POINTER_HIGH)
    // Overlapping static entry reached from 0xC0EDF1.
    case 0xC0EDF3: {
        Instruction step(cpu, 0x11, 0x0000AAu, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.or_accumulator();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:29 TAX
    case 0xC0EDF4: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:30 LDA __BSS_START__,X
    case 0xC0EDF5: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:31 ORA #$8000
    case 0xC0EDF8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x09, narrow ? 0x000000u : 0x008000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.or_accumulator();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:31 ORA #$8000
    // Overlapping static entry reached from 0xC0EDF8.
    case 0xC0EDFA: {
        Instruction step(cpu, 0x80, 0x00009Du, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:32 STA __BSS_START__,X
    case 0xC0EDFB: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:33 LDA @LOCAL02
    case 0xC0EDFE: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:34 INC
    case 0xC0EE00: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:35 STA @LOCAL02
    case 0xC0EE01: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:37 CMP #MAX_ENTITIES
    case 0xC0EE03: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00001Eu : 0x00001Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:37 CMP #MAX_ENTITIES
    // Overlapping static entry reached from 0xC0EE03.
    case 0xC0EE05: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:38 BCC @UNKNOWN3
    case 0xC0EE06: {
        Instruction step(cpu, 0x90, 0x0000E7u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:40 LDA #9
    case 0xC0EE08: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000009u : 0x000009u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:40 LDA #9
    // Overlapping static entry reached from 0xC0EE08.
    case 0xC0EE0A: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:41 JSL UNKNOWN_C08D79
    case 0xC0EE0B: {
        Instruction step(cpu, 0x22, 0xC08D6Au, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:42 LDA #1
    case 0xC0EE0F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:42 LDA #1
    // Overlapping static entry reached from 0xC0EE0F.
    case 0xC0EE11: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:43 JSL SET_OAM_SIZE
    case 0xC0EE12: {
        Instruction step(cpu, 0x22, 0xC08D83u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:44 LDY #$0000
    case 0xC0EE16: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:44 LDY #$0000
    // Overlapping static entry reached from 0xC0EE16.
    case 0xC0EE18: {
        Instruction step(cpu, 0x00, 0x0000A2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:45 LDX #$3800
    case 0xC0EE19: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x003800u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:45 LDX #$3800
    // Overlapping static entry reached from 0xC0EE19.
    case 0xC0EE1B: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:46 TYA ;BG_TILEMAP_SIZE::NORMAL
    case 0xC0EE1C: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:47 JSL SET_BG1_VRAM_LOCATION
    case 0xC0EE1D: {
        Instruction step(cpu, 0x22, 0xC08D8Fu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:48 LDY #$1000
    case 0xC0EE21: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x001000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:48 LDY #$1000
    // Overlapping static entry reached from 0xC0EE21.
    case 0xC0EE23: {
        Instruction step(cpu, 0x10, 0x0000A2u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:49 LDX #$3C00
    case 0xC0EE24: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x003C00u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:49 LDX #$3C00
    // Overlapping static entry reached from 0xC0EE23.
    case 0xC0EE25: {
        Instruction step(cpu, 0x00, 0x00003Cu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:49 LDX #$3C00
    // Overlapping static entry reached from 0xC0EE24.
    case 0xC0EE26: {
        Instruction step(cpu, 0x3C, 0x0000A9u, 3u, AddressMode::AbsoluteIndexedX);
        step.test_bits();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:50 LDA #BG_TILEMAP_SIZE::NORMAL
    case 0xC0EE27: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:50 LDA #BG_TILEMAP_SIZE::NORMAL
    // Overlapping static entry reached from 0xC0EE27.
    case 0xC0EE29: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:51 JSL SET_BG2_VRAM_LOCATION
    case 0xC0EE2A: {
        Instruction step(cpu, 0x22, 0xC08DCFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:52 STZ BG3_X_POS
    case 0xC0EE2E: {
        Instruction step(cpu, 0x9C, 0x000039u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:53 STZ BG3_Y_POS
    case 0xC0EE31: {
        Instruction step(cpu, 0x9C, 0x00003Bu, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:54 STZ BG2_Y_POS
    case 0xC0EE34: {
        Instruction step(cpu, 0x9C, 0x000037u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:55 STZ BG2_X_POS
    case 0xC0EE37: {
        Instruction step(cpu, 0x9C, 0x000035u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:55 STZ BG2_X_POS
    // Overlapping static entry reached from 0xC0EE8A.
    case 0xC0EE39: {
        Instruction step(cpu, 0x00, 0x00009Cu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:56 STZ BG1_Y_POS
    case 0xC0EE3A: {
        Instruction step(cpu, 0x9C, 0x000033u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:57 STZ BG1_X_POS
    case 0xC0EE3D: {
        Instruction step(cpu, 0x9C, 0x000031u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:58 JSL UPDATE_SCREEN
    case 0xC0EE40: {
        Instruction step(cpu, 0x22, 0xC08B17u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:59 JSL UNKNOWN_C0EBE0
    case 0xC0EE44: {
        Instruction step(cpu, 0x22, 0xC0EC20u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:60 LDA @VIRTUAL02
    case 0xC0EE48: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:61 BNE @UNKNOWN4
    case 0xC0EE4A: {
        Instruction step(cpu, 0xD0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:62 LDX #$10
    case 0xC0EE4C: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:62 LDX #$10
    // Overlapping static entry reached from 0xC0EE4C.
    case 0xC0EE4E: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:63 BRA @UNKNOWN5
    case 0xC0EE4F: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:65 LDX #$13
    case 0xC0EE51: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000013u : 0x000013u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:65 LDX #$13
    // Overlapping static entry reached from 0xC0EE51.
    case 0xC0EE53: {
        Instruction step(cpu, 0x00, 0x00008Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:67 TXA
    case 0xC0EE54: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:68 SEP #PROC_FLAGS::ACCUM8
    case 0xC0EE55: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:69 STA TM_MIRROR
    case 0xC0EE57: {
        Instruction step(cpu, 0x8D, 0x00001Au, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:70 JSL UNKNOWN_C08744
    case 0xC0EE5A: {
        Instruction step(cpu, 0x22, 0xC0873Au, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:71 JSL OAM_CLEAR
    case 0xC0EE5E: {
        Instruction step(cpu, 0x22, 0xC088A3u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:74 LDX #1
    case 0xC0EE62: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:74 LDX #1
    // Overlapping static entry reached from 0xC0EE62.
    case 0xC0EE64: {
        Instruction step(cpu, 0x00, 0x00008Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:75 TXA
    case 0xC0EE65: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:76 JSL FADE_IN
    case 0xC0EE66: {
        Instruction step(cpu, 0x22, 0xC0885Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:77 LDY #0
    case 0xC0EE6A: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:77 LDY #0
    // Overlapping static entry reached from 0xC0EE6A.
    case 0xC0EE6C: {
        Instruction step(cpu, 0x00, 0x0000BBu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:78 TYX
    case 0xC0EE6D: {
        Instruction step(cpu, 0xBB, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_x();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:79 LDA #EVENT_SCRIPT::TITLE_SCREEN_1
    case 0xC0EE6E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000014u : 0x000314u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:79 LDA #EVENT_SCRIPT::TITLE_SCREEN_1
    // Overlapping static entry reached from 0xC0EE6E.
    case 0xC0EE70: {
        Instruction step(cpu, 0x03, 0x000022u, 2u, AddressMode::StackRelative);
        step.or_accumulator();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:80 JSL INIT_ENTITY_WIPE
    case 0xC0EE71: {
        Instruction step(cpu, 0x22, 0xC092D4u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:80 JSL INIT_ENTITY_WIPE
    // Overlapping static entry reached from 0xC0EE70.
    case 0xC0EE72: {
        Instruction step(cpu, 0xD4, 0x000092u, 2u, AddressMode::DirectPage);
        step.push_effective_indirect();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:80 JSL INIT_ENTITY_WIPE
    // Overlapping static entry reached from 0xC0EE72.
    case 0xC0EE74: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x00009Cu : 0x00399Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:81 STZ ACTIONSCRIPT_STATE
    case 0xC0EE75: {
        Instruction step(cpu, 0x9C, 0x009939u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:81 STZ ACTIONSCRIPT_STATE
    // Overlapping static entry reached from 0xC0EE74.
    case 0xC0EE76: {
        Instruction step(cpu, 0x39, 0x00A099u, 3u, AddressMode::AbsoluteIndexedY);
        step.and_accumulator();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:81 STZ ACTIONSCRIPT_STATE
    // Overlapping static entry reached from 0xC0EE74.
    case 0xC0EE77: {
        Instruction step(cpu, 0x99, 0x0000A0u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:82 LDY #0
    case 0xC0EE78: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:82 LDY #0
    // Overlapping static entry reached from 0xC0EE76.
    case 0xC0EE79: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:82 LDY #0
    // Overlapping static entry reached from 0xC0EE78.
    case 0xC0EE7A: {
        Instruction step(cpu, 0x00, 0x000084u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:83 STY @LOCAL01
    case 0xC0EE7B: {
        Instruction step(cpu, 0x84, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:84 BRA @UNKNOWN13__
    case 0xC0EE7D: {
        Instruction step(cpu, 0x80, 0x000027u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:86 LDA @VIRTUAL02
    case 0xC0EE7F: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:87 BNE @UNKNOWN13_
    case 0xC0EE81: {
        Instruction step(cpu, 0xD0, 0x00001Fu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:88 LDA PAD_PRESS
    case 0xC0EE83: {
        Instruction step(cpu, 0xAD, 0x00006Du, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:89 AND #PAD::A_BUTTON
    case 0xC0EE86: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000080u : 0x000080u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:89 AND #PAD::A_BUTTON
    // Overlapping static entry reached from 0xC0EE86.
    case 0xC0EE88: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:90 BNE @UNKNOWN13
    case 0xC0EE89: {
        Instruction step(cpu, 0xD0, 0x000010u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:90 BNE @UNKNOWN13
    // Overlapping static entry reached from 0xC0EE98.
    case 0xC0EE8A: {
        Instruction step(cpu, 0x10, 0x0000ADu, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:91 LDA PAD_PRESS
    case 0xC0EE8B: {
        Instruction step(cpu, 0xAD, 0x00006Du, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:91 LDA PAD_PRESS
    // Overlapping static entry reached from 0xC0EE8A.
    case 0xC0EE8C: {
        Instruction step(cpu, 0x6D, 0x002900u, 3u, AddressMode::Absolute);
        step.add_with_carry();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:92 AND #PAD::B_BUTTON
    case 0xC0EE8E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x008000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:92 AND #PAD::B_BUTTON
    // Overlapping static entry reached from 0xC0EE8C.
    case 0xC0EE8F: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:92 AND #PAD::B_BUTTON
    // Overlapping static entry reached from 0xC0EE8E.
    case 0xC0EE90: {
        Instruction step(cpu, 0x80, 0x0000D0u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:93 BNE @UNKNOWN13
    case 0xC0EE91: {
        Instruction step(cpu, 0xD0, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:94 LDA PAD_PRESS
    case 0xC0EE93: {
        Instruction step(cpu, 0xAD, 0x00006Du, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:95 AND #PAD::START_BUTTON
    case 0xC0EE96: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x001000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:95 AND #PAD::START_BUTTON
    // Overlapping static entry reached from 0xC0EE96.
    case 0xC0EE98: {
        Instruction step(cpu, 0x10, 0x0000F0u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:96 BEQ @UNKNOWN13_
    case 0xC0EE99: {
        Instruction step(cpu, 0xF0, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:96 BEQ @UNKNOWN13_
    // Overlapping static entry reached from 0xC0EE98.
    case 0xC0EE9A: {
        Instruction step(cpu, 0x07, 0x0000A0u, 2u, AddressMode::DirectPageIndirectLong);
        step.or_accumulator();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:98 LDY #1
    case 0xC0EE9B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:98 LDY #1
    // Overlapping static entry reached from 0xC0EE9A.
    case 0xC0EE9C: {
        Instruction step(cpu, 0x01, 0x000000u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:98 LDY #1
    // Overlapping static entry reached from 0xC0EE9B.
    case 0xC0EE9D: {
        Instruction step(cpu, 0x00, 0x000084u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:99 STY @LOCAL01
    case 0xC0EE9E: {
        Instruction step(cpu, 0x84, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:100 BRA @UNKNOWN13___
    case 0xC0EEA0: {
        Instruction step(cpu, 0x80, 0x000009u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:102 JSL UNKNOWN_C1004E
    case 0xC0EEA2: {
        Instruction step(cpu, 0x22, 0xC100C4u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:104 LDA ACTIONSCRIPT_STATE
    case 0xC0EEA6: {
        Instruction step(cpu, 0xAD, 0x009939u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:105 BEQ @UNKNOWN12
    case 0xC0EEA9: {
        Instruction step(cpu, 0xF0, 0x0000D4u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:107 LDX #1
    case 0xC0EEAB: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:107 LDX #1
    // Overlapping static entry reached from 0xC0EEAB.
    case 0xC0EEAD: {
        Instruction step(cpu, 0x00, 0x00008Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:108 TXA
    case 0xC0EEAE: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:109 JSL FADE_OUT
    case 0xC0EEAF: {
        Instruction step(cpu, 0x22, 0xC0886Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:110 BRA @UNKNOWN15
    case 0xC0EEB3: {
        Instruction step(cpu, 0x80, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:112 JSL UNKNOWN_C1004E
    case 0xC0EEB5: {
        Instruction step(cpu, 0x22, 0xC100C4u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:114 LDA FADE_PARAMETERS + fade_parameters::step
    case 0xC0EEB9: {
        Instruction step(cpu, 0xAD, 0x000028u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:115 AND #$00FF
    case 0xC0EEBC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:115 AND #$00FF
    // Overlapping static entry reached from 0xC0EEBC.
    case 0xC0EEBE: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:116 BNE @UNKNOWN14
    case 0xC0EEBF: {
        Instruction step(cpu, 0xD0, 0x0000F4u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:117 LDA @VIRTUAL02
    case 0xC0EEC1: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:118 BNE @UNKNOWN18
    case 0xC0EEC3: {
        Instruction step(cpu, 0xD0, 0x000013u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:119 STZ ACTIONSCRIPT_STATE
    case 0xC0EEC5: {
        Instruction step(cpu, 0x9C, 0x009939u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:120 LDA #0
    case 0xC0EEC8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:120 LDA #0
    // Overlapping static entry reached from 0xC0EEC8.
    case 0xC0EECA: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:121 JSL UNKNOWN_C474A8
    case 0xC0EECB: {
        Instruction step(cpu, 0x22, 0xC4522Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:122 JSL UNKNOWN_C0927C
    case 0xC0EECF: {
        Instruction step(cpu, 0x22, 0xC0925Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:123 LDY @LOCAL01
    case 0xC0EED3: {
        Instruction step(cpu, 0xA4, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:124 TYA
    case 0xC0EED5: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:125 BRA @UNKNOWN23
    case 0xC0EED6: {
        Instruction step(cpu, 0x80, 0x000057u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:127 LDX #0
    case 0xC0EED8: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:127 LDX #0
    // Overlapping static entry reached from 0xC0EED8.
    case 0xC0EEDA: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:128 STX @LOCAL00
    case 0xC0EEDB: {
        Instruction step(cpu, 0x86, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:129 BRA @UNKNOWN22
    case 0xC0EEDD: {
        Instruction step(cpu, 0x80, 0x00002Eu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:131 TXA
    case 0xC0EEDF: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:132 ASL
    case 0xC0EEE0: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:133 TAX
    case 0xC0EEE1: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:134 LDA ENTITY_SCRIPT_TABLE,X
    case 0xC0EEE2: {
        Instruction step(cpu, 0xBD, 0x000A58u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:135 CMP #EVENT_SCRIPT::TITLE_SCREEN_1
    case 0xC0EEE5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000014u : 0x000314u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:135 CMP #EVENT_SCRIPT::TITLE_SCREEN_1
    // Overlapping static entry reached from 0xC0EEE5.
    case 0xC0EEE7: {
        Instruction step(cpu, 0x03, 0x000090u, 2u, AddressMode::StackRelative);
        step.or_accumulator();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:136 BCC @UNKNOWN21
    case 0xC0EEE8: {
        Instruction step(cpu, 0x90, 0x00000Eu, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:136 BCC @UNKNOWN21
    // Overlapping static entry reached from 0xC0EEE7.
    case 0xC0EEE9: {
        Instruction step(cpu, 0x0E, 0x001AC9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:137 CMP #EVENT_SCRIPT::TITLE_SCREEN_7
    case 0xC0EEEA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00001Au : 0x00031Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:137 CMP #EVENT_SCRIPT::TITLE_SCREEN_7
    // Overlapping static entry reached from 0xC0EEEA.
    case 0xC0EEEC: {
        Instruction step(cpu, 0x03, 0x0000F0u, 2u, AddressMode::StackRelative);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/intro/show_title_screen-jp.asm:138 BGT @UNKNOWN21
    case 0xC0EEED: {
        Instruction step(cpu, 0xF0, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/intro/show_title_screen-jp.asm:138 BGT @UNKNOWN21
    // Overlapping static entry reached from 0xC0EEEC.
    case 0xC0EEEE: {
        Instruction step(cpu, 0x02, 0x0000B0u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // include/macros.asm:767 BCS dest
    // Macro caller: src/intro/show_title_screen-jp.asm:138 BGT @UNKNOWN21
    case 0xC0EEEF: {
        Instruction step(cpu, 0xB0, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:139 LDX @LOCAL00
    case 0xC0EEF1: {
        Instruction step(cpu, 0xA6, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:140 TXA
    case 0xC0EEF3: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:141 JSL UNKNOWN_C09C35
    case 0xC0EEF4: {
        Instruction step(cpu, 0x22, 0xC09C14u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:143 LDX @LOCAL00
    case 0xC0EEF8: {
        Instruction step(cpu, 0xA6, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:144 TXA
    case 0xC0EEFA: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:145 ASL
    case 0xC0EEFB: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:146 CLC
    case 0xC0EEFC: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:147 ADC #.LOWORD(ENTITY_SPRITEMAP_POINTER_HIGH)
    case 0xC0EEFD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000060u : 0x001160u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:147 ADC #.LOWORD(ENTITY_SPRITEMAP_POINTER_HIGH)
    // Overlapping static entry reached from 0xC0EEFD.
    case 0xC0EEFF: {
        Instruction step(cpu, 0x11, 0x0000A8u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.or_accumulator();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:148 TAY
    case 0xC0EF00: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:149 LDA __BSS_START__,Y
    case 0xC0EF01: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:150 AND #$7FFF
    case 0xC0EF04: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x007FFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:150 AND #$7FFF
    // Overlapping static entry reached from 0xC0EF04.
    case 0xC0EF06: {
        Instruction step(cpu, 0x7F, 0x000099u, 4u, AddressMode::LongIndexedX);
        step.add_with_carry();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:151 STA __BSS_START__,Y
    case 0xC0EF07: {
        Instruction step(cpu, 0x99, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:152 INX
    case 0xC0EF0A: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:153 STX @LOCAL00
    case 0xC0EF0B: {
        Instruction step(cpu, 0x86, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:155 CPX #MAX_ENTITIES
    case 0xC0EF0D: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x00001Eu : 0x00001Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:155 CPX #MAX_ENTITIES
    // Overlapping static entry reached from 0xC0EF0D.
    case 0xC0EF0F: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:156 BCC @UNKNOWN19
    case 0xC0EF10: {
        Instruction step(cpu, 0x90, 0x0000CDu, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:157 JSL UNKNOWN_C08726
    case 0xC0EF12: {
        Instruction step(cpu, 0x22, 0xC0871Fu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:158 JSL RELOAD_MAP
    case 0xC0EF16: {
        Instruction step(cpu, 0x22, 0xC01909u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:158 JSL RELOAD_MAP
    // Overlapping static entry reached from 0xC0EF90.
    case 0xC0EF17: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x09, narrow ? 0x000019u : 0x00C019u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.or_accumulator();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:158 JSL RELOAD_MAP
    // Overlapping static entry reached from 0xC0EF17.
    case 0xC0EF19: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000022u : 0x00A222u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:159 JSL UNDRAW_FLYOVER_TEXT
    case 0xC0EF1A: {
        Instruction step(cpu, 0x22, 0xC45CA2u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:159 JSL UNDRAW_FLYOVER_TEXT
    // Overlapping static entry reached from 0xC0EF19.
    case 0xC0EF1B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x00005Cu : 0x00C45Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:159 JSL UNDRAW_FLYOVER_TEXT
    // Overlapping static entry reached from 0xC0EF19.
    case 0xC0EF1C: {
        Instruction step(cpu, 0x5C, 0x20E2C4u, 4u, AddressMode::Long);
        step.jump_long();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:159 JSL UNDRAW_FLYOVER_TEXT
    // Overlapping static entry reached from 0xC0EF1B.
    case 0xC0EF1D: {
        Instruction step(cpu, 0xC4, 0x0000E2u, 2u, AddressMode::DirectPage);
        step.compare_y();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:160 SEP #PROC_FLAGS::ACCUM8
    case 0xC0EF1E: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:160 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC0EF1D.
    case 0xC0EF1F: {
        Instruction step(cpu, 0x20, 0x0017A9u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:161 LDA #$17
    case 0xC0EF20: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000017u : 0x008D17u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:162 STA TM_MIRROR
    case 0xC0EF22: {
        Instruction step(cpu, 0x8D, 0x00001Au, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:162 STA TM_MIRROR
    // Overlapping static entry reached from 0xC0EF20.
    case 0xC0EF23: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:162 STA TM_MIRROR
    // Overlapping static entry reached from 0xC0EF23.
    case 0xC0EF24: {
        Instruction step(cpu, 0x00, 0x0000A2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:163 LDX #1
    case 0xC0EF25: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:163 LDX #1
    // Overlapping static entry reached from 0xC0EF25.
    case 0xC0EF27: {
        Instruction step(cpu, 0x00, 0x0000C2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:164 REP #PROC_FLAGS::ACCUM8
    case 0xC0EF28: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:165 TXA
    case 0xC0EF2A: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/intro/show_title_screen-jp.asm:166 JSL FADE_IN
    case 0xC0EF2B: {
        Instruction step(cpu, 0x22, 0xC0885Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/intro/show_title_screen-jp.asm:168 END_C_FUNCTION
    case 0xC0EF2F: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/intro/show_title_screen-jp.asm:168 END_C_FUNCTION
    case 0xC0EF30: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
