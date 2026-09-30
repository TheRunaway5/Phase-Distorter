// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/text/window_tick-jp.asm
bool resume_text_window_tick_jp(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/text/window_tick-jp.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC13502: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/window_tick-jp.asm:4 JSL RAND
    case 0xC13504: {
        Instruction step(cpu, 0x22, 0xC08E8Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/window_tick-jp.asm:6 LDA INSTANT_PRINTING
    case 0xC13508: {
        Instruction step(cpu, 0xAD, 0x00991Au, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/window_tick-jp.asm:7 AND #$00FF
    case 0xC1350B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/window_tick-jp.asm:7 AND #$00FF
    // Overlapping static entry reached from 0xC1350B.
    case 0xC1350D: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/window_tick-jp.asm:8 BNE @UNKNOWN4
    case 0xC1350E: {
        Instruction step(cpu, 0xD0, 0x00004Du, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/window_tick-jp.asm:9 LDA REDRAW_ALL_WINDOWS
    case 0xC13510: {
        Instruction step(cpu, 0xAD, 0x00991Bu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/window_tick-jp.asm:10 AND #$00FF
    case 0xC13513: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/window_tick-jp.asm:10 AND #$00FF
    // Overlapping static entry reached from 0xC13513.
    case 0xC13515: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/window_tick-jp.asm:11 BNE @UNKNOWN1
    case 0xC13516: {
        Instruction step(cpu, 0xD0, 0x000011u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/window_tick-jp.asm:12 LDA WINDOW_HEAD
    case 0xC13518: {
        Instruction step(cpu, 0xAD, 0x008C22u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/window_tick-jp.asm:13 CMP #$FFFF
    case 0xC1351B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/window_tick-jp.asm:13 CMP #$FFFF
    // Overlapping static entry reached from 0xC1351B.
    case 0xC1351D: {
        Instruction step(cpu, 0xFF, 0xAD12F0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/window_tick-jp.asm:14 BEQ @UNKNOWN2
    case 0xC1351E: {
        Instruction step(cpu, 0xF0, 0x000012u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/window_tick-jp.asm:15 LDA WINDOW_TAIL
    case 0xC13520: {
        Instruction step(cpu, 0xAD, 0x008C24u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/window_tick-jp.asm:15 LDA WINDOW_TAIL
    // Overlapping static entry reached from 0xC1351D.
    case 0xC13521: {
        Instruction step(cpu, 0x24, 0x00008Cu, 2u, AddressMode::DirectPage);
        step.test_bits();
        return step.finish();
    }
    // src/text/window_tick-jp.asm:16 JSL UNKNOWN_C107AF
    case 0xC13523: {
        Instruction step(cpu, 0x22, 0xC10996u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/window_tick-jp.asm:17 BRA @UNKNOWN2
    case 0xC13527: {
        Instruction step(cpu, 0x80, 0x000009u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/window_tick-jp.asm:19 JSL UNKNOWN_C2087C
    case 0xC13529: {
        Instruction step(cpu, 0x22, 0xC2081Du, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/window_tick-jp.asm:20 SEP #PROC_FLAGS::ACCUM8
    case 0xC1352D: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/window_tick-jp.asm:21 STZ REDRAW_ALL_WINDOWS
    case 0xC1352F: {
        Instruction step(cpu, 0x9C, 0x00991Bu, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/text/window_tick-jp.asm:23 JSL HP_PP_ROLLER
    case 0xC13532: {
        Instruction step(cpu, 0x22, 0xC20F3Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/window_tick-jp.asm:24 SEP #PROC_FLAGS::ACCUM8
    case 0xC13536: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/window_tick-jp.asm:25 LDA #$0001
    case 0xC13538: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x008D01u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/window_tick-jp.asm:26 STA UPLOAD_HPPP_METER_TILES
    case 0xC1353A: {
        Instruction step(cpu, 0x8D, 0x00991Cu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/window_tick-jp.asm:26 STA UPLOAD_HPPP_METER_TILES
    // Overlapping static entry reached from 0xC13538.
    case 0xC1353B: {
        Instruction step(cpu, 0x1C, 0x002299u, 3u, AddressMode::Absolute);
        step.reset_tested_bits();
        return step.finish();
    }
    // src/text/window_tick-jp.asm:27 JSL UPDATE_HPPP_METER_TILES
    case 0xC1353D: {
        Instruction step(cpu, 0x22, 0xC2124Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/window_tick-jp.asm:27 JSL UPDATE_HPPP_METER_TILES
    // Overlapping static entry reached from 0xC1353B.
    case 0xC1353E: {
        Instruction step(cpu, 0x4C, 0x00C212u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/window_tick-jp.asm:28 LDA DISABLED_TRANSITIONS
    case 0xC13541: {
        Instruction step(cpu, 0xAD, 0x00B68Au, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/window_tick-jp.asm:29 BNE @UNKNOWN3
    case 0xC13544: {
        Instruction step(cpu, 0xD0, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/window_tick-jp.asm:30 JSR UNKNOWN_C1FF2C
    case 0xC13546: {
        Instruction step(cpu, 0x20, 0x00FCABu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/window_tick-jp.asm:31 CMP #$0000
    case 0xC13549: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/window_tick-jp.asm:32 BRK
    case 0xC1354B: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/window_tick-jp.asm:33 BEQ @UNKNOWN3
    case 0xC1354C: {
        Instruction step(cpu, 0xF0, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/window_tick-jp.asm:34 JSL UNKNOWN_C47F87
    case 0xC1354E: {
        Instruction step(cpu, 0x22, 0xC45C1Au, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/window_tick-jp.asm:36 STZ HPPP_METER_AREA_NEEDS_UPDATE
    case 0xC13552: {
        Instruction step(cpu, 0x9C, 0x009941u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/text/window_tick-jp.asm:37 JSL UNKNOWN_C2038B
    case 0xC13555: {
        Instruction step(cpu, 0x22, 0xC2036Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/window_tick-jp.asm:38 JSL UNKNOWN_C1004E
    case 0xC13559: {
        Instruction step(cpu, 0x22, 0xC100C4u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/window_tick-jp.asm:40 RTL
    case 0xC1355D: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
