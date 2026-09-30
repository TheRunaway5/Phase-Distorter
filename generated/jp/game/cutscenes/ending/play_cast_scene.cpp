// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/ending/play_cast_scene.asm
bool resume_ending_play_cast_scene(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/ending/play_cast_scene.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4BF69: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/ending/play_cast_scene.asm:6 END_STACK_VARS
    case 0xC4BF6B: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/ending/play_cast_scene.asm:6 END_STACK_VARS
    case 0xC4BF6C: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/play_cast_scene.asm:6 END_STACK_VARS
    case 0xC4BF6D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000F0u : 0x00FFF0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/play_cast_scene.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC4BF6D.
    case 0xC4BF6F: {
        Instruction step(cpu, 0xFF, 0xB6225Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/ending/play_cast_scene.asm:6 END_STACK_VARS
    case 0xC4BF70: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:7 JSL LOAD_CAST_SCENE
    case 0xC4BF71: {
        Instruction step(cpu, 0x22, 0xC4B5B6u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:7 JSL LOAD_CAST_SCENE
    // Overlapping static entry reached from 0xC4BF6F.
    case 0xC4BF73: {
        Instruction step(cpu, 0xB5, 0x0000C4u, 2u, AddressMode::DirectPageIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:8 JSL OAM_CLEAR
    case 0xC4BF75: {
        Instruction step(cpu, 0x22, 0xC088A3u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:9 LDX #1
    case 0xC4BF79: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:9 LDX #1
    // Overlapping static entry reached from 0xC4BF79.
    case 0xC4BF7B: {
        Instruction step(cpu, 0x00, 0x00008Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:10 TXA
    case 0xC4BF7C: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:11 JSL FADE_IN
    case 0xC4BF7D: {
        Instruction step(cpu, 0x22, 0xC0885Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:12 LDY #0
    case 0xC4BF81: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:12 LDY #0
    // Overlapping static entry reached from 0xC4BF81.
    case 0xC4BF83: {
        Instruction step(cpu, 0x00, 0x0000BBu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:13 TYX
    case 0xC4BF84: {
        Instruction step(cpu, 0xBB, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_x();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:14 LDA #EVENT_SCRIPT::EVENT_801
    case 0xC4BF85: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00001Du : 0x00031Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:14 LDA #EVENT_SCRIPT::EVENT_801
    // Overlapping static entry reached from 0xC4BF85.
    case 0xC4BF87: {
        Instruction step(cpu, 0x03, 0x000022u, 2u, AddressMode::StackRelative);
        step.or_accumulator();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:15 JSL INIT_ENTITY_WIPE
    case 0xC4BF88: {
        Instruction step(cpu, 0x22, 0xC092D4u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:15 JSL INIT_ENTITY_WIPE
    // Overlapping static entry reached from 0xC4BF87.
    case 0xC4BF89: {
        Instruction step(cpu, 0xD4, 0x000092u, 2u, AddressMode::DirectPage);
        step.push_effective_indirect();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:15 JSL INIT_ENTITY_WIPE
    // Overlapping static entry reached from 0xC4BF89.
    case 0xC4BF8B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x00009Cu : 0x00399Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:16 STZ ACTIONSCRIPT_STATE
    case 0xC4BF8C: {
        Instruction step(cpu, 0x9C, 0x009939u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:16 STZ ACTIONSCRIPT_STATE
    // Overlapping static entry reached from 0xC4BF8B.
    case 0xC4BF8D: {
        Instruction step(cpu, 0x39, 0x008099u, 3u, AddressMode::AbsoluteIndexedY);
        step.and_accumulator();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:16 STZ ACTIONSCRIPT_STATE
    // Overlapping static entry reached from 0xC4BF8B.
    case 0xC4BF8E: {
        Instruction step(cpu, 0x99, 0x000880u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:17 BRA @UNKNOWN1
    case 0xC4BF8F: {
        Instruction step(cpu, 0x80, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:17 BRA @UNKNOWN1
    // Overlapping static entry reached from 0xC4BF8D.
    case 0xC4BF90: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:19 JSL UNKNOWN_C1004E
    case 0xC4BF91: {
        Instruction step(cpu, 0x22, 0xC100C4u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:20 JSL UNKNOWN_C2DB3F
    case 0xC4BF95: {
        Instruction step(cpu, 0x22, 0xC2DAB4u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:22 LDA ACTIONSCRIPT_STATE
    case 0xC4BF99: {
        Instruction step(cpu, 0xAD, 0x009939u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:23 BEQ @UNKNOWN0
    case 0xC4BF9C: {
        Instruction step(cpu, 0xF0, 0x0000F3u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:24 LDY #0
    case 0xC4BF9E: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:24 LDY #0
    // Overlapping static entry reached from 0xC4BF9E.
    case 0xC4BFA0: {
        Instruction step(cpu, 0x00, 0x0000A2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:25 LDX #1
    case 0xC4BFA1: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:25 LDX #1
    // Overlapping static entry reached from 0xC4BFA1.
    case 0xC4BFA3: {
        Instruction step(cpu, 0x00, 0x00008Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:26 TXA
    case 0xC4BFA4: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:27 JSL FADE_OUT_WITH_MOSAIC
    case 0xC4BFA5: {
        Instruction step(cpu, 0x22, 0xC0880Au, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:28 LDX #0
    case 0xC4BFA9: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:28 LDX #0
    // Overlapping static entry reached from 0xC4BFA9.
    case 0xC4BFAB: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:29 STX @LOCAL00
    case 0xC4BFAC: {
        Instruction step(cpu, 0x86, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:30 BRA @UNKNOWN4
    case 0xC4BFAE: {
        Instruction step(cpu, 0x80, 0x000017u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:32 TXA
    case 0xC4BFB0: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:33 ASL
    case 0xC4BFB1: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:34 TAX
    case 0xC4BFB2: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:35 LDA ENTITY_SCRIPT_TABLE,X
    case 0xC4BFB3: {
        Instruction step(cpu, 0xBD, 0x000A58u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:36 CMP #EVENT_SCRIPT::EVENT_801
    case 0xC4BFB6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00001Du : 0x00031Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:36 CMP #EVENT_SCRIPT::EVENT_801
    // Overlapping static entry reached from 0xC4BFB6.
    case 0xC4BFB8: {
        Instruction step(cpu, 0x03, 0x0000D0u, 2u, AddressMode::StackRelative);
        step.or_accumulator();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:37 BNE @UNKNOWN3
    case 0xC4BFB9: {
        Instruction step(cpu, 0xD0, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:37 BNE @UNKNOWN3
    // Overlapping static entry reached from 0xC4BFB8.
    case 0xC4BFBA: {
        Instruction step(cpu, 0x07, 0x0000A6u, 2u, AddressMode::DirectPageIndirectLong);
        step.or_accumulator();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:38 LDX @LOCAL00
    case 0xC4BFBB: {
        Instruction step(cpu, 0xA6, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:38 LDX @LOCAL00
    // Overlapping static entry reached from 0xC4BFBA.
    case 0xC4BFBC: {
        Instruction step(cpu, 0x0E, 0x00228Au, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:39 TXA
    case 0xC4BFBD: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:40 JSL UNKNOWN_C09C35
    case 0xC4BFBE: {
        Instruction step(cpu, 0x22, 0xC09C14u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:40 JSL UNKNOWN_C09C35
    // Overlapping static entry reached from 0xC4BFBC.
    case 0xC4BFBF: {
        Instruction step(cpu, 0x14, 0x00009Cu, 2u, AddressMode::DirectPage);
        step.reset_tested_bits();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:40 JSL UNKNOWN_C09C35
    // Overlapping static entry reached from 0xC4BFBF.
    case 0xC4BFC1: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000A6u : 0x000EA6u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:42 LDX @LOCAL00
    case 0xC4BFC2: {
        Instruction step(cpu, 0xA6, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:42 LDX @LOCAL00
    // Overlapping static entry reached from 0xC4BFC1.
    case 0xC4BFC3: {
        Instruction step(cpu, 0x0E, 0x0086E8u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:43 INX
    case 0xC4BFC4: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:44 STX @LOCAL00
    case 0xC4BFC5: {
        Instruction step(cpu, 0x86, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:44 STX @LOCAL00
    // Overlapping static entry reached from 0xC4BFC3.
    case 0xC4BFC6: {
        Instruction step(cpu, 0x0E, 0x001EE0u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:46 CPX #MAX_ENTITIES
    case 0xC4BFC7: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x00001Eu : 0x00001Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:46 CPX #MAX_ENTITIES
    // Overlapping static entry reached from 0xC4BFC7.
    case 0xC4BFC9: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:47 BCC @UNKNOWN2
    case 0xC4BFCA: {
        Instruction step(cpu, 0x90, 0x0000E4u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:48 LDA #23
    case 0xC4BFCC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000017u : 0x000017u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:48 LDA #23
    // Overlapping static entry reached from 0xC4BFCC.
    case 0xC4BFCE: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:49 STA ENTITY_ALLOCATION_MIN_SLOT
    case 0xC4BFCF: {
        Instruction step(cpu, 0x8D, 0x000A42u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:50 LDA #24
    case 0xC4BFD2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000018u : 0x000018u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:50 LDA #24
    // Overlapping static entry reached from 0xC4BFD2.
    case 0xC4BFD4: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:51 STA ENTITY_ALLOCATION_MAX_SLOT
    case 0xC4BFD5: {
        Instruction step(cpu, 0x8D, 0x000A44u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:52 LDY #0
    case 0xC4BFD8: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:52 LDY #0
    // Overlapping static entry reached from 0xC4BFD8.
    case 0xC4BFDA: {
        Instruction step(cpu, 0x00, 0x0000BBu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:53 TYX
    case 0xC4BFDB: {
        Instruction step(cpu, 0xBB, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_x();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:54 LDA #EVENT_SCRIPT::EVENT_001
    case 0xC4BFDC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:54 LDA #EVENT_SCRIPT::EVENT_001
    // Overlapping static entry reached from 0xC4BFDC.
    case 0xC4BFDE: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:55 JSL INIT_ENTITY
    case 0xC4BFDF: {
        Instruction step(cpu, 0x22, 0xC09300u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:56 JSL UNKNOWN_C02D29
    case 0xC4BFE3: {
        Instruction step(cpu, 0x22, 0xC02EFEu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:57 JSL UNKNOWN_C03A24
    case 0xC4BFE7: {
        Instruction step(cpu, 0x22, 0xC03C74u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:58 JSL UNKNOWN_C08726
    case 0xC4BFEB: {
        Instruction step(cpu, 0x22, 0xC0871Fu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:59 JSL UNDRAW_FLYOVER_TEXT
    case 0xC4BFEF: {
        Instruction step(cpu, 0x22, 0xC45CA2u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:60 SEP #PROC_FLAGS::ACCUM8
    case 0xC4BFF3: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:61 LDA #$17
    case 0xC4BFF5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000017u : 0x008D17u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:62 STA TM_MIRROR
    case 0xC4BFF7: {
        Instruction step(cpu, 0x8D, 0x00001Au, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:62 STA TM_MIRROR
    // Overlapping static entry reached from 0xC4BFF5.
    case 0xC4BFF8: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:62 STA TM_MIRROR
    // Overlapping static entry reached from 0xC4BFF8.
    case 0xC4BFF9: {
        Instruction step(cpu, 0x00, 0x0000C2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/play_cast_scene.asm:63 REP #PROC_FLAGS::ACCUM8
    case 0xC4BFFA: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/ending/play_cast_scene.asm:64 END_C_FUNCTION
    case 0xC4BFFC: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/ending/play_cast_scene.asm:64 END_C_FUNCTION
    case 0xC4BFFD: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
