// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/battle/battle_psi_menu.asm
bool resume_battle_battle_psi_menu(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/battle_psi_menu.asm:4 BEGIN_C_FUNCTION
    case 0xC1C98A: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/battle_psi_menu.asm:21 END_STACK_VARS
    case 0xC1C98C: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/battle_psi_menu.asm:21 END_STACK_VARS
    case 0xC1C98D: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/battle_psi_menu.asm:21 END_STACK_VARS
    case 0xC1C98E: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/battle_psi_menu.asm:21 END_STACK_VARS
    case 0xC1C98F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000E0u : 0x00FFE0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/battle_psi_menu.asm:21 END_STACK_VARS
    // Overlapping static entry reached from 0xC1C98F.
    case 0xC1C991: {
        Instruction step(cpu, 0xFF, 0x85685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/battle_psi_menu.asm:21 END_STACK_VARS
    case 0xC1C992: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/battle_psi_menu.asm:21 END_STACK_VARS
    case 0xC1C993: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:22 STA @VIRTUAL04
    case 0xC1C994: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:22 STA @VIRTUAL04
    // Overlapping static entry reached from 0xC1C991.
    case 0xC1C995: {
        Instruction step(cpu, 0x04, 0x000085u, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:23 STA @LOCAL06
    case 0xC1C996: {
        Instruction step(cpu, 0x85, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:23 STA @LOCAL06
    // Overlapping static entry reached from 0xC1C995.
    case 0xC1C997: {
        Instruction step(cpu, 0x1E, 0x0010A9u, 3u, AddressMode::AbsoluteIndexedX);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:735 LDA arg
    // Macro caller: src/battle/battle_psi_menu.asm:28 CREATE_WINDOW_NEAR #WINDOW::UNKNOWN10
    case 0xC1C998: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:735 LDA arg
    // Macro caller: src/battle/battle_psi_menu.asm:28 CREATE_WINDOW_NEAR #WINDOW::UNKNOWN10
    // Overlapping static entry reached from 0xC1C998.
    case 0xC1C99A: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/battle/battle_psi_menu.asm:28 CREATE_WINDOW_NEAR #WINDOW::UNKNOWN10
    case 0xC1C99B: {
        Instruction step(cpu, 0x20, 0x0006E4u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:29 LDA #$0000
    case 0xC1C99E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:29 LDA #$0000
    // Overlapping static entry reached from 0xC1C99E.
    case 0xC1C9A0: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:30 STA @LOCAL05
    case 0xC1C9A1: {
        Instruction step(cpu, 0x85, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:31 BRA @UNKNOWN2
    case 0xC1C9A3: {
        Instruction step(cpu, 0x80, 0x000034u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:33 TAX
    case 0xC1C9A5: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:34 INX
    case 0xC1C9A6: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:35 STX @LOCAL04
    case 0xC1C9A7: {
        Instruction step(cpu, 0x86, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/battle_psi_menu.asm:36 LOADPTR PSI_CATEGORIES, @VIRTUAL06
    case 0xC1C9A9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00001Bu : 0x00EC1Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/battle_psi_menu.asm:36 LOADPTR PSI_CATEGORIES, @VIRTUAL06
    // Overlapping static entry reached from 0xC1C9A9.
    case 0xC1C9AB: {
        Instruction step(cpu, 0xEC, 0x000685u, 3u, AddressMode::Absolute);
        step.compare_x();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/battle_psi_menu.asm:36 LOADPTR PSI_CATEGORIES, @VIRTUAL06
    case 0xC1C9AC: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/battle_psi_menu.asm:36 LOADPTR PSI_CATEGORIES, @VIRTUAL06
    case 0xC1C9AE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C3u : 0x0000C3u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/battle_psi_menu.asm:36 LOADPTR PSI_CATEGORIES, @VIRTUAL06
    // Overlapping static entry reached from 0xC1C9AE.
    case 0xC1C9B0: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/battle_psi_menu.asm:36 LOADPTR PSI_CATEGORIES, @VIRTUAL06
    case 0xC1C9B1: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:37 LDA @LOCAL05
    case 0xC1C9B3: {
        Instruction step(cpu, 0xA5, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:529 STA scratch
    // Macro caller: src/battle/battle_psi_menu.asm:38 OPTIMIZED_MULT @VIRTUAL04, PSI_CATEGORY_NAME_SIZE
    case 0xC1C9B5: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:530 ASL
    // Macro caller: src/battle/battle_psi_menu.asm:38 OPTIMIZED_MULT @VIRTUAL04, PSI_CATEGORY_NAME_SIZE
    case 0xC1C9B7: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:531 ASL
    // Macro caller: src/battle/battle_psi_menu.asm:38 OPTIMIZED_MULT @VIRTUAL04, PSI_CATEGORY_NAME_SIZE
    case 0xC1C9B8: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:532 ADC scratch
    // Macro caller: src/battle/battle_psi_menu.asm:38 OPTIMIZED_MULT @VIRTUAL04, PSI_CATEGORY_NAME_SIZE
    case 0xC1C9B9: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:39 CLC
    case 0xC1C9BB: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:40 ADC @VIRTUAL06
    case 0xC1C9BC: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:41 STA @VIRTUAL06
    case 0xC1C9BE: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:42 STA @LOCAL00
    case 0xC1C9C0: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:43 LDA @VIRTUAL06+2
    case 0xC1C9C2: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:44 STA @LOCAL00+2
    case 0xC1C9C4: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/battle_psi_menu.asm:45 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1C9C6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/battle_psi_menu.asm:45 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC1C9C6.
    case 0xC1C9C8: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/battle/battle_psi_menu.asm:45 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1C9C9: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/battle_psi_menu.asm:45 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1C9CB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/battle_psi_menu.asm:45 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC1C9CB.
    case 0xC1C9CD: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/battle/battle_psi_menu.asm:45 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1C9CE: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:46 TXA
    case 0xC1C9D0: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:47 JSR UNKNOWN_C115F4
    case 0xC1C9D1: {
        Instruction step(cpu, 0x20, 0x001BB0u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:48 LDX @LOCAL04
    case 0xC1C9D4: {
        Instruction step(cpu, 0xA6, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:49 TXA
    case 0xC1C9D6: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:50 STA @LOCAL05
    case 0xC1C9D7: {
        Instruction step(cpu, 0x85, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:52 CMP #$0003
    case 0xC1C9D9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:52 CMP #$0003
    // Overlapping static entry reached from 0xC1C9D9.
    case 0xC1C9DB: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:53 BCC @UNKNOWN1
    case 0xC1C9DC: {
        Instruction step(cpu, 0x90, 0x0000C7u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:54 LDY #$0000
    case 0xC1C9DE: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:54 LDY #$0000
    // Overlapping static entry reached from 0xC1C9DE.
    case 0xC1C9E0: {
        Instruction step(cpu, 0x00, 0x0000BBu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:55 TYX
    case 0xC1C9E1: {
        Instruction step(cpu, 0xBB, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_x();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:56 LDA #$0001
    case 0xC1C9E2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:56 LDA #$0001
    // Overlapping static entry reached from 0xC1C9E2.
    case 0xC1C9E4: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:57 JSR UNKNOWN_C1180D
    case 0xC1C9E5: {
        Instruction step(cpu, 0x20, 0x001FA6u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:59 LDA #$0010
    case 0xC1C9E8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:59 LDA #$0010
    // Overlapping static entry reached from 0xC1C9E8.
    case 0xC1C9EA: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:60 JSR SET_WINDOW_FOCUS
    case 0xC1C9EB: {
        Instruction step(cpu, 0x20, 0x00013Bu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:65 JSR PRINT_MENU_ITEMS
    case 0xC1C9EE: {
        Instruction step(cpu, 0x20, 0x001BF0u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/battle_psi_menu.asm:70 LOADPTR UNKNOWN_C1CAF5, @LOCAL00
    case 0xC1C9F1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000AEu : 0x00C8AEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/battle_psi_menu.asm:70 LOADPTR UNKNOWN_C1CAF5, @LOCAL00
    // Overlapping static entry reached from 0xC1C9F1.
    case 0xC1C9F3: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/battle_psi_menu.asm:70 LOADPTR UNKNOWN_C1CAF5, @LOCAL00
    case 0xC1C9F4: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/battle_psi_menu.asm:70 LOADPTR UNKNOWN_C1CAF5, @LOCAL00
    case 0xC1C9F6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C1u : 0x0000C1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/battle_psi_menu.asm:70 LOADPTR UNKNOWN_C1CAF5, @LOCAL00
    // Overlapping static entry reached from 0xC1C9F6.
    case 0xC1C9F8: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/battle_psi_menu.asm:70 LOADPTR UNKNOWN_C1CAF5, @LOCAL00
    case 0xC1C9F9: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:71 JSR UNKNOWN_C11F5A
    case 0xC1C9FB: {
        Instruction step(cpu, 0x20, 0x00267Bu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:72 LDA #$0001
    case 0xC1C9FE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:72 LDA #$0001
    // Overlapping static entry reached from 0xC1C9FE.
    case 0xC1CA00: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:73 JSR SELECTION_MENU
    case 0xC1CA01: {
        Instruction step(cpu, 0x20, 0x002109u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:74 STA @VIRTUAL02
    case 0xC1CA04: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:75 JSR UNKNOWN_C11F8A
    case 0xC1CA06: {
        Instruction step(cpu, 0x20, 0x0026ABu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:76 LDA @VIRTUAL02
    case 0xC1CA09: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/battle_psi_menu.asm:77 BEQL @UNKNOWN18
    case 0xC1CA0B: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/battle_psi_menu.asm:77 BEQL @UNKNOWN18
    case 0xC1CA0D: {
        Instruction step(cpu, 0x4C, 0x00CC2Bu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:78 LDA @LOCAL06
    case 0xC1CA10: {
        Instruction step(cpu, 0xA5, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:79 STA @VIRTUAL04
    case 0xC1CA12: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:80 LDX @VIRTUAL04
    case 0xC1CA14: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:81 LDA a:battle_menu_selection::user,X
    case 0xC1CA16: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:82 AND #$00FF
    case 0xC1CA19: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:82 AND #$00FF
    // Overlapping static entry reached from 0xC1CA19.
    case 0xC1CA1B: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:83 TAX
    case 0xC1CA1C: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:84 LDA @VIRTUAL02
    case 0xC1CA1D: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:85 JSR UNKNOWN_C1CB7F
    case 0xC1CA1F: {
        Instruction step(cpu, 0x20, 0x00C93Cu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:86 CMP #$0000
    case 0xC1CA22: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:86 CMP #$0000
    // Overlapping static entry reached from 0xC1CA22.
    case 0xC1CA24: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:87 BEQ @UNKNOWN3
    case 0xC1CA25: {
        Instruction step(cpu, 0xF0, 0x0000C1u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:735 LDA arg
    // Macro caller: src/battle/battle_psi_menu.asm:89 CREATE_WINDOW_NEAR #WINDOW::TEXT_STANDARD
    case 0xC1CA27: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:735 LDA arg
    // Macro caller: src/battle/battle_psi_menu.asm:89 CREATE_WINDOW_NEAR #WINDOW::TEXT_STANDARD
    // Overlapping static entry reached from 0xC1CA27.
    case 0xC1CA29: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/battle/battle_psi_menu.asm:89 CREATE_WINDOW_NEAR #WINDOW::TEXT_STANDARD
    case 0xC1CA2A: {
        Instruction step(cpu, 0x20, 0x0006E4u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:90 LDA @VIRTUAL02
    case 0xC1CA2D: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:91 JSL UNKNOWN_C1CAF5
    case 0xC1CA2F: {
        Instruction step(cpu, 0x22, 0xC1C8AEu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/battle_psi_menu.asm:92 LOADPTR UNKNOWN_C1C8BC, @LOCAL00
    case 0xC1CA33: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E3u : 0x00C6E3u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/battle_psi_menu.asm:92 LOADPTR UNKNOWN_C1C8BC, @LOCAL00
    // Overlapping static entry reached from 0xC1CA33.
    case 0xC1CA35: {
        Instruction step(cpu, 0xC6, 0x000085u, 2u, AddressMode::DirectPage);
        step.decrement();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/battle_psi_menu.asm:92 LOADPTR UNKNOWN_C1C8BC, @LOCAL00
    case 0xC1CA36: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/battle_psi_menu.asm:92 LOADPTR UNKNOWN_C1C8BC, @LOCAL00
    // Overlapping static entry reached from 0xC1CA35.
    case 0xC1CA37: {
        Instruction step(cpu, 0x0E, 0x00C1A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/battle_psi_menu.asm:92 LOADPTR UNKNOWN_C1C8BC, @LOCAL00
    case 0xC1CA38: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C1u : 0x0000C1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/battle_psi_menu.asm:92 LOADPTR UNKNOWN_C1C8BC, @LOCAL00
    // Overlapping static entry reached from 0xC1CA38.
    case 0xC1CA3A: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/battle_psi_menu.asm:92 LOADPTR UNKNOWN_C1C8BC, @LOCAL00
    case 0xC1CA3B: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:93 JSR UNKNOWN_C11F5A
    case 0xC1CA3D: {
        Instruction step(cpu, 0x20, 0x00267Bu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:94 LDA #$0001
    case 0xC1CA40: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:94 LDA #$0001
    // Overlapping static entry reached from 0xC1CA40.
    case 0xC1CA42: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:95 JSR SELECTION_MENU
    case 0xC1CA43: {
        Instruction step(cpu, 0x20, 0x002109u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:96 TAY
    case 0xC1CA46: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:97 STY @LOCAL04_2
    case 0xC1CA47: {
        Instruction step(cpu, 0x84, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:98 JSR UNKNOWN_C11F8A
    case 0xC1CA49: {
        Instruction step(cpu, 0x20, 0x0026ABu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:99 LDY @LOCAL04_2
    case 0xC1CA4C: {
        Instruction step(cpu, 0xA4, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/battle_psi_menu.asm:100 BEQL @UNKNOWN14
    case 0xC1CA4E: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/battle_psi_menu.asm:100 BEQL @UNKNOWN14
    case 0xC1CA50: {
        Instruction step(cpu, 0x4C, 0x00CBBCu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:102 LDX #$0006
    case 0xC1CA53: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:102 LDX #$0006
    // Overlapping static entry reached from 0xC1CA53.
    case 0xC1CA55: {
        Instruction step(cpu, 0x00, 0x000098u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:103 TYA
    case 0xC1CA56: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:104 JSR UNKNOWN_C1CA72
    case 0xC1CA57: {
        Instruction step(cpu, 0x20, 0x00C869u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/battle_psi_menu.asm:106 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL06
    case 0xC1CA5A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00001Eu : 0x008B1Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/battle_psi_menu.asm:106 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1CA5A.
    case 0xC1CA5C: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/battle_psi_menu.asm:106 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL06
    case 0xC1CA5D: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/battle_psi_menu.asm:106 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL06
    case 0xC1CA5F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D5u : 0x0000D5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/battle_psi_menu.asm:106 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1CA5F.
    case 0xC1CA61: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/battle_psi_menu.asm:106 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL06
    case 0xC1CA62: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:108 LDY @LOCAL04_2
    case 0xC1CA64: {
        Instruction step(cpu, 0xA4, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:110 TYA
    case 0xC1CA66: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:581 STA scratch
    // Macro caller: src/battle/battle_psi_menu.asm:111 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1CA67: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:582 ASL
    // Macro caller: src/battle/battle_psi_menu.asm:111 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1CA69: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:583 ADC scratch
    // Macro caller: src/battle/battle_psi_menu.asm:111 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1CA6A: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:584 ASL
    // Macro caller: src/battle/battle_psi_menu.asm:111 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1CA6C: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:585 ADC scratch
    // Macro caller: src/battle/battle_psi_menu.asm:111 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1CA6D: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:586 ASL
    // Macro caller: src/battle/battle_psi_menu.asm:111 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1CA6F: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:587 ADC scratch
    // Macro caller: src/battle/battle_psi_menu.asm:111 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1CA70: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:112 TAX
    case 0xC1CA72: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:113 INX
    case 0xC1CA73: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:114 INX
    case 0xC1CA74: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:115 INX
    case 0xC1CA75: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:116 INX
    case 0xC1CA76: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:117 LDA f:PSI_ABILITY_TABLE,X
    case 0xC1CA77: {
        Instruction step(cpu, 0xBF, 0xD59A06u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:568 STA scratch
    // Macro caller: src/battle/battle_psi_menu.asm:118 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC1CA7B: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:569 ASL
    // Macro caller: src/battle/battle_psi_menu.asm:118 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC1CA7D: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/battle/battle_psi_menu.asm:118 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC1CA7E: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:571 ASL
    // Macro caller: src/battle/battle_psi_menu.asm:118 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC1CA80: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:572 ASL
    // Macro caller: src/battle/battle_psi_menu.asm:118 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC1CA81: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:119 STA @LOCAL03
    case 0xC1CA82: {
        Instruction step(cpu, 0x85, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:120 LDA @LOCAL06
    case 0xC1CA84: {
        Instruction step(cpu, 0xA5, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:121 STA @VIRTUAL04
    case 0xC1CA86: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:122 LDX @VIRTUAL04
    case 0xC1CA88: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:123 LDA a:battle_menu_selection::user,X
    case 0xC1CA8A: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:124 AND #$00FF
    case 0xC1CA8D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:124 AND #$00FF
    // Overlapping static entry reached from 0xC1CA8D.
    case 0xC1CA8F: {
        Instruction step(cpu, 0x00, 0x00003Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:125 DEC
    case 0xC1CA90: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:126 LDY #.SIZEOF(char_struct)
    case 0xC1CA91: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Eu : 0x00005Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:126 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1CA91.
    case 0xC1CA93: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:127 JSL MULT168
    case 0xC1CA94: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:128 TAX
    case 0xC1CA98: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:129 LDA @LOCAL03
    case 0xC1CA99: {
        Instruction step(cpu, 0xA5, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:130 INC
    case 0xC1CA9B: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:131 INC
    case 0xC1CA9C: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:132 INC
    case 0xC1CA9D: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // include/macros.asm:1044 LDY src
    // Macro caller: src/battle/battle_psi_menu.asm:133 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC1CA9E: {
        Instruction step(cpu, 0xA4, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1045 STY dest
    // Macro caller: src/battle/battle_psi_menu.asm:133 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC1CAA0: {
        Instruction step(cpu, 0x84, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:1046 LDY src+2
    // Macro caller: src/battle/battle_psi_menu.asm:133 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC1CAA2: {
        Instruction step(cpu, 0xA4, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1047 STY dest+2
    // Macro caller: src/battle/battle_psi_menu.asm:133 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC1CAA4: {
        Instruction step(cpu, 0x84, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:134 CLC
    case 0xC1CAA6: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:135 ADC @VIRTUAL0A
    case 0xC1CAA7: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:136 STA @VIRTUAL0A
    case 0xC1CAA9: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:137 LDA [@VIRTUAL0A]
    case 0xC1CAAB: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:138 AND #$00FF
    case 0xC1CAAD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:138 AND #$00FF
    // Overlapping static entry reached from 0xC1CAAD.
    case 0xC1CAAF: {
        Instruction step(cpu, 0x00, 0x0000DDu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:139 CMP PARTY_CHARACTERS+char_struct::current_pp_target,X
    case 0xC1CAB0: {
        Instruction step(cpu, 0xDD, 0x009CCBu, 3u, AddressMode::AbsoluteIndexedX);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:761 BCC dest
    // Macro caller: src/battle/battle_psi_menu.asm:140 BLTEQ @UNKNOWN8
    case 0xC1CAB3: {
        Instruction step(cpu, 0x90, 0x00002Au, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/battle/battle_psi_menu.asm:140 BLTEQ @UNKNOWN8
    case 0xC1CAB5: {
        Instruction step(cpu, 0xF0, 0x000028u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:735 LDA arg
    // Macro caller: src/battle/battle_psi_menu.asm:141 CREATE_WINDOW_NEAR #WINDOW::TEXT_BATTLE
    case 0xC1CAB7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Eu : 0x00000Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:735 LDA arg
    // Macro caller: src/battle/battle_psi_menu.asm:141 CREATE_WINDOW_NEAR #WINDOW::TEXT_BATTLE
    // Overlapping static entry reached from 0xC1CAB7.
    case 0xC1CAB9: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/battle/battle_psi_menu.asm:141 CREATE_WINDOW_NEAR #WINDOW::TEXT_BATTLE
    case 0xC1CABA: {
        Instruction step(cpu, 0x20, 0x0006E4u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:142 LDA #$0002
    case 0xC1CABD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:142 LDA #$0002
    // Overlapping static entry reached from 0xC1CABD.
    case 0xC1CABF: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:143 JSR ENABLE_BLINKING_TRIANGLE
    case 0xC1CAC0: {
        Instruction step(cpu, 0x20, 0x000032u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/battle_psi_menu.asm:144 DISPLAY_TEXT_PTR MSG_BTL_PSI_CANNOT_MENU
    case 0xC1CAC3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E6u : 0x0038E6u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/battle_psi_menu.asm:144 DISPLAY_TEXT_PTR MSG_BTL_PSI_CANNOT_MENU
    // Overlapping static entry reached from 0xC1CAC3.
    case 0xC1CAC5: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/battle_psi_menu.asm:144 DISPLAY_TEXT_PTR MSG_BTL_PSI_CANNOT_MENU
    case 0xC1CAC6: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/battle_psi_menu.asm:144 DISPLAY_TEXT_PTR MSG_BTL_PSI_CANNOT_MENU
    case 0xC1CAC8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/battle_psi_menu.asm:144 DISPLAY_TEXT_PTR MSG_BTL_PSI_CANNOT_MENU
    // Overlapping static entry reached from 0xC1CAC8.
    case 0xC1CACA: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/battle_psi_menu.asm:144 DISPLAY_TEXT_PTR MSG_BTL_PSI_CANNOT_MENU
    case 0xC1CACB: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:210 JSL DISPLAY_TEXT
    // Macro caller: src/battle/battle_psi_menu.asm:144 DISPLAY_TEXT_PTR MSG_BTL_PSI_CANNOT_MENU
    case 0xC1CACD: {
        Instruction step(cpu, 0x22, 0xC18913u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:145 JSR CLEAR_BLINKING_PROMPT
    case 0xC1CAD1: {
        Instruction step(cpu, 0x20, 0x000038u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:146 JSR CLOSE_FOCUS_WINDOW
    case 0xC1CAD4: {
        Instruction step(cpu, 0x20, 0x0002A6u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:147 LDX #$0000
    case 0xC1CAD7: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:147 LDX #$0000
    // Overlapping static entry reached from 0xC1CAD7.
    case 0xC1CAD9: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:148 STX @LOCAL02
    case 0xC1CADA: {
        Instruction step(cpu, 0x86, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:149 JMP @UNKNOWN15
    case 0xC1CADC: {
        Instruction step(cpu, 0x4C, 0x00CBC1u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:151 LDA @LOCAL03
    case 0xC1CADF: {
        Instruction step(cpu, 0xA5, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:152 INC
    case 0xC1CAE1: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:153 CLC
    case 0xC1CAE2: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:154 ADC @VIRTUAL06
    case 0xC1CAE3: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:155 STA @VIRTUAL06
    case 0xC1CAE5: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:156 LDA [@VIRTUAL06]
    case 0xC1CAE7: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:157 AND #$00FF
    case 0xC1CAE9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:157 AND #$00FF
    // Overlapping static entry reached from 0xC1CAE9.
    case 0xC1CAEB: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:158 TAX
    case 0xC1CAEC: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:159 CPX #$0001
    case 0xC1CAED: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:159 CPX #$0001
    // Overlapping static entry reached from 0xC1CAED.
    case 0xC1CAEF: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:160 BEQ @UNKNOWN9
    case 0xC1CAF0: {
        Instruction step(cpu, 0xF0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:161 CPX #$0003
    case 0xC1CAF2: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:161 CPX #$0003
    // Overlapping static entry reached from 0xC1CAF2.
    case 0xC1CAF4: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:162 BNE @UNKNOWN10
    case 0xC1CAF5: {
        Instruction step(cpu, 0xD0, 0x000055u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:164 LDY @LOCAL04_2
    case 0xC1CAF7: {
        Instruction step(cpu, 0xA4, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:165 TYA
    case 0xC1CAF9: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:581 STA scratch
    // Macro caller: src/battle/battle_psi_menu.asm:166 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1CAFA: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:582 ASL
    // Macro caller: src/battle/battle_psi_menu.asm:166 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1CAFC: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:583 ADC scratch
    // Macro caller: src/battle/battle_psi_menu.asm:166 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1CAFD: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:584 ASL
    // Macro caller: src/battle/battle_psi_menu.asm:166 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1CAFF: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:585 ADC scratch
    // Macro caller: src/battle/battle_psi_menu.asm:166 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1CB00: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:586 ASL
    // Macro caller: src/battle/battle_psi_menu.asm:166 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1CB02: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:587 ADC scratch
    // Macro caller: src/battle/battle_psi_menu.asm:166 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1CB03: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:167 TAX
    case 0xC1CB05: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:168 INX
    case 0xC1CB06: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:169 INX
    case 0xC1CB07: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:170 INX
    case 0xC1CB08: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:171 INX
    case 0xC1CB09: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:172 LDA f:PSI_ABILITY_TABLE,X
    case 0xC1CB0A: {
        Instruction step(cpu, 0xBF, 0xD59A06u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:568 STA scratch
    // Macro caller: src/battle/battle_psi_menu.asm:173 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC1CB0E: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:569 ASL
    // Macro caller: src/battle/battle_psi_menu.asm:173 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC1CB10: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/battle/battle_psi_menu.asm:173 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC1CB11: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:571 ASL
    // Macro caller: src/battle/battle_psi_menu.asm:173 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC1CB13: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:572 ASL
    // Macro caller: src/battle/battle_psi_menu.asm:173 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC1CB14: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:174 TAX
    case 0xC1CB15: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:175 LDA f:BATTLE_ACTION_TABLE,X
    case 0xC1CB16: {
        Instruction step(cpu, 0xBF, 0xD58B1Eu, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:176 AND #$00FF
    case 0xC1CB1A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:176 AND #$00FF
    // Overlapping static entry reached from 0xC1CB1A.
    case 0xC1CB1C: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:177 BNE @UNKNOWN10
    case 0xC1CB1D: {
        Instruction step(cpu, 0xD0, 0x00002Du, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:178 LDA #$0010
    case 0xC1CB1F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:178 LDA #$0010
    // Overlapping static entry reached from 0xC1CB1F.
    case 0xC1CB21: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:179 JSR CLOSE_WINDOW
    case 0xC1CB22: {
        Instruction step(cpu, 0x20, 0x000141u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:180 LDA #$0004
    case 0xC1CB25: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:180 LDA #$0004
    // Overlapping static entry reached from 0xC1CB25.
    case 0xC1CB27: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:181 JSR CLOSE_WINDOW
    case 0xC1CB28: {
        Instruction step(cpu, 0x20, 0x000141u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:182 LDA #$0001
    case 0xC1CB2B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:182 LDA #$0001
    // Overlapping static entry reached from 0xC1CB2B.
    case 0xC1CB2D: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:183 JSR CLOSE_WINDOW
    case 0xC1CB2E: {
        Instruction step(cpu, 0x20, 0x000141u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:735 LDA arg
    // Macro caller: src/battle/battle_psi_menu.asm:184 CREATE_WINDOW_NEAR #WINDOW::UNKNOWN26
    case 0xC1CB31: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000026u : 0x000026u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:735 LDA arg
    // Macro caller: src/battle/battle_psi_menu.asm:184 CREATE_WINDOW_NEAR #WINDOW::UNKNOWN26
    // Overlapping static entry reached from 0xC1CB31.
    case 0xC1CB33: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/battle/battle_psi_menu.asm:184 CREATE_WINDOW_NEAR #WINDOW::UNKNOWN26
    case 0xC1CB34: {
        Instruction step(cpu, 0x20, 0x0006E4u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:185 JSR SET_INSTANT_PRINTING
    case 0xC1CB37: {
        Instruction step(cpu, 0x20, 0x0000F7u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:186 LDA #$0006
    case 0xC1CB3A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:186 LDA #$0006
    // Overlapping static entry reached from 0xC1CB3A.
    case 0xC1CB3C: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:187 JSR UNKNOWN_C10FEA
    case 0xC1CB3D: {
        Instruction step(cpu, 0x20, 0x0015A4u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:188 LDY @LOCAL04_2
    case 0xC1CB40: {
        Instruction step(cpu, 0xA4, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:189 TYA
    case 0xC1CB42: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:190 JSR UNKNOWN_C1CA06
    case 0xC1CB43: {
        Instruction step(cpu, 0x20, 0x00C810u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:191 LDA #$0000
    case 0xC1CB46: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:191 LDA #$0000
    // Overlapping static entry reached from 0xC1CB46.
    case 0xC1CB48: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:192 JSR UNKNOWN_C10FEA
    case 0xC1CB49: {
        Instruction step(cpu, 0x20, 0x0015A4u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/battle_psi_menu.asm:194 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    case 0xC1CB4C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000006u : 0x009A06u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/battle_psi_menu.asm:194 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1CB4C.
    case 0xC1CB4E: {
        Instruction step(cpu, 0x9A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_stack();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/battle_psi_menu.asm:194 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    case 0xC1CB4F: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/battle_psi_menu.asm:194 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    case 0xC1CB51: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D5u : 0x0000D5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/battle_psi_menu.asm:194 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1CB51.
    case 0xC1CB53: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/battle_psi_menu.asm:194 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    case 0xC1CB54: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:195 LDY @LOCAL04_2
    case 0xC1CB56: {
        Instruction step(cpu, 0xA4, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:196 TYA
    case 0xC1CB58: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:581 STA scratch
    // Macro caller: src/battle/battle_psi_menu.asm:197 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1CB59: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:582 ASL
    // Macro caller: src/battle/battle_psi_menu.asm:197 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1CB5B: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:583 ADC scratch
    // Macro caller: src/battle/battle_psi_menu.asm:197 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1CB5C: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:584 ASL
    // Macro caller: src/battle/battle_psi_menu.asm:197 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1CB5E: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:585 ADC scratch
    // Macro caller: src/battle/battle_psi_menu.asm:197 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1CB5F: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:586 ASL
    // Macro caller: src/battle/battle_psi_menu.asm:197 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1CB61: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:587 ADC scratch
    // Macro caller: src/battle/battle_psi_menu.asm:197 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1CB62: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:198 INC
    case 0xC1CB64: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:199 INC
    case 0xC1CB65: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:200 INC
    case 0xC1CB66: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:201 INC
    case 0xC1CB67: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:202 CLC
    case 0xC1CB68: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:203 ADC @VIRTUAL06
    case 0xC1CB69: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:204 STA @VIRTUAL06
    case 0xC1CB6B: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:205 LDA @LOCAL06
    case 0xC1CB6D: {
        Instruction step(cpu, 0xA5, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:206 STA @VIRTUAL04
    case 0xC1CB6F: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:207 LDX @VIRTUAL04
    case 0xC1CB71: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:208 LDA a:battle_menu_selection::user,X
    case 0xC1CB73: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:209 AND #$00FF
    case 0xC1CB76: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:209 AND #$00FF
    // Overlapping static entry reached from 0xC1CB76.
    case 0xC1CB78: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:210 TAX
    case 0xC1CB79: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:211 LDA [@VIRTUAL06]
    case 0xC1CB7A: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:212 JSR DETERMINE_TARGETTING
    case 0xC1CB7C: {
        Instruction step(cpu, 0x20, 0x00AC70u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:213 TAX
    case 0xC1CB7F: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:214 STX @LOCAL02
    case 0xC1CB80: {
        Instruction step(cpu, 0x86, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:215 LDA [@VIRTUAL06]
    case 0xC1CB82: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:568 STA scratch
    // Macro caller: src/battle/battle_psi_menu.asm:216 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC1CB84: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:569 ASL
    // Macro caller: src/battle/battle_psi_menu.asm:216 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC1CB86: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/battle/battle_psi_menu.asm:216 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC1CB87: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:571 ASL
    // Macro caller: src/battle/battle_psi_menu.asm:216 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC1CB89: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:572 ASL
    // Macro caller: src/battle/battle_psi_menu.asm:216 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC1CB8A: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:217 TAX
    case 0xC1CB8B: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:218 LDA f:BATTLE_ACTION_TABLE,X
    case 0xC1CB8C: {
        Instruction step(cpu, 0xBF, 0xD58B1Eu, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:219 AND #$00FF
    case 0xC1CB90: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:219 AND #$00FF
    // Overlapping static entry reached from 0xC1CB90.
    case 0xC1CB92: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:220 BNE @UNKNOWN11
    case 0xC1CB93: {
        Instruction step(cpu, 0xD0, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:221 LDA #$0026
    case 0xC1CB95: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000026u : 0x000026u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:221 LDA #$0026
    // Overlapping static entry reached from 0xC1CB95.
    case 0xC1CB97: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:222 JSR CLOSE_WINDOW
    case 0xC1CB98: {
        Instruction step(cpu, 0x20, 0x000141u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:223 BRA @UNKNOWN12
    case 0xC1CB9B: {
        Instruction step(cpu, 0x80, 0x000012u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:225 LDA #$0010
    case 0xC1CB9D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:225 LDA #$0010
    // Overlapping static entry reached from 0xC1CB9D.
    case 0xC1CB9F: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:226 JSR CLOSE_WINDOW
    case 0xC1CBA0: {
        Instruction step(cpu, 0x20, 0x000141u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:227 LDA #$0004
    case 0xC1CBA3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:227 LDA #$0004
    // Overlapping static entry reached from 0xC1CBA3.
    case 0xC1CBA5: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:228 JSR CLOSE_WINDOW
    case 0xC1CBA6: {
        Instruction step(cpu, 0x20, 0x000141u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:229 LDA #$0001
    case 0xC1CBA9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:229 LDA #$0001
    // Overlapping static entry reached from 0xC1CBA9.
    case 0xC1CBAB: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:230 JSR CLOSE_WINDOW
    case 0xC1CBAC: {
        Instruction step(cpu, 0x20, 0x000141u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:232 LDX @LOCAL02
    case 0xC1CBAF: {
        Instruction step(cpu, 0xA6, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:233 TXA
    case 0xC1CBB1: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:234 AND #$00FF
    case 0xC1CBB2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:234 AND #$00FF
    // Overlapping static entry reached from 0xC1CBB2.
    case 0xC1CBB4: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/battle_psi_menu.asm:235 BEQL @UNKNOWN0
    case 0xC1CBB5: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/battle_psi_menu.asm:235 BEQL @UNKNOWN0
    case 0xC1CBB7: {
        Instruction step(cpu, 0x4C, 0x00C998u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:236 BRA @UNKNOWN15
    case 0xC1CBBA: {
        Instruction step(cpu, 0x80, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:238 LDX #$0001
    case 0xC1CBBC: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:238 LDX #$0001
    // Overlapping static entry reached from 0xC1CBBC.
    case 0xC1CBBE: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:239 STX @LOCAL02
    case 0xC1CBBF: {
        Instruction step(cpu, 0x86, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:241 CPX #$0000
    case 0xC1CBC1: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:241 CPX #$0000
    // Overlapping static entry reached from 0xC1CBC1.
    case 0xC1CBC3: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/battle_psi_menu.asm:242 BEQL @UNKNOWN6
    case 0xC1CBC4: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/battle_psi_menu.asm:242 BEQL @UNKNOWN6
    case 0xC1CBC6: {
        Instruction step(cpu, 0x4C, 0x00CA27u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:243 LDA #$0004
    case 0xC1CBC9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:243 LDA #$0004
    // Overlapping static entry reached from 0xC1CBC9.
    case 0xC1CBCB: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:244 JSR CLOSE_WINDOW
    case 0xC1CBCC: {
        Instruction step(cpu, 0x20, 0x000141u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:245 LDY @LOCAL04_2
    case 0xC1CBCF: {
        Instruction step(cpu, 0xA4, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/battle_psi_menu.asm:246 BEQL @UNKNOWN3
    case 0xC1CBD1: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/battle_psi_menu.asm:246 BEQL @UNKNOWN3
    case 0xC1CBD3: {
        Instruction step(cpu, 0x4C, 0x00C9E8u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:247 TYA
    case 0xC1CBD6: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:248 SEP #PROC_FLAGS::ACCUM8
    case 0xC1CBD7: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:249 LDX @LOCAL06
    case 0xC1CBD9: {
        Instruction step(cpu, 0xA6, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:250 STX @VIRTUAL04
    case 0xC1CBDB: {
        Instruction step(cpu, 0x86, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:251 STA a:battle_menu_selection::param1,X
    case 0xC1CBDD: {
        Instruction step(cpu, 0x9D, 0x000001u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:252 REP #PROC_FLAGS::ACCUM8
    case 0xC1CBE0: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:253 TYA
    case 0xC1CBE2: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:581 STA scratch
    // Macro caller: src/battle/battle_psi_menu.asm:254 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1CBE3: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:582 ASL
    // Macro caller: src/battle/battle_psi_menu.asm:254 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1CBE5: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:583 ADC scratch
    // Macro caller: src/battle/battle_psi_menu.asm:254 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1CBE6: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:584 ASL
    // Macro caller: src/battle/battle_psi_menu.asm:254 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1CBE8: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:585 ADC scratch
    // Macro caller: src/battle/battle_psi_menu.asm:254 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1CBE9: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:586 ASL
    // Macro caller: src/battle/battle_psi_menu.asm:254 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1CBEB: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:587 ADC scratch
    // Macro caller: src/battle/battle_psi_menu.asm:254 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1CBEC: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:255 TAX
    case 0xC1CBEE: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:256 INX
    case 0xC1CBEF: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:257 INX
    case 0xC1CBF0: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:258 INX
    case 0xC1CBF1: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:259 INX
    case 0xC1CBF2: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:260 LDA f:PSI_ABILITY_TABLE,X
    case 0xC1CBF3: {
        Instruction step(cpu, 0xBF, 0xD59A06u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:261 LDX @LOCAL06
    case 0xC1CBF7: {
        Instruction step(cpu, 0xA6, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:262 STX @VIRTUAL04
    case 0xC1CBF9: {
        Instruction step(cpu, 0x86, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:263 STA a:battle_menu_selection::selected_action,X
    case 0xC1CBFB: {
        Instruction step(cpu, 0x9D, 0x000002u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:264 SEP #PROC_FLAGS::ACCUM8
    case 0xC1CBFE: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:265 LDA #$08
    case 0xC1CC00: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000008u : 0x004808u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:266 PHA
    case 0xC1CC02: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:267 LDX @LOCAL02
    case 0xC1CC03: {
        Instruction step(cpu, 0xA6, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:268 REP #PROC_FLAGS::ACCUM8
    case 0xC1CC05: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:269 TXA
    case 0xC1CC07: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:270 SEP #PROC_FLAGS::INDEX8
    case 0xC1CC08: {
        Instruction step(cpu, 0xE2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:271 PLY
    case 0xC1CC0A: {
        Instruction step(cpu, 0x7A, 0x000000u, 1u, AddressMode::Implied);
        step.pull_y();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:272 JSL ASR8_UNKNOWN1
    case 0xC1CC0B: {
        Instruction step(cpu, 0x22, 0xC09233u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:273 SEP #PROC_FLAGS::ACCUM8
    case 0xC1CC0F: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:274 REP #PROC_FLAGS::INDEX8
    case 0xC1CC11: {
        Instruction step(cpu, 0xC2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:275 LDX @VIRTUAL04
    case 0xC1CC13: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:276 STA a:battle_menu_selection::targetting,X
    case 0xC1CC15: {
        Instruction step(cpu, 0x9D, 0x000004u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:277 LDX @LOCAL02
    case 0xC1CC18: {
        Instruction step(cpu, 0xA6, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:278 REP #PROC_FLAGS::ACCUM8
    case 0xC1CC1A: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:279 TXA
    case 0xC1CC1C: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:280 SEP #PROC_FLAGS::ACCUM8
    case 0xC1CC1D: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:281 LDX @VIRTUAL04
    case 0xC1CC1F: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:282 STA a:battle_menu_selection::selected_target,X
    case 0xC1CC21: {
        Instruction step(cpu, 0x9D, 0x000005u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:283 REP #PROC_FLAGS::ACCUM8
    case 0xC1CC24: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:284 LDA #$0001
    case 0xC1CC26: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:284 LDA #$0001
    // Overlapping static entry reached from 0xC1CC26.
    case 0xC1CC28: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:285 STA @VIRTUAL02
    case 0xC1CC29: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:287 LDA #$0001
    case 0xC1CC2B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:287 LDA #$0001
    // Overlapping static entry reached from 0xC1CC2B.
    case 0xC1CC2D: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:288 JSR CLOSE_WINDOW
    case 0xC1CC2E: {
        Instruction step(cpu, 0x20, 0x000141u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:289 LDA #$0010
    case 0xC1CC31: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:289 LDA #$0010
    // Overlapping static entry reached from 0xC1CC31.
    case 0xC1CC33: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:290 JSR CLOSE_WINDOW
    case 0xC1CC34: {
        Instruction step(cpu, 0x20, 0x000141u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:291 LDA @VIRTUAL02
    case 0xC1CC37: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/battle_psi_menu.asm:292 END_C_FUNCTION
    case 0xC1CC39: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/battle_psi_menu.asm:292 END_C_FUNCTION
    case 0xC1CC3A: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
