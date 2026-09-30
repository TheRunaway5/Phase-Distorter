// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/unknown/C4/C44DCA.asm
bool resume_unresolved_c4_c44dca(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C44DCA.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC44DCA: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C44DCA.asm:9 END_STACK_VARS
    case 0xC44DCC: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C44DCA.asm:9 END_STACK_VARS
    case 0xC44DCD: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C44DCA.asm:9 END_STACK_VARS
    case 0xC44DCE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EAu : 0x00FFEAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C44DCA.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC44DCE.
    case 0xC44DD0: {
        Instruction step(cpu, 0xFF, 0x52A95Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C44DCA.asm:9 END_STACK_VARS
    case 0xC44DD1: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/unknown/C4/C44DCA.asm:10 LDA #.LOWORD(TEXT_RENDER_STATE)
    case 0xC44DD2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000052u : 0x009652u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C44DCA.asm:10 LDA #.LOWORD(TEXT_RENDER_STATE)
    // Overlapping static entry reached from 0xC44DD2.
    case 0xC44DD4: {
        Instruction step(cpu, 0x96, 0x000085u, 2u, AddressMode::DirectPageIndexedY);
        step.store_x();
        return step.finish();
    }
    // src/unknown/C4/C44DCA.asm:11 STA @LOCAL03
    case 0xC44DD5: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C44DCA.asm:11 STA @LOCAL03
    // Overlapping static entry reached from 0xC44DD4.
    case 0xC44DD6: {
        Instruction step(cpu, 0x14, 0x0000ADu, 2u, AddressMode::DirectPage);
        step.reset_tested_bits();
        return step.finish();
    }
    // src/unknown/C4/C44DCA.asm:12 LDA VWF_X
    case 0xC44DD7: {
        Instruction step(cpu, 0xAD, 0x009E23u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C44DCA.asm:12 LDA VWF_X
    // Overlapping static entry reached from 0xC44DD6.
    case 0xC44DD8: {
        Instruction step(cpu, 0x23, 0x00009Eu, 2u, AddressMode::StackRelative);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C44DCA.asm:13 LSR
    case 0xC44DDA: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/unknown/C4/C44DCA.asm:14 LSR
    case 0xC44DDB: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/unknown/C4/C44DCA.asm:15 LSR
    case 0xC44DDC: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/unknown/C4/C44DCA.asm:16 STA @LOCAL02
    case 0xC44DDD: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C44DCA.asm:17 LDA (@LOCAL03) ;text_renderer_state::pixels_rendered
    case 0xC44DDF: {
        Instruction step(cpu, 0xB2, 0x000014u, 2u, AddressMode::DirectPageIndirect);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C44DCA.asm:18 LSR
    case 0xC44DE1: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/unknown/C4/C44DCA.asm:19 LSR
    case 0xC44DE2: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/unknown/C4/C44DCA.asm:20 LSR
    case 0xC44DE3: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/unknown/C4/C44DCA.asm:21 STA @VIRTUAL02
    case 0xC44DE4: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C44DCA.asm:22 LDY #text_renderer_state::upper_vram_position
    case 0xC44DE6: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C4/C44DCA.asm:22 LDY #text_renderer_state::upper_vram_position
    // Overlapping static entry reached from 0xC44DE6.
    case 0xC44DE8: {
        Instruction step(cpu, 0x00, 0x0000B1u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C4/C44DCA.asm:23 LDA (@LOCAL03),Y
    case 0xC44DE9: {
        Instruction step(cpu, 0xB1, 0x000014u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C44DCA.asm:24 STA @LOCAL01
    case 0xC44DEB: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C44DCA.asm:25 BEQ @UNKNOWN0
    case 0xC44DED: {
        Instruction step(cpu, 0xF0, 0x000010u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/unknown/C4/C44DCA.asm:26 LDY #text_renderer_state::lower_vram_position
    case 0xC44DEF: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C4/C44DCA.asm:26 LDY #text_renderer_state::lower_vram_position
    // Overlapping static entry reached from 0xC44DEF.
    case 0xC44DF1: {
        Instruction step(cpu, 0x00, 0x0000B1u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C4/C44DCA.asm:27 LDA (@LOCAL03),Y
    case 0xC44DF2: {
        Instruction step(cpu, 0xB1, 0x000014u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C44DCA.asm:28 TAY
    case 0xC44DF4: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/unknown/C4/C44DCA.asm:29 LDA @LOCAL01
    case 0xC44DF5: {
        Instruction step(cpu, 0xA5, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C44DCA.asm:30 TAX
    case 0xC44DF7: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C4/C44DCA.asm:31 LDA @VIRTUAL02
    case 0xC44DF8: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C44DCA.asm:32 JSR UNKNOWN_C4002F
    case 0xC44DFA: {
        Instruction step(cpu, 0x20, 0x00002Fu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/unknown/C4/C44DCA.asm:33 BRA @UNKNOWN3
    case 0xC44DFD: {
        Instruction step(cpu, 0x80, 0x000038u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/unknown/C4/C44DCA.asm:35 LDA @VIRTUAL02
    case 0xC44DFF: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C44DCA.asm:36 DEC
    case 0xC44E01: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/unknown/C4/C44DCA.asm:37 STA @VIRTUAL02
    case 0xC44E02: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C44DCA.asm:38 BRA @UNKNOWN3
    case 0xC44E04: {
        Instruction step(cpu, 0x80, 0x000031u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/unknown/C4/C44DCA.asm:40 JSR UNKNOWN_C40085
    case 0xC44E06: {
        Instruction step(cpu, 0x20, 0x000085u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/unknown/C4/C44DCA.asm:41 STA @LOCAL00
    case 0xC44E09: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C44DCA.asm:42 LDY #text_renderer_state::upper_vram_position
    case 0xC44E0B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C4/C44DCA.asm:42 LDY #text_renderer_state::upper_vram_position
    // Overlapping static entry reached from 0xC44E0B.
    case 0xC44E0D: {
        Instruction step(cpu, 0x00, 0x000091u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C4/C44DCA.asm:43 STA (@LOCAL03),Y
    case 0xC44E0E: {
        Instruction step(cpu, 0x91, 0x000014u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C44DCA.asm:44 JSR UNKNOWN_C40085
    case 0xC44E10: {
        Instruction step(cpu, 0x20, 0x000085u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/unknown/C4/C44DCA.asm:45 STA @VIRTUAL04
    case 0xC44E13: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C44DCA.asm:46 LDY #text_renderer_state::lower_vram_position
    case 0xC44E15: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C4/C44DCA.asm:46 LDY #text_renderer_state::lower_vram_position
    // Overlapping static entry reached from 0xC44E15.
    case 0xC44E17: {
        Instruction step(cpu, 0x00, 0x000091u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C4/C44DCA.asm:47 STA (@LOCAL03),Y
    case 0xC44E18: {
        Instruction step(cpu, 0x91, 0x000014u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C44DCA.asm:48 LDX @VIRTUAL02
    case 0xC44E1A: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C4/C44DCA.asm:49 INX
    case 0xC44E1C: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/unknown/C4/C44DCA.asm:50 CPX #52
    case 0xC44E1D: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000034u : 0x000034u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/unknown/C4/C44DCA.asm:50 CPX #52
    // Overlapping static entry reached from 0xC44E1D.
    case 0xC44E1F: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C4/C44DCA.asm:51 BNE @UNKNOWN2
    case 0xC44E20: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/unknown/C4/C44DCA.asm:52 LDX #0
    case 0xC44E22: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C4/C44DCA.asm:52 LDX #0
    // Overlapping static entry reached from 0xC44E22.
    case 0xC44E24: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C4/C44DCA.asm:54 STX @VIRTUAL02
    case 0xC44E25: {
        Instruction step(cpu, 0x86, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/unknown/C4/C44DCA.asm:55 LDY @VIRTUAL04
    case 0xC44E27: {
        Instruction step(cpu, 0xA4, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C4/C44DCA.asm:56 LDX @LOCAL00
    case 0xC44E29: {
        Instruction step(cpu, 0xA6, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C4/C44DCA.asm:57 LDA @VIRTUAL02
    case 0xC44E2B: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C44DCA.asm:58 JSR UNKNOWN_C4002F
    case 0xC44E2D: {
        Instruction step(cpu, 0x20, 0x00002Fu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/unknown/C4/C44DCA.asm:59 LDX @VIRTUAL04
    case 0xC44E30: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C4/C44DCA.asm:60 LDA @LOCAL00
    case 0xC44E32: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C44DCA.asm:61 JSR UNKNOWN_C44C8C
    case 0xC44E34: {
        Instruction step(cpu, 0x20, 0x004C8Cu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/unknown/C4/C44DCA.asm:63 LDA @VIRTUAL02
    case 0xC44E37: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C44DCA.asm:64 CMP @LOCAL02
    case 0xC44E39: {
        Instruction step(cpu, 0xC5, 0x000012u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C44DCA.asm:65 BNE @UNKNOWN1
    case 0xC44E3B: {
        Instruction step(cpu, 0xD0, 0x0000C9u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/unknown/C4/C44DCA.asm:66 LDA VWF_X
    case 0xC44E3D: {
        Instruction step(cpu, 0xAD, 0x009E23u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C44DCA.asm:67 STA (@LOCAL03)
    case 0xC44E40: {
        Instruction step(cpu, 0x92, 0x000014u, 2u, AddressMode::DirectPageIndirect);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C44DCA.asm:68 END_C_FUNCTION
    case 0xC44E42: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C44DCA.asm:68 END_C_FUNCTION
    case 0xC44E43: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
