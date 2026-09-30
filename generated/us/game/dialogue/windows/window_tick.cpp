// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/text/window_tick.asm
bool resume_text_window_tick(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/text/window_tick.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC12DD5: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/window_tick.asm:4 JSL RAND
    case 0xC12DD7: {
        Instruction step(cpu, 0x22, 0xC08E9Au, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/window_tick.asm:5 LDA EARLY_TICK_EXIT
    case 0xC12DDB: {
        Instruction step(cpu, 0xAD, 0x00968Cu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/window_tick.asm:6 AND #$00FF
    case 0xC12DDE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/window_tick.asm:6 AND #$00FF
    // Overlapping static entry reached from 0xC12DDE.
    case 0xC12DE0: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/window_tick.asm:7 BEQ @UNKNOWN0
    case 0xC12DE1: {
        Instruction step(cpu, 0xF0, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/window_tick.asm:8 SEP #PROC_FLAGS::ACCUM8
    case 0xC12DE3: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/window_tick.asm:9 STZ EARLY_TICK_EXIT
    case 0xC12DE5: {
        Instruction step(cpu, 0x9C, 0x00968Cu, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/text/window_tick.asm:10 BRA @UNKNOWN4
    case 0xC12DE8: {
        Instruction step(cpu, 0x80, 0x000055u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/window_tick.asm:13 LDA INSTANT_PRINTING
    case 0xC12DEA: {
        Instruction step(cpu, 0xAD, 0x009622u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/window_tick.asm:14 AND #$00FF
    case 0xC12DED: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/window_tick.asm:14 AND #$00FF
    // Overlapping static entry reached from 0xC12DED.
    case 0xC12DEF: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/window_tick.asm:15 BNE @UNKNOWN4
    case 0xC12DF0: {
        Instruction step(cpu, 0xD0, 0x00004Du, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/window_tick.asm:16 LDA REDRAW_ALL_WINDOWS
    case 0xC12DF2: {
        Instruction step(cpu, 0xAD, 0x009623u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/window_tick.asm:17 AND #$00FF
    case 0xC12DF5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/window_tick.asm:17 AND #$00FF
    // Overlapping static entry reached from 0xC12DF5.
    case 0xC12DF7: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/window_tick.asm:18 BNE @UNKNOWN1
    case 0xC12DF8: {
        Instruction step(cpu, 0xD0, 0x000011u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/window_tick.asm:19 LDA WINDOW_HEAD
    case 0xC12DFA: {
        Instruction step(cpu, 0xAD, 0x0088E0u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/window_tick.asm:20 CMP #$FFFF
    case 0xC12DFD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/window_tick.asm:20 CMP #$FFFF
    // Overlapping static entry reached from 0xC12DFD.
    case 0xC12DFF: {
        Instruction step(cpu, 0xFF, 0xAD12F0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/window_tick.asm:21 BEQ @UNKNOWN2
    case 0xC12E00: {
        Instruction step(cpu, 0xF0, 0x000012u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/window_tick.asm:22 LDA WINDOW_TAIL
    case 0xC12E02: {
        Instruction step(cpu, 0xAD, 0x0088E2u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/window_tick.asm:22 LDA WINDOW_TAIL
    // Overlapping static entry reached from 0xC12DFF.
    case 0xC12E03: {
        Instruction step(cpu, 0xE2, 0x000088u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/window_tick.asm:23 JSL UNKNOWN_C107AF
    case 0xC12E05: {
        Instruction step(cpu, 0x22, 0xC107AFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/window_tick.asm:24 BRA @UNKNOWN2
    case 0xC12E09: {
        Instruction step(cpu, 0x80, 0x000009u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/window_tick.asm:26 JSL UNKNOWN_C2087C
    case 0xC12E0B: {
        Instruction step(cpu, 0x22, 0xC2087Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/window_tick.asm:27 SEP #PROC_FLAGS::ACCUM8
    case 0xC12E0F: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/window_tick.asm:28 STZ REDRAW_ALL_WINDOWS
    case 0xC12E11: {
        Instruction step(cpu, 0x9C, 0x009623u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/text/window_tick.asm:30 JSL HP_PP_ROLLER
    case 0xC12E14: {
        Instruction step(cpu, 0x22, 0xC2109Fu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/window_tick.asm:31 SEP #PROC_FLAGS::ACCUM8
    case 0xC12E18: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/window_tick.asm:32 LDA #$0001
    case 0xC12E1A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x008D01u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/window_tick.asm:33 STA UPLOAD_HPPP_METER_TILES
    case 0xC12E1C: {
        Instruction step(cpu, 0x8D, 0x009624u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/window_tick.asm:33 STA UPLOAD_HPPP_METER_TILES
    // Overlapping static entry reached from 0xC12E1A.
    case 0xC12E1D: {
        Instruction step(cpu, 0x24, 0x000096u, 2u, AddressMode::DirectPage);
        step.test_bits();
        return step.finish();
    }
    // src/text/window_tick.asm:34 JSL UPDATE_HPPP_METER_TILES
    case 0xC12E1F: {
        Instruction step(cpu, 0x22, 0xC213ACu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/window_tick.asm:35 LDA DISABLED_TRANSITIONS
    case 0xC12E23: {
        Instruction step(cpu, 0xAD, 0x00B4B6u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/window_tick.asm:36 BNE @UNKNOWN3
    case 0xC12E26: {
        Instruction step(cpu, 0xD0, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/window_tick.asm:37 JSR UNKNOWN_C1FF2C
    case 0xC12E28: {
        Instruction step(cpu, 0x20, 0x00FF2Cu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/window_tick.asm:38 CMP #$0000
    case 0xC12E2B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/window_tick.asm:39 BRK
    case 0xC12E2D: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/window_tick.asm:40 BEQ @UNKNOWN3
    case 0xC12E2E: {
        Instruction step(cpu, 0xF0, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/window_tick.asm:41 JSL UNKNOWN_C47F87
    case 0xC12E30: {
        Instruction step(cpu, 0x22, 0xC47F87u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/window_tick.asm:43 STZ HPPP_METER_AREA_NEEDS_UPDATE
    case 0xC12E34: {
        Instruction step(cpu, 0x9C, 0x009649u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/text/window_tick.asm:44 JSL UNKNOWN_C2038B
    case 0xC12E37: {
        Instruction step(cpu, 0x22, 0xC2038Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/window_tick.asm:45 JSL UNKNOWN_C1004E
    case 0xC12E3B: {
        Instruction step(cpu, 0x22, 0xC1004Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/window_tick.asm:47 REP #PROC_FLAGS::ACCUM8
    case 0xC12E3F: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/window_tick.asm:48 RTL
    case 0xC12E41: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
