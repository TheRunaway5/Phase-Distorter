// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/battle/show_psi_animation-jp.asm
bool resume_battle_show_psi_animation_jp(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/show_psi_animation-jp.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2E06B: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/show_psi_animation-jp.asm:13 END_STACK_VARS
    case 0xC2E06D: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/show_psi_animation-jp.asm:13 END_STACK_VARS
    case 0xC2E06E: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/show_psi_animation-jp.asm:13 END_STACK_VARS
    case 0xC2E06F: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/show_psi_animation-jp.asm:13 END_STACK_VARS
    case 0xC2E070: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000DCu : 0x00FFDCu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/show_psi_animation-jp.asm:13 END_STACK_VARS
    // Overlapping static entry reached from 0xC2E070.
    case 0xC2E072: {
        Instruction step(cpu, 0xFF, 0x85685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/show_psi_animation-jp.asm:13 END_STACK_VARS
    case 0xC2E073: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/show_psi_animation-jp.asm:13 END_STACK_VARS
    case 0xC2E074: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:14 STA @VIRTUAL02
    case 0xC2E075: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:14 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC2E072.
    case 0xC2E076: {
        Instruction step(cpu, 0x02, 0x0000ADu, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:15 LDA LOADED_BG_DATA_LAYER1 + loaded_bg_data::bitdepth
    case 0xC2E077: {
        Instruction step(cpu, 0xAD, 0x00AFAAu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:16 AND #$00FF
    case 0xC2E07A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:16 AND #$00FF
    // Overlapping static entry reached from 0xC2E07A.
    case 0xC2E07C: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:17 CMP #2
    case 0xC2E07D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:17 CMP #2
    // Overlapping static entry reached from 0xC2E07D.
    case 0xC2E07F: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:18 BNE @UNKNOWN1
    case 0xC2E080: {
        Instruction step(cpu, 0xD0, 0x000057u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/show_psi_animation-jp.asm:19 LOADPTR BUFFER + $8000, @VIRTUAL06
    case 0xC2E082: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x008000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/show_psi_animation-jp.asm:19 LOADPTR BUFFER + $8000, @VIRTUAL06
    // Overlapping static entry reached from 0xC2E082.
    case 0xC2E084: {
        Instruction step(cpu, 0x80, 0x000085u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/show_psi_animation-jp.asm:19 LOADPTR BUFFER + $8000, @VIRTUAL06
    case 0xC2E085: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/show_psi_animation-jp.asm:19 LOADPTR BUFFER + $8000, @VIRTUAL06
    case 0xC2E087: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Fu : 0x00007Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/show_psi_animation-jp.asm:19 LOADPTR BUFFER + $8000, @VIRTUAL06
    // Overlapping static entry reached from 0xC2E087.
    case 0xC2E089: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/show_psi_animation-jp.asm:19 LOADPTR BUFFER + $8000, @VIRTUAL06
    case 0xC2E08A: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/show_psi_animation-jp.asm:20 LOADPTR PSI_ANIM_GFX_SET_1 & $FF0000, @VIRTUAL0A
    case 0xC2E08C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/show_psi_animation-jp.asm:20 LOADPTR PSI_ANIM_GFX_SET_1 & $FF0000, @VIRTUAL0A
    // Overlapping static entry reached from 0xC2E08C.
    case 0xC2E08E: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/show_psi_animation-jp.asm:20 LOADPTR PSI_ANIM_GFX_SET_1 & $FF0000, @VIRTUAL0A
    case 0xC2E08F: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/show_psi_animation-jp.asm:20 LOADPTR PSI_ANIM_GFX_SET_1 & $FF0000, @VIRTUAL0A
    case 0xC2E091: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000CCu : 0x0000CCu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/show_psi_animation-jp.asm:20 LOADPTR PSI_ANIM_GFX_SET_1 & $FF0000, @VIRTUAL0A
    // Overlapping static entry reached from 0xC2E091.
    case 0xC2E093: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/show_psi_animation-jp.asm:20 LOADPTR PSI_ANIM_GFX_SET_1 & $FF0000, @VIRTUAL0A
    case 0xC2E094: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:21 LDA @VIRTUAL02
    case 0xC2E096: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:568 STA scratch
    // Macro caller: src/battle/show_psi_animation-jp.asm:22 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC2E098: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:569 ASL
    // Macro caller: src/battle/show_psi_animation-jp.asm:22 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC2E09A: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/battle/show_psi_animation-jp.asm:22 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC2E09B: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:571 ASL
    // Macro caller: src/battle/show_psi_animation-jp.asm:22 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC2E09D: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:572 ASL
    // Macro caller: src/battle/show_psi_animation-jp.asm:22 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC2E09E: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:23 TAX
    case 0xC2E09F: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:24 LDA f:PSI_ANIM_CFG,X
    case 0xC2E0A0: {
        Instruction step(cpu, 0xBF, 0xCCF164u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:25 CLC
    case 0xC2E0A4: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:26 ADC @VIRTUAL0A
    case 0xC2E0A5: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:27 STA @VIRTUAL0A
    case 0xC2E0A7: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:28 STA @LOCAL00
    case 0xC2E0A9: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:29 LDA @VIRTUAL0A+2
    case 0xC2E0AB: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:29 LDA @VIRTUAL0A+2
    // Overlapping static entry reached from 0xC2E0C8.
    case 0xC2E0AC: {
        Instruction step(cpu, 0x0C, 0x001085u, 3u, AddressMode::Absolute);
        step.set_tested_bits();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:30 STA @LOCAL00+2
    case 0xC2E0AD: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/show_psi_animation-jp.asm:31 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2E0AF: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/show_psi_animation-jp.asm:31 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2E0B1: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/show_psi_animation-jp.asm:31 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2E0B3: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/show_psi_animation-jp.asm:31 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2E0B5: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:32 JSL DECOMP
    case 0xC2E0B7: {
        Instruction step(cpu, 0x22, 0xC419EAu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/show_psi_animation-jp.asm:33 COPY_TO_VRAM3P @VIRTUAL06, $0000, $1000, 0
    case 0xC2E0BB: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/show_psi_animation-jp.asm:33 COPY_TO_VRAM3P @VIRTUAL06, $0000, $1000, 0
    case 0xC2E0BD: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/show_psi_animation-jp.asm:33 COPY_TO_VRAM3P @VIRTUAL06, $0000, $1000, 0
    case 0xC2E0BF: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/show_psi_animation-jp.asm:33 COPY_TO_VRAM3P @VIRTUAL06, $0000, $1000, 0
    case 0xC2E0C1: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1199 LDY #dest
    // Macro caller: src/battle/show_psi_animation-jp.asm:33 COPY_TO_VRAM3P @VIRTUAL06, $0000, $1000, 0
    case 0xC2E0C3: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1199 LDY #dest
    // Macro caller: src/battle/show_psi_animation-jp.asm:33 COPY_TO_VRAM3P @VIRTUAL06, $0000, $1000, 0
    // Overlapping static entry reached from 0xC2E0C3.
    case 0xC2E0C5: {
        Instruction step(cpu, 0x00, 0x0000A2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1203 LDX #size
    // Macro caller: src/battle/show_psi_animation-jp.asm:33 COPY_TO_VRAM3P @VIRTUAL06, $0000, $1000, 0
    case 0xC2E0C6: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x001000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1203 LDX #size
    // Macro caller: src/battle/show_psi_animation-jp.asm:33 COPY_TO_VRAM3P @VIRTUAL06, $0000, $1000, 0
    // Overlapping static entry reached from 0xC2E0C6.
    case 0xC2E0C8: {
        Instruction step(cpu, 0x10, 0x0000E2u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:1205 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/battle/show_psi_animation-jp.asm:33 COPY_TO_VRAM3P @VIRTUAL06, $0000, $1000, 0
    case 0xC2E0C9: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:1205 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/battle/show_psi_animation-jp.asm:33 COPY_TO_VRAM3P @VIRTUAL06, $0000, $1000, 0
    // Overlapping static entry reached from 0xC2E0C8.
    case 0xC2E0CA: {
        Instruction step(cpu, 0x20, 0x002298u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:1207 TYA
    // Macro caller: src/battle/show_psi_animation-jp.asm:33 COPY_TO_VRAM3P @VIRTUAL06, $0000, $1000, 0
    case 0xC2E0CB: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:1211 JSL TRANSFER_TO_VRAM
    // Macro caller: src/battle/show_psi_animation-jp.asm:33 COPY_TO_VRAM3P @VIRTUAL06, $0000, $1000, 0
    case 0xC2E0CC: {
        Instruction step(cpu, 0x22, 0xC085B7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:1211 JSL TRANSFER_TO_VRAM
    // Macro caller: src/battle/show_psi_animation-jp.asm:33 COPY_TO_VRAM3P @VIRTUAL06, $0000, $1000, 0
    // Overlapping static entry reached from 0xC2E0CA.
    case 0xC2E0CD: {
        Instruction step(cpu, 0xB7, 0x000085u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1211 JSL TRANSFER_TO_VRAM
    // Macro caller: src/battle/show_psi_animation-jp.asm:33 COPY_TO_VRAM3P @VIRTUAL06, $0000, $1000, 0
    // Overlapping static entry reached from 0xC2E0CD.
    case 0xC2E0CF: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000A9u : 0x0060A9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:35 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 3
    case 0xC2E0D0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000060u : 0x000260u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:35 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 3
    // Overlapping static entry reached from 0xC2E0CF.
    case 0xC2E0D1: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:35 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 3
    // Overlapping static entry reached from 0xC2E0D0.
    case 0xC2E0D2: {
        Instruction step(cpu, 0x02, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:36 STA PSI_ANIMATION_STATE + psi_animation_state::displayed_palette
    case 0xC2E0D3: {
        Instruction step(cpu, 0x8D, 0x001B70u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:37 JMP @UNKNOWN6
    case 0xC2E0D6: {
        Instruction step(cpu, 0x4C, 0x00E20Du, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/show_psi_animation-jp.asm:39 LOADPTR BUFFER, @VIRTUAL06
    case 0xC2E0D9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/show_psi_animation-jp.asm:39 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC2E0D9.
    case 0xC2E0DB: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/show_psi_animation-jp.asm:39 LOADPTR BUFFER, @VIRTUAL06
    case 0xC2E0DC: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/show_psi_animation-jp.asm:39 LOADPTR BUFFER, @VIRTUAL06
    case 0xC2E0DE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Fu : 0x00007Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/show_psi_animation-jp.asm:39 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC2E0DE.
    case 0xC2E0E0: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/show_psi_animation-jp.asm:39 LOADPTR BUFFER, @VIRTUAL06
    case 0xC2E0E1: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/show_psi_animation-jp.asm:40 LOADPTR PSI_ANIM_GFX_SET_1 & $FF0000, @VIRTUAL0A
    case 0xC2E0E3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/show_psi_animation-jp.asm:40 LOADPTR PSI_ANIM_GFX_SET_1 & $FF0000, @VIRTUAL0A
    // Overlapping static entry reached from 0xC2E0E3.
    case 0xC2E0E5: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/show_psi_animation-jp.asm:40 LOADPTR PSI_ANIM_GFX_SET_1 & $FF0000, @VIRTUAL0A
    case 0xC2E0E6: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/show_psi_animation-jp.asm:40 LOADPTR PSI_ANIM_GFX_SET_1 & $FF0000, @VIRTUAL0A
    case 0xC2E0E8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000CCu : 0x0000CCu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/show_psi_animation-jp.asm:40 LOADPTR PSI_ANIM_GFX_SET_1 & $FF0000, @VIRTUAL0A
    // Overlapping static entry reached from 0xC2E0E8.
    case 0xC2E0EA: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/show_psi_animation-jp.asm:40 LOADPTR PSI_ANIM_GFX_SET_1 & $FF0000, @VIRTUAL0A
    case 0xC2E0EB: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:41 LDA @VIRTUAL02
    case 0xC2E0ED: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:568 STA scratch
    // Macro caller: src/battle/show_psi_animation-jp.asm:42 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC2E0EF: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:569 ASL
    // Macro caller: src/battle/show_psi_animation-jp.asm:42 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC2E0F1: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/battle/show_psi_animation-jp.asm:42 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC2E0F2: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:571 ASL
    // Macro caller: src/battle/show_psi_animation-jp.asm:42 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC2E0F4: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:572 ASL
    // Macro caller: src/battle/show_psi_animation-jp.asm:42 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC2E0F5: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:43 TAX
    case 0xC2E0F6: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:44 LDA f:PSI_ANIM_CFG,X
    case 0xC2E0F7: {
        Instruction step(cpu, 0xBF, 0xCCF164u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:45 CLC
    case 0xC2E0FB: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:46 ADC @VIRTUAL0A
    case 0xC2E0FC: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:47 STA @VIRTUAL0A
    case 0xC2E0FE: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:48 STA @LOCAL00
    case 0xC2E100: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:49 LDA @VIRTUAL0A+2
    case 0xC2E102: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:50 STA @LOCAL00+2
    case 0xC2E104: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/show_psi_animation-jp.asm:51 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2E106: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/show_psi_animation-jp.asm:51 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2E108: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/show_psi_animation-jp.asm:51 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2E10A: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/show_psi_animation-jp.asm:51 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2E10C: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:52 JSL DECOMP
    case 0xC2E10E: {
        Instruction step(cpu, 0x22, 0xC419EAu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/show_psi_animation-jp.asm:53 LOADPTR BUFFER + $8000, @VIRTUAL0A
    case 0xC2E112: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x008000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/show_psi_animation-jp.asm:53 LOADPTR BUFFER + $8000, @VIRTUAL0A
    // Overlapping static entry reached from 0xC2E112.
    case 0xC2E114: {
        Instruction step(cpu, 0x80, 0x000085u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/show_psi_animation-jp.asm:53 LOADPTR BUFFER + $8000, @VIRTUAL0A
    case 0xC2E115: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/show_psi_animation-jp.asm:53 LOADPTR BUFFER + $8000, @VIRTUAL0A
    case 0xC2E117: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Fu : 0x00007Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/show_psi_animation-jp.asm:53 LOADPTR BUFFER + $8000, @VIRTUAL0A
    // Overlapping static entry reached from 0xC2E117.
    case 0xC2E119: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/show_psi_animation-jp.asm:53 LOADPTR BUFFER + $8000, @VIRTUAL0A
    case 0xC2E11A: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:54 LDX #0
    case 0xC2E11C: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:54 LDX #0
    // Overlapping static entry reached from 0xC2E11C.
    case 0xC2E11E: {
        Instruction step(cpu, 0x00, 0x00004Cu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:55 JMP @UNKNOWN4
    case 0xC2E11F: {
        Instruction step(cpu, 0x4C, 0x00E1E6u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:57 LDA [@VIRTUAL06]
    case 0xC2E122: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:58 STA [@VIRTUAL0A]
    case 0xC2E124: {
        Instruction step(cpu, 0x87, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:59 INC @VIRTUAL06
    case 0xC2E126: {
        Instruction step(cpu, 0xE6, 0x000006u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:60 INC @VIRTUAL06
    case 0xC2E128: {
        Instruction step(cpu, 0xE6, 0x000006u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:61 INC @VIRTUAL0A
    case 0xC2E12A: {
        Instruction step(cpu, 0xE6, 0x00000Au, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:62 INC @VIRTUAL0A
    case 0xC2E12C: {
        Instruction step(cpu, 0xE6, 0x00000Au, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:63 LDA [@VIRTUAL06]
    case 0xC2E12E: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:64 STA [@VIRTUAL0A]
    case 0xC2E130: {
        Instruction step(cpu, 0x87, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:65 INC @VIRTUAL06
    case 0xC2E132: {
        Instruction step(cpu, 0xE6, 0x000006u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:66 INC @VIRTUAL06
    case 0xC2E134: {
        Instruction step(cpu, 0xE6, 0x000006u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/show_psi_animation-jp.asm:67 MOVE_INT @VIRTUAL06, @LOCAL06
    case 0xC2E136: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/show_psi_animation-jp.asm:67 MOVE_INT @VIRTUAL06, @LOCAL06
    case 0xC2E138: {
        Instruction step(cpu, 0x85, 0x000020u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/show_psi_animation-jp.asm:67 MOVE_INT @VIRTUAL06, @LOCAL06
    case 0xC2E13A: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/show_psi_animation-jp.asm:67 MOVE_INT @VIRTUAL06, @LOCAL06
    case 0xC2E13C: {
        Instruction step(cpu, 0x85, 0x000022u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/show_psi_animation-jp.asm:68 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC2E13E: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/show_psi_animation-jp.asm:68 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC2E140: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/show_psi_animation-jp.asm:68 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC2E142: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/show_psi_animation-jp.asm:68 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC2E144: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:69 INC @VIRTUAL06
    case 0xC2E146: {
        Instruction step(cpu, 0xE6, 0x000006u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:70 INC @VIRTUAL06
    case 0xC2E148: {
        Instruction step(cpu, 0xE6, 0x000006u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:71 LDA [@LOCAL06]
    case 0xC2E14A: {
        Instruction step(cpu, 0xA7, 0x000020u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:72 STA [@VIRTUAL06]
    case 0xC2E14C: {
        Instruction step(cpu, 0x87, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/show_psi_animation-jp.asm:73 MOVE_INT @LOCAL06, @VIRTUAL0A
    case 0xC2E14E: {
        Instruction step(cpu, 0xA5, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/show_psi_animation-jp.asm:73 MOVE_INT @LOCAL06, @VIRTUAL0A
    case 0xC2E150: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/show_psi_animation-jp.asm:73 MOVE_INT @LOCAL06, @VIRTUAL0A
    case 0xC2E152: {
        Instruction step(cpu, 0xA5, 0x000022u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/show_psi_animation-jp.asm:73 MOVE_INT @LOCAL06, @VIRTUAL0A
    case 0xC2E154: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:74 INC @VIRTUAL0A
    case 0xC2E156: {
        Instruction step(cpu, 0xE6, 0x00000Au, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:75 INC @VIRTUAL0A
    case 0xC2E158: {
        Instruction step(cpu, 0xE6, 0x00000Au, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:76 INC @VIRTUAL06
    case 0xC2E15A: {
        Instruction step(cpu, 0xE6, 0x000006u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:77 INC @VIRTUAL06
    case 0xC2E15C: {
        Instruction step(cpu, 0xE6, 0x000006u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/show_psi_animation-jp.asm:78 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC2E15E: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/show_psi_animation-jp.asm:78 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC2E160: {
        Instruction step(cpu, 0x85, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/show_psi_animation-jp.asm:78 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC2E162: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/show_psi_animation-jp.asm:78 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC2E164: {
        Instruction step(cpu, 0x85, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:79 LDA [@VIRTUAL0A]
    case 0xC2E166: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:80 STA [@LOCAL05]
    case 0xC2E168: {
        Instruction step(cpu, 0x87, 0x00001Cu, 2u, AddressMode::DirectPageIndirectLong);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/show_psi_animation-jp.asm:81 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC2E16A: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/show_psi_animation-jp.asm:81 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC2E16C: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/show_psi_animation-jp.asm:81 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC2E16E: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/show_psi_animation-jp.asm:81 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC2E170: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:82 INC @VIRTUAL06
    case 0xC2E172: {
        Instruction step(cpu, 0xE6, 0x000006u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:83 INC @VIRTUAL06
    case 0xC2E174: {
        Instruction step(cpu, 0xE6, 0x000006u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/show_psi_animation-jp.asm:84 MOVE_INT @LOCAL05, @VIRTUAL0A
    case 0xC2E176: {
        Instruction step(cpu, 0xA5, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/show_psi_animation-jp.asm:84 MOVE_INT @LOCAL05, @VIRTUAL0A
    case 0xC2E178: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/show_psi_animation-jp.asm:84 MOVE_INT @LOCAL05, @VIRTUAL0A
    // Overlapping static entry reached from 0xC2E1F2.
    case 0xC2E179: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/show_psi_animation-jp.asm:84 MOVE_INT @LOCAL05, @VIRTUAL0A
    case 0xC2E17A: {
        Instruction step(cpu, 0xA5, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/show_psi_animation-jp.asm:84 MOVE_INT @LOCAL05, @VIRTUAL0A
    case 0xC2E17C: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:85 INC @VIRTUAL0A
    case 0xC2E17E: {
        Instruction step(cpu, 0xE6, 0x00000Au, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:86 INC @VIRTUAL0A
    case 0xC2E180: {
        Instruction step(cpu, 0xE6, 0x00000Au, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:87 LDA [@VIRTUAL06]
    case 0xC2E182: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:88 STA [@VIRTUAL0A]
    case 0xC2E184: {
        Instruction step(cpu, 0x87, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:89 INC @VIRTUAL06
    case 0xC2E186: {
        Instruction step(cpu, 0xE6, 0x000006u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:90 INC @VIRTUAL06
    case 0xC2E188: {
        Instruction step(cpu, 0xE6, 0x000006u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:91 INC @VIRTUAL0A
    case 0xC2E18A: {
        Instruction step(cpu, 0xE6, 0x00000Au, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:92 INC @VIRTUAL0A
    case 0xC2E18C: {
        Instruction step(cpu, 0xE6, 0x00000Au, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:93 LDA [@VIRTUAL06]
    case 0xC2E18E: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:94 STA [@VIRTUAL0A]
    case 0xC2E190: {
        Instruction step(cpu, 0x87, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:95 INC @VIRTUAL06
    case 0xC2E192: {
        Instruction step(cpu, 0xE6, 0x000006u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:96 INC @VIRTUAL06
    case 0xC2E194: {
        Instruction step(cpu, 0xE6, 0x000006u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:97 INC @VIRTUAL0A
    case 0xC2E196: {
        Instruction step(cpu, 0xE6, 0x00000Au, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:98 INC @VIRTUAL0A
    case 0xC2E198: {
        Instruction step(cpu, 0xE6, 0x00000Au, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:99 LDA [@VIRTUAL06]
    case 0xC2E19A: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:100 STA [@VIRTUAL0A]
    case 0xC2E19C: {
        Instruction step(cpu, 0x87, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:101 INC @VIRTUAL06
    case 0xC2E19E: {
        Instruction step(cpu, 0xE6, 0x000006u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:102 INC @VIRTUAL06
    case 0xC2E1A0: {
        Instruction step(cpu, 0xE6, 0x000006u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:103 INC @VIRTUAL0A
    case 0xC2E1A2: {
        Instruction step(cpu, 0xE6, 0x00000Au, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:104 INC @VIRTUAL0A
    case 0xC2E1A4: {
        Instruction step(cpu, 0xE6, 0x00000Au, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:105 LDA [@VIRTUAL06]
    case 0xC2E1A6: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:106 STA [@VIRTUAL0A]
    case 0xC2E1A8: {
        Instruction step(cpu, 0x87, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:107 INC @VIRTUAL06
    case 0xC2E1AA: {
        Instruction step(cpu, 0xE6, 0x000006u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:108 INC @VIRTUAL06
    case 0xC2E1AC: {
        Instruction step(cpu, 0xE6, 0x000006u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:109 INC @VIRTUAL0A
    case 0xC2E1AE: {
        Instruction step(cpu, 0xE6, 0x00000Au, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:110 INC @VIRTUAL0A
    case 0xC2E1B0: {
        Instruction step(cpu, 0xE6, 0x00000Au, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:111 LDA #0
    case 0xC2E1B2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:111 LDA #0
    // Overlapping static entry reached from 0xC2E1B2.
    case 0xC2E1B4: {
        Instruction step(cpu, 0x00, 0x000087u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:112 STA [@VIRTUAL0A]
    case 0xC2E1B5: {
        Instruction step(cpu, 0x87, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:113 INC @VIRTUAL0A
    case 0xC2E1B7: {
        Instruction step(cpu, 0xE6, 0x00000Au, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:114 INC @VIRTUAL0A
    case 0xC2E1B9: {
        Instruction step(cpu, 0xE6, 0x00000Au, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:115 STA [@VIRTUAL0A]
    case 0xC2E1BB: {
        Instruction step(cpu, 0x87, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:116 INC @VIRTUAL0A
    case 0xC2E1BD: {
        Instruction step(cpu, 0xE6, 0x00000Au, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:117 INC @VIRTUAL0A
    case 0xC2E1BF: {
        Instruction step(cpu, 0xE6, 0x00000Au, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:118 STA [@VIRTUAL0A]
    case 0xC2E1C1: {
        Instruction step(cpu, 0x87, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:119 INC @VIRTUAL0A
    case 0xC2E1C3: {
        Instruction step(cpu, 0xE6, 0x00000Au, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:120 INC @VIRTUAL0A
    case 0xC2E1C5: {
        Instruction step(cpu, 0xE6, 0x00000Au, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:121 STA [@VIRTUAL0A]
    case 0xC2E1C7: {
        Instruction step(cpu, 0x87, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:122 INC @VIRTUAL0A
    case 0xC2E1C9: {
        Instruction step(cpu, 0xE6, 0x00000Au, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:123 INC @VIRTUAL0A
    case 0xC2E1CB: {
        Instruction step(cpu, 0xE6, 0x00000Au, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:124 STA [@VIRTUAL0A]
    case 0xC2E1CD: {
        Instruction step(cpu, 0x87, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:125 INC @VIRTUAL0A
    case 0xC2E1CF: {
        Instruction step(cpu, 0xE6, 0x00000Au, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:126 INC @VIRTUAL0A
    case 0xC2E1D1: {
        Instruction step(cpu, 0xE6, 0x00000Au, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:127 STA [@VIRTUAL0A]
    case 0xC2E1D3: {
        Instruction step(cpu, 0x87, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:128 INC @VIRTUAL0A
    case 0xC2E1D5: {
        Instruction step(cpu, 0xE6, 0x00000Au, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:129 INC @VIRTUAL0A
    case 0xC2E1D7: {
        Instruction step(cpu, 0xE6, 0x00000Au, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:130 STA [@VIRTUAL0A]
    case 0xC2E1D9: {
        Instruction step(cpu, 0x87, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:131 INC @VIRTUAL0A
    case 0xC2E1DB: {
        Instruction step(cpu, 0xE6, 0x00000Au, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:132 INC @VIRTUAL0A
    case 0xC2E1DD: {
        Instruction step(cpu, 0xE6, 0x00000Au, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:133 STA [@VIRTUAL0A]
    case 0xC2E1DF: {
        Instruction step(cpu, 0x87, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:134 INC @VIRTUAL0A
    case 0xC2E1E1: {
        Instruction step(cpu, 0xE6, 0x00000Au, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:135 INC @VIRTUAL0A
    case 0xC2E1E3: {
        Instruction step(cpu, 0xE6, 0x00000Au, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:136 INX
    case 0xC2E1E5: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:138 CPX #256
    case 0xC2E1E6: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000000u : 0x000100u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:138 CPX #256
    // Overlapping static entry reached from 0xC2E1E6.
    case 0xC2E1E8: {
        Instruction step(cpu, 0x01, 0x0000B0u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:784 BCS :+
    // Macro caller: src/battle/show_psi_animation-jp.asm:139 BCCL @UNKNOWN2
    case 0xC2E1E9: {
        Instruction step(cpu, 0xB0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // include/macros.asm:784 BCS :+
    // Macro caller: src/battle/show_psi_animation-jp.asm:139 BCCL @UNKNOWN2
    // Overlapping static entry reached from 0xC2E1E8.
    case 0xC2E1EA: {
        Instruction step(cpu, 0x05, 0x0000F0u, 2u, AddressMode::DirectPage);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/battle/show_psi_animation-jp.asm:139 BCCL @UNKNOWN2
    case 0xC2E1EB: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/battle/show_psi_animation-jp.asm:139 BCCL @UNKNOWN2
    // Overlapping static entry reached from 0xC2E1EA.
    case 0xC2E1EC: {
        Instruction step(cpu, 0x03, 0x00004Cu, 2u, AddressMode::StackRelative);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:786 JMP dest
    // Macro caller: src/battle/show_psi_animation-jp.asm:139 BCCL @UNKNOWN2
    case 0xC2E1ED: {
        Instruction step(cpu, 0x4C, 0x00E122u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:786 JMP dest
    // Macro caller: src/battle/show_psi_animation-jp.asm:139 BCCL @UNKNOWN2
    // Overlapping static entry reached from 0xC2E1EC.
    case 0xC2E1EE: {
        Instruction step(cpu, 0x22, 0x00A9E1u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/show_psi_animation-jp.asm:140 COPY_TO_VRAM3 BUFFER + $8000, $0000, $2000, 0
    case 0xC2E1F0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x008000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/show_psi_animation-jp.asm:140 COPY_TO_VRAM3 BUFFER + $8000, $0000, $2000, 0
    // Overlapping static entry reached from 0xC2E1F0.
    case 0xC2E1F2: {
        Instruction step(cpu, 0x80, 0x000085u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/show_psi_animation-jp.asm:140 COPY_TO_VRAM3 BUFFER + $8000, $0000, $2000, 0
    case 0xC2E1F3: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/show_psi_animation-jp.asm:140 COPY_TO_VRAM3 BUFFER + $8000, $0000, $2000, 0
    case 0xC2E1F5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Fu : 0x00007Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/show_psi_animation-jp.asm:140 COPY_TO_VRAM3 BUFFER + $8000, $0000, $2000, 0
    // Overlapping static entry reached from 0xC2E1F5.
    case 0xC2E1F7: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/show_psi_animation-jp.asm:140 COPY_TO_VRAM3 BUFFER + $8000, $0000, $2000, 0
    case 0xC2E1F8: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1199 LDY #dest
    // Macro caller: src/battle/show_psi_animation-jp.asm:140 COPY_TO_VRAM3 BUFFER + $8000, $0000, $2000, 0
    case 0xC2E1FA: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1199 LDY #dest
    // Macro caller: src/battle/show_psi_animation-jp.asm:140 COPY_TO_VRAM3 BUFFER + $8000, $0000, $2000, 0
    // Overlapping static entry reached from 0xC2E1FA.
    case 0xC2E1FC: {
        Instruction step(cpu, 0x00, 0x0000A2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1203 LDX #size
    // Macro caller: src/battle/show_psi_animation-jp.asm:140 COPY_TO_VRAM3 BUFFER + $8000, $0000, $2000, 0
    case 0xC2E1FD: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x002000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1203 LDX #size
    // Macro caller: src/battle/show_psi_animation-jp.asm:140 COPY_TO_VRAM3 BUFFER + $8000, $0000, $2000, 0
    // Overlapping static entry reached from 0xC2E1FD.
    case 0xC2E1FF: {
        Instruction step(cpu, 0x20, 0x0020E2u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:1205 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/battle/show_psi_animation-jp.asm:140 COPY_TO_VRAM3 BUFFER + $8000, $0000, $2000, 0
    case 0xC2E200: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:1207 TYA
    // Macro caller: src/battle/show_psi_animation-jp.asm:140 COPY_TO_VRAM3 BUFFER + $8000, $0000, $2000, 0
    case 0xC2E202: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:1211 JSL TRANSFER_TO_VRAM
    // Macro caller: src/battle/show_psi_animation-jp.asm:140 COPY_TO_VRAM3 BUFFER + $8000, $0000, $2000, 0
    case 0xC2E203: {
        Instruction step(cpu, 0x22, 0xC085B7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:142 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 4
    case 0xC2E207: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000080u : 0x000280u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:142 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 4
    // Overlapping static entry reached from 0xC2E207.
    case 0xC2E209: {
        Instruction step(cpu, 0x02, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:143 STA PSI_ANIMATION_STATE + psi_animation_state::displayed_palette
    case 0xC2E20A: {
        Instruction step(cpu, 0x8D, 0x001B70u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:145 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC2E20D: {
        Instruction step(cpu, 0x22, 0xC0874Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/show_psi_animation-jp.asm:146 LOADPTR PSI_ANIM_PALETTES, @VIRTUAL06
    case 0xC2E211: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000096u : 0x00F596u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/show_psi_animation-jp.asm:146 LOADPTR PSI_ANIM_PALETTES, @VIRTUAL06
    // Overlapping static entry reached from 0xC2E211.
    case 0xC2E213: {
        Instruction step(cpu, 0xF5, 0x000085u, 2u, AddressMode::DirectPageIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/show_psi_animation-jp.asm:146 LOADPTR PSI_ANIM_PALETTES, @VIRTUAL06
    case 0xC2E214: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/show_psi_animation-jp.asm:146 LOADPTR PSI_ANIM_PALETTES, @VIRTUAL06
    // Overlapping static entry reached from 0xC2E213.
    case 0xC2E215: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/show_psi_animation-jp.asm:146 LOADPTR PSI_ANIM_PALETTES, @VIRTUAL06
    case 0xC2E216: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000CCu : 0x0000CCu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/show_psi_animation-jp.asm:146 LOADPTR PSI_ANIM_PALETTES, @VIRTUAL06
    // Overlapping static entry reached from 0xC2E215.
    case 0xC2E217: {
        Instruction step(cpu, 0xCC, 0x008500u, 3u, AddressMode::Absolute);
        step.compare_y();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/show_psi_animation-jp.asm:146 LOADPTR PSI_ANIM_PALETTES, @VIRTUAL06
    // Overlapping static entry reached from 0xC2E216.
    case 0xC2E218: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/show_psi_animation-jp.asm:146 LOADPTR PSI_ANIM_PALETTES, @VIRTUAL06
    case 0xC2E219: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/show_psi_animation-jp.asm:146 LOADPTR PSI_ANIM_PALETTES, @VIRTUAL06
    // Overlapping static entry reached from 0xC2E217.
    case 0xC2E21A: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:147 LDA @VIRTUAL02
    case 0xC2E21B: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:148 ASL
    case 0xC2E21D: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:149 ASL
    case 0xC2E21E: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:150 ASL
    case 0xC2E21F: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:151 CLC
    case 0xC2E220: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:152 ADC @VIRTUAL06
    case 0xC2E221: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:153 STA @VIRTUAL06
    case 0xC2E223: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:154 STA @LOCAL00
    case 0xC2E225: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:155 LDA @VIRTUAL06+2
    case 0xC2E227: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:156 STA @LOCAL00+2
    case 0xC2E229: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:157 LDX #8
    case 0xC2E22B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:157 LDX #8
    // Overlapping static entry reached from 0xC2E22B.
    case 0xC2E22D: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:158 LDA #.LOWORD(PSI_ANIMATION_STATE) + psi_animation_state::palette
    case 0xC2E22E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000050u : 0x001B50u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:158 LDA #.LOWORD(PSI_ANIMATION_STATE) + psi_animation_state::palette
    // Overlapping static entry reached from 0xC2E22E.
    case 0xC2E230: {
        Instruction step(cpu, 0x1B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_stack();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:159 JSL MEMCPY16
    case 0xC2E231: {
        Instruction step(cpu, 0x22, 0xC08EC3u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/show_psi_animation-jp.asm:160 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2E235: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/show_psi_animation-jp.asm:160 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2E237: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/show_psi_animation-jp.asm:160 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2E239: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/show_psi_animation-jp.asm:160 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2E23B: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:161 LDX #8
    case 0xC2E23D: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:161 LDX #8
    // Overlapping static entry reached from 0xC2E23D.
    case 0xC2E23F: {
        Instruction step(cpu, 0x00, 0x0000ADu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:162 LDA PSI_ANIMATION_STATE + psi_animation_state::displayed_palette
    case 0xC2E240: {
        Instruction step(cpu, 0xAD, 0x001B70u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:163 JSL MEMCPY16
    case 0xC2E243: {
        Instruction step(cpu, 0x22, 0xC08EC3u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/show_psi_animation-jp.asm:164 LOADPTR BUFFER, @VIRTUAL0A
    case 0xC2E247: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/show_psi_animation-jp.asm:164 LOADPTR BUFFER, @VIRTUAL0A
    // Overlapping static entry reached from 0xC2E247.
    case 0xC2E249: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/show_psi_animation-jp.asm:164 LOADPTR BUFFER, @VIRTUAL0A
    case 0xC2E24A: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/show_psi_animation-jp.asm:164 LOADPTR BUFFER, @VIRTUAL0A
    case 0xC2E24C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Fu : 0x00007Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/show_psi_animation-jp.asm:164 LOADPTR BUFFER, @VIRTUAL0A
    // Overlapping static entry reached from 0xC2E24C.
    case 0xC2E24E: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/show_psi_animation-jp.asm:164 LOADPTR BUFFER, @VIRTUAL0A
    case 0xC2E24F: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/show_psi_animation-jp.asm:165 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC2E251: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/show_psi_animation-jp.asm:165 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC2E253: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/show_psi_animation-jp.asm:165 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC2E255: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/show_psi_animation-jp.asm:165 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC2E257: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/show_psi_animation-jp.asm:166 MOVE_INT @VIRTUAL06, PSI_ANIMATION_STATE + psi_animation_state::frame_data
    case 0xC2E259: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/show_psi_animation-jp.asm:166 MOVE_INT @VIRTUAL06, PSI_ANIMATION_STATE + psi_animation_state::frame_data
    case 0xC2E25B: {
        Instruction step(cpu, 0x8D, 0x001B47u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/show_psi_animation-jp.asm:166 MOVE_INT @VIRTUAL06, PSI_ANIMATION_STATE + psi_animation_state::frame_data
    case 0xC2E25E: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/show_psi_animation-jp.asm:166 MOVE_INT @VIRTUAL06, PSI_ANIMATION_STATE + psi_animation_state::frame_data
    case 0xC2E260: {
        Instruction step(cpu, 0x8D, 0x001B49u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:167 SEP #PROC_FLAGS::ACCUM8
    case 0xC2E263: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:168 LDA #1
    case 0xC2E265: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x008D01u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:169 STA PSI_ANIMATION_STATE + psi_animation_state::time_until_next_frame
    case 0xC2E267: {
        Instruction step(cpu, 0x8D, 0x001B44u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:169 STA PSI_ANIMATION_STATE + psi_animation_state::time_until_next_frame
    // Overlapping static entry reached from 0xC2E265.
    case 0xC2E268: {
        Instruction step(cpu, 0x44, 0x00C21Bu, 3u, AddressMode::BlockMove);
        step.move_byte_backward();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:170 REP #PROC_FLAGS::ACCUM8
    case 0xC2E26A: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:170 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC2E268.
    case 0xC2E26B: {
        Instruction step(cpu, 0x20, 0x0064A9u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/show_psi_animation-jp.asm:171 LOADPTR PSI_ANIM_CFG, @VIRTUAL06
    case 0xC2E26C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000064u : 0x00F164u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/show_psi_animation-jp.asm:171 LOADPTR PSI_ANIM_CFG, @VIRTUAL06
    // Overlapping static entry reached from 0xC2E26C.
    case 0xC2E26E: {
        Instruction step(cpu, 0xF1, 0x000085u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/show_psi_animation-jp.asm:171 LOADPTR PSI_ANIM_CFG, @VIRTUAL06
    case 0xC2E26F: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/show_psi_animation-jp.asm:171 LOADPTR PSI_ANIM_CFG, @VIRTUAL06
    // Overlapping static entry reached from 0xC2E26E.
    case 0xC2E270: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/show_psi_animation-jp.asm:171 LOADPTR PSI_ANIM_CFG, @VIRTUAL06
    case 0xC2E271: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000CCu : 0x0000CCu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/show_psi_animation-jp.asm:171 LOADPTR PSI_ANIM_CFG, @VIRTUAL06
    // Overlapping static entry reached from 0xC2E270.
    case 0xC2E272: {
        Instruction step(cpu, 0xCC, 0x008500u, 3u, AddressMode::Absolute);
        step.compare_y();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/show_psi_animation-jp.asm:171 LOADPTR PSI_ANIM_CFG, @VIRTUAL06
    // Overlapping static entry reached from 0xC2E271.
    case 0xC2E273: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/show_psi_animation-jp.asm:171 LOADPTR PSI_ANIM_CFG, @VIRTUAL06
    case 0xC2E274: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/show_psi_animation-jp.asm:171 LOADPTR PSI_ANIM_CFG, @VIRTUAL06
    // Overlapping static entry reached from 0xC2E272.
    case 0xC2E275: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/show_psi_animation-jp.asm:172 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC2E276: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/show_psi_animation-jp.asm:172 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC2E278: {
        Instruction step(cpu, 0x85, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/show_psi_animation-jp.asm:172 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC2E27A: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/show_psi_animation-jp.asm:172 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC2E27C: {
        Instruction step(cpu, 0x85, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:173 LDA @VIRTUAL02
    case 0xC2E27E: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:568 STA scratch
    // Macro caller: src/battle/show_psi_animation-jp.asm:174 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC2E280: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:569 ASL
    // Macro caller: src/battle/show_psi_animation-jp.asm:174 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC2E282: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/battle/show_psi_animation-jp.asm:174 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC2E283: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:571 ASL
    // Macro caller: src/battle/show_psi_animation-jp.asm:174 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC2E285: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:572 ASL
    // Macro caller: src/battle/show_psi_animation-jp.asm:174 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC2E286: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:175 STA @LOCAL04
    case 0xC2E287: {
        Instruction step(cpu, 0x85, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:176 INC
    case 0xC2E289: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:177 INC
    case 0xC2E28A: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:178 CLC
    case 0xC2E28B: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:179 ADC @VIRTUAL06
    case 0xC2E28C: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:180 STA @VIRTUAL06
    case 0xC2E28E: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:181 SEP #PROC_FLAGS::ACCUM8
    case 0xC2E290: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:182 LDA [@VIRTUAL06]
    case 0xC2E292: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:183 STA PSI_ANIMATION_STATE + psi_animation_state::frame_hold_frames
    case 0xC2E294: {
        Instruction step(cpu, 0x8D, 0x001B45u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:184 REP #PROC_FLAGS::ACCUM8
    case 0xC2E297: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:185 LDA @LOCAL04
    case 0xC2E299: {
        Instruction step(cpu, 0xA5, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:186 CLC
    case 0xC2E29B: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:187 ADC #6
    case 0xC2E29C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:187 ADC #6
    // Overlapping static entry reached from 0xC2E29C.
    case 0xC2E29E: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/show_psi_animation-jp.asm:188 MOVE_INTX @LOCAL05, @VIRTUAL06
    case 0xC2E29F: {
        Instruction step(cpu, 0xA6, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/show_psi_animation-jp.asm:188 MOVE_INTX @LOCAL05, @VIRTUAL06
    case 0xC2E2A1: {
        Instruction step(cpu, 0x86, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/show_psi_animation-jp.asm:188 MOVE_INTX @LOCAL05, @VIRTUAL06
    case 0xC2E2A3: {
        Instruction step(cpu, 0xA6, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/show_psi_animation-jp.asm:188 MOVE_INTX @LOCAL05, @VIRTUAL06
    case 0xC2E2A5: {
        Instruction step(cpu, 0x86, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:189 CLC
    case 0xC2E2A7: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:190 ADC @VIRTUAL06
    case 0xC2E2A8: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:191 STA @VIRTUAL06
    case 0xC2E2AA: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:192 SEP #PROC_FLAGS::ACCUM8
    case 0xC2E2AC: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:193 LDA [@VIRTUAL06]
    case 0xC2E2AE: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:194 STA PSI_ANIMATION_STATE + psi_animation_state::total_frames
    case 0xC2E2B0: {
        Instruction step(cpu, 0x8D, 0x001B46u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:195 REP #PROC_FLAGS::ACCUM8
    case 0xC2E2B3: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:196 LDA @LOCAL04
    case 0xC2E2B5: {
        Instruction step(cpu, 0xA5, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:197 INC
    case 0xC2E2B7: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:198 INC
    case 0xC2E2B8: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:199 INC
    case 0xC2E2B9: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/show_psi_animation-jp.asm:200 MOVE_INTX @LOCAL05, @VIRTUAL06
    case 0xC2E2BA: {
        Instruction step(cpu, 0xA6, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/show_psi_animation-jp.asm:200 MOVE_INTX @LOCAL05, @VIRTUAL06
    case 0xC2E2BC: {
        Instruction step(cpu, 0x86, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/show_psi_animation-jp.asm:200 MOVE_INTX @LOCAL05, @VIRTUAL06
    case 0xC2E2BE: {
        Instruction step(cpu, 0xA6, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/show_psi_animation-jp.asm:200 MOVE_INTX @LOCAL05, @VIRTUAL06
    case 0xC2E2C0: {
        Instruction step(cpu, 0x86, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:201 CLC
    case 0xC2E2C2: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:202 ADC @VIRTUAL06
    case 0xC2E2C3: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:203 STA @VIRTUAL06
    case 0xC2E2C5: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:204 SEP #PROC_FLAGS::ACCUM8
    case 0xC2E2C7: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:205 LDA [@VIRTUAL06]
    case 0xC2E2C9: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:206 STA PSI_ANIMATION_STATE + psi_animation_state::palette_animation_frames
    case 0xC2E2CB: {
        Instruction step(cpu, 0x8D, 0x001B4Eu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:207 REP #PROC_FLAGS::ACCUM8
    case 0xC2E2CE: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:208 LDA @LOCAL04
    case 0xC2E2D0: {
        Instruction step(cpu, 0xA5, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:209 INC
    case 0xC2E2D2: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:210 INC
    case 0xC2E2D3: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:211 INC
    case 0xC2E2D4: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:212 INC
    case 0xC2E2D5: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/show_psi_animation-jp.asm:213 MOVE_INTX @LOCAL05, @VIRTUAL06
    case 0xC2E2D6: {
        Instruction step(cpu, 0xA6, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/show_psi_animation-jp.asm:213 MOVE_INTX @LOCAL05, @VIRTUAL06
    case 0xC2E2D8: {
        Instruction step(cpu, 0x86, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/show_psi_animation-jp.asm:213 MOVE_INTX @LOCAL05, @VIRTUAL06
    case 0xC2E2DA: {
        Instruction step(cpu, 0xA6, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/show_psi_animation-jp.asm:213 MOVE_INTX @LOCAL05, @VIRTUAL06
    case 0xC2E2DC: {
        Instruction step(cpu, 0x86, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:214 CLC
    case 0xC2E2DE: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:215 ADC @VIRTUAL06
    case 0xC2E2DF: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:216 STA @VIRTUAL06
    case 0xC2E2E1: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:217 SEP #PROC_FLAGS::ACCUM8
    case 0xC2E2E3: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:218 LDA [@VIRTUAL06]
    case 0xC2E2E5: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:219 STA PSI_ANIMATION_STATE + psi_animation_state::palette_animation_lower_index
    case 0xC2E2E7: {
        Instruction step(cpu, 0x8D, 0x001B4Bu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:220 REP #PROC_FLAGS::ACCUM8
    case 0xC2E2EA: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:221 LDA @LOCAL04
    case 0xC2E2EC: {
        Instruction step(cpu, 0xA5, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:222 CLC
    case 0xC2E2EE: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:223 ADC #5
    case 0xC2E2EF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000005u : 0x000005u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:223 ADC #5
    // Overlapping static entry reached from 0xC2E2EF.
    case 0xC2E2F1: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/show_psi_animation-jp.asm:224 MOVE_INTX @LOCAL05, @VIRTUAL06
    case 0xC2E2F2: {
        Instruction step(cpu, 0xA6, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/show_psi_animation-jp.asm:224 MOVE_INTX @LOCAL05, @VIRTUAL06
    case 0xC2E2F4: {
        Instruction step(cpu, 0x86, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/show_psi_animation-jp.asm:224 MOVE_INTX @LOCAL05, @VIRTUAL06
    case 0xC2E2F6: {
        Instruction step(cpu, 0xA6, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/show_psi_animation-jp.asm:224 MOVE_INTX @LOCAL05, @VIRTUAL06
    case 0xC2E2F8: {
        Instruction step(cpu, 0x86, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:225 CLC
    case 0xC2E2FA: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:226 ADC @VIRTUAL06
    case 0xC2E2FB: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:227 STA @VIRTUAL06
    case 0xC2E2FD: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:228 SEP #PROC_FLAGS::ACCUM8
    case 0xC2E2FF: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:229 LDA [@VIRTUAL06]
    case 0xC2E301: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:230 STA PSI_ANIMATION_STATE + psi_animation_state::palette_animation_upper_index
    case 0xC2E303: {
        Instruction step(cpu, 0x8D, 0x001B4Cu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:231 STZ PSI_ANIMATION_STATE + psi_animation_state::palette_animation_current_index
    case 0xC2E306: {
        Instruction step(cpu, 0x9C, 0x001B4Du, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:232 LDA #1
    case 0xC2E309: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x008D01u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:233 STA PSI_ANIMATION_STATE + psi_animation_state::palette_animation_time_until_next_frame
    case 0xC2E30B: {
        Instruction step(cpu, 0x8D, 0x001B4Fu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:233 STA PSI_ANIMATION_STATE + psi_animation_state::palette_animation_time_until_next_frame
    // Overlapping static entry reached from 0xC2E309.
    case 0xC2E30C: {
        Instruction step(cpu, 0x4F, 0x20C21Bu, 4u, AddressMode::Long);
        step.xor_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:234 REP #PROC_FLAGS::ACCUM8
    case 0xC2E30E: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:235 LDA @LOCAL04
    case 0xC2E310: {
        Instruction step(cpu, 0xA5, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:236 CLC
    case 0xC2E312: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:237 ADC #8
    case 0xC2E313: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:237 ADC #8
    // Overlapping static entry reached from 0xC2E313.
    case 0xC2E315: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/show_psi_animation-jp.asm:238 MOVE_INTX @LOCAL05, @VIRTUAL06
    case 0xC2E316: {
        Instruction step(cpu, 0xA6, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/show_psi_animation-jp.asm:238 MOVE_INTX @LOCAL05, @VIRTUAL06
    case 0xC2E318: {
        Instruction step(cpu, 0x86, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/show_psi_animation-jp.asm:238 MOVE_INTX @LOCAL05, @VIRTUAL06
    case 0xC2E31A: {
        Instruction step(cpu, 0xA6, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/show_psi_animation-jp.asm:238 MOVE_INTX @LOCAL05, @VIRTUAL06
    case 0xC2E31C: {
        Instruction step(cpu, 0x86, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:239 CLC
    case 0xC2E31E: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:240 ADC @VIRTUAL06
    case 0xC2E31F: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:241 STA @VIRTUAL06
    case 0xC2E321: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:242 LDA [@VIRTUAL06]
    case 0xC2E323: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:243 AND #$00FF
    case 0xC2E325: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:243 AND #$00FF
    // Overlapping static entry reached from 0xC2E325.
    case 0xC2E327: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:244 STA PSI_ANIMATION_STATE + psi_animation_state::enemy_colour_change_start_frames_left
    case 0xC2E328: {
        Instruction step(cpu, 0x8D, 0x001B72u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:245 LDA @LOCAL04
    case 0xC2E32B: {
        Instruction step(cpu, 0xA5, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:246 CLC
    case 0xC2E32D: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:247 ADC #9
    case 0xC2E32E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000009u : 0x000009u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:247 ADC #9
    // Overlapping static entry reached from 0xC2E32E.
    case 0xC2E330: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/show_psi_animation-jp.asm:248 MOVE_INTX @LOCAL05, @VIRTUAL06
    case 0xC2E331: {
        Instruction step(cpu, 0xA6, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/show_psi_animation-jp.asm:248 MOVE_INTX @LOCAL05, @VIRTUAL06
    case 0xC2E333: {
        Instruction step(cpu, 0x86, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/show_psi_animation-jp.asm:248 MOVE_INTX @LOCAL05, @VIRTUAL06
    case 0xC2E335: {
        Instruction step(cpu, 0xA6, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/show_psi_animation-jp.asm:248 MOVE_INTX @LOCAL05, @VIRTUAL06
    case 0xC2E337: {
        Instruction step(cpu, 0x86, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:249 CLC
    case 0xC2E339: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:250 ADC @VIRTUAL06
    case 0xC2E33A: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:251 STA @VIRTUAL06
    case 0xC2E33C: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:252 LDA [@VIRTUAL06]
    case 0xC2E33E: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:253 AND #$00FF
    case 0xC2E340: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:253 AND #$00FF
    // Overlapping static entry reached from 0xC2E340.
    case 0xC2E342: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:254 STA PSI_ANIMATION_STATE + psi_animation_state::enemy_colour_change_frames_left
    case 0xC2E343: {
        Instruction step(cpu, 0x8D, 0x001B74u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:255 LDA @LOCAL04
    case 0xC2E346: {
        Instruction step(cpu, 0xA5, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:256 CLC
    case 0xC2E348: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:257 ADC #10
    case 0xC2E349: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:257 ADC #10
    // Overlapping static entry reached from 0xC2E349.
    case 0xC2E34B: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/show_psi_animation-jp.asm:258 MOVE_INTX @LOCAL05, @VIRTUAL06
    case 0xC2E34C: {
        Instruction step(cpu, 0xA6, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/show_psi_animation-jp.asm:258 MOVE_INTX @LOCAL05, @VIRTUAL06
    case 0xC2E34E: {
        Instruction step(cpu, 0x86, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/show_psi_animation-jp.asm:258 MOVE_INTX @LOCAL05, @VIRTUAL06
    case 0xC2E350: {
        Instruction step(cpu, 0xA6, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/show_psi_animation-jp.asm:258 MOVE_INTX @LOCAL05, @VIRTUAL06
    case 0xC2E352: {
        Instruction step(cpu, 0x86, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:259 CLC
    case 0xC2E354: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:260 ADC @VIRTUAL06
    case 0xC2E355: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:261 STA @VIRTUAL06
    case 0xC2E357: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:262 LDA [@VIRTUAL06]
    case 0xC2E359: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:263 AND #$001F
    case 0xC2E35B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x00001Fu : 0x00001Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:263 AND #$001F
    // Overlapping static entry reached from 0xC2E35B.
    case 0xC2E35D: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:264 STA PSI_ANIMATION_STATE + psi_animation_state::enemy_colour_change_red
    case 0xC2E35E: {
        Instruction step(cpu, 0x8D, 0x001B76u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:265 LDA [@VIRTUAL06]
    case 0xC2E361: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:266 LSR
    case 0xC2E363: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:267 LSR
    case 0xC2E364: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:268 LSR
    case 0xC2E365: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:269 LSR
    case 0xC2E366: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:270 LSR
    case 0xC2E367: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:271 AND #$001F
    case 0xC2E368: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x00001Fu : 0x00001Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:271 AND #$001F
    // Overlapping static entry reached from 0xC2E368.
    case 0xC2E36A: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:272 STA PSI_ANIMATION_STATE + psi_animation_state::enemy_colour_change_green
    case 0xC2E36B: {
        Instruction step(cpu, 0x8D, 0x001B78u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:273 SEP #PROC_FLAGS::INDEX8
    case 0xC2E36E: {
        Instruction step(cpu, 0xE2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:274 LDY #10
    case 0xC2E370: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00000Au : 0x00A70Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:275 LDA [@VIRTUAL06]
    case 0xC2E372: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:275 LDA [@VIRTUAL06]
    // Overlapping static entry reached from 0xC2E370.
    case 0xC2E373: {
        Instruction step(cpu, 0x06, 0x000022u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:276 JSL ASR8_UNKNOWN1
    case 0xC2E374: {
        Instruction step(cpu, 0x22, 0xC09233u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:276 JSL ASR8_UNKNOWN1
    // Overlapping static entry reached from 0xC2E373.
    case 0xC2E375: {
        Instruction step(cpu, 0x33, 0x000092u, 2u, AddressMode::StackRelativeIndirectIndexedY);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:276 JSL ASR8_UNKNOWN1
    // Overlapping static entry reached from 0xC2E375.
    case 0xC2E377: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000029u : 0x001F29u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:277 AND #$001F
    case 0xC2E378: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x00001Fu : 0x00001Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:277 AND #$001F
    // Overlapping static entry reached from 0xC2E377.
    case 0xC2E379: {
        Instruction step(cpu, 0x1F, 0x7A8D00u, 4u, AddressMode::LongIndexedX);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:277 AND #$001F
    // Overlapping static entry reached from 0xC2E378.
    case 0xC2E37A: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:278 STA PSI_ANIMATION_STATE + psi_animation_state::enemy_colour_change_blue
    case 0xC2E37B: {
        Instruction step(cpu, 0x8D, 0x001B7Au, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:278 STA PSI_ANIMATION_STATE + psi_animation_state::enemy_colour_change_blue
    // Overlapping static entry reached from 0xC2E379.
    case 0xC2E37D: {
        Instruction step(cpu, 0x1B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_stack();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/show_psi_animation-jp.asm:279 LOADPTR PSI_ANIM_POINTERS, @VIRTUAL06
    case 0xC2E37E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000A6u : 0x00F6A6u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/show_psi_animation-jp.asm:279 LOADPTR PSI_ANIM_POINTERS, @VIRTUAL06
    // Overlapping static entry reached from 0xC2E37E.
    case 0xC2E380: {
        Instruction step(cpu, 0xF6, 0x000085u, 2u, AddressMode::DirectPageIndexedX);
        step.increment();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/show_psi_animation-jp.asm:279 LOADPTR PSI_ANIM_POINTERS, @VIRTUAL06
    case 0xC2E381: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/show_psi_animation-jp.asm:279 LOADPTR PSI_ANIM_POINTERS, @VIRTUAL06
    // Overlapping static entry reached from 0xC2E380.
    case 0xC2E382: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/show_psi_animation-jp.asm:279 LOADPTR PSI_ANIM_POINTERS, @VIRTUAL06
    case 0xC2E383: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000CCu : 0x0000CCu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/show_psi_animation-jp.asm:279 LOADPTR PSI_ANIM_POINTERS, @VIRTUAL06
    // Overlapping static entry reached from 0xC2E382.
    case 0xC2E384: {
        Instruction step(cpu, 0xCC, 0x008500u, 3u, AddressMode::Absolute);
        step.compare_y();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/show_psi_animation-jp.asm:279 LOADPTR PSI_ANIM_POINTERS, @VIRTUAL06
    // Overlapping static entry reached from 0xC2E383.
    case 0xC2E385: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/show_psi_animation-jp.asm:279 LOADPTR PSI_ANIM_POINTERS, @VIRTUAL06
    case 0xC2E386: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/show_psi_animation-jp.asm:279 LOADPTR PSI_ANIM_POINTERS, @VIRTUAL06
    // Overlapping static entry reached from 0xC2E384.
    case 0xC2E387: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:280 LDA @VIRTUAL02
    case 0xC2E388: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:281 ASL
    case 0xC2E38A: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:282 ASL
    case 0xC2E38B: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:283 CLC
    case 0xC2E38C: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:284 ADC @VIRTUAL06
    case 0xC2E38D: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:285 STA @VIRTUAL06
    case 0xC2E38F: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:286 REP #PROC_FLAGS::INDEX8
    case 0xC2E391: {
        Instruction step(cpu, 0xC2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/show_psi_animation-jp.asm:287 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2E393: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/show_psi_animation-jp.asm:287 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    // Overlapping static entry reached from 0xC2E393.
    case 0xC2E395: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/battle/show_psi_animation-jp.asm:287 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2E396: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1136 TAY
    // Macro caller: src/battle/show_psi_animation-jp.asm:287 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2E398: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/battle/show_psi_animation-jp.asm:287 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2E399: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1138 STA dest
    // Macro caller: src/battle/show_psi_animation-jp.asm:287 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2E39B: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/battle/show_psi_animation-jp.asm:287 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2E39D: {
        Instruction step(cpu, 0x84, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/show_psi_animation-jp.asm:288 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2E39F: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/show_psi_animation-jp.asm:288 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2E3A1: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/show_psi_animation-jp.asm:288 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2E3A3: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/show_psi_animation-jp.asm:288 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2E3A5: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/show_psi_animation-jp.asm:289 MOVE_INT @VIRTUAL0A, @LOCAL01
    case 0xC2E3A7: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/show_psi_animation-jp.asm:289 MOVE_INT @VIRTUAL0A, @LOCAL01
    case 0xC2E3A9: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/show_psi_animation-jp.asm:289 MOVE_INT @VIRTUAL0A, @LOCAL01
    case 0xC2E3AB: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/show_psi_animation-jp.asm:289 MOVE_INT @VIRTUAL0A, @LOCAL01
    case 0xC2E3AD: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:290 JSL DECOMP
    case 0xC2E3AF: {
        Instruction step(cpu, 0x22, 0xC419EAu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:291 JSL UNKNOWN_C2DE0F
    case 0xC2E3B3: {
        Instruction step(cpu, 0x22, 0xC2DD84u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/battle/show_psi_animation-jp.asm:292 PROMOTENEARPTR PALETTES + BPP4PALETTE_SIZE * 8, @VIRTUAL06
    case 0xC2E3B7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000300u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/battle/show_psi_animation-jp.asm:292 PROMOTENEARPTR PALETTES + BPP4PALETTE_SIZE * 8, @VIRTUAL06
    // Overlapping static entry reached from 0xC2E3B7.
    case 0xC2E3B9: {
        Instruction step(cpu, 0x03, 0x000085u, 2u, AddressMode::StackRelative);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/battle/show_psi_animation-jp.asm:292 PROMOTENEARPTR PALETTES + BPP4PALETTE_SIZE * 8, @VIRTUAL06
    case 0xC2E3BA: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/battle/show_psi_animation-jp.asm:292 PROMOTENEARPTR PALETTES + BPP4PALETTE_SIZE * 8, @VIRTUAL06
    // Overlapping static entry reached from 0xC2E3B9.
    case 0xC2E3BB: {
        Instruction step(cpu, 0x06, 0x00008Bu, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:909 PHB
    // Macro caller: src/battle/show_psi_animation-jp.asm:292 PROMOTENEARPTR PALETTES + BPP4PALETTE_SIZE * 8, @VIRTUAL06
    case 0xC2E3BC: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/battle/show_psi_animation-jp.asm:292 PROMOTENEARPTR PALETTES + BPP4PALETTE_SIZE * 8, @VIRTUAL06
    case 0xC2E3BD: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:911 PLA
    // Macro caller: src/battle/show_psi_animation-jp.asm:292 PROMOTENEARPTR PALETTES + BPP4PALETTE_SIZE * 8, @VIRTUAL06
    case 0xC2E3BF: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/battle/show_psi_animation-jp.asm:292 PROMOTENEARPTR PALETTES + BPP4PALETTE_SIZE * 8, @VIRTUAL06
    case 0xC2E3C0: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/battle/show_psi_animation-jp.asm:292 PROMOTENEARPTR PALETTES + BPP4PALETTE_SIZE * 8, @VIRTUAL06
    case 0xC2E3C2: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:293 REP #PROC_FLAGS::ACCUM8
    case 0xC2E3C4: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/show_psi_animation-jp.asm:294 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2E3C6: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/show_psi_animation-jp.asm:294 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2E3C8: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/show_psi_animation-jp.asm:294 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2E3CA: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/show_psi_animation-jp.asm:294 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2E3CC: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:295 LDX #128
    case 0xC2E3CE: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000080u : 0x000080u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:295 LDX #128
    // Overlapping static entry reached from 0xC2E3CE.
    case 0xC2E3D0: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:296 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 12
    case 0xC2E3D1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000080u : 0x000380u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:296 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 12
    // Overlapping static entry reached from 0xC2E3D1.
    case 0xC2E3D3: {
        Instruction step(cpu, 0x03, 0x000022u, 2u, AddressMode::StackRelative);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:297 JSL MEMCPY16
    case 0xC2E3D4: {
        Instruction step(cpu, 0x22, 0xC08EC3u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:297 JSL MEMCPY16
    // Overlapping static entry reached from 0xC2E3D3.
    case 0xC2E3D5: {
        Instruction step(cpu, 0xC3, 0x00008Eu, 2u, AddressMode::StackRelative);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:297 JSL MEMCPY16
    // Overlapping static entry reached from 0xC2E3D5.
    case 0xC2E3D7: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000A9u : 0x0000A9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:298 LDA #0
    case 0xC2E3D8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:298 LDA #0
    // Overlapping static entry reached from 0xC2E3D7.
    case 0xC2E3D9: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:298 LDA #0
    // Overlapping static entry reached from 0xC2E3D8.
    case 0xC2E3DA: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:299 STA @LOCAL04
    case 0xC2E3DB: {
        Instruction step(cpu, 0x85, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:300 BRA @UNKNOWN8
    case 0xC2E3DD: {
        Instruction step(cpu, 0x80, 0x00000Au, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:302 ASL
    case 0xC2E3DF: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:303 TAX
    case 0xC2E3E0: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:304 STZ PSI_ANIMATION_ENEMY_TARGETS,X
    case 0xC2E3E1: {
        Instruction step(cpu, 0x9E, 0x00B0BCu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:305 LDA @LOCAL04
    case 0xC2E3E4: {
        Instruction step(cpu, 0xA5, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:306 INC
    case 0xC2E3E6: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:307 STA @LOCAL04
    case 0xC2E3E7: {
        Instruction step(cpu, 0x85, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:309 CMP #4
    case 0xC2E3E9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:309 CMP #4
    // Overlapping static entry reached from 0xC2E3E9.
    case 0xC2E3EB: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:310 BCC @UNKNOWN7
    case 0xC2E3EC: {
        Instruction step(cpu, 0x90, 0x0000F1u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:311 LDX CURRENT_TARGET
    case 0xC2E3EE: {
        Instruction step(cpu, 0xAE, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:312 LDA a:battler::consciousness,X
    case 0xC2E3F1: {
        Instruction step(cpu, 0xBD, 0x00000Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:313 AND #$00FF
    case 0xC2E3F4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:313 AND #$00FF
    // Overlapping static entry reached from 0xC2E3F4.
    case 0xC2E3F6: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/show_psi_animation-jp.asm:314 BEQL @UNKNOWN26
    case 0xC2E3F7: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/show_psi_animation-jp.asm:314 BEQL @UNKNOWN26
    case 0xC2E3F9: {
        Instruction step(cpu, 0x4C, 0x00E5C6u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:315 LDX CURRENT_TARGET
    case 0xC2E3FC: {
        Instruction step(cpu, 0xAE, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:316 LDA a:battler::ally_or_enemy,X
    case 0xC2E3FF: {
        Instruction step(cpu, 0xBD, 0x00000Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:317 AND #$00FF
    case 0xC2E402: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:317 AND #$00FF
    // Overlapping static entry reached from 0xC2E402.
    case 0xC2E404: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:318 CMP #1
    case 0xC2E405: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:318 CMP #1
    // Overlapping static entry reached from 0xC2E405.
    case 0xC2E407: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/show_psi_animation-jp.asm:319 BNEL @UNKNOWN26
    case 0xC2E408: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/show_psi_animation-jp.asm:319 BNEL @UNKNOWN26
    case 0xC2E40A: {
        Instruction step(cpu, 0x4C, 0x00E5C6u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:320 STZ PSI_ANIMATION_X_OFFSET
    case 0xC2E40D: {
        Instruction step(cpu, 0x9C, 0x00AF6Fu, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:321 LDA @VIRTUAL02
    case 0xC2E410: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:568 STA scratch
    // Macro caller: src/battle/show_psi_animation-jp.asm:322 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC2E412: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:569 ASL
    // Macro caller: src/battle/show_psi_animation-jp.asm:322 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC2E414: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/battle/show_psi_animation-jp.asm:322 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC2E415: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:571 ASL
    // Macro caller: src/battle/show_psi_animation-jp.asm:322 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC2E417: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:572 ASL
    // Macro caller: src/battle/show_psi_animation-jp.asm:322 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC2E418: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:323 CLC
    case 0xC2E419: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:324 ADC #7
    case 0xC2E41A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000007u : 0x000007u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:324 ADC #7
    // Overlapping static entry reached from 0xC2E41A.
    case 0xC2E41C: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:325 TAX
    case 0xC2E41D: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:326 LDA f:PSI_ANIM_CFG,X
    case 0xC2E41E: {
        Instruction step(cpu, 0xBF, 0xCCF164u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:327 AND #$00FF
    case 0xC2E422: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:327 AND #$00FF
    // Overlapping static entry reached from 0xC2E422.
    case 0xC2E424: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:328 BEQ @UNKNOWN12
    case 0xC2E425: {
        Instruction step(cpu, 0xF0, 0x000015u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:329 CMP #3
    case 0xC2E427: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:329 CMP #3
    // Overlapping static entry reached from 0xC2E427.
    case 0xC2E429: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:330 BEQ @UNKNOWN12
    case 0xC2E42A: {
        Instruction step(cpu, 0xF0, 0x000010u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:331 CMP #1
    case 0xC2E42C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:331 CMP #1
    // Overlapping static entry reached from 0xC2E42C.
    case 0xC2E42E: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:332 BEQ @UNKNOWN14
    case 0xC2E42F: {
        Instruction step(cpu, 0xF0, 0x00006Bu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:333 CMP #2
    case 0xC2E431: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:333 CMP #2
    // Overlapping static entry reached from 0xC2E431.
    case 0xC2E433: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/show_psi_animation-jp.asm:334 BEQL @UNKNOWN20
    case 0xC2E434: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/show_psi_animation-jp.asm:334 BEQL @UNKNOWN20
    case 0xC2E436: {
        Instruction step(cpu, 0x4C, 0x00E54Cu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:335 JMP @UNKNOWN24
    case 0xC2E439: {
        Instruction step(cpu, 0x4C, 0x00E5A1u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:337 LDX CURRENT_TARGET
    case 0xC2E43C: {
        Instruction step(cpu, 0xAE, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:338 LDA a:battler::sprite_x,X
    case 0xC2E43F: {
        Instruction step(cpu, 0xBD, 0x000044u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:339 AND #$00FF
    case 0xC2E442: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:339 AND #$00FF
    // Overlapping static entry reached from 0xC2E442.
    case 0xC2E444: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:340 STA @VIRTUAL02
    case 0xC2E445: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:341 LDA #128
    case 0xC2E447: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000080u : 0x000080u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:341 LDA #128
    // Overlapping static entry reached from 0xC2E447.
    case 0xC2E449: {
        Instruction step(cpu, 0x00, 0x000038u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:342 SEC
    case 0xC2E44A: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:343 SBC @VIRTUAL02
    case 0xC2E44B: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:344 STA PSI_ANIMATION_X_OFFSET
    case 0xC2E44D: {
        Instruction step(cpu, 0x8D, 0x00AF6Fu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:345 LDX CURRENT_TARGET
    case 0xC2E450: {
        Instruction step(cpu, 0xAE, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:346 LDA a:battler::sprite_y,X
    case 0xC2E453: {
        Instruction step(cpu, 0xBD, 0x000045u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:347 AND #$00FF
    case 0xC2E456: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:347 AND #$00FF
    // Overlapping static entry reached from 0xC2E456.
    case 0xC2E458: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:348 STA @VIRTUAL02
    case 0xC2E459: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:349 LDA #144
    case 0xC2E45B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000090u : 0x000090u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:349 LDA #144
    // Overlapping static entry reached from 0xC2E45B.
    case 0xC2E45D: {
        Instruction step(cpu, 0x00, 0x000038u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:350 SEC
    case 0xC2E45E: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:351 SBC @VIRTUAL02
    case 0xC2E45F: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:352 STA PSI_ANIMATION_Y_OFFSET
    case 0xC2E461: {
        Instruction step(cpu, 0x8D, 0x00AF71u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:353 LDX CURRENT_TARGET
    case 0xC2E464: {
        Instruction step(cpu, 0xAE, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:354 LDA a:battler::sprite,X
    case 0xC2E467: {
        Instruction step(cpu, 0xBD, 0x000002u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:355 JSR GET_BATTLE_SPRITE_HEIGHT
    case 0xC2E46A: {
        Instruction step(cpu, 0x20, 0x00EF6Bu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:356 CMP #8
    case 0xC2E46D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:356 CMP #8
    // Overlapping static entry reached from 0xC2E46D.
    case 0xC2E46F: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:357 BNE @UNKNOWN13
    case 0xC2E470: {
        Instruction step(cpu, 0xD0, 0x00000Au, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:358 LDA PSI_ANIMATION_Y_OFFSET
    case 0xC2E472: {
        Instruction step(cpu, 0xAD, 0x00AF71u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:359 CLC
    case 0xC2E475: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:360 ADC #16
    case 0xC2E476: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:360 ADC #16
    // Overlapping static entry reached from 0xC2E476.
    case 0xC2E478: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:361 STA PSI_ANIMATION_Y_OFFSET
    case 0xC2E479: {
        Instruction step(cpu, 0x8D, 0x00AF71u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:363 SEP #PROC_FLAGS::ACCUM8
    case 0xC2E47C: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:364 LDA #1
    case 0xC2E47E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x00AE01u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:365 LDX CURRENT_TARGET
    case 0xC2E480: {
        Instruction step(cpu, 0xAE, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:365 LDX CURRENT_TARGET
    // Overlapping static entry reached from 0xC2E47E.
    case 0xC2E481: {
        Instruction step(cpu, 0x74, 0x0000ABu, 2u, AddressMode::DirectPageIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:366 STA a:battler::use_alt_spritemap,X
    case 0xC2E483: {
        Instruction step(cpu, 0x9D, 0x00004Bu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:367 LDX CURRENT_TARGET
    case 0xC2E486: {
        Instruction step(cpu, 0xAE, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:368 REP #PROC_FLAGS::ACCUM8
    case 0xC2E489: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:369 LDA a:battler::vram_sprite_index,X
    case 0xC2E48B: {
        Instruction step(cpu, 0xBD, 0x000043u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:370 AND #$00FF
    case 0xC2E48E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:370 AND #$00FF
    // Overlapping static entry reached from 0xC2E48E.
    case 0xC2E490: {
        Instruction step(cpu, 0x00, 0x00000Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:371 ASL
    case 0xC2E491: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:372 TAX
    case 0xC2E492: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:373 LDA #1
    case 0xC2E493: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:373 LDA #1
    // Overlapping static entry reached from 0xC2E493.
    case 0xC2E495: {
        Instruction step(cpu, 0x00, 0x00009Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:374 STA PSI_ANIMATION_ENEMY_TARGETS,X
    case 0xC2E496: {
        Instruction step(cpu, 0x9D, 0x00B0BCu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:375 JMP @UNKNOWN24
    case 0xC2E499: {
        Instruction step(cpu, 0x4C, 0x00E5A1u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:377 LDX CURRENT_TARGET
    case 0xC2E49C: {
        Instruction step(cpu, 0xAE, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:378 LDA a:battler::sprite_y,X
    case 0xC2E49F: {
        Instruction step(cpu, 0xBD, 0x000045u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:379 AND #$00FF
    case 0xC2E4A2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:379 AND #$00FF
    // Overlapping static entry reached from 0xC2E4A2.
    case 0xC2E4A4: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:380 STA @VIRTUAL02
    case 0xC2E4A5: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:381 LDA #144
    case 0xC2E4A7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000090u : 0x000090u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:381 LDA #144
    // Overlapping static entry reached from 0xC2E4A7.
    case 0xC2E4A9: {
        Instruction step(cpu, 0x00, 0x000038u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:382 SEC
    case 0xC2E4AA: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:383 SBC @VIRTUAL02
    case 0xC2E4AB: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:384 STA PSI_ANIMATION_Y_OFFSET
    case 0xC2E4AD: {
        Instruction step(cpu, 0x8D, 0x00AF71u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:385 LDY #0
    case 0xC2E4B0: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:385 LDY #0
    // Overlapping static entry reached from 0xC2E4B0.
    case 0xC2E4B2: {
        Instruction step(cpu, 0x00, 0x000084u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:386 STY @LOCAL04
    case 0xC2E4B3: {
        Instruction step(cpu, 0x84, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:387 LDA #.LOWORD(BATTLERS_TABLE) + (.SIZEOF(battler) * 8)
    case 0xC2E4B5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00001Eu : 0x00A41Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:387 LDA #.LOWORD(BATTLERS_TABLE) + (.SIZEOF(battler) * 8)
    // Overlapping static entry reached from 0xC2E4B5.
    case 0xC2E4B7: {
        Instruction step(cpu, 0xA4, 0x000085u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:388 STA @VIRTUAL02
    case 0xC2E4B8: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:388 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC2E4B7.
    case 0xC2E4B9: {
        Instruction step(cpu, 0x02, 0x0000A2u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:389 LDX #8
    case 0xC2E4BA: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:389 LDX #8
    // Overlapping static entry reached from 0xC2E4BA.
    case 0xC2E4BC: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:390 STX @LOCAL03
    case 0xC2E4BD: {
        Instruction step(cpu, 0x86, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:391 BRA @UNKNOWN18
    case 0xC2E4BF: {
        Instruction step(cpu, 0x80, 0x000071u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:393 LDX @VIRTUAL02
    case 0xC2E4C1: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:394 LDA a:battler::consciousness,X
    case 0xC2E4C3: {
        Instruction step(cpu, 0xBD, 0x00000Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:395 AND #$00FF
    case 0xC2E4C6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:395 AND #$00FF
    // Overlapping static entry reached from 0xC2E4C6.
    case 0xC2E4C8: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:396 BEQ @UNKNOWN17
    case 0xC2E4C9: {
        Instruction step(cpu, 0xF0, 0x000058u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:397 LDX @VIRTUAL02
    case 0xC2E4CB: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:398 LDA a:battler::ally_or_enemy,X
    case 0xC2E4CD: {
        Instruction step(cpu, 0xBD, 0x00000Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:399 AND #$00FF
    case 0xC2E4D0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:399 AND #$00FF
    // Overlapping static entry reached from 0xC2E4D0.
    case 0xC2E4D2: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:400 CMP #1
    case 0xC2E4D3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:400 CMP #1
    // Overlapping static entry reached from 0xC2E4D3.
    case 0xC2E4D5: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:401 BNE @UNKNOWN17
    case 0xC2E4D6: {
        Instruction step(cpu, 0xD0, 0x00004Bu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:402 LDX @VIRTUAL02
    case 0xC2E4D8: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:403 LDA a:battler::afflictions + STATUS_GROUP::PERSISTENT_EASYHEAL,X
    case 0xC2E4DA: {
        Instruction step(cpu, 0xBD, 0x00001Du, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:404 AND #$00FF
    case 0xC2E4DD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:404 AND #$00FF
    // Overlapping static entry reached from 0xC2E4DD.
    case 0xC2E4DF: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:405 CMP #1
    case 0xC2E4E0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:405 CMP #1
    // Overlapping static entry reached from 0xC2E4E0.
    case 0xC2E4E2: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:406 BEQ @UNKNOWN17
    case 0xC2E4E3: {
        Instruction step(cpu, 0xF0, 0x00003Eu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:407 LDX @VIRTUAL02
    case 0xC2E4E5: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:408 SEP #PROC_FLAGS::ACCUM8
    case 0xC2E4E7: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:409 LDA a:battler::sprite_y,X
    case 0xC2E4E9: {
        Instruction step(cpu, 0xBD, 0x000045u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:410 LDX CURRENT_TARGET
    case 0xC2E4EC: {
        Instruction step(cpu, 0xAE, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:411 CMP a:battler::sprite_y,X
    case 0xC2E4EF: {
        Instruction step(cpu, 0xDD, 0x000045u, 3u, AddressMode::AbsoluteIndexedX);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:412 BNE @UNKNOWN17
    case 0xC2E4F2: {
        Instruction step(cpu, 0xD0, 0x00002Fu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:413 LDX @VIRTUAL02
    case 0xC2E4F4: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:414 REP #PROC_FLAGS::ACCUM8
    case 0xC2E4F6: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:415 LDA a:battler::sprite,X
    case 0xC2E4F8: {
        Instruction step(cpu, 0xBD, 0x000002u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:416 JSR GET_BATTLE_SPRITE_HEIGHT
    case 0xC2E4FB: {
        Instruction step(cpu, 0x20, 0x00EF6Bu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:417 CMP #8
    case 0xC2E4FE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:417 CMP #8
    // Overlapping static entry reached from 0xC2E4FE.
    case 0xC2E500: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:418 BNE @UNKNOWN16
    case 0xC2E501: {
        Instruction step(cpu, 0xD0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:419 LDY #1
    case 0xC2E503: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:419 LDY #1
    // Overlapping static entry reached from 0xC2E503.
    case 0xC2E505: {
        Instruction step(cpu, 0x00, 0x000084u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:420 STY @LOCAL04
    case 0xC2E506: {
        Instruction step(cpu, 0x84, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:422 SEP #PROC_FLAGS::ACCUM8
    case 0xC2E508: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:423 LDA #1
    case 0xC2E50A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x00A601u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:424 LDX @VIRTUAL02
    case 0xC2E50C: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:424 LDX @VIRTUAL02
    // Overlapping static entry reached from 0xC2E50A.
    case 0xC2E50D: {
        Instruction step(cpu, 0x02, 0x00009Du, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:425 STA a:battler::use_alt_spritemap,X
    case 0xC2E50E: {
        Instruction step(cpu, 0x9D, 0x00004Bu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:426 LDX @VIRTUAL02
    case 0xC2E511: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:427 REP #PROC_FLAGS::ACCUM8
    case 0xC2E513: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:428 LDA a:battler::vram_sprite_index,X
    case 0xC2E515: {
        Instruction step(cpu, 0xBD, 0x000043u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:429 AND #$00FF
    case 0xC2E518: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:429 AND #$00FF
    // Overlapping static entry reached from 0xC2E518.
    case 0xC2E51A: {
        Instruction step(cpu, 0x00, 0x00000Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:430 ASL
    case 0xC2E51B: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:431 TAX
    case 0xC2E51C: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:432 LDA #1
    case 0xC2E51D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:432 LDA #1
    // Overlapping static entry reached from 0xC2E51D.
    case 0xC2E51F: {
        Instruction step(cpu, 0x00, 0x00009Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:433 STA PSI_ANIMATION_ENEMY_TARGETS,X
    case 0xC2E520: {
        Instruction step(cpu, 0x9D, 0x00B0BCu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:435 REP #PROC_FLAGS::ACCUM8
    case 0xC2E523: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:436 LDA @VIRTUAL02
    case 0xC2E525: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:437 CLC
    case 0xC2E527: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:438 ADC #.SIZEOF(battler)
    case 0xC2E528: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:438 ADC #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2E528.
    case 0xC2E52A: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:439 STA @VIRTUAL02
    case 0xC2E52B: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:440 LDX @LOCAL03
    case 0xC2E52D: {
        Instruction step(cpu, 0xA6, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:441 INX
    case 0xC2E52F: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:442 STX @LOCAL03
    case 0xC2E530: {
        Instruction step(cpu, 0x86, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:444 CPX #32
    case 0xC2E532: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:444 CPX #32
    // Overlapping static entry reached from 0xC2E532.
    case 0xC2E534: {
        Instruction step(cpu, 0x00, 0x0000B0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:784 BCS :+
    // Macro caller: src/battle/show_psi_animation-jp.asm:445 BCCL @UNKNOWN15
    case 0xC2E535: {
        Instruction step(cpu, 0xB0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/battle/show_psi_animation-jp.asm:445 BCCL @UNKNOWN15
    case 0xC2E537: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:786 JMP dest
    // Macro caller: src/battle/show_psi_animation-jp.asm:445 BCCL @UNKNOWN15
    case 0xC2E539: {
        Instruction step(cpu, 0x4C, 0x00E4C1u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:446 LDY @LOCAL04
    case 0xC2E53C: {
        Instruction step(cpu, 0xA4, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:447 BEQ @UNKNOWN24
    case 0xC2E53E: {
        Instruction step(cpu, 0xF0, 0x000061u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:448 LDA PSI_ANIMATION_Y_OFFSET
    case 0xC2E540: {
        Instruction step(cpu, 0xAD, 0x00AF71u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:449 CLC
    case 0xC2E543: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:450 ADC #16
    case 0xC2E544: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:450 ADC #16
    // Overlapping static entry reached from 0xC2E544.
    case 0xC2E546: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:451 STA PSI_ANIMATION_Y_OFFSET
    case 0xC2E547: {
        Instruction step(cpu, 0x8D, 0x00AF71u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:452 BRA @UNKNOWN24
    case 0xC2E54A: {
        Instruction step(cpu, 0x80, 0x000055u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:454 LDA #16
    case 0xC2E54C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:454 LDA #16
    // Overlapping static entry reached from 0xC2E54C.
    case 0xC2E54E: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:455 STA PSI_ANIMATION_Y_OFFSET
    case 0xC2E54F: {
        Instruction step(cpu, 0x8D, 0x00AF71u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:456 LDY #.LOWORD(BATTLERS_TABLE) + .SIZEOF(battler) * 8
    case 0xC2E552: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00001Eu : 0x00A41Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:456 LDY #.LOWORD(BATTLERS_TABLE) + .SIZEOF(battler) * 8
    // Overlapping static entry reached from 0xC2E552.
    case 0xC2E554: {
        Instruction step(cpu, 0xA4, 0x0000A2u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:457 LDX #8
    case 0xC2E555: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:457 LDX #8
    // Overlapping static entry reached from 0xC2E554.
    case 0xC2E556: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:457 LDX #8
    // Overlapping static entry reached from 0xC2E555.
    case 0xC2E557: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:458 STX @LOCAL02
    case 0xC2E558: {
        Instruction step(cpu, 0x86, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:459 BRA @UNKNOWN23
    case 0xC2E55A: {
        Instruction step(cpu, 0x80, 0x000040u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:461 LDA a:battler::consciousness,Y
    case 0xC2E55C: {
        Instruction step(cpu, 0xB9, 0x00000Cu, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:462 AND #$00FF
    case 0xC2E55F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:462 AND #$00FF
    // Overlapping static entry reached from 0xC2E55F.
    case 0xC2E561: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:463 BEQ @UNKNOWN22
    case 0xC2E562: {
        Instruction step(cpu, 0xF0, 0x00002Du, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:464 LDA a:battler::ally_or_enemy,Y
    case 0xC2E564: {
        Instruction step(cpu, 0xB9, 0x00000Eu, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:465 AND #$00FF
    case 0xC2E567: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:465 AND #$00FF
    // Overlapping static entry reached from 0xC2E567.
    case 0xC2E569: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:466 CMP #1
    case 0xC2E56A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:466 CMP #1
    // Overlapping static entry reached from 0xC2E56A.
    case 0xC2E56C: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:467 BNE @UNKNOWN22
    case 0xC2E56D: {
        Instruction step(cpu, 0xD0, 0x000022u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:468 LDA a:battler::afflictions + STATUS_GROUP::PERSISTENT_EASYHEAL,Y
    case 0xC2E56F: {
        Instruction step(cpu, 0xB9, 0x00001Du, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:469 AND #$00FF
    case 0xC2E572: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:469 AND #$00FF
    // Overlapping static entry reached from 0xC2E572.
    case 0xC2E574: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:470 CMP #1
    case 0xC2E575: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:470 CMP #1
    // Overlapping static entry reached from 0xC2E575.
    case 0xC2E577: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:471 BEQ @UNKNOWN22
    case 0xC2E578: {
        Instruction step(cpu, 0xF0, 0x000017u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:472 SEP #PROC_FLAGS::ACCUM8
    case 0xC2E57A: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:473 LDA #1
    case 0xC2E57C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x009901u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:474 STA a:battler::use_alt_spritemap,Y
    case 0xC2E57E: {
        Instruction step(cpu, 0x99, 0x00004Bu, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:474 STA a:battler::use_alt_spritemap,Y
    // Overlapping static entry reached from 0xC2E57C.
    case 0xC2E57F: {
        Instruction step(cpu, 0x4B, 0x000000u, 1u, AddressMode::Implied);
        step.push_program_bank();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:474 STA a:battler::use_alt_spritemap,Y
    // Overlapping static entry reached from 0xC2E57F.
    case 0xC2E580: {
        Instruction step(cpu, 0x00, 0x0000C2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:475 REP #PROC_FLAGS::ACCUM8
    case 0xC2E581: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:476 LDA a:battler::vram_sprite_index,Y
    case 0xC2E583: {
        Instruction step(cpu, 0xB9, 0x000043u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:477 AND #$00FF
    case 0xC2E586: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:477 AND #$00FF
    // Overlapping static entry reached from 0xC2E586.
    case 0xC2E588: {
        Instruction step(cpu, 0x00, 0x00000Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:478 ASL
    case 0xC2E589: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:479 TAX
    case 0xC2E58A: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:480 LDA #1
    case 0xC2E58B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:480 LDA #1
    // Overlapping static entry reached from 0xC2E58B.
    case 0xC2E58D: {
        Instruction step(cpu, 0x00, 0x00009Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:481 STA PSI_ANIMATION_ENEMY_TARGETS,X
    case 0xC2E58E: {
        Instruction step(cpu, 0x9D, 0x00B0BCu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:483 TYA
    case 0xC2E591: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:484 CLC
    case 0xC2E592: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:485 ADC #.SIZEOF(battler)
    case 0xC2E593: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:485 ADC #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2E593.
    case 0xC2E595: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:486 TAY
    case 0xC2E596: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:487 LDX @LOCAL02
    case 0xC2E597: {
        Instruction step(cpu, 0xA6, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:488 INX
    case 0xC2E599: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:489 STX @LOCAL02
    case 0xC2E59A: {
        Instruction step(cpu, 0x86, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:491 CPX #32
    case 0xC2E59C: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:491 CPX #32
    // Overlapping static entry reached from 0xC2E59C.
    case 0xC2E59E: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:492 BCC @UNKNOWN21
    case 0xC2E59F: {
        Instruction step(cpu, 0x90, 0x0000BBu, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:494 LDA LOADED_BG_DATA_LAYER1 + loaded_bg_data::bitdepth
    case 0xC2E5A1: {
        Instruction step(cpu, 0xAD, 0x00AFAAu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:495 AND #$00FF
    case 0xC2E5A4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:495 AND #$00FF
    // Overlapping static entry reached from 0xC2E5A4.
    case 0xC2E5A6: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:496 CMP #2
    case 0xC2E5A7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:496 CMP #2
    // Overlapping static entry reached from 0xC2E5A7.
    case 0xC2E5A9: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:497 BNE @UNKNOWN25
    case 0xC2E5AA: {
        Instruction step(cpu, 0xD0, 0x00000Eu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:498 LDA PSI_ANIMATION_X_OFFSET
    case 0xC2E5AC: {
        Instruction step(cpu, 0xAD, 0x00AF6Fu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:499 STA BG2_X_POS
    case 0xC2E5AF: {
        Instruction step(cpu, 0x8D, 0x000035u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:500 LDA PSI_ANIMATION_Y_OFFSET
    case 0xC2E5B2: {
        Instruction step(cpu, 0xAD, 0x00AF71u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:501 STA BG2_Y_POS
    case 0xC2E5B5: {
        Instruction step(cpu, 0x8D, 0x000037u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:502 BRA @UNKNOWN26
    case 0xC2E5B8: {
        Instruction step(cpu, 0x80, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:504 LDA PSI_ANIMATION_X_OFFSET
    case 0xC2E5BA: {
        Instruction step(cpu, 0xAD, 0x00AF6Fu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:505 STA BG1_X_POS
    case 0xC2E5BD: {
        Instruction step(cpu, 0x8D, 0x000031u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:506 LDA PSI_ANIMATION_Y_OFFSET
    case 0xC2E5C0: {
        Instruction step(cpu, 0xAD, 0x00AF71u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/show_psi_animation-jp.asm:507 STA BG1_Y_POS
    case 0xC2E5C3: {
        Instruction step(cpu, 0x8D, 0x000033u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/show_psi_animation-jp.asm:509 END_C_FUNCTION
    case 0xC2E5C6: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/show_psi_animation-jp.asm:509 END_C_FUNCTION
    case 0xC2E5C7: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
