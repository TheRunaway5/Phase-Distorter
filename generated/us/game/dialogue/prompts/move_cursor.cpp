// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/text/move_cursor.asm
bool resume_text_move_cursor(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/move_cursor.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC118E7: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/move_cursor.asm:21 END_STACK_VARS
    case 0xC118E9: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/move_cursor.asm:21 END_STACK_VARS
    case 0xC118EA: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/move_cursor.asm:21 END_STACK_VARS
    case 0xC118EB: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/move_cursor.asm:21 END_STACK_VARS
    case 0xC118EC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000E2u : 0x00FFE2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/move_cursor.asm:21 END_STACK_VARS
    // Overlapping static entry reached from 0xC118EC.
    case 0xC118EE: {
        Instruction step(cpu, 0xFF, 0x84685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/move_cursor.asm:21 END_STACK_VARS
    case 0xC118EF: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/move_cursor.asm:21 END_STACK_VARS
    case 0xC118F0: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/move_cursor.asm:22 STY @VIRTUAL04
    case 0xC118F1: {
        Instruction step(cpu, 0x84, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/move_cursor.asm:22 STY @VIRTUAL04
    // Overlapping static entry reached from 0xC118EE.
    case 0xC118F2: {
        Instruction step(cpu, 0x04, 0x000086u, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/text/move_cursor.asm:23 STX @LOCAL07
    case 0xC118F3: {
        Instruction step(cpu, 0x86, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/move_cursor.asm:23 STX @LOCAL07
    // Overlapping static entry reached from 0xC118F2.
    case 0xC118F4: {
        Instruction step(cpu, 0x1C, 0x001A85u, 3u, AddressMode::Absolute);
        step.reset_tested_bits();
        return step.finish();
    }
    // src/text/move_cursor.asm:24 STA @LOCAL06
    case 0xC118F5: {
        Instruction step(cpu, 0x85, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/move_cursor.asm:25 LDY @WRAPY
    case 0xC118F7: {
        Instruction step(cpu, 0xA4, 0x000032u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/move_cursor.asm:26 STY @LOCAL05
    case 0xC118F9: {
        Instruction step(cpu, 0x84, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/move_cursor.asm:27 LDX @WRAPX
    case 0xC118FB: {
        Instruction step(cpu, 0xA6, 0x000030u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/move_cursor.asm:28 STX @LOCAL04
    case 0xC118FD: {
        Instruction step(cpu, 0x86, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/move_cursor.asm:29 LDA @SFX
    case 0xC118FF: {
        Instruction step(cpu, 0xA5, 0x00002Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/move_cursor.asm:30 STA @LOCAL03
    case 0xC11901: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/move_cursor.asm:31 LDA @DELTAY
    case 0xC11903: {
        Instruction step(cpu, 0xA5, 0x00002Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/move_cursor.asm:32 STA @VIRTUAL02
    case 0xC11905: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/move_cursor.asm:33 STA @LOCAL00
    case 0xC11907: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/move_cursor.asm:34 LDA #.LOWORD(-1)
    case 0xC11909: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/move_cursor.asm:34 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC11909.
    case 0xC1190B: {
        Instruction step(cpu, 0xFF, 0xA41085u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/move_cursor.asm:35 STA @LOCAL01
    case 0xC1190C: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/move_cursor.asm:36 LDY @VIRTUAL04
    case 0xC1190E: {
        Instruction step(cpu, 0xA4, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/move_cursor.asm:36 LDY @VIRTUAL04
    // Overlapping static entry reached from 0xC1190B.
    case 0xC1190F: {
        Instruction step(cpu, 0x04, 0x0000A6u, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/text/move_cursor.asm:37 LDX @LOCAL07
    case 0xC11910: {
        Instruction step(cpu, 0xA6, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/move_cursor.asm:37 LDX @LOCAL07
    // Overlapping static entry reached from 0xC1190F.
    case 0xC11911: {
        Instruction step(cpu, 0x1C, 0x001AA5u, 3u, AddressMode::Absolute);
        step.reset_tested_bits();
        return step.finish();
    }
    // src/text/move_cursor.asm:38 LDA @LOCAL06
    case 0xC11912: {
        Instruction step(cpu, 0xA5, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/move_cursor.asm:39 JSL UNKNOWN_C20B65
    case 0xC11914: {
        Instruction step(cpu, 0x22, 0xC20B65u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/move_cursor.asm:40 TAX
    case 0xC11918: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/move_cursor.asm:41 STX @LOCAL02
    case 0xC11919: {
        Instruction step(cpu, 0x86, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/move_cursor.asm:42 CPX #.LOWORD(-1)
    case 0xC1191B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/text/move_cursor.asm:42 CPX #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1191B.
    case 0xC1191D: {
        Instruction step(cpu, 0xFF, 0xA53AD0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/move_cursor.asm:43 BNE @UNKNOWN1
    case 0xC1191E: {
        Instruction step(cpu, 0xD0, 0x00003Au, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/move_cursor.asm:44 LDA @VIRTUAL02
    case 0xC11920: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/move_cursor.asm:44 LDA @VIRTUAL02
    // Overlapping static entry reached from 0xC1191D.
    case 0xC11921: {
        Instruction step(cpu, 0x02, 0x000085u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/text/move_cursor.asm:45 STA @LOCAL00
    case 0xC11922: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/move_cursor.asm:46 LDA #.LOWORD(-1)
    case 0xC11924: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/move_cursor.asm:46 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC11924.
    case 0xC11926: {
        Instruction step(cpu, 0xFF, 0xA41085u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/move_cursor.asm:47 STA @LOCAL01
    case 0xC11927: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/move_cursor.asm:48 LDY @VIRTUAL04
    case 0xC11929: {
        Instruction step(cpu, 0xA4, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/move_cursor.asm:48 LDY @VIRTUAL04
    // Overlapping static entry reached from 0xC11926.
    case 0xC1192A: {
        Instruction step(cpu, 0x04, 0x0000A6u, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/text/move_cursor.asm:49 LDX @LOCAL05
    case 0xC1192B: {
        Instruction step(cpu, 0xA6, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/move_cursor.asm:49 LDX @LOCAL05
    // Overlapping static entry reached from 0xC1192A.
    case 0xC1192C: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/move_cursor.asm:50 LDA @LOCAL04
    case 0xC1192D: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/move_cursor.asm:51 JSL UNKNOWN_C20B65
    case 0xC1192F: {
        Instruction step(cpu, 0x22, 0xC20B65u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/move_cursor.asm:52 TAX
    case 0xC11933: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/move_cursor.asm:53 STX @LOCAL02
    case 0xC11934: {
        Instruction step(cpu, 0x86, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/move_cursor.asm:54 LDA @VIRTUAL04
    case 0xC11936: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/move_cursor.asm:55 BNE @UNKNOWN0
    case 0xC11938: {
        Instruction step(cpu, 0xD0, 0x000013u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/move_cursor.asm:56 TXA
    case 0xC1193A: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/move_cursor.asm:57 AND #$FF00
    case 0xC1193B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x00FF00u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/move_cursor.asm:57 AND #$FF00
    // Overlapping static entry reached from 0xC1193B.
    case 0xC1193D: {
        Instruction step(cpu, 0xFF, 0xFF29EBu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/move_cursor.asm:58 XBA
    case 0xC1193E: {
        Instruction step(cpu, 0xEB, 0x000000u, 1u, AddressMode::Implied);
        step.exchange_accumulator_bytes();
        return step.finish();
    }
    // src/text/move_cursor.asm:59 AND #$00FF
    case 0xC1193F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/move_cursor.asm:59 AND #$00FF
    // Overlapping static entry reached from 0xC1193F.
    case 0xC11941: {
        Instruction step(cpu, 0x00, 0x0000C5u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/move_cursor.asm:60 CMP @LOCAL07
    case 0xC11942: {
        Instruction step(cpu, 0xC5, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/move_cursor.asm:61 BEQ @UNKNOWN1
    case 0xC11944: {
        Instruction step(cpu, 0xF0, 0x000014u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/move_cursor.asm:62 LDX #.LOWORD(-1)
    case 0xC11946: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/move_cursor.asm:62 LDX #.LOWORD(-1)
    // Overlapping static entry reached from 0xC11946.
    case 0xC11948: {
        Instruction step(cpu, 0xFF, 0x801286u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/move_cursor.asm:63 STX @LOCAL02
    case 0xC11949: {
        Instruction step(cpu, 0x86, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/move_cursor.asm:64 BRA @UNKNOWN1
    case 0xC1194B: {
        Instruction step(cpu, 0x80, 0x00000Du, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/move_cursor.asm:64 BRA @UNKNOWN1
    // Overlapping static entry reached from 0xC11948.
    case 0xC1194C: {
        Instruction step(cpu, 0x0D, 0x00298Au, 3u, AddressMode::Absolute);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/move_cursor.asm:66 TXA
    case 0xC1194D: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/move_cursor.asm:67 AND #$00FF
    case 0xC1194E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/move_cursor.asm:67 AND #$00FF
    // Overlapping static entry reached from 0xC1194C.
    case 0xC1194F: {
        Instruction step(cpu, 0xFF, 0x1AC500u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/move_cursor.asm:67 AND #$00FF
    // Overlapping static entry reached from 0xC1194E.
    case 0xC11950: {
        Instruction step(cpu, 0x00, 0x0000C5u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/move_cursor.asm:68 CMP @LOCAL06
    case 0xC11951: {
        Instruction step(cpu, 0xC5, 0x00001Au, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/move_cursor.asm:69 BEQ @UNKNOWN1
    case 0xC11953: {
        Instruction step(cpu, 0xF0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/move_cursor.asm:70 LDX #.LOWORD(-1)
    case 0xC11955: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/move_cursor.asm:70 LDX #.LOWORD(-1)
    // Overlapping static entry reached from 0xC11955.
    case 0xC11957: {
        Instruction step(cpu, 0xFF, 0xE01286u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/move_cursor.asm:71 STX @LOCAL02
    case 0xC11958: {
        Instruction step(cpu, 0x86, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/move_cursor.asm:73 CPX #.LOWORD(-1)
    case 0xC1195A: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/text/move_cursor.asm:73 CPX #.LOWORD(-1)
    // Overlapping static entry reached from 0xC11957.
    case 0xC1195B: {
        Instruction step(cpu, 0xFF, 0x06F0FFu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/move_cursor.asm:73 CPX #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1195A.
    case 0xC1195C: {
        Instruction step(cpu, 0xFF, 0xA506F0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/move_cursor.asm:74 BEQ @UNKNOWN2
    case 0xC1195D: {
        Instruction step(cpu, 0xF0, 0x000006u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/move_cursor.asm:75 LDA @LOCAL03
    case 0xC1195F: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/move_cursor.asm:75 LDA @LOCAL03
    // Overlapping static entry reached from 0xC1195C.
    case 0xC11960: {
        Instruction step(cpu, 0x14, 0x000022u, 2u, AddressMode::DirectPage);
        step.reset_tested_bits();
        return step.finish();
    }
    // src/text/move_cursor.asm:76 JSL PLAY_SOUND
    case 0xC11961: {
        Instruction step(cpu, 0x22, 0xC0ABE0u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/move_cursor.asm:76 JSL PLAY_SOUND
    // Overlapping static entry reached from 0xC11960.
    case 0xC11962: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x0000ABu : 0x00C0ABu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/text/move_cursor.asm:76 JSL PLAY_SOUND
    // Overlapping static entry reached from 0xC11962.
    case 0xC11964: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000A6u : 0x0012A6u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/text/move_cursor.asm:78 LDX @LOCAL02
    case 0xC11965: {
        Instruction step(cpu, 0xA6, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/move_cursor.asm:78 LDX @LOCAL02
    // Overlapping static entry reached from 0xC11964.
    case 0xC11966: {
        Instruction step(cpu, 0x12, 0x00008Au, 2u, AddressMode::DirectPageIndirect);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/move_cursor.asm:79 TXA
    case 0xC11967: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/move_cursor.asm:80 END_C_FUNCTION
    case 0xC11968: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/text/move_cursor.asm:80 END_C_FUNCTION
    case 0xC11969: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
