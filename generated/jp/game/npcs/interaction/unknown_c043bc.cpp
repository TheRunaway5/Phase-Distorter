// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/unknown/C0/C043BC.asm
bool resume_unresolved_c0_c043bc(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C043BC.asm:3 BEGIN_C_FUNCTION
    case 0xC04643: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C043BC.asm:8 END_STACK_VARS
    case 0xC04645: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C043BC.asm:8 END_STACK_VARS
    case 0xC04646: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C043BC.asm:8 END_STACK_VARS
    case 0xC04647: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EEu : 0x00FFEEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C043BC.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC04647.
    case 0xC04649: {
        Instruction step(cpu, 0xFF, 0x30AD5Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C043BC.asm:8 END_STACK_VARS
    case 0xC0464A: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:9 LDA GAME_STATE+game_state::leader_direction
    case 0xC0464B: {
        Instruction step(cpu, 0xAD, 0x009B30u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:9 LDA GAME_STATE+game_state::leader_direction
    // Overlapping static entry reached from 0xC04649.
    case 0xC0464D: {
        Instruction step(cpu, 0x9B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_y();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:10 AND #$FFFE
    case 0xC0464E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FEu : 0x00FFFEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:10 AND #$FFFE
    // Overlapping static entry reached from 0xC0464E.
    case 0xC04650: {
        Instruction step(cpu, 0xFF, 0x1084A8u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:11 TAY
    case 0xC04651: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:12 STY @LOCAL01
    case 0xC04652: {
        Instruction step(cpu, 0x84, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:13 TYX
    case 0xC04654: {
        Instruction step(cpu, 0xBB, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_x();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:14 STX @LOCAL00
    case 0xC04655: {
        Instruction step(cpu, 0x86, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:15 TXA
    case 0xC04657: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:16 JSR UNKNOWN_C042EF
    case 0xC04658: {
        Instruction step(cpu, 0x20, 0x004576u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:17 CMP #.LOWORD(-1)
    case 0xC0465B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:17 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC0465B.
    case 0xC0465D: {
        Instruction step(cpu, 0xFF, 0xC90AF0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:18 BEQ @UNKNOWN0
    case 0xC0465E: {
        Instruction step(cpu, 0xF0, 0x00000Au, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:19 CMP #0
    case 0xC04660: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:19 CMP #0
    // Overlapping static entry reached from 0xC0465D.
    case 0xC04661: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:19 CMP #0
    // Overlapping static entry reached from 0xC04660.
    case 0xC04662: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:20 BEQ @UNKNOWN0
    case 0xC04663: {
        Instruction step(cpu, 0xF0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:21 LDX @LOCAL00
    case 0xC04665: {
        Instruction step(cpu, 0xA6, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:22 TXA
    case 0xC04667: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:23 BRA @UNKNOWN4
    case 0xC04668: {
        Instruction step(cpu, 0x80, 0x00006Du, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:25 LDX @LOCAL00
    case 0xC0466A: {
        Instruction step(cpu, 0xA6, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:26 TXA
    case 0xC0466C: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:27 INC
    case 0xC0466D: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:28 INC
    case 0xC0466E: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:29 AND #$0007
    case 0xC0466F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000007u : 0x000007u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:29 AND #$0007
    // Overlapping static entry reached from 0xC0466F.
    case 0xC04671: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:30 TAX
    case 0xC04672: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:31 STX @LOCAL00
    case 0xC04673: {
        Instruction step(cpu, 0x86, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:32 STX GAME_STATE+game_state::leader_direction
    case 0xC04675: {
        Instruction step(cpu, 0x8E, 0x009B30u, 3u, AddressMode::Absolute);
        step.store_x();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:33 TXA
    case 0xC04678: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:34 JSR UNKNOWN_C042EF
    case 0xC04679: {
        Instruction step(cpu, 0x20, 0x004576u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:35 CMP #.LOWORD(-1)
    case 0xC0467C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:35 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC0467C.
    case 0xC0467E: {
        Instruction step(cpu, 0xFF, 0xC90AF0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:36 BEQ @UNKNOWN1
    case 0xC0467F: {
        Instruction step(cpu, 0xF0, 0x00000Au, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:37 CMP #0
    case 0xC04681: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:37 CMP #0
    // Overlapping static entry reached from 0xC0467E.
    case 0xC04682: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:37 CMP #0
    // Overlapping static entry reached from 0xC04681.
    case 0xC04683: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:38 BEQ @UNKNOWN1
    case 0xC04684: {
        Instruction step(cpu, 0xF0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:39 LDX @LOCAL00
    case 0xC04686: {
        Instruction step(cpu, 0xA6, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:40 TXA
    case 0xC04688: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:41 BRA @UNKNOWN4
    case 0xC04689: {
        Instruction step(cpu, 0x80, 0x00004Cu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:43 LDX @LOCAL00
    case 0xC0468B: {
        Instruction step(cpu, 0xA6, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:44 TXA
    case 0xC0468D: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:45 INC
    case 0xC0468E: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:46 INC
    case 0xC0468F: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:47 INC
    case 0xC04690: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:48 INC
    case 0xC04691: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:49 AND #$0007
    case 0xC04692: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000007u : 0x000007u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:49 AND #$0007
    // Overlapping static entry reached from 0xC04692.
    case 0xC04694: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:50 TAX
    case 0xC04695: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:51 STX @LOCAL00
    case 0xC04696: {
        Instruction step(cpu, 0x86, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:52 STX GAME_STATE+game_state::leader_direction
    case 0xC04698: {
        Instruction step(cpu, 0x8E, 0x009B30u, 3u, AddressMode::Absolute);
        step.store_x();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:53 TXA
    case 0xC0469B: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:54 JSR UNKNOWN_C042EF
    case 0xC0469C: {
        Instruction step(cpu, 0x20, 0x004576u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:55 CMP #.LOWORD(-1)
    case 0xC0469F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:55 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC0469F.
    case 0xC046A1: {
        Instruction step(cpu, 0xFF, 0xC90AF0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:56 BEQ @UNKNOWN2
    case 0xC046A2: {
        Instruction step(cpu, 0xF0, 0x00000Au, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:57 CMP #0
    case 0xC046A4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:57 CMP #0
    // Overlapping static entry reached from 0xC046A1.
    case 0xC046A5: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:57 CMP #0
    // Overlapping static entry reached from 0xC046A4.
    case 0xC046A6: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:58 BEQ @UNKNOWN2
    case 0xC046A7: {
        Instruction step(cpu, 0xF0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:59 LDX @LOCAL00
    case 0xC046A9: {
        Instruction step(cpu, 0xA6, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:60 TXA
    case 0xC046AB: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:61 BRA @UNKNOWN4
    case 0xC046AC: {
        Instruction step(cpu, 0x80, 0x000029u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:63 LDX @LOCAL00
    case 0xC046AE: {
        Instruction step(cpu, 0xA6, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:64 TXA
    case 0xC046B0: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:65 DEC
    case 0xC046B1: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:66 DEC
    case 0xC046B2: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:67 AND #$0007
    case 0xC046B3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000007u : 0x000007u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:67 AND #$0007
    // Overlapping static entry reached from 0xC046B3.
    case 0xC046B5: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:68 TAX
    case 0xC046B6: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:69 STX @LOCAL00
    case 0xC046B7: {
        Instruction step(cpu, 0x86, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:70 STX GAME_STATE+game_state::leader_direction
    case 0xC046B9: {
        Instruction step(cpu, 0x8E, 0x009B30u, 3u, AddressMode::Absolute);
        step.store_x();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:71 TXA
    case 0xC046BC: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:72 JSR UNKNOWN_C042EF
    case 0xC046BD: {
        Instruction step(cpu, 0x20, 0x004576u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:73 CMP #.LOWORD(-1)
    case 0xC046C0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:73 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC046C0.
    case 0xC046C2: {
        Instruction step(cpu, 0xFF, 0xC90AF0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:74 BEQ @UNKNOWN3
    case 0xC046C3: {
        Instruction step(cpu, 0xF0, 0x00000Au, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:75 CMP #0
    case 0xC046C5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:75 CMP #0
    // Overlapping static entry reached from 0xC046C2.
    case 0xC046C6: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:75 CMP #0
    // Overlapping static entry reached from 0xC046C5.
    case 0xC046C7: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:76 BEQ @UNKNOWN3
    case 0xC046C8: {
        Instruction step(cpu, 0xF0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:77 LDX @LOCAL00
    case 0xC046CA: {
        Instruction step(cpu, 0xA6, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:78 TXA
    case 0xC046CC: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:79 BRA @UNKNOWN4
    case 0xC046CD: {
        Instruction step(cpu, 0x80, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:81 LDY @LOCAL01
    case 0xC046CF: {
        Instruction step(cpu, 0xA4, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:82 STY GAME_STATE+game_state::leader_direction
    case 0xC046D1: {
        Instruction step(cpu, 0x8C, 0x009B30u, 3u, AddressMode::Absolute);
        step.store_y();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:83 LDA #.LOWORD(-1)
    case 0xC046D4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:83 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC046D4.
    case 0xC046D6: {
        Instruction step(cpu, 0xFF, 0xC2602Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C043BC.asm:85 END_C_FUNCTION
    case 0xC046D7: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C0/C043BC.asm:85 END_C_FUNCTION
    case 0xC046D8: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
