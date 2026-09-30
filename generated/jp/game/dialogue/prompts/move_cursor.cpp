// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/text/move_cursor.asm
bool resume_text_move_cursor(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/move_cursor.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC12086: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/move_cursor.asm:21 END_STACK_VARS
    case 0xC12088: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/move_cursor.asm:21 END_STACK_VARS
    case 0xC12089: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/move_cursor.asm:21 END_STACK_VARS
    case 0xC1208A: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/move_cursor.asm:21 END_STACK_VARS
    case 0xC1208B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000E2u : 0x00FFE2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/move_cursor.asm:21 END_STACK_VARS
    // Overlapping static entry reached from 0xC1208B.
    case 0xC1208D: {
        Instruction step(cpu, 0xFF, 0x84685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/move_cursor.asm:21 END_STACK_VARS
    case 0xC1208E: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/move_cursor.asm:21 END_STACK_VARS
    case 0xC1208F: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/move_cursor.asm:22 STY @VIRTUAL04
    case 0xC12090: {
        Instruction step(cpu, 0x84, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/move_cursor.asm:22 STY @VIRTUAL04
    // Overlapping static entry reached from 0xC1208D.
    case 0xC12091: {
        Instruction step(cpu, 0x04, 0x000086u, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/text/move_cursor.asm:23 STX @LOCAL07
    case 0xC12092: {
        Instruction step(cpu, 0x86, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/move_cursor.asm:23 STX @LOCAL07
    // Overlapping static entry reached from 0xC12091.
    case 0xC12093: {
        Instruction step(cpu, 0x1C, 0x001A85u, 3u, AddressMode::Absolute);
        step.reset_tested_bits();
        return step.finish();
    }
    // src/text/move_cursor.asm:24 STA @LOCAL06
    case 0xC12094: {
        Instruction step(cpu, 0x85, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/move_cursor.asm:25 LDY @WRAPY
    case 0xC12096: {
        Instruction step(cpu, 0xA4, 0x000032u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/move_cursor.asm:26 STY @LOCAL05
    case 0xC12098: {
        Instruction step(cpu, 0x84, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/move_cursor.asm:27 LDX @WRAPX
    case 0xC1209A: {
        Instruction step(cpu, 0xA6, 0x000030u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/move_cursor.asm:28 STX @LOCAL04
    case 0xC1209C: {
        Instruction step(cpu, 0x86, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/move_cursor.asm:29 LDA @SFX
    case 0xC1209E: {
        Instruction step(cpu, 0xA5, 0x00002Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/move_cursor.asm:30 STA @LOCAL03
    case 0xC120A0: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/move_cursor.asm:31 LDA @DELTAY
    case 0xC120A2: {
        Instruction step(cpu, 0xA5, 0x00002Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/move_cursor.asm:32 STA @VIRTUAL02
    case 0xC120A4: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/move_cursor.asm:33 STA @LOCAL00
    case 0xC120A6: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/move_cursor.asm:34 LDA #.LOWORD(-1)
    case 0xC120A8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/move_cursor.asm:34 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC120A8.
    case 0xC120AA: {
        Instruction step(cpu, 0xFF, 0xA41085u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/move_cursor.asm:35 STA @LOCAL01
    case 0xC120AB: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/move_cursor.asm:36 LDY @VIRTUAL04
    case 0xC120AD: {
        Instruction step(cpu, 0xA4, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/move_cursor.asm:36 LDY @VIRTUAL04
    // Overlapping static entry reached from 0xC120AA.
    case 0xC120AE: {
        Instruction step(cpu, 0x04, 0x0000A6u, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/text/move_cursor.asm:37 LDX @LOCAL07
    case 0xC120AF: {
        Instruction step(cpu, 0xA6, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/move_cursor.asm:37 LDX @LOCAL07
    // Overlapping static entry reached from 0xC120AE.
    case 0xC120B0: {
        Instruction step(cpu, 0x1C, 0x001AA5u, 3u, AddressMode::Absolute);
        step.reset_tested_bits();
        return step.finish();
    }
    // src/text/move_cursor.asm:38 LDA @LOCAL06
    case 0xC120B1: {
        Instruction step(cpu, 0xA5, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/move_cursor.asm:39 JSL UNKNOWN_C20B65
    case 0xC120B3: {
        Instruction step(cpu, 0x22, 0xC209F6u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/move_cursor.asm:40 TAX
    case 0xC120B7: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/move_cursor.asm:41 STX @LOCAL02
    case 0xC120B8: {
        Instruction step(cpu, 0x86, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/move_cursor.asm:42 CPX #.LOWORD(-1)
    case 0xC120BA: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/text/move_cursor.asm:42 CPX #.LOWORD(-1)
    // Overlapping static entry reached from 0xC120BA.
    case 0xC120BC: {
        Instruction step(cpu, 0xFF, 0xA53AD0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/move_cursor.asm:43 BNE @UNKNOWN1
    case 0xC120BD: {
        Instruction step(cpu, 0xD0, 0x00003Au, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/move_cursor.asm:44 LDA @VIRTUAL02
    case 0xC120BF: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/move_cursor.asm:44 LDA @VIRTUAL02
    // Overlapping static entry reached from 0xC120BC.
    case 0xC120C0: {
        Instruction step(cpu, 0x02, 0x000085u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/text/move_cursor.asm:45 STA @LOCAL00
    case 0xC120C1: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/move_cursor.asm:46 LDA #.LOWORD(-1)
    case 0xC120C3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/move_cursor.asm:46 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC120C3.
    case 0xC120C5: {
        Instruction step(cpu, 0xFF, 0xA41085u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/move_cursor.asm:47 STA @LOCAL01
    case 0xC120C6: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/move_cursor.asm:48 LDY @VIRTUAL04
    case 0xC120C8: {
        Instruction step(cpu, 0xA4, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/move_cursor.asm:48 LDY @VIRTUAL04
    // Overlapping static entry reached from 0xC120C5.
    case 0xC120C9: {
        Instruction step(cpu, 0x04, 0x0000A6u, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/text/move_cursor.asm:49 LDX @LOCAL05
    case 0xC120CA: {
        Instruction step(cpu, 0xA6, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/move_cursor.asm:49 LDX @LOCAL05
    // Overlapping static entry reached from 0xC120C9.
    case 0xC120CB: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/move_cursor.asm:50 LDA @LOCAL04
    case 0xC120CC: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/move_cursor.asm:51 JSL UNKNOWN_C20B65
    case 0xC120CE: {
        Instruction step(cpu, 0x22, 0xC209F6u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/move_cursor.asm:52 TAX
    case 0xC120D2: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/move_cursor.asm:53 STX @LOCAL02
    case 0xC120D3: {
        Instruction step(cpu, 0x86, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/move_cursor.asm:54 LDA @VIRTUAL04
    case 0xC120D5: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/move_cursor.asm:55 BNE @UNKNOWN0
    case 0xC120D7: {
        Instruction step(cpu, 0xD0, 0x000013u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/move_cursor.asm:56 TXA
    case 0xC120D9: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/move_cursor.asm:57 AND #$FF00
    case 0xC120DA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x00FF00u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/move_cursor.asm:57 AND #$FF00
    // Overlapping static entry reached from 0xC120DA.
    case 0xC120DC: {
        Instruction step(cpu, 0xFF, 0xFF29EBu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/move_cursor.asm:58 XBA
    case 0xC120DD: {
        Instruction step(cpu, 0xEB, 0x000000u, 1u, AddressMode::Implied);
        step.exchange_accumulator_bytes();
        return step.finish();
    }
    // src/text/move_cursor.asm:59 AND #$00FF
    case 0xC120DE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/move_cursor.asm:59 AND #$00FF
    // Overlapping static entry reached from 0xC120DE.
    case 0xC120E0: {
        Instruction step(cpu, 0x00, 0x0000C5u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/move_cursor.asm:60 CMP @LOCAL07
    case 0xC120E1: {
        Instruction step(cpu, 0xC5, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/move_cursor.asm:61 BEQ @UNKNOWN1
    case 0xC120E3: {
        Instruction step(cpu, 0xF0, 0x000014u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/move_cursor.asm:62 LDX #.LOWORD(-1)
    case 0xC120E5: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/move_cursor.asm:62 LDX #.LOWORD(-1)
    // Overlapping static entry reached from 0xC120E5.
    case 0xC120E7: {
        Instruction step(cpu, 0xFF, 0x801286u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/move_cursor.asm:63 STX @LOCAL02
    case 0xC120E8: {
        Instruction step(cpu, 0x86, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/move_cursor.asm:64 BRA @UNKNOWN1
    case 0xC120EA: {
        Instruction step(cpu, 0x80, 0x00000Du, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/move_cursor.asm:64 BRA @UNKNOWN1
    // Overlapping static entry reached from 0xC120E7.
    case 0xC120EB: {
        Instruction step(cpu, 0x0D, 0x00298Au, 3u, AddressMode::Absolute);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/move_cursor.asm:66 TXA
    case 0xC120EC: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/move_cursor.asm:67 AND #$00FF
    case 0xC120ED: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/move_cursor.asm:67 AND #$00FF
    // Overlapping static entry reached from 0xC120EB.
    case 0xC120EE: {
        Instruction step(cpu, 0xFF, 0x1AC500u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/move_cursor.asm:67 AND #$00FF
    // Overlapping static entry reached from 0xC120ED.
    case 0xC120EF: {
        Instruction step(cpu, 0x00, 0x0000C5u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/move_cursor.asm:68 CMP @LOCAL06
    case 0xC120F0: {
        Instruction step(cpu, 0xC5, 0x00001Au, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/move_cursor.asm:69 BEQ @UNKNOWN1
    case 0xC120F2: {
        Instruction step(cpu, 0xF0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/move_cursor.asm:70 LDX #.LOWORD(-1)
    case 0xC120F4: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/move_cursor.asm:70 LDX #.LOWORD(-1)
    // Overlapping static entry reached from 0xC120F4.
    case 0xC120F6: {
        Instruction step(cpu, 0xFF, 0xE01286u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/move_cursor.asm:71 STX @LOCAL02
    case 0xC120F7: {
        Instruction step(cpu, 0x86, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/move_cursor.asm:73 CPX #.LOWORD(-1)
    case 0xC120F9: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/text/move_cursor.asm:73 CPX #.LOWORD(-1)
    // Overlapping static entry reached from 0xC120F6.
    case 0xC120FA: {
        Instruction step(cpu, 0xFF, 0x06F0FFu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/move_cursor.asm:73 CPX #.LOWORD(-1)
    // Overlapping static entry reached from 0xC120F9.
    case 0xC120FB: {
        Instruction step(cpu, 0xFF, 0xA506F0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/move_cursor.asm:74 BEQ @UNKNOWN2
    case 0xC120FC: {
        Instruction step(cpu, 0xF0, 0x000006u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/move_cursor.asm:75 LDA @LOCAL03
    case 0xC120FE: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/move_cursor.asm:75 LDA @LOCAL03
    // Overlapping static entry reached from 0xC120FB.
    case 0xC120FF: {
        Instruction step(cpu, 0x14, 0x000022u, 2u, AddressMode::DirectPage);
        step.reset_tested_bits();
        return step.finish();
    }
    // src/text/move_cursor.asm:76 JSL PLAY_SOUND
    case 0xC12100: {
        Instruction step(cpu, 0x22, 0xC0ABBFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/move_cursor.asm:76 JSL PLAY_SOUND
    // Overlapping static entry reached from 0xC120FF.
    case 0xC12101: {
        Instruction step(cpu, 0xBF, 0xA6C0ABu, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/move_cursor.asm:78 LDX @LOCAL02
    case 0xC12104: {
        Instruction step(cpu, 0xA6, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/move_cursor.asm:78 LDX @LOCAL02
    // Overlapping static entry reached from 0xC12101.
    case 0xC12105: {
        Instruction step(cpu, 0x12, 0x00008Au, 2u, AddressMode::DirectPageIndirect);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/move_cursor.asm:79 TXA
    case 0xC12106: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/move_cursor.asm:80 END_C_FUNCTION
    case 0xC12107: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/text/move_cursor.asm:80 END_C_FUNCTION
    case 0xC12108: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
