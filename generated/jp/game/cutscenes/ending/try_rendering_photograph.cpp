// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/ending/try_rendering_photograph.asm
bool resume_ending_try_rendering_photograph(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/ending/try_rendering_photograph.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4C2A0: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/ending/try_rendering_photograph.asm:14 END_STACK_VARS
    case 0xC4C2A2: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/ending/try_rendering_photograph.asm:14 END_STACK_VARS
    case 0xC4C2A3: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/ending/try_rendering_photograph.asm:14 END_STACK_VARS
    case 0xC4C2A4: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/try_rendering_photograph.asm:14 END_STACK_VARS
    case 0xC4C2A5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000E0u : 0x00FFE0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/try_rendering_photograph.asm:14 END_STACK_VARS
    // Overlapping static entry reached from 0xC4C2A5.
    case 0xC4C2A7: {
        Instruction step(cpu, 0xFF, 0x85685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/ending/try_rendering_photograph.asm:14 END_STACK_VARS
    case 0xC4C2A8: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/ending/try_rendering_photograph.asm:14 END_STACK_VARS
    case 0xC4C2A9: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:15 STA @LOCAL06
    case 0xC4C2AA: {
        Instruction step(cpu, 0x85, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:15 STA @LOCAL06
    // Overlapping static entry reached from 0xC4C2A7.
    case 0xC4C2AB: {
        Instruction step(cpu, 0x1E, 0x0000A2u, 3u, AddressMode::AbsoluteIndexedX);
        step.shift_left();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:16 LDX #0
    case 0xC4C2AC: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:16 LDX #0
    // Overlapping static entry reached from 0xC4C2AC.
    case 0xC4C2AE: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:17 STX @LOCAL05
    case 0xC4C2AF: {
        Instruction step(cpu, 0x86, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/try_rendering_photograph.asm:18 LOADPTR PHOTOGRAPHER_CFG_TABLE, @VIRTUAL0A
    case 0xC4C2B1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E1u : 0x0023E1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/try_rendering_photograph.asm:18 LOADPTR PHOTOGRAPHER_CFG_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC4C2B1.
    case 0xC4C2B3: {
        Instruction step(cpu, 0x23, 0x000085u, 2u, AddressMode::StackRelative);
        step.and_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/try_rendering_photograph.asm:18 LOADPTR PHOTOGRAPHER_CFG_TABLE, @VIRTUAL0A
    case 0xC4C2B4: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/try_rendering_photograph.asm:18 LOADPTR PHOTOGRAPHER_CFG_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC4C2B3.
    case 0xC4C2B5: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/try_rendering_photograph.asm:18 LOADPTR PHOTOGRAPHER_CFG_TABLE, @VIRTUAL0A
    case 0xC4C2B6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E1u : 0x0000E1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/try_rendering_photograph.asm:18 LOADPTR PHOTOGRAPHER_CFG_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC4C2B6.
    case 0xC4C2B8: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/ending/try_rendering_photograph.asm:18 LOADPTR PHOTOGRAPHER_CFG_TABLE, @VIRTUAL0A
    case 0xC4C2B9: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:19 LDA @LOCAL06
    case 0xC4C2BB: {
        Instruction step(cpu, 0xA5, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:20 LDY #.SIZEOF(photographer_config_entry)
    case 0xC4C2BD: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00003Eu : 0x00003Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:20 LDY #.SIZEOF(photographer_config_entry)
    // Overlapping static entry reached from 0xC4C2BD.
    case 0xC4C2BF: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:21 JSL MULT168
    case 0xC4C2C0: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:22 CLC
    case 0xC4C2C4: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:23 ADC @VIRTUAL0A
    case 0xC4C2C5: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:24 STA @VIRTUAL0A
    case 0xC4C2C7: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:25 STA @VIRTUAL06
    case 0xC4C2C9: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:26 LDA @VIRTUAL0A+2
    case 0xC4C2CB: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:27 STA @VIRTUAL06+2
    case 0xC4C2CD: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:28 LDA [@VIRTUAL06]
    case 0xC4C2CF: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:29 JSL GET_EVENT_FLAG
    case 0xC4C2D1: {
        Instruction step(cpu, 0x22, 0xC214D0u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:30 CMP #0
    case 0xC4C2D5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:30 CMP #0
    // Overlapping static entry reached from 0xC4C2D5.
    case 0xC4C2D7: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/ending/try_rendering_photograph.asm:31 BEQL @RETURN
    case 0xC4C2D8: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/ending/try_rendering_photograph.asm:31 BEQL @RETURN
    case 0xC4C2DA: {
        Instruction step(cpu, 0x4C, 0x00C46Eu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:32 LDA #1
    case 0xC4C2DD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:32 LDA #1
    // Overlapping static entry reached from 0xC4C2DD.
    case 0xC4C2DF: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:33 STA PHOTOGRAPH_MAP_LOADING_MODE
    case 0xC4C2E0: {
        Instruction step(cpu, 0x8D, 0x00B6B8u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:34 LDA @LOCAL06
    case 0xC4C2E3: {
        Instruction step(cpu, 0xA5, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:35 STA CUR_PHOTO_DISPLAY
    case 0xC4C2E5: {
        Instruction step(cpu, 0x8D, 0x00B6BAu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:36 LDA ENEMY_SPAWNS_ENABLED
    case 0xC4C2E8: {
        Instruction step(cpu, 0xAD, 0x004DE0u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:37 STA @VIRTUAL02
    case 0xC4C2EB: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:38 STZ ENEMY_SPAWNS_ENABLED
    case 0xC4C2ED: {
        Instruction step(cpu, 0x9C, 0x004DE0u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:39 LDY #0
    case 0xC4C2F0: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:39 LDY #0
    // Overlapping static entry reached from 0xC4C2F0.
    case 0xC4C2F2: {
        Instruction step(cpu, 0x00, 0x0000A2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:40 LDX #$2000
    case 0xC4C2F3: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x002000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:40 LDX #$2000
    // Overlapping static entry reached from 0xC4C2F3.
    case 0xC4C2F5: {
        Instruction step(cpu, 0x20, 0x000980u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:41 BRA @UNKNOWN2
    case 0xC4C2F6: {
        Instruction step(cpu, 0x80, 0x000009u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:43 LDA #0
    case 0xC4C2F8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:43 LDA #0
    // Overlapping static entry reached from 0xC4C2F8.
    case 0xC4C2FA: {
        Instruction step(cpu, 0x00, 0x00009Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:44 STA __BSS_START__,X
    case 0xC4C2FB: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:45 INX
    case 0xC4C2FE: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:46 INX
    case 0xC4C2FF: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:47 INY
    case 0xC4C300: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:49 CPY #1024
    case 0xC4C301: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000000u : 0x000400u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:49 CPY #1024
    // Overlapping static entry reached from 0xC4C301.
    case 0xC4C303: {
        Instruction step(cpu, 0x04, 0x000090u, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:50 BCC @UNKNOWN1
    case 0xC4C304: {
        Instruction step(cpu, 0x90, 0x0000F2u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:50 BCC @UNKNOWN1
    // Overlapping static entry reached from 0xC4C303.
    case 0xC4C305: {
        Instruction step(cpu, 0xF2, 0x0000E2u, 2u, AddressMode::DirectPageIndirect);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:51 SEP #PROC_FLAGS::ACCUM8
    case 0xC4C306: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:51 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC4C305.
    case 0xC4C307: {
        Instruction step(cpu, 0x20, 0x00309Cu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:52 STZ PALETTE_UPLOAD_MODE
    case 0xC4C308: {
        Instruction step(cpu, 0x9C, 0x000030u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:52 STZ PALETTE_UPLOAD_MODE
    // Overlapping static entry reached from 0xC4C307.
    case 0xC4C30A: {
        Instruction step(cpu, 0x00, 0x0000C2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:53 REP #PROC_FLAGS::ACCUM8
    case 0xC4C30B: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/try_rendering_photograph.asm:54 LOADPTR UNKNOWN_E1E924+6, @LOCAL00
    case 0xC4C30D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000BCu : 0x00D6BCu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/try_rendering_photograph.asm:54 LOADPTR UNKNOWN_E1E924+6, @LOCAL00
    // Overlapping static entry reached from 0xC4C30D.
    case 0xC4C30F: {
        Instruction step(cpu, 0xD6, 0x000085u, 2u, AddressMode::DirectPageIndexedX);
        step.decrement();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/try_rendering_photograph.asm:54 LOADPTR UNKNOWN_E1E924+6, @LOCAL00
    case 0xC4C310: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/try_rendering_photograph.asm:54 LOADPTR UNKNOWN_E1E924+6, @LOCAL00
    // Overlapping static entry reached from 0xC4C30F.
    case 0xC4C311: {
        Instruction step(cpu, 0x0E, 0x00E1A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/try_rendering_photograph.asm:54 LOADPTR UNKNOWN_E1E924+6, @LOCAL00
    case 0xC4C312: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E1u : 0x0000E1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/try_rendering_photograph.asm:54 LOADPTR UNKNOWN_E1E924+6, @LOCAL00
    // Overlapping static entry reached from 0xC4C312.
    case 0xC4C314: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/ending/try_rendering_photograph.asm:54 LOADPTR UNKNOWN_E1E924+6, @LOCAL00
    case 0xC4C315: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:55 LDX #BPP4PALETTE_SIZE * 1
    case 0xC4C317: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:55 LDX #BPP4PALETTE_SIZE * 1
    // Overlapping static entry reached from 0xC4C317.
    case 0xC4C319: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:56 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 1
    case 0xC4C31A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000020u : 0x000220u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:56 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 1
    // Overlapping static entry reached from 0xC4C31A.
    case 0xC4C31C: {
        Instruction step(cpu, 0x02, 0x000022u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:57 JSL MEMCPY16
    case 0xC4C31D: {
        Instruction step(cpu, 0x22, 0xC08EC3u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:58 LDY #4
    case 0xC4C321: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:58 LDY #4
    // Overlapping static entry reached from 0xC4C321.
    case 0xC4C323: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:59 LDA [@VIRTUAL0A],Y
    case 0xC4C324: {
        Instruction step(cpu, 0xB7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:60 ASL
    case 0xC4C326: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:61 ASL
    case 0xC4C327: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:62 ASL
    case 0xC4C328: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:63 TAX
    case 0xC4C329: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:64 LDY #2
    case 0xC4C32A: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:64 LDY #2
    // Overlapping static entry reached from 0xC4C32A.
    case 0xC4C32C: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:65 LDA [@VIRTUAL0A],Y
    case 0xC4C32D: {
        Instruction step(cpu, 0xB7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:66 ASL
    case 0xC4C32F: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:67 ASL
    case 0xC4C330: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:68 ASL
    case 0xC4C331: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:69 JSL LOAD_MAP_AT_POSITION
    case 0xC4C332: {
        Instruction step(cpu, 0x22, 0xC0140Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:70 LDA @VIRTUAL02
    case 0xC4C336: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:71 STA ENEMY_SPAWNS_ENABLED
    case 0xC4C338: {
        Instruction step(cpu, 0x8D, 0x004DE0u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:72 STZ BG2_Y_POS
    case 0xC4C33B: {
        Instruction step(cpu, 0x9C, 0x000037u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:73 STZ BG2_X_POS
    case 0xC4C33E: {
        Instruction step(cpu, 0x9C, 0x000035u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:74 STZ PHOTOGRAPH_MAP_LOADING_MODE
    case 0xC4C341: {
        Instruction step(cpu, 0x9C, 0x00B6B8u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:75 STZ @LOCAL04
    case 0xC4C344: {
        Instruction step(cpu, 0x64, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:76 LDA #0
    case 0xC4C346: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:76 LDA #0
    // Overlapping static entry reached from 0xC4C346.
    case 0xC4C348: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:77 STA @VIRTUAL02
    case 0xC4C349: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:78 BRA @UNKNOWN5
    case 0xC4C34B: {
        Instruction step(cpu, 0x80, 0x000076u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:80 LDA @VIRTUAL02
    case 0xC4C34D: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:534 STA scratch
    // Macro caller: src/ending/try_rendering_photograph.asm:81 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC4C34F: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:535 ASL
    // Macro caller: src/ending/try_rendering_photograph.asm:81 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC4C351: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:536 ADC scratch
    // Macro caller: src/ending/try_rendering_photograph.asm:81 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC4C352: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:537 ASL
    // Macro caller: src/ending/try_rendering_photograph.asm:81 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC4C354: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:82 STA @LOCAL03
    case 0xC4C355: {
        Instruction step(cpu, 0x85, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:83 CLC
    case 0xC4C357: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:84 ADC #42
    case 0xC4C358: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00002Au : 0x00002Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:84 ADC #42
    // Overlapping static entry reached from 0xC4C358.
    case 0xC4C35A: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/ending/try_rendering_photograph.asm:85 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC4C35B: {
        Instruction step(cpu, 0xA6, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/ending/try_rendering_photograph.asm:85 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC4C35D: {
        Instruction step(cpu, 0x86, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/ending/try_rendering_photograph.asm:85 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC4C35F: {
        Instruction step(cpu, 0xA6, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/ending/try_rendering_photograph.asm:85 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC4C361: {
        Instruction step(cpu, 0x86, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:86 CLC
    case 0xC4C363: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:87 ADC @VIRTUAL06
    case 0xC4C364: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:88 STA @VIRTUAL06
    case 0xC4C366: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:89 STA @LOCAL02
    case 0xC4C368: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:90 LDA @VIRTUAL06+2
    case 0xC4C36A: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:91 STA @LOCAL02+2
    case 0xC4C36C: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:92 LDA [@VIRTUAL06]
    case 0xC4C36E: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:93 BEQ @UNKNOWN4
    case 0xC4C370: {
        Instruction step(cpu, 0xF0, 0x00004Fu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:94 LDA @LOCAL04
    case 0xC4C372: {
        Instruction step(cpu, 0xA5, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:95 STA NEW_ENTITY_VAR0
    case 0xC4C374: {
        Instruction step(cpu, 0x8D, 0x000A2Eu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:96 INC @LOCAL04
    case 0xC4C377: {
        Instruction step(cpu, 0xE6, 0x00001Au, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:97 LDA @LOCAL03
    case 0xC4C379: {
        Instruction step(cpu, 0xA5, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:98 CLC
    case 0xC4C37B: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:99 ADC #photographer_config_entry::object_config + photographer_config_entry_object::tile_x
    case 0xC4C37C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000026u : 0x000026u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:99 ADC #photographer_config_entry::object_config + photographer_config_entry_object::tile_x
    // Overlapping static entry reached from 0xC4C37C.
    case 0xC4C37E: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/ending/try_rendering_photograph.asm:100 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC4C37F: {
        Instruction step(cpu, 0xA6, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/ending/try_rendering_photograph.asm:100 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC4C381: {
        Instruction step(cpu, 0x86, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/ending/try_rendering_photograph.asm:100 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC4C383: {
        Instruction step(cpu, 0xA6, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/ending/try_rendering_photograph.asm:100 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC4C385: {
        Instruction step(cpu, 0x86, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:101 CLC
    case 0xC4C387: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:102 ADC @VIRTUAL06
    case 0xC4C388: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:103 STA @VIRTUAL06
    case 0xC4C38A: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:104 LDA [@VIRTUAL06]
    case 0xC4C38C: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:105 ASL
    case 0xC4C38E: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:106 ASL
    case 0xC4C38F: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:107 ASL
    case 0xC4C390: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:108 STA @LOCAL00
    case 0xC4C391: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:109 LDA @LOCAL03
    case 0xC4C393: {
        Instruction step(cpu, 0xA5, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:110 CLC
    case 0xC4C395: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:111 ADC #photographer_config_entry::object_config + photographer_config_entry_object::tile_y
    case 0xC4C396: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000028u : 0x000028u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:111 ADC #photographer_config_entry::object_config + photographer_config_entry_object::tile_y
    // Overlapping static entry reached from 0xC4C396.
    case 0xC4C398: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/ending/try_rendering_photograph.asm:112 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC4C399: {
        Instruction step(cpu, 0xA6, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/ending/try_rendering_photograph.asm:112 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC4C39B: {
        Instruction step(cpu, 0x86, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/ending/try_rendering_photograph.asm:112 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC4C39D: {
        Instruction step(cpu, 0xA6, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/ending/try_rendering_photograph.asm:112 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC4C39F: {
        Instruction step(cpu, 0x86, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:113 CLC
    case 0xC4C3A1: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:114 ADC @VIRTUAL06
    case 0xC4C3A2: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:115 STA @VIRTUAL06
    case 0xC4C3A4: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:116 LDA [@VIRTUAL06]
    case 0xC4C3A6: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:117 ASL
    case 0xC4C3A8: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:118 ASL
    case 0xC4C3A9: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:119 ASL
    case 0xC4C3AA: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:120 STA @LOCAL00+2
    case 0xC4C3AB: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:121 LDY #.LOWORD(-1)
    case 0xC4C3AD: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:121 LDY #.LOWORD(-1)
    // Overlapping static entry reached from 0xC4C3AD.
    case 0xC4C3AF: {
        Instruction step(cpu, 0xFF, 0x031BA2u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:122 LDX #EVENT_SCRIPT::EVENT_799
    case 0xC4C3B0: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x00001Bu : 0x00031Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:122 LDX #EVENT_SCRIPT::EVENT_799
    // Overlapping static entry reached from 0xC4C3B0.
    case 0xC4C3B2: {
        Instruction step(cpu, 0x03, 0x0000A5u, 2u, AddressMode::StackRelative);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/try_rendering_photograph.asm:123 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC4C3B3: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/try_rendering_photograph.asm:123 MOVE_INT @LOCAL02, @VIRTUAL06
    // Overlapping static entry reached from 0xC4C3B2.
    case 0xC4C3B4: {
        Instruction step(cpu, 0x14, 0x000085u, 2u, AddressMode::DirectPage);
        step.reset_tested_bits();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/try_rendering_photograph.asm:123 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC4C3B5: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/try_rendering_photograph.asm:123 MOVE_INT @LOCAL02, @VIRTUAL06
    // Overlapping static entry reached from 0xC4C3B4.
    case 0xC4C3B6: {
        Instruction step(cpu, 0x06, 0x0000A5u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/try_rendering_photograph.asm:123 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC4C3B7: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/try_rendering_photograph.asm:123 MOVE_INT @LOCAL02, @VIRTUAL06
    // Overlapping static entry reached from 0xC4C3B6.
    case 0xC4C3B8: {
        Instruction step(cpu, 0x16, 0x000085u, 2u, AddressMode::DirectPageIndexedX);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/try_rendering_photograph.asm:123 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC4C3B9: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/try_rendering_photograph.asm:123 MOVE_INT @LOCAL02, @VIRTUAL06
    // Overlapping static entry reached from 0xC4C3B8.
    case 0xC4C3BA: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:124 LDA [@VIRTUAL06]
    case 0xC4C3BB: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:125 JSL CREATE_ENTITY
    case 0xC4C3BD: {
        Instruction step(cpu, 0x22, 0xC01E5Fu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:127 INC @VIRTUAL02
    case 0xC4C3C1: {
        Instruction step(cpu, 0xE6, 0x000002u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:129 LDA @VIRTUAL02
    case 0xC4C3C3: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:130 CMP #4
    case 0xC4C3C5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:130 CMP #4
    // Overlapping static entry reached from 0xC4C3C5.
    case 0xC4C3C7: {
        Instruction step(cpu, 0x00, 0x0000B0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:784 BCS :+
    // Macro caller: src/ending/try_rendering_photograph.asm:131 BCCL @UNKNOWN3
    case 0xC4C3C8: {
        Instruction step(cpu, 0xB0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/ending/try_rendering_photograph.asm:131 BCCL @UNKNOWN3
    case 0xC4C3CA: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:786 JMP dest
    // Macro caller: src/ending/try_rendering_photograph.asm:131 BCCL @UNKNOWN3
    case 0xC4C3CC: {
        Instruction step(cpu, 0x4C, 0x00C34Du, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:132 LDA #0
    case 0xC4C3CF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:132 LDA #0
    // Overlapping static entry reached from 0xC4C3CF.
    case 0xC4C3D1: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:133 STA @VIRTUAL04
    case 0xC4C3D2: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:134 JMP @UNKNOWN9
    case 0xC4C3D4: {
        Instruction step(cpu, 0x4C, 0x00C45Du, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:136 LDA @LOCAL06
    case 0xC4C3D7: {
        Instruction step(cpu, 0xA5, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:137 ASL
    case 0xC4C3D9: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:138 ASL
    case 0xC4C3DA: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:139 ASL
    case 0xC4C3DB: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:140 CLC
    case 0xC4C3DC: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:142 ADC #.LOWORD(GAME_STATE)
    case 0xC4C3DD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000A9u : 0x009AA9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:142 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC4C3DD.
    case 0xC4C3DF: {
        Instruction step(cpu, 0x9A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_stack();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:143 CLC
    case 0xC4C3E0: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:144 ADC @VIRTUAL04
    case 0xC4C3E1: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:145 TAX
    case 0xC4C3E3: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:146 LDA a:game_state::saved_photo_states + photo_state::party,X
    case 0xC4C3E4: {
        Instruction step(cpu, 0xBD, 0x0000D3u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:152 AND #$00FF
    case 0xC4C3E7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:152 AND #$00FF
    // Overlapping static entry reached from 0xC4C3E7.
    case 0xC4C3E9: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:153 STA @VIRTUAL02
    case 0xC4C3EA: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:154 BEQ @UNKNOWN8
    case 0xC4C3EC: {
        Instruction step(cpu, 0xF0, 0x00006Du, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:155 LDA @VIRTUAL02
    case 0xC4C3EE: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:156 AND #$001F
    case 0xC4C3F0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x00001Fu : 0x00001Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:156 AND #$001F
    // Overlapping static entry reached from 0xC4C3F0.
    case 0xC4C3F2: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:157 CMP #18
    case 0xC4C3F3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000012u : 0x000012u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:157 CMP #18
    // Overlapping static entry reached from 0xC4C3F3.
    case 0xC4C3F5: {
        Instruction step(cpu, 0x00, 0x0000B0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:158 BCS @UNKNOWN8
    case 0xC4C3F6: {
        Instruction step(cpu, 0xB0, 0x000063u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:159 CMP #0
    case 0xC4C3F8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:159 CMP #0
    // Overlapping static entry reached from 0xC4C3F8.
    case 0xC4C3FA: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:160 BEQ @UNKNOWN8
    case 0xC4C3FB: {
        Instruction step(cpu, 0xF0, 0x00005Eu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:161 LDA @LOCAL04
    case 0xC4C3FD: {
        Instruction step(cpu, 0xA5, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:162 STA NEW_ENTITY_VAR0
    case 0xC4C3FF: {
        Instruction step(cpu, 0x8D, 0x000A2Eu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:163 INC @LOCAL04
    case 0xC4C402: {
        Instruction step(cpu, 0xE6, 0x00001Au, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:164 LDA @VIRTUAL04
    case 0xC4C404: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:165 ASL
    case 0xC4C406: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:166 ASL
    case 0xC4C407: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:167 TAX
    case 0xC4C408: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:168 STX @LOCAL05
    case 0xC4C409: {
        Instruction step(cpu, 0x86, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:169 LDA @VIRTUAL02
    case 0xC4C40B: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:170 JSL UNKNOWN_C079EC
    case 0xC4C40D: {
        Instruction step(cpu, 0x22, 0xC07C3Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:171 STA @LOCAL01
    case 0xC4C411: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:172 LDX @LOCAL05
    case 0xC4C413: {
        Instruction step(cpu, 0xA6, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:173 TXA
    case 0xC4C415: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:174 CLC
    case 0xC4C416: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:175 ADC #14
    case 0xC4C417: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00000Eu : 0x00000Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:175 ADC #14
    // Overlapping static entry reached from 0xC4C417.
    case 0xC4C419: {
        Instruction step(cpu, 0x00, 0x0000A4u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1044 LDY src
    // Macro caller: src/ending/try_rendering_photograph.asm:176 MOVE_INTY @VIRTUAL0A, @VIRTUAL06
    case 0xC4C41A: {
        Instruction step(cpu, 0xA4, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1045 STY dest
    // Macro caller: src/ending/try_rendering_photograph.asm:176 MOVE_INTY @VIRTUAL0A, @VIRTUAL06
    case 0xC4C41C: {
        Instruction step(cpu, 0x84, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:1046 LDY src+2
    // Macro caller: src/ending/try_rendering_photograph.asm:176 MOVE_INTY @VIRTUAL0A, @VIRTUAL06
    case 0xC4C41E: {
        Instruction step(cpu, 0xA4, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1047 STY dest+2
    // Macro caller: src/ending/try_rendering_photograph.asm:176 MOVE_INTY @VIRTUAL0A, @VIRTUAL06
    case 0xC4C420: {
        Instruction step(cpu, 0x84, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:177 CLC
    case 0xC4C422: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:178 ADC @VIRTUAL06
    case 0xC4C423: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:179 STA @VIRTUAL06
    case 0xC4C425: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:180 LDA [@VIRTUAL06]
    case 0xC4C427: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:181 ASL
    case 0xC4C429: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:182 ASL
    case 0xC4C42A: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:183 ASL
    case 0xC4C42B: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:184 STA @LOCAL00
    case 0xC4C42C: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:185 TXA
    case 0xC4C42E: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:186 CLC
    case 0xC4C42F: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:187 ADC #16
    case 0xC4C430: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:187 ADC #16
    // Overlapping static entry reached from 0xC4C430.
    case 0xC4C432: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/ending/try_rendering_photograph.asm:188 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC4C433: {
        Instruction step(cpu, 0xA6, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/ending/try_rendering_photograph.asm:188 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC4C435: {
        Instruction step(cpu, 0x86, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/ending/try_rendering_photograph.asm:188 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC4C437: {
        Instruction step(cpu, 0xA6, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/ending/try_rendering_photograph.asm:188 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC4C439: {
        Instruction step(cpu, 0x86, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:189 CLC
    case 0xC4C43B: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:190 ADC @VIRTUAL06
    case 0xC4C43C: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:191 STA @VIRTUAL06
    case 0xC4C43E: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:192 LDA [@VIRTUAL06]
    case 0xC4C440: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:193 ASL
    case 0xC4C442: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:194 ASL
    case 0xC4C443: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:195 ASL
    case 0xC4C444: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:196 STA @LOCAL00+2
    case 0xC4C445: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:197 LDY #.LOWORD(-1)
    case 0xC4C447: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:197 LDY #.LOWORD(-1)
    // Overlapping static entry reached from 0xC4C447.
    case 0xC4C449: {
        Instruction step(cpu, 0xFF, 0x031CA2u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:198 LDX #EVENT_SCRIPT::EVENT_800
    case 0xC4C44A: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x00001Cu : 0x00031Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:198 LDX #EVENT_SCRIPT::EVENT_800
    // Overlapping static entry reached from 0xC4C44A.
    case 0xC4C44C: {
        Instruction step(cpu, 0x03, 0x0000A5u, 2u, AddressMode::StackRelative);
        step.or_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:199 LDA @LOCAL01
    case 0xC4C44D: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:199 LDA @LOCAL01
    // Overlapping static entry reached from 0xC4C44C.
    case 0xC4C44E: {
        Instruction step(cpu, 0x12, 0x000022u, 2u, AddressMode::DirectPageIndirect);
        step.or_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:200 JSL CREATE_ENTITY
    case 0xC4C44F: {
        Instruction step(cpu, 0x22, 0xC01E5Fu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:200 JSL CREATE_ENTITY
    // Overlapping static entry reached from 0xC4C44E.
    case 0xC4C450: {
        Instruction step(cpu, 0x5F, 0xA8C01Eu, 4u, AddressMode::LongIndexedX);
        step.xor_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:201 TAY
    case 0xC4C453: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:202 LDX @VIRTUAL02
    case 0xC4C454: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:203 TYA
    case 0xC4C456: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:204 JSL UNKNOWN_C07A31
    case 0xC4C457: {
        Instruction step(cpu, 0x22, 0xC07C81u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:206 INC @VIRTUAL04
    case 0xC4C45B: {
        Instruction step(cpu, 0xE6, 0x000004u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:208 LDA @VIRTUAL04
    case 0xC4C45D: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:209 CMP #6
    case 0xC4C45F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:209 CMP #6
    // Overlapping static entry reached from 0xC4C45F.
    case 0xC4C461: {
        Instruction step(cpu, 0x00, 0x0000B0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:784 BCS :+
    // Macro caller: src/ending/try_rendering_photograph.asm:210 BCCL @UNKNOWN7
    case 0xC4C462: {
        Instruction step(cpu, 0xB0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/ending/try_rendering_photograph.asm:210 BCCL @UNKNOWN7
    case 0xC4C464: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:786 JMP dest
    // Macro caller: src/ending/try_rendering_photograph.asm:210 BCCL @UNKNOWN7
    case 0xC4C466: {
        Instruction step(cpu, 0x4C, 0x00C3D7u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:211 LDX #1
    case 0xC4C469: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:211 LDX #1
    // Overlapping static entry reached from 0xC4C469.
    case 0xC4C46B: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:212 STX @LOCAL05
    case 0xC4C46C: {
        Instruction step(cpu, 0x86, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:214 LDX @LOCAL05
    case 0xC4C46E: {
        Instruction step(cpu, 0xA6, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/ending/try_rendering_photograph.asm:215 TXA
    case 0xC4C470: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/ending/try_rendering_photograph.asm:216 END_C_FUNCTION
    case 0xC4C471: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/ending/try_rendering_photograph.asm:216 END_C_FUNCTION
    case 0xC4C472: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
