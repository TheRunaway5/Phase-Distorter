// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/battle/battle_psi_menu.asm
bool resume_battle_battle_psi_menu(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/battle_psi_menu.asm:4 BEGIN_C_FUNCTION
    case 0xC1CBCD: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/battle_psi_menu.asm:21 END_STACK_VARS
    case 0xC1CBCF: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/battle_psi_menu.asm:21 END_STACK_VARS
    case 0xC1CBD0: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/battle_psi_menu.asm:21 END_STACK_VARS
    case 0xC1CBD1: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/battle_psi_menu.asm:21 END_STACK_VARS
    case 0xC1CBD2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000DEu : 0x00FFDEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/battle_psi_menu.asm:21 END_STACK_VARS
    // Overlapping static entry reached from 0xC1CBD2.
    case 0xC1CBD4: {
        Instruction step(cpu, 0xFF, 0x85685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/battle_psi_menu.asm:21 END_STACK_VARS
    case 0xC1CBD5: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/battle_psi_menu.asm:21 END_STACK_VARS
    case 0xC1CBD6: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:22 STA @VIRTUAL04
    case 0xC1CBD7: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:22 STA @VIRTUAL04
    // Overlapping static entry reached from 0xC1CBD4.
    case 0xC1CBD8: {
        Instruction step(cpu, 0x04, 0x000085u, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:23 STA @LOCAL06
    case 0xC1CBD9: {
        Instruction step(cpu, 0x85, 0x000020u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:23 STA @LOCAL06
    // Overlapping static entry reached from 0xC1CBD8.
    case 0xC1CBDA: {
        Instruction step(cpu, 0x20, 0x001E64u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:25 STZ @LOCALEB
    case 0xC1CBDB: {
        Instruction step(cpu, 0x64, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:735 LDA arg
    // Macro caller: src/battle/battle_psi_menu.asm:28 CREATE_WINDOW_NEAR #WINDOW::UNKNOWN10
    case 0xC1CBDD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:735 LDA arg
    // Macro caller: src/battle/battle_psi_menu.asm:28 CREATE_WINDOW_NEAR #WINDOW::UNKNOWN10
    // Overlapping static entry reached from 0xC1CBDD.
    case 0xC1CBDF: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/battle/battle_psi_menu.asm:28 CREATE_WINDOW_NEAR #WINDOW::UNKNOWN10
    case 0xC1CBE0: {
        Instruction step(cpu, 0x20, 0x0004EEu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:29 LDA #$0000
    case 0xC1CBE3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:29 LDA #$0000
    // Overlapping static entry reached from 0xC1CBE3.
    case 0xC1CBE5: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:30 STA @LOCAL05
    case 0xC1CBE6: {
        Instruction step(cpu, 0x85, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:31 BRA @UNKNOWN2
    case 0xC1CBE8: {
        Instruction step(cpu, 0x80, 0x000031u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:33 TAX
    case 0xC1CBEA: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:34 INX
    case 0xC1CBEB: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:35 STX @LOCAL04
    case 0xC1CBEC: {
        Instruction step(cpu, 0x86, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/battle_psi_menu.asm:36 LOADPTR PSI_CATEGORIES, @VIRTUAL06
    case 0xC1CBEE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000090u : 0x00F090u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/battle_psi_menu.asm:36 LOADPTR PSI_CATEGORIES, @VIRTUAL06
    // Overlapping static entry reached from 0xC1CBEE.
    case 0xC1CBF0: {
        Instruction step(cpu, 0xF0, 0x000085u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/battle_psi_menu.asm:36 LOADPTR PSI_CATEGORIES, @VIRTUAL06
    case 0xC1CBF1: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/battle_psi_menu.asm:36 LOADPTR PSI_CATEGORIES, @VIRTUAL06
    // Overlapping static entry reached from 0xC1CBF0.
    case 0xC1CBF2: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/battle_psi_menu.asm:36 LOADPTR PSI_CATEGORIES, @VIRTUAL06
    case 0xC1CBF3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C3u : 0x0000C3u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/battle_psi_menu.asm:36 LOADPTR PSI_CATEGORIES, @VIRTUAL06
    // Overlapping static entry reached from 0xC1CBF2.
    case 0xC1CBF4: {
        Instruction step(cpu, 0xC3, 0x000000u, 2u, AddressMode::StackRelative);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/battle_psi_menu.asm:36 LOADPTR PSI_CATEGORIES, @VIRTUAL06
    // Overlapping static entry reached from 0xC1CBF3.
    case 0xC1CBF5: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/battle_psi_menu.asm:36 LOADPTR PSI_CATEGORIES, @VIRTUAL06
    case 0xC1CBF6: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:37 LDA @LOCAL05
    case 0xC1CBF8: {
        Instruction step(cpu, 0xA5, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:545 ASL
    // Macro caller: src/battle/battle_psi_menu.asm:38 OPTIMIZED_MULT @VIRTUAL04, PSI_CATEGORY_NAME_SIZE
    case 0xC1CBFA: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:546 ASL
    // Macro caller: src/battle/battle_psi_menu.asm:38 OPTIMIZED_MULT @VIRTUAL04, PSI_CATEGORY_NAME_SIZE
    case 0xC1CBFB: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:547 ASL
    // Macro caller: src/battle/battle_psi_menu.asm:38 OPTIMIZED_MULT @VIRTUAL04, PSI_CATEGORY_NAME_SIZE
    case 0xC1CBFC: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:39 CLC
    case 0xC1CBFD: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:40 ADC @VIRTUAL06
    case 0xC1CBFE: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:41 STA @VIRTUAL06
    case 0xC1CC00: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:42 STA @LOCAL00
    case 0xC1CC02: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:43 LDA @VIRTUAL06+2
    case 0xC1CC04: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:44 STA @LOCAL00+2
    case 0xC1CC06: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/battle_psi_menu.asm:45 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1CC08: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/battle_psi_menu.asm:45 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC1CC08.
    case 0xC1CC0A: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/battle/battle_psi_menu.asm:45 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1CC0B: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/battle_psi_menu.asm:45 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1CC0D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/battle_psi_menu.asm:45 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC1CC0D.
    case 0xC1CC0F: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/battle/battle_psi_menu.asm:45 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1CC10: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:46 TXA
    case 0xC1CC12: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:47 JSR UNKNOWN_C115F4
    case 0xC1CC13: {
        Instruction step(cpu, 0x20, 0x0015F4u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:48 LDX @LOCAL04
    case 0xC1CC16: {
        Instruction step(cpu, 0xA6, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:49 TXA
    case 0xC1CC18: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:50 STA @LOCAL05
    case 0xC1CC19: {
        Instruction step(cpu, 0x85, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:52 CMP #$0003
    case 0xC1CC1B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:52 CMP #$0003
    // Overlapping static entry reached from 0xC1CC1B.
    case 0xC1CC1D: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:53 BCC @UNKNOWN1
    case 0xC1CC1E: {
        Instruction step(cpu, 0x90, 0x0000CAu, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:54 LDY #$0000
    case 0xC1CC20: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:54 LDY #$0000
    // Overlapping static entry reached from 0xC1CC20.
    case 0xC1CC22: {
        Instruction step(cpu, 0x00, 0x0000BBu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:55 TYX
    case 0xC1CC23: {
        Instruction step(cpu, 0xBB, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_x();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:56 LDA #$0001
    case 0xC1CC24: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:56 LDA #$0001
    // Overlapping static entry reached from 0xC1CC24.
    case 0xC1CC26: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:57 JSR UNKNOWN_C1180D
    case 0xC1CC27: {
        Instruction step(cpu, 0x20, 0x00180Du, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:59 LDA #$0010
    case 0xC1CC2A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:59 LDA #$0010
    // Overlapping static entry reached from 0xC1CC2A.
    case 0xC1CC2C: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:60 JSR SET_WINDOW_FOCUS
    case 0xC1CC2D: {
        Instruction step(cpu, 0x20, 0x00007Eu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:62 LDA @LOCALEB
    case 0xC1CC30: {
        Instruction step(cpu, 0xA5, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:63 BNE @UNKNOWN4
    case 0xC1CC32: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:65 JSR PRINT_MENU_ITEMS
    case 0xC1CC34: {
        Instruction step(cpu, 0x20, 0x00163Cu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:68 INC @LOCALEB
    case 0xC1CC37: {
        Instruction step(cpu, 0xE6, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/battle_psi_menu.asm:70 LOADPTR UNKNOWN_C1CAF5, @LOCAL00
    case 0xC1CC39: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000F5u : 0x00CAF5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/battle_psi_menu.asm:70 LOADPTR UNKNOWN_C1CAF5, @LOCAL00
    // Overlapping static entry reached from 0xC1CC39.
    case 0xC1CC3B: {
        Instruction step(cpu, 0xCA, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_x();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/battle_psi_menu.asm:70 LOADPTR UNKNOWN_C1CAF5, @LOCAL00
    case 0xC1CC3C: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/battle_psi_menu.asm:70 LOADPTR UNKNOWN_C1CAF5, @LOCAL00
    case 0xC1CC3E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C1u : 0x0000C1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/battle_psi_menu.asm:70 LOADPTR UNKNOWN_C1CAF5, @LOCAL00
    // Overlapping static entry reached from 0xC1CC3E.
    case 0xC1CC40: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/battle_psi_menu.asm:70 LOADPTR UNKNOWN_C1CAF5, @LOCAL00
    case 0xC1CC41: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:71 JSR UNKNOWN_C11F5A
    case 0xC1CC43: {
        Instruction step(cpu, 0x20, 0x001F5Au, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:72 LDA #$0001
    case 0xC1CC46: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:72 LDA #$0001
    // Overlapping static entry reached from 0xC1CC46.
    case 0xC1CC48: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:73 JSR SELECTION_MENU
    case 0xC1CC49: {
        Instruction step(cpu, 0x20, 0x00196Au, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:74 STA @VIRTUAL02
    case 0xC1CC4C: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:75 JSR UNKNOWN_C11F8A
    case 0xC1CC4E: {
        Instruction step(cpu, 0x20, 0x001F8Au, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:76 LDA @VIRTUAL02
    case 0xC1CC51: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/battle_psi_menu.asm:77 BEQL @UNKNOWN18
    case 0xC1CC53: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/battle_psi_menu.asm:77 BEQL @UNKNOWN18
    case 0xC1CC55: {
        Instruction step(cpu, 0x4C, 0x00CE73u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:78 LDA @LOCAL06
    case 0xC1CC58: {
        Instruction step(cpu, 0xA5, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:79 STA @VIRTUAL04
    case 0xC1CC5A: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:80 LDX @VIRTUAL04
    case 0xC1CC5C: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:81 LDA a:battle_menu_selection::user,X
    case 0xC1CC5E: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:82 AND #$00FF
    case 0xC1CC61: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:82 AND #$00FF
    // Overlapping static entry reached from 0xC1CC61.
    case 0xC1CC63: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:83 TAX
    case 0xC1CC64: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:84 LDA @VIRTUAL02
    case 0xC1CC65: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:85 JSR UNKNOWN_C1CB7F
    case 0xC1CC67: {
        Instruction step(cpu, 0x20, 0x00CB7Fu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:86 CMP #$0000
    case 0xC1CC6A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:86 CMP #$0000
    // Overlapping static entry reached from 0xC1CC6A.
    case 0xC1CC6C: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:87 BEQ @UNKNOWN3
    case 0xC1CC6D: {
        Instruction step(cpu, 0xF0, 0x0000BBu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:735 LDA arg
    // Macro caller: src/battle/battle_psi_menu.asm:89 CREATE_WINDOW_NEAR #WINDOW::TEXT_STANDARD
    case 0xC1CC6F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:735 LDA arg
    // Macro caller: src/battle/battle_psi_menu.asm:89 CREATE_WINDOW_NEAR #WINDOW::TEXT_STANDARD
    // Overlapping static entry reached from 0xC1CC6F.
    case 0xC1CC71: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/battle/battle_psi_menu.asm:89 CREATE_WINDOW_NEAR #WINDOW::TEXT_STANDARD
    case 0xC1CC72: {
        Instruction step(cpu, 0x20, 0x0004EEu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:90 LDA @VIRTUAL02
    case 0xC1CC75: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:91 JSL UNKNOWN_C1CAF5
    case 0xC1CC77: {
        Instruction step(cpu, 0x22, 0xC1CAF5u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/battle_psi_menu.asm:92 LOADPTR UNKNOWN_C1C8BC, @LOCAL00
    case 0xC1CC7B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000BCu : 0x00C8BCu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/battle_psi_menu.asm:92 LOADPTR UNKNOWN_C1C8BC, @LOCAL00
    // Overlapping static entry reached from 0xC1CC7B.
    case 0xC1CC7D: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/battle_psi_menu.asm:92 LOADPTR UNKNOWN_C1C8BC, @LOCAL00
    case 0xC1CC7E: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/battle_psi_menu.asm:92 LOADPTR UNKNOWN_C1C8BC, @LOCAL00
    case 0xC1CC80: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C1u : 0x0000C1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/battle_psi_menu.asm:92 LOADPTR UNKNOWN_C1C8BC, @LOCAL00
    // Overlapping static entry reached from 0xC1CC80.
    case 0xC1CC82: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/battle_psi_menu.asm:92 LOADPTR UNKNOWN_C1C8BC, @LOCAL00
    case 0xC1CC83: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:93 JSR UNKNOWN_C11F5A
    case 0xC1CC85: {
        Instruction step(cpu, 0x20, 0x001F5Au, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:94 LDA #$0001
    case 0xC1CC88: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:94 LDA #$0001
    // Overlapping static entry reached from 0xC1CC88.
    case 0xC1CC8A: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:95 JSR SELECTION_MENU
    case 0xC1CC8B: {
        Instruction step(cpu, 0x20, 0x00196Au, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:96 TAY
    case 0xC1CC8E: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:97 STY @LOCAL04_2
    case 0xC1CC8F: {
        Instruction step(cpu, 0x84, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:98 JSR UNKNOWN_C11F8A
    case 0xC1CC91: {
        Instruction step(cpu, 0x20, 0x001F8Au, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:99 LDY @LOCAL04_2
    case 0xC1CC94: {
        Instruction step(cpu, 0xA4, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/battle_psi_menu.asm:100 BEQL @UNKNOWN14
    case 0xC1CC96: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/battle_psi_menu.asm:100 BEQL @UNKNOWN14
    case 0xC1CC98: {
        Instruction step(cpu, 0x4C, 0x00CE03u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/battle_psi_menu.asm:106 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL06
    case 0xC1CC9B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000068u : 0x007B68u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/battle_psi_menu.asm:106 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1CC9B.
    case 0xC1CC9D: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/battle_psi_menu.asm:106 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL06
    case 0xC1CC9E: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/battle_psi_menu.asm:106 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL06
    case 0xC1CCA0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D5u : 0x0000D5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/battle_psi_menu.asm:106 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1CCA0.
    case 0xC1CCA2: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/battle_psi_menu.asm:106 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL06
    case 0xC1CCA3: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:110 TYA
    case 0xC1CCA5: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:581 STA scratch
    // Macro caller: src/battle/battle_psi_menu.asm:111 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1CCA6: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:582 ASL
    // Macro caller: src/battle/battle_psi_menu.asm:111 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1CCA8: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:583 ADC scratch
    // Macro caller: src/battle/battle_psi_menu.asm:111 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1CCA9: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:584 ASL
    // Macro caller: src/battle/battle_psi_menu.asm:111 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1CCAB: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:585 ADC scratch
    // Macro caller: src/battle/battle_psi_menu.asm:111 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1CCAC: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:586 ASL
    // Macro caller: src/battle/battle_psi_menu.asm:111 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1CCAE: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:587 ADC scratch
    // Macro caller: src/battle/battle_psi_menu.asm:111 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1CCAF: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:112 TAX
    case 0xC1CCB1: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:113 INX
    case 0xC1CCB2: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:114 INX
    case 0xC1CCB3: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:115 INX
    case 0xC1CCB4: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:116 INX
    case 0xC1CCB5: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:117 LDA f:PSI_ABILITY_TABLE,X
    case 0xC1CCB6: {
        Instruction step(cpu, 0xBF, 0xD58A50u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:568 STA scratch
    // Macro caller: src/battle/battle_psi_menu.asm:118 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC1CCBA: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:569 ASL
    // Macro caller: src/battle/battle_psi_menu.asm:118 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC1CCBC: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/battle/battle_psi_menu.asm:118 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC1CCBD: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:571 ASL
    // Macro caller: src/battle/battle_psi_menu.asm:118 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC1CCBF: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:572 ASL
    // Macro caller: src/battle/battle_psi_menu.asm:118 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC1CCC0: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:119 STA @LOCAL03
    case 0xC1CCC1: {
        Instruction step(cpu, 0x85, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:120 LDA @LOCAL06
    case 0xC1CCC3: {
        Instruction step(cpu, 0xA5, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:121 STA @VIRTUAL04
    case 0xC1CCC5: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:122 LDX @VIRTUAL04
    case 0xC1CCC7: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:123 LDA a:battle_menu_selection::user,X
    case 0xC1CCC9: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:124 AND #$00FF
    case 0xC1CCCC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:124 AND #$00FF
    // Overlapping static entry reached from 0xC1CCCC.
    case 0xC1CCCE: {
        Instruction step(cpu, 0x00, 0x00003Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:125 DEC
    case 0xC1CCCF: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:126 LDY #.SIZEOF(char_struct)
    case 0xC1CCD0: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Fu : 0x00005Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:126 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1CCD0.
    case 0xC1CCD2: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:127 JSL MULT168
    case 0xC1CCD3: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:128 TAX
    case 0xC1CCD7: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:129 LDA @LOCAL03
    case 0xC1CCD8: {
        Instruction step(cpu, 0xA5, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:130 INC
    case 0xC1CCDA: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:131 INC
    case 0xC1CCDB: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:132 INC
    case 0xC1CCDC: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // include/macros.asm:1044 LDY src
    // Macro caller: src/battle/battle_psi_menu.asm:133 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC1CCDD: {
        Instruction step(cpu, 0xA4, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1045 STY dest
    // Macro caller: src/battle/battle_psi_menu.asm:133 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC1CCDF: {
        Instruction step(cpu, 0x84, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:1046 LDY src+2
    // Macro caller: src/battle/battle_psi_menu.asm:133 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC1CCE1: {
        Instruction step(cpu, 0xA4, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1047 STY dest+2
    // Macro caller: src/battle/battle_psi_menu.asm:133 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC1CCE3: {
        Instruction step(cpu, 0x84, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:134 CLC
    case 0xC1CCE5: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:135 ADC @VIRTUAL0A
    case 0xC1CCE6: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:136 STA @VIRTUAL0A
    case 0xC1CCE8: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:137 LDA [@VIRTUAL0A]
    case 0xC1CCEA: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:138 AND #$00FF
    case 0xC1CCEC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:138 AND #$00FF
    // Overlapping static entry reached from 0xC1CCEC.
    case 0xC1CCEE: {
        Instruction step(cpu, 0x00, 0x0000DDu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:139 CMP PARTY_CHARACTERS+char_struct::current_pp_target,X
    case 0xC1CCEF: {
        Instruction step(cpu, 0xDD, 0x009A1Bu, 3u, AddressMode::AbsoluteIndexedX);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:761 BCC dest
    // Macro caller: src/battle/battle_psi_menu.asm:140 BLTEQ @UNKNOWN8
    case 0xC1CCF2: {
        Instruction step(cpu, 0x90, 0x00002Au, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/battle/battle_psi_menu.asm:140 BLTEQ @UNKNOWN8
    case 0xC1CCF4: {
        Instruction step(cpu, 0xF0, 0x000028u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:735 LDA arg
    // Macro caller: src/battle/battle_psi_menu.asm:141 CREATE_WINDOW_NEAR #WINDOW::TEXT_BATTLE
    case 0xC1CCF6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Eu : 0x00000Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:735 LDA arg
    // Macro caller: src/battle/battle_psi_menu.asm:141 CREATE_WINDOW_NEAR #WINDOW::TEXT_BATTLE
    // Overlapping static entry reached from 0xC1CCF6.
    case 0xC1CCF8: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/battle/battle_psi_menu.asm:141 CREATE_WINDOW_NEAR #WINDOW::TEXT_BATTLE
    case 0xC1CCF9: {
        Instruction step(cpu, 0x20, 0x0004EEu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:142 LDA #$0002
    case 0xC1CCFC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:142 LDA #$0002
    // Overlapping static entry reached from 0xC1CCFC.
    case 0xC1CCFE: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:143 JSR ENABLE_BLINKING_TRIANGLE
    case 0xC1CCFF: {
        Instruction step(cpu, 0x20, 0x000036u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/battle_psi_menu.asm:144 DISPLAY_TEXT_PTR MSG_BTL_PSI_CANNOT_MENU
    case 0xC1CD02: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000AAu : 0x00FAAAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/battle_psi_menu.asm:144 DISPLAY_TEXT_PTR MSG_BTL_PSI_CANNOT_MENU
    // Overlapping static entry reached from 0xC1CD02.
    case 0xC1CD04: {
        Instruction step(cpu, 0xFA, 0x000000u, 1u, AddressMode::Implied);
        step.pull_x();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/battle_psi_menu.asm:144 DISPLAY_TEXT_PTR MSG_BTL_PSI_CANNOT_MENU
    case 0xC1CD05: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/battle_psi_menu.asm:144 DISPLAY_TEXT_PTR MSG_BTL_PSI_CANNOT_MENU
    case 0xC1CD07: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C8u : 0x0000C8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/battle_psi_menu.asm:144 DISPLAY_TEXT_PTR MSG_BTL_PSI_CANNOT_MENU
    // Overlapping static entry reached from 0xC1CD07.
    case 0xC1CD09: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/battle_psi_menu.asm:144 DISPLAY_TEXT_PTR MSG_BTL_PSI_CANNOT_MENU
    case 0xC1CD0A: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:210 JSL DISPLAY_TEXT
    // Macro caller: src/battle/battle_psi_menu.asm:144 DISPLAY_TEXT_PTR MSG_BTL_PSI_CANNOT_MENU
    case 0xC1CD0C: {
        Instruction step(cpu, 0x22, 0xC186B1u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:145 JSR CLEAR_BLINKING_PROMPT
    case 0xC1CD10: {
        Instruction step(cpu, 0x20, 0x00003Cu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:146 JSR CLOSE_FOCUS_WINDOW
    case 0xC1CD13: {
        Instruction step(cpu, 0x20, 0x000084u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:147 LDX #$0000
    case 0xC1CD16: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:147 LDX #$0000
    // Overlapping static entry reached from 0xC1CD16.
    case 0xC1CD18: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:148 STX @LOCAL02
    case 0xC1CD19: {
        Instruction step(cpu, 0x86, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:149 JMP @UNKNOWN15
    case 0xC1CD1B: {
        Instruction step(cpu, 0x4C, 0x00CE08u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:151 LDA @LOCAL03
    case 0xC1CD1E: {
        Instruction step(cpu, 0xA5, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:152 INC
    case 0xC1CD20: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:153 CLC
    case 0xC1CD21: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:154 ADC @VIRTUAL06
    case 0xC1CD22: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:155 STA @VIRTUAL06
    case 0xC1CD24: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:156 LDA [@VIRTUAL06]
    case 0xC1CD26: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:157 AND #$00FF
    case 0xC1CD28: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:157 AND #$00FF
    // Overlapping static entry reached from 0xC1CD28.
    case 0xC1CD2A: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:158 TAX
    case 0xC1CD2B: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:159 CPX #$0001
    case 0xC1CD2C: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:159 CPX #$0001
    // Overlapping static entry reached from 0xC1CD2C.
    case 0xC1CD2E: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:160 BEQ @UNKNOWN9
    case 0xC1CD2F: {
        Instruction step(cpu, 0xF0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:161 CPX #$0003
    case 0xC1CD31: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:161 CPX #$0003
    // Overlapping static entry reached from 0xC1CD31.
    case 0xC1CD33: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:162 BNE @UNKNOWN10
    case 0xC1CD34: {
        Instruction step(cpu, 0xD0, 0x000059u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:164 LDY @LOCAL04_2
    case 0xC1CD36: {
        Instruction step(cpu, 0xA4, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:165 TYA
    case 0xC1CD38: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:581 STA scratch
    // Macro caller: src/battle/battle_psi_menu.asm:166 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1CD39: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:582 ASL
    // Macro caller: src/battle/battle_psi_menu.asm:166 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1CD3B: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:583 ADC scratch
    // Macro caller: src/battle/battle_psi_menu.asm:166 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1CD3C: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:584 ASL
    // Macro caller: src/battle/battle_psi_menu.asm:166 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1CD3E: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:585 ADC scratch
    // Macro caller: src/battle/battle_psi_menu.asm:166 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1CD3F: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:586 ASL
    // Macro caller: src/battle/battle_psi_menu.asm:166 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1CD41: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:587 ADC scratch
    // Macro caller: src/battle/battle_psi_menu.asm:166 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1CD42: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:167 TAX
    case 0xC1CD44: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:168 INX
    case 0xC1CD45: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:169 INX
    case 0xC1CD46: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:170 INX
    case 0xC1CD47: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:171 INX
    case 0xC1CD48: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:172 LDA f:PSI_ABILITY_TABLE,X
    case 0xC1CD49: {
        Instruction step(cpu, 0xBF, 0xD58A50u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:568 STA scratch
    // Macro caller: src/battle/battle_psi_menu.asm:173 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC1CD4D: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:569 ASL
    // Macro caller: src/battle/battle_psi_menu.asm:173 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC1CD4F: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/battle/battle_psi_menu.asm:173 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC1CD50: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:571 ASL
    // Macro caller: src/battle/battle_psi_menu.asm:173 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC1CD52: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:572 ASL
    // Macro caller: src/battle/battle_psi_menu.asm:173 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC1CD53: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:174 TAX
    case 0xC1CD54: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:175 LDA f:BATTLE_ACTION_TABLE,X
    case 0xC1CD55: {
        Instruction step(cpu, 0xBF, 0xD57B68u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:176 AND #$00FF
    case 0xC1CD59: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:176 AND #$00FF
    // Overlapping static entry reached from 0xC1CD59.
    case 0xC1CD5B: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:177 BNE @UNKNOWN10
    case 0xC1CD5C: {
        Instruction step(cpu, 0xD0, 0x000031u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:178 LDA #$0010
    case 0xC1CD5E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:178 LDA #$0010
    // Overlapping static entry reached from 0xC1CD5E.
    case 0xC1CD60: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:179 JSR CLOSE_WINDOW
    case 0xC1CD61: {
        Instruction step(cpu, 0x22, 0xC3E521u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:180 LDA #$0004
    case 0xC1CD65: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:180 LDA #$0004
    // Overlapping static entry reached from 0xC1CD65.
    case 0xC1CD67: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:181 JSR CLOSE_WINDOW
    case 0xC1CD68: {
        Instruction step(cpu, 0x22, 0xC3E521u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:182 LDA #$0001
    case 0xC1CD6C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:182 LDA #$0001
    // Overlapping static entry reached from 0xC1CD6C.
    case 0xC1CD6E: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:183 JSR CLOSE_WINDOW
    case 0xC1CD6F: {
        Instruction step(cpu, 0x22, 0xC3E521u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:735 LDA arg
    // Macro caller: src/battle/battle_psi_menu.asm:184 CREATE_WINDOW_NEAR #WINDOW::UNKNOWN26
    case 0xC1CD73: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000026u : 0x000026u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:735 LDA arg
    // Macro caller: src/battle/battle_psi_menu.asm:184 CREATE_WINDOW_NEAR #WINDOW::UNKNOWN26
    // Overlapping static entry reached from 0xC1CD73.
    case 0xC1CD75: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/battle/battle_psi_menu.asm:184 CREATE_WINDOW_NEAR #WINDOW::UNKNOWN26
    case 0xC1CD76: {
        Instruction step(cpu, 0x20, 0x0004EEu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:185 JSR SET_INSTANT_PRINTING
    case 0xC1CD79: {
        Instruction step(cpu, 0x22, 0xC3E4D4u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:186 LDA #$0006
    case 0xC1CD7D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:186 LDA #$0006
    // Overlapping static entry reached from 0xC1CD7D.
    case 0xC1CD7F: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:187 JSR UNKNOWN_C10FEA
    case 0xC1CD80: {
        Instruction step(cpu, 0x20, 0x000FEAu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:188 LDY @LOCAL04_2
    case 0xC1CD83: {
        Instruction step(cpu, 0xA4, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:189 TYA
    case 0xC1CD85: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:190 JSR UNKNOWN_C1CA06
    case 0xC1CD86: {
        Instruction step(cpu, 0x20, 0x00CA06u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:191 LDA #$0000
    case 0xC1CD89: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:191 LDA #$0000
    // Overlapping static entry reached from 0xC1CD89.
    case 0xC1CD8B: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:192 JSR UNKNOWN_C10FEA
    case 0xC1CD8C: {
        Instruction step(cpu, 0x20, 0x000FEAu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/battle_psi_menu.asm:194 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    case 0xC1CD8F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000050u : 0x008A50u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/battle_psi_menu.asm:194 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1CD8F.
    case 0xC1CD91: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/battle_psi_menu.asm:194 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    case 0xC1CD92: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/battle_psi_menu.asm:194 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    case 0xC1CD94: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D5u : 0x0000D5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/battle_psi_menu.asm:194 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1CD94.
    case 0xC1CD96: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/battle_psi_menu.asm:194 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    case 0xC1CD97: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:195 LDY @LOCAL04_2
    case 0xC1CD99: {
        Instruction step(cpu, 0xA4, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:196 TYA
    case 0xC1CD9B: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:581 STA scratch
    // Macro caller: src/battle/battle_psi_menu.asm:197 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1CD9C: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:582 ASL
    // Macro caller: src/battle/battle_psi_menu.asm:197 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1CD9E: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:583 ADC scratch
    // Macro caller: src/battle/battle_psi_menu.asm:197 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1CD9F: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:584 ASL
    // Macro caller: src/battle/battle_psi_menu.asm:197 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1CDA1: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:585 ADC scratch
    // Macro caller: src/battle/battle_psi_menu.asm:197 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1CDA2: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:586 ASL
    // Macro caller: src/battle/battle_psi_menu.asm:197 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1CDA4: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:587 ADC scratch
    // Macro caller: src/battle/battle_psi_menu.asm:197 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1CDA5: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:198 INC
    case 0xC1CDA7: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:199 INC
    case 0xC1CDA8: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:200 INC
    case 0xC1CDA9: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:201 INC
    case 0xC1CDAA: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:202 CLC
    case 0xC1CDAB: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:203 ADC @VIRTUAL06
    case 0xC1CDAC: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:203 ADC @VIRTUAL06
    // Overlapping static entry reached from 0xC1EDD2.
    case 0xC1CDAD: {
        Instruction step(cpu, 0x06, 0x000085u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:204 STA @VIRTUAL06
    case 0xC1CDAE: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:204 STA @VIRTUAL06
    // Overlapping static entry reached from 0xC1CDAD.
    case 0xC1CDAF: {
        Instruction step(cpu, 0x06, 0x0000A5u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:205 LDA @LOCAL06
    case 0xC1CDB0: {
        Instruction step(cpu, 0xA5, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:205 LDA @LOCAL06
    // Overlapping static entry reached from 0xC1CDAF.
    case 0xC1CDB1: {
        Instruction step(cpu, 0x20, 0x000485u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:206 STA @VIRTUAL04
    case 0xC1CDB2: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:207 LDX @VIRTUAL04
    case 0xC1CDB4: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:208 LDA a:battle_menu_selection::user,X
    case 0xC1CDB6: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:209 AND #$00FF
    case 0xC1CDB9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:209 AND #$00FF
    // Overlapping static entry reached from 0xC1CDB9.
    case 0xC1CDBB: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:210 TAX
    case 0xC1CDBC: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:211 LDA [@VIRTUAL06]
    case 0xC1CDBD: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:212 JSR DETERMINE_TARGETTING
    case 0xC1CDBF: {
        Instruction step(cpu, 0x20, 0x00ADB4u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:213 TAX
    case 0xC1CDC2: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:214 STX @LOCAL02
    case 0xC1CDC3: {
        Instruction step(cpu, 0x86, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:215 LDA [@VIRTUAL06]
    case 0xC1CDC5: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:568 STA scratch
    // Macro caller: src/battle/battle_psi_menu.asm:216 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC1CDC7: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:569 ASL
    // Macro caller: src/battle/battle_psi_menu.asm:216 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC1CDC9: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/battle/battle_psi_menu.asm:216 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC1CDCA: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:571 ASL
    // Macro caller: src/battle/battle_psi_menu.asm:216 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC1CDCC: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:572 ASL
    // Macro caller: src/battle/battle_psi_menu.asm:216 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC1CDCD: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:217 TAX
    case 0xC1CDCE: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:218 LDA f:BATTLE_ACTION_TABLE,X
    case 0xC1CDCF: {
        Instruction step(cpu, 0xBF, 0xD57B68u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:219 AND #$00FF
    case 0xC1CDD3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:219 AND #$00FF
    // Overlapping static entry reached from 0xC1CDD3.
    case 0xC1CDD5: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:220 BNE @UNKNOWN11
    case 0xC1CDD6: {
        Instruction step(cpu, 0xD0, 0x000009u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:221 LDA #$0026
    case 0xC1CDD8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000026u : 0x000026u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:221 LDA #$0026
    // Overlapping static entry reached from 0xC1CDD8.
    case 0xC1CDDA: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:222 JSR CLOSE_WINDOW
    case 0xC1CDDB: {
        Instruction step(cpu, 0x22, 0xC3E521u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:223 BRA @UNKNOWN12
    case 0xC1CDDF: {
        Instruction step(cpu, 0x80, 0x000015u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:225 LDA #$0010
    case 0xC1CDE1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:225 LDA #$0010
    // Overlapping static entry reached from 0xC1CDE1.
    case 0xC1CDE3: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:226 JSR CLOSE_WINDOW
    case 0xC1CDE4: {
        Instruction step(cpu, 0x22, 0xC3E521u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:227 LDA #$0004
    case 0xC1CDE8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:227 LDA #$0004
    // Overlapping static entry reached from 0xC1CDE8.
    case 0xC1CDEA: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:228 JSR CLOSE_WINDOW
    case 0xC1CDEB: {
        Instruction step(cpu, 0x22, 0xC3E521u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:229 LDA #$0001
    case 0xC1CDEF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:229 LDA #$0001
    // Overlapping static entry reached from 0xC1CDEF.
    case 0xC1CDF1: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:230 JSR CLOSE_WINDOW
    case 0xC1CDF2: {
        Instruction step(cpu, 0x22, 0xC3E521u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:232 LDX @LOCAL02
    case 0xC1CDF6: {
        Instruction step(cpu, 0xA6, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:233 TXA
    case 0xC1CDF8: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:234 AND #$00FF
    case 0xC1CDF9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:234 AND #$00FF
    // Overlapping static entry reached from 0xC1CDF9.
    case 0xC1CDFB: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/battle_psi_menu.asm:235 BEQL @UNKNOWN0
    case 0xC1CDFC: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/battle_psi_menu.asm:235 BEQL @UNKNOWN0
    case 0xC1CDFE: {
        Instruction step(cpu, 0x4C, 0x00CBDDu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:236 BRA @UNKNOWN15
    case 0xC1CE01: {
        Instruction step(cpu, 0x80, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:238 LDX #$0001
    case 0xC1CE03: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:238 LDX #$0001
    // Overlapping static entry reached from 0xC1CE03.
    case 0xC1CE05: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:239 STX @LOCAL02
    case 0xC1CE06: {
        Instruction step(cpu, 0x86, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:241 CPX #$0000
    case 0xC1CE08: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:241 CPX #$0000
    // Overlapping static entry reached from 0xC1CE08.
    case 0xC1CE0A: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/battle_psi_menu.asm:242 BEQL @UNKNOWN6
    case 0xC1CE0B: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/battle_psi_menu.asm:242 BEQL @UNKNOWN6
    case 0xC1CE0D: {
        Instruction step(cpu, 0x4C, 0x00CC6Fu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:243 LDA #$0004
    case 0xC1CE10: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:243 LDA #$0004
    // Overlapping static entry reached from 0xC1CE10.
    case 0xC1CE12: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:244 JSR CLOSE_WINDOW
    case 0xC1CE13: {
        Instruction step(cpu, 0x22, 0xC3E521u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:245 LDY @LOCAL04_2
    case 0xC1CE17: {
        Instruction step(cpu, 0xA4, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/battle_psi_menu.asm:246 BEQL @UNKNOWN3
    case 0xC1CE19: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/battle_psi_menu.asm:246 BEQL @UNKNOWN3
    case 0xC1CE1B: {
        Instruction step(cpu, 0x4C, 0x00CC2Au, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:247 TYA
    case 0xC1CE1E: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:248 SEP #PROC_FLAGS::ACCUM8
    case 0xC1CE1F: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:249 LDX @LOCAL06
    case 0xC1CE21: {
        Instruction step(cpu, 0xA6, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:250 STX @VIRTUAL04
    case 0xC1CE23: {
        Instruction step(cpu, 0x86, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:251 STA a:battle_menu_selection::param1,X
    case 0xC1CE25: {
        Instruction step(cpu, 0x9D, 0x000001u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:252 REP #PROC_FLAGS::ACCUM8
    case 0xC1CE28: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:253 TYA
    case 0xC1CE2A: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:581 STA scratch
    // Macro caller: src/battle/battle_psi_menu.asm:254 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1CE2B: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:582 ASL
    // Macro caller: src/battle/battle_psi_menu.asm:254 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1CE2D: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:583 ADC scratch
    // Macro caller: src/battle/battle_psi_menu.asm:254 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1CE2E: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:584 ASL
    // Macro caller: src/battle/battle_psi_menu.asm:254 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1CE30: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:585 ADC scratch
    // Macro caller: src/battle/battle_psi_menu.asm:254 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1CE31: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:586 ASL
    // Macro caller: src/battle/battle_psi_menu.asm:254 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1CE33: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:587 ADC scratch
    // Macro caller: src/battle/battle_psi_menu.asm:254 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1CE34: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:255 TAX
    case 0xC1CE36: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:256 INX
    case 0xC1CE37: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:257 INX
    case 0xC1CE38: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:258 INX
    case 0xC1CE39: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:259 INX
    case 0xC1CE3A: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:260 LDA f:PSI_ABILITY_TABLE,X
    case 0xC1CE3B: {
        Instruction step(cpu, 0xBF, 0xD58A50u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:261 LDX @LOCAL06
    case 0xC1CE3F: {
        Instruction step(cpu, 0xA6, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:262 STX @VIRTUAL04
    case 0xC1CE41: {
        Instruction step(cpu, 0x86, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:263 STA a:battle_menu_selection::selected_action,X
    case 0xC1CE43: {
        Instruction step(cpu, 0x9D, 0x000002u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:264 SEP #PROC_FLAGS::ACCUM8
    case 0xC1CE46: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:265 LDA #$08
    case 0xC1CE48: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000008u : 0x004808u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:266 PHA
    case 0xC1CE4A: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:267 LDX @LOCAL02
    case 0xC1CE4B: {
        Instruction step(cpu, 0xA6, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:268 REP #PROC_FLAGS::ACCUM8
    case 0xC1CE4D: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:269 TXA
    case 0xC1CE4F: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:270 SEP #PROC_FLAGS::INDEX8
    case 0xC1CE50: {
        Instruction step(cpu, 0xE2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:271 PLY
    case 0xC1CE52: {
        Instruction step(cpu, 0x7A, 0x000000u, 1u, AddressMode::Implied);
        step.pull_y();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:272 JSL ASR8_UNKNOWN1
    case 0xC1CE53: {
        Instruction step(cpu, 0x22, 0xC09251u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:273 SEP #PROC_FLAGS::ACCUM8
    case 0xC1CE57: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:274 REP #PROC_FLAGS::INDEX8
    case 0xC1CE59: {
        Instruction step(cpu, 0xC2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:275 LDX @VIRTUAL04
    case 0xC1CE5B: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:276 STA a:battle_menu_selection::targetting,X
    case 0xC1CE5D: {
        Instruction step(cpu, 0x9D, 0x000004u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:277 LDX @LOCAL02
    case 0xC1CE60: {
        Instruction step(cpu, 0xA6, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:278 REP #PROC_FLAGS::ACCUM8
    case 0xC1CE62: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:279 TXA
    case 0xC1CE64: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:280 SEP #PROC_FLAGS::ACCUM8
    case 0xC1CE65: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:281 LDX @VIRTUAL04
    case 0xC1CE67: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:282 STA a:battle_menu_selection::selected_target,X
    case 0xC1CE69: {
        Instruction step(cpu, 0x9D, 0x000005u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:283 REP #PROC_FLAGS::ACCUM8
    case 0xC1CE6C: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:284 LDA #$0001
    case 0xC1CE6E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:284 LDA #$0001
    // Overlapping static entry reached from 0xC1CE6E.
    case 0xC1CE70: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:285 STA @VIRTUAL02
    case 0xC1CE71: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:287 LDA #$0001
    case 0xC1CE73: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:287 LDA #$0001
    // Overlapping static entry reached from 0xC1CE73.
    case 0xC1CE75: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:288 JSR CLOSE_WINDOW
    case 0xC1CE76: {
        Instruction step(cpu, 0x22, 0xC3E521u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:289 LDA #$0010
    case 0xC1CE7A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:289 LDA #$0010
    // Overlapping static entry reached from 0xC1CE7A.
    case 0xC1CE7C: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:290 JSR CLOSE_WINDOW
    case 0xC1CE7D: {
        Instruction step(cpu, 0x22, 0xC3E521u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/battle_psi_menu.asm:291 LDA @VIRTUAL02
    case 0xC1CE81: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/battle_psi_menu.asm:292 END_C_FUNCTION
    case 0xC1CE83: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/battle_psi_menu.asm:292 END_C_FUNCTION
    case 0xC1CE84: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
