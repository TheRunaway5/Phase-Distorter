// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/overworld/find_free_space_7E4682.asm
bool resume_overworld_find_free_space_7e4682(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/find_free_space_7E4682.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC01AB3: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/find_free_space_7E4682.asm:3 BEGIN_C_FUNCTION_FAR
    // Overlapping static entry reached from 0xC01AB1.
    case 0xC01AB4: {
        Instruction step(cpu, 0x31, 0x00000Bu, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.and_accumulator();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/find_free_space_7E4682.asm:9 END_STACK_VARS
    case 0xC01AB5: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/find_free_space_7E4682.asm:9 END_STACK_VARS
    case 0xC01AB6: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/find_free_space_7E4682.asm:9 END_STACK_VARS
    case 0xC01AB7: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/find_free_space_7E4682.asm:9 END_STACK_VARS
    case 0xC01AB8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EEu : 0x00FFEEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/find_free_space_7E4682.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC01AB8.
    case 0xC01ABA: {
        Instruction step(cpu, 0xFF, 0x85685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/find_free_space_7E4682.asm:9 END_STACK_VARS
    case 0xC01ABB: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/find_free_space_7E4682.asm:9 END_STACK_VARS
    case 0xC01ABC: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/overworld/find_free_space_7E4682.asm:10 STA @VIRTUAL02
    case 0xC01ABD: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/find_free_space_7E4682.asm:10 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC01ABA.
    case 0xC01ABE: {
        Instruction step(cpu, 0x02, 0x0000A2u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/overworld/find_free_space_7E4682.asm:11 LDX #0
    case 0xC01ABF: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/find_free_space_7E4682.asm:11 LDX #0
    // Overlapping static entry reached from 0xC01ABF.
    case 0xC01AC1: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/find_free_space_7E4682.asm:12 STX @LOCAL01
    case 0xC01AC2: {
        Instruction step(cpu, 0x86, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/find_free_space_7E4682.asm:13 LDA @VIRTUAL02
    case 0xC01AC4: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/find_free_space_7E4682.asm:14 STA UNREAD_7E4A6A
    case 0xC01AC6: {
        Instruction step(cpu, 0x8D, 0x004DF0u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/find_free_space_7E4682.asm:15 BRA @UNKNOWN1
    case 0xC01AC9: {
        Instruction step(cpu, 0x80, 0x000013u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/find_free_space_7E4682.asm:17 LDA OVERWORLD_SPRITEMAPS + spritemap::special_flags,X
    case 0xC01ACB: {
        Instruction step(cpu, 0xBD, 0x004A08u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/find_free_space_7E4682.asm:18 AND #$00FF
    case 0xC01ACE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/find_free_space_7E4682.asm:18 AND #$00FF
    // Overlapping static entry reached from 0xC01ACE.
    case 0xC01AD0: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/find_free_space_7E4682.asm:19 CMP #<-1
    case 0xC01AD1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/find_free_space_7E4682.asm:19 CMP #<-1
    // Overlapping static entry reached from 0xC01AD1.
    case 0xC01AD3: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/find_free_space_7E4682.asm:20 BEQ @UNKNOWN2
    case 0xC01AD4: {
        Instruction step(cpu, 0xF0, 0x000012u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/find_free_space_7E4682.asm:21 TXA
    case 0xC01AD6: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/overworld/find_free_space_7E4682.asm:22 CLC
    case 0xC01AD7: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/find_free_space_7E4682.asm:23 ADC #.SIZEOF(spritemap)
    case 0xC01AD8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000005u : 0x000005u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/find_free_space_7E4682.asm:23 ADC #.SIZEOF(spritemap)
    // Overlapping static entry reached from 0xC01AD8.
    case 0xC01ADA: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/find_free_space_7E4682.asm:24 TAX
    case 0xC01ADB: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/find_free_space_7E4682.asm:25 STX @LOCAL01
    case 0xC01ADC: {
        Instruction step(cpu, 0x86, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/find_free_space_7E4682.asm:27 CPX #$0380
    case 0xC01ADE: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000080u : 0x000380u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/overworld/find_free_space_7E4682.asm:27 CPX #$0380
    // Overlapping static entry reached from 0xC01ADE.
    case 0xC01AE0: {
        Instruction step(cpu, 0x03, 0x000090u, 2u, AddressMode::StackRelative);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/find_free_space_7E4682.asm:28 BCC @UNKNOWN0
    case 0xC01AE1: {
        Instruction step(cpu, 0x90, 0x0000E8u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/overworld/find_free_space_7E4682.asm:28 BCC @UNKNOWN0
    // Overlapping static entry reached from 0xC01AE0.
    case 0xC01AE2: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/overworld/find_free_space_7E4682.asm:29 LDA #.LOWORD(-255)
    case 0xC01AE3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x00FF01u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/find_free_space_7E4682.asm:29 LDA #.LOWORD(-255)
    // Overlapping static entry reached from 0xC01AE3.
    case 0xC01AE5: {
        Instruction step(cpu, 0xFF, 0x8A4180u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/find_free_space_7E4682.asm:30 BRA @UNKNOWN7
    case 0xC01AE6: {
        Instruction step(cpu, 0x80, 0x000041u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/find_free_space_7E4682.asm:32 TXA
    case 0xC01AE8: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/overworld/find_free_space_7E4682.asm:33 CLC
    case 0xC01AE9: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/find_free_space_7E4682.asm:34 ADC @VIRTUAL02
    case 0xC01AEA: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/find_free_space_7E4682.asm:35 CMP #$0380
    case 0xC01AEC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000080u : 0x000380u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/find_free_space_7E4682.asm:35 CMP #$0380
    // Overlapping static entry reached from 0xC01AEC.
    case 0xC01AEE: {
        Instruction step(cpu, 0x03, 0x0000B0u, 2u, AddressMode::StackRelative);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/find_free_space_7E4682.asm:36 BCS @UNKNOWN6
    case 0xC01AEF: {
        Instruction step(cpu, 0xB0, 0x000035u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/overworld/find_free_space_7E4682.asm:36 BCS @UNKNOWN6
    // Overlapping static entry reached from 0xC01AEE.
    case 0xC01AF0: {
        Instruction step(cpu, 0x35, 0x00008Au, 2u, AddressMode::DirectPageIndexedX);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/find_free_space_7E4682.asm:37 TXA
    case 0xC01AF1: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/overworld/find_free_space_7E4682.asm:38 STA @LOCAL00
    case 0xC01AF2: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/find_free_space_7E4682.asm:39 BRA @UNKNOWN5
    case 0xC01AF4: {
        Instruction step(cpu, 0x80, 0x00001Fu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/find_free_space_7E4682.asm:41 TAX
    case 0xC01AF6: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/find_free_space_7E4682.asm:42 LDA OVERWORLD_SPRITEMAPS + spritemap::special_flags,X
    case 0xC01AF7: {
        Instruction step(cpu, 0xBD, 0x004A08u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/find_free_space_7E4682.asm:43 AND #$00FF
    case 0xC01AFA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/find_free_space_7E4682.asm:43 AND #$00FF
    // Overlapping static entry reached from 0xC01AFA.
    case 0xC01AFC: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/find_free_space_7E4682.asm:44 CMP #<-1
    case 0xC01AFD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/find_free_space_7E4682.asm:44 CMP #<-1
    // Overlapping static entry reached from 0xC01AFD.
    case 0xC01AFF: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/find_free_space_7E4682.asm:45 BEQ @UNKNOWN4
    case 0xC01B00: {
        Instruction step(cpu, 0xF0, 0x00000Bu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/find_free_space_7E4682.asm:46 LDA @LOCAL00
    case 0xC01B02: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/find_free_space_7E4682.asm:47 CLC
    case 0xC01B04: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/find_free_space_7E4682.asm:48 ADC #.SIZEOF(spritemap)
    case 0xC01B05: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000005u : 0x000005u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/find_free_space_7E4682.asm:48 ADC #.SIZEOF(spritemap)
    // Overlapping static entry reached from 0xC01B05.
    case 0xC01B07: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/find_free_space_7E4682.asm:49 TAX
    case 0xC01B08: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/find_free_space_7E4682.asm:50 STX @LOCAL01
    case 0xC01B09: {
        Instruction step(cpu, 0x86, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/find_free_space_7E4682.asm:51 BRA @UNKNOWN1
    case 0xC01B0B: {
        Instruction step(cpu, 0x80, 0x0000D1u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/find_free_space_7E4682.asm:53 LDA @LOCAL00
    case 0xC01B0D: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/find_free_space_7E4682.asm:54 CLC
    case 0xC01B0F: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/find_free_space_7E4682.asm:55 ADC #.SIZEOF(spritemap)
    case 0xC01B10: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000005u : 0x000005u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/find_free_space_7E4682.asm:55 ADC #.SIZEOF(spritemap)
    // Overlapping static entry reached from 0xC01B10.
    case 0xC01B12: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/find_free_space_7E4682.asm:56 STA @LOCAL00
    case 0xC01B13: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/find_free_space_7E4682.asm:58 LDX @LOCAL01
    case 0xC01B15: {
        Instruction step(cpu, 0xA6, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/find_free_space_7E4682.asm:59 TXA
    case 0xC01B17: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/overworld/find_free_space_7E4682.asm:60 CLC
    case 0xC01B18: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/find_free_space_7E4682.asm:61 ADC @VIRTUAL02
    case 0xC01B19: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/find_free_space_7E4682.asm:62 STA @VIRTUAL04
    case 0xC01B1B: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/find_free_space_7E4682.asm:63 LDA @LOCAL00
    case 0xC01B1D: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/find_free_space_7E4682.asm:64 CMP @VIRTUAL04
    case 0xC01B1F: {
        Instruction step(cpu, 0xC5, 0x000004u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/find_free_space_7E4682.asm:65 BCC @UNKNOWN3
    case 0xC01B21: {
        Instruction step(cpu, 0x90, 0x0000D3u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/overworld/find_free_space_7E4682.asm:66 TXA
    case 0xC01B23: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/overworld/find_free_space_7E4682.asm:67 BRA @UNKNOWN7
    case 0xC01B24: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/find_free_space_7E4682.asm:69 LDA #.LOWORD(-254)
    case 0xC01B26: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x00FF02u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/find_free_space_7E4682.asm:69 LDA #.LOWORD(-254)
    // Overlapping static entry reached from 0xC01B26.
    case 0xC01B28: {
        Instruction step(cpu, 0xFF, 0xC26B2Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/find_free_space_7E4682.asm:71 END_C_FUNCTION
    case 0xC01B29: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/find_free_space_7E4682.asm:71 END_C_FUNCTION
    case 0xC01B2A: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
