// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/ending/play_cast_scene.asm
bool resume_ending_play_cast_scene(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/ending/play_cast_scene.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4ED0E: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/ending/play_cast_scene.asm:6 END_STACK_VARS
    case 0xC4ED10: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/ending/play_cast_scene.asm:6 END_STACK_VARS
    case 0xC4ED11: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/play_cast_scene.asm:6 END_STACK_VARS
    case 0xC4ED12: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000F0u : 0x00FFF0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/play_cast_scene.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC4ED12.
    case 0xC4ED14: {
        Instruction step(cpu, 0xFF, 0x69225Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/ending/play_cast_scene.asm:6 END_STACK_VARS
    case 0xC4ED15: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:7 JSL LOAD_CAST_SCENE
    case 0xC4ED16: {
        Instruction step(cpu, 0x22, 0xC4E369u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:7 JSL LOAD_CAST_SCENE
    // Overlapping static entry reached from 0xC4ED14.
    case 0xC4ED18: {
        Instruction step(cpu, 0xE3, 0x0000C4u, 2u, AddressMode::StackRelative);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:8 JSL OAM_CLEAR
    case 0xC4ED1A: {
        Instruction step(cpu, 0x22, 0xC088B1u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:9 LDX #1
    case 0xC4ED1E: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:9 LDX #1
    // Overlapping static entry reached from 0xC4ED1E.
    case 0xC4ED20: {
        Instruction step(cpu, 0x00, 0x00008Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:10 TXA
    case 0xC4ED21: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:11 JSL FADE_IN
    case 0xC4ED22: {
        Instruction step(cpu, 0x22, 0xC0886Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:12 LDY #0
    case 0xC4ED26: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:12 LDY #0
    // Overlapping static entry reached from 0xC4ED26.
    case 0xC4ED28: {
        Instruction step(cpu, 0x00, 0x0000BBu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:13 TYX
    case 0xC4ED29: {
        Instruction step(cpu, 0xBB, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_x();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:14 LDA #EVENT_SCRIPT::EVENT_801
    case 0xC4ED2A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000021u : 0x000321u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:14 LDA #EVENT_SCRIPT::EVENT_801
    // Overlapping static entry reached from 0xC4ED2A.
    case 0xC4ED2C: {
        Instruction step(cpu, 0x03, 0x000022u, 2u, AddressMode::StackRelative);
        step.or_accumulator();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:15 JSL INIT_ENTITY_WIPE
    case 0xC4ED2D: {
        Instruction step(cpu, 0x22, 0xC092F5u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:15 JSL INIT_ENTITY_WIPE
    // Overlapping static entry reached from 0xC4ED2C.
    case 0xC4ED2E: {
        Instruction step(cpu, 0xF5, 0x000092u, 2u, AddressMode::DirectPageIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:15 JSL INIT_ENTITY_WIPE
    // Overlapping static entry reached from 0xC4ED2E.
    case 0xC4ED30: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x00009Cu : 0x00419Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:16 STZ ACTIONSCRIPT_STATE
    case 0xC4ED31: {
        Instruction step(cpu, 0x9C, 0x009641u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:16 STZ ACTIONSCRIPT_STATE
    // Overlapping static entry reached from 0xC4ED30.
    case 0xC4ED32: {
        Instruction step(cpu, 0x41, 0x000096u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.xor_accumulator();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:16 STZ ACTIONSCRIPT_STATE
    // Overlapping static entry reached from 0xC4ED30.
    case 0xC4ED33: {
        Instruction step(cpu, 0x96, 0x000080u, 2u, AddressMode::DirectPageIndexedY);
        step.store_x();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:17 BRA @UNKNOWN1
    case 0xC4ED34: {
        Instruction step(cpu, 0x80, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:17 BRA @UNKNOWN1
    // Overlapping static entry reached from 0xC4ED33.
    case 0xC4ED35: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:19 JSL UNKNOWN_C1004E
    case 0xC4ED36: {
        Instruction step(cpu, 0x22, 0xC1004Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:20 JSL UNKNOWN_C2DB3F
    case 0xC4ED3A: {
        Instruction step(cpu, 0x22, 0xC2DB3Fu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:22 LDA ACTIONSCRIPT_STATE
    case 0xC4ED3E: {
        Instruction step(cpu, 0xAD, 0x009641u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:22 LDA ACTIONSCRIPT_STATE
    // Overlapping static entry reached from 0xC4EDB8.
    case 0xC4ED3F: {
        Instruction step(cpu, 0x41, 0x000096u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.xor_accumulator();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:23 BEQ @UNKNOWN0
    case 0xC4ED41: {
        Instruction step(cpu, 0xF0, 0x0000F3u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:24 LDY #0
    case 0xC4ED43: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:24 LDY #0
    // Overlapping static entry reached from 0xC4ED43.
    case 0xC4ED45: {
        Instruction step(cpu, 0x00, 0x0000A2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:25 LDX #1
    case 0xC4ED46: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:25 LDX #1
    // Overlapping static entry reached from 0xC4ED46.
    case 0xC4ED48: {
        Instruction step(cpu, 0x00, 0x00008Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:26 TXA
    case 0xC4ED49: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:27 JSL FADE_OUT_WITH_MOSAIC
    case 0xC4ED4A: {
        Instruction step(cpu, 0x22, 0xC08814u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:28 LDX #0
    case 0xC4ED4E: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:28 LDX #0
    // Overlapping static entry reached from 0xC4ED4E.
    case 0xC4ED50: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:29 STX @LOCAL00
    case 0xC4ED51: {
        Instruction step(cpu, 0x86, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:30 BRA @UNKNOWN4
    case 0xC4ED53: {
        Instruction step(cpu, 0x80, 0x000017u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:32 TXA
    case 0xC4ED55: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:33 ASL
    case 0xC4ED56: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:34 TAX
    case 0xC4ED57: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:35 LDA ENTITY_SCRIPT_TABLE,X
    case 0xC4ED58: {
        Instruction step(cpu, 0xBD, 0x000A62u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:36 CMP #EVENT_SCRIPT::EVENT_801
    case 0xC4ED5B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000021u : 0x000321u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:36 CMP #EVENT_SCRIPT::EVENT_801
    // Overlapping static entry reached from 0xC4ED5B.
    case 0xC4ED5D: {
        Instruction step(cpu, 0x03, 0x0000D0u, 2u, AddressMode::StackRelative);
        step.or_accumulator();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:37 BNE @UNKNOWN3
    case 0xC4ED5E: {
        Instruction step(cpu, 0xD0, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:37 BNE @UNKNOWN3
    // Overlapping static entry reached from 0xC4ED5D.
    case 0xC4ED5F: {
        Instruction step(cpu, 0x07, 0x0000A6u, 2u, AddressMode::DirectPageIndirectLong);
        step.or_accumulator();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:38 LDX @LOCAL00
    case 0xC4ED60: {
        Instruction step(cpu, 0xA6, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:38 LDX @LOCAL00
    // Overlapping static entry reached from 0xC4ED5F.
    case 0xC4ED61: {
        Instruction step(cpu, 0x0E, 0x00228Au, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:39 TXA
    case 0xC4ED62: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:40 JSL UNKNOWN_C09C35
    case 0xC4ED63: {
        Instruction step(cpu, 0x22, 0xC09C35u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:40 JSL UNKNOWN_C09C35
    // Overlapping static entry reached from 0xC4ED61.
    case 0xC4ED64: {
        Instruction step(cpu, 0x35, 0x00009Cu, 2u, AddressMode::DirectPageIndexedX);
        step.and_accumulator();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:40 JSL UNKNOWN_C09C35
    // Overlapping static entry reached from 0xC4ED64.
    case 0xC4ED66: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000A6u : 0x000EA6u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:42 LDX @LOCAL00
    case 0xC4ED67: {
        Instruction step(cpu, 0xA6, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:42 LDX @LOCAL00
    // Overlapping static entry reached from 0xC4ED66.
    case 0xC4ED68: {
        Instruction step(cpu, 0x0E, 0x0086E8u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:43 INX
    case 0xC4ED69: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:44 STX @LOCAL00
    case 0xC4ED6A: {
        Instruction step(cpu, 0x86, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:44 STX @LOCAL00
    // Overlapping static entry reached from 0xC4ED68.
    case 0xC4ED6B: {
        Instruction step(cpu, 0x0E, 0x001EE0u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:46 CPX #MAX_ENTITIES
    case 0xC4ED6C: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x00001Eu : 0x00001Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:46 CPX #MAX_ENTITIES
    // Overlapping static entry reached from 0xC4ED6C.
    case 0xC4ED6E: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:47 BCC @UNKNOWN2
    case 0xC4ED6F: {
        Instruction step(cpu, 0x90, 0x0000E4u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:48 LDA #23
    case 0xC4ED71: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000017u : 0x000017u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:48 LDA #23
    // Overlapping static entry reached from 0xC4ED71.
    case 0xC4ED73: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:49 STA ENTITY_ALLOCATION_MIN_SLOT
    case 0xC4ED74: {
        Instruction step(cpu, 0x8D, 0x000A4Cu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:50 LDA #24
    case 0xC4ED77: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000018u : 0x000018u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:50 LDA #24
    // Overlapping static entry reached from 0xC4ED77.
    case 0xC4ED79: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:51 STA ENTITY_ALLOCATION_MAX_SLOT
    case 0xC4ED7A: {
        Instruction step(cpu, 0x8D, 0x000A4Eu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:52 LDY #0
    case 0xC4ED7D: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:52 LDY #0
    // Overlapping static entry reached from 0xC4ED7D.
    case 0xC4ED7F: {
        Instruction step(cpu, 0x00, 0x0000BBu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:53 TYX
    case 0xC4ED80: {
        Instruction step(cpu, 0xBB, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_x();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:54 LDA #EVENT_SCRIPT::EVENT_001
    case 0xC4ED81: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:54 LDA #EVENT_SCRIPT::EVENT_001
    // Overlapping static entry reached from 0xC4ED81.
    case 0xC4ED83: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:55 JSL INIT_ENTITY
    case 0xC4ED84: {
        Instruction step(cpu, 0x22, 0xC09321u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:56 JSL UNKNOWN_C02D29
    case 0xC4ED88: {
        Instruction step(cpu, 0x22, 0xC02D29u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:57 JSL UNKNOWN_C03A24
    case 0xC4ED8C: {
        Instruction step(cpu, 0x22, 0xC03A24u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:58 JSL UNKNOWN_C08726
    case 0xC4ED90: {
        Instruction step(cpu, 0x22, 0xC08726u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:59 JSL UNDRAW_FLYOVER_TEXT
    case 0xC4ED94: {
        Instruction step(cpu, 0x22, 0xC4800Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:60 SEP #PROC_FLAGS::ACCUM8
    case 0xC4ED98: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:61 LDA #$17
    case 0xC4ED9A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000017u : 0x008D17u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:62 STA TM_MIRROR
    case 0xC4ED9C: {
        Instruction step(cpu, 0x8D, 0x00001Au, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:62 STA TM_MIRROR
    // Overlapping static entry reached from 0xC4ED9A.
    case 0xC4ED9D: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:62 STA TM_MIRROR
    // Overlapping static entry reached from 0xC4ED9D.
    case 0xC4ED9E: {
        Instruction step(cpu, 0x00, 0x0000C2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:63 REP #PROC_FLAGS::ACCUM8
    case 0xC4ED9F: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/ending/play_cast_scene.asm:64 END_C_FUNCTION
    case 0xC4EDA1: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/ending/play_cast_scene.asm:64 END_C_FUNCTION
    case 0xC4EDA2: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
