// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/unknown/C0/C043BC.asm
bool resume_unresolved_c0_c043bc(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C043BC.asm:3 BEGIN_C_FUNCTION
    case 0xC043BC: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C043BC.asm:8 END_STACK_VARS
    case 0xC043BE: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C043BC.asm:8 END_STACK_VARS
    case 0xC043BF: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C043BC.asm:8 END_STACK_VARS
    case 0xC043C0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EEu : 0x00FFEEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C043BC.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC043C0.
    case 0xC043C2: {
        Instruction step(cpu, 0xFF, 0x7FAD5Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C043BC.asm:8 END_STACK_VARS
    case 0xC043C3: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:9 LDA GAME_STATE+game_state::leader_direction
    case 0xC043C4: {
        Instruction step(cpu, 0xAD, 0x00987Fu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:9 LDA GAME_STATE+game_state::leader_direction
    // Overlapping static entry reached from 0xC043C2.
    case 0xC043C6: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:10 AND #$FFFE
    case 0xC043C7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FEu : 0x00FFFEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:10 AND #$FFFE
    // Overlapping static entry reached from 0xC043C7.
    case 0xC043C9: {
        Instruction step(cpu, 0xFF, 0x1084A8u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:11 TAY
    case 0xC043CA: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:12 STY @LOCAL01
    case 0xC043CB: {
        Instruction step(cpu, 0x84, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:13 TYX
    case 0xC043CD: {
        Instruction step(cpu, 0xBB, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_x();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:14 STX @LOCAL00
    case 0xC043CE: {
        Instruction step(cpu, 0x86, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:15 TXA
    case 0xC043D0: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:16 JSR UNKNOWN_C042EF
    case 0xC043D1: {
        Instruction step(cpu, 0x20, 0x0042EFu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:17 CMP #.LOWORD(-1)
    case 0xC043D4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:17 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC043D4.
    case 0xC043D6: {
        Instruction step(cpu, 0xFF, 0xC90AF0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:18 BEQ @UNKNOWN0
    case 0xC043D7: {
        Instruction step(cpu, 0xF0, 0x00000Au, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:19 CMP #0
    case 0xC043D9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:19 CMP #0
    // Overlapping static entry reached from 0xC043D6.
    case 0xC043DA: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:19 CMP #0
    // Overlapping static entry reached from 0xC043D9.
    case 0xC043DB: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:20 BEQ @UNKNOWN0
    case 0xC043DC: {
        Instruction step(cpu, 0xF0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:21 LDX @LOCAL00
    case 0xC043DE: {
        Instruction step(cpu, 0xA6, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:22 TXA
    case 0xC043E0: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:23 BRA @UNKNOWN4
    case 0xC043E1: {
        Instruction step(cpu, 0x80, 0x00006Du, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:25 LDX @LOCAL00
    case 0xC043E3: {
        Instruction step(cpu, 0xA6, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:26 TXA
    case 0xC043E5: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:27 INC
    case 0xC043E6: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:28 INC
    case 0xC043E7: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:29 AND #$0007
    case 0xC043E8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000007u : 0x000007u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:29 AND #$0007
    // Overlapping static entry reached from 0xC043E8.
    case 0xC043EA: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:30 TAX
    case 0xC043EB: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:31 STX @LOCAL00
    case 0xC043EC: {
        Instruction step(cpu, 0x86, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:32 STX GAME_STATE+game_state::leader_direction
    case 0xC043EE: {
        Instruction step(cpu, 0x8E, 0x00987Fu, 3u, AddressMode::Absolute);
        step.store_x();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:33 TXA
    case 0xC043F1: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:34 JSR UNKNOWN_C042EF
    case 0xC043F2: {
        Instruction step(cpu, 0x20, 0x0042EFu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:35 CMP #.LOWORD(-1)
    case 0xC043F5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:35 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC043F5.
    case 0xC043F7: {
        Instruction step(cpu, 0xFF, 0xC90AF0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:36 BEQ @UNKNOWN1
    case 0xC043F8: {
        Instruction step(cpu, 0xF0, 0x00000Au, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:37 CMP #0
    case 0xC043FA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:37 CMP #0
    // Overlapping static entry reached from 0xC043F7.
    case 0xC043FB: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:37 CMP #0
    // Overlapping static entry reached from 0xC043FA.
    case 0xC043FC: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:38 BEQ @UNKNOWN1
    case 0xC043FD: {
        Instruction step(cpu, 0xF0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:39 LDX @LOCAL00
    case 0xC043FF: {
        Instruction step(cpu, 0xA6, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:40 TXA
    case 0xC04401: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:41 BRA @UNKNOWN4
    case 0xC04402: {
        Instruction step(cpu, 0x80, 0x00004Cu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:43 LDX @LOCAL00
    case 0xC04404: {
        Instruction step(cpu, 0xA6, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:44 TXA
    case 0xC04406: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:45 INC
    case 0xC04407: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:46 INC
    case 0xC04408: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:47 INC
    case 0xC04409: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:48 INC
    case 0xC0440A: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:49 AND #$0007
    case 0xC0440B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000007u : 0x000007u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:49 AND #$0007
    // Overlapping static entry reached from 0xC0440B.
    case 0xC0440D: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:50 TAX
    case 0xC0440E: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:51 STX @LOCAL00
    case 0xC0440F: {
        Instruction step(cpu, 0x86, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:52 STX GAME_STATE+game_state::leader_direction
    case 0xC04411: {
        Instruction step(cpu, 0x8E, 0x00987Fu, 3u, AddressMode::Absolute);
        step.store_x();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:53 TXA
    case 0xC04414: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:54 JSR UNKNOWN_C042EF
    case 0xC04415: {
        Instruction step(cpu, 0x20, 0x0042EFu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:55 CMP #.LOWORD(-1)
    case 0xC04418: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:55 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC04418.
    case 0xC0441A: {
        Instruction step(cpu, 0xFF, 0xC90AF0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:56 BEQ @UNKNOWN2
    case 0xC0441B: {
        Instruction step(cpu, 0xF0, 0x00000Au, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:57 CMP #0
    case 0xC0441D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:57 CMP #0
    // Overlapping static entry reached from 0xC0441A.
    case 0xC0441E: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:57 CMP #0
    // Overlapping static entry reached from 0xC0441D.
    case 0xC0441F: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:58 BEQ @UNKNOWN2
    case 0xC04420: {
        Instruction step(cpu, 0xF0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:59 LDX @LOCAL00
    case 0xC04422: {
        Instruction step(cpu, 0xA6, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:60 TXA
    case 0xC04424: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:61 BRA @UNKNOWN4
    case 0xC04425: {
        Instruction step(cpu, 0x80, 0x000029u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:63 LDX @LOCAL00
    case 0xC04427: {
        Instruction step(cpu, 0xA6, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:64 TXA
    case 0xC04429: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:65 DEC
    case 0xC0442A: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:66 DEC
    case 0xC0442B: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:67 AND #$0007
    case 0xC0442C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000007u : 0x000007u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:67 AND #$0007
    // Overlapping static entry reached from 0xC0442C.
    case 0xC0442E: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:68 TAX
    case 0xC0442F: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:69 STX @LOCAL00
    case 0xC04430: {
        Instruction step(cpu, 0x86, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:70 STX GAME_STATE+game_state::leader_direction
    case 0xC04432: {
        Instruction step(cpu, 0x8E, 0x00987Fu, 3u, AddressMode::Absolute);
        step.store_x();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:71 TXA
    case 0xC04435: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:72 JSR UNKNOWN_C042EF
    case 0xC04436: {
        Instruction step(cpu, 0x20, 0x0042EFu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:73 CMP #.LOWORD(-1)
    case 0xC04439: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:73 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC04439.
    case 0xC0443B: {
        Instruction step(cpu, 0xFF, 0xC90AF0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:74 BEQ @UNKNOWN3
    case 0xC0443C: {
        Instruction step(cpu, 0xF0, 0x00000Au, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:75 CMP #0
    case 0xC0443E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:75 CMP #0
    // Overlapping static entry reached from 0xC0443B.
    case 0xC0443F: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:75 CMP #0
    // Overlapping static entry reached from 0xC0443E.
    case 0xC04440: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:76 BEQ @UNKNOWN3
    case 0xC04441: {
        Instruction step(cpu, 0xF0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:77 LDX @LOCAL00
    case 0xC04443: {
        Instruction step(cpu, 0xA6, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:78 TXA
    case 0xC04445: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:79 BRA @UNKNOWN4
    case 0xC04446: {
        Instruction step(cpu, 0x80, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:81 LDY @LOCAL01
    case 0xC04448: {
        Instruction step(cpu, 0xA4, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:82 STY GAME_STATE+game_state::leader_direction
    case 0xC0444A: {
        Instruction step(cpu, 0x8C, 0x00987Fu, 3u, AddressMode::Absolute);
        step.store_y();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:83 LDA #.LOWORD(-1)
    case 0xC0444D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C043BC.asm:83 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC0444D.
    case 0xC0444F: {
        Instruction step(cpu, 0xFF, 0xC2602Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C043BC.asm:85 END_C_FUNCTION
    case 0xC04450: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C0/C043BC.asm:85 END_C_FUNCTION
    case 0xC04451: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
