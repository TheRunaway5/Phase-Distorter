// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/ending/try_rendering_photograph.asm
bool resume_ending_try_rendering_photograph(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/ending/try_rendering_photograph.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4F264: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/ending/try_rendering_photograph.asm:14 END_STACK_VARS
    case 0xC4F266: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/ending/try_rendering_photograph.asm:14 END_STACK_VARS
    case 0xC4F267: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/ending/try_rendering_photograph.asm:14 END_STACK_VARS
    case 0xC4F268: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/try_rendering_photograph.asm:14 END_STACK_VARS
    case 0xC4F269: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000E0u : 0x00FFE0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/try_rendering_photograph.asm:14 END_STACK_VARS
    // Overlapping static entry reached from 0xC4F269.
    case 0xC4F26B: {
        Instruction step(cpu, 0xFF, 0x85685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/ending/try_rendering_photograph.asm:14 END_STACK_VARS
    case 0xC4F26C: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/ending/try_rendering_photograph.asm:14 END_STACK_VARS
    case 0xC4F26D: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:15 STA @LOCAL06
    case 0xC4F26E: {
        Instruction step(cpu, 0x85, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:15 STA @LOCAL06
    // Overlapping static entry reached from 0xC4F26B.
    case 0xC4F26F: {
        Instruction step(cpu, 0x1E, 0x0000A2u, 3u, AddressMode::AbsoluteIndexedX);
        step.shift_left();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:16 LDX #0
    case 0xC4F270: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:16 LDX #0
    // Overlapping static entry reached from 0xC4F270.
    case 0xC4F272: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:17 STX @LOCAL05
    case 0xC4F273: {
        Instruction step(cpu, 0x86, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/try_rendering_photograph.asm:18 LOADPTR PHOTOGRAPHER_CFG_TABLE, @VIRTUAL0A
    case 0xC4F275: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00008Au : 0x002F8Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/try_rendering_photograph.asm:18 LOADPTR PHOTOGRAPHER_CFG_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC4F275.
    case 0xC4F277: {
        Instruction step(cpu, 0x2F, 0xA90A85u, 4u, AddressMode::Long);
        step.and_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/try_rendering_photograph.asm:18 LOADPTR PHOTOGRAPHER_CFG_TABLE, @VIRTUAL0A
    case 0xC4F278: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/try_rendering_photograph.asm:18 LOADPTR PHOTOGRAPHER_CFG_TABLE, @VIRTUAL0A
    case 0xC4F27A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E1u : 0x0000E1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/try_rendering_photograph.asm:18 LOADPTR PHOTOGRAPHER_CFG_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC4F277.
    case 0xC4F27B: {
        Instruction step(cpu, 0xE1, 0x000000u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/try_rendering_photograph.asm:18 LOADPTR PHOTOGRAPHER_CFG_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC4F27A.
    case 0xC4F27C: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/ending/try_rendering_photograph.asm:18 LOADPTR PHOTOGRAPHER_CFG_TABLE, @VIRTUAL0A
    case 0xC4F27D: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:19 LDA @LOCAL06
    case 0xC4F27F: {
        Instruction step(cpu, 0xA5, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:20 LDY #.SIZEOF(photographer_config_entry)
    case 0xC4F281: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00003Eu : 0x00003Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:20 LDY #.SIZEOF(photographer_config_entry)
    // Overlapping static entry reached from 0xC4F281.
    case 0xC4F283: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:21 JSL MULT168
    case 0xC4F284: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:22 CLC
    case 0xC4F288: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:23 ADC @VIRTUAL0A
    case 0xC4F289: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:24 STA @VIRTUAL0A
    case 0xC4F28B: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:25 STA @VIRTUAL06
    case 0xC4F28D: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:26 LDA @VIRTUAL0A+2
    case 0xC4F28F: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:27 STA @VIRTUAL06+2
    case 0xC4F291: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:28 LDA [@VIRTUAL06]
    case 0xC4F293: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:29 JSL GET_EVENT_FLAG
    case 0xC4F295: {
        Instruction step(cpu, 0x22, 0xC21628u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:30 CMP #0
    case 0xC4F299: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:30 CMP #0
    // Overlapping static entry reached from 0xC4F299.
    case 0xC4F29B: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/ending/try_rendering_photograph.asm:31 BEQL @RETURN
    case 0xC4F29C: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/ending/try_rendering_photograph.asm:31 BEQL @RETURN
    case 0xC4F29E: {
        Instruction step(cpu, 0x4C, 0x00F42Eu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:32 LDA #1
    case 0xC4F2A1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:32 LDA #1
    // Overlapping static entry reached from 0xC4F2A1.
    case 0xC4F2A3: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:33 STA PHOTOGRAPH_MAP_LOADING_MODE
    case 0xC4F2A4: {
        Instruction step(cpu, 0x8D, 0x00B4EFu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:34 LDA @LOCAL06
    case 0xC4F2A7: {
        Instruction step(cpu, 0xA5, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:35 STA CUR_PHOTO_DISPLAY
    case 0xC4F2A9: {
        Instruction step(cpu, 0x8D, 0x00B4F1u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:36 LDA ENEMY_SPAWNS_ENABLED
    case 0xC4F2AC: {
        Instruction step(cpu, 0xAD, 0x004A5Au, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:37 STA @VIRTUAL02
    case 0xC4F2AF: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:38 STZ ENEMY_SPAWNS_ENABLED
    case 0xC4F2B1: {
        Instruction step(cpu, 0x9C, 0x004A5Au, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:39 LDY #0
    case 0xC4F2B4: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:39 LDY #0
    // Overlapping static entry reached from 0xC4F2B4.
    case 0xC4F2B6: {
        Instruction step(cpu, 0x00, 0x0000A2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:40 LDX #$2000
    case 0xC4F2B7: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x002000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:40 LDX #$2000
    // Overlapping static entry reached from 0xC4F2B7.
    case 0xC4F2B9: {
        Instruction step(cpu, 0x20, 0x000980u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:41 BRA @UNKNOWN2
    case 0xC4F2BA: {
        Instruction step(cpu, 0x80, 0x000009u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:43 LDA #0
    case 0xC4F2BC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:43 LDA #0
    // Overlapping static entry reached from 0xC4F2BC.
    case 0xC4F2BE: {
        Instruction step(cpu, 0x00, 0x00009Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:44 STA __BSS_START__,X
    case 0xC4F2BF: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:45 INX
    case 0xC4F2C2: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:46 INX
    case 0xC4F2C3: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:47 INY
    case 0xC4F2C4: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:49 CPY #1024
    case 0xC4F2C5: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000000u : 0x000400u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:49 CPY #1024
    // Overlapping static entry reached from 0xC4F2C5.
    case 0xC4F2C7: {
        Instruction step(cpu, 0x04, 0x000090u, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:50 BCC @UNKNOWN1
    case 0xC4F2C8: {
        Instruction step(cpu, 0x90, 0x0000F2u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:50 BCC @UNKNOWN1
    // Overlapping static entry reached from 0xC4F2C7.
    case 0xC4F2C9: {
        Instruction step(cpu, 0xF2, 0x0000E2u, 2u, AddressMode::DirectPageIndirect);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:51 SEP #PROC_FLAGS::ACCUM8
    case 0xC4F2CA: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:51 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC4F2C9.
    case 0xC4F2CB: {
        Instruction step(cpu, 0x20, 0x00309Cu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:52 STZ PALETTE_UPLOAD_MODE
    case 0xC4F2CC: {
        Instruction step(cpu, 0x9C, 0x000030u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:52 STZ PALETTE_UPLOAD_MODE
    // Overlapping static entry reached from 0xC4F2CB.
    case 0xC4F2CE: {
        Instruction step(cpu, 0x00, 0x0000C2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:53 REP #PROC_FLAGS::ACCUM8
    case 0xC4F2CF: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/try_rendering_photograph.asm:54 LOADPTR UNKNOWN_E1E924+6, @LOCAL00
    case 0xC4F2D1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00002Au : 0x00E92Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/try_rendering_photograph.asm:54 LOADPTR UNKNOWN_E1E924+6, @LOCAL00
    // Overlapping static entry reached from 0xC4F2D1.
    case 0xC4F2D3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x000085u : 0x000E85u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/try_rendering_photograph.asm:54 LOADPTR UNKNOWN_E1E924+6, @LOCAL00
    case 0xC4F2D4: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/try_rendering_photograph.asm:54 LOADPTR UNKNOWN_E1E924+6, @LOCAL00
    // Overlapping static entry reached from 0xC4F2D3.
    case 0xC4F2D5: {
        Instruction step(cpu, 0x0E, 0x00E1A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/try_rendering_photograph.asm:54 LOADPTR UNKNOWN_E1E924+6, @LOCAL00
    case 0xC4F2D6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E1u : 0x0000E1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/try_rendering_photograph.asm:54 LOADPTR UNKNOWN_E1E924+6, @LOCAL00
    // Overlapping static entry reached from 0xC4F2D6.
    case 0xC4F2D8: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/ending/try_rendering_photograph.asm:54 LOADPTR UNKNOWN_E1E924+6, @LOCAL00
    case 0xC4F2D9: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:55 LDX #BPP4PALETTE_SIZE * 1
    case 0xC4F2DB: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:55 LDX #BPP4PALETTE_SIZE * 1
    // Overlapping static entry reached from 0xC4F2DB.
    case 0xC4F2DD: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:56 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 1
    case 0xC4F2DE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000020u : 0x000220u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:56 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 1
    // Overlapping static entry reached from 0xC4F2DE.
    case 0xC4F2E0: {
        Instruction step(cpu, 0x02, 0x000022u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:57 JSL MEMCPY16
    case 0xC4F2E1: {
        Instruction step(cpu, 0x22, 0xC08ED2u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:58 LDY #4
    case 0xC4F2E5: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:58 LDY #4
    // Overlapping static entry reached from 0xC4F2E5.
    case 0xC4F2E7: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:59 LDA [@VIRTUAL0A],Y
    case 0xC4F2E8: {
        Instruction step(cpu, 0xB7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:60 ASL
    case 0xC4F2EA: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:61 ASL
    case 0xC4F2EB: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:62 ASL
    case 0xC4F2EC: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:63 TAX
    case 0xC4F2ED: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:64 LDY #2
    case 0xC4F2EE: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:64 LDY #2
    // Overlapping static entry reached from 0xC4F2EE.
    case 0xC4F2F0: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:65 LDA [@VIRTUAL0A],Y
    case 0xC4F2F1: {
        Instruction step(cpu, 0xB7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:66 ASL
    case 0xC4F2F3: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:67 ASL
    case 0xC4F2F4: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:68 ASL
    case 0xC4F2F5: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:69 JSL LOAD_MAP_AT_POSITION
    case 0xC4F2F6: {
        Instruction step(cpu, 0x22, 0xC013F6u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:70 LDA @VIRTUAL02
    case 0xC4F2FA: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:71 STA ENEMY_SPAWNS_ENABLED
    case 0xC4F2FC: {
        Instruction step(cpu, 0x8D, 0x004A5Au, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:72 STZ BG2_Y_POS
    case 0xC4F2FF: {
        Instruction step(cpu, 0x9C, 0x000037u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:73 STZ BG2_X_POS
    case 0xC4F302: {
        Instruction step(cpu, 0x9C, 0x000035u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:74 STZ PHOTOGRAPH_MAP_LOADING_MODE
    case 0xC4F305: {
        Instruction step(cpu, 0x9C, 0x00B4EFu, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:75 STZ @LOCAL04
    case 0xC4F308: {
        Instruction step(cpu, 0x64, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:76 LDA #0
    case 0xC4F30A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:76 LDA #0
    // Overlapping static entry reached from 0xC4F30A.
    case 0xC4F30C: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:77 STA @VIRTUAL02
    case 0xC4F30D: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:78 BRA @UNKNOWN5
    case 0xC4F30F: {
        Instruction step(cpu, 0x80, 0x000076u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:80 LDA @VIRTUAL02
    case 0xC4F311: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:534 STA scratch
    // Macro caller: src/ending/try_rendering_photograph.asm:81 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC4F313: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:535 ASL
    // Macro caller: src/ending/try_rendering_photograph.asm:81 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC4F315: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:536 ADC scratch
    // Macro caller: src/ending/try_rendering_photograph.asm:81 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC4F316: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:537 ASL
    // Macro caller: src/ending/try_rendering_photograph.asm:81 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC4F318: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:82 STA @LOCAL03
    case 0xC4F319: {
        Instruction step(cpu, 0x85, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:83 CLC
    case 0xC4F31B: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:84 ADC #42
    case 0xC4F31C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00002Au : 0x00002Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:84 ADC #42
    // Overlapping static entry reached from 0xC4F31C.
    case 0xC4F31E: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/ending/try_rendering_photograph.asm:85 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC4F31F: {
        Instruction step(cpu, 0xA6, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/ending/try_rendering_photograph.asm:85 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC4F321: {
        Instruction step(cpu, 0x86, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/ending/try_rendering_photograph.asm:85 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC4F323: {
        Instruction step(cpu, 0xA6, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/ending/try_rendering_photograph.asm:85 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC4F325: {
        Instruction step(cpu, 0x86, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:86 CLC
    case 0xC4F327: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:87 ADC @VIRTUAL06
    case 0xC4F328: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:88 STA @VIRTUAL06
    case 0xC4F32A: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:89 STA @LOCAL02
    case 0xC4F32C: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:90 LDA @VIRTUAL06+2
    case 0xC4F32E: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:91 STA @LOCAL02+2
    case 0xC4F330: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:92 LDA [@VIRTUAL06]
    case 0xC4F332: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:93 BEQ @UNKNOWN4
    case 0xC4F334: {
        Instruction step(cpu, 0xF0, 0x00004Fu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:94 LDA @LOCAL04
    case 0xC4F336: {
        Instruction step(cpu, 0xA5, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:95 STA NEW_ENTITY_VAR0
    case 0xC4F338: {
        Instruction step(cpu, 0x8D, 0x000A38u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:96 INC @LOCAL04
    case 0xC4F33B: {
        Instruction step(cpu, 0xE6, 0x00001Au, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:97 LDA @LOCAL03
    case 0xC4F33D: {
        Instruction step(cpu, 0xA5, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:98 CLC
    case 0xC4F33F: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:99 ADC #photographer_config_entry::object_config + photographer_config_entry_object::tile_x
    case 0xC4F340: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000026u : 0x000026u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:99 ADC #photographer_config_entry::object_config + photographer_config_entry_object::tile_x
    // Overlapping static entry reached from 0xC4F340.
    case 0xC4F342: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/ending/try_rendering_photograph.asm:100 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC4F343: {
        Instruction step(cpu, 0xA6, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/ending/try_rendering_photograph.asm:100 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC4F345: {
        Instruction step(cpu, 0x86, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/ending/try_rendering_photograph.asm:100 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC4F347: {
        Instruction step(cpu, 0xA6, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/ending/try_rendering_photograph.asm:100 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC4F349: {
        Instruction step(cpu, 0x86, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:101 CLC
    case 0xC4F34B: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:102 ADC @VIRTUAL06
    case 0xC4F34C: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:103 STA @VIRTUAL06
    case 0xC4F34E: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:104 LDA [@VIRTUAL06]
    case 0xC4F350: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:105 ASL
    case 0xC4F352: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:106 ASL
    case 0xC4F353: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:107 ASL
    case 0xC4F354: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:108 STA @LOCAL00
    case 0xC4F355: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:109 LDA @LOCAL03
    case 0xC4F357: {
        Instruction step(cpu, 0xA5, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:110 CLC
    case 0xC4F359: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:111 ADC #photographer_config_entry::object_config + photographer_config_entry_object::tile_y
    case 0xC4F35A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000028u : 0x000028u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:111 ADC #photographer_config_entry::object_config + photographer_config_entry_object::tile_y
    // Overlapping static entry reached from 0xC4F35A.
    case 0xC4F35C: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/ending/try_rendering_photograph.asm:112 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC4F35D: {
        Instruction step(cpu, 0xA6, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/ending/try_rendering_photograph.asm:112 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC4F35F: {
        Instruction step(cpu, 0x86, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/ending/try_rendering_photograph.asm:112 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC4F361: {
        Instruction step(cpu, 0xA6, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/ending/try_rendering_photograph.asm:112 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC4F363: {
        Instruction step(cpu, 0x86, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:113 CLC
    case 0xC4F365: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:114 ADC @VIRTUAL06
    case 0xC4F366: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:115 STA @VIRTUAL06
    case 0xC4F368: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:116 LDA [@VIRTUAL06]
    case 0xC4F36A: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:117 ASL
    case 0xC4F36C: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:118 ASL
    case 0xC4F36D: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:119 ASL
    case 0xC4F36E: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:120 STA @LOCAL00+2
    case 0xC4F36F: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:121 LDY #.LOWORD(-1)
    case 0xC4F371: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:121 LDY #.LOWORD(-1)
    // Overlapping static entry reached from 0xC4F371.
    case 0xC4F373: {
        Instruction step(cpu, 0xFF, 0x031FA2u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:122 LDX #EVENT_SCRIPT::EVENT_799
    case 0xC4F374: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x00001Fu : 0x00031Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:122 LDX #EVENT_SCRIPT::EVENT_799
    // Overlapping static entry reached from 0xC4F374.
    case 0xC4F376: {
        Instruction step(cpu, 0x03, 0x0000A5u, 2u, AddressMode::StackRelative);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/try_rendering_photograph.asm:123 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC4F377: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/try_rendering_photograph.asm:123 MOVE_INT @LOCAL02, @VIRTUAL06
    // Overlapping static entry reached from 0xC4F376.
    case 0xC4F378: {
        Instruction step(cpu, 0x14, 0x000085u, 2u, AddressMode::DirectPage);
        step.reset_tested_bits();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/try_rendering_photograph.asm:123 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC4F379: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/try_rendering_photograph.asm:123 MOVE_INT @LOCAL02, @VIRTUAL06
    // Overlapping static entry reached from 0xC4F378.
    case 0xC4F37A: {
        Instruction step(cpu, 0x06, 0x0000A5u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/try_rendering_photograph.asm:123 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC4F37B: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/try_rendering_photograph.asm:123 MOVE_INT @LOCAL02, @VIRTUAL06
    // Overlapping static entry reached from 0xC4F37A.
    case 0xC4F37C: {
        Instruction step(cpu, 0x16, 0x000085u, 2u, AddressMode::DirectPageIndexedX);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/try_rendering_photograph.asm:123 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC4F37D: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/try_rendering_photograph.asm:123 MOVE_INT @LOCAL02, @VIRTUAL06
    // Overlapping static entry reached from 0xC4F37C.
    case 0xC4F37E: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:124 LDA [@VIRTUAL06]
    case 0xC4F37F: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:125 JSL CREATE_ENTITY
    case 0xC4F381: {
        Instruction step(cpu, 0x22, 0xC01E49u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:127 INC @VIRTUAL02
    case 0xC4F385: {
        Instruction step(cpu, 0xE6, 0x000002u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:129 LDA @VIRTUAL02
    case 0xC4F387: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:130 CMP #4
    case 0xC4F389: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:130 CMP #4
    // Overlapping static entry reached from 0xC4F389.
    case 0xC4F38B: {
        Instruction step(cpu, 0x00, 0x0000B0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:784 BCS :+
    // Macro caller: src/ending/try_rendering_photograph.asm:131 BCCL @UNKNOWN3
    case 0xC4F38C: {
        Instruction step(cpu, 0xB0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/ending/try_rendering_photograph.asm:131 BCCL @UNKNOWN3
    case 0xC4F38E: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:786 JMP dest
    // Macro caller: src/ending/try_rendering_photograph.asm:131 BCCL @UNKNOWN3
    case 0xC4F390: {
        Instruction step(cpu, 0x4C, 0x00F311u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:132 LDA #0
    case 0xC4F393: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:132 LDA #0
    // Overlapping static entry reached from 0xC4F393.
    case 0xC4F395: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:133 STA @VIRTUAL04
    case 0xC4F396: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:134 JMP @UNKNOWN9
    case 0xC4F398: {
        Instruction step(cpu, 0x4C, 0x00F41Du, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:136 LDA @LOCAL06
    case 0xC4F39B: {
        Instruction step(cpu, 0xA5, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:137 ASL
    case 0xC4F39D: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:138 ASL
    case 0xC4F39E: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:139 ASL
    case 0xC4F39F: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:140 CLC
    case 0xC4F3A0: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:148 ADC @VIRTUAL04
    case 0xC4F3A1: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:149 TAX
    case 0xC4F3A3: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:150 LDA GAME_STATE + game_state::saved_photo_states + photo_state::party,X
    case 0xC4F3A4: {
        Instruction step(cpu, 0xBD, 0x0098CBu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:152 AND #$00FF
    case 0xC4F3A7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:152 AND #$00FF
    // Overlapping static entry reached from 0xC4F3A7.
    case 0xC4F3A9: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:153 STA @VIRTUAL02
    case 0xC4F3AA: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:154 BEQ @UNKNOWN8
    case 0xC4F3AC: {
        Instruction step(cpu, 0xF0, 0x00006Du, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:155 LDA @VIRTUAL02
    case 0xC4F3AE: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:156 AND #$001F
    case 0xC4F3B0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x00001Fu : 0x00001Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:156 AND #$001F
    // Overlapping static entry reached from 0xC4F3B0.
    case 0xC4F3B2: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:157 CMP #18
    case 0xC4F3B3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000012u : 0x000012u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:157 CMP #18
    // Overlapping static entry reached from 0xC4F3B3.
    case 0xC4F3B5: {
        Instruction step(cpu, 0x00, 0x0000B0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:158 BCS @UNKNOWN8
    case 0xC4F3B6: {
        Instruction step(cpu, 0xB0, 0x000063u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:159 CMP #0
    case 0xC4F3B8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:159 CMP #0
    // Overlapping static entry reached from 0xC4F3B8.
    case 0xC4F3BA: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:160 BEQ @UNKNOWN8
    case 0xC4F3BB: {
        Instruction step(cpu, 0xF0, 0x00005Eu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:161 LDA @LOCAL04
    case 0xC4F3BD: {
        Instruction step(cpu, 0xA5, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:162 STA NEW_ENTITY_VAR0
    case 0xC4F3BF: {
        Instruction step(cpu, 0x8D, 0x000A38u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:163 INC @LOCAL04
    case 0xC4F3C2: {
        Instruction step(cpu, 0xE6, 0x00001Au, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:164 LDA @VIRTUAL04
    case 0xC4F3C4: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:165 ASL
    case 0xC4F3C6: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:166 ASL
    case 0xC4F3C7: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:167 TAX
    case 0xC4F3C8: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:168 STX @LOCAL05
    case 0xC4F3C9: {
        Instruction step(cpu, 0x86, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:169 LDA @VIRTUAL02
    case 0xC4F3CB: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:170 JSL UNKNOWN_C079EC
    case 0xC4F3CD: {
        Instruction step(cpu, 0x22, 0xC079ECu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:171 STA @LOCAL01
    case 0xC4F3D1: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:172 LDX @LOCAL05
    case 0xC4F3D3: {
        Instruction step(cpu, 0xA6, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:173 TXA
    case 0xC4F3D5: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:174 CLC
    case 0xC4F3D6: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:175 ADC #14
    case 0xC4F3D7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00000Eu : 0x00000Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:175 ADC #14
    // Overlapping static entry reached from 0xC4F3D7.
    case 0xC4F3D9: {
        Instruction step(cpu, 0x00, 0x0000A4u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1044 LDY src
    // Macro caller: src/ending/try_rendering_photograph.asm:176 MOVE_INTY @VIRTUAL0A, @VIRTUAL06
    case 0xC4F3DA: {
        Instruction step(cpu, 0xA4, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1045 STY dest
    // Macro caller: src/ending/try_rendering_photograph.asm:176 MOVE_INTY @VIRTUAL0A, @VIRTUAL06
    case 0xC4F3DC: {
        Instruction step(cpu, 0x84, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:1046 LDY src+2
    // Macro caller: src/ending/try_rendering_photograph.asm:176 MOVE_INTY @VIRTUAL0A, @VIRTUAL06
    case 0xC4F3DE: {
        Instruction step(cpu, 0xA4, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1047 STY dest+2
    // Macro caller: src/ending/try_rendering_photograph.asm:176 MOVE_INTY @VIRTUAL0A, @VIRTUAL06
    case 0xC4F3E0: {
        Instruction step(cpu, 0x84, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:177 CLC
    case 0xC4F3E2: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:178 ADC @VIRTUAL06
    case 0xC4F3E3: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:179 STA @VIRTUAL06
    case 0xC4F3E5: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:180 LDA [@VIRTUAL06]
    case 0xC4F3E7: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:181 ASL
    case 0xC4F3E9: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:182 ASL
    case 0xC4F3EA: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:183 ASL
    case 0xC4F3EB: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:184 STA @LOCAL00
    case 0xC4F3EC: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:185 TXA
    case 0xC4F3EE: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:186 CLC
    case 0xC4F3EF: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:187 ADC #16
    case 0xC4F3F0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:187 ADC #16
    // Overlapping static entry reached from 0xC4F3F0.
    case 0xC4F3F2: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/ending/try_rendering_photograph.asm:188 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC4F3F3: {
        Instruction step(cpu, 0xA6, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/ending/try_rendering_photograph.asm:188 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC4F3F5: {
        Instruction step(cpu, 0x86, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/ending/try_rendering_photograph.asm:188 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC4F3F7: {
        Instruction step(cpu, 0xA6, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/ending/try_rendering_photograph.asm:188 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC4F3F9: {
        Instruction step(cpu, 0x86, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:189 CLC
    case 0xC4F3FB: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:190 ADC @VIRTUAL06
    case 0xC4F3FC: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:191 STA @VIRTUAL06
    case 0xC4F3FE: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:192 LDA [@VIRTUAL06]
    case 0xC4F400: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:193 ASL
    case 0xC4F402: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:194 ASL
    case 0xC4F403: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:195 ASL
    case 0xC4F404: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:196 STA @LOCAL00+2
    case 0xC4F405: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:197 LDY #.LOWORD(-1)
    case 0xC4F407: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:197 LDY #.LOWORD(-1)
    // Overlapping static entry reached from 0xC4F407.
    case 0xC4F409: {
        Instruction step(cpu, 0xFF, 0x0320A2u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:198 LDX #EVENT_SCRIPT::EVENT_800
    case 0xC4F40A: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000020u : 0x000320u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:198 LDX #EVENT_SCRIPT::EVENT_800
    // Overlapping static entry reached from 0xC4F40A.
    case 0xC4F40C: {
        Instruction step(cpu, 0x03, 0x0000A5u, 2u, AddressMode::StackRelative);
        step.or_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:199 LDA @LOCAL01
    case 0xC4F40D: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:199 LDA @LOCAL01
    // Overlapping static entry reached from 0xC4F40C.
    case 0xC4F40E: {
        Instruction step(cpu, 0x12, 0x000022u, 2u, AddressMode::DirectPageIndirect);
        step.or_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:200 JSL CREATE_ENTITY
    case 0xC4F40F: {
        Instruction step(cpu, 0x22, 0xC01E49u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:200 JSL CREATE_ENTITY
    // Overlapping static entry reached from 0xC4F40E.
    case 0xC4F410: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x49, narrow ? 0x00001Eu : 0x00C01Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.xor_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:200 JSL CREATE_ENTITY
    // Overlapping static entry reached from 0xC4F410.
    case 0xC4F412: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000A8u : 0x00A6A8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:201 TAY
    case 0xC4F413: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:202 LDX @VIRTUAL02
    case 0xC4F414: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:202 LDX @VIRTUAL02
    // Overlapping static entry reached from 0xC4F412.
    case 0xC4F415: {
        Instruction step(cpu, 0x02, 0x000098u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:203 TYA
    case 0xC4F416: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:204 JSL UNKNOWN_C07A31
    case 0xC4F417: {
        Instruction step(cpu, 0x22, 0xC07A31u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:206 INC @VIRTUAL04
    case 0xC4F41B: {
        Instruction step(cpu, 0xE6, 0x000004u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:208 LDA @VIRTUAL04
    case 0xC4F41D: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:209 CMP #6
    case 0xC4F41F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:209 CMP #6
    // Overlapping static entry reached from 0xC4F41F.
    case 0xC4F421: {
        Instruction step(cpu, 0x00, 0x0000B0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:784 BCS :+
    // Macro caller: src/ending/try_rendering_photograph.asm:210 BCCL @UNKNOWN7
    case 0xC4F422: {
        Instruction step(cpu, 0xB0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/ending/try_rendering_photograph.asm:210 BCCL @UNKNOWN7
    case 0xC4F424: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:786 JMP dest
    // Macro caller: src/ending/try_rendering_photograph.asm:210 BCCL @UNKNOWN7
    case 0xC4F426: {
        Instruction step(cpu, 0x4C, 0x00F39Bu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:211 LDX #1
    case 0xC4F429: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:211 LDX #1
    // Overlapping static entry reached from 0xC4F429.
    case 0xC4F42B: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:212 STX @LOCAL05
    case 0xC4F42C: {
        Instruction step(cpu, 0x86, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:214 LDX @LOCAL05
    case 0xC4F42E: {
        Instruction step(cpu, 0xA6, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:215 TXA
    case 0xC4F430: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/ending/try_rendering_photograph.asm:216 END_C_FUNCTION
    case 0xC4F431: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/ending/try_rendering_photograph.asm:216 END_C_FUNCTION
    case 0xC4F432: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
